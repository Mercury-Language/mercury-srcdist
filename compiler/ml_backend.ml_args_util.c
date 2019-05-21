/*
** Automatically generated from `ml_args_util.m'
** by the Mercury compiler,
** version rotd-2017-10-08
** configured for x86_64-pc-linux-gnu.
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


// :- module ml_backend.ml_args_util.
// :- implementation.

/*
INIT mercury__ml_backend__ml_args_util__init
ENDINIT
*/

#include "ml_backend.ml_args_util.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "queue.mih"
#include "random.mih"
#include "require.mih"
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
#include "ml_backend.ml_accurate_gc.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_args_util__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_1;

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_2;

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_value_ordered_copy_out_when_0[3];

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

static const MR_DuFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_var_mvar_type_mode_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_var_mvar_type_mode_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_args_util__ml_backend__ml_args_util__du_ptag_ordered_var_mvar_type_mode_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_name_ordered_var_mvar_type_mode_0[1];

static const MR_Integer ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_var_mvar_type_mode_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_what_params_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_what_params_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_value_ordered_what_params_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_name_ordered_what_params_0[2];

static const MR_Integer ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_what_params_0[2];

static MR_bool MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__pred__ml_gen_proc_params_inputs_only_no_gc_stmts__496__1_2_p_0(
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
ml_backend__ml_args_util__ml_gen_tscc_arg_decls_17_p_0(
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
  MR_Word * HeadVar__17_17);

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
  MR_Word VarSet_8,
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


static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_1[8][2];

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_2[2][3];

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_3[2][1];

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_4[1][5];




static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_args_util_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_args_util_scalar_common_3[1])))
  },
};

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_2[0])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_args_util__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_args_util__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_args_util__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_0 = {
  (MR_String) "copy_out_never",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_1 = {
  (MR_String) "copy_out_only_last_arg",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_copy_out_when_0_2 = {
  (MR_String) "copy_out_always",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_value_ordered_copy_out_when_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_args_util____Unify____copy_out_when_0_0_10001)),
  ((MR_Box) (ml_backend__ml_args_util____Compare____copy_out_when_0_0_10001)),
  (MR_String) "ml_backend.ml_args_util",
  (MR_String) "copy_out_when",
  {     ml_backend__ml_args_util__ml_backend__ml_args_util__enum_name_ordered_copy_out_when_0 },
  {     ml_backend__ml_args_util__ml_backend__ml_args_util__enum_value_ordered_copy_out_when_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_copy_out_when_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_args_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_ml_call_arg_0_0[1] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_args_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_ml_call_arg_0_0 = {
  (MR_String) "arg_not_for_closure_wrapper",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_ml_call_arg_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_ml_call_arg_0_1[3] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_ml_call_arg_0_1 = {
  (MR_String) "arg_for_closure_wrapper",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_ml_call_arg_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_ml_call_arg_0_0[1] = {
  &ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_ml_call_arg_0_0
};

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_ml_call_arg_0_1[1] = {
  &ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_ml_call_arg_0_1
};

static const MR_DuPtagLayout ml_backend__ml_args_util__ml_backend__ml_args_util__du_ptag_ordered_ml_call_arg_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_ml_call_arg_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_ml_call_arg_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_args_util____Unify____ml_call_arg_0_0_10001)),
  ((MR_Box) (ml_backend__ml_args_util____Compare____ml_call_arg_0_0_10001)),
  (MR_String) "ml_backend.ml_args_util",
  (MR_String) "ml_call_arg",
  {     ml_backend__ml_args_util__ml_backend__ml_args_util__du_name_ordered_ml_call_arg_0 },
  {     ml_backend__ml_args_util__ml_backend__ml_args_util__du_ptag_ordered_ml_call_arg_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_ml_call_arg_0
};

static const MR_PseudoTypeInfo ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_var_mvar_type_mode_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_args_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_top_functor_mode_0
};

static const MR_DuFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_var_mvar_type_mode_0_0 = {
  (MR_String) "var_mvar_type_mode",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_args_util__ml_backend__ml_args_util__field_types_var_mvar_type_mode_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_var_mvar_type_mode_0_0[1] = {
  &ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_var_mvar_type_mode_0_0
};

static const MR_DuPtagLayout ml_backend__ml_args_util__ml_backend__ml_args_util__du_ptag_ordered_var_mvar_type_mode_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_args_util__ml_backend__ml_args_util__du_stag_ordered_var_mvar_type_mode_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__du_name_ordered_var_mvar_type_mode_0[1] = {
  &ml_backend__ml_args_util__ml_backend__ml_args_util__du_functor_desc_var_mvar_type_mode_0_0
};

static const MR_Integer ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_var_mvar_type_mode_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_args_util____Unify____var_mvar_type_mode_0_0_10001)),
  ((MR_Box) (ml_backend__ml_args_util____Compare____var_mvar_type_mode_0_0_10001)),
  (MR_String) "ml_backend.ml_args_util",
  (MR_String) "var_mvar_type_mode",
  {     ml_backend__ml_args_util__ml_backend__ml_args_util__du_name_ordered_var_mvar_type_mode_0 },
  {     ml_backend__ml_args_util__ml_backend__ml_args_util__du_ptag_ordered_var_mvar_type_mode_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_var_mvar_type_mode_0
};

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_what_params_0_0 = {
  (MR_String) "input_params_only",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_what_params_0_1 = {
  (MR_String) "input_and_output_params",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_value_ordered_what_params_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_args_util____Unify____what_params_0_0_10001)),
  ((MR_Box) (ml_backend__ml_args_util____Compare____what_params_0_0_10001)),
  (MR_String) "ml_backend.ml_args_util",
  (MR_String) "what_params",
  {     ml_backend__ml_args_util__ml_backend__ml_args_util__enum_name_ordered_what_params_0 },
  {     ml_backend__ml_args_util__ml_backend__ml_args_util__enum_value_ordered_what_params_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_what_params_0
};

static MR_bool MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__pred__ml_gen_proc_params_inputs_only_no_gc_stmts__496__1_2_p_0(
  MR_Word RetTypes_11,
  MR_Word HeadVar__2_21)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_args_util_scalar_common_1[0], ((MR_Box) (RetTypes_11)), ((MR_Box) (HeadVar__2_21)));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_args_util____Compare____what_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____what_params_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_args_util____Compare____var_mvar_type_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_args_util_scalar_common_1[1], &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        ml_backend__mlds____Compare____mlds_local_var_name_0_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          parse_tree__prog_data____Compare____mer_type_0_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            MR_Integer Var_21 = (MR_Integer) ArgX4_10;
            MR_Integer Var_22 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_21, Var_22);
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
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_args_util_scalar_common_1[1], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
}

