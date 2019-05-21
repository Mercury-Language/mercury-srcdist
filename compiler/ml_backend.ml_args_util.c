/*
** Automatically generated from `ml_args_util.m'
** by the Mercury compiler,
** version rotd-2017-09-10
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

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_solo_or_tscc_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_solo_or_tscc_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_value_ordered_solo_or_tscc_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_name_ordered_solo_or_tscc_0[2];

static const MR_Integer ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_solo_or_tscc_0[2];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_args_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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
ml_backend__ml_args_util__IntroducedFrom__pred__ml_gen_proc_params_inputs_only_no_gc_stmts__449__1_2_p_0(
  MR_Word RetTypes_11,
  MR_Word HeadVar__2_21);

static MR_Word MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__func__ml_append_return_statement__214__1_1_f_0(
  MR_Word LambdaHeadVar__1_38);

static MR_Word MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__func__ml_append_return_statement__223__1_1_f_0(
  MR_Word LambdaHeadVar__1_31);

static void MR_CALL 
ml_backend__ml_args_util____Compare____var_mvar_type_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____var_mvar_type_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_args_util____Compare____copy_out_when_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_args_util____Unify____copy_out_when_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_args_util__ml_gen_args_loop_17_p_0(
  MR_Word VarNames_18,
  MR_Word VarLvals_19,
  MR_Word CallerTypes_20,
  MR_Word CalleeTypes_21,
  MR_Word Modes_22,
  MR_Word CopyOutWhen_23,
  MR_Word Context_24,
  MR_Word ForClosureWrapper_25,
  MR_Word WhatParams_26,
  MR_Integer ArgNum_27,
  MR_Word * STATE_VARIABLE_InputRvals_44,
  MR_Word * STATE_VARIABLE_OutputLvals_45,
  MR_Word * STATE_VARIABLE_OutputTypes_46,
  MR_Word * STATE_VARIABLE_ConvOutputDefns_47,
  MR_Word * STATE_VARIABLE_ConvOutputStmts_48,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50);

static void MR_CALL 
ml_backend__ml_args_util__package_vars_mvars_types_modes_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Vars_8,
  MR_Word MLDSVarNames_9,
  MR_Word Types_10,
  MR_Word Modes_11,
  MR_Word * Tuples_12);

static void MR_CALL 
ml_backend__ml_args_util__package_rtti_vars_types_topmodes_4_p_0(
  MR_Word VarPairs_5,
  MR_Word Types_6,
  MR_Word TopFunctorModes_7,
  MR_Word * Tuples_8);

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
  MR_Word Tuples_15,
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
  MR_Word * Tuples_12);

static MR_Box MR_CALL 
ml_backend__ml_args_util__ml_append_return_statement_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_args_util__ml_append_return_statement_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
ml_backend__ml_args_util____Unify____solo_or_tscc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_args_util____Compare____solo_or_tscc_0_0_10001(
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


static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_1[7][2];

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_2[2][5];

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_3[3][3];

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_4[1][1];




static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_1[7][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_args_util_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_args_util_scalar_common_4[0])))
  },
};

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_args_util__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_args_util__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_args_util_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_args_util__ml_append_return_statement_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_args_util_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_args_util__ml_append_return_statement_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
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

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_solo_or_tscc_0_0 = {
  (MR_String) "sot_solo",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_solo_or_tscc_0_1 = {
  (MR_String) "sot_tscc",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_value_ordered_solo_or_tscc_0[2] = {
  &ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_solo_or_tscc_0_0,
  &ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_solo_or_tscc_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_name_ordered_solo_or_tscc_0[2] = {
  &ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_solo_or_tscc_0_0,
  &ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_solo_or_tscc_0_1
};

static const MR_Integer ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_solo_or_tscc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_solo_or_tscc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_args_util____Unify____solo_or_tscc_0_0_10001)),
  ((MR_Box) (ml_backend__ml_args_util____Compare____solo_or_tscc_0_0_10001)),
  (MR_String) "ml_backend.ml_args_util",
  (MR_String) "solo_or_tscc",
  {     ml_backend__ml_args_util__ml_backend__ml_args_util__enum_name_ordered_solo_or_tscc_0 },
  {     ml_backend__ml_args_util__ml_backend__ml_args_util__enum_value_ordered_solo_or_tscc_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_solo_or_tscc_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_args_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
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
ml_backend__ml_args_util__IntroducedFrom__pred__ml_gen_proc_params_inputs_only_no_gc_stmts__449__1_2_p_0(
  MR_Word RetTypes_11,
  MR_Word HeadVar__2_21)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_args_util_scalar_common_1[0], ((MR_Box) (RetTypes_11)), ((MR_Box) (HeadVar__2_21)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__func__ml_append_return_statement__214__1_1_f_0(
  MR_Word LambdaHeadVar__1_38)
{
  {
    MR_Word LambdaHeadVar__2_39;

    {
      LambdaHeadVar__2_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), LambdaHeadVar__2_39, 0) = ((MR_Box) (LambdaHeadVar__1_38));
    }
    return LambdaHeadVar__2_39;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__func__ml_append_return_statement__223__1_1_f_0(
  MR_Word LambdaHeadVar__1_31)
{
  {
    MR_Word LambdaHeadVar__2_32;

    {
      LambdaHeadVar__2_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), LambdaHeadVar__2_32, 0) = ((MR_Box) (LambdaHeadVar__1_31));
    }
    return LambdaHeadVar__2_32;
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

static void MR_CALL 
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

static MR_bool MR_CALL 
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
ml_backend__ml_args_util____Compare____solo_or_tscc_0_0(
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
ml_backend__ml_args_util____Unify____solo_or_tscc_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
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

static MR_bool MR_CALL 
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
ml_backend__ml_args_util__ml_gen_args_18_p_0(
  MR_Word VarNames_19,
  MR_Word VarLvals_20,
  MR_Word CallerTypes_21,
  MR_Word CalleeTypes_22,
  MR_Word Modes_23,
  MR_Word PredOrFunc_24,
  MR_Word CodeModel_25,
  MR_Word Context_26,
  MR_Word ForClosureWrapper_27,
  MR_Word WhatParams_28,
  MR_Integer ArgNum_29,
  MR_Word * STATE_VARIABLE_InputRvals_38,
  MR_Word * STATE_VARIABLE_OutputLvals_39,
  MR_Word * STATE_VARIABLE_OutputTypes_40,
  MR_Word * STATE_VARIABLE_ConvOutputDefns_41,
  MR_Word * STATE_VARIABLE_ConvOutputStmts_42,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44)
{
  {
    MR_bool succeeded;
    MR_Word CopyOut_36;
    MR_Word CopyOutWhen_37;

    ml_backend__ml_gen_info__ml_gen_info_get_copy_out_3_p_0(STATE_VARIABLE_Info_0_43, CodeModel_25, &CopyOut_36);
    switch (CopyOut_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (CodeModel_25 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (PredOrFunc_24 == (MR_Integer) 1);
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
    ml_backend__ml_args_util__ml_gen_args_loop_17_p_0(VarNames_19, VarLvals_20, CallerTypes_21, CalleeTypes_22, Modes_23, CopyOutWhen_37, Context_26, ForClosureWrapper_27, WhatParams_28, ArgNum_29, STATE_VARIABLE_InputRvals_38, STATE_VARIABLE_OutputLvals_39, STATE_VARIABLE_OutputTypes_40, STATE_VARIABLE_ConvOutputDefns_41, STATE_VARIABLE_ConvOutputStmts_42, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
  }
}

static void MR_CALL 
ml_backend__ml_args_util__ml_gen_args_loop_17_p_0(
  MR_Word VarNames_18,
  MR_Word VarLvals_19,
  MR_Word CallerTypes_20,
  MR_Word CalleeTypes_21,
  MR_Word Modes_22,
  MR_Word CopyOutWhen_23,
  MR_Word Context_24,
  MR_Word ForClosureWrapper_25,
  MR_Word WhatParams_26,
  MR_Integer ArgNum_27,
  MR_Word * STATE_VARIABLE_InputRvals_44,
  MR_Word * STATE_VARIABLE_OutputLvals_45,
  MR_Word * STATE_VARIABLE_OutputTypes_46,
  MR_Word * STATE_VARIABLE_ConvOutputDefns_47,
  MR_Word * STATE_VARIABLE_ConvOutputStmts_48,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50)
{
  {
    MR_bool succeeded = (VarNames_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (VarLvals_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (CallerTypes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = (CalleeTypes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
            succeeded = (Modes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_InputRvals_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_OutputLvals_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_OutputTypes_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ConvOutputDefns_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ConvOutputStmts_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_50 = STATE_VARIABLE_Info_0_49;
    }
    else
    {
      MR_Word VarName_34;
      MR_Word VarNamesTail_35;
      MR_Word VarLval_36;
      MR_Word VarLvalsTail_37;
      MR_Word CallerType_38;
      MR_Word CallerTypesTail_39;
      MR_Word CalleeType_40;
      MR_Word CalleeTypesTail_41;
      MR_Word Mode_42;
      MR_Word ModesTail_43;

      succeeded = ((MR_tag((MR_Word) VarNames_18)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        VarName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarNames_18, (MR_Integer) 0)));
        VarNamesTail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarNames_18, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) VarLvals_19)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          VarLval_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarLvals_19, (MR_Integer) 0)));
          VarLvalsTail_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarLvals_19, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) CallerTypes_20)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            CallerType_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallerTypes_20, (MR_Integer) 0)));
            CallerTypesTail_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallerTypes_20, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) CalleeTypes_21)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              CalleeType_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), CalleeTypes_21, (MR_Integer) 0)));
              CalleeTypesTail_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), CalleeTypes_21, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Modes_22)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Mode_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_22, (MR_Integer) 0)));
                ModesTail_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_22, (MR_Integer) 1)));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Integer Var_56 = (ArgNum_27 + (MR_Integer) 1);
        MR_Word STATE_VARIABLE_InputRvals_57_57;
        MR_Word STATE_VARIABLE_OutputLvals_58_58;
        MR_Word STATE_VARIABLE_OutputTypes_59_59;
        MR_Word STATE_VARIABLE_ConvOutputDefns_60_60;
        MR_Word STATE_VARIABLE_ConvOutputStmts_61_61;
        MR_Word STATE_VARIABLE_Info_62_62;
        MR_Word ModuleInfo_101;
        MR_Word ArgTopFunctorMode_102;
        MR_Word CalleeIsDummy_103;

        ml_backend__ml_args_util__ml_gen_args_loop_17_p_0(VarNamesTail_35, VarLvalsTail_37, CallerTypesTail_39, CalleeTypesTail_41, ModesTail_43, CopyOutWhen_23, Context_24, ForClosureWrapper_25, WhatParams_26, Var_56, &STATE_VARIABLE_InputRvals_57_57, &STATE_VARIABLE_OutputLvals_58_58, &STATE_VARIABLE_OutputTypes_59_59, &STATE_VARIABLE_ConvOutputDefns_60_60, &STATE_VARIABLE_ConvOutputStmts_61_61, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_62_62);
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_62_62, &ModuleInfo_101);
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_101, Mode_42, CalleeType_40, &ArgTopFunctorMode_102);
        CalleeIsDummy_103 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_101, CalleeType_40);
        switch (CalleeIsDummy_103) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_InputRvals_44 = STATE_VARIABLE_InputRvals_57_57;
              *STATE_VARIABLE_OutputLvals_45 = STATE_VARIABLE_OutputLvals_58_58;
              *STATE_VARIABLE_OutputTypes_46 = STATE_VARIABLE_OutputTypes_59_59;
              *STATE_VARIABLE_ConvOutputDefns_47 = STATE_VARIABLE_ConvOutputDefns_60_60;
              *STATE_VARIABLE_ConvOutputStmts_48 = STATE_VARIABLE_ConvOutputStmts_61_61;
              *STATE_VARIABLE_Info_50 = STATE_VARIABLE_Info_62_62;
            }
            break;
          case (MR_Integer) 1:
            switch (ArgTopFunctorMode_102) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CallerIsDummy_104;
                  MR_Word VarRval_105;
                  MR_Word ArgRval_106;

                  CallerIsDummy_104 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_101, CallerType_38);
                  switch (CallerIsDummy_104) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        VarRval_105 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[6]);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        VarRval_105 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), VarRval_105, 0) = ((MR_Box) (VarLval_36));
                      }
                      break;
                  }
                  ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_101, CallerType_38, CalleeType_40, (MR_Integer) 0, VarRval_105, &ArgRval_106);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_InputRvals_44 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgRval_106));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_InputRvals_57_57));
                  }
                  *STATE_VARIABLE_OutputLvals_45 = STATE_VARIABLE_OutputLvals_58_58;
                  *STATE_VARIABLE_OutputTypes_46 = STATE_VARIABLE_OutputTypes_59_59;
                  *STATE_VARIABLE_ConvOutputDefns_47 = STATE_VARIABLE_ConvOutputDefns_60_60;
                  *STATE_VARIABLE_ConvOutputStmts_48 = STATE_VARIABLE_ConvOutputStmts_61_61;
                  *STATE_VARIABLE_Info_50 = STATE_VARIABLE_Info_62_62;
                }
                break;
              case (MR_Integer) 1:
                switch (WhatParams_26) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgLval_107;
                      MR_Word ThisArgConvDecls_108;
                      MR_Word ThisArgConvOutput_110;
                      MR_Word _ThisArgConvInput_109;

                      ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(CallerType_38, CalleeType_40, (MR_Integer) 0, VarLval_36, VarName_34, Context_24, ForClosureWrapper_25, ArgNum_27, &ArgLval_107, &ThisArgConvDecls_108, &_ThisArgConvInput_109, &ThisArgConvOutput_110, STATE_VARIABLE_Info_62_62, STATE_VARIABLE_Info_50);
                      *STATE_VARIABLE_ConvOutputDefns_47 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ThisArgConvDecls_108, STATE_VARIABLE_ConvOutputDefns_60_60);
                      *STATE_VARIABLE_ConvOutputStmts_48 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ThisArgConvOutput_110, STATE_VARIABLE_ConvOutputStmts_61_61);
                      switch (CopyOutWhen_23) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 2:
                          succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 1:
                          succeeded = (VarNamesTail_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          break;
                      }
                      if (succeeded)
                      {
                        MR_Word OutputType_111;

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_OutputLvals_45 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgLval_107));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OutputLvals_58_58));
                        }
                        ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_50, CalleeType_40, &OutputType_111);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_OutputTypes_46 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OutputType_111));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OutputTypes_59_59));
                        }
                        *STATE_VARIABLE_InputRvals_44 = STATE_VARIABLE_InputRvals_57_57;
                      }
                      else
                      {
                        MR_Word Var_119;
                        MR_Word Rval_127;
                        MR_Word Var_128;

                        succeeded = ((MR_tag((MR_Word) ArgLval_107)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          Rval_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgLval_107, (MR_Integer) 0)));
                          Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgLval_107, (MR_Integer) 1)));
                          Var_119 = Rval_127;
                        }
                        else
                          {
                            Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (ArgLval_107));
                          }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_InputRvals_44 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_119));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_InputRvals_57_57));
                        }
                        *STATE_VARIABLE_OutputTypes_46 = STATE_VARIABLE_OutputTypes_59_59;
                        *STATE_VARIABLE_OutputLvals_45 = STATE_VARIABLE_OutputLvals_58_58;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      *STATE_VARIABLE_InputRvals_44 = STATE_VARIABLE_InputRvals_57_57;
                      *STATE_VARIABLE_OutputLvals_45 = STATE_VARIABLE_OutputLvals_58_58;
                      *STATE_VARIABLE_OutputTypes_46 = STATE_VARIABLE_OutputTypes_59_59;
                      *STATE_VARIABLE_ConvOutputDefns_47 = STATE_VARIABLE_ConvOutputDefns_60_60;
                      *STATE_VARIABLE_ConvOutputStmts_48 = STATE_VARIABLE_ConvOutputStmts_61_61;
                      *STATE_VARIABLE_Info_50 = STATE_VARIABLE_Info_62_62;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  *STATE_VARIABLE_InputRvals_44 = STATE_VARIABLE_InputRvals_57_57;
                  *STATE_VARIABLE_OutputLvals_45 = STATE_VARIABLE_OutputLvals_58_58;
                  *STATE_VARIABLE_OutputTypes_46 = STATE_VARIABLE_OutputTypes_59_59;
                  *STATE_VARIABLE_ConvOutputDefns_47 = STATE_VARIABLE_ConvOutputDefns_60_60;
                  *STATE_VARIABLE_ConvOutputStmts_48 = STATE_VARIABLE_ConvOutputStmts_61_61;
                  *STATE_VARIABLE_Info_50 = STATE_VARIABLE_Info_62_62;
                }
                break;
            }
            break;
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.ml_gen_args_loop\'/17", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_args_util__ml_gen_tscc_arg_decls_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word Vars_19,
  MR_Word Types_20,
  MR_Word Modes_21,
  MR_Word VarSet_22,
  MR_Word Context_23,
  MR_Word ProcIdInTscc_24,
  MR_Integer NextInArgNum0_25,
  MR_Integer NextOutArgNum0_26,
  MR_Integer * NumOutputs_27,
  MR_Word STATE_VARIABLE_OutArgNames_0_62,
  MR_Word * STATE_VARIABLE_OutArgNames_63,
  MR_Word * TsccInArgs_29,
  MR_Word * TsccInLocalVarDefns_30,
  MR_Word * TsccArgs_31,
  MR_Word * OwnLocalVarDefns_32,
  MR_Word * CopyTsccToOwnStmts_33)
{
  ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_97_114_103_95_100_101_99_108_115_95_95_91_53_93_95_48_17_p_0(ModuleInfo_18, Vars_19, Types_20, Modes_21, Context_23, ProcIdInTscc_24, NextInArgNum0_25, NextOutArgNum0_26, NumOutputs_27, STATE_VARIABLE_OutArgNames_0_62, STATE_VARIABLE_OutArgNames_63, TsccInArgs_29, TsccInLocalVarDefns_30, TsccArgs_31, OwnLocalVarDefns_32, CopyTsccToOwnStmts_33);
}

void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_97_114_103_95_100_101_99_108_115_95_95_91_53_93_95_48_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word Vars_19,
  MR_Word Types_20,
  MR_Word Modes_21,
  MR_Word Context_23,
  MR_Word ProcIdInTscc_24,
  MR_Integer NextInArgNum0_25,
  MR_Integer NextOutArgNum0_26,
  MR_Integer * NumOutputs_27,
  MR_Word STATE_VARIABLE_OutArgNames_0_62,
  MR_Word * STATE_VARIABLE_OutArgNames_63,
  MR_Word * TsccInArgs_29,
  MR_Word * TsccInLocalVarDefns_30,
  MR_Word * TsccArgs_31,
  MR_Word * OwnLocalVarDefns_32,
  MR_Word * CopyTsccToOwnStmts_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Vars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    // setup for tailcalls optimized into a loop
    if (succeeded)
    {
      succeeded = (Types_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (Modes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *NumOutputs_27 = NextOutArgNum0_26;
      *TsccInArgs_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *TsccInLocalVarDefns_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *TsccArgs_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *OwnLocalVarDefns_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *CopyTsccToOwnStmts_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_OutArgNames_63 = STATE_VARIABLE_OutArgNames_0_62;
    }
    else
    {
      MR_Word HeadVar_34;
      MR_Word TailVars_35;
      MR_Word HeadType_36;
      MR_Word TailTypes_37;
      MR_Word HeadMode_38;
      MR_Word TailModes_39;

      succeeded = ((MR_tag((MR_Word) Vars_19)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_19, (MR_Integer) 0)));
        TailVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_19, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Types_20)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          HeadType_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_20, (MR_Integer) 0)));
          TailTypes_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_20, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Modes_21)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            HeadMode_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_21, (MR_Integer) 0)));
            TailModes_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_21, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word HeadIsDummy_40;

        HeadIsDummy_40 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_18, HeadType_36);
        switch (HeadIsDummy_40) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_Vars_19 = TailVars_35;
              MR_Word next_value_of_Types_20 = TailTypes_37;
              MR_Word next_value_of_Modes_21 = TailModes_39;

              // direct tailcall eliminated
              Vars_19 = next_value_of_Vars_19;
              Types_20 = next_value_of_Types_20;
              Modes_21 = next_value_of_Modes_21;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String HeadVarName_41;
              MR_Word HeadMLDS_Type_42;

              HeadVarName_41 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(HeadVar_34);
              HeadMLDS_Type_42 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_18, HeadType_36);
              switch (HeadMode_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer NextInArgNum_44 = (NextInArgNum0_25 + (MR_Integer) 1);
                    MR_Word HeadTsccVar_46;
                    MR_Word HeadTsccArg_48;
                    MR_Word HeadTsccInArgs_49;
                    MR_Word HeadTsccInLocalVarDefn_50;
                    MR_Word HeadTsccInLocalVarDefns_51;
                    MR_Word HeadOwnLocalVarDefn_55;
                    MR_Word HeadCopyTsccToOwnStmt_56;
                    MR_Word TailTsccInArgs_57;
                    MR_Word TailTsccInLocalVarDefns_58;
                    MR_Word TailTsccArgs_59;
                    MR_Word TailOwnLocalVarDefns_60;
                    MR_Word TailCopyTsccToOwnStmts_61;
                    MR_Word Var_75;
                    MR_Word Var_76;
                    MR_Word Var_77;
                    MR_Word Var_78;

                    {
                      HeadTsccVar_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), HeadTsccVar_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), HeadTsccVar_46, 1) = ((MR_Box) (ProcIdInTscc_24));
                      MR_hl_field(MR_mktag(3), HeadTsccVar_46, 2) = ((MR_Box) (NextInArgNum0_25));
                      MR_hl_field(MR_mktag(3), HeadTsccVar_46, 3) = ((MR_Box) (HeadVarName_41));
                    }
                    {
                      HeadTsccArg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), HeadTsccArg_48, 0) = ((MR_Box) (HeadTsccVar_46));
                      MR_hl_field(MR_mktag(0), HeadTsccArg_48, 1) = ((MR_Box) (HeadMLDS_Type_42));
                      MR_hl_field(MR_mktag(0), HeadTsccArg_48, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      HeadTsccInArgs_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), HeadTsccInArgs_49, 0) = ((MR_Box) (HeadTsccArg_48));
                      MR_hl_field(MR_mktag(1), HeadTsccInArgs_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      HeadTsccInLocalVarDefn_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), HeadTsccInLocalVarDefn_50, 0) = ((MR_Box) (HeadTsccVar_46));
                      MR_hl_field(MR_mktag(0), HeadTsccInLocalVarDefn_50, 1) = ((MR_Box) (Context_23));
                      MR_hl_field(MR_mktag(0), HeadTsccInLocalVarDefn_50, 2) = ((MR_Box) (HeadMLDS_Type_42));
                      MR_hl_field(MR_mktag(0), HeadTsccInLocalVarDefn_50, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), HeadTsccInLocalVarDefn_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      HeadTsccInLocalVarDefns_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), HeadTsccInLocalVarDefns_51, 0) = ((MR_Box) (HeadTsccInLocalVarDefn_50));
                      MR_hl_field(MR_mktag(1), HeadTsccInLocalVarDefns_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      HeadOwnLocalVarDefn_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_55, 0) = ((MR_Box) (HeadVar_34));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_55, 1) = ((MR_Box) (Context_23));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_55, 2) = ((MR_Box) (HeadMLDS_Type_42));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_55, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_55, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (HeadVar_34));
                      MR_hl_field(MR_mktag(3), Var_76, 2) = ((MR_Box) (HeadMLDS_Type_42));
                    }
                    {
                      Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (HeadTsccVar_46));
                      MR_hl_field(MR_mktag(3), Var_78, 2) = ((MR_Box) (HeadMLDS_Type_42));
                    }
                    {
                      Var_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_77, 0) = ((MR_Box) (Var_78));
                    }
                    {
                      Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (Var_76));
                      MR_hl_field(MR_mktag(2), Var_75, 1) = ((MR_Box) (Var_77));
                    }
                    {
                      HeadCopyTsccToOwnStmt_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), HeadCopyTsccToOwnStmt_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), HeadCopyTsccToOwnStmt_56, 1) = ((MR_Box) (Var_75));
                      MR_hl_field(MR_mktag(3), HeadCopyTsccToOwnStmt_56, 2) = ((MR_Box) (Context_23));
                    }
                    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_97_114_103_95_100_101_99_108_115_95_95_91_53_93_95_48_17_p_0(ModuleInfo_18, TailVars_35, TailTypes_37, TailModes_39, Context_23, ProcIdInTscc_24, NextInArgNum_44, NextOutArgNum0_26, NumOutputs_27, STATE_VARIABLE_OutArgNames_0_62, STATE_VARIABLE_OutArgNames_63, &TailTsccInArgs_57, &TailTsccInLocalVarDefns_58, &TailTsccArgs_59, &TailOwnLocalVarDefns_60, &TailCopyTsccToOwnStmts_61);
                    *TsccInArgs_29 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, HeadTsccInArgs_49, TailTsccInArgs_57);
                    *TsccInLocalVarDefns_30 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, HeadTsccInLocalVarDefns_51, TailTsccInLocalVarDefns_58);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *TsccArgs_31 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTsccArg_48));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTsccArgs_59));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *OwnLocalVarDefns_32 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadOwnLocalVarDefn_55));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailOwnLocalVarDefns_60));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *CopyTsccToOwnStmts_33 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadCopyTsccToOwnStmt_56));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCopyTsccToOwnStmts_61));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String OutArgName_54;
                    MR_Integer NextOutArgNum_91 = (NextOutArgNum0_26 + (MR_Integer) 1);
                    MR_Word HeadTsccVar_92;
                    MR_Word HeadMLDS_ArgType_93;
                    MR_Word HeadTsccArg_94;
                    MR_Word HeadOwnLocalVarDefn_97;
                    MR_Word HeadCopyTsccToOwnStmt_98;
                    MR_Word TailTsccInArgs_99;
                    MR_Word TailTsccInLocalVarDefns_100;
                    MR_Word TailTsccArgs_101;
                    MR_Word TailOwnLocalVarDefns_102;
                    MR_Word TailCopyTsccToOwnStmts_103;
                    MR_Word STATE_VARIABLE_OutArgNames_65_104;
                    MR_Word Var_107;
                    MR_Word Var_108;
                    MR_Word Var_109;
                    MR_Word Var_110;
                    MR_String OldOutArgName_53;
                    MR_Box conv0_OldOutArgName_53;

                    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, STATE_VARIABLE_OutArgNames_0_62, NextOutArgNum0_26, &conv0_OldOutArgName_53);
                    if (succeeded)
                    {
                      OldOutArgName_53 = ((MR_String) conv0_OldOutArgName_53);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      OutArgName_54 = OldOutArgName_53;
                      STATE_VARIABLE_OutArgNames_65_104 = STATE_VARIABLE_OutArgNames_0_62;
                    }
                    else
                    {
                      OutArgName_54 = HeadVarName_41;
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, NextOutArgNum0_26, ((MR_Box) (OutArgName_54)), STATE_VARIABLE_OutArgNames_0_62, &STATE_VARIABLE_OutArgNames_65_104);
                    }
                    {
                      HeadTsccVar_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), HeadTsccVar_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), HeadTsccVar_92, 1) = ((MR_Box) (NextOutArgNum0_26));
                      MR_hl_field(MR_mktag(3), HeadTsccVar_92, 2) = ((MR_Box) (OutArgName_54));
                    }
                    {
                      HeadMLDS_ArgType_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), HeadMLDS_ArgType_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), HeadMLDS_ArgType_93, 1) = ((MR_Box) (HeadMLDS_Type_42));
                    }
                    {
                      HeadTsccArg_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), HeadTsccArg_94, 0) = ((MR_Box) (HeadTsccVar_92));
                      MR_hl_field(MR_mktag(0), HeadTsccArg_94, 1) = ((MR_Box) (HeadMLDS_ArgType_93));
                      MR_hl_field(MR_mktag(0), HeadTsccArg_94, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      HeadOwnLocalVarDefn_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_97, 0) = ((MR_Box) (HeadVar_34));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_97, 1) = ((MR_Box) (Context_23));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_97, 2) = ((MR_Box) (HeadMLDS_ArgType_93));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_97, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), HeadOwnLocalVarDefn_97, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (HeadVar_34));
                      MR_hl_field(MR_mktag(3), Var_108, 2) = ((MR_Box) (HeadMLDS_ArgType_93));
                    }
                    {
                      Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (HeadTsccVar_92));
                      MR_hl_field(MR_mktag(3), Var_110, 2) = ((MR_Box) (HeadMLDS_ArgType_93));
                    }
                    {
                      Var_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_109, 0) = ((MR_Box) (Var_110));
                    }
                    {
                      Var_107 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_107, 0) = ((MR_Box) (Var_108));
                      MR_hl_field(MR_mktag(2), Var_107, 1) = ((MR_Box) (Var_109));
                    }
                    {
                      HeadCopyTsccToOwnStmt_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), HeadCopyTsccToOwnStmt_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), HeadCopyTsccToOwnStmt_98, 1) = ((MR_Box) (Var_107));
                      MR_hl_field(MR_mktag(3), HeadCopyTsccToOwnStmt_98, 2) = ((MR_Box) (Context_23));
                    }
                    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_97_114_103_95_100_101_99_108_115_95_95_91_53_93_95_48_17_p_0(ModuleInfo_18, TailVars_35, TailTypes_37, TailModes_39, Context_23, ProcIdInTscc_24, NextInArgNum0_25, NextOutArgNum_91, NumOutputs_27, STATE_VARIABLE_OutArgNames_65_104, STATE_VARIABLE_OutArgNames_63, &TailTsccInArgs_99, &TailTsccInLocalVarDefns_100, &TailTsccArgs_101, &TailOwnLocalVarDefns_102, &TailCopyTsccToOwnStmts_103);
                    *TsccInArgs_29 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TailTsccInArgs_99);
                    *TsccInLocalVarDefns_30 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TailTsccInLocalVarDefns_100);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *TsccArgs_31 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTsccArg_94));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTsccArgs_101));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *OwnLocalVarDefns_32 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadOwnLocalVarDefn_97));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailOwnLocalVarDefns_102));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *CopyTsccToOwnStmts_33 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadCopyTsccToOwnStmt_98));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCopyTsccToOwnStmts_103));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word next_value_of_Vars_19 = TailVars_35;
                    MR_Word next_value_of_Types_20 = TailTypes_37;
                    MR_Word next_value_of_Modes_21 = TailModes_39;

                    // direct tailcall eliminated
                    Vars_19 = next_value_of_Vars_19;
                    Types_20 = next_value_of_Types_20;
                    Modes_21 = next_value_of_Modes_21;
                    continue;
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.ml_gen_tscc_arg_decls\'/17", (MR_String) "length mismatch");
          return;
        }
      }
    }
    break;
  }
}

void MR_CALL 
ml_backend__ml_args_util__ml_gen_params_no_gc_stmts_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredOrFunc_10,
  MR_Word CodeModel_11,
  MR_Word HeadVars_12,
  MR_Word HeadMLDSVarNames_13,
  MR_Word HeadTypes_14,
  MR_Word HeadModes_15,
  MR_Word * FuncParams_16)
{
  {
    MR_Word Tuples_17;
    MR_Word _ByRef_18;
    MR_Word _Copied_19;
    MR_Word Var_20;

    ml_backend__ml_args_util__package_vars_mvars_types_modes_6_p_0(ModuleInfo_9, HeadVars_12, HeadMLDSVarNames_13, HeadTypes_14, HeadModes_15, &Tuples_17);
    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(ModuleInfo_9, PredOrFunc_10, CodeModel_11, Tuples_17, FuncParams_16, &_ByRef_18, &_Copied_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_20);
  }
}

static void MR_CALL 
ml_backend__ml_args_util__package_vars_mvars_types_modes_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Vars_8,
  MR_Word MLDSVarNames_9,
  MR_Word Types_10,
  MR_Word Modes_11,
  MR_Word * Tuples_12)
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
      *Tuples_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
        MR_Word TailTuples_21;
        MR_Word HeadTopFunctorMode_22;
        MR_Word HeadTuple_23;

        ml_backend__ml_args_util__package_vars_mvars_types_modes_6_p_0(ModuleInfo_7, TailVars_14, TailMLDSVarNames_16, TailTypes_18, TailModes_20, &TailTuples_21);
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_7, HeadMode_19, HeadType_17, &HeadTopFunctorMode_22);
        {
          HeadTuple_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadTuple_23, 0) = ((MR_Box) (HeadVar_13));
          MR_hl_field(MR_mktag(0), HeadTuple_23, 1) = ((MR_Box) (HeadMLDSVarName_15));
          MR_hl_field(MR_mktag(0), HeadTuple_23, 2) = ((MR_Box) (HeadType_17));
          MR_hl_field(MR_mktag(0), HeadTuple_23, 3) = ((MR_Box) (HeadTopFunctorMode_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Tuples_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTuple_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTuples_21));
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
    MR_Word Tuples_13;
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
    ml_backend__ml_args_util__package_rtti_vars_types_topmodes_4_p_0(HeadVars_10, ArgTypes_11, TopFunctorModes_12, &Tuples_13);
    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(ModuleInfo_4, PredOrFunc_7, CodeModel_9, Tuples_13, &FuncParams_6, &_ByRef_14, &_Copied_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_16);
    return FuncParams_6;
  }
}

static void MR_CALL 
ml_backend__ml_args_util__package_rtti_vars_types_topmodes_4_p_0(
  MR_Word VarPairs_5,
  MR_Word Types_6,
  MR_Word TopFunctorModes_7,
  MR_Word * Tuples_8)
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
      *Tuples_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
        MR_Word TailTuples_15;
        MR_Word HeadVar_16;
        MR_String HeadVarName_17;
        MR_Integer HeadVarNum_18;
        MR_Word HeadMLDSVarName_19;
        MR_Word HeadTuple_20;

        ml_backend__ml_args_util__package_rtti_vars_types_topmodes_4_p_0(TailVarPairs_10, TailTypes_12, TailTopFunctorModes_14, &TailTuples_15);
        HeadVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVarPair_9, (MR_Integer) 0)));
        HeadVarName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVarPair_9, (MR_Integer) 1)));
        mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, HeadVar_16, &HeadVarNum_18);
        {
          HeadMLDSVarName_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadMLDSVarName_19, 0) = ((MR_Box) (HeadVarName_17));
          MR_hl_field(MR_mktag(0), HeadMLDSVarName_19, 1) = ((MR_Box) (HeadVarNum_18));
        }
        {
          HeadTuple_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadTuple_20, 0) = ((MR_Box) (HeadVar_16));
          MR_hl_field(MR_mktag(0), HeadTuple_20, 1) = ((MR_Box) (HeadMLDSVarName_19));
          MR_hl_field(MR_mktag(0), HeadTuple_20, 2) = ((MR_Box) (HeadType_11));
          MR_hl_field(MR_mktag(0), HeadTuple_20, 3) = ((MR_Box) (HeadTopFunctorMode_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Tuples_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTuple_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTuples_15));
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

    succeeded = ml_backend__ml_args_util__IntroducedFrom__pred__ml_gen_proc_params_inputs_only_no_gc_stmts__449__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
    MR_Word Tuples_10;
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
    ml_backend__ml_args_util__package_vars_types_modes_6_p_0(ModuleInfo_4, VarSet_30, HeadVars_31, HeadTypes_32, HeadModes_33, &Tuples_10);
    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_50_44_32_51_93_95_48_10_p_0(ModuleInfo_4, Tuples_10, &FuncArgs_6, &RetTypes_11, &_ByRef_12, &_Copied_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_14);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__ml_args_util_scalar_common_2[1]));
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
ml_backend__ml_args_util__ml_gen_info_proc_params_6_p_0(
  MR_Word PredProcId_7,
  MR_Word * FuncParams_8,
  MR_Word * ByRefOutputVars_9,
  MR_Word * CopiedOutputVars_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_12;
    MR_Word PredInfo_13;
    MR_Word PredOrFunc_14;
    MR_Word CodeModel_15;
    MR_Word Tuples_16;
    MR_Word PredModule_17;
    MR_String PredName_18;
    MR_Integer PredArity_19;
    MR_Word ProcInfo_35;
    MR_Word VarSet_36;
    MR_Word HeadVars_37;
    MR_Word HeadTypes_38;
    MR_Word HeadModes_39;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_21, &ModuleInfo_12);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_12, PredProcId_7, &PredInfo_13, &ProcInfo_35);
    PredOrFunc_14 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_13);
    CodeModel_15 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_35);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_35, &VarSet_36);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_35, &HeadVars_37);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_13, &HeadTypes_38);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_35, &HeadModes_39);
    ml_backend__ml_args_util__package_vars_types_modes_6_p_0(ModuleInfo_12, VarSet_36, HeadVars_37, HeadTypes_38, HeadModes_39, &Tuples_16);
    PredModule_17 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_13);
    PredName_18 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_13);
    PredArity_19 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_13);
    succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_17, PredName_18, PredArity_19);
    if (succeeded)
    {
      MR_Word Var_20;

      ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(ModuleInfo_12, PredOrFunc_14, CodeModel_15, Tuples_16, FuncParams_8, ByRefOutputVars_9, CopiedOutputVars_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_20);
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
    }
    else
    {
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Globals_51;
      MR_Word FuncArgs_56;
      MR_Word RetTypes_57;

      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (STATE_VARIABLE_Info_0_21));
      }
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_51);
      switch (CodeModel_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word CopyOut_52;
            MR_Word CopyOutWhen_53;
            MR_Word FuncArgs0_54;
            MR_Word RetTypes0_55;

            libs__globals__lookup_bool_option_3_p_0(Globals_51, (MR_Integer) 266, &CopyOut_52);
            switch (CopyOut_52) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  succeeded = (CodeModel_15 == (MR_Integer) 0);
                  if (succeeded)
                    succeeded = (PredOrFunc_14 == (MR_Integer) 1);
                  if (succeeded)
                    CopyOutWhen_53 = (MR_Integer) 1;
                  else
                    CopyOutWhen_53 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 1:
                CopyOutWhen_53 = (MR_Integer) 2;
                break;
            }
            ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_50_10_p_2(ModuleInfo_12, CopyOutWhen_53, Tuples_16, &FuncArgs0_54, &RetTypes0_55, ByRefOutputVars_9, CopiedOutputVars_10, Var_26, &Var_27);
            switch (CodeModel_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  FuncArgs_56 = FuncArgs0_54;
                  RetTypes_57 = RetTypes0_55;
                }
                break;
              case (MR_Integer) 1:
                {
                  FuncArgs_56 = FuncArgs0_54;
                  {
                    RetTypes_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), RetTypes_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    MR_hl_field(MR_mktag(1), RetTypes_57, 1) = ((MR_Box) (RetTypes0_55));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ContType_58;
            MR_Word ContArg_60;
            MR_Word Var_70;
            MR_Word CopyOut_84;
            MR_Word FuncArgs0_86;

            libs__globals__lookup_bool_option_3_p_0(Globals_51, (MR_Integer) 267, &CopyOut_84);
            switch (CopyOut_84) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_50_10_p_2(ModuleInfo_12, (MR_Integer) 0, Tuples_16, &FuncArgs0_86, &RetTypes_57, ByRefOutputVars_9, CopiedOutputVars_10, Var_26, &Var_27);
                  ContType_58 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[2]);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word RetTypes0_92;

                  ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_50_10_p_2(ModuleInfo_12, (MR_Integer) 2, Tuples_16, &FuncArgs0_86, &RetTypes0_92, ByRefOutputVars_9, CopiedOutputVars_10, Var_26, &Var_27);
                  {
                    ContType_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ContType_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ContType_58, 1) = ((MR_Box) (RetTypes0_92));
                  }
                  RetTypes_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
            }
            {
              ContArg_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ContArg_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[3])));
              MR_hl_field(MR_mktag(0), ContArg_60, 1) = ((MR_Box) (ContType_58));
              MR_hl_field(MR_mktag(0), ContArg_60, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (ContArg_60));
              MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_args_util_scalar_common_1[5])));
            }
            FuncArgs_56 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, FuncArgs0_86, Var_70);
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *FuncParams_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FuncArgs_56));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (RetTypes_57));
      }
      *STATE_VARIABLE_Info_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0)));
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

MR_Word MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_no_gc_stmts_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredProcId_5)
{
  {
    MR_Word FuncParams_6;
    MR_Word _PredInfo_7;
    MR_Word PredOrFunc_8;
    MR_Word CodeModel_9;
    MR_Word Tuples_10;
    MR_Word ProcInfo_22;
    MR_Word VarSet_23;
    MR_Word HeadVars_24;
    MR_Word HeadTypes_25;
    MR_Word HeadModes_26;
    MR_Word _ByRef_11;
    MR_Word _Copied_12;
    MR_Word Var_13;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_4, PredProcId_5, &_PredInfo_7, &ProcInfo_22);
    PredOrFunc_8 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(_PredInfo_7);
    CodeModel_9 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_22);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_22, &VarSet_23);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_22, &HeadVars_24);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(_PredInfo_7, &HeadTypes_25);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_22, &HeadModes_26);
    ml_backend__ml_args_util__package_vars_types_modes_6_p_0(ModuleInfo_4, VarSet_23, HeadVars_24, HeadTypes_25, HeadModes_26, &Tuples_10);
    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(ModuleInfo_4, PredOrFunc_8, CodeModel_9, Tuples_10, &FuncParams_6, &_ByRef_11, &_Copied_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_13);
    return FuncParams_6;
  }
}

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_52_93_95_49_10_p_1(
  MR_Word ModuleInfo_11,
  MR_Word PredOrFunc_12,
  MR_Word CodeModel_13,
  MR_Word Tuples_15,
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
          ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_49_10_p_1(ModuleInfo_11, CopyOutWhen_22, Tuples_15, &FuncArgs0_23, &RetTypes0_24, ByRefOutputVars_17, CopiedOutputVars_18, STATE_VARIABLE_MaybeInfo_0_33, STATE_VARIABLE_MaybeInfo_34);
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
                ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_49_10_p_1(ModuleInfo_11, (MR_Integer) 0, Tuples_15, &FuncArgs0_57, &RetTypes_26, ByRefOutputVars_17, CopiedOutputVars_18, STATE_VARIABLE_MaybeInfo_0_33, STATE_VARIABLE_MaybeInfo_34);
                ContType_27 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[2]);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word RetTypes0_63;

                ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_51_93_95_49_10_p_1(ModuleInfo_11, (MR_Integer) 2, Tuples_15, &FuncArgs0_57, &RetTypes0_63, ByRefOutputVars_17, CopiedOutputVars_18, STATE_VARIABLE_MaybeInfo_0_33, STATE_VARIABLE_MaybeInfo_34);
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
            MR_hl_field(MR_mktag(0), ContArg_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[3])));
            MR_hl_field(MR_mktag(0), ContArg_29, 1) = ((MR_Box) (ContType_27));
            MR_hl_field(MR_mktag(0), ContArg_29, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ContArg_29));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_args_util_scalar_common_1[5])));
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
  MR_Word * Tuples_12)
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
      *Tuples_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
        MR_Word TailTuples_19;
        MR_Word HeadTopFunctorMode_20;
        MR_Word HeadMLDSVarName_21;
        MR_Word HeadTuple_22;

        ml_backend__ml_args_util__package_vars_types_modes_6_p_0(ModuleInfo_7, VarSet_8, TailVars_14, TailTypes_16, TailModes_18, &TailTuples_19);
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_7, HeadMode_17, HeadType_15, &HeadTopFunctorMode_20);
        HeadMLDSVarName_21 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(VarSet_8, HeadVar_13);
        {
          HeadTuple_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadTuple_22, 0) = ((MR_Box) (HeadVar_13));
          MR_hl_field(MR_mktag(0), HeadTuple_22, 1) = ((MR_Box) (HeadMLDSVarName_21));
          MR_hl_field(MR_mktag(0), HeadTuple_22, 2) = ((MR_Box) (HeadType_15));
          MR_hl_field(MR_mktag(0), HeadTuple_22, 3) = ((MR_Box) (HeadTopFunctorMode_20));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Tuples_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTuple_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTuples_19));
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

static MR_Box MR_CALL 
ml_backend__ml_args_util__ml_append_return_statement_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_39;

    conv1_LambdaHeadVar__2_39 = ml_backend__ml_args_util__IntroducedFrom__func__ml_append_return_statement__214__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_39));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_args_util__ml_append_return_statement_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_32;

    conv0_LambdaHeadVar__2_32 = ml_backend__ml_args_util__IntroducedFrom__func__ml_append_return_statement__223__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_32));
    return wrapper_arg_2;
  }
}

void MR_CALL 
ml_backend__ml_args_util__ml_append_return_statement_8_p_0(
  MR_Word CodeModel_9,
  MR_Word SoloOrTscc_10,
  MR_Word CopiedOutputVarLvals_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Stmts_0_22,
  MR_Word * STATE_VARIABLE_Stmts_23,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  switch (CodeModel_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        if ((CopiedOutputVarLvals_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          switch (SoloOrTscc_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_Stmts_23 = STATE_VARIABLE_Stmts_0_22;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_28;
                MR_Word ReturnStmt_47;

                {
                  ReturnStmt_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ReturnStmt_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), ReturnStmt_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(3), ReturnStmt_47, 2) = ((MR_Box) (Context_12));
                }
                {
                  Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (ReturnStmt_47));
                  MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                *STATE_VARIABLE_Stmts_23 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, STATE_VARIABLE_Stmts_0_22, Var_28);
              }
              break;
          }
        else
        {
          MR_Word Var_34;
          MR_Word CopiedOutputVarRvals_45;
          MR_Word ReturnStmt_46;

          CopiedOutputVarRvals_45 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_args_util_scalar_common_3[0], CopiedOutputVarLvals_11);
          {
            ReturnStmt_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ReturnStmt_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), ReturnStmt_46, 1) = ((MR_Box) (CopiedOutputVarRvals_45));
            MR_hl_field(MR_mktag(3), ReturnStmt_46, 2) = ((MR_Box) (Context_12));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (ReturnStmt_46));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *STATE_VARIABLE_Stmts_23 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, STATE_VARIABLE_Stmts_0_22, Var_34);
        }
        *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_Stmts_23 = STATE_VARIABLE_Stmts_0_22;
        *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SucceededRval_15;
        MR_Word CopiedOutputVarRvals_16;
        MR_Word ReturnedRvals_18;
        MR_Word ReturnStmt_19;
        MR_Word Var_41;

        ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&SucceededRval_15, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
        CopiedOutputVarRvals_16 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_args_util_scalar_common_3[1], CopiedOutputVarLvals_11);
        {
          ReturnedRvals_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ReturnedRvals_18, 0) = ((MR_Box) (SucceededRval_15));
          MR_hl_field(MR_mktag(1), ReturnedRvals_18, 1) = ((MR_Box) (CopiedOutputVarRvals_16));
        }
        {
          ReturnStmt_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReturnStmt_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ReturnStmt_19, 1) = ((MR_Box) (ReturnedRvals_18));
          MR_hl_field(MR_mktag(3), ReturnStmt_19, 2) = ((MR_Box) (Context_12));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ReturnStmt_19));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *STATE_VARIABLE_Stmts_23 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, STATE_VARIABLE_Stmts_0_22, Var_41);
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
ml_backend__ml_args_util____Unify____solo_or_tscc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_args_util____Unify____solo_or_tscc_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_args_util____Compare____solo_or_tscc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_args_util____Compare____solo_or_tscc_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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
	MR_register_type_ctor_info(&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_solo_or_tscc_0);
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
