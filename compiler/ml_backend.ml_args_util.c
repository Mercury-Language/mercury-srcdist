/*
** Automatically generated from `ml_args_util.m'
** by the Mercury compiler,
** version rotd-2017-08-28
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module ml_backend.ml_args_util. */
/* :- implementation. */

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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_args_util__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_args_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_args_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_what_params_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_args_util__ml_backend__ml_args_util__enum_functor_desc_what_params_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_value_ordered_what_params_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_args_util__ml_backend__ml_args_util__enum_name_ordered_what_params_0[2];

static const MR_Integer ml_backend__ml_args_util__ml_backend__ml_args_util__functor_number_map_what_params_0[2];

static MR_Word MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti_no_gc_stmts__236__1_1_f_0(
  MR_Word LambdaHeadVar__1_20);

static MR_bool MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__pred__ml_gen_proc_params_inputs_only_no_gc_stmts__226__1_2_p_0(
  MR_Word RetTypes_15,
  MR_Word HeadVar__2_22);

static MR_Word MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__func__ml_append_return_statement__148__1_1_f_0(
  MR_Word LambdaHeadVar__1_32);

static MR_Word MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__func__ml_append_return_statement__157__1_1_f_0(
  MR_Word LambdaHeadVar__1_25);

static MR_Box MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_from_rtti_no_gc_stmts_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_inputs_only_no_gc_stmts_2_f_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_53_44_32_54_93_95_48_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Vars_12,
  MR_Word Types_13,
  MR_Word Modes_14,
  MR_Word * FuncArgs_17,
  MR_Word * RetTypes_18,
  MR_Word STATE_VARIABLE_MaybeInfo_0_32,
  MR_Word * STATE_VARIABLE_MaybeInfo_33);

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_55_93_95_50_10_p_2(
  MR_Word ModuleInfo_11,
  MR_Word HeadVarNames_12,
  MR_Word HeadTypes_13,
  MR_Word HeadModes_14,
  MR_Word PredOrFunc_15,
  MR_Word CodeModel_16,
  MR_Word * FuncParams_18,
  MR_Word STATE_VARIABLE_MaybeInfo_0_44,
  MR_Word * STATE_VARIABLE_MaybeInfo_45);

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_54_93_95_50_10_p_2(
  MR_Word ModuleInfo_11,
  MR_Word Vars_12,
  MR_Word Types_13,
  MR_Word Modes_14,
  MR_Word CopyOut_15,
  MR_Word * FuncArgs_17,
  MR_Word * RetTypes_18,
  MR_Word STATE_VARIABLE_MaybeInfo_0_32,
  MR_Word * STATE_VARIABLE_MaybeInfo_33);

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_55_93_95_49_10_p_1(
  MR_Word ModuleInfo_11,
  MR_Word HeadVarNames_12,
  MR_Word HeadTypes_13,
  MR_Word HeadModes_14,
  MR_Word PredOrFunc_15,
  MR_Word CodeModel_16,
  MR_Word * FuncParams_18,
  MR_Word STATE_VARIABLE_MaybeInfo_0_44,
  MR_Word * STATE_VARIABLE_MaybeInfo_45);

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_54_93_95_49_10_p_1(
  MR_Word ModuleInfo_11,
  MR_Word Vars_12,
  MR_Word Types_13,
  MR_Word Modes_14,
  MR_Word CopyOut_15,
  MR_Word * FuncArgs_17,
  MR_Word * RetTypes_18,
  MR_Word STATE_VARIABLE_MaybeInfo_0_32,
  MR_Word * STATE_VARIABLE_MaybeInfo_33);