void MR_CALL 
ml_backend__ml_args_util____Compare____ml_call_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_23 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ArgY1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ArgY3_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
        MR_Word Var_20;

        ml_backend__mlds____Compare____mlds_local_var_name_0_0(&Var_20, Var_30, ArgY1_15);
        succeeded = (Var_20 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_20;
        else
        {
          MR_Word Var_21;

          ml_backend__mlds____Compare____mlds_lval_0_0(&Var_21, Var_29, ArgY2_17);
          succeeded = (Var_21 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_21;
          else
            parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, Var_28, ArgY3_19);
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_args_util_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Var_31)), ((MR_Box) (ArgY1_5)));
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____ml_call_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
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
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        TypeInfo_16_16 = (MR_Word) &ml_backend__ml_args_util_scalar_common_1[1];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_args_util____Compare____copy_out_when_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____copy_out_when_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
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
  {
    MR_bool succeeded = (CalleeTypes_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (CalleeModes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (CallerArgs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *STATE_VARIABLE_InputRvals_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_OutputLvalsTypes_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ConvOutputDefns_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ConvOutputStmts_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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

      succeeded = ((MR_tag((MR_Word) CalleeTypes_18)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        CalleeType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), CalleeTypes_18, (MR_Integer) 0)));
        CalleeTypesTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), CalleeTypes_18, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) CalleeModes_19)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          CalleeMode_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), CalleeModes_19, (MR_Integer) 0)));
          CalleeModesTail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), CalleeModes_19, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) CallerArgs_20)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            CallerArg_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallerArgs_20, (MR_Integer) 0)));
            CallerArgsTail_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallerArgs_20, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Integer Var_42 = (ArgNum_17 + (MR_Integer) 1);
        MR_Word STATE_VARIABLE_InputRvals_43_43;
        MR_Word STATE_VARIABLE_OutputLvalsTypes_44_44;
        MR_Word STATE_VARIABLE_ConvOutputDefns_45_45;
        MR_Word STATE_VARIABLE_ConvOutputStmts_46_46;
        MR_Word STATE_VARIABLE_Info_47_47;
        MR_Word ModuleInfo_79;
        MR_Word CalleeArgTopFunctorMode_80;
        MR_Word CalleeIsDummy_81;

        ml_backend__ml_args_util__ml_gen_args_loop_13_p_1(CopyOutWhen_14, Context_15, WhatParams_16, Var_42, CalleeTypesTail_27, CalleeModesTail_29, CallerArgsTail_31, &STATE_VARIABLE_InputRvals_43_43, &STATE_VARIABLE_OutputLvalsTypes_44_44, &STATE_VARIABLE_ConvOutputDefns_45_45, &STATE_VARIABLE_ConvOutputStmts_46_46, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_47_47);
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_47_47, &ModuleInfo_79);
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_79, CalleeMode_28, CalleeType_26, &CalleeArgTopFunctorMode_80);
        CalleeIsDummy_81 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_79, CalleeType_26);
        switch (CalleeIsDummy_81) {
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
              MR_Word CallerMLDSVarName_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallerArg_30, (MR_Integer) 0)));
              MR_Word CallerVarLval_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallerArg_30, (MR_Integer) 1)));
              MR_Word CallerType_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallerArg_30, (MR_Integer) 2)));

              switch (CalleeArgTopFunctorMode_80) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word CallerIsDummy_88;
                    MR_Word CallerVarRval_89;
                    MR_Word ArgRval_90;

                    CallerIsDummy_88 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_79, CallerType_86);
                    switch (CallerIsDummy_88) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          CallerVarRval_89 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[7]);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          CallerVarRval_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), CallerVarRval_89, 0) = ((MR_Box) (CallerVarLval_85));
                        }
                        break;
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_79, CallerType_86, CalleeType_26, (MR_Integer) 0, CallerVarRval_89, &ArgRval_90);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_InputRvals_32 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgRval_90));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_InputRvals_43_43));
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
                        MR_Word ArgLval_91;
                        MR_Word ThisArgConvDecls_92;
                        MR_Word ThisArgConvOutput_94;
                        MR_Word _ThisArgConvInput_93;

                        ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(CallerType_86, CalleeType_26, (MR_Integer) 0, CallerVarLval_85, CallerMLDSVarName_84, Context_15, (MR_Integer) 1, ArgNum_17, &ArgLval_91, &ThisArgConvDecls_92, &_ThisArgConvInput_93, &ThisArgConvOutput_94, STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_37);
                        *STATE_VARIABLE_ConvOutputDefns_34 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ThisArgConvDecls_92, STATE_VARIABLE_ConvOutputDefns_45_45);
                        *STATE_VARIABLE_ConvOutputStmts_35 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ThisArgConvOutput_94, STATE_VARIABLE_ConvOutputStmts_46_46);
                        switch (CopyOutWhen_14) {
                          default:
                            succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 2:
                            succeeded = MR_TRUE;
                            break;
                          case (MR_Integer) 1:
                            succeeded = (CallerArgsTail_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            break;
                        }
                        if (succeeded)
                        {
                          MR_Word OutputType_95;
                          MR_Word Var_101;

                          ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_37, CalleeType_26, &OutputType_95);
                          {
                            Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (ArgLval_91));
                            MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (OutputType_95));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *STATE_VARIABLE_OutputLvalsTypes_33 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_101));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OutputLvalsTypes_44_44));
                          }
                          *STATE_VARIABLE_InputRvals_32 = STATE_VARIABLE_InputRvals_43_43;
                        }
                        else
                        {
                          MR_Word Var_103;
                          MR_Word Rval_111;
                          MR_Word Var_112;

                          succeeded = ((MR_tag((MR_Word) ArgLval_91)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Rval_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgLval_91, (MR_Integer) 0)));
                            Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgLval_91, (MR_Integer) 1)));
                            Var_103 = Rval_111;
                          }
                          else
                            {
                              Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                              MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (ArgLval_91));
                            }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *STATE_VARIABLE_InputRvals_32 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_103));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_InputRvals_43_43));
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
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.ml_gen_args_loop\'/13", (MR_String) "length mismatch");
          return;
        }
      }
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
  {
    MR_bool succeeded = (CalleeTypes_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (CalleeModes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (CallerArgs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *STATE_VARIABLE_InputRvals_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_OutputLvalsTypes_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ConvOutputDefns_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ConvOutputStmts_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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

      succeeded = ((MR_tag((MR_Word) CalleeTypes_18)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        CalleeType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), CalleeTypes_18, (MR_Integer) 0)));
        CalleeTypesTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), CalleeTypes_18, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) CalleeModes_19)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          CalleeMode_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), CalleeModes_19, (MR_Integer) 0)));
          CalleeModesTail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), CalleeModes_19, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) CallerArgs_20)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            CallerArg_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallerArgs_20, (MR_Integer) 0)));
            CallerArgsTail_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallerArgs_20, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Integer Var_42 = (ArgNum_17 + (MR_Integer) 1);
        MR_Word STATE_VARIABLE_InputRvals_43_43;
        MR_Word STATE_VARIABLE_OutputLvalsTypes_44_44;
        MR_Word STATE_VARIABLE_ConvOutputDefns_45_45;
        MR_Word STATE_VARIABLE_ConvOutputStmts_46_46;
        MR_Word STATE_VARIABLE_Info_47_47;
        MR_Word ModuleInfo_79;
        MR_Word CalleeArgTopFunctorMode_80;
        MR_Word CalleeIsDummy_81;

        ml_backend__ml_args_util__ml_gen_args_loop_13_p_0(CopyOutWhen_14, Context_15, WhatParams_16, Var_42, CalleeTypesTail_27, CalleeModesTail_29, CallerArgsTail_31, &STATE_VARIABLE_InputRvals_43_43, &STATE_VARIABLE_OutputLvalsTypes_44_44, &STATE_VARIABLE_ConvOutputDefns_45_45, &STATE_VARIABLE_ConvOutputStmts_46_46, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_47_47);
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_47_47, &ModuleInfo_79);
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_79, CalleeMode_28, CalleeType_26, &CalleeArgTopFunctorMode_80);
        CalleeIsDummy_81 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_79, CalleeType_26);
        switch (CalleeIsDummy_81) {
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
              MR_Word CallerArgVar_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallerArg_30, (MR_Integer) 0)));
              MR_Word VarSet_83;
              MR_Word CallerMLDSVarName_84;
              MR_Word CallerVarLval_85;
              MR_Word CallerType_86;

              ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(STATE_VARIABLE_Info_47_47, &VarSet_83);
              CallerMLDSVarName_84 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(VarSet_83, CallerArgVar_82);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_47_47, CallerArgVar_82, &CallerVarLval_85);
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_47_47, CallerArgVar_82, &CallerType_86);
              switch (CalleeArgTopFunctorMode_80) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word CallerIsDummy_88;
                    MR_Word CallerVarRval_89;
                    MR_Word ArgRval_90;

                    CallerIsDummy_88 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_79, CallerType_86);
                    switch (CallerIsDummy_88) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          CallerVarRval_89 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[7]);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          CallerVarRval_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), CallerVarRval_89, 0) = ((MR_Box) (CallerVarLval_85));
                        }
                        break;
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_79, CallerType_86, CalleeType_26, (MR_Integer) 0, CallerVarRval_89, &ArgRval_90);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_InputRvals_32 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgRval_90));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_InputRvals_43_43));
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
                        MR_Word ArgLval_91;
                        MR_Word ThisArgConvDecls_92;
                        MR_Word ThisArgConvOutput_94;
                        MR_Word _ThisArgConvInput_93;

                        ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(CallerType_86, CalleeType_26, (MR_Integer) 0, CallerVarLval_85, CallerMLDSVarName_84, Context_15, (MR_Integer) 0, ArgNum_17, &ArgLval_91, &ThisArgConvDecls_92, &_ThisArgConvInput_93, &ThisArgConvOutput_94, STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_37);
                        *STATE_VARIABLE_ConvOutputDefns_34 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ThisArgConvDecls_92, STATE_VARIABLE_ConvOutputDefns_45_45);
                        *STATE_VARIABLE_ConvOutputStmts_35 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ThisArgConvOutput_94, STATE_VARIABLE_ConvOutputStmts_46_46);
                        switch (CopyOutWhen_14) {
                          default:
                            succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 2:
                            succeeded = MR_TRUE;
                            break;
                          case (MR_Integer) 1:
                            succeeded = (CallerArgsTail_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            break;
                        }
                        if (succeeded)
                        {
                          MR_Word OutputType_95;
                          MR_Word Var_101;

                          ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_37, CalleeType_26, &OutputType_95);
                          {
                            Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (ArgLval_91));
                            MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (OutputType_95));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *STATE_VARIABLE_OutputLvalsTypes_33 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_101));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OutputLvalsTypes_44_44));
                          }
                          *STATE_VARIABLE_InputRvals_32 = STATE_VARIABLE_InputRvals_43_43;
                        }
                        else
                        {
                          MR_Word Var_103;
                          MR_Word Rval_111;
                          MR_Word Var_112;

                          succeeded = ((MR_tag((MR_Word) ArgLval_91)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Rval_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgLval_91, (MR_Integer) 0)));
                            Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgLval_91, (MR_Integer) 1)));
                            Var_103 = Rval_111;
                          }
                          else
                            {
                              Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                              MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (ArgLval_91));
                            }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *STATE_VARIABLE_InputRvals_32 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_103));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_InputRvals_43_43));
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
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.ml_gen_args_loop\'/13", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_args_util__wrap_plain_not_fcw_args_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Vars_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_5;
      MR_Word Var_6;

      {
        Var_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_5, 0) = ((MR_Box) (Var_3));
      }
      Var_6 = ml_backend__ml_args_util__wrap_plain_not_fcw_args_1_f_0(Vars_4);
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_6));
      }
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_args_util__wrap_plain_not_fcw_arg_1_f_0(
  MR_Word Var_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_3));
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
ml_backend__ml_args_util__ml_gen_tscc_arg_params_19_p_0(
  MR_Word ModuleInfo_20,
  MR_Word PredOrFunc_21,
  MR_Word CodeModel_22,
  MR_Word Context_23,
  MR_Word ProcIdInTscc_24,
  MR_Word VarSet_25,
  MR_Word Vars_26,
  MR_Word Types_27,
  MR_Word Modes_28,
  MR_Word * ArgTuples_29,
  MR_Word STATE_VARIABLE_OutArgNames_0_51,
  MR_Word * STATE_VARIABLE_OutArgNames_52,
  MR_Word * TsccInArgs_31,
  MR_Word * TsccInLocalVarDefns_32,
  MR_Word * FuncParams_33,
  MR_Word * OwnLocalVarDefns_34,
  MR_Word * CopyTsccToOwnStmts_35,
  MR_Word * CopyOwnToTsccStmts_36,
  MR_Word * ReturnRvals_37)
{
  {
    MR_bool succeeded;
    MR_Word Globals_38;
    MR_Word TsccArgs_43;
    MR_Word ReturnTypes_46;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_20, &Globals_38);
    ml_backend__ml_args_util__package_vars_types_modes_6_p_0(ModuleInfo_20, VarSet_25, Vars_26, Types_27, Modes_28, ArgTuples_29);
    switch (CodeModel_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word CopyOut_39;
          MR_Word CopyOutWhen_40;
          MR_Word ReturnTypes0_44;
          MR_Word ReturnRvals0_45;

          libs__globals__lookup_bool_option_3_p_0(Globals_38, (MR_Integer) 266, &CopyOut_39);
          switch (CopyOut_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = (CodeModel_22 == (MR_Integer) 0);
                if (succeeded)
                  succeeded = (PredOrFunc_21 == (MR_Integer) 1);
                if (succeeded)
                  CopyOutWhen_40 = (MR_Integer) 1;
                else
                  CopyOutWhen_40 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              CopyOutWhen_40 = (MR_Integer) 2;
              break;
          }
          ml_backend__ml_args_util__ml_gen_tscc_arg_decls_17_p_0(ModuleInfo_20, CopyOutWhen_40, Context_23, ProcIdInTscc_24, *ArgTuples_29, (MR_Integer) 1, (MR_Integer) 1, STATE_VARIABLE_OutArgNames_0_51, STATE_VARIABLE_OutArgNames_52, TsccInArgs_31, TsccInLocalVarDefns_32, &TsccArgs_43, &ReturnTypes0_44, &ReturnRvals0_45, OwnLocalVarDefns_34, CopyTsccToOwnStmts_35, CopyOwnToTsccStmts_36);
          switch (CodeModel_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ReturnTypes_46 = ReturnTypes0_44;
                *ReturnRvals_37 = ReturnRvals0_45;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  ReturnTypes_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ReturnTypes_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  MR_hl_field(MR_mktag(1), ReturnTypes_46, 1) = ((MR_Box) (ReturnTypes0_44));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ReturnRvals_37 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_args_util_scalar_common_3[0])));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ReturnRvals0_45));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CopyOut_66;
          MR_Word CopyOutWhen_67;
          MR_Word ReturnTypes0_68;
          MR_Word ReturnRvals0_69;

          libs__globals__lookup_bool_option_3_p_0(Globals_38, (MR_Integer) 267, &CopyOut_66);
          switch (CopyOut_66) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CopyOutWhen_67 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              CopyOutWhen_67 = (MR_Integer) 2;
              break;
          }
          ml_backend__ml_args_util__ml_gen_tscc_arg_decls_17_p_0(ModuleInfo_20, CopyOutWhen_67, Context_23, ProcIdInTscc_24, *ArgTuples_29, (MR_Integer) 1, (MR_Integer) 1, STATE_VARIABLE_OutArgNames_0_51, STATE_VARIABLE_OutArgNames_52, TsccInArgs_31, TsccInLocalVarDefns_32, &TsccArgs_43, &ReturnTypes0_68, &ReturnRvals0_69, OwnLocalVarDefns_34, CopyTsccToOwnStmts_35, CopyOwnToTsccStmts_36);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.ml_gen_tscc_arg_params\'/19", (MR_String) "model_non");
            return;
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *FuncParams_33 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TsccArgs_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ReturnTypes_46));
    }
  }
}

