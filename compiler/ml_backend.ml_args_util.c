/*
** Automatically generated from `ml_args_util.m'
** by the Mercury compiler,
** version rotd-2024-07-20
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


// :- module ml_backend.ml_args_util.
// :- implementation.

/*
INIT mercury__ml_backend__ml_args_util__init
ENDINIT
*/

#include "ml_backend.ml_args_util.mih"


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
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_top_functor.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
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
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_accurate_gc.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_args_util__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_1;

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_2;

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_ordinal_ordered_copy_out_when_0[3];

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_name_ordered_copy_out_when_0[3];

static const MR_Integer ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_copy_out_when_0[3];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_args_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_ml_call_arg_0_0[1];

static const MR_DuFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_ml_call_arg_0_0;

static const MR_PseudoTypeInfo ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_ml_call_arg_0_1[3];

static const MR_DuFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_ml_call_arg_0_1;

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_ml_call_arg_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_ml_call_arg_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_args_util__ml_backend__ml_args_util__du_ptag_ordered_ml_call_arg_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_name_ordered_ml_call_arg_0[2];

static const MR_Integer ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_ml_call_arg_0[2];

static const MR_PseudoTypeInfo ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_var_mvar_type_mode_0_0[4];

static const MR_DuArgLocn ml_backend__ml_args_util__ml_backend__ml_args_util__field_locns_var_mvar_type_mode_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_var_mvar_type_mode_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_var_mvar_type_mode_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_args_util__ml_backend__ml_args_util__du_ptag_ordered_var_mvar_type_mode_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_name_ordered_var_mvar_type_mode_0[1];

static const MR_Integer ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_var_mvar_type_mode_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_what_params_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_what_params_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_ordinal_ordered_what_params_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_name_ordered_what_params_0[2];

static const MR_Integer ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_what_params_0[2];

static MR_bool MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__pred__ml_gen_proc_params_inputs_only_no_gc_stmts__567__1_2_p_0(
  MR_Word RetTypes_11,
  MR_Word HeadVar__2_21);

static void MR_CALL 
ml_backend__ml_args_util__ml_gen_args_loop_13_p_1(
  MR_Word CopyOutWhen_14,
  MR_Word Context_15,
  MR_Word WhatParams_16,
  MR_Integer ArgNum_17,
  MR_Word CalleeTypes_18,
  MR_Word CalleeModes_19,
  MR_Word CallerArgs_20,
  MR_Word * STATE_VARIABLE_InputRvals_32,
  MR_Word * STATE_VARIABLE_OutputLvalsTypes_33,
  MR_Word * STATE_VARIABLE_ConvOutputDefns_34,
  MR_Word * STATE_VARIABLE_ConvOutputStmts_35,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static void MR_CALL 
ml_backend__ml_args_util__ml_gen_args_loop_13_p_0(
  MR_Word CopyOutWhen_14,
  MR_Word Context_15,
  MR_Word WhatParams_16,
  MR_Integer ArgNum_17,
  MR_Word CalleeTypes_18,
  MR_Word CalleeModes_19,
  MR_Word CallerArgs_20,
  MR_Word * STATE_VARIABLE_InputRvals_32,
  MR_Word * STATE_VARIABLE_OutputLvalsTypes_33,
  MR_Word * STATE_VARIABLE_ConvOutputDefns_34,
  MR_Word * STATE_VARIABLE_ConvOutputStmts_35,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static void MR_CALL 
ml_backend__ml_args_util__ml_gen_tscc_arg_decls_19_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Integer HeadVar__6_6,
  MR_Integer HeadVar__7_7,
  MR_Word STATE_VARIABLE_OutArgNames_0_8,
  MR_Word * STATE_VARIABLE_OutArgNames_9,
  MR_Word * HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word * HeadVar__12_12,
  MR_Word * HeadVar__13_13,
  MR_Word * HeadVar__14_14,
  MR_Word * HeadVar__15_15,
  MR_Word * HeadVar__16_16,
  MR_Word * HeadVar__17_17,
  MR_Word * HeadVar__18_18,
  MR_Word * HeadVar__19_19);

static void MR_CALL 
ml_backend__ml_args_util__package_vars_mvars_types_modes_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Vars_8,
  MR_Word MLDSVarNames_9,
  MR_Word Types_10,
  MR_Word Modes_11,
  MR_Word * ArgTuples_12);

static void MR_CALL 
ml_backend__ml_args_util__package_rtti_vars_types_topmodes_4_p_0(
  MR_Word VarPairs_5,
  MR_Word Types_6,
  MR_Word TopFunctorModes_7,
  MR_Word * ArgTuples_8);

static MR_bool MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_inputs_only_no_gc_stmts_2_f_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_50_44_32_51_93_95_48_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_MaybeInfo_0_9,
  MR_Word * STATE_VARIABLE_MaybeInfo_10);

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_50_10_p_2(
  MR_Word ModuleInfo_1,
  MR_Word CopyOutWhen_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_MaybeInfo_0_9,
  MR_Word * STATE_VARIABLE_MaybeInfo_10);

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(
  MR_Word ModuleInfo_11,
  MR_Word PredOrFunc_12,
  MR_Word CodeModel_13,
  MR_Word ArgTuples_15,
  MR_Word * FuncParams_16,
  MR_Word * ByRefOutputVars_17,
  MR_Word * CopiedOutputVars_18,
  MR_Word STATE_VARIABLE_MaybeInfo_0_33,
  MR_Word * STATE_VARIABLE_MaybeInfo_34);

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_49_10_p_1(
  MR_Word ModuleInfo_1,
  MR_Word CopyOutWhen_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_MaybeInfo_0_9,
  MR_Word * STATE_VARIABLE_MaybeInfo_10);

static void MR_CALL 
ml_backend__ml_args_util__package_vars_types_modes_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarTable_8,
  MR_Word Vars_9,
  MR_Word Types_10,
  MR_Word Modes_11,
  MR_Word * ArgTuples_12);

static MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____copy_out_when_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_args_util____Compare____copy_out_when_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____ml_call_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_args_util____Compare____ml_call_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____var_mvar_type_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_args_util____Compare____var_mvar_type_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____what_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_args_util____Compare____what_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_1[11][2];

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_2[5][3];

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_3[3][1];

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_4[1][5];