static MR_Box MR_CALL 
ml_backend__ml_args_util__ml_append_return_statement_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_args_util__ml_append_return_statement_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_2[5][3];

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_3[3][5];

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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_args_util_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_args_util_scalar_common_4[0])))
  },
};

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__ml_args_util_scalar_common_1[1])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_args_util_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_args_util__ml_append_return_statement_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_args_util_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_args_util__ml_append_return_statement_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_args_util_scalar_common_3[2])),
    ((MR_Box) (ml_backend__ml_args_util__ml_gen_proc_params_from_rtti_no_gc_stmts_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_args_util_scalar_common_3[3][5] = {
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
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_args_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_args_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_args_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_args_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
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

static MR_Word MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti_no_gc_stmts__236__1_1_f_0(
  MR_Word LambdaHeadVar__1_20)
{
  {
    MR_Word LambdaHeadVar__2_21;
    MR_Integer N_17;
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 0)));
    MR_String Name_25 = ((MR_String) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 1)));

    mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_24, &N_17);
    {
      LambdaHeadVar__2_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_21, 0) = ((MR_Box) (Name_25));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_21, 1) = ((MR_Box) (N_17));
    }
    return LambdaHeadVar__2_21;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__pred__ml_gen_proc_params_inputs_only_no_gc_stmts__226__1_2_p_0(
  MR_Word RetTypes_15,
  MR_Word HeadVar__2_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_args_util_scalar_common_1[0], ((MR_Box) (RetTypes_15)), ((MR_Box) (HeadVar__2_22)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__func__ml_append_return_statement__148__1_1_f_0(
  MR_Word LambdaHeadVar__1_32)
{
  {
    MR_Word LambdaHeadVar__2_33;

    {
      LambdaHeadVar__2_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), LambdaHeadVar__2_33, 0) = ((MR_Box) (LambdaHeadVar__1_32));
    }
    return LambdaHeadVar__2_33;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_args_util__IntroducedFrom__func__ml_append_return_statement__157__1_1_f_0(
  MR_Word LambdaHeadVar__1_25)
{
  {
    MR_Word LambdaHeadVar__2_26;

    {
      LambdaHeadVar__2_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), LambdaHeadVar__2_26, 0) = ((MR_Box) (LambdaHeadVar__1_25));
    }
    return LambdaHeadVar__2_26;
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

MR_Word MR_CALL 
ml_backend__ml_args_util__get_copy_out_option_2_f_0(
  MR_Word Globals_4,
  MR_Word CodeModel_5)
{
  {
    MR_Word CopyOut_6;

    switch (CodeModel_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 267, &CopyOut_6);
        }
        break;
      case (MR_Integer) 2:
        {
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 268, &CopyOut_6);
        }
        break;
    }
    return CopyOut_6;
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
  MR_Word * STATE_VARIABLE_InputRvals_46,
  MR_Word * STATE_VARIABLE_OutputLvals_47,
  MR_Word * STATE_VARIABLE_OutputTypes_48,
  MR_Word * STATE_VARIABLE_ConvOutputDefns_49,
  MR_Word * STATE_VARIABLE_ConvOutputStmts_50,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52)
{
  {
    MR_bool succeeded = (VarNames_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (VarLvals_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (CallerTypes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = (CalleeTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
            succeeded = (Modes_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_InputRvals_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_OutputLvals_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_OutputTypes_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ConvOutputDefns_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ConvOutputStmts_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_0_51;
    }
    else
    {
      MR_Word VarName_36;
      MR_Word VarNamesTail_37;
      MR_Word VarLval_38;
      MR_Word VarLvalsTail_39;
      MR_Word CallerType_40;
      MR_Word CallerTypesTail_41;
      MR_Word CalleeType_42;
      MR_Word CalleeTypesTail_43;
      MR_Word Mode_44;
      MR_Word ModesTail_45;

      succeeded = ((MR_tag((MR_Word) VarNames_19)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        VarName_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarNames_19, (MR_Integer) 0)));
        VarNamesTail_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarNames_19, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) VarLvals_20)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          VarLval_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarLvals_20, (MR_Integer) 0)));
          VarLvalsTail_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarLvals_20, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) CallerTypes_21)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            CallerType_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallerTypes_21, (MR_Integer) 0)));
            CallerTypesTail_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallerTypes_21, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) CalleeTypes_22)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              CalleeType_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), CalleeTypes_22, (MR_Integer) 0)));
              CalleeTypesTail_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), CalleeTypes_22, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Modes_23)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Mode_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_23, (MR_Integer) 0)));
                ModesTail_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_23, (MR_Integer) 1)));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Integer Var_58 = (ArgNum_29 + (MR_Integer) 1);
        MR_Word STATE_VARIABLE_InputRvals_59_59;
        MR_Word STATE_VARIABLE_OutputLvals_60_60;
        MR_Word STATE_VARIABLE_OutputTypes_61_61;
        MR_Word STATE_VARIABLE_ConvOutputDefns_62_62;
        MR_Word STATE_VARIABLE_ConvOutputStmts_63_63;
        MR_Word STATE_VARIABLE_Info_64_64;
        MR_Word ModuleInfo_104;
        MR_Word ArgTopFunctorMode_105;
        MR_Word CalleeIsDummy_106;

        ml_backend__ml_args_util__ml_gen_args_18_p_0(VarNamesTail_37, VarLvalsTail_39, CallerTypesTail_41, CalleeTypesTail_43, ModesTail_45, PredOrFunc_24, CodeModel_25, Context_26, ForClosureWrapper_27, WhatParams_28, Var_58, &STATE_VARIABLE_InputRvals_59_59, &STATE_VARIABLE_OutputLvals_60_60, &STATE_VARIABLE_OutputTypes_61_61, &STATE_VARIABLE_ConvOutputDefns_62_62, &STATE_VARIABLE_ConvOutputStmts_63_63, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_64_64);
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_64_64, &ModuleInfo_104);
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_104, Mode_44, CalleeType_42, &ArgTopFunctorMode_105);
        CalleeIsDummy_106 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_104, CalleeType_42);
        switch (CalleeIsDummy_106) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_InputRvals_46 = STATE_VARIABLE_InputRvals_59_59;
              *STATE_VARIABLE_OutputLvals_47 = STATE_VARIABLE_OutputLvals_60_60;
              *STATE_VARIABLE_OutputTypes_48 = STATE_VARIABLE_OutputTypes_61_61;
              *STATE_VARIABLE_ConvOutputDefns_49 = STATE_VARIABLE_ConvOutputDefns_62_62;
              *STATE_VARIABLE_ConvOutputStmts_50 = STATE_VARIABLE_ConvOutputStmts_63_63;
              *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_64_64;
            }
            break;
          case (MR_Integer) 1:
            switch (ArgTopFunctorMode_105) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CallerIsDummy_107;
                  MR_Word VarRval_108;
                  MR_Word ArgRval_109;

                  CallerIsDummy_107 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_104, CallerType_40);
                  switch (CallerIsDummy_107) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        VarRval_108 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[6]);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        VarRval_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), VarRval_108, 0) = ((MR_Box) (VarLval_38));
                      }
                      break;
                  }
                  ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_104, CallerType_40, CalleeType_42, (MR_Integer) 0, VarRval_108, &ArgRval_109);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_InputRvals_46 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgRval_109));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_InputRvals_59_59));
                  }
                  *STATE_VARIABLE_OutputLvals_47 = STATE_VARIABLE_OutputLvals_60_60;
                  *STATE_VARIABLE_OutputTypes_48 = STATE_VARIABLE_OutputTypes_61_61;
                  *STATE_VARIABLE_ConvOutputDefns_49 = STATE_VARIABLE_ConvOutputDefns_62_62;
                  *STATE_VARIABLE_ConvOutputStmts_50 = STATE_VARIABLE_ConvOutputStmts_63_63;
                  *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_64_64;
                }
                break;
              case (MR_Integer) 1:
                switch (WhatParams_28) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgLval_110;
                      MR_Word ThisArgConvDecls_111;
                      MR_Word ThisArgConvOutput_113;
                      MR_Word _ThisArgConvInput_112;

                      ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(CallerType_40, CalleeType_42, (MR_Integer) 0, VarLval_38, VarName_36, Context_26, ForClosureWrapper_27, ArgNum_29, &ArgLval_110, &ThisArgConvDecls_111, &_ThisArgConvInput_112, &ThisArgConvOutput_113, STATE_VARIABLE_Info_64_64, STATE_VARIABLE_Info_52);
                      *STATE_VARIABLE_ConvOutputDefns_49 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ThisArgConvDecls_111, STATE_VARIABLE_ConvOutputDefns_62_62);
                      *STATE_VARIABLE_ConvOutputStmts_50 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ThisArgConvOutput_113, STATE_VARIABLE_ConvOutputStmts_63_63);
                      succeeded = (VarNamesTail_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = (CodeModel_25 == (MR_Integer) 0);
                        if (succeeded)
                          succeeded = (PredOrFunc_24 == (MR_Integer) 1);
                      }
                      if (!(succeeded))
                      {
                        MR_Word Globals_114;

                        ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(*STATE_VARIABLE_Info_52, &Globals_114);
                        switch (CodeModel_25) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                            {
                              MR_Word Var_120;

                              libs__globals__lookup_bool_option_3_p_0(Globals_114, (MR_Integer) 267, &Var_120);
                              succeeded = (Var_120 == (MR_Integer) 1);
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word Var_139;

                              libs__globals__lookup_bool_option_3_p_0(Globals_114, (MR_Integer) 268, &Var_139);
                              succeeded = (Var_139 == (MR_Integer) 1);
                            }
                            break;
                        }
                      }
                      if (succeeded)
                      {
                        MR_Word OutputType_115;

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_OutputLvals_47 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgLval_110));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OutputLvals_60_60));
                        }
                        ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_52, CalleeType_42, &OutputType_115);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_OutputTypes_48 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OutputType_115));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OutputTypes_61_61));
                        }
                        *STATE_VARIABLE_InputRvals_46 = STATE_VARIABLE_InputRvals_59_59;
                      }
                      else
                      {
                        MR_Word Var_124;
                        MR_Word Rval_137;
                        MR_Word Var_138;

                        succeeded = ((MR_tag((MR_Word) ArgLval_110)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          Rval_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgLval_110, (MR_Integer) 0)));
                          Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgLval_110, (MR_Integer) 1)));
                          Var_124 = Rval_137;
                        }
                        else
                          {
                            Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (ArgLval_110));
                          }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_InputRvals_46 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_124));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_InputRvals_59_59));
                        }
                        *STATE_VARIABLE_OutputTypes_48 = STATE_VARIABLE_OutputTypes_61_61;
                        *STATE_VARIABLE_OutputLvals_47 = STATE_VARIABLE_OutputLvals_60_60;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      *STATE_VARIABLE_InputRvals_46 = STATE_VARIABLE_InputRvals_59_59;
                      *STATE_VARIABLE_OutputLvals_47 = STATE_VARIABLE_OutputLvals_60_60;
                      *STATE_VARIABLE_OutputTypes_48 = STATE_VARIABLE_OutputTypes_61_61;
                      *STATE_VARIABLE_ConvOutputDefns_49 = STATE_VARIABLE_ConvOutputDefns_62_62;
                      *STATE_VARIABLE_ConvOutputStmts_50 = STATE_VARIABLE_ConvOutputStmts_63_63;
                      *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_64_64;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  *STATE_VARIABLE_InputRvals_46 = STATE_VARIABLE_InputRvals_59_59;
                  *STATE_VARIABLE_OutputLvals_47 = STATE_VARIABLE_OutputLvals_60_60;
                  *STATE_VARIABLE_OutputTypes_48 = STATE_VARIABLE_OutputTypes_61_61;
                  *STATE_VARIABLE_ConvOutputDefns_49 = STATE_VARIABLE_ConvOutputDefns_62_62;
                  *STATE_VARIABLE_ConvOutputStmts_50 = STATE_VARIABLE_ConvOutputStmts_63_63;
                  *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_64_64;
                }
                break;
            }
            break;
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.ml_gen_args\'/18", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_args_util__ml_gen_info_params_8_p_0(
  MR_Word HeadVarNames_9,
  MR_Word HeadTypes_10,
  MR_Word HeadModes_11,
  MR_Word PredOrFunc_12,
  MR_Word CodeModel_13,
  MR_Word * FuncParams_14,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_Word ModuleInfo_16;
    MR_Word TopFunctorModes_17;
    MR_Word Var_21;
    MR_Word Var_22;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_18, &ModuleInfo_16);
    check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ModuleInfo_16, HeadModes_11, HeadTypes_10, &TopFunctorModes_17);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (STATE_VARIABLE_Info_0_18));
    }
    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_55_93_95_50_10_p_2(ModuleInfo_16, HeadVarNames_9, HeadTypes_10, TopFunctorModes_17, PredOrFunc_12, CodeModel_13, FuncParams_14, Var_21, &Var_22);
    *STATE_VARIABLE_Info_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0)));
  }
}