static void MR_CALL 
ml_backend__ml_args_util__ml_gen_tscc_arg_decls_17_p_0(
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
  MR_Word * HeadVar__17_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_OutArgNames_9 = STATE_VARIABLE_OutArgNames_0_8;
    }
    else
    {
      MR_Word HeadTuple_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
      MR_Word TailTuples_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
      MR_Word HeadMLDSVarName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_31, (MR_Integer) 1)));
      MR_Word HeadType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_31, (MR_Integer) 2)));
      MR_Word HeadMode_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_31, (MR_Integer) 3)));
      MR_Word HeadIsDummy_48;
      MR_Word _HeadVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_31, (MR_Integer) 0)));

      HeadIsDummy_48 = check_hlds__type_util__check_dummy_type_2_f_0(HeadVar__1_1, HeadType_46);
      switch (HeadIsDummy_48) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__5_5 = TailTuples_32;

            // direct tailcall eliminated
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String HeadVarNameStr_49;
            MR_Word HeadMLDS_Type_50;

            HeadVarNameStr_49 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(HeadMLDSVarName_45);
            HeadMLDS_Type_50 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(HeadVar__1_1, HeadType_46);
            switch (HeadMode_47) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TypeCtorInfo_136_136;
                  MR_Word TypeCtorInfo_140_140;
                  MR_Integer NextInArgNum_52 = (HeadVar__6_6 + (MR_Integer) 1);
                  MR_Word HeadTsccVar_54;
                  MR_Word HeadTsccArg_56;
                  MR_Word HeadOwnLocalVarDefn_60;
                  MR_Word HeadMLDSVarLval_61;
                  MR_Word HeadTsccVarLval_62;
                  MR_Word HeadTsccInArgs_63;
                  MR_Word HeadTsccInLocalVarDefn_64;
                  MR_Word HeadTsccInLocalVarDefns_65;
                  MR_Word HeadCopyTsccToOwnStmts_66;
                  MR_Word TailTsccInArgs_71;
                  MR_Word TailTsccInLocalVarDefns_72;
                  MR_Word TailTsccArgs_73;
                  MR_Word TailReturnTypes_74;
                  MR_Word TailReturnRvals_75;
                  MR_Word TailOwnLocalVarDefns_76;
                  MR_Word TailCopyTsccToOwnStmts_77;
                  MR_Word TailCopyOwnToTsccStmts_78;
                  MR_Word Var_109;
                  MR_Word Var_110;
                  MR_Word Var_111;

                  {
                    HeadTsccVar_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), HeadTsccVar_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), HeadTsccVar_54, 1) = ((MR_Box) (HeadVar__4_4));
                    MR_hl_field(MR_mktag(3), HeadTsccVar_54, 2) = ((MR_Box) (HeadVar__6_6));
                    MR_hl_field(MR_mktag(3), HeadTsccVar_54, 3) = ((MR_Box) (HeadVarNameStr_49));
                  }
                  {
                    HeadTsccArg_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), HeadTsccArg_56, 0) = ((MR_Box) (HeadTsccVar_54));
                    MR_hl_field(MR_mktag(0), HeadTsccArg_56, 1) = ((MR_Box) (HeadMLDS_Type_50));
                    MR_hl_field(MR_mktag(0), HeadTsccArg_56, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    HeadTsccInArgs_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadTsccInArgs_63, 0) = ((MR_Box) (HeadTsccArg_56));
                    MR_hl_field(MR_mktag(1), HeadTsccInArgs_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    HeadOwnLocalVarDefn_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_60, 0) = ((MR_Box) (HeadMLDSVarName_45));
                    MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_60, 1) = ((MR_Box) (HeadVar__3_3));
                    MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_60, 2) = ((MR_Box) (HeadMLDS_Type_50));
                    MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_60, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_60, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    HeadMLDSVarLval_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), HeadMLDSVarLval_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), HeadMLDSVarLval_61, 1) = ((MR_Box) (HeadMLDSVarName_45));
                    MR_hl_field(MR_mktag(3), HeadMLDSVarLval_61, 2) = ((MR_Box) (HeadMLDS_Type_50));
                  }
                  {
                    HeadTsccVarLval_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), HeadTsccVarLval_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), HeadTsccVarLval_62, 1) = ((MR_Box) (HeadTsccVar_54));
                    MR_hl_field(MR_mktag(3), HeadTsccVarLval_62, 2) = ((MR_Box) (HeadMLDS_Type_50));
                  }
                  {
                    HeadTsccInLocalVarDefn_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), HeadTsccInLocalVarDefn_64, 0) = ((MR_Box) (HeadTsccVar_54));
                    MR_hl_field(MR_mktag(0), HeadTsccInLocalVarDefn_64, 1) = ((MR_Box) (HeadVar__3_3));
                    MR_hl_field(MR_mktag(0), HeadTsccInLocalVarDefn_64, 2) = ((MR_Box) (HeadMLDS_Type_50));
                    MR_hl_field(MR_mktag(0), HeadTsccInLocalVarDefn_64, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), HeadTsccInLocalVarDefn_64, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    HeadTsccInLocalVarDefns_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadTsccInLocalVarDefns_65, 0) = ((MR_Box) (HeadTsccInLocalVarDefn_64));
                    MR_hl_field(MR_mktag(1), HeadTsccInLocalVarDefns_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    Var_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_111, 0) = ((MR_Box) (HeadTsccVarLval_62));
                  }
                  {
                    Var_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_110, 0) = ((MR_Box) (HeadMLDSVarLval_61));
                    MR_hl_field(MR_mktag(2), Var_110, 1) = ((MR_Box) (Var_111));
                  }
                  {
                    Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                    MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (Var_110));
                    MR_hl_field(MR_mktag(3), Var_109, 2) = ((MR_Box) (HeadVar__3_3));
                  }
                  {
                    HeadCopyTsccToOwnStmts_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadCopyTsccToOwnStmts_66, 0) = ((MR_Box) (Var_109));
                    MR_hl_field(MR_mktag(1), HeadCopyTsccToOwnStmts_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  ml_backend__ml_args_util__ml_gen_tscc_arg_decls_17_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, TailTuples_32, NextInArgNum_52, HeadVar__7_7, STATE_VARIABLE_OutArgNames_0_8, STATE_VARIABLE_OutArgNames_9, &TailTsccInArgs_71, &TailTsccInLocalVarDefns_72, &TailTsccArgs_73, &TailReturnTypes_74, &TailReturnRvals_75, &TailOwnLocalVarDefns_76, &TailCopyTsccToOwnStmts_77, &TailCopyOwnToTsccStmts_78);
                  TypeCtorInfo_136_136 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0;
                  *HeadVar__10_10 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_136_136, HeadTsccInArgs_63, TailTsccInArgs_71);
                  *HeadVar__11_11 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, HeadTsccInLocalVarDefns_65, TailTsccInLocalVarDefns_72);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_136_136, HeadTsccInArgs_63, TailTsccArgs_73);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TailReturnTypes_74);
                  *HeadVar__14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TailReturnRvals_75);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__15_15 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadOwnLocalVarDefn_60));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailOwnLocalVarDefns_76));
                  }
                  TypeCtorInfo_140_140 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
                  *HeadVar__16_16 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_140_140, HeadCopyTsccToOwnStmts_66, TailCopyTsccToOwnStmts_77);
                  *HeadVar__17_17 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_140_140, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TailCopyOwnToTsccStmts_78);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeCtorInfo_136_160;
                  MR_Word TypeCtorInfo_140_164;
                  MR_String OutArgName_70;
                  MR_Word HeadTsccVar_127;
                  MR_Integer NextOutArgNum_142 = (HeadVar__7_7 + (MR_Integer) 1);
                  MR_Word HeadTsccArgs_143;
                  MR_Word HeadReturnTypes_144;
                  MR_Word HeadReturnRvals_145;
                  MR_Word HeadOwnLocalVarDefn_146;
                  MR_Word HeadCopyTsccToOwnStmts_149;
                  MR_Word HeadCopyOwnToTsccStmts_150;
                  MR_Word TailTsccInArgs_151;
                  MR_Word TailTsccInLocalVarDefns_152;
                  MR_Word TailTsccArgs_153;
                  MR_Word TailReturnTypes_154;
                  MR_Word TailReturnRvals_155;
                  MR_Word TailOwnLocalVarDefns_156;
                  MR_Word TailCopyTsccToOwnStmts_157;
                  MR_Word TailCopyOwnToTsccStmts_158;
                  MR_Word STATE_VARIABLE_OutArgNames_82_159;
                  MR_String OldOutArgName_69;
                  MR_Box conv0_OldOutArgName_69;

                  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, STATE_VARIABLE_OutArgNames_0_8, HeadVar__7_7, &conv0_OldOutArgName_69);
                  if (succeeded)
                  {
                    OldOutArgName_69 = ((MR_String) conv0_OldOutArgName_69);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    OutArgName_70 = OldOutArgName_69;
                    STATE_VARIABLE_OutArgNames_82_159 = STATE_VARIABLE_OutArgNames_0_8;
                  }
                  else
                  {
                    OutArgName_70 = HeadVarNameStr_49;
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, HeadVar__7_7, ((MR_Box) (OutArgName_70)), STATE_VARIABLE_OutArgNames_0_8, &STATE_VARIABLE_OutArgNames_82_159);
                  }
                  {
                    HeadTsccVar_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), HeadTsccVar_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), HeadTsccVar_127, 1) = ((MR_Box) (HeadVar__7_7));
                    MR_hl_field(MR_mktag(3), HeadTsccVar_127, 2) = ((MR_Box) (OutArgName_70));
                  }
                  switch (HeadVar__2_2) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = (TailTuples_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      break;
                  }
                  if (succeeded)
                  {
                    MR_Word Var_84;
                    MR_Word Var_88;
                    MR_Word Var_89;
                    MR_Word Var_90;
                    MR_Word HeadMLDSVarLval_117;
                    MR_Word HeadTsccVarLval_118;

                    HeadTsccArgs_143 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      HeadReturnTypes_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), HeadReturnTypes_144, 0) = ((MR_Box) (HeadMLDS_Type_50));
                      MR_hl_field(MR_mktag(1), HeadReturnTypes_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      HeadOwnLocalVarDefn_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_146, 0) = ((MR_Box) (HeadTsccVar_127));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_146, 1) = ((MR_Box) (HeadVar__3_3));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_146, 2) = ((MR_Box) (HeadMLDS_Type_50));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_146, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_146, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      HeadMLDSVarLval_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), HeadMLDSVarLval_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), HeadMLDSVarLval_117, 1) = ((MR_Box) (HeadMLDSVarName_45));
                      MR_hl_field(MR_mktag(3), HeadMLDSVarLval_117, 2) = ((MR_Box) (HeadMLDS_Type_50));
                    }
                    {
                      HeadTsccVarLval_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), HeadTsccVarLval_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), HeadTsccVarLval_118, 1) = ((MR_Box) (HeadTsccVar_127));
                      MR_hl_field(MR_mktag(3), HeadTsccVarLval_118, 2) = ((MR_Box) (HeadMLDS_Type_50));
                    }
                    {
                      Var_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_84, 0) = ((MR_Box) (HeadTsccVarLval_118));
                    }
                    {
                      HeadReturnRvals_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), HeadReturnRvals_145, 0) = ((MR_Box) (Var_84));
                      MR_hl_field(MR_mktag(1), HeadReturnRvals_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    HeadCopyTsccToOwnStmts_149 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      Var_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_90, 0) = ((MR_Box) (HeadMLDSVarLval_117));
                    }
                    {
                      Var_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_89, 0) = ((MR_Box) (HeadTsccVarLval_118));
                      MR_hl_field(MR_mktag(2), Var_89, 1) = ((MR_Box) (Var_90));
                    }
                    {
                      Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (Var_89));
                      MR_hl_field(MR_mktag(3), Var_88, 2) = ((MR_Box) (HeadVar__3_3));
                    }
                    {
                      HeadCopyOwnToTsccStmts_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), HeadCopyOwnToTsccStmts_150, 0) = ((MR_Box) (Var_88));
                      MR_hl_field(MR_mktag(1), HeadCopyOwnToTsccStmts_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  else
                  {
                    MR_Word Var_96;
                    MR_Word Var_97;
                    MR_Word Var_98;
                    MR_Word HeadMLDS_ArgType_119;
                    MR_Word HeadTsccArg_120;
                    MR_Word HeadMLDSVarLval_121;
                    MR_Word HeadTsccVarLval_122;

                    {
                      HeadMLDS_ArgType_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), HeadMLDS_ArgType_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), HeadMLDS_ArgType_119, 1) = ((MR_Box) (HeadMLDS_Type_50));
                    }
                    {
                      HeadTsccArg_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), HeadTsccArg_120, 0) = ((MR_Box) (HeadTsccVar_127));
                      MR_hl_field(MR_mktag(0), HeadTsccArg_120, 1) = ((MR_Box) (HeadMLDS_ArgType_119));
                      MR_hl_field(MR_mktag(0), HeadTsccArg_120, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      HeadTsccArgs_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), HeadTsccArgs_143, 0) = ((MR_Box) (HeadTsccArg_120));
                      MR_hl_field(MR_mktag(1), HeadTsccArgs_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    HeadReturnTypes_144 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    HeadReturnRvals_145 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      HeadOwnLocalVarDefn_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_146, 0) = ((MR_Box) (HeadMLDSVarName_45));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_146, 1) = ((MR_Box) (HeadVar__3_3));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_146, 2) = ((MR_Box) (HeadMLDS_ArgType_119));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_146, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_146, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      HeadMLDSVarLval_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), HeadMLDSVarLval_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), HeadMLDSVarLval_121, 1) = ((MR_Box) (HeadMLDSVarName_45));
                      MR_hl_field(MR_mktag(3), HeadMLDSVarLval_121, 2) = ((MR_Box) (HeadMLDS_ArgType_119));
                    }
                    {
                      HeadTsccVarLval_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), HeadTsccVarLval_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), HeadTsccVarLval_122, 1) = ((MR_Box) (HeadTsccVar_127));
                      MR_hl_field(MR_mktag(3), HeadTsccVarLval_122, 2) = ((MR_Box) (HeadMLDS_ArgType_119));
                    }
                    {
                      Var_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_98, 0) = ((MR_Box) (HeadTsccVarLval_122));
                    }
                    {
                      Var_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_97, 0) = ((MR_Box) (HeadMLDSVarLval_121));
                      MR_hl_field(MR_mktag(2), Var_97, 1) = ((MR_Box) (Var_98));
                    }
                    {
                      Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (Var_97));
                      MR_hl_field(MR_mktag(3), Var_96, 2) = ((MR_Box) (HeadVar__3_3));
                    }
                    {
                      HeadCopyTsccToOwnStmts_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), HeadCopyTsccToOwnStmts_149, 0) = ((MR_Box) (Var_96));
                      MR_hl_field(MR_mktag(1), HeadCopyTsccToOwnStmts_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    HeadCopyOwnToTsccStmts_150 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  ml_backend__ml_args_util__ml_gen_tscc_arg_decls_17_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, TailTuples_32, HeadVar__6_6, NextOutArgNum_142, STATE_VARIABLE_OutArgNames_82_159, STATE_VARIABLE_OutArgNames_9, &TailTsccInArgs_151, &TailTsccInLocalVarDefns_152, &TailTsccArgs_153, &TailReturnTypes_154, &TailReturnRvals_155, &TailOwnLocalVarDefns_156, &TailCopyTsccToOwnStmts_157, &TailCopyOwnToTsccStmts_158);
                  TypeCtorInfo_136_160 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0;
                  *HeadVar__10_10 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_136_160, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TailTsccInArgs_151);
                  *HeadVar__11_11 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TailTsccInLocalVarDefns_152);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_136_160, HeadTsccArgs_143, TailTsccArgs_153);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, HeadReturnTypes_144, TailReturnTypes_154);
                  *HeadVar__14_14 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, HeadReturnRvals_145, TailReturnRvals_155);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__15_15 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadOwnLocalVarDefn_146));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailOwnLocalVarDefns_156));
                  }
                  TypeCtorInfo_140_164 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
                  *HeadVar__16_16 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_140_164, HeadCopyTsccToOwnStmts_149, TailCopyTsccToOwnStmts_157);
                  *HeadVar__17_17 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_140_164, HeadCopyOwnToTsccStmts_150, TailCopyOwnToTsccStmts_158);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word next_value_of_HeadVar__5_5 = TailTuples_32;

                  // direct tailcall eliminated
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
  {
    MR_Word _ByRef_19;
    MR_Word _Copied_20;
    MR_Word Var_21;

    ml_backend__ml_args_util__package_vars_mvars_types_modes_6_p_0(ModuleInfo_10, HeadVars_13, HeadMLDSVarNames_14, HeadTypes_15, HeadModes_16, ArgTuples_17);
    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(ModuleInfo_10, PredOrFunc_11, CodeModel_12, *ArgTuples_17, FuncParams_18, &_ByRef_19, &_Copied_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_21);
  }
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
  {
    MR_bool succeeded = (Vars_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (MLDSVarNames_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (Types_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          succeeded = (Modes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    if (succeeded)
      *ArgTuples_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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

      succeeded = ((MR_tag((MR_Word) Vars_8)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_8, (MR_Integer) 0)));
        TailVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_8, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) MLDSVarNames_9)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          HeadMLDSVarName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MLDSVarNames_9, (MR_Integer) 0)));
          TailMLDSVarNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), MLDSVarNames_9, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Types_10)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            HeadType_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_10, (MR_Integer) 0)));
            TailTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_10, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Modes_11)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              HeadMode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_11, (MR_Integer) 0)));
              TailModes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_11, (MR_Integer) 1)));
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
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_7, HeadMode_19, HeadType_17, &HeadTopFunctorMode_22);
        {
          HeadArgTuple_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadArgTuple_23, 0) = ((MR_Box) (HeadVar_13));
          MR_hl_field(MR_mktag(0), HeadArgTuple_23, 1) = ((MR_Box) (HeadMLDSVarName_15));
          MR_hl_field(MR_mktag(0), HeadArgTuple_23, 2) = ((MR_Box) (HeadType_17));
          MR_hl_field(MR_mktag(0), HeadArgTuple_23, 3) = ((MR_Box) (HeadTopFunctorMode_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ArgTuples_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadArgTuple_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailArgTuples_21));
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.package_vars_mvars_types_modes\'/6", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_from_rtti_no_gc_stmts_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word RttiProcId_5)
{
  {
    MR_Word FuncParams_6;
    MR_Word PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 0)));
    MR_Word Detism_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 10)))) & (MR_Integer) 7);
    MR_Word CodeModel_9;
    MR_Word HeadVars_10;
    MR_Word ArgTypes_11;
    MR_Word TopFunctorModes_12;
    MR_Word ArgTuples_13;
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 2)));
    MR_String Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 3)));
    MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 4)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 5)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 6)));
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 7)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 8)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 9)));
    MR_Word Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 11)));
    MR_Word Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_String Var_52;
    MR_Integer Var_53;
    MR_Word Var_55;
    MR_Integer Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word _ByRef_14;
    MR_Word _Copied_15;
    MR_Word Var_16;

    hlds__code_model__determinism_to_code_model_2_p_0(Detism_8, &CodeModel_9);
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 0)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 1)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 2)));
    Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 3)));
    Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 4)));
    ArgTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 5)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 6)));
    Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 7)));
    HeadVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 8)));
    TopFunctorModes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 9)));
    Var_58 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 10)))) & (MR_Integer) 7);
    Var_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 11)));
    Var_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    Var_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ml_backend__ml_args_util__package_rtti_vars_types_topmodes_4_p_0(HeadVars_10, ArgTypes_11, TopFunctorModes_12, &ArgTuples_13);
    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(ModuleInfo_4, PredOrFunc_7, CodeModel_9, ArgTuples_13, &FuncParams_6, &_ByRef_14, &_Copied_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_16);
    return FuncParams_6;
  }
}