static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_1[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_args_util_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_args_util_scalar_common_3[0])))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_args_util_scalar_common_3[1]))),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 36U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 40U))
  },
  /* row   9 */
  {
    ((MR_Box) (&ml_backend__ml_args_util_scalar_common_2[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_args_util_scalar_common_3[2])))
  },
};

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_args_util_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_args_util_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_3[3][1] = {
  /* row   0 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__ml_args_util_scalar_common_2[2]))) },
  /* row   1 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__ml_args_util_scalar_common_2[3]))) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_args_util__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_args_util__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_args_util__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0) }
};

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_0 = {
  (MR_String) "copy_out_never",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_1 = {
  (MR_String) "copy_out_only_last_arg",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_2 = {
  (MR_String) "copy_out_always",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_ordinal_ordered_copy_out_when_0[3] = {
  &ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_0,
  &ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_1,
  &ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_2
};

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_name_ordered_copy_out_when_0[3] = {
  &ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_2,
  &ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_0,
  &ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_1
};

static const MR_Integer ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_copy_out_when_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_copy_out_when_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_args_util____Unify____copy_out_when_0_0_10001)),
  ((MR_Box) (ml_backend__ml_args_util____Compare____copy_out_when_0_0_10001)),
  (MR_String) "ml_backend.ml_args_util",
  (MR_String) "copy_out_when",
  { ml_backend__ml_args_util__ml_backend__ml_args_util__enum_name_ordered_copy_out_when_0 },
  { ml_backend__ml_args_util__ml_backend__ml_args_util__enum_ordinal_ordered_copy_out_when_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_copy_out_when_0,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_args_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_ml_call_arg_0_0[1] = { (MR_PseudoTypeInfo) (&ml_backend__ml_args_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_ml_call_arg_0_0 = {
  (MR_String) "arg_not_for_closure_wrapper",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_ml_call_arg_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_ml_call_arg_0_1[3] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_ml_call_arg_0_1 = {
  (MR_String) "arg_for_closure_wrapper",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_ml_call_arg_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_ml_call_arg_0_0[1] = { &ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_ml_call_arg_0_0 };

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_ml_call_arg_0_1[1] = { &ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_ml_call_arg_0_1 };

static const MR_DuPtagLayout ml_backend__ml_args_util__ml_backend__ml_args_util__du_ptag_ordered_ml_call_arg_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_ml_call_arg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_ml_call_arg_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_name_ordered_ml_call_arg_0[2] = {
  &ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_ml_call_arg_0_1,
  &ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_ml_call_arg_0_0
};

static const MR_Integer ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_ml_call_arg_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_ml_call_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_args_util____Unify____ml_call_arg_0_0_10001)),
  ((MR_Box) (ml_backend__ml_args_util____Compare____ml_call_arg_0_0_10001)),
  (MR_String) "ml_backend.ml_args_util",
  (MR_String) "ml_call_arg",
  { ml_backend__ml_args_util__ml_backend__ml_args_util__du_name_ordered_ml_call_arg_0 },
  { ml_backend__ml_args_util__ml_backend__ml_args_util__du_ptag_ordered_ml_call_arg_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_ml_call_arg_0,

};

static const MR_PseudoTypeInfo ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_var_mvar_type_mode_0_0[4] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_args_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_top_functor_mode_0)
};

static const MR_DuArgLocn ml_backend__ml_args_util__ml_backend__ml_args_util__field_locns_var_mvar_type_mode_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_var_mvar_type_mode_0_0 = {
  (MR_String) "var_mvar_type_mode",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_var_mvar_type_mode_0_0,
  NULL,
  ml_backend__ml_args_util__ml_backend__ml_args_util__field_locns_var_mvar_type_mode_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_var_mvar_type_mode_0_0[1] = { &ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_var_mvar_type_mode_0_0 };

static const MR_DuPtagLayout ml_backend__ml_args_util__ml_backend__ml_args_util__du_ptag_ordered_var_mvar_type_mode_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_var_mvar_type_mode_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_name_ordered_var_mvar_type_mode_0[1] = { &ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_var_mvar_type_mode_0_0 };

static const MR_Integer ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_var_mvar_type_mode_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_args_util____Unify____var_mvar_type_mode_0_0_10001)),
  ((MR_Box) (ml_backend__ml_args_util____Compare____var_mvar_type_mode_0_0_10001)),
  (MR_String) "ml_backend.ml_args_util",
  (MR_String) "var_mvar_type_mode",
  { ml_backend__ml_args_util__ml_backend__ml_args_util__du_name_ordered_var_mvar_type_mode_0 },
  { ml_backend__ml_args_util__ml_backend__ml_args_util__du_ptag_ordered_var_mvar_type_mode_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_var_mvar_type_mode_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_what_params_0_0 = {
  (MR_String) "input_params_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_what_params_0_1 = {
  (MR_String) "input_and_output_params",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_ordinal_ordered_what_params_0[2] = {
  &ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_what_params_0_0,
  &ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_what_params_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_name_ordered_what_params_0[2] = {
  &ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_what_params_0_1,
  &ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_what_params_0_0
};

static const MR_Integer ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_what_params_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_what_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_args_util____Unify____what_params_0_0_10001)),
  ((MR_Box) (ml_backend__ml_args_util____Compare____what_params_0_0_10001)),
  (MR_String) "ml_backend.ml_args_util",
  (MR_String) "what_params",
  { ml_backend__ml_args_util__ml_backend__ml_args_util__enum_name_ordered_what_params_0 },
  { ml_backend__ml_args_util__ml_backend__ml_args_util__enum_ordinal_ordered_what_params_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_what_params_0,

};

static MR_bool MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__pred__ml_gen_proc_params_inputs_only_no_gc_stmts__567__1_2_p_0(
  MR_Word RetTypes_11,
  MR_Word HeadVar__2_21)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_args_util_scalar_common_1[0]), ((MR_Box) (RetTypes_11)), ((MR_Box) (HeadVar__2_21)));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_args_util____Compare____what_params_0_0(
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
ml_backend__ml_args_util____Unify____what_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__ml_args_util____Compare____var_mvar_type_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_args_util_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      ml_backend__mlds____Compare____mlds_local_var_name_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__prog_data____Compare____mer_type_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Integer Var_21 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_22 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_21 < Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_21 > Var_22);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____var_mvar_type_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 3);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_args_util_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_args_util____Compare____ml_call_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_8;

      ml_backend__mlds____Compare____mlds_local_var_name_0_0(&SubResult1_8, ArgX1_6, ArgY1_7);
      succeeded = (SubResult1_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
      {
        MR_Word SubResult2_11;

        ml_backend__mlds____Compare____mlds_lval_0_0(&SubResult2_11, ArgX2_9, ArgY2_10);
        succeeded = (SubResult2_11 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_11;
        else
          parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX3_12, ArgY3_13);
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_args_util_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____ml_call_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ArgX2_7, ArgY2_8);
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_9, ArgY3_10);
      }
    }
  }
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_16_16 = (MR_Word) (&ml_backend__ml_args_util_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_args_util____Compare____copy_out_when_0_0(
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
ml_backend__ml_args_util____Unify____copy_out_when_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__ml_args_util__ml_gen_args_13_p_1(
  MR_Word PredOrFunc_14,
  MR_Word CodeModel_15,
  MR_Word Context_16,
  MR_Word WhatParams_17,
  MR_Word CalleeTypes_18,
  MR_Word CalleeModes_19,
  MR_Word CallerArgs_20,
  MR_Word * STATE_VARIABLE_InputRvals_28,
  MR_Word * STATE_VARIABLE_OutputLvalsTypes_29,
  MR_Word * STATE_VARIABLE_ConvOutputDefns_30,
  MR_Word * STATE_VARIABLE_ConvOutputStmts_31,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  MR_bool succeeded;
  MR_Word CopyOut_26;
  MR_Word CopyOutWhen_27;

  ml_backend__ml_gen_info__ml_gen_info_get_copy_out_3_p_0(STATE_VARIABLE_Info_0_32, CodeModel_15, &CopyOut_26);
  switch (CopyOut_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        succeeded = (CodeModel_15 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (PredOrFunc_14 == (MR_Integer) 1);
        if (succeeded)
          CopyOutWhen_27 = (MR_Integer) 1;
        else
          CopyOutWhen_27 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      CopyOutWhen_27 = (MR_Integer) 2;
      break;
  }
  ml_backend__ml_args_util__ml_gen_args_loop_13_p_1(CopyOutWhen_27, Context_16, WhatParams_17, (MR_Integer) 1, CalleeTypes_18, CalleeModes_19, CallerArgs_20, STATE_VARIABLE_InputRvals_28, STATE_VARIABLE_OutputLvalsTypes_29, STATE_VARIABLE_ConvOutputDefns_30, STATE_VARIABLE_ConvOutputStmts_31, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
}

static void MR_CALL 
ml_backend__ml_args_util__ml_gen_args_loop_13_p_1(
  MR_Word CopyOutWhen_14,
  MR_Word Context_15,
  MR_Word WhatParams_16,
  MR_Integer ArgNum_17,
  MR_Word CalleeTypes_18,
  MR_Word CalleeModes_19,
  MR_Word CallerArgs_20,
  MR_Word * STATE_VARIABLE_InputRvals_32,
  MR_Word * STATE_VARIABLE_OutputLvalsTypes_33,
  MR_Word * STATE_VARIABLE_ConvOutputDefns_34,
  MR_Word * STATE_VARIABLE_ConvOutputStmts_35,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  MR_bool succeeded = (CalleeTypes_18 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
    succeeded = (CalleeModes_19 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (CallerArgs_20 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    *STATE_VARIABLE_InputRvals_32 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_OutputLvalsTypes_33 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ConvOutputDefns_34 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ConvOutputStmts_35 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_0_36;
  }
  else
  {
    MR_Word CalleeType_26;
    MR_Word CalleeTypesTail_27;
    MR_Word CalleeMode_28;
    MR_Word CalleeModesTail_29;
    MR_Word CallerArg_30;
    MR_Word CallerArgsTail_31;

    succeeded = (CalleeTypes_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      CalleeType_26 = ((MR_Word) ((MR_hl_field(1, CalleeTypes_18, (MR_Integer) 0))));
      CalleeTypesTail_27 = ((MR_Word) ((MR_hl_field(1, CalleeTypes_18, (MR_Integer) 1))));
      succeeded = (CalleeModes_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        CalleeMode_28 = ((MR_Word) ((MR_hl_field(1, CalleeModes_19, (MR_Integer) 0))));
        CalleeModesTail_29 = ((MR_Word) ((MR_hl_field(1, CalleeModes_19, (MR_Integer) 1))));
        succeeded = (CallerArgs_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          CallerArg_30 = ((MR_Word) ((MR_hl_field(1, CallerArgs_20, (MR_Integer) 0))));
          CallerArgsTail_31 = ((MR_Word) ((MR_hl_field(1, CallerArgs_20, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Integer Var_42 = (MR_Integer) ((MR_Unsigned) ArgNum_17 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_InputRvals_43_43;
      MR_Word STATE_VARIABLE_OutputLvalsTypes_44_44;
      MR_Word STATE_VARIABLE_ConvOutputDefns_45_45;
      MR_Word STATE_VARIABLE_ConvOutputStmts_46_46;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word ModuleInfo_56;
      MR_Word CalleeArgTopFunctorMode_57;
      MR_Word CalleeIsDummy_58;

      ml_backend__ml_args_util__ml_gen_args_loop_13_p_1(CopyOutWhen_14, Context_15, WhatParams_16, Var_42, CalleeTypesTail_27, CalleeModesTail_29, CallerArgsTail_31, &STATE_VARIABLE_InputRvals_43_43, &STATE_VARIABLE_OutputLvalsTypes_44_44, &STATE_VARIABLE_ConvOutputDefns_45_45, &STATE_VARIABLE_ConvOutputStmts_46_46, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_47_47);
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_47_47, &ModuleInfo_56);
      check_hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_56, CalleeMode_28, CalleeType_26, &CalleeArgTopFunctorMode_57);
      CalleeIsDummy_58 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_56, CalleeType_26);
      switch (CalleeIsDummy_58) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_InputRvals_32 = STATE_VARIABLE_InputRvals_43_43;
            *STATE_VARIABLE_OutputLvalsTypes_33 = STATE_VARIABLE_OutputLvalsTypes_44_44;
            *STATE_VARIABLE_ConvOutputDefns_34 = STATE_VARIABLE_ConvOutputDefns_45_45;
            *STATE_VARIABLE_ConvOutputStmts_35 = STATE_VARIABLE_ConvOutputStmts_46_46;
            *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_47_47;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CallerMLDSVarName_62 = ((MR_Word) ((MR_hl_field(1, CallerArg_30, (MR_Integer) 0))));
            MR_Word CallerVarLval_63 = ((MR_Word) ((MR_hl_field(1, CallerArg_30, (MR_Integer) 1))));
            MR_Word CallerType_64 = ((MR_Word) ((MR_hl_field(1, CallerArg_30, (MR_Integer) 2))));

            switch (CalleeArgTopFunctorMode_57) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CallerIsDummy_66;
                  MR_Word CallerVarRval_67;
                  MR_Word ArgRval_68;

                  CallerIsDummy_66 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_56, CallerType_64);
                  switch (CallerIsDummy_66) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      CallerVarRval_67 = (MR_Word) (MR_mkword(3, &ml_backend__ml_args_util_scalar_common_1[10]));
                      break;
                    case (MR_Integer) 1:
                      {
                        CallerVarRval_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, CallerVarRval_67, 0) = ((MR_Box) (CallerVarLval_63));
                      }
                      break;
                  }
                  ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_56, CallerType_64, CalleeType_26, (MR_Integer) 0, CallerVarRval_67, &ArgRval_68);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_InputRvals_32 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ArgRval_68));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InputRvals_43_43));
                  }
                  *STATE_VARIABLE_OutputLvalsTypes_33 = STATE_VARIABLE_OutputLvalsTypes_44_44;
                  *STATE_VARIABLE_ConvOutputDefns_34 = STATE_VARIABLE_ConvOutputDefns_45_45;
                  *STATE_VARIABLE_ConvOutputStmts_35 = STATE_VARIABLE_ConvOutputStmts_46_46;
                  *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_47_47;
                }
                break;
              case (MR_Integer) 1:
                switch (WhatParams_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgLval_69;
                      MR_Word ThisArgConvDecls_70;
                      MR_Word ThisArgConvOutput_72;
                      MR_Word _ThisArgConvInput_71;

                      ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(CallerType_64, CalleeType_26, (MR_Integer) 0, CallerVarLval_63, CallerMLDSVarName_62, Context_15, (MR_Integer) 1, ArgNum_17, &ArgLval_69, &ThisArgConvDecls_70, &_ThisArgConvInput_71, &ThisArgConvOutput_72, STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_37);
                      *STATE_VARIABLE_ConvOutputDefns_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), ThisArgConvDecls_70, STATE_VARIABLE_ConvOutputDefns_45_45);
                      *STATE_VARIABLE_ConvOutputStmts_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ThisArgConvOutput_72, STATE_VARIABLE_ConvOutputStmts_46_46);
                      switch (CopyOutWhen_14) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 2:
                          succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 1:
                          succeeded = (CallerArgsTail_31 == (MR_Word) ((MR_Unsigned) 0U));
                          break;
                      }
                      if (succeeded)
                      {
                        MR_Word OutputType_73;
                        MR_Word Var_78;

                        ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(*STATE_VARIABLE_Info_37, CalleeType_26, &OutputType_73);
                        {
                          Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_78, 0) = ((MR_Box) (ArgLval_69));
                          MR_hl_field(0, Var_78, 1) = ((MR_Box) (OutputType_73));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_OutputLvalsTypes_33 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (Var_78));
                          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OutputLvalsTypes_44_44));
                        }
                        *STATE_VARIABLE_InputRvals_32 = STATE_VARIABLE_InputRvals_43_43;
                      }
                      else
                      {
                        MR_Word Var_79;
                        MR_Word Rval_84;

                        succeeded = ((MR_tag((MR_Word) ArgLval_69)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          Rval_84 = ((MR_Word) ((MR_hl_field(1, ArgLval_69, (MR_Integer) 0))));
                          Var_79 = Rval_84;
                        }
                        else
                          {
                            Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                            MR_hl_field(3, Var_79, 1) = ((MR_Box) (ArgLval_69));
                          }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_InputRvals_32 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (Var_79));
                          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InputRvals_43_43));
                        }
                        *STATE_VARIABLE_OutputLvalsTypes_33 = STATE_VARIABLE_OutputLvalsTypes_44_44;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      *STATE_VARIABLE_InputRvals_32 = STATE_VARIABLE_InputRvals_43_43;
                      *STATE_VARIABLE_OutputLvalsTypes_33 = STATE_VARIABLE_OutputLvalsTypes_44_44;
                      *STATE_VARIABLE_ConvOutputDefns_34 = STATE_VARIABLE_ConvOutputDefns_45_45;
                      *STATE_VARIABLE_ConvOutputStmts_35 = STATE_VARIABLE_ConvOutputStmts_46_46;
                      *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_47_47;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  *STATE_VARIABLE_InputRvals_32 = STATE_VARIABLE_InputRvals_43_43;
                  *STATE_VARIABLE_OutputLvalsTypes_33 = STATE_VARIABLE_OutputLvalsTypes_44_44;
                  *STATE_VARIABLE_ConvOutputDefns_34 = STATE_VARIABLE_ConvOutputDefns_45_45;
                  *STATE_VARIABLE_ConvOutputStmts_35 = STATE_VARIABLE_ConvOutputStmts_46_46;
                  *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_47_47;
                }
                break;
            }
          }
          break;
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.ml_gen_args_loop\'/13", (MR_String) "length mismatch");
        return;
      }
  }
}

void MR_CALL 
ml_backend__ml_args_util__ml_gen_args_13_p_0(
  MR_Word PredOrFunc_14,
  MR_Word CodeModel_15,
  MR_Word Context_16,
  MR_Word WhatParams_17,
  MR_Word CalleeTypes_18,
  MR_Word CalleeModes_19,
  MR_Word CallerArgs_20,
  MR_Word * STATE_VARIABLE_InputRvals_28,
  MR_Word * STATE_VARIABLE_OutputLvalsTypes_29,
  MR_Word * STATE_VARIABLE_ConvOutputDefns_30,
  MR_Word * STATE_VARIABLE_ConvOutputStmts_31,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  MR_bool succeeded;
  MR_Word CopyOut_26;
  MR_Word CopyOutWhen_27;

  ml_backend__ml_gen_info__ml_gen_info_get_copy_out_3_p_0(STATE_VARIABLE_Info_0_32, CodeModel_15, &CopyOut_26);
  switch (CopyOut_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        succeeded = (CodeModel_15 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (PredOrFunc_14 == (MR_Integer) 1);
        if (succeeded)
          CopyOutWhen_27 = (MR_Integer) 1;
        else
          CopyOutWhen_27 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      CopyOutWhen_27 = (MR_Integer) 2;
      break;
  }
  ml_backend__ml_args_util__ml_gen_args_loop_13_p_0(CopyOutWhen_27, Context_16, WhatParams_17, (MR_Integer) 1, CalleeTypes_18, CalleeModes_19, CallerArgs_20, STATE_VARIABLE_InputRvals_28, STATE_VARIABLE_OutputLvalsTypes_29, STATE_VARIABLE_ConvOutputDefns_30, STATE_VARIABLE_ConvOutputStmts_31, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
}

static void MR_CALL 
ml_backend__ml_args_util__ml_gen_args_loop_13_p_0(
  MR_Word CopyOutWhen_14,
  MR_Word Context_15,
  MR_Word WhatParams_16,
  MR_Integer ArgNum_17,
  MR_Word CalleeTypes_18,
  MR_Word CalleeModes_19,
  MR_Word CallerArgs_20,
  MR_Word * STATE_VARIABLE_InputRvals_32,
  MR_Word * STATE_VARIABLE_OutputLvalsTypes_33,
  MR_Word * STATE_VARIABLE_ConvOutputDefns_34,
  MR_Word * STATE_VARIABLE_ConvOutputStmts_35,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  MR_bool succeeded = (CalleeTypes_18 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
    succeeded = (CalleeModes_19 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (CallerArgs_20 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    *STATE_VARIABLE_InputRvals_32 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_OutputLvalsTypes_33 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ConvOutputDefns_34 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ConvOutputStmts_35 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_0_36;
  }
  else
  {
    MR_Word CalleeType_26;
    MR_Word CalleeTypesTail_27;
    MR_Word CalleeMode_28;
    MR_Word CalleeModesTail_29;
    MR_Word CallerArg_30;
    MR_Word CallerArgsTail_31;

    succeeded = (CalleeTypes_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      CalleeType_26 = ((MR_Word) ((MR_hl_field(1, CalleeTypes_18, (MR_Integer) 0))));
      CalleeTypesTail_27 = ((MR_Word) ((MR_hl_field(1, CalleeTypes_18, (MR_Integer) 1))));
      succeeded = (CalleeModes_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        CalleeMode_28 = ((MR_Word) ((MR_hl_field(1, CalleeModes_19, (MR_Integer) 0))));
        CalleeModesTail_29 = ((MR_Word) ((MR_hl_field(1, CalleeModes_19, (MR_Integer) 1))));
        succeeded = (CallerArgs_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          CallerArg_30 = ((MR_Word) ((MR_hl_field(1, CallerArgs_20, (MR_Integer) 0))));
          CallerArgsTail_31 = ((MR_Word) ((MR_hl_field(1, CallerArgs_20, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Integer Var_42 = (MR_Integer) ((MR_Unsigned) ArgNum_17 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_InputRvals_43_43;
      MR_Word STATE_VARIABLE_OutputLvalsTypes_44_44;
      MR_Word STATE_VARIABLE_ConvOutputDefns_45_45;
      MR_Word STATE_VARIABLE_ConvOutputStmts_46_46;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word ModuleInfo_56;
      MR_Word CalleeArgTopFunctorMode_57;
      MR_Word CalleeIsDummy_58;

      ml_backend__ml_args_util__ml_gen_args_loop_13_p_0(CopyOutWhen_14, Context_15, WhatParams_16, Var_42, CalleeTypesTail_27, CalleeModesTail_29, CallerArgsTail_31, &STATE_VARIABLE_InputRvals_43_43, &STATE_VARIABLE_OutputLvalsTypes_44_44, &STATE_VARIABLE_ConvOutputDefns_45_45, &STATE_VARIABLE_ConvOutputStmts_46_46, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_47_47);
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_47_47, &ModuleInfo_56);
      check_hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_56, CalleeMode_28, CalleeType_26, &CalleeArgTopFunctorMode_57);
      CalleeIsDummy_58 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_56, CalleeType_26);
      switch (CalleeIsDummy_58) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_InputRvals_32 = STATE_VARIABLE_InputRvals_43_43;
            *STATE_VARIABLE_OutputLvalsTypes_33 = STATE_VARIABLE_OutputLvalsTypes_44_44;
            *STATE_VARIABLE_ConvOutputDefns_34 = STATE_VARIABLE_ConvOutputDefns_45_45;
            *STATE_VARIABLE_ConvOutputStmts_35 = STATE_VARIABLE_ConvOutputStmts_46_46;
            *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_47_47;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CallerArgVar_59 = ((MR_Word) ((MR_hl_field(0, CallerArg_30, (MR_Integer) 0))));
            MR_Word VarTable_60;
            MR_Word CallerArgVarEntry_61;
            MR_Word CallerMLDSVarName_62;
            MR_Word CallerVarLval_63;
            MR_Word CallerType_64;

            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_47_47, &VarTable_60);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_60, CallerArgVar_59, &CallerArgVarEntry_61);
            CallerMLDSVarName_62 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(CallerArgVar_59, CallerArgVarEntry_61);
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_47_47, CallerArgVar_59, CallerArgVarEntry_61, &CallerVarLval_63);
            CallerType_64 = ((MR_Word) ((MR_hl_field(0, CallerArgVarEntry_61, (MR_Integer) 1))));
            switch (CalleeArgTopFunctorMode_57) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CallerIsDummy_66;
                  MR_Word CallerVarRval_67;
                  MR_Word ArgRval_68;

                  CallerIsDummy_66 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_56, CallerType_64);
                  switch (CallerIsDummy_66) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      CallerVarRval_67 = (MR_Word) (MR_mkword(3, &ml_backend__ml_args_util_scalar_common_1[10]));
                      break;
                    case (MR_Integer) 1:
                      {
                        CallerVarRval_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, CallerVarRval_67, 0) = ((MR_Box) (CallerVarLval_63));
                      }
                      break;
                  }
                  ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_56, CallerType_64, CalleeType_26, (MR_Integer) 0, CallerVarRval_67, &ArgRval_68);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_InputRvals_32 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ArgRval_68));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InputRvals_43_43));
                  }
                  *STATE_VARIABLE_OutputLvalsTypes_33 = STATE_VARIABLE_OutputLvalsTypes_44_44;
                  *STATE_VARIABLE_ConvOutputDefns_34 = STATE_VARIABLE_ConvOutputDefns_45_45;
                  *STATE_VARIABLE_ConvOutputStmts_35 = STATE_VARIABLE_ConvOutputStmts_46_46;
                  *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_47_47;
                }
                break;
              case (MR_Integer) 1:
                switch (WhatParams_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgLval_69;
                      MR_Word ThisArgConvDecls_70;
                      MR_Word ThisArgConvOutput_72;
                      MR_Word _ThisArgConvInput_71;

                      ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(CallerType_64, CalleeType_26, (MR_Integer) 0, CallerVarLval_63, CallerMLDSVarName_62, Context_15, (MR_Integer) 0, ArgNum_17, &ArgLval_69, &ThisArgConvDecls_70, &_ThisArgConvInput_71, &ThisArgConvOutput_72, STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_37);
                      *STATE_VARIABLE_ConvOutputDefns_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), ThisArgConvDecls_70, STATE_VARIABLE_ConvOutputDefns_45_45);
                      *STATE_VARIABLE_ConvOutputStmts_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ThisArgConvOutput_72, STATE_VARIABLE_ConvOutputStmts_46_46);
                      switch (CopyOutWhen_14) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 2:
                          succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 1:
                          succeeded = (CallerArgsTail_31 == (MR_Word) ((MR_Unsigned) 0U));
                          break;
                      }
                      if (succeeded)
                      {
                        MR_Word OutputType_73;
                        MR_Word Var_78;

                        ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(*STATE_VARIABLE_Info_37, CalleeType_26, &OutputType_73);
                        {
                          Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_78, 0) = ((MR_Box) (ArgLval_69));
                          MR_hl_field(0, Var_78, 1) = ((MR_Box) (OutputType_73));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_OutputLvalsTypes_33 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (Var_78));
                          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OutputLvalsTypes_44_44));
                        }
                        *STATE_VARIABLE_InputRvals_32 = STATE_VARIABLE_InputRvals_43_43;
                      }
                      else
                      {
                        MR_Word Var_79;
                        MR_Word Rval_84;

                        succeeded = ((MR_tag((MR_Word) ArgLval_69)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          Rval_84 = ((MR_Word) ((MR_hl_field(1, ArgLval_69, (MR_Integer) 0))));
                          Var_79 = Rval_84;
                        }
                        else
                          {
                            Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                            MR_hl_field(3, Var_79, 1) = ((MR_Box) (ArgLval_69));
                          }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_InputRvals_32 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (Var_79));
                          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InputRvals_43_43));
                        }
                        *STATE_VARIABLE_OutputLvalsTypes_33 = STATE_VARIABLE_OutputLvalsTypes_44_44;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      *STATE_VARIABLE_InputRvals_32 = STATE_VARIABLE_InputRvals_43_43;
                      *STATE_VARIABLE_OutputLvalsTypes_33 = STATE_VARIABLE_OutputLvalsTypes_44_44;
                      *STATE_VARIABLE_ConvOutputDefns_34 = STATE_VARIABLE_ConvOutputDefns_45_45;
                      *STATE_VARIABLE_ConvOutputStmts_35 = STATE_VARIABLE_ConvOutputStmts_46_46;
                      *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_47_47;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  *STATE_VARIABLE_InputRvals_32 = STATE_VARIABLE_InputRvals_43_43;
                  *STATE_VARIABLE_OutputLvalsTypes_33 = STATE_VARIABLE_OutputLvalsTypes_44_44;
                  *STATE_VARIABLE_ConvOutputDefns_34 = STATE_VARIABLE_ConvOutputDefns_45_45;
                  *STATE_VARIABLE_ConvOutputStmts_35 = STATE_VARIABLE_ConvOutputStmts_46_46;
                  *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_47_47;
                }
                break;
            }
          }
          break;
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.ml_gen_args_loop\'/13", (MR_String) "length mismatch");
        return;
      }
  }
}

MR_Word MR_CALL 
ml_backend__ml_args_util__wrap_plain_not_fcw_args_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_5;
    MR_Word Var_6;

    {
      Var_5 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_5, 0) = ((MR_Box) (Var_3));
    }
    Var_6 = ml_backend__ml_args_util__wrap_plain_not_fcw_args_1_f_0(Vars_4);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_6));
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ml_backend__ml_args_util__wrap_plain_not_fcw_arg_1_f_0(
  MR_Word Var_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_3));
  }
  return HeadVar__2_2;
}

void MR_CALL 
ml_backend__ml_args_util__ml_gen_tscc_arg_params_22_p_0(
  MR_Word ModuleInfo_23,
  MR_Word PredOrFunc_24,
  MR_Word CodeModel_25,
  MR_Word Context_26,
  MR_Word ProcIdInTscc_27,
  MR_Word VarTable_28,
  MR_Word Vars_29,
  MR_Word Types_30,
  MR_Word Modes_31,
  MR_Word * ArgTuples_32,
  MR_Word STATE_VARIABLE_OutArgNames_0_64,
  MR_Word * STATE_VARIABLE_OutArgNames_65,
  MR_Word * TsccInArgs_34,
  MR_Word * FuncParams_35,
  MR_Word * ReturnRvalsTypes_36,
  MR_Word * OutVarsTypes_37,
  MR_Word * OwnLocalVarDefns_38,
  MR_Word * TsccInLocalVarDefns_39,
  MR_Word * TsccOutLocalVarDefns_40,
  MR_Word * CopyTsccInToOwnStmts_41,
  MR_Word * CopyOwnToTsccOutStmts_42,
  MR_Word * CopyOutValThroughPtrStmts_43)
{
  MR_bool succeeded;
  MR_Word Globals_44;
  MR_Word TsccArgs_49;
  MR_Word ReturnTypes_63;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_23, &Globals_44);
  ml_backend__ml_args_util__package_vars_types_modes_6_p_0(ModuleInfo_23, VarTable_28, Vars_29, Types_30, Modes_31, ArgTuples_32);
  switch (CodeModel_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CopyOut_45;
        MR_Word CopyOutWhen_46;
        MR_Word ReturnRvalsTypes0_50;
        MR_Word OutVarsTypes0_51;
        MR_Word TsccOutLocalVarDefns0_52;
        MR_Word CopyOwnToTsccOutStmts0_53;

        libs__globals__lookup_bool_option_3_p_0(Globals_44, (MR_Integer) 331, &CopyOut_45);
        switch (CopyOut_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (CodeModel_25 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (PredOrFunc_24 == (MR_Integer) 1);
              if (succeeded)
                CopyOutWhen_46 = (MR_Integer) 1;
              else
                CopyOutWhen_46 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            CopyOutWhen_46 = (MR_Integer) 2;
            break;
        }
        ml_backend__ml_args_util__ml_gen_tscc_arg_decls_19_p_0(ModuleInfo_23, CopyOutWhen_46, Context_26, ProcIdInTscc_27, *ArgTuples_32, (MR_Integer) 1, (MR_Integer) 1, STATE_VARIABLE_OutArgNames_0_64, STATE_VARIABLE_OutArgNames_65, TsccInArgs_34, &TsccArgs_49, &ReturnRvalsTypes0_50, &OutVarsTypes0_51, OwnLocalVarDefns_38, TsccInLocalVarDefns_39, &TsccOutLocalVarDefns0_52, CopyTsccInToOwnStmts_41, &CopyOwnToTsccOutStmts0_53, CopyOutValThroughPtrStmts_43);
        *ReturnRvalsTypes_36 = ReturnRvalsTypes0_50;
        *OutVarsTypes_37 = OutVarsTypes0_51;
        *TsccOutLocalVarDefns_40 = TsccOutLocalVarDefns0_52;
        *CopyOwnToTsccOutStmts_42 = CopyOwnToTsccOutStmts0_53;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SucceededTsccOutVarDefn_61;
        MR_Word CopySucceededStmt_62;
        MR_Word CopyOut_122;
        MR_Word CopyOutWhen_123;
        MR_Word ReturnRvalsTypes0_124;
        MR_Word OutVarsTypes0_125;
        MR_Word TsccOutLocalVarDefns0_126;
        MR_Word CopyOwnToTsccOutStmts0_127;

        libs__globals__lookup_bool_option_3_p_0(Globals_44, (MR_Integer) 331, &CopyOut_122);
        switch (CopyOut_122) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (CodeModel_25 == (MR_Integer) 0);
              if (succeeded)
                CopyOutWhen_123 = (MR_Integer) 1;
              else
                CopyOutWhen_123 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            CopyOutWhen_123 = (MR_Integer) 2;
            break;
        }
        ml_backend__ml_args_util__ml_gen_tscc_arg_decls_19_p_0(ModuleInfo_23, CopyOutWhen_123, Context_26, ProcIdInTscc_27, *ArgTuples_32, (MR_Integer) 1, (MR_Integer) 1, STATE_VARIABLE_OutArgNames_0_64, STATE_VARIABLE_OutArgNames_65, TsccInArgs_34, &TsccArgs_49, &ReturnRvalsTypes0_124, &OutVarsTypes0_125, OwnLocalVarDefns_38, TsccInLocalVarDefns_39, &TsccOutLocalVarDefns0_126, CopyTsccInToOwnStmts_41, &CopyOwnToTsccOutStmts0_127, CopyOutValThroughPtrStmts_43);
        {
          SucceededTsccOutVarDefn_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SucceededTsccOutVarDefn_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SucceededTsccOutVarDefn_61, 1) = ((MR_Box) (Context_26));
          MR_hl_field(0, SucceededTsccOutVarDefn_61, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(0, SucceededTsccOutVarDefn_61, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SucceededTsccOutVarDefn_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          CopySucceededStmt_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CopySucceededStmt_62, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, CopySucceededStmt_62, 1) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_args_util_scalar_common_1[3])));
          MR_hl_field(3, CopySucceededStmt_62, 2) = ((MR_Box) (Context_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ReturnRvalsTypes_36 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (&ml_backend__ml_args_util_scalar_common_1[4]));
          MR_hl_field(1, base, 1) = ((MR_Box) (ReturnRvalsTypes0_124));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *OutVarsTypes_37 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (&ml_backend__ml_args_util_scalar_common_1[5]));
          MR_hl_field(1, base, 1) = ((MR_Box) (OutVarsTypes0_125));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *TsccOutLocalVarDefns_40 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SucceededTsccOutVarDefn_61));
          MR_hl_field(1, base, 1) = ((MR_Box) (TsccOutLocalVarDefns0_126));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *CopyOwnToTsccOutStmts_42 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CopySucceededStmt_62));
          MR_hl_field(1, base, 1) = ((MR_Box) (CopyOwnToTsccOutStmts0_127));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CopyOut_79;
        MR_Word CopyOutWhen_80;
        MR_Word ReturnRvalsTypes0_81;
        MR_Word OutVarsTypes0_82;
        MR_Word TsccOutLocalVarDefns0_83;
        MR_Word CopyOwnToTsccOutStmts0_84;

        libs__globals__lookup_bool_option_3_p_0(Globals_44, (MR_Integer) 332, &CopyOut_79);
        switch (CopyOut_79) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            CopyOutWhen_80 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            CopyOutWhen_80 = (MR_Integer) 2;
            break;
        }
        ml_backend__ml_args_util__ml_gen_tscc_arg_decls_19_p_0(ModuleInfo_23, CopyOutWhen_80, Context_26, ProcIdInTscc_27, *ArgTuples_32, (MR_Integer) 1, (MR_Integer) 1, STATE_VARIABLE_OutArgNames_0_64, STATE_VARIABLE_OutArgNames_65, TsccInArgs_34, &TsccArgs_49, &ReturnRvalsTypes0_81, &OutVarsTypes0_82, OwnLocalVarDefns_38, TsccInLocalVarDefns_39, &TsccOutLocalVarDefns0_83, CopyTsccInToOwnStmts_41, &CopyOwnToTsccOutStmts0_84, CopyOutValThroughPtrStmts_43);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.ml_gen_tscc_arg_params\'/22", (MR_String) "model_non");
          return;
        }
      }
      break;
  }
  mercury__assoc_list__values_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), *ReturnRvalsTypes_36, &ReturnTypes_63);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *FuncParams_35 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TsccArgs_49));
    MR_hl_field(0, base, 1) = ((MR_Box) (ReturnTypes_63));
  }
}

static void MR_CALL 
ml_backend__ml_args_util__ml_gen_tscc_arg_decls_19_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Integer HeadVar__6_6,
  MR_Integer HeadVar__7_7,
  MR_Word STATE_VARIABLE_OutArgNames_0_8,
  MR_Word * STATE_VARIABLE_OutArgNames_9,
  MR_Word * HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word * HeadVar__12_12,
  MR_Word * HeadVar__13_13,
  MR_Word * HeadVar__14_14,
  MR_Word * HeadVar__15_15,
  MR_Word * HeadVar__16_16,
  MR_Word * HeadVar__17_17,
  MR_Word * HeadVar__18_18,
  MR_Word * HeadVar__19_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__12_12 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__15_15 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__16_16 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__17_17 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__18_18 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__19_19 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_OutArgNames_9 = STATE_VARIABLE_OutArgNames_0_8;
    }
    else
    {
      MR_Word HeadTuple_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word TailTuples_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadMLDSVarName_49 = ((MR_Word) ((MR_hl_field(0, HeadTuple_33, (MR_Integer) 1))));
      MR_Word HeadType_50 = ((MR_Word) ((MR_hl_field(0, HeadTuple_33, (MR_Integer) 2))));
      MR_Word HeadMode_51 = ((MR_Unsigned) ((MR_hl_field(0, HeadTuple_33, (MR_Integer) 3))) & (MR_Integer) 3);
      MR_Word HeadIsDummy_52;

      HeadIsDummy_52 = check_hlds__type_util__is_type_a_dummy_2_f_0(HeadVar__1_1, HeadType_50);
      switch (HeadIsDummy_52) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__5_5 = TailTuples_34;

            // direct tailcall eliminated
            ;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String HeadVarNameStr_53;
            MR_Word HeadMLDS_Type_54;

            HeadVarNameStr_53 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(HeadMLDSVarName_49);
            HeadMLDS_Type_54 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(HeadVar__1_1, HeadType_50);
            switch (HeadMode_51) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer NextInArgNum_56 = (MR_Integer) ((MR_Unsigned) HeadVar__6_6 + (MR_Unsigned) 1);
                  MR_Word HeadTsccInVar_58;
                  MR_Word HeadMLDSVarLval_59;
                  MR_Word HeadTsccInVarLval_60;
                  MR_Word HeadTsccInArg_61;
                  MR_Word HeadTsccArgs_63;
                  MR_Word HeadOwnLocalVarDefn_66;
                  MR_Word HeadTsccInLocalVarDefns_67;
                  MR_Word HeadCopyTsccInToOwnStmts_69;
                  MR_Word TailTsccInArgs_82;
                  MR_Word TailTsccArgs_83;
                  MR_Word TailReturnRvalsTypes_84;
                  MR_Word TailOutVarsTypes_85;
                  MR_Word TailOwnLocalVarDefns_86;
                  MR_Word TailTsccInLocalVarDefns_87;
                  MR_Word TailTsccOutLocalVarDefns_88;
                  MR_Word TailCopyTsccInToOwnStmts_89;
                  MR_Word TailCopyOwnToTsccOutStmts_90;
                  MR_Word TailCopyOutValThroughPtrStmts_91;
                  MR_Word Var_102;
                  MR_Word Var_106;
                  MR_Word Var_107;
                  MR_Word Var_108;

                  {
                    HeadTsccInVar_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, HeadTsccInVar_58, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(3, HeadTsccInVar_58, 1) = ((MR_Box) (HeadVar__4_4));
                    MR_hl_field(3, HeadTsccInVar_58, 2) = ((MR_Box) (HeadVar__6_6));
                    MR_hl_field(3, HeadTsccInVar_58, 3) = ((MR_Box) (HeadVarNameStr_53));
                  }
                  {
                    HeadMLDSVarLval_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, HeadMLDSVarLval_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, HeadMLDSVarLval_59, 1) = ((MR_Box) (HeadMLDSVarName_49));
                    MR_hl_field(3, HeadMLDSVarLval_59, 2) = ((MR_Box) (HeadMLDS_Type_54));
                  }
                  {
                    HeadTsccInVarLval_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, HeadTsccInVarLval_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, HeadTsccInVarLval_60, 1) = ((MR_Box) (HeadTsccInVar_58));
                    MR_hl_field(3, HeadTsccInVarLval_60, 2) = ((MR_Box) (HeadMLDS_Type_54));
                  }
                  {
                    HeadTsccInArg_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, HeadTsccInArg_61, 0) = ((MR_Box) (HeadTsccInVar_58));
                    MR_hl_field(0, HeadTsccInArg_61, 1) = ((MR_Box) (HeadMLDS_Type_54));
                    MR_hl_field(0, HeadTsccInArg_61, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    HeadTsccArgs_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadTsccArgs_63, 0) = ((MR_Box) (HeadTsccInArg_61));
                    MR_hl_field(1, HeadTsccArgs_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    HeadOwnLocalVarDefn_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, HeadOwnLocalVarDefn_66, 0) = ((MR_Box) (HeadMLDSVarName_49));
                    MR_hl_field(0, HeadOwnLocalVarDefn_66, 1) = ((MR_Box) (HeadVar__3_3));
                    MR_hl_field(0, HeadOwnLocalVarDefn_66, 2) = ((MR_Box) (HeadMLDS_Type_54));
                    MR_hl_field(0, HeadOwnLocalVarDefn_66, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, HeadOwnLocalVarDefn_66, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_102 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_102, 0) = ((MR_Box) (HeadTsccInVar_58));
                    MR_hl_field(0, Var_102, 1) = ((MR_Box) (HeadVar__3_3));
                    MR_hl_field(0, Var_102, 2) = ((MR_Box) (HeadMLDS_Type_54));
                    MR_hl_field(0, Var_102, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Var_102, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    HeadTsccInLocalVarDefns_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadTsccInLocalVarDefns_67, 0) = ((MR_Box) (Var_102));
                    MR_hl_field(1, HeadTsccInLocalVarDefns_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_108 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_108, 0) = ((MR_Box) (HeadTsccInVarLval_60));
                  }
                  {
                    Var_107 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_107, 0) = ((MR_Box) (HeadMLDSVarLval_59));
                    MR_hl_field(2, Var_107, 1) = ((MR_Box) (Var_108));
                  }
                  {
                    Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(3, Var_106, 1) = ((MR_Box) (Var_107));
                    MR_hl_field(3, Var_106, 2) = ((MR_Box) (HeadVar__3_3));
                  }
                  {
                    HeadCopyTsccInToOwnStmts_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadCopyTsccInToOwnStmts_69, 0) = ((MR_Box) (Var_106));
                    MR_hl_field(1, HeadCopyTsccInToOwnStmts_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  ml_backend__ml_args_util__ml_gen_tscc_arg_decls_19_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, TailTuples_34, NextInArgNum_56, HeadVar__7_7, STATE_VARIABLE_OutArgNames_0_8, STATE_VARIABLE_OutArgNames_9, &TailTsccInArgs_82, &TailTsccArgs_83, &TailReturnRvalsTypes_84, &TailOutVarsTypes_85, &TailOwnLocalVarDefns_86, &TailTsccInLocalVarDefns_87, &TailTsccOutLocalVarDefns_88, &TailCopyTsccInToOwnStmts_89, &TailCopyOwnToTsccOutStmts_90, &TailCopyOutValThroughPtrStmts_91);
                  *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), HeadTsccArgs_63, TailTsccInArgs_82);
                  *HeadVar__11_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), HeadTsccArgs_63, TailTsccArgs_83);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_args_util_scalar_common_2[0]), (MR_Word) ((MR_Unsigned) 0U), TailReturnRvalsTypes_84);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_args_util_scalar_common_2[1]), (MR_Word) ((MR_Unsigned) 0U), TailOutVarsTypes_85);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__14_14 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (HeadOwnLocalVarDefn_66));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailOwnLocalVarDefns_86));
                  }
                  *HeadVar__15_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadTsccInLocalVarDefns_67, TailTsccInLocalVarDefns_87);
                  *HeadVar__16_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) ((MR_Unsigned) 0U), TailTsccOutLocalVarDefns_88);
                  *HeadVar__17_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadCopyTsccInToOwnStmts_69, TailCopyTsccInToOwnStmts_89);
                  *HeadVar__18_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) ((MR_Unsigned) 0U), TailCopyOwnToTsccOutStmts_90);
                  *HeadVar__19_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) ((MR_Unsigned) 0U), TailCopyOutValThroughPtrStmts_91);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String OutArgName_74;
                  MR_Word HeadTsccOutVarValue_75;
                  MR_Word HeadTsccOutVarValueLval_76;
                  MR_Word Var_112;
                  MR_Word Var_116;
                  MR_Word Var_120;
                  MR_Word Var_121;
                  MR_Word Var_122;
                  MR_Word HeadMLDSVarLval_135;
                  MR_Integer NextOutArgNum_146 = (MR_Integer) ((MR_Unsigned) HeadVar__7_7 + (MR_Unsigned) 1);
                  MR_Word HeadTsccArgs_148;
                  MR_Word HeadReturnRvalsTypes_149;
                  MR_Word HeadOutVarsTypes_150;
                  MR_Word HeadOwnLocalVarDefn_151;
                  MR_Word HeadTsccOutLocalVarDefns_153;
                  MR_Word HeadCopyOwnToTsccOutStmts_155;
                  MR_Word HeadCopyOutValThroughPtrStmts_156;
                  MR_Word TailTsccInArgs_157;
                  MR_Word TailTsccArgs_158;
                  MR_Word TailReturnRvalsTypes_159;
                  MR_Word TailOutVarsTypes_160;
                  MR_Word TailOwnLocalVarDefns_161;
                  MR_Word TailTsccInLocalVarDefns_162;
                  MR_Word TailTsccOutLocalVarDefns_163;
                  MR_Word TailCopyTsccInToOwnStmts_164;
                  MR_Word TailCopyOwnToTsccOutStmts_165;
                  MR_Word TailCopyOutValThroughPtrStmts_166;
                  MR_Word STATE_VARIABLE_OutArgNames_111_167;
                  MR_String OldOutArgName_73;
                  MR_Box conv0_OldOutArgName_73;

                  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_OutArgNames_0_8, HeadVar__7_7, &conv0_OldOutArgName_73);
                  if (succeeded)
                  {
                    OldOutArgName_73 = ((MR_String) (conv0_OldOutArgName_73));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    OutArgName_74 = OldOutArgName_73;
                    STATE_VARIABLE_OutArgNames_111_167 = STATE_VARIABLE_OutArgNames_0_8;
                  }
                  else
                  {
                    OutArgName_74 = HeadVarNameStr_53;
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVar__7_7, ((MR_Box) (OutArgName_74)), STATE_VARIABLE_OutArgNames_0_8, &STATE_VARIABLE_OutArgNames_111_167);
                  }
                  {
                    HeadMLDSVarLval_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, HeadMLDSVarLval_135, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, HeadMLDSVarLval_135, 1) = ((MR_Box) (HeadMLDSVarName_49));
                    MR_hl_field(3, HeadMLDSVarLval_135, 2) = ((MR_Box) (HeadMLDS_Type_54));
                  }
                  {
                    HeadTsccOutVarValue_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, HeadTsccOutVarValue_75, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, HeadTsccOutVarValue_75, 1) = ((MR_Box) (HeadVar__7_7));
                    MR_hl_field(3, HeadTsccOutVarValue_75, 2) = ((MR_Box) (OutArgName_74));
                  }
                  {
                    HeadTsccOutVarValueLval_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, HeadTsccOutVarValueLval_76, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, HeadTsccOutVarValueLval_76, 1) = ((MR_Box) (HeadTsccOutVarValue_75));
                    MR_hl_field(3, HeadTsccOutVarValueLval_76, 2) = ((MR_Box) (HeadMLDS_Type_54));
                  }
                  {
                    Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_112, 0) = ((MR_Box) (HeadTsccOutVarValue_75));
                    MR_hl_field(0, Var_112, 1) = ((MR_Box) (HeadMLDS_Type_54));
                  }
                  {
                    HeadOutVarsTypes_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadOutVarsTypes_150, 0) = ((MR_Box) (Var_112));
                    MR_hl_field(1, HeadOutVarsTypes_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    HeadOwnLocalVarDefn_151 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, HeadOwnLocalVarDefn_151, 0) = ((MR_Box) (HeadMLDSVarName_49));
                    MR_hl_field(0, HeadOwnLocalVarDefn_151, 1) = ((MR_Box) (HeadVar__3_3));
                    MR_hl_field(0, HeadOwnLocalVarDefn_151, 2) = ((MR_Box) (HeadMLDS_Type_54));
                    MR_hl_field(0, HeadOwnLocalVarDefn_151, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, HeadOwnLocalVarDefn_151, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_116 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_116, 0) = ((MR_Box) (HeadTsccOutVarValue_75));
                    MR_hl_field(0, Var_116, 1) = ((MR_Box) (HeadVar__3_3));
                    MR_hl_field(0, Var_116, 2) = ((MR_Box) (HeadMLDS_Type_54));
                    MR_hl_field(0, Var_116, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Var_116, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    HeadTsccOutLocalVarDefns_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadTsccOutLocalVarDefns_153, 0) = ((MR_Box) (Var_116));
                    MR_hl_field(1, HeadTsccOutLocalVarDefns_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_122 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_122, 0) = ((MR_Box) (HeadMLDSVarLval_135));
                  }
                  {
                    Var_121 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_121, 0) = ((MR_Box) (HeadTsccOutVarValueLval_76));
                    MR_hl_field(2, Var_121, 1) = ((MR_Box) (Var_122));
                  }
                  {
                    Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(3, Var_120, 1) = ((MR_Box) (Var_121));
                    MR_hl_field(3, Var_120, 2) = ((MR_Box) (HeadVar__3_3));
                  }
                  {
                    HeadCopyOwnToTsccOutStmts_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadCopyOwnToTsccOutStmts_155, 0) = ((MR_Box) (Var_120));
                    MR_hl_field(1, HeadCopyOwnToTsccOutStmts_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  switch (HeadVar__2_2) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = (TailTuples_34 == (MR_Word) ((MR_Unsigned) 0U));
                      break;
                  }
                  if (succeeded)
                  {
                    MR_Word HeadReturnRval_77;
                    MR_Word Var_124;

                    {
                      HeadReturnRval_77 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, HeadReturnRval_77, 0) = ((MR_Box) (HeadTsccOutVarValueLval_76));
                    }
                    HeadTsccArgs_148 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      Var_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_124, 0) = ((MR_Box) (HeadReturnRval_77));
                      MR_hl_field(0, Var_124, 1) = ((MR_Box) (HeadMLDS_Type_54));
                    }
                    {
                      HeadReturnRvalsTypes_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadReturnRvalsTypes_149, 0) = ((MR_Box) (Var_124));
                      MR_hl_field(1, HeadReturnRvalsTypes_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    HeadCopyOutValThroughPtrStmts_156 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  else
                  {
                    MR_Word HeadMLDS_PtrType_78;
                    MR_Word HeadTsccOutVarPtr_79;
                    MR_Word HeadTsccOutVarPtrLval_80;
                    MR_Word HeadTsccPtrArg_81;
                    MR_Word Var_128;
                    MR_Word Var_129;
                    MR_Word Var_130;
                    MR_Word Var_131;
                    MR_Word Var_132;

                    {
                      HeadMLDS_PtrType_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, HeadMLDS_PtrType_78, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                      MR_hl_field(3, HeadMLDS_PtrType_78, 1) = ((MR_Box) (HeadMLDS_Type_54));
                    }
                    {
                      HeadTsccOutVarPtr_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, HeadTsccOutVarPtr_79, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(3, HeadTsccOutVarPtr_79, 1) = ((MR_Box) (HeadVar__7_7));
                      MR_hl_field(3, HeadTsccOutVarPtr_79, 2) = ((MR_Box) (OutArgName_74));
                    }
                    {
                      HeadTsccOutVarPtrLval_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, HeadTsccOutVarPtrLval_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, HeadTsccOutVarPtrLval_80, 1) = ((MR_Box) (HeadTsccOutVarPtr_79));
                      MR_hl_field(3, HeadTsccOutVarPtrLval_80, 2) = ((MR_Box) (HeadMLDS_PtrType_78));
                    }
                    {
                      HeadTsccPtrArg_81 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, HeadTsccPtrArg_81, 0) = ((MR_Box) (HeadTsccOutVarPtr_79));
                      MR_hl_field(0, HeadTsccPtrArg_81, 1) = ((MR_Box) (HeadMLDS_PtrType_78));
                      MR_hl_field(0, HeadTsccPtrArg_81, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      HeadTsccArgs_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadTsccArgs_148, 0) = ((MR_Box) (HeadTsccPtrArg_81));
                      MR_hl_field(1, HeadTsccArgs_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    HeadReturnRvalsTypes_149 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      Var_131 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_131, 0) = ((MR_Box) (HeadTsccOutVarPtrLval_80));
                    }
                    {
                      Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_130, 0) = ((MR_Box) (Var_131));
                      MR_hl_field(1, Var_130, 1) = ((MR_Box) (HeadMLDS_Type_54));
                    }
                    {
                      Var_132 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_132, 0) = ((MR_Box) (HeadTsccOutVarValueLval_76));
                    }
                    {
                      Var_129 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_129, 0) = ((MR_Box) (Var_130));
                      MR_hl_field(2, Var_129, 1) = ((MR_Box) (Var_132));
                    }
                    {
                      Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_128, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(3, Var_128, 1) = ((MR_Box) (Var_129));
                      MR_hl_field(3, Var_128, 2) = ((MR_Box) (HeadVar__3_3));
                    }
                    {
                      HeadCopyOutValThroughPtrStmts_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadCopyOutValThroughPtrStmts_156, 0) = ((MR_Box) (Var_128));
                      MR_hl_field(1, HeadCopyOutValThroughPtrStmts_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  ml_backend__ml_args_util__ml_gen_tscc_arg_decls_19_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, TailTuples_34, HeadVar__6_6, NextOutArgNum_146, STATE_VARIABLE_OutArgNames_111_167, STATE_VARIABLE_OutArgNames_9, &TailTsccInArgs_157, &TailTsccArgs_158, &TailReturnRvalsTypes_159, &TailOutVarsTypes_160, &TailOwnLocalVarDefns_161, &TailTsccInLocalVarDefns_162, &TailTsccOutLocalVarDefns_163, &TailCopyTsccInToOwnStmts_164, &TailCopyOwnToTsccOutStmts_165, &TailCopyOutValThroughPtrStmts_166);
                  *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) ((MR_Unsigned) 0U), TailTsccInArgs_157);
                  *HeadVar__11_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), HeadTsccArgs_148, TailTsccArgs_158);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_args_util_scalar_common_2[0]), HeadReturnRvalsTypes_149, TailReturnRvalsTypes_159);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_args_util_scalar_common_2[1]), HeadOutVarsTypes_150, TailOutVarsTypes_160);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__14_14 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (HeadOwnLocalVarDefn_151));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailOwnLocalVarDefns_161));
                  }
                  *HeadVar__15_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) ((MR_Unsigned) 0U), TailTsccInLocalVarDefns_162);
                  *HeadVar__16_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadTsccOutLocalVarDefns_153, TailTsccOutLocalVarDefns_163);
                  *HeadVar__17_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) ((MR_Unsigned) 0U), TailCopyTsccInToOwnStmts_164);
                  *HeadVar__18_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadCopyOwnToTsccOutStmts_155, TailCopyOwnToTsccOutStmts_165);
                  *HeadVar__19_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadCopyOutValThroughPtrStmts_156, TailCopyOutValThroughPtrStmts_166);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word next_value_of_HeadVar__5_5 = TailTuples_34;

                  // direct tailcall eliminated
                  ;
                  HeadVar__5_5 = next_value_of_HeadVar__5_5;
                  continue;
                }
                break;
            }
          }
          break;
      }
    }
    break;
  }
}

void MR_CALL 
ml_backend__ml_args_util__ml_gen_params_no_gc_stmts_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredOrFunc_11,
  MR_Word CodeModel_12,
  MR_Word HeadVars_13,
  MR_Word HeadMLDSVarNames_14,
  MR_Word HeadTypes_15,
  MR_Word HeadModes_16,
  MR_Word * ArgTuples_17,
  MR_Word * FuncParams_18)
{
  MR_Word _ByRef_19;
  MR_Word _Copied_20;
  MR_Word Var_21;

  ml_backend__ml_args_util__package_vars_mvars_types_modes_6_p_0(ModuleInfo_10, HeadVars_13, HeadMLDSVarNames_14, HeadTypes_15, HeadModes_16, ArgTuples_17);
  ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(ModuleInfo_10, PredOrFunc_11, CodeModel_12, *ArgTuples_17, FuncParams_18, &_ByRef_19, &_Copied_20, (MR_Word) ((MR_Unsigned) 0U), &Var_21);
}

static void MR_CALL 
ml_backend__ml_args_util__package_vars_mvars_types_modes_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Vars_8,
  MR_Word MLDSVarNames_9,
  MR_Word Types_10,
  MR_Word Modes_11,
  MR_Word * ArgTuples_12)
{
  MR_bool succeeded = (Vars_8 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
    succeeded = (MLDSVarNames_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (Types_10 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (Modes_11 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
    *ArgTuples_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadVar_13;
    MR_Word TailVars_14;
    MR_Word HeadMLDSVarName_15;
    MR_Word TailMLDSVarNames_16;
    MR_Word HeadType_17;
    MR_Word TailTypes_18;
    MR_Word HeadMode_19;
    MR_Word TailModes_20;

    succeeded = (Vars_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadVar_13 = ((MR_Word) ((MR_hl_field(1, Vars_8, (MR_Integer) 0))));
      TailVars_14 = ((MR_Word) ((MR_hl_field(1, Vars_8, (MR_Integer) 1))));
      succeeded = (MLDSVarNames_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadMLDSVarName_15 = ((MR_Word) ((MR_hl_field(1, MLDSVarNames_9, (MR_Integer) 0))));
        TailMLDSVarNames_16 = ((MR_Word) ((MR_hl_field(1, MLDSVarNames_9, (MR_Integer) 1))));
        succeeded = (Types_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadType_17 = ((MR_Word) ((MR_hl_field(1, Types_10, (MR_Integer) 0))));
          TailTypes_18 = ((MR_Word) ((MR_hl_field(1, Types_10, (MR_Integer) 1))));
          succeeded = (Modes_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadMode_19 = ((MR_Word) ((MR_hl_field(1, Modes_11, (MR_Integer) 0))));
            TailModes_20 = ((MR_Word) ((MR_hl_field(1, Modes_11, (MR_Integer) 1))));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word TailArgTuples_21;
      MR_Word HeadTopFunctorMode_22;
      MR_Word HeadArgTuple_23;

      ml_backend__ml_args_util__package_vars_mvars_types_modes_6_p_0(ModuleInfo_7, TailVars_14, TailMLDSVarNames_16, TailTypes_18, TailModes_20, &TailArgTuples_21);
      check_hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_7, HeadMode_19, HeadType_17, &HeadTopFunctorMode_22);
      {
        HeadArgTuple_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadArgTuple_23, 0) = ((MR_Box) (HeadVar_13));
        MR_hl_field(0, HeadArgTuple_23, 1) = ((MR_Box) (HeadMLDSVarName_15));
        MR_hl_field(0, HeadArgTuple_23, 2) = ((MR_Box) (HeadType_17));
        MR_hl_field(0, HeadArgTuple_23, 3) = (MR_Box) ((MR_Unsigned) (HeadTopFunctorMode_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ArgTuples_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadArgTuple_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailArgTuples_21));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.package_vars_mvars_types_modes\'/6", (MR_String) "length mismatch");
        return;
      }
  }
}

MR_Word MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_from_rtti_no_gc_stmts_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word RttiProcId_5)
{
  MR_Word FuncParams_6;
  MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(0, RttiProcId_5, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Detism_8 = ((((MR_Unsigned) ((MR_hl_field(0, RttiProcId_5, (MR_Integer) 10))) >> 2)) & (MR_Integer) 7);
  MR_Word CodeModel_9;
  MR_Word HeadVars_10;
  MR_Word ArgTypes_11;
  MR_Word TopFunctorModes_12;
  MR_Word ArgTuples_13;
  MR_Word _ByRef_14;
  MR_Word _Copied_15;
  MR_Word Var_16;

  hlds__code_model__determinism_to_code_model_2_p_0(Detism_8, &CodeModel_9);
  ArgTypes_11 = ((MR_Word) ((MR_hl_field(0, RttiProcId_5, (MR_Integer) 5))));
  HeadVars_10 = ((MR_Word) ((MR_hl_field(0, RttiProcId_5, (MR_Integer) 8))));
  TopFunctorModes_12 = ((MR_Word) ((MR_hl_field(0, RttiProcId_5, (MR_Integer) 9))));
  ml_backend__ml_args_util__package_rtti_vars_types_topmodes_4_p_0(HeadVars_10, ArgTypes_11, TopFunctorModes_12, &ArgTuples_13);
  ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(ModuleInfo_4, PredOrFunc_7, CodeModel_9, ArgTuples_13, &FuncParams_6, &_ByRef_14, &_Copied_15, (MR_Word) ((MR_Unsigned) 0U), &Var_16);
  return FuncParams_6;
}

static void MR_CALL 
ml_backend__ml_args_util__package_rtti_vars_types_topmodes_4_p_0(
  MR_Word VarPairs_5,
  MR_Word Types_6,
  MR_Word TopFunctorModes_7,
  MR_Word * ArgTuples_8)
{
  MR_bool succeeded = (VarPairs_5 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
    succeeded = (Types_6 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (TopFunctorModes_7 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    *ArgTuples_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadVarPair_9;
    MR_Word TailVarPairs_10;
    MR_Word HeadType_11;
    MR_Word TailTypes_12;
    MR_Word HeadTopFunctorMode_13;
    MR_Word TailTopFunctorModes_14;

    succeeded = (VarPairs_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadVarPair_9 = ((MR_Word) ((MR_hl_field(1, VarPairs_5, (MR_Integer) 0))));
      TailVarPairs_10 = ((MR_Word) ((MR_hl_field(1, VarPairs_5, (MR_Integer) 1))));
      succeeded = (Types_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadType_11 = ((MR_Word) ((MR_hl_field(1, Types_6, (MR_Integer) 0))));
        TailTypes_12 = ((MR_Word) ((MR_hl_field(1, Types_6, (MR_Integer) 1))));
        succeeded = (TopFunctorModes_7 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadTopFunctorMode_13 = ((MR_Word) ((MR_hl_field(1, TopFunctorModes_7, (MR_Integer) 0))));
          TailTopFunctorModes_14 = ((MR_Word) ((MR_hl_field(1, TopFunctorModes_7, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TailArgTuples_15;
      MR_Word HeadVar_16;
      MR_String HeadVarName_17;
      MR_Integer HeadVarNum_18;
      MR_Word HeadMLDSVarName_19;
      MR_Word HeadArgTuple_20;

      ml_backend__ml_args_util__package_rtti_vars_types_topmodes_4_p_0(TailVarPairs_10, TailTypes_12, TailTopFunctorModes_14, &TailArgTuples_15);
      HeadVar_16 = ((MR_Word) ((MR_hl_field(0, HeadVarPair_9, (MR_Integer) 0))));
      HeadVarName_17 = ((MR_String) ((MR_hl_field(0, HeadVarPair_9, (MR_Integer) 1))));
      mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar_16, &HeadVarNum_18);
      {
        HeadMLDSVarName_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadMLDSVarName_19, 0) = ((MR_Box) (HeadVarName_17));
        MR_hl_field(1, HeadMLDSVarName_19, 1) = ((MR_Box) (HeadVarNum_18));
      }
      {
        HeadArgTuple_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadArgTuple_20, 0) = ((MR_Box) (HeadVar_16));
        MR_hl_field(0, HeadArgTuple_20, 1) = ((MR_Box) (HeadMLDSVarName_19));
        MR_hl_field(0, HeadArgTuple_20, 2) = ((MR_Box) (HeadType_11));
        MR_hl_field(0, HeadArgTuple_20, 3) = (MR_Box) ((MR_Unsigned) (HeadTopFunctorMode_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ArgTuples_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadArgTuple_20));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailArgTuples_15));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.package_rtti_vars_types_topmodes\'/4", (MR_String) "length mismatch");
        return;
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_inputs_only_no_gc_stmts_2_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_args_util__IntroducedFrom__pred__ml_gen_proc_params_inputs_only_no_gc_stmts__567__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

MR_Word MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_inputs_only_no_gc_stmts_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredProcId_5)
{
  MR_bool succeeded;
  MR_Word FuncArgs_6;
  MR_Word _PredInfo_7;
  MR_Word ArgTuples_10;
  MR_Word RetTypes_11;
  MR_Word Var_18;
  MR_Word ProcInfo_22;
  MR_Word VarTable_23;
  MR_Word HeadVars_24;
  MR_Word HeadTypes_25;
  MR_Word HeadModes_26;
  MR_Word _PredOrFunc_8;
  MR_Word _CodeModel_9;
  MR_Word _ByRef_12;
  MR_Word _Copied_13;
  MR_Word Var_14;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_4, PredProcId_5, &_PredInfo_7, &ProcInfo_22);
  _PredOrFunc_8 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(_PredInfo_7);
  _CodeModel_9 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_22);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_22, &VarTable_23);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_22, &HeadVars_24);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(_PredInfo_7, &HeadTypes_25);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_22, &HeadModes_26);
  ml_backend__ml_args_util__package_vars_types_modes_6_p_0(ModuleInfo_4, VarTable_23, HeadVars_24, HeadTypes_25, HeadModes_26, &ArgTuples_10);
  ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_50_44_32_51_93_95_48_10_p_0(ModuleInfo_4, ArgTuples_10, &FuncArgs_6, &RetTypes_11, &_ByRef_12, &_Copied_13, (MR_Word) ((MR_Unsigned) 0U), &Var_14);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&ml_backend__ml_args_util_scalar_common_4[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (ml_backend__ml_args_util__ml_gen_proc_params_inputs_only_no_gc_stmts_2_f_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (RetTypes_11));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_18, (MR_String) "function \140ml_backend.ml_args_util.ml_gen_proc_params_inputs_only_no_gc_stmts\'/2", (MR_String) "RetTypes != []");
  return FuncArgs_6;
}

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_50_44_32_51_93_95_48_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_MaybeInfo_0_9,
  MR_Word * STATE_VARIABLE_MaybeInfo_10)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_0_9;
  }
  else
  {
    MR_Word HeadTuple_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word TailTuples_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word TailFuncArgs_27;
    MR_Word TailRetTypes_28;
    MR_Word TailByRefOutputVars_29;
    MR_Word TailCopiedOutputVars_30;
    MR_Word HeadMLDSVar_32;
    MR_Word HeadType_33;
    MR_Word HeadMode_34;
    MR_Word HeadIsDummy_35;
    MR_Word STATE_VARIABLE_MaybeInfo_41_41;

    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_50_44_32_51_93_95_48_10_p_0(ModuleInfo_1, TailTuples_21, &TailFuncArgs_27, &TailRetTypes_28, &TailByRefOutputVars_29, &TailCopiedOutputVars_30, STATE_VARIABLE_MaybeInfo_0_9, &STATE_VARIABLE_MaybeInfo_41_41);
    HeadMLDSVar_32 = ((MR_Word) ((MR_hl_field(0, HeadTuple_20, (MR_Integer) 1))));
    HeadType_33 = ((MR_Word) ((MR_hl_field(0, HeadTuple_20, (MR_Integer) 2))));
    HeadMode_34 = ((MR_Unsigned) ((MR_hl_field(0, HeadTuple_20, (MR_Integer) 3))) & (MR_Integer) 3);
    HeadIsDummy_35 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, HeadType_33);
    switch (HeadIsDummy_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeadVar__5_5 = TailFuncArgs_27;
          *HeadVar__6_6 = TailRetTypes_28;
          *HeadVar__7_7 = TailByRefOutputVars_29;
          *HeadVar__8_8 = TailCopiedOutputVars_30;
          *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_41_41;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HeadMLDS_Type_36;

          HeadMLDS_Type_36 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_1, HeadType_33);
          switch (HeadMode_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word HeadFuncArg_38;

                *STATE_VARIABLE_MaybeInfo_10 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  HeadFuncArg_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, HeadFuncArg_38, 0) = ((MR_Box) (HeadMLDSVar_32));
                  MR_hl_field(0, HeadFuncArg_38, 1) = ((MR_Box) (HeadMLDS_Type_36));
                  MR_hl_field(0, HeadFuncArg_38, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (HeadFuncArg_38));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailFuncArgs_27));
                }
                *HeadVar__6_6 = TailRetTypes_28;
                *HeadVar__7_7 = TailByRefOutputVars_29;
                *HeadVar__8_8 = TailCopiedOutputVars_30;
              }
              break;
            case (MR_Integer) 1:
              {
                *HeadVar__5_5 = TailFuncArgs_27;
                *HeadVar__6_6 = TailRetTypes_28;
                *HeadVar__7_7 = TailByRefOutputVars_29;
                *HeadVar__8_8 = TailCopiedOutputVars_30;
                *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_41_41;
              }
              break;
            case (MR_Integer) 2:
              {
                *HeadVar__5_5 = TailFuncArgs_27;
                *HeadVar__6_6 = TailRetTypes_28;
                *HeadVar__7_7 = TailByRefOutputVars_29;
                *HeadVar__8_8 = TailCopiedOutputVars_30;
                *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_41_41;
              }
              break;
          }
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_args_util__ml_gen_info_proc_params_7_p_0(
  MR_Word PredProcId_8,
  MR_Word * ArgTuples_9,
  MR_Word * FuncParams_10,
  MR_Word * ByRefOutputVars_11,
  MR_Word * CopiedOutputVars_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_14;
  MR_Word PredInfo_15;
  MR_Word PredOrFunc_16;
  MR_Word CodeModel_17;
  MR_Word PredModule_18;
  MR_String PredName_19;
  MR_Word PredFormArity_20;
  MR_Integer PredFormArityInt_21;
  MR_Word ProcInfo_30;
  MR_Word VarTable_31;
  MR_Word HeadVars_32;
  MR_Word HeadTypes_33;
  MR_Word HeadModes_34;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_23, &ModuleInfo_14);
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_14, PredProcId_8, &PredInfo_15, &ProcInfo_30);
  PredOrFunc_16 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_15);
  CodeModel_17 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_30);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_30, &VarTable_31);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_30, &HeadVars_32);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_15, &HeadTypes_33);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_30, &HeadModes_34);
  ml_backend__ml_args_util__package_vars_types_modes_6_p_0(ModuleInfo_14, VarTable_31, HeadVars_32, HeadTypes_33, HeadModes_34, ArgTuples_9);
  PredModule_18 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_15);
  PredName_19 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_15);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_15, &PredFormArity_20);
  PredFormArityInt_21 = (MR_Integer) (PredFormArity_20);
  succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_18, PredName_19, PredFormArityInt_21);
  if (succeeded)
  {
    MR_Word Var_22;

    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(ModuleInfo_14, PredOrFunc_16, CodeModel_17, *ArgTuples_9, FuncParams_10, ByRefOutputVars_11, CopiedOutputVars_12, (MR_Word) ((MR_Unsigned) 0U), &Var_22);
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Globals_35;
    MR_Word FuncArgs_40;
    MR_Word RetTypes_41;

    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (STATE_VARIABLE_Info_0_23));
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_14, &Globals_35);
    switch (CodeModel_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CopyOut_36;
          MR_Word CopyOutWhen_37;
          MR_Word FuncArgs0_38;
          MR_Word RetTypes0_39;

          libs__globals__lookup_bool_option_3_p_0(Globals_35, (MR_Integer) 331, &CopyOut_36);
          switch (CopyOut_36) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = (CodeModel_17 == (MR_Integer) 0);
                if (succeeded)
                  succeeded = (PredOrFunc_16 == (MR_Integer) 1);
                if (succeeded)
                  CopyOutWhen_37 = (MR_Integer) 1;
                else
                  CopyOutWhen_37 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              CopyOutWhen_37 = (MR_Integer) 2;
              break;
          }
          ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_50_10_p_2(ModuleInfo_14, CopyOutWhen_37, *ArgTuples_9, &FuncArgs0_38, &RetTypes0_39, ByRefOutputVars_11, CopiedOutputVars_12, Var_28, &Var_29);
          FuncArgs_40 = FuncArgs0_38;
          RetTypes_41 = RetTypes0_39;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CopyOut_75;
          MR_Word CopyOutWhen_76;
          MR_Word FuncArgs0_77;
          MR_Word RetTypes0_78;

          libs__globals__lookup_bool_option_3_p_0(Globals_35, (MR_Integer) 331, &CopyOut_75);
          switch (CopyOut_75) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = (CodeModel_17 == (MR_Integer) 0);
                if (succeeded)
                  CopyOutWhen_76 = (MR_Integer) 1;
                else
                  CopyOutWhen_76 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              CopyOutWhen_76 = (MR_Integer) 2;
              break;
          }
          ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_50_10_p_2(ModuleInfo_14, CopyOutWhen_76, *ArgTuples_9, &FuncArgs0_77, &RetTypes0_78, ByRefOutputVars_11, CopiedOutputVars_12, Var_28, &Var_29);
          FuncArgs_40 = FuncArgs0_77;
          {
            RetTypes_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, RetTypes_41, 0) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(1, RetTypes_41, 1) = ((MR_Box) (RetTypes0_78));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ContType_42;
          MR_Word ContArg_44;
          MR_Word Var_54;
          MR_Word CopyOut_60;
          MR_Word FuncArgs0_62;

          libs__globals__lookup_bool_option_3_p_0(Globals_35, (MR_Integer) 332, &CopyOut_60);
          switch (CopyOut_60) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_50_10_p_2(ModuleInfo_14, (MR_Integer) 0, *ArgTuples_9, &FuncArgs0_62, &RetTypes_41, ByRefOutputVars_11, CopiedOutputVars_12, Var_28, &Var_29);
                ContType_42 = (MR_Word) (MR_mkword(3, &ml_backend__ml_args_util_scalar_common_1[6]));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word RetTypes0_74;

                ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_50_10_p_2(ModuleInfo_14, (MR_Integer) 2, *ArgTuples_9, &FuncArgs0_62, &RetTypes0_74, ByRefOutputVars_11, CopiedOutputVars_12, Var_28, &Var_29);
                {
                  ContType_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ContType_42, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, ContType_42, 1) = ((MR_Box) (RetTypes0_74));
                }
                RetTypes_41 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
          {
            ContArg_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ContArg_44, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_args_util_scalar_common_1[7])));
            MR_hl_field(0, ContArg_44, 1) = ((MR_Box) (ContType_42));
            MR_hl_field(0, ContArg_44, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_54, 0) = ((MR_Box) (ContArg_44));
            MR_hl_field(1, Var_54, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_args_util_scalar_common_1[9])));
          }
          FuncArgs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), FuncArgs0_62, Var_54);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *FuncParams_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (FuncArgs_40));
      MR_hl_field(0, base, 1) = ((MR_Box) (RetTypes_41));
    }
    *STATE_VARIABLE_Info_24 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 0))));
  }
}

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_50_10_p_2(
  MR_Word ModuleInfo_1,
  MR_Word CopyOutWhen_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_MaybeInfo_0_9,
  MR_Word * STATE_VARIABLE_MaybeInfo_10)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_0_9;
  }
  else
  {
    MR_Word HeadTuple_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word TailTuples_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word TailFuncArgs_27;
    MR_Word TailRetTypes_28;
    MR_Word TailByRefOutputVars_29;
    MR_Word TailCopiedOutputVars_30;
    MR_Word HeadVar_31;
    MR_Word HeadMLDSVar_32;
    MR_Word HeadType_33;
    MR_Word HeadMode_34;
    MR_Word HeadIsDummy_35;
    MR_Word STATE_VARIABLE_MaybeInfo_41_41;

    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_50_10_p_2(ModuleInfo_1, CopyOutWhen_2, TailTuples_21, &TailFuncArgs_27, &TailRetTypes_28, &TailByRefOutputVars_29, &TailCopiedOutputVars_30, STATE_VARIABLE_MaybeInfo_0_9, &STATE_VARIABLE_MaybeInfo_41_41);
    HeadVar_31 = ((MR_Word) ((MR_hl_field(0, HeadTuple_20, (MR_Integer) 0))));
    HeadMLDSVar_32 = ((MR_Word) ((MR_hl_field(0, HeadTuple_20, (MR_Integer) 1))));
    HeadType_33 = ((MR_Word) ((MR_hl_field(0, HeadTuple_20, (MR_Integer) 2))));
    HeadMode_34 = ((MR_Unsigned) ((MR_hl_field(0, HeadTuple_20, (MR_Integer) 3))) & (MR_Integer) 3);
    HeadIsDummy_35 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, HeadType_33);
    switch (HeadIsDummy_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeadVar__5_5 = TailFuncArgs_27;
          *HeadVar__6_6 = TailRetTypes_28;
          *HeadVar__7_7 = TailByRefOutputVars_29;
          *HeadVar__8_8 = TailCopiedOutputVars_30;
          *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_41_41;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HeadMLDS_Type_36;

          HeadMLDS_Type_36 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_1, HeadType_33);
          switch (HeadMode_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word HeadFuncArg_38;
                MR_Word Info0_46 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeInfo_41_41, (MR_Integer) 0))));
                MR_Word GCStmt_47;
                MR_Word Info_48;
                MR_Word Var_49;

                Var_49 = mercury__term_context__dummy_context_0_f_0();
                ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(HeadMLDSVar_32, HeadType_33, Var_49, &GCStmt_47, Info0_46, &Info_48);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_MaybeInfo_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Info_48));
                }
                {
                  HeadFuncArg_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, HeadFuncArg_38, 0) = ((MR_Box) (HeadMLDSVar_32));
                  MR_hl_field(0, HeadFuncArg_38, 1) = ((MR_Box) (HeadMLDS_Type_36));
                  MR_hl_field(0, HeadFuncArg_38, 2) = ((MR_Box) (GCStmt_47));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (HeadFuncArg_38));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailFuncArgs_27));
                }
                *HeadVar__6_6 = TailRetTypes_28;
                *HeadVar__7_7 = TailByRefOutputVars_29;
                *HeadVar__8_8 = TailCopiedOutputVars_30;
              }
              break;
            case (MR_Integer) 1:
              {
                switch (CopyOutWhen_2) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = (TailTuples_21 == (MR_Word) ((MR_Unsigned) 0U));
                    break;
                }
                if (succeeded)
                {
                  *HeadVar__5_5 = TailFuncArgs_27;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__6_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (HeadMLDS_Type_36));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailRetTypes_28));
                  }
                  *HeadVar__7_7 = TailByRefOutputVars_29;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__8_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar_31));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailCopiedOutputVars_30));
                  }
                  *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_41_41;
                }
                else
                {
                  MR_Word HeadMLDS_ArgType_44;
                  MR_Word HeadFuncArg_45;
                  MR_Word Info0_50;
                  MR_Word GCStmt_51;
                  MR_Word Info_52;
                  MR_Word Var_53;

                  {
                    HeadMLDS_ArgType_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, HeadMLDS_ArgType_44, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                    MR_hl_field(3, HeadMLDS_ArgType_44, 1) = ((MR_Box) (HeadMLDS_Type_36));
                  }
                  Info0_50 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeInfo_41_41, (MR_Integer) 0))));
                  Var_53 = mercury__term_context__dummy_context_0_f_0();
                  ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(HeadMLDSVar_32, HeadType_33, Var_53, &GCStmt_51, Info0_50, &Info_52);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_MaybeInfo_10 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Info_52));
                  }
                  {
                    HeadFuncArg_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, HeadFuncArg_45, 0) = ((MR_Box) (HeadMLDSVar_32));
                    MR_hl_field(0, HeadFuncArg_45, 1) = ((MR_Box) (HeadMLDS_ArgType_44));
                    MR_hl_field(0, HeadFuncArg_45, 2) = ((MR_Box) (GCStmt_51));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (HeadFuncArg_45));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailFuncArgs_27));
                  }
                  *HeadVar__6_6 = TailRetTypes_28;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__7_7 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar_31));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailByRefOutputVars_29));
                  }
                  *HeadVar__8_8 = TailCopiedOutputVars_30;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                *HeadVar__5_5 = TailFuncArgs_27;
                *HeadVar__6_6 = TailRetTypes_28;
                *HeadVar__7_7 = TailByRefOutputVars_29;
                *HeadVar__8_8 = TailCopiedOutputVars_30;
                *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_41_41;
              }
              break;
          }
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_no_gc_stmts_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6,
  MR_Word * ArgTuples_7,
  MR_Word * FuncParams_8)
{
  MR_Word _PredInfo_9;
  MR_Word PredOrFunc_10;
  MR_Word CodeModel_11;
  MR_Word ProcInfo_17;
  MR_Word VarTable_18;
  MR_Word HeadVars_19;
  MR_Word HeadTypes_20;
  MR_Word HeadModes_21;
  MR_Word _ByRef_12;
  MR_Word _Copied_13;
  MR_Word Var_14;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, PredProcId_6, &_PredInfo_9, &ProcInfo_17);
  PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(_PredInfo_9);
  CodeModel_11 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_17);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_17, &VarTable_18);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_17, &HeadVars_19);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(_PredInfo_9, &HeadTypes_20);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_17, &HeadModes_21);
  ml_backend__ml_args_util__package_vars_types_modes_6_p_0(ModuleInfo_5, VarTable_18, HeadVars_19, HeadTypes_20, HeadModes_21, ArgTuples_7);
  ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(ModuleInfo_5, PredOrFunc_10, CodeModel_11, *ArgTuples_7, FuncParams_8, &_ByRef_12, &_Copied_13, (MR_Word) ((MR_Unsigned) 0U), &Var_14);
}

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(
  MR_Word ModuleInfo_11,
  MR_Word PredOrFunc_12,
  MR_Word CodeModel_13,
  MR_Word ArgTuples_15,
  MR_Word * FuncParams_16,
  MR_Word * ByRefOutputVars_17,
  MR_Word * CopiedOutputVars_18,
  MR_Word STATE_VARIABLE_MaybeInfo_0_33,
  MR_Word * STATE_VARIABLE_MaybeInfo_34)
{
  MR_bool succeeded;
  MR_Word Globals_20;
  MR_Word FuncArgs_25;
  MR_Word RetTypes_26;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_20);
  switch (CodeModel_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CopyOut_21;
        MR_Word CopyOutWhen_22;
        MR_Word FuncArgs0_23;
        MR_Word RetTypes0_24;

        libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 331, &CopyOut_21);
        switch (CopyOut_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (CodeModel_13 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (PredOrFunc_12 == (MR_Integer) 1);
              if (succeeded)
                CopyOutWhen_22 = (MR_Integer) 1;
              else
                CopyOutWhen_22 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            CopyOutWhen_22 = (MR_Integer) 2;
            break;
        }
        ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_49_10_p_1(ModuleInfo_11, CopyOutWhen_22, ArgTuples_15, &FuncArgs0_23, &RetTypes0_24, ByRefOutputVars_17, CopiedOutputVars_18, STATE_VARIABLE_MaybeInfo_0_33, STATE_VARIABLE_MaybeInfo_34);
        FuncArgs_25 = FuncArgs0_23;
        RetTypes_26 = RetTypes0_24;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CopyOut_63;
        MR_Word CopyOutWhen_64;
        MR_Word FuncArgs0_65;
        MR_Word RetTypes0_66;

        libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 331, &CopyOut_63);
        switch (CopyOut_63) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (CodeModel_13 == (MR_Integer) 0);
              if (succeeded)
                CopyOutWhen_64 = (MR_Integer) 1;
              else
                CopyOutWhen_64 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            CopyOutWhen_64 = (MR_Integer) 2;
            break;
        }
        ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_49_10_p_1(ModuleInfo_11, CopyOutWhen_64, ArgTuples_15, &FuncArgs0_65, &RetTypes0_66, ByRefOutputVars_17, CopiedOutputVars_18, STATE_VARIABLE_MaybeInfo_0_33, STATE_VARIABLE_MaybeInfo_34);
        FuncArgs_25 = FuncArgs0_65;
        {
          RetTypes_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RetTypes_26, 0) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(1, RetTypes_26, 1) = ((MR_Box) (RetTypes0_66));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ContType_27;
        MR_Word ContArg_29;
        MR_Word Var_42;
        MR_Word CopyOut_48;
        MR_Word FuncArgs0_50;

        libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 332, &CopyOut_48);
        switch (CopyOut_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_49_10_p_1(ModuleInfo_11, (MR_Integer) 0, ArgTuples_15, &FuncArgs0_50, &RetTypes_26, ByRefOutputVars_17, CopiedOutputVars_18, STATE_VARIABLE_MaybeInfo_0_33, STATE_VARIABLE_MaybeInfo_34);
              ContType_27 = (MR_Word) (MR_mkword(3, &ml_backend__ml_args_util_scalar_common_1[6]));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RetTypes0_62;

              ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_49_10_p_1(ModuleInfo_11, (MR_Integer) 2, ArgTuples_15, &FuncArgs0_50, &RetTypes0_62, ByRefOutputVars_17, CopiedOutputVars_18, STATE_VARIABLE_MaybeInfo_0_33, STATE_VARIABLE_MaybeInfo_34);
              {
                ContType_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, ContType_27, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, ContType_27, 1) = ((MR_Box) (RetTypes0_62));
              }
              RetTypes_26 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        {
          ContArg_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ContArg_29, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_args_util_scalar_common_1[7])));
          MR_hl_field(0, ContArg_29, 1) = ((MR_Box) (ContType_27));
          MR_hl_field(0, ContArg_29, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) (ContArg_29));
          MR_hl_field(1, Var_42, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_args_util_scalar_common_1[9])));
        }
        FuncArgs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), FuncArgs0_50, Var_42);
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *FuncParams_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FuncArgs_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (RetTypes_26));
  }
}

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_49_10_p_1(
  MR_Word ModuleInfo_1,
  MR_Word CopyOutWhen_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_MaybeInfo_0_9,
  MR_Word * STATE_VARIABLE_MaybeInfo_10)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_0_9;
  }
  else
  {
    MR_Word HeadTuple_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word TailTuples_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word TailFuncArgs_27;
    MR_Word TailRetTypes_28;
    MR_Word TailByRefOutputVars_29;
    MR_Word TailCopiedOutputVars_30;
    MR_Word HeadVar_31;
    MR_Word HeadMLDSVar_32;
    MR_Word HeadType_33;
    MR_Word HeadMode_34;
    MR_Word HeadIsDummy_35;
    MR_Word STATE_VARIABLE_MaybeInfo_41_41;

    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_49_10_p_1(ModuleInfo_1, CopyOutWhen_2, TailTuples_21, &TailFuncArgs_27, &TailRetTypes_28, &TailByRefOutputVars_29, &TailCopiedOutputVars_30, STATE_VARIABLE_MaybeInfo_0_9, &STATE_VARIABLE_MaybeInfo_41_41);
    HeadVar_31 = ((MR_Word) ((MR_hl_field(0, HeadTuple_20, (MR_Integer) 0))));
    HeadMLDSVar_32 = ((MR_Word) ((MR_hl_field(0, HeadTuple_20, (MR_Integer) 1))));
    HeadType_33 = ((MR_Word) ((MR_hl_field(0, HeadTuple_20, (MR_Integer) 2))));
    HeadMode_34 = ((MR_Unsigned) ((MR_hl_field(0, HeadTuple_20, (MR_Integer) 3))) & (MR_Integer) 3);
    HeadIsDummy_35 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, HeadType_33);
    switch (HeadIsDummy_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeadVar__5_5 = TailFuncArgs_27;
          *HeadVar__6_6 = TailRetTypes_28;
          *HeadVar__7_7 = TailByRefOutputVars_29;
          *HeadVar__8_8 = TailCopiedOutputVars_30;
          *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_41_41;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HeadMLDS_Type_36;

          HeadMLDS_Type_36 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_1, HeadType_33);
          switch (HeadMode_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word HeadFuncArg_38;

                *STATE_VARIABLE_MaybeInfo_10 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  HeadFuncArg_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, HeadFuncArg_38, 0) = ((MR_Box) (HeadMLDSVar_32));
                  MR_hl_field(0, HeadFuncArg_38, 1) = ((MR_Box) (HeadMLDS_Type_36));
                  MR_hl_field(0, HeadFuncArg_38, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (HeadFuncArg_38));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailFuncArgs_27));
                }
                *HeadVar__6_6 = TailRetTypes_28;
                *HeadVar__7_7 = TailByRefOutputVars_29;
                *HeadVar__8_8 = TailCopiedOutputVars_30;
              }
              break;
            case (MR_Integer) 1:
              {
                switch (CopyOutWhen_2) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = (TailTuples_21 == (MR_Word) ((MR_Unsigned) 0U));
                    break;
                }
                if (succeeded)
                {
                  *HeadVar__5_5 = TailFuncArgs_27;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__6_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (HeadMLDS_Type_36));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailRetTypes_28));
                  }
                  *HeadVar__7_7 = TailByRefOutputVars_29;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__8_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar_31));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailCopiedOutputVars_30));
                  }
                  *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_41_41;
                }
                else
                {
                  MR_Word HeadMLDS_ArgType_44;
                  MR_Word HeadFuncArg_45;

                  {
                    HeadMLDS_ArgType_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, HeadMLDS_ArgType_44, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                    MR_hl_field(3, HeadMLDS_ArgType_44, 1) = ((MR_Box) (HeadMLDS_Type_36));
                  }
                  *STATE_VARIABLE_MaybeInfo_10 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    HeadFuncArg_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, HeadFuncArg_45, 0) = ((MR_Box) (HeadMLDSVar_32));
                    MR_hl_field(0, HeadFuncArg_45, 1) = ((MR_Box) (HeadMLDS_ArgType_44));
                    MR_hl_field(0, HeadFuncArg_45, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (HeadFuncArg_45));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailFuncArgs_27));
                  }
                  *HeadVar__6_6 = TailRetTypes_28;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__7_7 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar_31));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailByRefOutputVars_29));
                  }
                  *HeadVar__8_8 = TailCopiedOutputVars_30;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                *HeadVar__5_5 = TailFuncArgs_27;
                *HeadVar__6_6 = TailRetTypes_28;
                *HeadVar__7_7 = TailByRefOutputVars_29;
                *HeadVar__8_8 = TailCopiedOutputVars_30;
                *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_41_41;
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_args_util__package_vars_types_modes_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarTable_8,
  MR_Word Vars_9,
  MR_Word Types_10,
  MR_Word Modes_11,
  MR_Word * ArgTuples_12)
{
  MR_bool succeeded = (Vars_9 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
    succeeded = (Types_10 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (Modes_11 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    *ArgTuples_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadVar_13;
    MR_Word TailVars_14;
    MR_Word HeadType_15;
    MR_Word TailTypes_16;
    MR_Word HeadMode_17;
    MR_Word TailModes_18;

    succeeded = (Vars_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadVar_13 = ((MR_Word) ((MR_hl_field(1, Vars_9, (MR_Integer) 0))));
      TailVars_14 = ((MR_Word) ((MR_hl_field(1, Vars_9, (MR_Integer) 1))));
      succeeded = (Types_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadType_15 = ((MR_Word) ((MR_hl_field(1, Types_10, (MR_Integer) 0))));
        TailTypes_16 = ((MR_Word) ((MR_hl_field(1, Types_10, (MR_Integer) 1))));
        succeeded = (Modes_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadMode_17 = ((MR_Word) ((MR_hl_field(1, Modes_11, (MR_Integer) 0))));
          TailModes_18 = ((MR_Word) ((MR_hl_field(1, Modes_11, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TailArgTuples_19;
      MR_Word HeadTopFunctorMode_20;
      MR_Word HeadVarEntry_21;
      MR_Word HeadMLDSVarName_22;
      MR_Word HeadArgTuple_23;

      ml_backend__ml_args_util__package_vars_types_modes_6_p_0(ModuleInfo_7, VarTable_8, TailVars_14, TailTypes_16, TailModes_18, &TailArgTuples_19);
      check_hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_7, HeadMode_17, HeadType_15, &HeadTopFunctorMode_20);
      parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_8, HeadVar_13, &HeadVarEntry_21);
      HeadMLDSVarName_22 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(HeadVar_13, HeadVarEntry_21);
      {
        HeadArgTuple_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadArgTuple_23, 0) = ((MR_Box) (HeadVar_13));
        MR_hl_field(0, HeadArgTuple_23, 1) = ((MR_Box) (HeadMLDSVarName_22));
        MR_hl_field(0, HeadArgTuple_23, 2) = ((MR_Box) (HeadType_15));
        MR_hl_field(0, HeadArgTuple_23, 3) = (MR_Box) ((MR_Unsigned) (HeadTopFunctorMode_20));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ArgTuples_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadArgTuple_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailArgTuples_19));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.package_vars_types_modes\'/6", (MR_String) "length mismatch");
        return;
      }
  }
}

MR_Word MR_CALL 
ml_backend__ml_args_util__compute_when_to_copy_out_3_f_0(
  MR_Word CopyOut_5,
  MR_Word CodeModel_6,
  MR_Word PredOrFunc_7)
{
  MR_bool succeeded;
  MR_Word CopyOutWhen_8;

  switch (CopyOut_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        succeeded = (CodeModel_6 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (PredOrFunc_7 == (MR_Integer) 1);
        if (succeeded)
          CopyOutWhen_8 = (MR_Integer) 1;
        else
          CopyOutWhen_8 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      CopyOutWhen_8 = (MR_Integer) 2;
      break;
  }
  return CopyOutWhen_8;
}

void MR_CALL 
ml_backend__ml_args_util__ml_append_return_statement_5_p_0(
  MR_Word CodeModel_6,
  MR_Word Context_7,
  MR_Word CopiedOutputVarRvals_8,
  MR_Word STATE_VARIABLE_Stmts_0_17,
  MR_Word * STATE_VARIABLE_Stmts_18)
{
  switch (CodeModel_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      if ((CopiedOutputVarRvals_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Stmts_18 = STATE_VARIABLE_Stmts_0_17;
      else
      {
        MR_Word Var_25;
        MR_Word ReturnStmt_27;

        {
          ReturnStmt_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ReturnStmt_27, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, ReturnStmt_27, 1) = ((MR_Box) (CopiedOutputVarRvals_8));
          MR_hl_field(3, ReturnStmt_27, 2) = ((MR_Box) (Context_7));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (ReturnStmt_27));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), STATE_VARIABLE_Stmts_0_17, Var_25);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Stmts_18 = STATE_VARIABLE_Stmts_0_17;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ReturnedRvals_13;
        MR_Word ReturnStmt_14;
        MR_Word Var_22;

        {
          ReturnedRvals_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ReturnedRvals_13, 0) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_args_util_scalar_common_3[0])));
          MR_hl_field(1, ReturnedRvals_13, 1) = ((MR_Box) (CopiedOutputVarRvals_8));
        }
        {
          ReturnStmt_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ReturnStmt_14, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, ReturnStmt_14, 1) = ((MR_Box) (ReturnedRvals_13));
          MR_hl_field(3, ReturnStmt_14, 2) = ((MR_Box) (Context_7));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (ReturnStmt_14));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), STATE_VARIABLE_Stmts_0_17, Var_22);
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____copy_out_when_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_args_util____Unify____copy_out_when_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_args_util____Compare____copy_out_when_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_args_util____Compare____copy_out_when_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____ml_call_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_args_util____Unify____ml_call_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_args_util____Compare____ml_call_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_args_util____Compare____ml_call_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____var_mvar_type_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_args_util____Unify____var_mvar_type_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_args_util____Compare____var_mvar_type_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_args_util____Compare____var_mvar_type_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____what_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_args_util____Unify____what_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_args_util____Compare____what_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_args_util____Compare____what_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__ml_args_util__init(void)
{
}

void mercury__ml_backend__ml_args_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_copy_out_when_0);
	MR_register_type_ctor_info(&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_ml_call_arg_0);
	MR_register_type_ctor_info(&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0);
	MR_register_type_ctor_info(&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_what_params_0);
}

void mercury__ml_backend__ml_args_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_args_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_args_util.