MR_Word MR_CALL 
ml_backend__ml_args_util__ml_gen_params_no_gc_stmts_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word HeadVarNames_9,
  MR_Word HeadTypes_10,
  MR_Word HeadModes_11,
  MR_Word PredOrFunc_12,
  MR_Word CodeModel_13)
{
  {
    MR_Word FuncParams_14;
    MR_Word TopFunctorModes_15;
    MR_Word Var_16;

    check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ModuleInfo_8, HeadModes_11, HeadTypes_10, &TopFunctorModes_15);
    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_55_93_95_49_10_p_1(ModuleInfo_8, HeadVarNames_9, HeadTypes_10, TopFunctorModes_15, PredOrFunc_12, CodeModel_13, &FuncParams_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_16);
    return FuncParams_14;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_from_rtti_no_gc_stmts_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_21;

    conv0_LambdaHeadVar__2_21 = ml_backend__ml_args_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti_no_gc_stmts__236__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_21));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_from_rtti_no_gc_stmts_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word RttiProcId_5)
{
  {
    MR_Word FuncParams_6;
    MR_Word HeadVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 8)));
    MR_Word ArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 5)));
    MR_Word TopFunctorModes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 9)));
    MR_Word PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 0)));
    MR_Word Detism_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 10)))) & (MR_Integer) 7);
    MR_Word CodeModel_12;
    MR_Word HeadVarNames_13;
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 1)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 2)));
    MR_String Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 3)));
    MR_Integer Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 4)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 6)));
    MR_Integer Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 7)));
    MR_Word Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 11)));
    MR_Word Var_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcId_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18;

    hlds__code_model__determinism_to_code_model_2_p_0(Detism_11, &CodeModel_12);
    HeadVarNames_13 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_args_util_scalar_common_2[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0, (MR_Word) &ml_backend__ml_args_util_scalar_common_2[4], HeadVars_7);
    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_55_93_95_49_10_p_1(ModuleInfo_4, HeadVarNames_13, ArgTypes_8, TopFunctorModes_9, PredOrFunc_10, CodeModel_12, &FuncParams_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_18);
    return FuncParams_6;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_args_util__ml_gen_proc_params_inputs_only_no_gc_stmts_2_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_args_util__IntroducedFrom__pred__ml_gen_proc_params_inputs_only_no_gc_stmts__226__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
    MR_Word HeadTypes_8;
    MR_Word TopFunctorModes_9;
    MR_Word HeadVarNames_10;
    MR_Word CodeModel_12;
    MR_Word Globals_13;
    MR_Word RetTypes_15;
    MR_Word Var_19;
    MR_Word ProcInfo_32;
    MR_Word HeadVars_33;
    MR_Word HeadModes_34;
    MR_Word VarSet_35;
    MR_Word _PredOrFunc_11;
    MR_Word Var_16;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_4, PredProcId_5, &_PredInfo_7, &ProcInfo_32);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_32, &HeadVars_33);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(_PredInfo_7, &HeadTypes_8);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_32, &HeadModes_34);
    check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ModuleInfo_4, HeadModes_34, HeadTypes_8, &TopFunctorModes_9);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_32, &VarSet_35);
    HeadVarNames_10 = ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(VarSet_35, HeadVars_33);
    _PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(_PredInfo_7);
    CodeModel_12 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_32);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_13);
    switch (CodeModel_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word CopyOut_14;

          libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 267, &CopyOut_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CopyOut_41;

          libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 268, &CopyOut_41);
        }
        break;
    }
    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_53_44_32_54_93_95_48_10_p_0(ModuleInfo_4, HeadVarNames_10, HeadTypes_8, TopFunctorModes_9, &FuncArgs_6, &RetTypes_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_16);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__ml_args_util_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__ml_args_util__ml_gen_proc_params_inputs_only_no_gc_stmts_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (RetTypes_15));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_19, (MR_String) "function \140ml_backend.ml_args_util.ml_gen_proc_params_inputs_only_no_gc_stmts\'/2", (MR_String) "RetTypes != []");
    return FuncArgs_6;
  }
}

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_53_44_32_54_93_95_48_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Vars_12,
  MR_Word Types_13,
  MR_Word Modes_14,
  MR_Word * FuncArgs_17,
  MR_Word * RetTypes_18,
  MR_Word STATE_VARIABLE_MaybeInfo_0_32,
  MR_Word * STATE_VARIABLE_MaybeInfo_33)
{
  {
    MR_bool succeeded = (Vars_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (Types_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (Modes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *FuncArgs_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *RetTypes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_MaybeInfo_33 = STATE_VARIABLE_MaybeInfo_0_32;
    }
    else
    {
      MR_Word HeadVar_20;
      MR_Word TailVars_21;
      MR_Word HeadType_22;
      MR_Word TailTypes_23;
      MR_Word HeadMode_24;
      MR_Word TailModes_25;

      succeeded = ((MR_tag((MR_Word) Vars_12)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_12, (MR_Integer) 0)));
        TailVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_12, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Types_13)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          HeadType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_13, (MR_Integer) 0)));
          TailTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_13, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Modes_14)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            HeadMode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_14, (MR_Integer) 0)));
            TailModes_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_14, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word TailFuncArgs_26;
        MR_Word TailRetTypes_27;
        MR_Word HeadIsDummy_28;
        MR_Word STATE_VARIABLE_MaybeInfo_34_34;

        ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_53_44_32_54_93_95_48_10_p_0(ModuleInfo_11, TailVars_21, TailTypes_23, TailModes_25, &TailFuncArgs_26, &TailRetTypes_27, STATE_VARIABLE_MaybeInfo_0_32, &STATE_VARIABLE_MaybeInfo_34_34);
        HeadIsDummy_28 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_11, HeadType_22);
        switch (HeadIsDummy_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *FuncArgs_17 = TailFuncArgs_26;
              *RetTypes_18 = TailRetTypes_27;
              *STATE_VARIABLE_MaybeInfo_33 = STATE_VARIABLE_MaybeInfo_34_34;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word HeadMLDS_Type_29;

              HeadMLDS_Type_29 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_11, HeadType_22);
              switch (HeadMode_24) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word HeadFuncArg_40;

                    *STATE_VARIABLE_MaybeInfo_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      HeadFuncArg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), HeadFuncArg_40, 0) = ((MR_Box) (HeadVar_20));
                      MR_hl_field(MR_mktag(0), HeadFuncArg_40, 1) = ((MR_Box) (HeadMLDS_Type_29));
                      MR_hl_field(MR_mktag(0), HeadFuncArg_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *FuncArgs_17 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadFuncArg_40));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailFuncArgs_26));
                    }
                    *RetTypes_18 = TailRetTypes_27;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *FuncArgs_17 = TailFuncArgs_26;
                    *RetTypes_18 = TailRetTypes_27;
                    *STATE_VARIABLE_MaybeInfo_33 = STATE_VARIABLE_MaybeInfo_34_34;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *FuncArgs_17 = TailFuncArgs_26;
                    *RetTypes_18 = TailRetTypes_27;
                    *STATE_VARIABLE_MaybeInfo_33 = STATE_VARIABLE_MaybeInfo_34_34;
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.ml_gen_arg_decls\'/10", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_args_util__ml_gen_info_proc_params_4_p_0(
  MR_Word PredProcId_5,
  MR_Word * FuncParams_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_8;
    MR_Word PredInfo_9;
    MR_Word HeadTypes_10;
    MR_Word TopFunctorModes_11;
    MR_Word HeadVarNames_12;
    MR_Word PredOrFunc_13;
    MR_Word CodeModel_14;
    MR_Word PredModule_15;
    MR_String PredName_16;
    MR_Integer PredArity_17;
    MR_Word ProcInfo_35;
    MR_Word HeadVars_36;
    MR_Word HeadModes_37;
    MR_Word VarSet_38;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_19, &ModuleInfo_8);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_8, PredProcId_5, &PredInfo_9, &ProcInfo_35);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_35, &HeadVars_36);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_9, &HeadTypes_10);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_35, &HeadModes_37);
    check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ModuleInfo_8, HeadModes_37, HeadTypes_10, &TopFunctorModes_11);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_35, &VarSet_38);
    HeadVarNames_12 = ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(VarSet_38, HeadVars_36);
    PredOrFunc_13 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_9);
    CodeModel_14 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_35);
    PredModule_15 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_9);
    PredName_16 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_9);
    PredArity_17 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_9);
    succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_15, PredName_16, PredArity_17);
    if (succeeded)
    {
      MR_Word Var_18;

      ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_55_93_95_49_10_p_1(ModuleInfo_8, HeadVarNames_12, HeadTypes_10, TopFunctorModes_11, PredOrFunc_13, CodeModel_14, FuncParams_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_18);
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
    }
    else
    {
      MR_Word Var_24;
      MR_Word Var_25;

      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (STATE_VARIABLE_Info_0_19));
      }
      ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_55_93_95_50_10_p_2(ModuleInfo_8, HeadVarNames_12, HeadTypes_10, TopFunctorModes_11, PredOrFunc_13, CodeModel_14, FuncParams_6, Var_24, &Var_25);
      *STATE_VARIABLE_Info_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));
    }
  }
}

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_55_93_95_50_10_p_2(
  MR_Word ModuleInfo_11,
  MR_Word HeadVarNames_12,
  MR_Word HeadTypes_13,
  MR_Word HeadModes_14,
  MR_Word PredOrFunc_15,
  MR_Word CodeModel_16,
  MR_Word * FuncParams_18,
  MR_Word STATE_VARIABLE_MaybeInfo_0_44,
  MR_Word * STATE_VARIABLE_MaybeInfo_45)
{
  {
    MR_bool succeeded;
    MR_Word Globals_20;
    MR_Word FuncArgs_28;
    MR_Word RetTypes_34;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_20);
    switch (CodeModel_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word CopyOut_21;
          MR_Word FuncArgs0_22;
          MR_Word RetTypes0_23;

          libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 267, &CopyOut_21);
          ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_54_93_95_50_10_p_2(ModuleInfo_11, HeadVarNames_12, HeadTypes_13, HeadModes_14, CopyOut_21, &FuncArgs0_22, &RetTypes0_23, STATE_VARIABLE_MaybeInfo_0_44, STATE_VARIABLE_MaybeInfo_45);
          switch (CodeModel_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeCtorInfo_61_61;
                MR_Word TypeCtorInfo_62_62;
                MR_Word ResultMode_25;
                MR_Word ResultType_27;
                MR_Word Var_57;
                MR_Word Var_24;
                MR_Box conv0_ResultMode_25;
                MR_Word Var_26;
                MR_Box conv1_ResultType_27;

                succeeded = (RetTypes0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = (PredOrFunc_15 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    TypeCtorInfo_61_61 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_top_functor_mode_0;
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeCtorInfo_61_61, HeadModes_14, &Var_24, &conv0_ResultMode_25);
                    ResultMode_25 = ((MR_Word) conv0_ResultMode_25);
                    succeeded = (ResultMode_25 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeCtorInfo_62_62, HeadTypes_13, &Var_26, &conv1_ResultType_27);
                      ResultType_27 = ((MR_Word) conv1_ResultType_27);
                      Var_57 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_11, ResultType_27);
                      succeeded = (Var_57 == (MR_Integer) 1);
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word RetArg_29;
                  MR_Word RetTypePtr_31;
                  MR_Box conv2_RetArg_29;
                  MR_Word _RetArgName_30;
                  MR_Word _GCStmt_32;
                  MR_Word RetType_33;

                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, FuncArgs0_22, &FuncArgs_28, &conv2_RetArg_29);
                  RetArg_29 = ((MR_Word) conv2_RetArg_29);
                  _RetArgName_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), RetArg_29, (MR_Integer) 0)));
                  RetTypePtr_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), RetArg_29, (MR_Integer) 1)));
                  _GCStmt_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), RetArg_29, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) RetTypePtr_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RetTypePtr_31, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    RetType_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), RetTypePtr_31, (MR_Integer) 1)));
                    {
                      RetTypes_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), RetTypes_34, 0) = ((MR_Box) (RetType_33));
                      MR_hl_field(MR_mktag(1), RetTypes_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  else
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.ml_gen_params_base\'/10", (MR_String) "output mode function result doesn\'t have pointer type");
                      return;
                    }
                  }
                }
                else
                {
                  FuncArgs_28 = FuncArgs0_22;
                  RetTypes_34 = RetTypes0_23;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                FuncArgs_28 = FuncArgs0_22;
                {
                  RetTypes_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), RetTypes_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  MR_hl_field(MR_mktag(1), RetTypes_34, 1) = ((MR_Box) (RetTypes0_23));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ContType_35;
          MR_Word ContArg_38;
          MR_Word NestedFunctions_43;
          MR_Word CopyOut_71;
          MR_Word FuncArgs0_72;
          MR_Word RetTypes0_73;

          libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 268, &CopyOut_71);
          ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_54_93_95_50_10_p_2(ModuleInfo_11, HeadVarNames_12, HeadTypes_13, HeadModes_14, CopyOut_71, &FuncArgs0_72, &RetTypes0_73, STATE_VARIABLE_MaybeInfo_0_44, STATE_VARIABLE_MaybeInfo_45);
          switch (CopyOut_71) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ContType_35 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[2]);
                RetTypes_34 = RetTypes0_73;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  ContType_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ContType_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ContType_35, 1) = ((MR_Box) (RetTypes0_73));
                }
                RetTypes_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
          }
          {
            ContArg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ContArg_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[3])));
            MR_hl_field(MR_mktag(0), ContArg_38, 1) = ((MR_Box) (ContType_35));
            MR_hl_field(MR_mktag(0), ContArg_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 266, &NestedFunctions_43);
          switch (NestedFunctions_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_51;

                {
                  Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (ContArg_38));
                  MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_args_util_scalar_common_1[5])));
                }
                FuncArgs_28 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, FuncArgs0_72, Var_51);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_54;

                {
                  Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ContArg_38));
                  MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                FuncArgs_28 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, FuncArgs0_72, Var_54);
              }
              break;
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *FuncParams_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FuncArgs_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (RetTypes_34));
    }
  }
}

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_54_93_95_50_10_p_2(
  MR_Word ModuleInfo_11,
  MR_Word Vars_12,
  MR_Word Types_13,
  MR_Word Modes_14,
  MR_Word CopyOut_15,
  MR_Word * FuncArgs_17,
  MR_Word * RetTypes_18,
  MR_Word STATE_VARIABLE_MaybeInfo_0_32,
  MR_Word * STATE_VARIABLE_MaybeInfo_33)
{
  {
    MR_bool succeeded = (Vars_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (Types_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (Modes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *FuncArgs_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *RetTypes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_MaybeInfo_33 = STATE_VARIABLE_MaybeInfo_0_32;
    }
    else
    {
      MR_Word HeadVar_20;
      MR_Word TailVars_21;
      MR_Word HeadType_22;
      MR_Word TailTypes_23;
      MR_Word HeadMode_24;
      MR_Word TailModes_25;

      succeeded = ((MR_tag((MR_Word) Vars_12)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_12, (MR_Integer) 0)));
        TailVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_12, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Types_13)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          HeadType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_13, (MR_Integer) 0)));
          TailTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_13, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Modes_14)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            HeadMode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_14, (MR_Integer) 0)));
            TailModes_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_14, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word TailFuncArgs_26;
        MR_Word TailRetTypes_27;
        MR_Word HeadIsDummy_28;
        MR_Word STATE_VARIABLE_MaybeInfo_34_34;

        ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_54_93_95_50_10_p_2(ModuleInfo_11, TailVars_21, TailTypes_23, TailModes_25, CopyOut_15, &TailFuncArgs_26, &TailRetTypes_27, STATE_VARIABLE_MaybeInfo_0_32, &STATE_VARIABLE_MaybeInfo_34_34);
        HeadIsDummy_28 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_11, HeadType_22);
        switch (HeadIsDummy_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *FuncArgs_17 = TailFuncArgs_26;
              *RetTypes_18 = TailRetTypes_27;
              *STATE_VARIABLE_MaybeInfo_33 = STATE_VARIABLE_MaybeInfo_34_34;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word HeadMLDS_Type_29;

              HeadMLDS_Type_29 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_11, HeadType_22);
              switch (HeadMode_24) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word HeadFuncArg_40;
                    MR_Word Info0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeInfo_34_34, (MR_Integer) 0)));
                    MR_Word Context_49;
                    MR_Word GCStmt_50;
                    MR_Word Info_51;

                    mercury__term__context_init_1_p_0(&Context_49);
                    ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(HeadVar_20, HeadType_22, Context_49, &GCStmt_50, Info0_48, &Info_51);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_MaybeInfo_33 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Info_51));
                    }
                    {
                      HeadFuncArg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), HeadFuncArg_40, 0) = ((MR_Box) (HeadVar_20));
                      MR_hl_field(MR_mktag(0), HeadFuncArg_40, 1) = ((MR_Box) (HeadMLDS_Type_29));
                      MR_hl_field(MR_mktag(0), HeadFuncArg_40, 2) = ((MR_Box) (GCStmt_50));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *FuncArgs_17 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadFuncArg_40));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailFuncArgs_26));
                    }
                    *RetTypes_18 = TailRetTypes_27;
                  }
                  break;
                case (MR_Integer) 1:
                  switch (CopyOut_15) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word HeadMLDS_ArgType_30;
                        MR_Word HeadFuncArg_31;
                        MR_Word Info0_61;
                        MR_Word Context_62;
                        MR_Word GCStmt_63;
                        MR_Word Info_64;

                        {
                          HeadMLDS_ArgType_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), HeadMLDS_ArgType_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), HeadMLDS_ArgType_30, 1) = ((MR_Box) (HeadMLDS_Type_29));
                        }
                        Info0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeInfo_34_34, (MR_Integer) 0)));
                        mercury__term__context_init_1_p_0(&Context_62);
                        ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(HeadVar_20, HeadType_22, Context_62, &GCStmt_63, Info0_61, &Info_64);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_MaybeInfo_33 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Info_64));
                        }
                        {
                          HeadFuncArg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), HeadFuncArg_31, 0) = ((MR_Box) (HeadVar_20));
                          MR_hl_field(MR_mktag(0), HeadFuncArg_31, 1) = ((MR_Box) (HeadMLDS_ArgType_30));
                          MR_hl_field(MR_mktag(0), HeadFuncArg_31, 2) = ((MR_Box) (GCStmt_63));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *FuncArgs_17 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadFuncArg_31));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailFuncArgs_26));
                        }
                        *RetTypes_18 = TailRetTypes_27;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *FuncArgs_17 = TailFuncArgs_26;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *RetTypes_18 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadMLDS_Type_29));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRetTypes_27));
                        }
                        *STATE_VARIABLE_MaybeInfo_33 = STATE_VARIABLE_MaybeInfo_34_34;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *FuncArgs_17 = TailFuncArgs_26;
                    *RetTypes_18 = TailRetTypes_27;
                    *STATE_VARIABLE_MaybeInfo_33 = STATE_VARIABLE_MaybeInfo_34_34;
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.ml_gen_arg_decls\'/10", (MR_String) "length mismatch");
          return;
        }
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
    MR_Word HeadTypes_8;
    MR_Word TopFunctorModes_9;
    MR_Word HeadVarNames_10;
    MR_Word PredOrFunc_11;
    MR_Word CodeModel_12;
    MR_Word ProcInfo_24;
    MR_Word HeadVars_25;
    MR_Word HeadModes_26;
    MR_Word VarSet_27;
    MR_Word Var_13;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_4, PredProcId_5, &_PredInfo_7, &ProcInfo_24);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_24, &HeadVars_25);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(_PredInfo_7, &HeadTypes_8);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_24, &HeadModes_26);
    check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ModuleInfo_4, HeadModes_26, HeadTypes_8, &TopFunctorModes_9);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_24, &VarSet_27);
    HeadVarNames_10 = ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(VarSet_27, HeadVars_25);
    PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(_PredInfo_7);
    CodeModel_12 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_24);
    ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_55_93_95_49_10_p_1(ModuleInfo_4, HeadVarNames_10, HeadTypes_8, TopFunctorModes_9, PredOrFunc_11, CodeModel_12, &FuncParams_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_13);
    return FuncParams_6;
  }
}

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_97_114_97_109_115_95_98_97_115_101_95_95_91_55_93_95_49_10_p_1(
  MR_Word ModuleInfo_11,
  MR_Word HeadVarNames_12,
  MR_Word HeadTypes_13,
  MR_Word HeadModes_14,
  MR_Word PredOrFunc_15,
  MR_Word CodeModel_16,
  MR_Word * FuncParams_18,
  MR_Word STATE_VARIABLE_MaybeInfo_0_44,
  MR_Word * STATE_VARIABLE_MaybeInfo_45)
{
  {
    MR_bool succeeded;
    MR_Word Globals_20;
    MR_Word FuncArgs_28;
    MR_Word RetTypes_34;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_20);
    switch (CodeModel_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word CopyOut_21;
          MR_Word FuncArgs0_22;
          MR_Word RetTypes0_23;

          libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 267, &CopyOut_21);
          ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_54_93_95_49_10_p_1(ModuleInfo_11, HeadVarNames_12, HeadTypes_13, HeadModes_14, CopyOut_21, &FuncArgs0_22, &RetTypes0_23, STATE_VARIABLE_MaybeInfo_0_44, STATE_VARIABLE_MaybeInfo_45);
          switch (CodeModel_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeCtorInfo_61_61;
                MR_Word TypeCtorInfo_62_62;
                MR_Word ResultMode_25;
                MR_Word ResultType_27;
                MR_Word Var_57;
                MR_Word Var_24;
                MR_Box conv0_ResultMode_25;
                MR_Word Var_26;
                MR_Box conv1_ResultType_27;

                succeeded = (RetTypes0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = (PredOrFunc_15 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    TypeCtorInfo_61_61 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_top_functor_mode_0;
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeCtorInfo_61_61, HeadModes_14, &Var_24, &conv0_ResultMode_25);
                    ResultMode_25 = ((MR_Word) conv0_ResultMode_25);
                    succeeded = (ResultMode_25 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeCtorInfo_62_62, HeadTypes_13, &Var_26, &conv1_ResultType_27);
                      ResultType_27 = ((MR_Word) conv1_ResultType_27);
                      Var_57 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_11, ResultType_27);
                      succeeded = (Var_57 == (MR_Integer) 1);
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word RetArg_29;
                  MR_Word RetTypePtr_31;
                  MR_Box conv2_RetArg_29;
                  MR_Word _RetArgName_30;
                  MR_Word _GCStmt_32;
                  MR_Word RetType_33;

                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, FuncArgs0_22, &FuncArgs_28, &conv2_RetArg_29);
                  RetArg_29 = ((MR_Word) conv2_RetArg_29);
                  _RetArgName_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), RetArg_29, (MR_Integer) 0)));
                  RetTypePtr_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), RetArg_29, (MR_Integer) 1)));
                  _GCStmt_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), RetArg_29, (MR_Integer) 2)));
                  succeeded = ((((MR_tag((MR_Word) RetTypePtr_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RetTypePtr_31, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    RetType_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), RetTypePtr_31, (MR_Integer) 1)));
                    {
                      RetTypes_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), RetTypes_34, 0) = ((MR_Box) (RetType_33));
                      MR_hl_field(MR_mktag(1), RetTypes_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  else
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.ml_gen_params_base\'/10", (MR_String) "output mode function result doesn\'t have pointer type");
                      return;
                    }
                  }
                }
                else
                {
                  FuncArgs_28 = FuncArgs0_22;
                  RetTypes_34 = RetTypes0_23;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                FuncArgs_28 = FuncArgs0_22;
                {
                  RetTypes_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), RetTypes_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  MR_hl_field(MR_mktag(1), RetTypes_34, 1) = ((MR_Box) (RetTypes0_23));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ContType_35;
          MR_Word ContArg_38;
          MR_Word NestedFunctions_43;
          MR_Word CopyOut_71;
          MR_Word FuncArgs0_72;
          MR_Word RetTypes0_73;

          libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 268, &CopyOut_71);
          ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_54_93_95_49_10_p_1(ModuleInfo_11, HeadVarNames_12, HeadTypes_13, HeadModes_14, CopyOut_71, &FuncArgs0_72, &RetTypes0_73, STATE_VARIABLE_MaybeInfo_0_44, STATE_VARIABLE_MaybeInfo_45);
          switch (CopyOut_71) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ContType_35 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[2]);
                RetTypes_34 = RetTypes0_73;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  ContType_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ContType_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ContType_35, 1) = ((MR_Box) (RetTypes0_73));
                }
                RetTypes_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
          }
          {
            ContArg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ContArg_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_args_util_scalar_common_1[3])));
            MR_hl_field(MR_mktag(0), ContArg_38, 1) = ((MR_Box) (ContType_35));
            MR_hl_field(MR_mktag(0), ContArg_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 266, &NestedFunctions_43);
          switch (NestedFunctions_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_51;

                {
                  Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (ContArg_38));
                  MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_args_util_scalar_common_1[5])));
                }
                FuncArgs_28 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, FuncArgs0_72, Var_51);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_54;

                {
                  Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ContArg_38));
                  MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                FuncArgs_28 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, FuncArgs0_72, Var_54);
              }
              break;
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *FuncParams_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FuncArgs_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (RetTypes_34));
    }
  }
}