static void MR_CALL 
ml_backend__ml_args_util__package_rtti_vars_types_topmodes_4_p_0(
  MR_Word VarPairs_5,
  MR_Word Types_6,
  MR_Word TopFunctorModes_7,
  MR_Word * ArgTuples_8)
{
  {
    MR_bool succeeded = (VarPairs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (Types_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (TopFunctorModes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
      *ArgTuples_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word HeadVarPair_9;
      MR_Word TailVarPairs_10;
      MR_Word HeadType_11;
      MR_Word TailTypes_12;
      MR_Word HeadTopFunctorMode_13;
      MR_Word TailTopFunctorModes_14;

      succeeded = ((MR_tag((MR_Word) VarPairs_5)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadVarPair_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarPairs_5, (MR_Integer) 0)));
        TailVarPairs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarPairs_5, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Types_6)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          HeadType_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_6, (MR_Integer) 0)));
          TailTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_6, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) TopFunctorModes_7)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            HeadTopFunctorMode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), TopFunctorModes_7, (MR_Integer) 0)));
            TailTopFunctorModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), TopFunctorModes_7, (MR_Integer) 1)));
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
        HeadVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVarPair_9, (MR_Integer) 0)));
        HeadVarName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVarPair_9, (MR_Integer) 1)));
        mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, HeadVar_16, &HeadVarNum_18);
        {
          HeadMLDSVarName_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadMLDSVarName_19, 0) = ((MR_Box) (HeadVarName_17));
          MR_hl_field(MR_mktag(0), HeadMLDSVarName_19, 1) = ((MR_Box) (HeadVarNum_18));
        }
        {
          HeadArgTuple_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadArgTuple_20, 0) = ((MR_Box) (HeadVar_16));
          MR_hl_field(MR_mktag(0), HeadArgTuple_20, 1) = ((MR_Box) (HeadMLDSVarName_19));
          MR_hl_field(MR_mktag(0), HeadArgTuple_20, 2) = ((MR_Box) (HeadType_11));
          MR_hl_field(MR_mktag(0), HeadArgTuple_20, 3) = ((MR_Box) (HeadTopFunctorMode_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ArgTuples_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadArgTuple_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailArgTuples_15));
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.package_rtti_vars_types_topmodes\'/4", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_inputs_only_no_gc_stmts_2_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_args_util__IntroducedFrom__pred__ml_gen_proc_params_inputs_only_no_gc_stmts__496__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