static void MR_CALL 
ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_54_93_95_49_10_p_1(
  MR_Word ModuleInfo_11,
  MR_Word Vars_12,
  MR_Word Types_13,
  MR_Word Modes_14,
  MR_Word CopyOut_15,
  MR_Word * FuncArgs_17,
  MR_Word * RetTypes_18,
  MR_Word STATE_VARIABLE_MaybeInfo_0_32,
  MR_Word * STATE_VARIABLE_MaybeInfo_33)
{
  {
    MR_bool succeeded = (Vars_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (Types_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (Modes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *FuncArgs_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *RetTypes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_MaybeInfo_33 = STATE_VARIABLE_MaybeInfo_0_32;
    }
    else
    {
      MR_Word HeadVar_20;
      MR_Word TailVars_21;
      MR_Word HeadType_22;
      MR_Word TailTypes_23;
      MR_Word HeadMode_24;
      MR_Word TailModes_25;

      succeeded = ((MR_tag((MR_Word) Vars_12)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_12, (MR_Integer) 0)));
        TailVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_12, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Types_13)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          HeadType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_13, (MR_Integer) 0)));
          TailTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Types_13, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Modes_14)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            HeadMode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_14, (MR_Integer) 0)));
            TailModes_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_14, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word TailFuncArgs_26;
        MR_Word TailRetTypes_27;
        MR_Word HeadIsDummy_28;
        MR_Word STATE_VARIABLE_MaybeInfo_34_34;

        ml_backend__ml_args_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_97_114_103_95_100_101_99_108_115_95_95_91_54_93_95_49_10_p_1(ModuleInfo_11, TailVars_21, TailTypes_23, TailModes_25, CopyOut_15, &TailFuncArgs_26, &TailRetTypes_27, STATE_VARIABLE_MaybeInfo_0_32, &STATE_VARIABLE_MaybeInfo_34_34);
        HeadIsDummy_28 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_11, HeadType_22);
        switch (HeadIsDummy_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *FuncArgs_17 = TailFuncArgs_26;
              *RetTypes_18 = TailRetTypes_27;
              *STATE_VARIABLE_MaybeInfo_33 = STATE_VARIABLE_MaybeInfo_34_34;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word HeadMLDS_Type_29;

              HeadMLDS_Type_29 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_11, HeadType_22);
              switch (HeadMode_24) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word HeadFuncArg_40;

                    *STATE_VARIABLE_MaybeInfo_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      HeadFuncArg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), HeadFuncArg_40, 0) = ((MR_Box) (HeadVar_20));
                      MR_hl_field(MR_mktag(0), HeadFuncArg_40, 1) = ((MR_Box) (HeadMLDS_Type_29));
                      MR_hl_field(MR_mktag(0), HeadFuncArg_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *FuncArgs_17 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadFuncArg_40));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailFuncArgs_26));
                    }
                    *RetTypes_18 = TailRetTypes_27;
                  }
                  break;
                case (MR_Integer) 1:
                  switch (CopyOut_15) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word HeadMLDS_ArgType_30;
                        MR_Word HeadFuncArg_31;

                        {
                          HeadMLDS_ArgType_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), HeadMLDS_ArgType_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), HeadMLDS_ArgType_30, 1) = ((MR_Box) (HeadMLDS_Type_29));
                        }
                        *STATE_VARIABLE_MaybeInfo_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          HeadFuncArg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), HeadFuncArg_31, 0) = ((MR_Box) (HeadVar_20));
                          MR_hl_field(MR_mktag(0), HeadFuncArg_31, 1) = ((MR_Box) (HeadMLDS_ArgType_30));
                          MR_hl_field(MR_mktag(0), HeadFuncArg_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *FuncArgs_17 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadFuncArg_31));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailFuncArgs_26));
                        }
                        *RetTypes_18 = TailRetTypes_27;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *FuncArgs_17 = TailFuncArgs_26;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *RetTypes_18 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadMLDS_Type_29));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRetTypes_27));
                        }
                        *STATE_VARIABLE_MaybeInfo_33 = STATE_VARIABLE_MaybeInfo_34_34;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *FuncArgs_17 = TailFuncArgs_26;
                    *RetTypes_18 = TailRetTypes_27;
                    *STATE_VARIABLE_MaybeInfo_33 = STATE_VARIABLE_MaybeInfo_34_34;
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_args_util.ml_gen_arg_decls\'/10", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_args_util__ml_append_return_statement_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_33;

    conv1_LambdaHeadVar__2_33 = ml_backend__ml_args_util__IntroducedFrom__func__ml_append_return_statement__148__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_33));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_args_util__ml_append_return_statement_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_26;

    conv0_LambdaHeadVar__2_26 = ml_backend__ml_args_util__IntroducedFrom__func__ml_append_return_statement__157__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_26));
    return wrapper_arg_2;
  }
}

void MR_CALL 
ml_backend__ml_args_util__ml_append_return_statement_7_p_0(
  MR_Word CodeModel_8,
  MR_Word CopiedOutputVarLvals_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Stmts_0_20,
  MR_Word * STATE_VARIABLE_Stmts_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  switch (CodeModel_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        if ((CopiedOutputVarLvals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *STATE_VARIABLE_Stmts_21 = STATE_VARIABLE_Stmts_0_20;
        else
        {
          MR_Word Var_28;
          MR_Word CopiedOutputVarRvals_39;
          MR_Word ReturnStmt_40;

          CopiedOutputVarRvals_39 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_args_util_scalar_common_2[1], CopiedOutputVarLvals_9);
          {
            ReturnStmt_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ReturnStmt_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), ReturnStmt_40, 1) = ((MR_Box) (CopiedOutputVarRvals_39));
            MR_hl_field(MR_mktag(3), ReturnStmt_40, 2) = ((MR_Box) (Context_10));
          }
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (ReturnStmt_40));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *STATE_VARIABLE_Stmts_21 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, STATE_VARIABLE_Stmts_0_20, Var_28);
        }
        *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_Stmts_21 = STATE_VARIABLE_Stmts_0_20;
        *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Succeeded_13;
        MR_Word CopiedOutputVarRvals_14;
        MR_Word ReturnedRvals_16;
        MR_Word ReturnStmt_17;
        MR_Word Var_35;

        ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&Succeeded_13, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
        CopiedOutputVarRvals_14 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_args_util_scalar_common_2[2], CopiedOutputVarLvals_9);
        {
          ReturnedRvals_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ReturnedRvals_16, 0) = ((MR_Box) (Succeeded_13));
          MR_hl_field(MR_mktag(1), ReturnedRvals_16, 1) = ((MR_Box) (CopiedOutputVarRvals_14));
        }
        {
          ReturnStmt_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReturnStmt_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ReturnStmt_17, 1) = ((MR_Box) (ReturnedRvals_16));
          MR_hl_field(MR_mktag(3), ReturnStmt_17, 2) = ((MR_Box) (Context_10));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (ReturnStmt_17));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *STATE_VARIABLE_Stmts_21 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, STATE_VARIABLE_Stmts_0_20, Var_35);
      }
      break;
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

/* :- end_module ml_backend.ml_args_util. */