MR_Word MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_inputs_only_no_gc_stmts_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredProcId_5)
{
  {
    MR_bool succeeded;
    MR_Word FuncArgs_6;
    MR_Word _PredInfo_7;
    MR_Word ArgTuples_10;
    MR_Word RetTypes_11;
    MR_Word Var_18;
    MR_Word ProcInfo_29;
    MR_Word VarSet_30;
    MR_Word HeadVars_31;
    MR_Word HeadTypes_32;
    MR_Word HeadModes_33;
    MR_Word _PredOrFunc_8;
    MR_Word _CodeModel_9;
    MR_Word _ByRef_12;
    MR_Word _Copied_13;
    MR_Word Var_14;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_4, PredProcId_5, &_PredInfo_7, &ProcInfo_29);
    _PredOrFunc_8 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(_PredInfo_7);
    _CodeModel_9 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_29);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_29, &VarSet_30);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_29, &HeadVars_31);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(_PredInfo_7, &HeadTypes_32);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_29, &HeadModes_33);
    ml_backend__ml_args_util__package_vars_types_modes_6_p_0(ModuleInfo_4, VarSet_30, HeadVars_31, HeadTypes_32, HeadModes_33, &ArgTuples_10);
    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_50_44_32_51_93_95_48_10_p_0(ModuleInfo_4, ArgTuples_10, &FuncArgs_6, &RetTypes_11, &_ByRef_12, &_Copied_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_14);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__ml_args_util_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__ml_args_util__ml_gen_proc_params_inputs_only_no_gc_stmts_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (RetTypes_11));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_18, (MR_String) "function \140ml_backend.ml_args_util.ml_gen_proc_params_inputs_only_no_gc_stmts\'/2", (MR_String) "RetTypes != []");
    return FuncArgs_6;
  }
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
  if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_0_9;
  }
  else
  {
    MR_Word HeadTuple_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
    MR_Word TailTuples_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
    MR_Word TailFuncArgs_27;
    MR_Word TailRetTypes_28;
    MR_Word TailByRefOutputVars_29;
    MR_Word TailCopiedOutputVars_30;
    MR_Word HeadMLDSVar_32;
    MR_Word HeadType_33;
    MR_Word HeadMode_34;
    MR_Word HeadIsDummy_35;
    MR_Word STATE_VARIABLE_MaybeInfo_41_41;
    MR_Word HeadVar_31;

    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_50_44_32_51_93_95_48_10_p_0(ModuleInfo_1, TailTuples_21, &TailFuncArgs_27, &TailRetTypes_28, &TailByRefOutputVars_29, &TailCopiedOutputVars_30, STATE_VARIABLE_MaybeInfo_0_9, &STATE_VARIABLE_MaybeInfo_41_41);
    HeadVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_20, (MR_Integer) 0)));
    HeadMLDSVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_20, (MR_Integer) 1)));
    HeadType_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_20, (MR_Integer) 2)));
    HeadMode_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_20, (MR_Integer) 3)));
    HeadIsDummy_35 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_1, HeadType_33);
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

                *STATE_VARIABLE_MaybeInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  HeadFuncArg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), HeadFuncArg_38, 0) = ((MR_Box) (HeadMLDSVar_32));
                  MR_hl_field(MR_mktag(0), HeadFuncArg_38, 1) = ((MR_Box) (HeadMLDS_Type_36));
                  MR_hl_field(MR_mktag(0), HeadFuncArg_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadFuncArg_38));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailFuncArgs_27));
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
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_14;
    MR_Word PredInfo_15;
    MR_Word PredOrFunc_16;
    MR_Word CodeModel_17;
    MR_Word PredModule_18;
    MR_String PredName_19;
    MR_Integer PredArity_20;
    MR_Word ProcInfo_36;
    MR_Word VarSet_37;
    MR_Word HeadVars_38;
    MR_Word HeadTypes_39;
    MR_Word HeadModes_40;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_22, &ModuleInfo_14);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_14, PredProcId_8, &PredInfo_15, &ProcInfo_36);
    PredOrFunc_16 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_15);
    CodeModel_17 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_36);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_36, &VarSet_37);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_36, &HeadVars_38);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_15, &HeadTypes_39);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_36, &HeadModes_40);
    ml_backend__ml_args_util__package_vars_types_modes_6_p_0(ModuleInfo_14, VarSet_37, HeadVars_38, HeadTypes_39, HeadModes_40, ArgTuples_9);
    PredModule_18 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_15);
    PredName_19 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_15);
    PredArity_20 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_15);
    succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_18, PredName_19, PredArity_20);
    if (succeeded)
    {
      MR_Word Var_21;

      ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(ModuleInfo_14, PredOrFunc_16, CodeModel_17, *ArgTuples_9, FuncParams_10, ByRefOutputVars_11, CopiedOutputVars_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_21);
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
    else
    {
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Globals_52;
      MR_Word FuncArgs_57;
      MR_Word RetTypes_58;

      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (STATE_VARIABLE_Info_0_22));
      }
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_14, &Globals_52);
      switch (CodeModel_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word CopyOut_53;
            MR_Word CopyOutWhen_54;
            MR_Word FuncArgs0_55;
            MR_Word RetTypes0_56;

            libs__globals__lookup_bool_option_3_p_0(Globals_52, (MR_Integer) 266, &CopyOut_53);
            switch (CopyOut_53) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  succeeded = (CodeModel_17 == (MR_Integer) 0);
                  if (succeeded)
                    succeeded = (PredOrFunc_16 == (MR_Integer) 1);
                  if (succeeded)
                    CopyOutWhen_54 = (MR_Integer) 1;
                  else
                    CopyOutWhen_54 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 1:
                CopyOutWhen_54 = (MR_Integer) 2;
                break;
            }
            ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_50_10_p_2(ModuleInfo_14, CopyOutWhen_54, *ArgTuples_9, &FuncArgs0_55, &RetTypes0_56, ByRefOutputVars_11, CopiedOutputVars_12, Var_27, &Var_28);
            switch (CodeModel_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  FuncArgs_57 = FuncArgs0_55;
                  RetTypes_58 = RetTypes0_56;
                }
                break;
              case (MR_Integer) 1:
                {
                  FuncArgs_57 = FuncArgs0_55;
                  {
                    RetTypes_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), RetTypes_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    MR_hl_field(MR_mktag(1), RetTypes_58, 1) = ((MR_Box) (RetTypes0_56));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ContType_59;
            MR_Word ContArg_61;
            MR_Word Var_71;
            MR_Word CopyOut_85;
            MR_Word FuncArgs0_87;

            libs__globals__lookup_bool_option_3_p_0(Globals_52, (MR_Integer) 267, &CopyOut_85);
            switch (CopyOut_85) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_50_10_p_2(ModuleInfo_14, (MR_Integer) 0, *ArgTuples_9, &FuncArgs0_87, &RetTypes_58, ByRefOutputVars_11, CopiedOutputVars_12, Var_27, &Var_28);
                  ContType_59 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[3]);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word RetTypes0_93;

                  ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_50_10_p_2(ModuleInfo_14, (MR_Integer) 2, *ArgTuples_9, &FuncArgs0_87, &RetTypes0_93, ByRefOutputVars_11, CopiedOutputVars_12, Var_27, &Var_28);
                  {
                    ContType_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ContType_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ContType_59, 1) = ((MR_Box) (RetTypes0_93));
                  }
                  RetTypes_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
            }
            {
              ContArg_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ContArg_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[4])));
              MR_hl_field(MR_mktag(0), ContArg_61, 1) = ((MR_Box) (ContType_59));
              MR_hl_field(MR_mktag(0), ContArg_61, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ContArg_61));
              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_args_util_scalar_common_1[6])));
            }
            FuncArgs_57 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, FuncArgs0_87, Var_71);
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *FuncParams_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FuncArgs_57));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (RetTypes_58));
      }
      *STATE_VARIABLE_Info_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0)));
    }
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
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_0_9;
    }
    else
    {
      MR_Word HeadTuple_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word TailTuples_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
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
      HeadVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_20, (MR_Integer) 0)));
      HeadMLDSVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_20, (MR_Integer) 1)));
      HeadType_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_20, (MR_Integer) 2)));
      HeadMode_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_20, (MR_Integer) 3)));
      HeadIsDummy_35 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_1, HeadType_33);
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
                  MR_Word Info0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeInfo_41_41, (MR_Integer) 0)));
                  MR_Word Context_62;
                  MR_Word GCStmt_63;
                  MR_Word Info_64;

                  mercury__term__context_init_1_p_0(&Context_62);
                  ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(HeadMLDSVar_32, HeadType_33, Context_62, &GCStmt_63, Info0_61, &Info_64);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_MaybeInfo_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Info_64));
                  }
                  {
                    HeadFuncArg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), HeadFuncArg_38, 0) = ((MR_Box) (HeadMLDSVar_32));
                    MR_hl_field(MR_mktag(0), HeadFuncArg_38, 1) = ((MR_Box) (HeadMLDS_Type_36));
                    MR_hl_field(MR_mktag(0), HeadFuncArg_38, 2) = ((MR_Box) (GCStmt_63));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadFuncArg_38));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailFuncArgs_27));
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
                      succeeded = (TailTuples_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      break;
                  }
                  if (succeeded)
                  {
                    *HeadVar__5_5 = TailFuncArgs_27;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__6_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadMLDS_Type_36));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRetTypes_28));
                    }
                    *HeadVar__7_7 = TailByRefOutputVars_29;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__8_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_31));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCopiedOutputVars_30));
                    }
                    *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_41_41;
                  }
                  else
                  {
                    MR_Word HeadMLDS_ArgType_44;
                    MR_Word HeadFuncArg_45;
                    MR_Word Info0_74;
                    MR_Word Context_75;
                    MR_Word GCStmt_76;
                    MR_Word Info_77;

                    {
                      HeadMLDS_ArgType_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), HeadMLDS_ArgType_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), HeadMLDS_ArgType_44, 1) = ((MR_Box) (HeadMLDS_Type_36));
                    }
                    Info0_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeInfo_41_41, (MR_Integer) 0)));
                    mercury__term__context_init_1_p_0(&Context_75);
                    ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(HeadMLDSVar_32, HeadType_33, Context_75, &GCStmt_76, Info0_74, &Info_77);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_MaybeInfo_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Info_77));
                    }
                    {
                      HeadFuncArg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), HeadFuncArg_45, 0) = ((MR_Box) (HeadMLDSVar_32));
                      MR_hl_field(MR_mktag(0), HeadFuncArg_45, 1) = ((MR_Box) (HeadMLDS_ArgType_44));
                      MR_hl_field(MR_mktag(0), HeadFuncArg_45, 2) = ((MR_Box) (GCStmt_76));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadFuncArg_45));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailFuncArgs_27));
                    }
                    *HeadVar__6_6 = TailRetTypes_28;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__7_7 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_31));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailByRefOutputVars_29));
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
}

void MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_no_gc_stmts_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6,
  MR_Word * ArgTuples_7,
  MR_Word * FuncParams_8)
{
  {
    MR_Word _PredInfo_9;
    MR_Word PredOrFunc_10;
    MR_Word CodeModel_11;
    MR_Word ProcInfo_23;
    MR_Word VarSet_24;
    MR_Word HeadVars_25;
    MR_Word HeadTypes_26;
    MR_Word HeadModes_27;
    MR_Word _ByRef_12;
    MR_Word _Copied_13;
    MR_Word Var_14;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, PredProcId_6, &_PredInfo_9, &ProcInfo_23);
    PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(_PredInfo_9);
    CodeModel_11 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_23);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_23, &VarSet_24);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_23, &HeadVars_25);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(_PredInfo_9, &HeadTypes_26);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_23, &HeadModes_27);
    ml_backend__ml_args_util__package_vars_types_modes_6_p_0(ModuleInfo_5, VarSet_24, HeadVars_25, HeadTypes_26, HeadModes_27, ArgTuples_7);
    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(ModuleInfo_5, PredOrFunc_10, CodeModel_11, *ArgTuples_7, FuncParams_8, &_ByRef_12, &_Copied_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_14);
  }
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
  {
    MR_bool succeeded;
    MR_Word Globals_20;
    MR_Word FuncArgs_25;
    MR_Word RetTypes_26;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_20);
    switch (CodeModel_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word CopyOut_21;
          MR_Word CopyOutWhen_22;
          MR_Word FuncArgs0_23;
          MR_Word RetTypes0_24;

          libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 266, &CopyOut_21);
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
          switch (CodeModel_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                FuncArgs_25 = FuncArgs0_23;
                RetTypes_26 = RetTypes0_24;
              }
              break;
            case (MR_Integer) 1:
              {
                FuncArgs_25 = FuncArgs0_23;
                {
                  RetTypes_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), RetTypes_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  MR_hl_field(MR_mktag(1), RetTypes_26, 1) = ((MR_Box) (RetTypes0_24));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ContType_27;
          MR_Word ContArg_29;
          MR_Word Var_41;
          MR_Word CopyOut_55;
          MR_Word FuncArgs0_57;

          libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 267, &CopyOut_55);
          switch (CopyOut_55) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_49_10_p_1(ModuleInfo_11, (MR_Integer) 0, ArgTuples_15, &FuncArgs0_57, &RetTypes_26, ByRefOutputVars_17, CopiedOutputVars_18, STATE_VARIABLE_MaybeInfo_0_33, STATE_VARIABLE_MaybeInfo_34);
                ContType_27 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[3]);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word RetTypes0_63;

                ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_49_10_p_1(ModuleInfo_11, (MR_Integer) 2, ArgTuples_15, &FuncArgs0_57, &RetTypes0_63, ByRefOutputVars_17, CopiedOutputVars_18, STATE_VARIABLE_MaybeInfo_0_33, STATE_VARIABLE_MaybeInfo_34);
                {
                  ContType_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ContType_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ContType_27, 1) = ((MR_Box) (RetTypes0_63));
                }
                RetTypes_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
          }
          {
            ContArg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ContArg_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[4])));
            MR_hl_field(MR_mktag(0), ContArg_29, 1) = ((MR_Box) (ContType_27));
            MR_hl_field(MR_mktag(0), ContArg_29, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ContArg_29));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_args_util_scalar_common_1[6])));
          }
          FuncArgs_25 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, FuncArgs0_57, Var_41);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *FuncParams_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FuncArgs_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (RetTypes_26));
    }
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
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_0_9;
    }
    else
    {
      MR_Word HeadTuple_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word TailTuples_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
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
      HeadVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_20, (MR_Integer) 0)));
      HeadMLDSVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_20, (MR_Integer) 1)));
      HeadType_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_20, (MR_Integer) 2)));
      HeadMode_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTuple_20, (MR_Integer) 3)));
      HeadIsDummy_35 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_1, HeadType_33);
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

                  *STATE_VARIABLE_MaybeInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    HeadFuncArg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), HeadFuncArg_38, 0) = ((MR_Box) (HeadMLDSVar_32));
                    MR_hl_field(MR_mktag(0), HeadFuncArg_38, 1) = ((MR_Box) (HeadMLDS_Type_36));
                    MR_hl_field(MR_mktag(0), HeadFuncArg_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadFuncArg_38));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailFuncArgs_27));
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
                      succeeded = (TailTuples_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      break;
                  }
                  if (succeeded)
                  {
                    *HeadVar__5_5 = TailFuncArgs_27;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__6_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadMLDS_Type_36));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRetTypes_28));
                    }
                    *HeadVar__7_7 = TailByRefOutputVars_29;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__8_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_31));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCopiedOutputVars_30));
                    }
                    *STATE_VARIABLE_MaybeInfo_10 = STATE_VARIABLE_MaybeInfo_41_41;
                  }
                  else
                  {
                    MR_Word HeadMLDS_ArgType_44;
                    MR_Word HeadFuncArg_45;

                    {
                      HeadMLDS_ArgType_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), HeadMLDS_ArgType_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), HeadMLDS_ArgType_44, 1) = ((MR_Box) (HeadMLDS_Type_36));
                    }
                    *STATE_VARIABLE_MaybeInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      HeadFuncArg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), HeadFuncArg_45, 0) = ((MR_Box) (HeadMLDSVar_32));
                      MR_hl_field(MR_mktag(0), HeadFuncArg_45, 1) = ((MR_Box) (HeadMLDS_ArgType_44));
                      MR_hl_field(MR_mktag(0), HeadFuncArg_45, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadFuncArg_45));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailFuncArgs_27));
                    }
                    *HeadVar__6_6 = TailRetTypes_28;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__7_7 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_31));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailByRefOutputVars_29));
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
}

static void MR_CALL 
ml_backend__ml_args_util__package_vars_types_modes_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Word Vars_9,
  MR_Word Types_10,
  MR_Word Modes_11,
  MR_Word * ArgTuples_12)
{
  {
    MR_bool succeeded = (Vars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (Types_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (Modes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
      *ArgTuples_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word HeadVar_13;
      MR_Word TailVars_14;
      MR_Word HeadType_15;
      MR_Word TailTypes_16;
      MR_Word HeadMode_17;
      MR_Word TailModes_18;

      succeeded = ((MR_tag((MR_Word) Vars_9)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_9, (MR_Integer) 0)));
        TailVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_9, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Types_10)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          HeadType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_10, (MR_Integer) 0)));
          TailTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_10, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Modes_11)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            HeadMode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_11, (MR_Integer) 0)));
            TailModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_11, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word TailArgTuples_19;
        MR_Word HeadTopFunctorMode_20;
        MR_Word HeadMLDSVarName_21;
        MR_Word HeadArgTuple_22;

        ml_backend__ml_args_util__package_vars_types_modes_6_p_0(ModuleInfo_7, VarSet_8, TailVars_14, TailTypes_16, TailModes_18, &TailArgTuples_19);
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_7, HeadMode_17, HeadType_15, &HeadTopFunctorMode_20);
        HeadMLDSVarName_21 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(VarSet_8, HeadVar_13);
        {
          HeadArgTuple_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadArgTuple_22, 0) = ((MR_Box) (HeadVar_13));
          MR_hl_field(MR_mktag(0), HeadArgTuple_22, 1) = ((MR_Box) (HeadMLDSVarName_21));
          MR_hl_field(MR_mktag(0), HeadArgTuple_22, 2) = ((MR_Box) (HeadType_15));
          MR_hl_field(MR_mktag(0), HeadArgTuple_22, 3) = ((MR_Box) (HeadTopFunctorMode_20));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ArgTuples_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadArgTuple_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailArgTuples_19));
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.package_vars_types_modes\'/6", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_args_util__compute_when_to_copy_out_3_f_0(
  MR_Word CopyOut_5,
  MR_Word CodeModel_6,
  MR_Word PredOrFunc_7)
{
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
      if ((CopiedOutputVarRvals_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_Stmts_18 = STATE_VARIABLE_Stmts_0_17;
      else
      {
        MR_Word Var_20;
        MR_Word ReturnStmt_27;

        {
          ReturnStmt_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReturnStmt_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ReturnStmt_27, 1) = ((MR_Box) (CopiedOutputVarRvals_8));
          MR_hl_field(MR_mktag(3), ReturnStmt_27, 2) = ((MR_Box) (Context_7));
        }
        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (ReturnStmt_27));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *STATE_VARIABLE_Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, STATE_VARIABLE_Stmts_0_17, Var_20);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Stmts_18 = STATE_VARIABLE_Stmts_0_17;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ReturnedRvals_13;
        MR_Word ReturnStmt_14;
        MR_Word Var_25;

        {
          ReturnedRvals_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ReturnedRvals_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_args_util_scalar_common_3[0])));
          MR_hl_field(MR_mktag(1), ReturnedRvals_13, 1) = ((MR_Box) (CopiedOutputVarRvals_8));
        }
        {
          ReturnStmt_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReturnStmt_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ReturnStmt_14, 1) = ((MR_Box) (ReturnedRvals_13));
          MR_hl_field(MR_mktag(3), ReturnStmt_14, 2) = ((MR_Box) (Context_7));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ReturnStmt_14));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *STATE_VARIABLE_Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, STATE_VARIABLE_Stmts_0_17, Var_25);
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____copy_out_when_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_args_util____Unify____copy_out_when_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_args_util____Compare____copy_out_when_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_args_util____Compare____copy_out_when_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____ml_call_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_args_util____Unify____ml_call_arg_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_args_util____Compare____ml_call_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_args_util____Compare____ml_call_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____var_mvar_type_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_args_util____Unify____var_mvar_type_mode_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_args_util____Compare____var_mvar_type_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_args_util____Compare____var_mvar_type_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____what_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_args_util____Unify____what_params_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_args_util____Compare____what_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_args_util____Compare____what_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
