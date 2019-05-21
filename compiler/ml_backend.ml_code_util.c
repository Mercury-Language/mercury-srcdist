/*
** Automatically generated from `ml_code_util.m'
** by the Mercury compiler,
** version rotd-2017-07-24
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


/* :- module ml_backend.ml_code_util. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_code_util__init
ENDINIT
*/

#include "ml_backend.ml_code_util.mih"


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
#include "mdbcomp.builtin_modules.mih"
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
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.java_names.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_code_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_VA_TypeInfo_Struct4 ml_backend__ml_code_util____vti_pred_4list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;

static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1857__1_1_f_0(
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_27);

static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__900__1_1_f_0(
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_20);

static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__572__1_1_f_0(
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_28);

static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__581__1_1_f_0(
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_22);

static void MR_CALL 
ml_backend__ml_code_util__lookup_ground_rval_3_p_0(
  MR_Word ml_backend__ml_code_util__FinalConstVarMap_4,
  MR_Word ml_backend__ml_code_util__Var_5,
  MR_Word * ml_backend__ml_code_util__Rval_6);

static void MR_CALL 
ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1,
  MR_Box * ml_backend__ml_code_util__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_code_util__ml_initial_cont_4_p_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1,
  MR_Box * ml_backend__ml_code_util__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word ml_backend__ml_code_util__HeadVar__1_1,
  MR_Word ml_backend__ml_code_util__HeadVar__2_2,
  MR_Word ml_backend__ml_code_util__ModuleInfo_3,
  MR_Word * ml_backend__ml_code_util__HeadVar__4_4,
  MR_Word * ml_backend__ml_code_util__HeadVar__5_5);

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_f_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_5_p_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_3_f_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_code_util__ml_gen_params_base_9_p_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_10,
  MR_Word ml_backend__ml_code_util__HeadVarNames_11,
  MR_Word ml_backend__ml_code_util__HeadTypes_12,
  MR_Word ml_backend__ml_code_util__HeadModes_13,
  MR_Word ml_backend__ml_code_util__PredOrFunc_14,
  MR_Word ml_backend__ml_code_util__CodeModel_15,
  MR_Word * ml_backend__ml_code_util__FuncParams_16,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_42,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_43);

static void MR_CALL 
ml_backend__ml_code_util__ml_gen_arg_decls_9_p_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_10,
  MR_Word ml_backend__ml_code_util__HeadVars_11,
  MR_Word ml_backend__ml_code_util__HeadTypes_12,
  MR_Word ml_backend__ml_code_util__HeadModes_13,
  MR_Word ml_backend__ml_code_util__CopyOut_14,
  MR_Word * ml_backend__ml_code_util__FuncArgs_15,
  MR_Word * ml_backend__ml_code_util__RetTypes_16,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_28,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_29);

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_append_return_statement_6_p_0_2(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_append_return_statement_6_p_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_code_util____Unify____gen_pred_0_0_10001(
  MR_Box ml_backend__ml_code_util__wrapper_arg_1,
  MR_Box ml_backend__ml_code_util__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_code_util____Compare____gen_pred_0_0_10001(
  MR_Box * ml_backend__ml_code_util__wrapper_arg_1,
  MR_Box ml_backend__ml_code_util__wrapper_arg_2,
  MR_Box ml_backend__ml_code_util__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_1[24][2];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_2[8][3];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_3[4][6];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_4[14][1];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_5[2][5];




static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_1[24][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_4[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 16 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[5])))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_code_util__ml_append_return_statement_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_code_util__ml_append_return_statement_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_5[1])),
    ((MR_Box) (ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_3[4][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[2])),
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[3])),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_4[14][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "}\n"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "MR_deallocate(allocated_mem);\n"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "{\n"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "MR_MemoryList allocated_mem = NULL;\n"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) " = (MR_C_Pointer) MR_make_type_info_maybe_existq(\n\t"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) ", ((MR_Closure_Layout *)\n\t"))
  },
  /* row 12 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_5[2][5] = {
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
    ((MR_Box) (&ml_backend__ml_code_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_code_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0
  }
};

static const MR_VA_TypeInfo_Struct4 ml_backend__ml_code_util____vti_pred_4list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) &ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
    (MR_TypeInfo) &ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0,
    (MR_TypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0,
    (MR_TypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_code_util__ml_backend__ml_code_util__type_ctor_info_gen_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_code_util____Unify____gen_pred_0_0_10001)),
  ((MR_Box) (ml_backend__ml_code_util____Compare____gen_pred_0_0_10001)),
  (MR_String) "ml_backend.ml_code_util",
  (MR_String) "gen_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_code_util____vti_pred_4list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1857__1_1_f_0(
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_27)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__LambdaHeadVar__2_28;

    {
      ml_backend__ml_code_util__LambdaHeadVar__2_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__LambdaHeadVar__2_28, 0) = ((MR_Box) (ml_backend__ml_code_util__LambdaHeadVar__1_27));
    }
    return ml_backend__ml_code_util__LambdaHeadVar__2_28;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__900__1_1_f_0(
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_20)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__LambdaHeadVar__2_21;
    MR_Integer ml_backend__ml_code_util__N_17;
    MR_Word ml_backend__ml_code_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__LambdaHeadVar__1_20, (MR_Integer) 0)));
    MR_String ml_backend__ml_code_util__Name_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__LambdaHeadVar__1_20, (MR_Integer) 1)));

    {
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_util__Var_23, &ml_backend__ml_code_util__N_17);
    }
    {
      ml_backend__ml_code_util__LambdaHeadVar__2_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__LambdaHeadVar__2_21, 0) = ((MR_Box) (ml_backend__ml_code_util__Name_24));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__LambdaHeadVar__2_21, 1) = ((MR_Box) (ml_backend__ml_code_util__N_17));
    }
    return ml_backend__ml_code_util__LambdaHeadVar__2_21;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__572__1_1_f_0(
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_28)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__LambdaHeadVar__2_29;

    {
      ml_backend__ml_code_util__LambdaHeadVar__2_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__LambdaHeadVar__2_29, 0) = ((MR_Box) (ml_backend__ml_code_util__LambdaHeadVar__1_28));
    }
    return ml_backend__ml_code_util__LambdaHeadVar__2_29;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__581__1_1_f_0(
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_22)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__LambdaHeadVar__2_23;

    {
      ml_backend__ml_code_util__LambdaHeadVar__2_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__LambdaHeadVar__2_23, 0) = ((MR_Box) (ml_backend__ml_code_util__LambdaHeadVar__1_22));
    }
    return ml_backend__ml_code_util__LambdaHeadVar__2_23;
  }
}

void MR_CALL 
ml_backend__ml_code_util____Compare____gen_pred_0_0(
  MR_Word * ml_backend__ml_code_util__HeadVar__1_1,
  MR_Word ml_backend__ml_code_util__HeadVar__2_2,
  MR_Word ml_backend__ml_code_util__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__Cast_HeadVar1_4 = ml_backend__ml_code_util__HeadVar__2_2;
    MR_Word ml_backend__ml_code_util__Cast_HeadVar2_5 = ml_backend__ml_code_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_code_util_scalar_common_3[0], ml_backend__ml_code_util__HeadVar__1_1, ((MR_Box) (ml_backend__ml_code_util__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_code_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_code_util____Unify____gen_pred_0_0(
  MR_Word ml_backend__ml_code_util__HeadVar__1_1,
  MR_Word ml_backend__ml_code_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__Cast_HeadVar1_3 = ml_backend__ml_code_util__HeadVar__1_1;
    MR_Word ml_backend__ml_code_util__Cast_HeadVar2_4 = ml_backend__ml_code_util__HeadVar__2_2;

    {
      ml_backend__ml_code_util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ml_backend__ml_code_util__Cast_HeadVar1_3, (MR_Word) ml_backend__ml_code_util__Cast_HeadVar2_4);
    }
    return ml_backend__ml_code_util__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_code_util__lookup_ground_rval_3_p_0(
  MR_Word ml_backend__ml_code_util__FinalConstVarMap_4,
  MR_Word ml_backend__ml_code_util__Var_5,
  MR_Word * ml_backend__ml_code_util__Rval_6)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__GroundTerm_7;
    MR_Box ml_backend__ml_code_util__conv0_GroundTerm_7;
    MR_Word ml_backend__ml_code_util__Var_8;
    MR_Word ml_backend__ml_code_util__Var_9;

    {
      mercury__map__lookup_3_p_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[0], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ml_backend__ml_code_util__FinalConstVarMap_4, ((MR_Box) (ml_backend__ml_code_util__Var_5)), &ml_backend__ml_code_util__conv0_GroundTerm_7);
    }
    ml_backend__ml_code_util__GroundTerm_7 = ((MR_Word) ml_backend__ml_code_util__conv0_GroundTerm_7);
    *ml_backend__ml_code_util__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GroundTerm_7, (MR_Integer) 0)));
    ml_backend__ml_code_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GroundTerm_7, (MR_Integer) 1)));
    ml_backend__ml_code_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GroundTerm_7, (MR_Integer) 2)));
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__fixup_builtin_module_1_f_0(
  MR_Word ml_backend__ml_code_util__ModuleName0_3)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__ModuleName0_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ml_backend__ml_code_util__ModuleName_4;
    MR_String ml_backend__ml_code_util__Var_5;

    if (ml_backend__ml_code_util__succeeded)
      {
        ml_backend__ml_code_util__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ModuleName0_3, (MR_Integer) 0)));
        ml_backend__ml_code_util__succeeded = (strcmp(ml_backend__ml_code_util__Var_5, (MR_String) "") == 0);
      }
    if (ml_backend__ml_code_util__succeeded)
      {
        ml_backend__ml_code_util__ModuleName_4 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      }
    else
      ml_backend__ml_code_util__ModuleName_4 = ml_backend__ml_code_util__ModuleName0_3;
    return ml_backend__ml_code_util__ModuleName_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__get_copy_out_option_2_f_0(
  MR_Word ml_backend__ml_code_util__Globals_4,
  MR_Word ml_backend__ml_code_util__CodeModel_5)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__CopyOut_6;

    switch (ml_backend__ml_code_util__CodeModel_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          {
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_code_util__Globals_4, (MR_Integer) 266, &ml_backend__ml_code_util__CopyOut_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_code_util__Globals_4, (MR_Integer) 267, &ml_backend__ml_code_util__CopyOut_6);
          }
        }
        break;
    }
    return ml_backend__ml_code_util__CopyOut_6;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(
  MR_Word ml_backend__ml_code_util__OutVars_11,
  MR_Word ml_backend__ml_code_util__FieldTypes_12,
  MR_Word ml_backend__ml_code_util__FieldIds_13,
  MR_Word ml_backend__ml_code_util__VectorCommon_14,
  MR_Word ml_backend__ml_code_util__StructType_15,
  MR_Word ml_backend__ml_code_util__IndexRval_16,
  MR_Word ml_backend__ml_code_util__Context_17,
  MR_Word * ml_backend__ml_code_util__Stmts_18,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_29,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_30)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__OutVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (ml_backend__ml_code_util__succeeded)
      {
        ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__FieldTypes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ml_backend__ml_code_util__succeeded)
          ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__FieldIds_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (ml_backend__ml_code_util__succeeded)
      {
        *ml_backend__ml_code_util__Stmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_code_util__STATE_VARIABLE_Info_30 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_29;
      }
    else
      {
        MR_Word ml_backend__ml_code_util__HeadOutVar_20;
        MR_Word ml_backend__ml_code_util__TailOutVars_21;
        MR_Word ml_backend__ml_code_util__HeadFieldType_22;
        MR_Word ml_backend__ml_code_util__TailFieldTypes_23;
        MR_Word ml_backend__ml_code_util__HeadFieldId_24;
        MR_Word ml_backend__ml_code_util__TailFieldIds_25;

        ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__OutVars_11)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_code_util__succeeded)
          {
            ml_backend__ml_code_util__HeadOutVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__OutVars_11, (MR_Integer) 0)));
            ml_backend__ml_code_util__TailOutVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__OutVars_11, (MR_Integer) 1)));
            ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__FieldTypes_12)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_code_util__succeeded)
              {
                ml_backend__ml_code_util__HeadFieldType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__FieldTypes_12, (MR_Integer) 0)));
                ml_backend__ml_code_util__TailFieldTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__FieldTypes_12, (MR_Integer) 1)));
                ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__FieldIds_13)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_code_util__succeeded)
                  {
                    ml_backend__ml_code_util__HeadFieldId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__FieldIds_13, (MR_Integer) 0)));
                    ml_backend__ml_code_util__TailFieldIds_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__FieldIds_13, (MR_Integer) 1)));
                  }
              }
          }
        if (ml_backend__ml_code_util__succeeded)
          {
            MR_Word ml_backend__ml_code_util__HeadOutVarLval_26;
            MR_Word ml_backend__ml_code_util__HeadStmt_27;
            MR_Word ml_backend__ml_code_util__TailStmts_28;
            MR_Word ml_backend__ml_code_util__BaseRval_47;
            MR_Word ml_backend__ml_code_util__FieldLval_48;
            MR_Word ml_backend__ml_code_util__AtomicStmt_49;
            MR_Word ml_backend__ml_code_util__Var_52;

            {
              ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_29, ml_backend__ml_code_util__HeadOutVar_20, &ml_backend__ml_code_util__HeadOutVarLval_26);
            }
            {
              ml_backend__ml_code_util__BaseRval_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__BaseRval_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__BaseRval_47, 1) = ((MR_Box) (ml_backend__ml_code_util__VectorCommon_14));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__BaseRval_47, 2) = ((MR_Box) (ml_backend__ml_code_util__IndexRval_16));
            }
            {
              ml_backend__ml_code_util__FieldLval_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[13])));
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_48, 1) = ((MR_Box) (ml_backend__ml_code_util__BaseRval_47));
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_48, 2) = ((MR_Box) (ml_backend__ml_code_util__HeadFieldId_24));
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_48, 3) = ((MR_Box) (ml_backend__ml_code_util__HeadFieldType_22));
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_48, 4) = ((MR_Box) (ml_backend__ml_code_util__StructType_15));
            }
            {
              ml_backend__ml_code_util__Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_52, 0) = ((MR_Box) (ml_backend__ml_code_util__FieldLval_48));
            }
            {
              ml_backend__ml_code_util__AtomicStmt_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__AtomicStmt_49, 0) = ((MR_Box) (ml_backend__ml_code_util__HeadOutVarLval_26));
              MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__AtomicStmt_49, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_52));
            }
            {
              ml_backend__ml_code_util__HeadStmt_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadStmt_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadStmt_27, 1) = ((MR_Box) (ml_backend__ml_code_util__AtomicStmt_49));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadStmt_27, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_17));
            }
            {
              ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_code_util__TailOutVars_21, ml_backend__ml_code_util__TailFieldTypes_23, ml_backend__ml_code_util__TailFieldIds_25, ml_backend__ml_code_util__VectorCommon_14, ml_backend__ml_code_util__StructType_15, ml_backend__ml_code_util__IndexRval_16, ml_backend__ml_code_util__Context_17, &ml_backend__ml_code_util__TailStmts_28, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_29, ml_backend__ml_code_util__STATE_VARIABLE_Info_30);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_code_util__Stmts_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__HeadStmt_27));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__TailStmts_28));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_generate_field_assigns\'/10", (MR_String) "mismatched lists");
              return;
            }
          }
      }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(
  MR_Word ml_backend__ml_code_util__OutVarLval_11,
  MR_Word ml_backend__ml_code_util__FieldType_12,
  MR_Word ml_backend__ml_code_util__FieldId_13,
  MR_Word ml_backend__ml_code_util__VectorCommon_14,
  MR_Word ml_backend__ml_code_util__StructType_15,
  MR_Word ml_backend__ml_code_util__IndexRval_16,
  MR_Word ml_backend__ml_code_util__Context_17,
  MR_Word * ml_backend__ml_code_util__Stmt_18,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_23,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_24)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__BaseRval_20;
    MR_Word ml_backend__ml_code_util__FieldLval_21;
    MR_Word ml_backend__ml_code_util__AtomicStmt_22;
    MR_Word ml_backend__ml_code_util__Var_27;

    {
      ml_backend__ml_code_util__BaseRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__BaseRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__BaseRval_20, 1) = ((MR_Box) (ml_backend__ml_code_util__VectorCommon_14));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__BaseRval_20, 2) = ((MR_Box) (ml_backend__ml_code_util__IndexRval_16));
    }
    {
      ml_backend__ml_code_util__FieldLval_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[13])));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_21, 1) = ((MR_Box) (ml_backend__ml_code_util__BaseRval_20));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_21, 2) = ((MR_Box) (ml_backend__ml_code_util__FieldId_13));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_21, 3) = ((MR_Box) (ml_backend__ml_code_util__FieldType_12));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_21, 4) = ((MR_Box) (ml_backend__ml_code_util__StructType_15));
    }
    {
      ml_backend__ml_code_util__Var_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_27, 0) = ((MR_Box) (ml_backend__ml_code_util__FieldLval_21));
    }
    {
      ml_backend__ml_code_util__AtomicStmt_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__AtomicStmt_22, 0) = ((MR_Box) (ml_backend__ml_code_util__OutVarLval_11));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__AtomicStmt_22, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_code_util__Stmt_18 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__AtomicStmt_22));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_17));
    }
    *ml_backend__ml_code_util__STATE_VARIABLE_Info_24 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_23;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_generate_constants_for_arms_5_p_0(
  MR_Word ml_backend__ml_code_util__HeadVar__1_1,
  MR_Word ml_backend__ml_code_util__HeadVar__2_2,
  MR_Word * ml_backend__ml_code_util__HeadVar__3_3,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_5)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    if ((ml_backend__ml_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_code_util__STATE_VARIABLE_Info_5 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4;
      }
    else
      {
        MR_Word ml_backend__ml_code_util__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_code_util__Goals_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_code_util__Soln_13;
        MR_Word ml_backend__ml_code_util__Solns_14;
        MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_18_18;

        {
          ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(ml_backend__ml_code_util__HeadVar__1_1, ml_backend__ml_code_util__Goal_11, &ml_backend__ml_code_util__Soln_13, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4, &ml_backend__ml_code_util__STATE_VARIABLE_Info_18_18);
        }
        {
          ml_backend__ml_code_util__ml_generate_constants_for_arms_5_p_0(ml_backend__ml_code_util__HeadVar__1_1, ml_backend__ml_code_util__Goals_12, &ml_backend__ml_code_util__Solns_14, ml_backend__ml_code_util__STATE_VARIABLE_Info_18_18, ml_backend__ml_code_util__STATE_VARIABLE_Info_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_code_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Soln_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Solns_14));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1,
  MR_Box * ml_backend__ml_code_util__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
    MR_Word ml_backend__ml_code_util__conv0_Rval_6;

    {
      ml_backend__ml_code_util__lookup_ground_rval_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_1), &ml_backend__ml_code_util__conv0_Rval_6);
    }
    *ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_Rval_6));
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(
  MR_Word ml_backend__ml_code_util__Vars_6,
  MR_Word ml_backend__ml_code_util__Goal_7,
  MR_Word * ml_backend__ml_code_util__Soln_8,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_14,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_15)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__InitConstVarMap_10;
    MR_Word ml_backend__ml_code_util__FinalConstVarMap_13;
    MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_17_17;
    MR_Word ml_backend__ml_code_util__Var_18;
    MR_Word ml_backend__ml_code_util___Decls_11;
    MR_Word ml_backend__ml_code_util___Stmts_12;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_14, &ml_backend__ml_code_util__InitConstVarMap_10);
    }
    {
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 0, ml_backend__ml_code_util__Goal_7, &ml_backend__ml_code_util___Decls_11, &ml_backend__ml_code_util___Stmts_12, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_14, &ml_backend__ml_code_util__STATE_VARIABLE_Info_17_17);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_17_17, &ml_backend__ml_code_util__FinalConstVarMap_13);
    }
    {
      ml_backend__ml_code_util__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_18, 0) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_18, 1) = ((MR_Box) (ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_18, 3) = ((MR_Box) (ml_backend__ml_code_util__FinalConstVarMap_13));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_code_util__Var_18, ml_backend__ml_code_util__Vars_6, ml_backend__ml_code_util__Soln_8);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_util__InitConstVarMap_10, ml_backend__ml_code_util__STATE_VARIABLE_Info_17_17, ml_backend__ml_code_util__STATE_VARIABLE_Info_15);
    }
  }
}

MR_Integer MR_CALL 
ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    return (MR_Integer) 4;
  }
}

MR_Integer MR_CALL 
ml_backend__ml_code_util__ml_typeclass_info_arg_offset_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    return (MR_Integer) 0;
  }
}

MR_Integer MR_CALL 
ml_backend__ml_code_util__ml_closure_arg_offset_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    return (MR_Integer) 2;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_p_0(
  MR_Word * ml_backend__ml_code_util__Arg_2)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    *ml_backend__ml_code_util__Arg_2 = (MR_Word) &ml_backend__ml_code_util_scalar_common_2[4];
  }
}

static void MR_CALL 
ml_backend__ml_code_util__ml_initial_cont_4_p_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1,
  MR_Box * ml_backend__ml_code_util__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
    MR_Word ml_backend__ml_code_util__conv0_MLDS_Type_6;

    {
      ml_backend__ml_code_util__ml_gen_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_1), &ml_backend__ml_code_util__conv0_MLDS_Type_6);
    }
    *ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_MLDS_Type_6));
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_initial_cont_4_p_0(
  MR_Word ml_backend__ml_code_util__Info_5,
  MR_Word ml_backend__ml_code_util__OutputVarLvals0_6,
  MR_Word ml_backend__ml_code_util__OutputVarTypes0_7,
  MR_Word * ml_backend__ml_code_util__Cont_8)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__ModuleInfo_9;
    MR_Word ml_backend__ml_code_util__OutputVarTypes_10;
    MR_Word ml_backend__ml_code_util__OutputVarLvals_11;
    MR_Word ml_backend__ml_code_util__MLDS_OutputVarTypes_12;
    MR_Word ml_backend__ml_code_util__ContLval_13;
    MR_Word ml_backend__ml_code_util__ContEnvLval_14;
    MR_Word ml_backend__ml_code_util__Var_15;
    MR_Word ml_backend__ml_code_util__Var_17;
    MR_Word ml_backend__ml_code_util__Var_22;
    MR_Word ml_backend__ml_code_util__Var_23;
    MR_Word ml_backend__ml_code_util__ModuleName_33;
    MR_Word ml_backend__ml_code_util__MLDS_ModuleName_34;
    MR_Word ml_backend__ml_code_util__MLDS_Var_35;
    MR_Word ml_backend__ml_code_util__ModuleName_41;
    MR_Word ml_backend__ml_code_util__MLDS_ModuleName_42;
    MR_Word ml_backend__ml_code_util__MLDS_Var_43;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleInfo_9);
    }
    {
      ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(ml_backend__ml_code_util__OutputVarTypes0_7, ml_backend__ml_code_util__OutputVarLvals0_6, ml_backend__ml_code_util__ModuleInfo_9, &ml_backend__ml_code_util__OutputVarTypes_10, &ml_backend__ml_code_util__OutputVarLvals_11);
    }
    {
      ml_backend__ml_code_util__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_15, 0) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_15, 1) = ((MR_Box) (ml_backend__ml_code_util__ml_initial_cont_4_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_15, 3) = ((MR_Box) (ml_backend__ml_code_util__Info_5));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_code_util__Var_15, ml_backend__ml_code_util__OutputVarTypes_10, &ml_backend__ml_code_util__MLDS_OutputVarTypes_12);
    }
    {
      ml_backend__ml_code_util__Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_17, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_OutputVarTypes_12));
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleName_33);
    }
    {
      ml_backend__ml_code_util__MLDS_ModuleName_34 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_33);
    }
    {
      ml_backend__ml_code_util__MLDS_Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_35, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_34));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_35, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_35, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[14])));
    }
    {
      ml_backend__ml_code_util__ContLval_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ContLval_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ContLval_13, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_35));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ContLval_13, 2) = ((MR_Box) (ml_backend__ml_code_util__Var_17));
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleName_41);
    }
    {
      ml_backend__ml_code_util__MLDS_ModuleName_42 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_41);
    }
    {
      ml_backend__ml_code_util__MLDS_Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_43, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_42));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_43, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[15])));
    }
    {
      ml_backend__ml_code_util__ContEnvLval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ContEnvLval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ContEnvLval_14, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_43));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ContEnvLval_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
    }
    {
      ml_backend__ml_code_util__Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_22, 0) = ((MR_Box) (ml_backend__ml_code_util__ContLval_13));
    }
    {
      ml_backend__ml_code_util__Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_23, 0) = ((MR_Box) (ml_backend__ml_code_util__ContEnvLval_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_code_util__Cont_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_23));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_code_util__MLDS_OutputVarTypes_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_code_util__OutputVarLvals_11));
    }
  }
}

static void MR_CALL 
ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word ml_backend__ml_code_util__HeadVar__1_1,
  MR_Word ml_backend__ml_code_util__HeadVar__2_2,
  MR_Word ml_backend__ml_code_util__ModuleInfo_3,
  MR_Word * ml_backend__ml_code_util__HeadVar__4_4,
  MR_Word * ml_backend__ml_code_util__HeadVar__5_5)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    if ((ml_backend__ml_code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ml_backend__ml_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *ml_backend__ml_code_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_code_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_skip_dummy_argument_types\'/5", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word ml_backend__ml_code_util__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_code_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__1_1, (MR_Integer) 0)));

        if ((ml_backend__ml_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_skip_dummy_argument_types\'/5", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Box ml_backend__ml_code_util__Var_9 = (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 0));
            MR_Word ml_backend__ml_code_util__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ml_backend__ml_code_util__Types1_14;
            MR_Word ml_backend__ml_code_util__Vars1_15;
            MR_Word ml_backend__ml_code_util__IsDummy_16;

            {
              ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(ml_backend__ml_code_util__Var_34, ml_backend__ml_code_util__Vars0_10, ml_backend__ml_code_util__ModuleInfo_3, &ml_backend__ml_code_util__Types1_14, &ml_backend__ml_code_util__Vars1_15);
            }
            {
              ml_backend__ml_code_util__IsDummy_16 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_3, ml_backend__ml_code_util__Var_35);
            }
            switch (ml_backend__ml_code_util__IsDummy_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ml_backend__ml_code_util__HeadVar__4_4 = ml_backend__ml_code_util__Types1_14;
                  *ml_backend__ml_code_util__HeadVar__5_5 = ml_backend__ml_code_util__Vars1_15;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_code_util__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_35));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Types1_14));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_code_util__HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ml_backend__ml_code_util__Var_9;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Vars1_15));
                  }
                }
                break;
            }
          }
      }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_set_cond_var_5_p_0(
  MR_Word ml_backend__ml_code_util__Info_6,
  MR_Word ml_backend__ml_code_util__CondVar_7,
  MR_Word ml_backend__ml_code_util__Value_8,
  MR_Word ml_backend__ml_code_util__Context_9,
  MR_Word * ml_backend__ml_code_util__Stmt_10)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__CondVarLval_11;
    MR_Word ml_backend__ml_code_util__Assign_16;

    {
      ml_backend__ml_code_util__ml_cond_var_lval_3_p_0(ml_backend__ml_code_util__Info_6, ml_backend__ml_code_util__CondVar_7, &ml_backend__ml_code_util__CondVarLval_11);
    }
    {
      ml_backend__ml_code_util__Assign_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_16, 0) = ((MR_Box) (ml_backend__ml_code_util__CondVarLval_11));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_16, 1) = ((MR_Box) (ml_backend__ml_code_util__Value_8));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_code_util__Stmt_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Assign_16));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_9));
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_test_cond_var_3_p_0(
  MR_Word ml_backend__ml_code_util__Info_4,
  MR_Word ml_backend__ml_code_util__CondVar_5,
  MR_Word * ml_backend__ml_code_util__CondVarRval_6)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__CondVarLval_7;

    {
      ml_backend__ml_code_util__ml_cond_var_lval_3_p_0(ml_backend__ml_code_util__Info_4, ml_backend__ml_code_util__CondVar_5, &ml_backend__ml_code_util__CondVarLval_7);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_code_util__CondVarRval_6 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_code_util__CondVarLval_7));
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_cond_var_lval_3_p_0(
  MR_Word ml_backend__ml_code_util__Info_4,
  MR_Word ml_backend__ml_code_util__CondVar_5,
  MR_Word * ml_backend__ml_code_util__CondVarLval_6)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__Var_7;
    MR_Integer ml_backend__ml_code_util__CondNum_11 = (MR_Integer) ml_backend__ml_code_util__CondVar_5;
    MR_Word ml_backend__ml_code_util__Var_12;
    MR_Word ml_backend__ml_code_util__ModuleName_17;
    MR_Word ml_backend__ml_code_util__MLDS_ModuleName_18;
    MR_Word ml_backend__ml_code_util__MLDS_Var_19;

    {
      ml_backend__ml_code_util__Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_12, 1) = ((MR_Box) (ml_backend__ml_code_util__CondNum_11));
    }
    {
      ml_backend__ml_code_util__Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_7, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_12));
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__Info_4, &ml_backend__ml_code_util__ModuleName_17);
    }
    {
      ml_backend__ml_code_util__MLDS_ModuleName_18 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_17);
    }
    {
      ml_backend__ml_code_util__MLDS_Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_19, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_19, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_19, 2) = ((MR_Box) (ml_backend__ml_code_util__Var_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_code_util__CondVarLval_6 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_19));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_cond_var_decl_2_f_0(
  MR_Word ml_backend__ml_code_util__CondVar_4,
  MR_Word ml_backend__ml_code_util__Context_5)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__HeadVar__3_3;
    MR_Word ml_backend__ml_code_util__Var_6;
    MR_Integer ml_backend__ml_code_util__CondNum_11 = (MR_Integer) ml_backend__ml_code_util__CondVar_4;
    MR_Word ml_backend__ml_code_util__Var_12;

    {
      ml_backend__ml_code_util__Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_12, 1) = ((MR_Box) (ml_backend__ml_code_util__CondNum_11));
    }
    {
      ml_backend__ml_code_util__Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_6, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_12));
    }
    {
      ml_backend__ml_code_util__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_6));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__3_3, 1) = ((MR_Box) (ml_backend__ml_code_util__Context_5));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__3_3, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__3_3, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__3_3, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return ml_backend__ml_code_util__HeadVar__3_3;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_set_success_4_p_0(
  MR_Word ml_backend__ml_code_util__Info_5,
  MR_Word ml_backend__ml_code_util__Value_6,
  MR_Word ml_backend__ml_code_util__Context_7,
  MR_Word * ml_backend__ml_code_util__Stmt_8)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__Succeeded_9;
    MR_Word ml_backend__ml_code_util__Assign_14;

    {
      ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__Succeeded_9);
    }
    {
      ml_backend__ml_code_util__Assign_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_14, 0) = ((MR_Box) (ml_backend__ml_code_util__Succeeded_9));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_14, 1) = ((MR_Box) (ml_backend__ml_code_util__Value_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_code_util__Stmt_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Assign_14));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_7));
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_test_success_2_p_0(
  MR_Word ml_backend__ml_code_util__Info_3,
  MR_Word * ml_backend__ml_code_util__SucceededRval_4)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__SucceededLval_5;

    {
      ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_code_util__Info_3, &ml_backend__ml_code_util__SucceededLval_5);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_code_util__SucceededRval_4 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_code_util__SucceededLval_5));
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(
  MR_Word ml_backend__ml_code_util__Context_3)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__HeadVar__2_2;

    {
      ml_backend__ml_code_util__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__2_2, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[6])));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_code_util__Context_3));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__2_2, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__2_2, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return ml_backend__ml_code_util__HeadVar__2_2;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_failure_5_p_0(
  MR_Word ml_backend__ml_code_util__CodeModel_6,
  MR_Word ml_backend__ml_code_util__Context_7,
  MR_Word * ml_backend__ml_code_util__Stmts_8,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_11,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_12)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    switch (ml_backend__ml_code_util__CodeModel_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_failure\'/5", (MR_String) "\140fail\' has determinism \140det\'");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        *ml_backend__ml_code_util__Stmts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_code_util__SetSuccessFalse_10;
          MR_Word ml_backend__ml_code_util__Succeeded_23;
          MR_Word ml_backend__ml_code_util__Assign_28;

          {
            ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_11, &ml_backend__ml_code_util__Succeeded_23);
          }
          {
            ml_backend__ml_code_util__Assign_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_28, 0) = ((MR_Box) (ml_backend__ml_code_util__Succeeded_23));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[23])));
          }
          {
            ml_backend__ml_code_util__SetSuccessFalse_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__SetSuccessFalse_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__SetSuccessFalse_10, 1) = ((MR_Box) (ml_backend__ml_code_util__Assign_28));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__SetSuccessFalse_10, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_7));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_code_util__Stmts_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__SetSuccessFalse_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    *ml_backend__ml_code_util__STATE_VARIABLE_Info_12 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_11;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_success_5_p_0(
  MR_Word ml_backend__ml_code_util__CodeModel_6,
  MR_Word ml_backend__ml_code_util__Context_7,
  MR_Word * ml_backend__ml_code_util__Stmts_8,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_12,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_13)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    switch (ml_backend__ml_code_util__CodeModel_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ml_backend__ml_code_util__Stmts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_code_util__STATE_VARIABLE_Info_13 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_12;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_code_util__CallCont_11;

          {
            ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_code_util__Context_7, &ml_backend__ml_code_util__CallCont_11, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_12, ml_backend__ml_code_util__STATE_VARIABLE_Info_13);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_code_util__Stmts_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__CallCont_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_code_util__SetSuccessTrue_10;
          MR_Word ml_backend__ml_code_util__Succeeded_23;
          MR_Word ml_backend__ml_code_util__Assign_28;

          {
            ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_12, &ml_backend__ml_code_util__Succeeded_23);
          }
          {
            ml_backend__ml_code_util__Assign_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_28, 0) = ((MR_Box) (ml_backend__ml_code_util__Succeeded_23));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[22])));
          }
          {
            ml_backend__ml_code_util__SetSuccessTrue_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__SetSuccessTrue_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__SetSuccessTrue_10, 1) = ((MR_Box) (ml_backend__ml_code_util__Assign_28));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__SetSuccessTrue_10, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_7));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_code_util__Stmts_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__SetSuccessTrue_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *ml_backend__ml_code_util__STATE_VARIABLE_Info_13 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_12;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
    MR_Word ml_backend__ml_code_util__conv0_LambdaHeadVar__2_28;

    {
      ml_backend__ml_code_util__conv0_LambdaHeadVar__2_28 = ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1857__1_1_f_0(((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_LambdaHeadVar__2_28));
    return ml_backend__ml_code_util__wrapper_arg_2;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(
  MR_Word ml_backend__ml_code_util__Context_5,
  MR_Word * ml_backend__ml_code_util__Stmt_6,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_24,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_25)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__TypeCtorInfo_36_36;
    MR_Word ml_backend__ml_code_util__SuccCont_8;
    MR_Word ml_backend__ml_code_util__FuncRval_9;
    MR_Word ml_backend__ml_code_util__EnvPtrRval_10;
    MR_Word ml_backend__ml_code_util__ArgTypes0_11;
    MR_Word ml_backend__ml_code_util__ArgLvals0_12;
    MR_Word ml_backend__ml_code_util__ArgRvals0_13;
    MR_Word ml_backend__ml_code_util__UseNestedFuncs_15;
    MR_Word ml_backend__ml_code_util__ArgTypes_16;
    MR_Word ml_backend__ml_code_util__ArgRvals_17;
    MR_Word ml_backend__ml_code_util__Signature_19;
    MR_Word ml_backend__ml_code_util__Markers_23;

    {
      ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_24, &ml_backend__ml_code_util__SuccCont_8);
    }
    ml_backend__ml_code_util__FuncRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccCont_8, (MR_Integer) 0)));
    ml_backend__ml_code_util__EnvPtrRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccCont_8, (MR_Integer) 1)));
    ml_backend__ml_code_util__ArgTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccCont_8, (MR_Integer) 2)));
    ml_backend__ml_code_util__ArgLvals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccCont_8, (MR_Integer) 3)));
    ml_backend__ml_code_util__TypeCtorInfo_36_36 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
    {
      ml_backend__ml_code_util__ArgRvals0_13 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_code_util__TypeCtorInfo_36_36, (MR_Word) &ml_backend__ml_code_util_scalar_common_2[7], ml_backend__ml_code_util__ArgLvals0_12);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_24, &ml_backend__ml_code_util__UseNestedFuncs_15);
    }
    switch (ml_backend__ml_code_util__UseNestedFuncs_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_code_util__Var_32;

          {
            ml_backend__ml_code_util__ArgTypes_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_code_util__ArgTypes0_11, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[11]));
          }
          {
            ml_backend__ml_code_util__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_32, 0) = ((MR_Box) (ml_backend__ml_code_util__EnvPtrRval_10));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_code_util__ArgRvals_17 = mercury__list__f_43_43_2_f_0(ml_backend__ml_code_util__TypeCtorInfo_36_36, ml_backend__ml_code_util__ArgRvals0_13, ml_backend__ml_code_util__Var_32);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_code_util__ArgTypes_16 = ml_backend__ml_code_util__ArgTypes0_11;
          ml_backend__ml_code_util__ArgRvals_17 = ml_backend__ml_code_util__ArgRvals0_13;
        }
        break;
    }
    {
      ml_backend__ml_code_util__Signature_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Signature_19, 0) = ((MR_Box) (ml_backend__ml_code_util__ArgTypes_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Signature_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__set__init_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0, &ml_backend__ml_code_util__Markers_23);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_code_util__Stmt_6 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Signature_19));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__FuncRval_9));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_code_util__ArgRvals_17));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ml_backend__ml_code_util__Markers_23));
      MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ml_backend__ml_code_util__Context_5));
    }
    *ml_backend__ml_code_util__STATE_VARIABLE_Info_25 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_24;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(
  MR_Word ml_backend__ml_code_util__CallerType_15,
  MR_Word ml_backend__ml_code_util__CalleeType_16,
  MR_Word ml_backend__ml_code_util__BoxPolicy_17,
  MR_Word ml_backend__ml_code_util__VarLval_18,
  MR_Word ml_backend__ml_code_util__VarName_19,
  MR_Word ml_backend__ml_code_util__Context_20,
  MR_Word ml_backend__ml_code_util__ForClosureWrapper_21,
  MR_Integer ml_backend__ml_code_util__ArgNum_22,
  MR_Word * ml_backend__ml_code_util__ArgLval_23,
  MR_Word * ml_backend__ml_code_util__ConvDecls_24,
  MR_Word * ml_backend__ml_code_util__ConvInputStmts_25,
  MR_Word * ml_backend__ml_code_util__ConvOutputStmts_26,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_46,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_47)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__ModuleInfo_28;
    MR_Word ml_backend__ml_code_util__BoxedRval_29;
    MR_Word ml_backend__ml_code_util__Var_48;
    MR_Word ml_backend__ml_code_util__Var_61;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_46, &ml_backend__ml_code_util__ModuleInfo_28);
    }
    {
      ml_backend__ml_code_util__Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_48, 0) = ((MR_Box) (ml_backend__ml_code_util__VarLval_18));
    }
    {
      ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_code_util__ModuleInfo_28, ml_backend__ml_code_util__CalleeType_16, ml_backend__ml_code_util__CallerType_15, ml_backend__ml_code_util__BoxPolicy_17, ml_backend__ml_code_util__Var_48, &ml_backend__ml_code_util__BoxedRval_29);
    }
    ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__BoxedRval_29)) == (MR_mktag((MR_Integer) 2)));
    if (ml_backend__ml_code_util__succeeded)
      {
        ml_backend__ml_code_util__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__BoxedRval_29, (MR_Integer) 0)));
        {
          ml_backend__ml_code_util__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_code_util__VarLval_18, ml_backend__ml_code_util__Var_61);
        }
      }
    if (ml_backend__ml_code_util__succeeded)
      {
        *ml_backend__ml_code_util__ArgLval_23 = ml_backend__ml_code_util__VarLval_18;
        *ml_backend__ml_code_util__ConvDecls_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_code_util__ConvInputStmts_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_code_util__ConvOutputStmts_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_code_util__STATE_VARIABLE_Info_47 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_46;
      }
    else
      {
        MR_Word ml_backend__ml_code_util__ConvVarSeq_30;
        MR_Integer ml_backend__ml_code_util__ConvVarNum_31;
        MR_Word ml_backend__ml_code_util__ArgVarName_34;
        MR_Word ml_backend__ml_code_util__MLDS_CalleeType_36;
        MR_Word ml_backend__ml_code_util__ArgVarDecl_39;
        MR_Word ml_backend__ml_code_util__CallerIsDummy_41;
        MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_49_49;
        MR_Word ml_backend__ml_code_util__ModuleInfo_66;
        MR_Word ml_backend__ml_code_util__ModuleName_81;
        MR_Word ml_backend__ml_code_util__MLDS_ModuleName_82;
        MR_Word ml_backend__ml_code_util__MLDS_Var_83;
        MR_String ml_backend__ml_code_util__ProgVarName_32;
        MR_Integer ml_backend__ml_code_util__ProgVarNum_33;

        {
          ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(&ml_backend__ml_code_util__ConvVarSeq_30, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_46, &ml_backend__ml_code_util__STATE_VARIABLE_Info_49_49);
        }
        ml_backend__ml_code_util__ConvVarNum_31 = (MR_Integer) ml_backend__ml_code_util__ConvVarSeq_30;
        ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__VarName_19)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__ml_code_util__succeeded)
          {
            ml_backend__ml_code_util__ProgVarName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__VarName_19, (MR_Integer) 0)));
            ml_backend__ml_code_util__ProgVarNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__VarName_19, (MR_Integer) 1)));
            {
              ml_backend__ml_code_util__ArgVarName_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ArgVarName_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ArgVarName_34, 1) = ((MR_Box) (ml_backend__ml_code_util__ConvVarNum_31));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ArgVarName_34, 2) = ((MR_Box) (ml_backend__ml_code_util__ProgVarName_32));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ArgVarName_34, 3) = ((MR_Box) (ml_backend__ml_code_util__ProgVarNum_33));
            }
          }
        else
          {
            MR_String ml_backend__ml_code_util__VarNameStr_35;
            MR_Word ml_backend__ml_code_util__Var_50;

            {
              ml_backend__ml_code_util__VarNameStr_35 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(ml_backend__ml_code_util__VarName_19);
            }
            {
              ml_backend__ml_code_util__Var_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_50, 0) = ((MR_Box) (ml_backend__ml_code_util__ConvVarNum_31));
              MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_50, 1) = ((MR_Box) (ml_backend__ml_code_util__VarNameStr_35));
            }
            {
              ml_backend__ml_code_util__ArgVarName_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ArgVarName_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ArgVarName_34, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_50));
            }
          }
        {
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_49_49, &ml_backend__ml_code_util__ModuleInfo_66);
        }
        {
          ml_backend__ml_code_util__MLDS_CalleeType_36 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_66, ml_backend__ml_code_util__CalleeType_16);
        }
        switch (ml_backend__ml_code_util__ForClosureWrapper_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_code_util__GC_Stmts_40;

              {
                ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_p_0(ml_backend__ml_code_util__ArgVarName_34, ml_backend__ml_code_util__CalleeType_16, ml_backend__ml_code_util__CallerType_15, ml_backend__ml_code_util__Context_20, &ml_backend__ml_code_util__GC_Stmts_40, ml_backend__ml_code_util__STATE_VARIABLE_Info_49_49, ml_backend__ml_code_util__STATE_VARIABLE_Info_47);
              }
              {
                ml_backend__ml_code_util__ArgVarDecl_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ArgVarDecl_39, 0) = ((MR_Box) (ml_backend__ml_code_util__ArgVarName_34));
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ArgVarDecl_39, 1) = ((MR_Box) (ml_backend__ml_code_util__Context_20));
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ArgVarDecl_39, 2) = ((MR_Box) (ml_backend__ml_code_util__MLDS_CalleeType_36));
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ArgVarDecl_39, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ArgVarDecl_39, 4) = ((MR_Box) (ml_backend__ml_code_util__GC_Stmts_40));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_code_util__Var_37;
              MR_Word ml_backend__ml_code_util__Var_38;

              ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__CallerType_15)) == (MR_mktag((MR_Integer) 0)));
              if (ml_backend__ml_code_util__succeeded)
                {
                  ml_backend__ml_code_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__CallerType_15, (MR_Integer) 0)));
                  ml_backend__ml_code_util__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__CallerType_15, (MR_Integer) 1)));
                  {
                    ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_p_0(ml_backend__ml_code_util__ArgVarName_34, ml_backend__ml_code_util__CalleeType_16, ml_backend__ml_code_util__ArgNum_22, ml_backend__ml_code_util__Context_20, &ml_backend__ml_code_util__ArgVarDecl_39, ml_backend__ml_code_util__STATE_VARIABLE_Info_49_49, ml_backend__ml_code_util__STATE_VARIABLE_Info_47);
                  }
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_box_or_unbox_lval\'/14", (MR_String) "invalid CalleeType for closure wrapper");
                    return;
                  }
                }
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_code_util__ConvDecls_24 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__ArgVarDecl_39));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(*ml_backend__ml_code_util__STATE_VARIABLE_Info_47, &ml_backend__ml_code_util__ModuleName_81);
        }
        {
          ml_backend__ml_code_util__MLDS_ModuleName_82 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_81);
        }
        {
          ml_backend__ml_code_util__MLDS_Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_83, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_82));
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_83, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_83, 2) = ((MR_Box) (ml_backend__ml_code_util__ArgVarName_34));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_code_util__ArgLval_23 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_83));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__MLDS_CalleeType_36));
        }
        {
          ml_backend__ml_code_util__CallerIsDummy_41 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_28, ml_backend__ml_code_util__CallerType_15);
        }
        switch (ml_backend__ml_code_util__CallerIsDummy_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ml_backend__ml_code_util__ConvInputStmts_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ml_backend__ml_code_util__ConvOutputStmts_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_code_util__ConvertedVarRval_42;
              MR_Word ml_backend__ml_code_util__AssignInputStmt_43;
              MR_Word ml_backend__ml_code_util__ConvertedArgRval_44;
              MR_Word ml_backend__ml_code_util__AssignOutputStmt_45;
              MR_Word ml_backend__ml_code_util__Var_59;
              MR_Word ml_backend__ml_code_util__Assign_89;
              MR_Word ml_backend__ml_code_util__Assign_94;

              {
                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_code_util__ModuleInfo_28, ml_backend__ml_code_util__CallerType_15, ml_backend__ml_code_util__CalleeType_16, ml_backend__ml_code_util__BoxPolicy_17, ml_backend__ml_code_util__Var_48, &ml_backend__ml_code_util__ConvertedVarRval_42);
              }
              {
                ml_backend__ml_code_util__Assign_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_89, 0) = ((MR_Box) (*ml_backend__ml_code_util__ArgLval_23));
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_89, 1) = ((MR_Box) (ml_backend__ml_code_util__ConvertedVarRval_42));
              }
              {
                ml_backend__ml_code_util__AssignInputStmt_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__AssignInputStmt_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__AssignInputStmt_43, 1) = ((MR_Box) (ml_backend__ml_code_util__Assign_89));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__AssignInputStmt_43, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_code_util__ConvInputStmts_25 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__AssignInputStmt_43));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ml_backend__ml_code_util__Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_59, 0) = ((MR_Box) (*ml_backend__ml_code_util__ArgLval_23));
              }
              {
                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_code_util__ModuleInfo_28, ml_backend__ml_code_util__CalleeType_16, ml_backend__ml_code_util__CallerType_15, ml_backend__ml_code_util__BoxPolicy_17, ml_backend__ml_code_util__Var_59, &ml_backend__ml_code_util__ConvertedArgRval_44);
              }
              {
                ml_backend__ml_code_util__Assign_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_94, 0) = ((MR_Box) (ml_backend__ml_code_util__VarLval_18));
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_94, 1) = ((MR_Box) (ml_backend__ml_code_util__ConvertedArgRval_44));
              }
              {
                ml_backend__ml_code_util__AssignOutputStmt_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__AssignOutputStmt_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__AssignOutputStmt_45, 1) = ((MR_Box) (ml_backend__ml_code_util__Assign_94));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__AssignOutputStmt_45, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_code_util__ConvOutputStmts_26 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__AssignOutputStmt_45));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
        }
      }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_p_0(
  MR_Word ml_backend__ml_code_util__VarName_8,
  MR_Word ml_backend__ml_code_util__Type_9,
  MR_Integer ml_backend__ml_code_util__ArgNum_10,
  MR_Word ml_backend__ml_code_util__Context_11,
  MR_Word * ml_backend__ml_code_util__LocalVarDefn_12,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_34,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_35)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__ClosureLayoutPtrLval_16;
    MR_Word ml_backend__ml_code_util__TypeParamsLval_19;
    MR_Word ml_backend__ml_code_util__TypeInfoName_20;
    MR_Word ml_backend__ml_code_util__ModuleInfo_21;
    MR_Word ml_backend__ml_code_util__TypeInfoMercuryType_22;
    MR_Word ml_backend__ml_code_util__TypeInfoType_23;
    MR_Word ml_backend__ml_code_util__TypeInfoLval_24;
    MR_Word ml_backend__ml_code_util__TypeInfoDecl_25;
    MR_Word ml_backend__ml_code_util__GCStmt0_26;
    MR_Word ml_backend__ml_code_util__GCStmt_33;
    MR_Word ml_backend__ml_code_util__Var_40;
    MR_Word ml_backend__ml_code_util__Var_92;

    {
      ml_backend__ml_code_util__ml_gen_local_var_lval_4_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_34, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[19]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), &ml_backend__ml_code_util__ClosureLayoutPtrLval_16);
    }
    {
      ml_backend__ml_code_util__ml_gen_local_var_lval_4_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_34, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[20]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), &ml_backend__ml_code_util__TypeParamsLval_19);
    }
    ml_backend__ml_code_util__TypeInfoName_20 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[21]);
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_34, &ml_backend__ml_code_util__ModuleInfo_21);
    }
    {
      ml_backend__ml_code_util__TypeInfoMercuryType_22 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
    {
      ml_backend__ml_code_util__TypeInfoType_23 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_21, ml_backend__ml_code_util__TypeInfoMercuryType_22);
    }
    {
      ml_backend__ml_code_util__ml_gen_local_var_lval_4_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_34, ml_backend__ml_code_util__TypeInfoName_20, ml_backend__ml_code_util__TypeInfoType_23, &ml_backend__ml_code_util__TypeInfoLval_24);
    }
    {
      ml_backend__ml_code_util__TypeInfoDecl_25 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_code_util__TypeInfoName_20, ml_backend__ml_code_util__TypeInfoType_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_code_util__Context_11);
    }
    {
      ml_backend__ml_code_util__Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_40, 0) = ((MR_Box) (ml_backend__ml_code_util__TypeInfoLval_24));
    }
    {
      ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_p_0(ml_backend__ml_code_util__VarName_8, ml_backend__ml_code_util__Type_9, ml_backend__ml_code_util__Var_40, ml_backend__ml_code_util__Context_11, &ml_backend__ml_code_util__GCStmt0_26, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_34, ml_backend__ml_code_util__STATE_VARIABLE_Info_35);
    }
    switch (MR_tag((MR_Word) ml_backend__ml_code_util__GCStmt0_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_code_util__GCStmt_33 = ml_backend__ml_code_util__GCStmt0_26;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_code_util__CallTraceFuncCode_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__GCStmt0_26, (MR_Integer) 0)));
          MR_Word ml_backend__ml_code_util__MakeTypeInfoCodeC_94;
          MR_Word ml_backend__ml_code_util__MakeTypeInfoCode_95;
          MR_Word ml_backend__ml_code_util__DeallocateCode_97;
          MR_Word ml_backend__ml_code_util__GCTraceCode_98;
          MR_Word ml_backend__ml_code_util__Var_100;
          MR_Word ml_backend__ml_code_util__Var_103;
          MR_Word ml_backend__ml_code_util__Var_106;
          MR_Word ml_backend__ml_code_util__Var_107;
          MR_Word ml_backend__ml_code_util__Var_108;
          MR_Word ml_backend__ml_code_util__Var_113;
          MR_Word ml_backend__ml_code_util__Var_114;
          MR_Word ml_backend__ml_code_util__Var_115;
          MR_Word ml_backend__ml_code_util__Var_116;
          MR_Word ml_backend__ml_code_util__Var_119;
          MR_Word ml_backend__ml_code_util__Var_120;
          MR_Word ml_backend__ml_code_util__Var_121;
          MR_Word ml_backend__ml_code_util__Var_122;
          MR_Word ml_backend__ml_code_util__Var_123;
          MR_String ml_backend__ml_code_util__Var_124;
          MR_Word ml_backend__ml_code_util__Var_134;
          MR_Word ml_backend__ml_code_util__Var_135;
          MR_Word ml_backend__ml_code_util__Var_137;
          MR_Word ml_backend__ml_code_util__Var_138;
          MR_Word ml_backend__ml_code_util__Var_139;
          MR_String ml_backend__ml_code_util__Var_142;
          MR_String ml_backend__ml_code_util__Var_149;

          {
            ml_backend__ml_code_util__Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_107, 1) = ((MR_Box) (ml_backend__ml_code_util__TypeInfoLval_24));
          }
          {
            ml_backend__ml_code_util__Var_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_115, 0) = ((MR_Box) (ml_backend__ml_code_util__TypeParamsLval_19));
          }
          {
            ml_backend__ml_code_util__Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_114, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_115));
          }
          {
            ml_backend__ml_code_util__Var_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_121, 0) = ((MR_Box) (ml_backend__ml_code_util__ClosureLayoutPtrLval_16));
          }
          {
            ml_backend__ml_code_util__Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_120, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_121));
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_code_util_scalar_common_4[12], ml_backend__ml_code_util__ArgNum_10, &ml_backend__ml_code_util__Var_142);
          }
          {
            ml_backend__ml_code_util__Var_149 = mercury__string__f_43_43_2_f_0(ml_backend__ml_code_util__Var_142, (MR_String) " - 1],\n\tNULL, NULL, &allocated_mem);\n");
          }
          {
            ml_backend__ml_code_util__Var_124 = mercury__string__f_43_43_2_f_0((MR_String) ")->MR_closure_arg_pseudo_type_info[", ml_backend__ml_code_util__Var_149);
          }
          {
            ml_backend__ml_code_util__Var_123 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_123, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_124));
          }
          {
            ml_backend__ml_code_util__Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_122, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_123));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_code_util__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_119, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_120));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_119, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_122));
          }
          {
            ml_backend__ml_code_util__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_4[11])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_116, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_119));
          }
          {
            ml_backend__ml_code_util__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_113, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_114));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_113, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_116));
          }
          {
            ml_backend__ml_code_util__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_4[10])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_108, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_113));
          }
          {
            ml_backend__ml_code_util__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_106, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_107));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_106, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_108));
          }
          {
            ml_backend__ml_code_util__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_4[9])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_103, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_106));
          }
          {
            ml_backend__ml_code_util__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_4[8])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_100, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_103));
          }
          {
            ml_backend__ml_code_util__MakeTypeInfoCodeC_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCodeC_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCodeC_94, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCodeC_94, 2) = ((MR_Box) (ml_backend__ml_code_util__Var_100));
          }
          {
            ml_backend__ml_code_util__MakeTypeInfoCode_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCode_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCode_95, 1) = ((MR_Box) (ml_backend__ml_code_util__MakeTypeInfoCodeC_94));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCode_95, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_11));
          }
          {
            ml_backend__ml_code_util__DeallocateCode_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__DeallocateCode_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__DeallocateCode_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_2[1])));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__DeallocateCode_97, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_11));
          }
          ml_backend__ml_code_util__Var_135 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_code_util__TypeInfoDecl_25);
          {
            ml_backend__ml_code_util__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_134, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_135));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_code_util__Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_139, 0) = ((MR_Box) (ml_backend__ml_code_util__DeallocateCode_97));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_code_util__Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_138, 0) = ((MR_Box) (ml_backend__ml_code_util__CallTraceFuncCode_93));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_138, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_139));
          }
          {
            ml_backend__ml_code_util__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_137, 0) = ((MR_Box) (ml_backend__ml_code_util__MakeTypeInfoCode_95));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_137, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_138));
          }
          {
            ml_backend__ml_code_util__GCTraceCode_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GCTraceCode_98, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_134));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GCTraceCode_98, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_137));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GCTraceCode_98, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_11));
          }
          {
            ml_backend__ml_code_util__GCStmt_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__GCStmt_33, 0) = ((MR_Box) (ml_backend__ml_code_util__GCTraceCode_98));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_code_util__CallTraceFuncCode_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__GCStmt0_26, (MR_Integer) 0)));
          MR_Word ml_backend__ml_code_util__MakeTypeInfoCodeC_28;
          MR_Word ml_backend__ml_code_util__MakeTypeInfoCode_29;
          MR_Word ml_backend__ml_code_util__DeallocateCode_31;
          MR_Word ml_backend__ml_code_util__GCTraceCode_32;
          MR_Word ml_backend__ml_code_util__Var_43;
          MR_Word ml_backend__ml_code_util__Var_46;
          MR_Word ml_backend__ml_code_util__Var_49;
          MR_Word ml_backend__ml_code_util__Var_50;
          MR_Word ml_backend__ml_code_util__Var_51;
          MR_Word ml_backend__ml_code_util__Var_56;
          MR_Word ml_backend__ml_code_util__Var_57;
          MR_Word ml_backend__ml_code_util__Var_58;
          MR_Word ml_backend__ml_code_util__Var_59;
          MR_Word ml_backend__ml_code_util__Var_62;
          MR_Word ml_backend__ml_code_util__Var_63;
          MR_Word ml_backend__ml_code_util__Var_64;
          MR_Word ml_backend__ml_code_util__Var_65;
          MR_Word ml_backend__ml_code_util__Var_66;
          MR_String ml_backend__ml_code_util__Var_67;
          MR_Word ml_backend__ml_code_util__Var_85;
          MR_Word ml_backend__ml_code_util__Var_86;
          MR_Word ml_backend__ml_code_util__Var_88;
          MR_Word ml_backend__ml_code_util__Var_89;
          MR_Word ml_backend__ml_code_util__Var_90;
          MR_String ml_backend__ml_code_util__Var_152;
          MR_String ml_backend__ml_code_util__Var_159;

          {
            ml_backend__ml_code_util__Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_50, 1) = ((MR_Box) (ml_backend__ml_code_util__TypeInfoLval_24));
          }
          {
            ml_backend__ml_code_util__Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_58, 0) = ((MR_Box) (ml_backend__ml_code_util__TypeParamsLval_19));
          }
          {
            ml_backend__ml_code_util__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_57, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_58));
          }
          {
            ml_backend__ml_code_util__Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_64, 0) = ((MR_Box) (ml_backend__ml_code_util__ClosureLayoutPtrLval_16));
          }
          {
            ml_backend__ml_code_util__Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_63, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_64));
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_code_util_scalar_common_4[12], ml_backend__ml_code_util__ArgNum_10, &ml_backend__ml_code_util__Var_152);
          }
          {
            ml_backend__ml_code_util__Var_159 = mercury__string__f_43_43_2_f_0(ml_backend__ml_code_util__Var_152, (MR_String) " - 1],\n\tNULL, NULL, &allocated_mem);\n");
          }
          {
            ml_backend__ml_code_util__Var_67 = mercury__string__f_43_43_2_f_0((MR_String) ")->MR_closure_arg_pseudo_type_info[", ml_backend__ml_code_util__Var_159);
          }
          {
            ml_backend__ml_code_util__Var_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_66, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_67));
          }
          {
            ml_backend__ml_code_util__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_65, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_66));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_code_util__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_62, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_63));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_62, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_65));
          }
          {
            ml_backend__ml_code_util__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_4[11])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_59, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_62));
          }
          {
            ml_backend__ml_code_util__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_56, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_57));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_56, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_59));
          }
          {
            ml_backend__ml_code_util__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_4[10])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_51, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_56));
          }
          {
            ml_backend__ml_code_util__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_49, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_50));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_49, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_51));
          }
          {
            ml_backend__ml_code_util__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_4[9])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_46, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_49));
          }
          {
            ml_backend__ml_code_util__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_4[8])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_43, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_46));
          }
          {
            ml_backend__ml_code_util__MakeTypeInfoCodeC_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCodeC_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCodeC_28, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCodeC_28, 2) = ((MR_Box) (ml_backend__ml_code_util__Var_43));
          }
          {
            ml_backend__ml_code_util__MakeTypeInfoCode_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCode_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCode_29, 1) = ((MR_Box) (ml_backend__ml_code_util__MakeTypeInfoCodeC_28));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCode_29, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_11));
          }
          {
            ml_backend__ml_code_util__DeallocateCode_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__DeallocateCode_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__DeallocateCode_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_2[1])));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__DeallocateCode_31, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_11));
          }
          ml_backend__ml_code_util__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_code_util__TypeInfoDecl_25);
          {
            ml_backend__ml_code_util__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_85, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_86));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_code_util__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_90, 0) = ((MR_Box) (ml_backend__ml_code_util__DeallocateCode_31));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_code_util__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_89, 0) = ((MR_Box) (ml_backend__ml_code_util__CallTraceFuncCode_27));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_89, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_90));
          }
          {
            ml_backend__ml_code_util__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_88, 0) = ((MR_Box) (ml_backend__ml_code_util__MakeTypeInfoCode_29));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_88, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_89));
          }
          {
            ml_backend__ml_code_util__GCTraceCode_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GCTraceCode_32, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_85));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GCTraceCode_32, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_88));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GCTraceCode_32, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_11));
          }
          {
            ml_backend__ml_code_util__GCStmt_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__GCStmt_33, 0) = ((MR_Box) (ml_backend__ml_code_util__GCTraceCode_32));
          }
        }
        break;
    }
    {
      ml_backend__ml_code_util__Var_92 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_21, ml_backend__ml_code_util__Type_9);
    }
    {
      *ml_backend__ml_code_util__LocalVarDefn_12 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_code_util__VarName_8, ml_backend__ml_code_util__Var_92, ml_backend__ml_code_util__GCStmt_33, ml_backend__ml_code_util__Context_11);
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_7,
  MR_Word ml_backend__ml_code_util__SourceType_8,
  MR_Word ml_backend__ml_code_util__DestType_9,
  MR_Word ml_backend__ml_code_util__BoxPolicy_10,
  MR_Word ml_backend__ml_code_util__VarRval_11,
  MR_Word * ml_backend__ml_code_util__ArgRval_12)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    switch (ml_backend__ml_code_util__BoxPolicy_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *ml_backend__ml_code_util__ArgRval_12 = ml_backend__ml_code_util__VarRval_11;
        break;
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_code_util__Var_13;
          MR_Word ml_backend__ml_code_util__Var_14;
          MR_Word ml_backend__ml_code_util__Var_15;
          MR_Word ml_backend__ml_code_util__Var_16;

          ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__SourceType_8)) == (MR_mktag((MR_Integer) 0)));
          if (ml_backend__ml_code_util__succeeded)
            {
              ml_backend__ml_code_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SourceType_8, (MR_Integer) 0)));
              ml_backend__ml_code_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SourceType_8, (MR_Integer) 1)));
              ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__DestType_9)) == (MR_mktag((MR_Integer) 0)));
              if (ml_backend__ml_code_util__succeeded)
                {
                  ml_backend__ml_code_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DestType_9, (MR_Integer) 0)));
                  ml_backend__ml_code_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DestType_9, (MR_Integer) 1)));
                }
              ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
            }
          if (ml_backend__ml_code_util__succeeded)
            {
              MR_Word ml_backend__ml_code_util__MLDS_DestType_17;
              MR_Word ml_backend__ml_code_util__Var_32;

              {
                ml_backend__ml_code_util__MLDS_DestType_17 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__DestType_9);
              }
              {
                ml_backend__ml_code_util__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_32, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_DestType_17));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_code_util__ArgRval_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_32));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__VarRval_11));
              }
            }
          else
            {
              MR_Word ml_backend__ml_code_util__Var_18;
              MR_Word ml_backend__ml_code_util__Var_19;
              MR_Word ml_backend__ml_code_util__Var_20;
              MR_Word ml_backend__ml_code_util__Var_21;

              ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__SourceType_8)) == (MR_mktag((MR_Integer) 0)));
              if (ml_backend__ml_code_util__succeeded)
                {
                  ml_backend__ml_code_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SourceType_8, (MR_Integer) 0)));
                  ml_backend__ml_code_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SourceType_8, (MR_Integer) 1)));
                }
              ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
              if (ml_backend__ml_code_util__succeeded)
                {
                  ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__DestType_9)) == (MR_mktag((MR_Integer) 0)));
                  if (ml_backend__ml_code_util__succeeded)
                    {
                      ml_backend__ml_code_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DestType_9, (MR_Integer) 0)));
                      ml_backend__ml_code_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DestType_9, (MR_Integer) 1)));
                    }
                }
              if (ml_backend__ml_code_util__succeeded)
                {
                  MR_Word ml_backend__ml_code_util__MLDS_SourceType_22;
                  MR_Word ml_backend__ml_code_util__Var_33;

                  {
                    ml_backend__ml_code_util__MLDS_SourceType_22 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__SourceType_8);
                  }
                  {
                    ml_backend__ml_code_util__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_33, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_SourceType_22));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_code_util__ArgRval_12 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_33));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__VarRval_11));
                  }
                }
              else
                {
                  MR_Word ml_backend__ml_code_util__Var_34;
                  MR_Word ml_backend__ml_code_util__Var_35;

                  ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__SourceType_8)) == (MR_mktag((MR_Integer) 2)));
                  if (ml_backend__ml_code_util__succeeded)
                    {
                      ml_backend__ml_code_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__SourceType_8, (MR_Integer) 0)));
                      ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
                  if (ml_backend__ml_code_util__succeeded)
                    {
                      ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__DestType_9)) == (MR_mktag((MR_Integer) 2)));
                      if (ml_backend__ml_code_util__succeeded)
                        {
                          ml_backend__ml_code_util__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__DestType_9, (MR_Integer) 0)));
                          ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                    }
                  if (ml_backend__ml_code_util__succeeded)
                    {
                      MR_Word ml_backend__ml_code_util__Var_36;
                      MR_Word ml_backend__ml_code_util__Var_37;
                      MR_Word ml_backend__ml_code_util__MLDS_DestType_53;

                      {
                        ml_backend__ml_code_util__MLDS_DestType_53 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__DestType_9);
                      }
                      {
                        ml_backend__ml_code_util__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_36, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_DestType_53));
                      }
                      {
                        ml_backend__ml_code_util__Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_4[7])));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_37, 2) = ((MR_Box) (ml_backend__ml_code_util__VarRval_11));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        *ml_backend__ml_code_util__ArgRval_12 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_36));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__Var_37));
                      }
                    }
                  else
                    {
                      MR_Word ml_backend__ml_code_util__Var_40;
                      MR_Word ml_backend__ml_code_util__Var_41;

                      ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__DestType_9)) == (MR_mktag((MR_Integer) 2)));
                      if (ml_backend__ml_code_util__succeeded)
                        {
                          ml_backend__ml_code_util__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__DestType_9, (MR_Integer) 0)));
                          ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
                      if (ml_backend__ml_code_util__succeeded)
                        {
                          ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__SourceType_8)) == (MR_mktag((MR_Integer) 2)));
                          if (ml_backend__ml_code_util__succeeded)
                            {
                              ml_backend__ml_code_util__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__SourceType_8, (MR_Integer) 0)));
                              ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                        }
                      if (ml_backend__ml_code_util__succeeded)
                        {
                          MR_Word ml_backend__ml_code_util__Var_42;
                          MR_Word ml_backend__ml_code_util__Var_43;
                          MR_Word ml_backend__ml_code_util__Var_44;
                          MR_Word ml_backend__ml_code_util__MLDS_DestType_54;
                          MR_Word ml_backend__ml_code_util__MLDS_SourceType_55;

                          {
                            ml_backend__ml_code_util__MLDS_SourceType_55 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__SourceType_8);
                          }
                          {
                            ml_backend__ml_code_util__MLDS_DestType_54 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__DestType_9);
                          }
                          {
                            ml_backend__ml_code_util__Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_42, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_DestType_54));
                          }
                          {
                            ml_backend__ml_code_util__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_44, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_SourceType_55));
                          }
                          {
                            ml_backend__ml_code_util__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_43, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_44));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_43, 2) = ((MR_Box) (ml_backend__ml_code_util__VarRval_11));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__ml_code_util__ArgRval_12 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_42));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__Var_43));
                          }
                        }
                      else
                        {
                          MR_Word ml_backend__ml_code_util__SourceTypeCtor_23;
                          MR_Word ml_backend__ml_code_util__SourceTypeArgs_24;
                          MR_Word ml_backend__ml_code_util__DestTypeCtor_25;
                          MR_Word ml_backend__ml_code_util__DestTypeArgs_26;

                          {
                            ml_backend__ml_code_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ml_backend__ml_code_util__SourceType_8, &ml_backend__ml_code_util__SourceTypeCtor_23, &ml_backend__ml_code_util__SourceTypeArgs_24);
                          }
                          if (ml_backend__ml_code_util__succeeded)
                            {
                              {
                                ml_backend__ml_code_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ml_backend__ml_code_util__DestType_9, &ml_backend__ml_code_util__DestTypeCtor_25, &ml_backend__ml_code_util__DestTypeArgs_26);
                              }
                              if (ml_backend__ml_code_util__succeeded)
                                {
                                  {
                                    MR_Word ml_backend__ml_code_util__Var_47;
                                    MR_Word ml_backend__ml_code_util__Var_48;
                                    MR_Word ml_backend__ml_code_util__Var_27;
                                    MR_Word ml_backend__ml_code_util__Var_28;

                                    {
                                      ml_backend__ml_code_util__succeeded = parse_tree__prog_type__type_ctor_is_array_1_p_0(ml_backend__ml_code_util__SourceTypeCtor_23);
                                    }
                                    if (ml_backend__ml_code_util__succeeded)
                                      {
                                        ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__SourceTypeArgs_24)) == (MR_mktag((MR_Integer) 1)));
                                        if (ml_backend__ml_code_util__succeeded)
                                          {
                                            ml_backend__ml_code_util__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__SourceTypeArgs_24, (MR_Integer) 0)));
                                            ml_backend__ml_code_util__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__SourceTypeArgs_24, (MR_Integer) 1)));
                                            ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__Var_47)) == (MR_mktag((MR_Integer) 0)));
                                            if (ml_backend__ml_code_util__succeeded)
                                              {
                                                ml_backend__ml_code_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_47, (MR_Integer) 0)));
                                                ml_backend__ml_code_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_47, (MR_Integer) 1)));
                                                ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              }
                                          }
                                      }
                                  }
                                  if (!(ml_backend__ml_code_util__succeeded))
                                    {
                                      MR_Word ml_backend__ml_code_util__Var_45;
                                      MR_Word ml_backend__ml_code_util__Var_46;
                                      MR_Word ml_backend__ml_code_util__Var_29;
                                      MR_Word ml_backend__ml_code_util__Var_30;

                                      {
                                        ml_backend__ml_code_util__succeeded = parse_tree__prog_type__type_ctor_is_array_1_p_0(ml_backend__ml_code_util__DestTypeCtor_25);
                                      }
                                      if (ml_backend__ml_code_util__succeeded)
                                        {
                                          ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__DestTypeArgs_26)) == (MR_mktag((MR_Integer) 1)));
                                          if (ml_backend__ml_code_util__succeeded)
                                            {
                                              ml_backend__ml_code_util__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__DestTypeArgs_26, (MR_Integer) 0)));
                                              ml_backend__ml_code_util__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__DestTypeArgs_26, (MR_Integer) 1)));
                                              ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__Var_45)) == (MR_mktag((MR_Integer) 0)));
                                              if (ml_backend__ml_code_util__succeeded)
                                                {
                                                  ml_backend__ml_code_util__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_45, (MR_Integer) 0)));
                                                  ml_backend__ml_code_util__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_45, (MR_Integer) 1)));
                                                  ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                    }
                                  if (ml_backend__ml_code_util__succeeded)
                                    {
                                      {
                                        ml_backend__ml_code_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_code_util__SourceType_8, ml_backend__ml_code_util__DestType_9);
                                      }
                                      ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
                                    }
                                }
                            }
                          if (ml_backend__ml_code_util__succeeded)
                            {
                              MR_Word ml_backend__ml_code_util__Var_49;
                              MR_Word ml_backend__ml_code_util__MLDS_DestType_56;

                              {
                                ml_backend__ml_code_util__MLDS_DestType_56 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__DestType_9);
                              }
                              {
                                ml_backend__ml_code_util__Var_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_49, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_DestType_56));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                *ml_backend__ml_code_util__ArgRval_12 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_49));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__VarRval_11));
                              }
                            }
                          else
                            {
                              MR_Word ml_backend__ml_code_util__Var_51;
                              MR_Word ml_backend__ml_code_util__Var_31;

                              {
                                ml_backend__ml_code_util__Var_51 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                              }
                              {
                                ml_backend__ml_code_util__succeeded = parse_tree__prog_type__type_unify_5_p_0(ml_backend__ml_code_util__SourceType_8, ml_backend__ml_code_util__DestType_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_code_util__Var_51, &ml_backend__ml_code_util__Var_31);
                              }
                              ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
                              if (ml_backend__ml_code_util__succeeded)
                                {
                                  MR_Word ml_backend__ml_code_util__Var_52;
                                  MR_Word ml_backend__ml_code_util__MLDS_DestType_57;

                                  {
                                    ml_backend__ml_code_util__MLDS_DestType_57 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__DestType_9);
                                  }
                                  {
                                    ml_backend__ml_code_util__Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_52, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_DestType_57));
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                    *ml_backend__ml_code_util__ArgRval_12 = base;
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_52));
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__VarRval_11));
                                  }
                                }
                              else
                                *ml_backend__ml_code_util__ArgRval_12 = ml_backend__ml_code_util__VarRval_11;
                            }
                        }
                    }
                }
            }
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_9,
  MR_Word ml_backend__ml_code_util__Context_10,
  MR_Word ml_backend__ml_code_util__MLDS_Type_11,
  MR_Word ml_backend__ml_code_util__DoubleWidth_12,
  MR_Word ml_backend__ml_code_util__Rval_13,
  MR_Word * ml_backend__ml_code_util__BoxedRval_14,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_0_29,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_30)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    if ((ml_backend__ml_code_util__MLDS_Type_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
      ml_backend__ml_code_util__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) ml_backend__ml_code_util__MLDS_Type_11)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word ml_backend__ml_code_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_11, (MR_Integer) 0)));
        MR_Word ml_backend__ml_code_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_11, (MR_Integer) 1)));
        MR_Word ml_backend__ml_code_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_11, (MR_Integer) 2)));
        MR_Word ml_backend__ml_code_util__Var_16;
        MR_Word ml_backend__ml_code_util__Var_17;

        ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__Var_31)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__ml_code_util__succeeded)
          {
            ml_backend__ml_code_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_31, (MR_Integer) 0)));
            ml_backend__ml_code_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_31, (MR_Integer) 1)));
          }
      }
    else
      ml_backend__ml_code_util__succeeded = MR_FALSE;
    if (ml_backend__ml_code_util__succeeded)
      {
        *ml_backend__ml_code_util__BoxedRval_14 = ml_backend__ml_code_util__Rval_13;
        *ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_30 = ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_0_29;
      }
    else
      {
        MR_Word ml_backend__ml_code_util__Globals_22;
        MR_Word ml_backend__ml_code_util__Target_23;

        if ((ml_backend__ml_code_util__MLDS_Type_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
          ml_backend__ml_code_util__succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) ml_backend__ml_code_util__MLDS_Type_11)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Word ml_backend__ml_code_util__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_11, (MR_Integer) 0)));
            MR_Word ml_backend__ml_code_util__Var_33;
            MR_Word ml_backend__ml_code_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_11, (MR_Integer) 1)));
            MR_Word ml_backend__ml_code_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_11, (MR_Integer) 2)));

            ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__Var_32)) == (MR_mktag((MR_Integer) 2)));
            if (ml_backend__ml_code_util__succeeded)
              {
                ml_backend__ml_code_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_32, (MR_Integer) 0)));
                ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
        else
          ml_backend__ml_code_util__succeeded = MR_FALSE;
        if (ml_backend__ml_code_util__succeeded)
          {
            {
              hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_code_util__ModuleInfo_9, &ml_backend__ml_code_util__Globals_22);
            }
            {
              libs__globals__get_target_2_p_0(ml_backend__ml_code_util__Globals_22, &ml_backend__ml_code_util__Target_23);
            }
            ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Target_23 == (MR_Integer) 0);
          }
        if (ml_backend__ml_code_util__succeeded)
          {
            MR_Word ml_backend__ml_code_util__HaveUnboxedFloats_24;

            {
              ml_backend__ml_code_util__HaveUnboxedFloats_24 = ml_backend__ml_global_data__ml_global_data_have_unboxed_floats_1_f_0(ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_0_29);
            }
            ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__HaveUnboxedFloats_24 == (MR_Integer) 1);
            if (ml_backend__ml_code_util__succeeded)
              ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__DoubleWidth_12 == (MR_Integer) 0);
            if (ml_backend__ml_code_util__succeeded)
              {
                MR_Word ml_backend__ml_code_util__ModuleName_25;
                MR_Word ml_backend__ml_code_util__MLDS_ModuleName_26;
                MR_Word ml_backend__ml_code_util__Initializer_27;
                MR_Word ml_backend__ml_code_util__ConstAddrRval_28;

                {
                  hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_code_util__ModuleInfo_9, &ml_backend__ml_code_util__ModuleName_25);
                }
                {
                  ml_backend__ml_code_util__MLDS_ModuleName_26 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_25);
                }
                {
                  ml_backend__ml_code_util__Initializer_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Initializer_27, 0) = ((MR_Box) (ml_backend__ml_code_util__Rval_13));
                }
                {
                  ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(ml_backend__ml_code_util__MLDS_ModuleName_26, (MR_Integer) 1, ml_backend__ml_code_util__MLDS_Type_11, ml_backend__ml_code_util__Initializer_27, ml_backend__ml_code_util__Context_10, &ml_backend__ml_code_util__ConstAddrRval_28, ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_0_29, ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_30);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_code_util__BoxedRval_14 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_4[7])));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__ConstAddrRval_28));
                }
              }
            else
              {
                MR_Word ml_backend__ml_code_util__Var_38;

                {
                  ml_backend__ml_code_util__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_38, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_11));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_code_util__BoxedRval_14 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_38));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__Rval_13));
                }
                *ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_30 = ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_0_29;
              }
          }
        else
          {
            MR_Word ml_backend__ml_code_util__Var_39;

            {
              ml_backend__ml_code_util__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_39, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_code_util__BoxedRval_14 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_39));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__Rval_13));
            }
            *ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_30 = ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_0_29;
          }
      }
  }
}

MR_bool MR_CALL 
ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_4,
  MR_Word ml_backend__ml_code_util__Type_5,
  MR_Word ml_backend__ml_code_util__Width_6)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__Globals_7;
    MR_Word ml_backend__ml_code_util__Target_8;
    MR_Word ml_backend__ml_code_util__UnboxedFloat_9;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_code_util__ModuleInfo_4, &ml_backend__ml_code_util__Globals_7);
    }
    {
      libs__globals__get_target_2_p_0(ml_backend__ml_code_util__Globals_7, &ml_backend__ml_code_util__Target_8);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_code_util__Globals_7, (MR_Integer) 253, &ml_backend__ml_code_util__UnboxedFloat_9);
    }
    switch (ml_backend__ml_code_util__Target_8) {
      default:
        ml_backend__ml_code_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__ml_code_util__Category_10;
          MR_Word ml_backend__ml_code_util__Var_77;

          {
            ml_backend__ml_code_util__Category_10 = check_hlds__type_util__classify_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_4, ml_backend__ml_code_util__Type_5);
          }
          ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__Category_10)) == (MR_mktag((MR_Integer) 1)));
          if (ml_backend__ml_code_util__succeeded)
            {
              ml_backend__ml_code_util__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Category_10, (MR_Integer) 0)));
              if ((ml_backend__ml_code_util__Var_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                ml_backend__ml_code_util__succeeded = MR_TRUE;
              else
              if ((ml_backend__ml_code_util__Var_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__UnboxedFloat_9 == (MR_Integer) 0);
                  if (ml_backend__ml_code_util__succeeded)
                    switch (MR_tag((MR_Word) ml_backend__ml_code_util__Width_6)) {
                      default:
                        ml_backend__ml_code_util__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(ml_backend__ml_code_util__Width_6)) {
                          default:
                            ml_backend__ml_code_util__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 0:
                            ml_backend__ml_code_util__succeeded = MR_TRUE;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "function \140ml_backend.ml_code_util.ml_must_box_field_type_category\'/3", (MR_String) "partial word for float");
                          }
                          ml_backend__ml_code_util__succeeded = MR_TRUE;
                        }
                        break;
                    }
                }
              else
                ml_backend__ml_code_util__succeeded = MR_FALSE;
            }
        }
        break;
    }
    return ml_backend__ml_code_util__succeeded;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(
  MR_Word ml_backend__ml_code_util__MaybeFieldName_4,
  MR_Integer ml_backend__ml_code_util__ArgNum_5)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__FieldVarName_6;
    MR_String ml_backend__ml_code_util__FieldName_9;

    if ((ml_backend__ml_code_util__MaybeFieldName_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String ml_backend__ml_code_util__Var_11;

        {
          ml_backend__ml_code_util__Var_11 = mercury__string__int_to_string_1_f_0(ml_backend__ml_code_util__ArgNum_5);
        }
        {
          ml_backend__ml_code_util__FieldName_9 = mercury__string__f_43_43_2_f_0((MR_String) "F", ml_backend__ml_code_util__Var_11);
        }
      }
    else
      {
        MR_Word ml_backend__ml_code_util__QualifiedFieldName_7;
        MR_Word ml_backend__ml_code_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__MaybeFieldName_4, (MR_Integer) 0)));
        MR_Word ml_backend__ml_code_util___FieldNameCtxt_8;

        ml_backend__ml_code_util__QualifiedFieldName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_12, (MR_Integer) 0)));
        ml_backend__ml_code_util___FieldNameCtxt_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_12, (MR_Integer) 1)));
        {
          ml_backend__ml_code_util__FieldName_9 = mdbcomp__sym_name__unqualify_name_1_f_0(ml_backend__ml_code_util__QualifiedFieldName_7);
        }
      }
    {
      ml_backend__ml_code_util__FieldVarName_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__FieldVarName_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__FieldVarName_6, 1) = ((MR_Box) (ml_backend__ml_code_util__FieldName_9));
    }
    return ml_backend__ml_code_util__FieldVarName_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    return (MR_Word) &ml_backend__ml_code_util_scalar_common_1[18];
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(
  MR_Word ml_backend__ml_code_util__DataName_7,
  MR_Word ml_backend__ml_code_util__MLDS_Type_8,
  MR_Word ml_backend__ml_code_util__Initializer_9,
  MR_Word ml_backend__ml_code_util__GCStmt_10,
  MR_Word ml_backend__ml_code_util__Context_11)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__HeadVar__6_6;

    {
      ml_backend__ml_code_util__HeadVar__6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__6_6, 0) = ((MR_Box) (ml_backend__ml_code_util__DataName_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__6_6, 1) = ((MR_Box) (ml_backend__ml_code_util__Context_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__6_6, 2) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__6_6, 3) = ((MR_Box) (ml_backend__ml_code_util__Initializer_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__6_6, 4) = ((MR_Box) (ml_backend__ml_code_util__GCStmt_10));
    }
    return ml_backend__ml_code_util__HeadVar__6_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(
  MR_Word ml_backend__ml_code_util__DataName_6,
  MR_Word ml_backend__ml_code_util__MLDS_Type_7,
  MR_Word ml_backend__ml_code_util__GCStmt_8,
  MR_Word ml_backend__ml_code_util__Context_9)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__HeadVar__5_5;

    {
      ml_backend__ml_code_util__HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__5_5, 0) = ((MR_Box) (ml_backend__ml_code_util__DataName_6));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__5_5, 1) = ((MR_Box) (ml_backend__ml_code_util__Context_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__5_5, 2) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__5_5, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__5_5, 4) = ((MR_Box) (ml_backend__ml_code_util__GCStmt_8));
    }
    return ml_backend__ml_code_util__HeadVar__5_5;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_local_var_decl_6_p_0(
  MR_Word ml_backend__ml_code_util__VarName_7,
  MR_Word ml_backend__ml_code_util__Type_8,
  MR_Word ml_backend__ml_code_util__Context_9,
  MR_Word * ml_backend__ml_code_util__Defn_10,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_14,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_15)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__ModuleInfo_12;
    MR_Word ml_backend__ml_code_util__GCStmt_13;
    MR_Word ml_backend__ml_code_util__Var_17;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_14, &ml_backend__ml_code_util__ModuleInfo_12);
    }
    {
      ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(ml_backend__ml_code_util__VarName_7, ml_backend__ml_code_util__Type_8, ml_backend__ml_code_util__Context_9, &ml_backend__ml_code_util__GCStmt_13, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_14, ml_backend__ml_code_util__STATE_VARIABLE_Info_15);
    }
    {
      ml_backend__ml_code_util__Var_17 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_12, ml_backend__ml_code_util__Type_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_code_util__Defn_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__VarName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Context_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_code_util__Var_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_code_util__GCStmt_13));
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_local_var_lval_4_p_0(
  MR_Word ml_backend__ml_code_util__Info_5,
  MR_Word ml_backend__ml_code_util__VarName_6,
  MR_Word ml_backend__ml_code_util__VarType_7,
  MR_Word * ml_backend__ml_code_util__QualifiedVarLval_8)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__ModuleName_9;
    MR_Word ml_backend__ml_code_util__MLDS_ModuleName_10;
    MR_Word ml_backend__ml_code_util__MLDS_Var_11;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleName_9);
    }
    {
      ml_backend__ml_code_util__MLDS_ModuleName_10 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_9);
    }
    {
      ml_backend__ml_code_util__MLDS_Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_11, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_11, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_11, 2) = ((MR_Box) (ml_backend__ml_code_util__VarName_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_code_util__QualifiedVarLval_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_11));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__VarType_7));
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(
  MR_Word ml_backend__ml_code_util__VarSet_4,
  MR_Word ml_backend__ml_code_util__Var_5)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__MLDSVarName_6;
    MR_Word ml_backend__ml_code_util__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Integer ml_backend__ml_code_util__VarNumber_7;
    MR_String ml_backend__ml_code_util__VarName_8;

    {
      mercury__term__var_to_int_2_p_0(ml_backend__ml_code_util__TypeCtorInfo_10_10, ml_backend__ml_code_util__Var_5, &ml_backend__ml_code_util__VarNumber_7);
    }
    {
      ml_backend__ml_code_util__succeeded = mercury__varset__search_name_3_p_0(ml_backend__ml_code_util__TypeCtorInfo_10_10, ml_backend__ml_code_util__VarSet_4, ml_backend__ml_code_util__Var_5, &ml_backend__ml_code_util__VarName_8);
    }
    if (ml_backend__ml_code_util__succeeded)
      {
        ml_backend__ml_code_util__MLDSVarName_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDSVarName_6, 0) = ((MR_Box) (ml_backend__ml_code_util__VarName_8));
        MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDSVarName_6, 1) = ((MR_Box) (ml_backend__ml_code_util__VarNumber_7));
      }
    else
      {
        {
          ml_backend__ml_code_util__MLDSVarName_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDSVarName_6, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDSVarName_6, 1) = ((MR_Box) (ml_backend__ml_code_util__VarNumber_7));
        }
      }
    return ml_backend__ml_code_util__MLDSVarName_6;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
    MR_Word ml_backend__ml_code_util__conv0_MLDSVarName_6;

    {
      ml_backend__ml_code_util__conv0_MLDSVarName_6 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_MLDSVarName_6));
    return ml_backend__ml_code_util__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(
  MR_Word ml_backend__ml_code_util__VarSet_4,
  MR_Word ml_backend__ml_code_util__Vars_5)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__HeadVar__3_3;
    MR_Word ml_backend__ml_code_util__Var_6;

    {
      ml_backend__ml_code_util__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_6, 0) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_6, 1) = ((MR_Box) (ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_6, 3) = ((MR_Box) (ml_backend__ml_code_util__VarSet_4));
    }
    {
      ml_backend__ml_code_util__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0, ml_backend__ml_code_util__Var_6, ml_backend__ml_code_util__Vars_5);
    }
    return ml_backend__ml_code_util__HeadVar__3_3;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_variable_type_3_p_0(
  MR_Word ml_backend__ml_code_util__Info_4,
  MR_Word ml_backend__ml_code_util__Var_5,
  MR_Word * ml_backend__ml_code_util__Type_6)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__VarTypes_7;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_code_util__Info_4, &ml_backend__ml_code_util__VarTypes_7);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(ml_backend__ml_code_util__VarTypes_7, ml_backend__ml_code_util__Var_5, ml_backend__ml_code_util__Type_6);
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_variable_types_3_p_0(
  MR_Word ml_backend__ml_code_util__HeadVar__1_1,
  MR_Word ml_backend__ml_code_util__HeadVar__2_2,
  MR_Word * ml_backend__ml_code_util__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    if ((ml_backend__ml_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ml_backend__ml_code_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_code_util__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_code_util__Type_8;
        MR_Word ml_backend__ml_code_util__Types_9;
        MR_Word ml_backend__ml_code_util__VarTypes_13;

        {
          ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_code_util__HeadVar__1_1, &ml_backend__ml_code_util__VarTypes_13);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(ml_backend__ml_code_util__VarTypes_13, ml_backend__ml_code_util__Var_6, &ml_backend__ml_code_util__Type_8);
        }
        {
          ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_code_util__HeadVar__1_1, ml_backend__ml_code_util__Vars_7, &ml_backend__ml_code_util__Types_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_code_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Type_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Types_9));
        }
      }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_list_3_p_0(
  MR_Word ml_backend__ml_code_util__HeadVar__1_1,
  MR_Word ml_backend__ml_code_util__HeadVar__2_2,
  MR_Word * ml_backend__ml_code_util__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    if ((ml_backend__ml_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ml_backend__ml_code_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_code_util__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_code_util__Lval_8;
        MR_Word ml_backend__ml_code_util__Lvals_9;

        {
          ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_code_util__HeadVar__1_1, ml_backend__ml_code_util__Var_6, &ml_backend__ml_code_util__Lval_8);
        }
        {
          ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_code_util__HeadVar__1_1, ml_backend__ml_code_util__Vars_7, &ml_backend__ml_code_util__Lvals_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_code_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Lval_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Lvals_9));
        }
      }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_3_p_0(
  MR_Word ml_backend__ml_code_util__Info_4,
  MR_Word ml_backend__ml_code_util__Var_5,
  MR_Word * ml_backend__ml_code_util__Lval_6)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__VarLvals_7;
    MR_Word ml_backend__ml_code_util__VarLval_8;
    MR_Box ml_backend__ml_code_util__conv0_VarLval_8;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_p_0(ml_backend__ml_code_util__Info_4, &ml_backend__ml_code_util__VarLvals_7);
    }
    {
      ml_backend__ml_code_util__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_code_util__VarLvals_7, ((MR_Box) (ml_backend__ml_code_util__Var_5)), &ml_backend__ml_code_util__conv0_VarLval_8);
    }
    if (ml_backend__ml_code_util__succeeded)
      {
        ml_backend__ml_code_util__VarLval_8 = ((MR_Word) ml_backend__ml_code_util__conv0_VarLval_8);
        ml_backend__ml_code_util__succeeded = MR_TRUE;
      }
    if (ml_backend__ml_code_util__succeeded)
      *ml_backend__ml_code_util__Lval_6 = ml_backend__ml_code_util__VarLval_8;
    else
      {
        MR_Word ml_backend__ml_code_util__Type_9;
        MR_Word ml_backend__ml_code_util__VarTypes_15;

        {
          ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_code_util__Info_4, &ml_backend__ml_code_util__VarTypes_15);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(ml_backend__ml_code_util__VarTypes_15, ml_backend__ml_code_util__Var_5, &ml_backend__ml_code_util__Type_9);
        }
        {
          ml_backend__ml_code_util__ml_gen_var_with_type_4_p_0(ml_backend__ml_code_util__Info_4, ml_backend__ml_code_util__Var_5, ml_backend__ml_code_util__Type_9, ml_backend__ml_code_util__Lval_6);
        }
      }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_with_type_4_p_0(
  MR_Word ml_backend__ml_code_util__Info_5,
  MR_Word ml_backend__ml_code_util__Var_6,
  MR_Word ml_backend__ml_code_util__Type_7,
  MR_Word * ml_backend__ml_code_util__Lval_8)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__ModuleInfo_9;
    MR_Word ml_backend__ml_code_util__IsDummy_10;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleInfo_9);
    }
    {
      ml_backend__ml_code_util__IsDummy_10 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_9, ml_backend__ml_code_util__Type_7);
    }
    switch (ml_backend__ml_code_util__IsDummy_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_code_util__PrivateBuiltin_11;
          MR_Word ml_backend__ml_code_util__MLDS_Module_12;
          MR_Word ml_backend__ml_code_util__MLDS_Type_13;
          MR_Word ml_backend__ml_code_util__Var_19;
          MR_Word ml_backend__ml_code_util__ModuleInfo_28;

          {
            ml_backend__ml_code_util__PrivateBuiltin_11 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            ml_backend__ml_code_util__MLDS_Module_12 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__PrivateBuiltin_11);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleInfo_28);
          }
          {
            ml_backend__ml_code_util__MLDS_Type_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_28, ml_backend__ml_code_util__Type_7);
          }
          {
            ml_backend__ml_code_util__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_19, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Module_12));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_19, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_19, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[17])));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_code_util__Lval_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_19));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_13));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_code_util__TypeCtorInfo_10_35;
          MR_Word ml_backend__ml_code_util__VarSet_14;
          MR_Word ml_backend__ml_code_util__VarName_15;
          MR_Word ml_backend__ml_code_util__VarLval_16;
          MR_Word ml_backend__ml_code_util__OutputVars_17;
          MR_Word ml_backend__ml_code_util__MLDS_Type_23;
          MR_Integer ml_backend__ml_code_util__VarNumber_32;
          MR_Word ml_backend__ml_code_util__ModuleInfo_39;
          MR_Word ml_backend__ml_code_util__ModuleName_44;
          MR_Word ml_backend__ml_code_util__MLDS_ModuleName_45;
          MR_Word ml_backend__ml_code_util__MLDS_Var_46;
          MR_String ml_backend__ml_code_util__VarName_33;

          {
            ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__VarSet_14);
          }
          ml_backend__ml_code_util__TypeCtorInfo_10_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            mercury__term__var_to_int_2_p_0(ml_backend__ml_code_util__TypeCtorInfo_10_35, ml_backend__ml_code_util__Var_6, &ml_backend__ml_code_util__VarNumber_32);
          }
          {
            ml_backend__ml_code_util__succeeded = mercury__varset__search_name_3_p_0(ml_backend__ml_code_util__TypeCtorInfo_10_35, ml_backend__ml_code_util__VarSet_14, ml_backend__ml_code_util__Var_6, &ml_backend__ml_code_util__VarName_33);
          }
          if (ml_backend__ml_code_util__succeeded)
            {
              ml_backend__ml_code_util__VarName_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__VarName_15, 0) = ((MR_Box) (ml_backend__ml_code_util__VarName_33));
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__VarName_15, 1) = ((MR_Box) (ml_backend__ml_code_util__VarNumber_32));
            }
          else
            {
              {
                ml_backend__ml_code_util__VarName_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__VarName_15, 0) = ((MR_Box) ((MR_String) ""));
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__VarName_15, 1) = ((MR_Box) (ml_backend__ml_code_util__VarNumber_32));
              }
            }
          {
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleInfo_39);
          }
          {
            ml_backend__ml_code_util__MLDS_Type_23 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_39, ml_backend__ml_code_util__Type_7);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleName_44);
          }
          {
            ml_backend__ml_code_util__MLDS_ModuleName_45 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_44);
          }
          {
            ml_backend__ml_code_util__MLDS_Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_46, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_45));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_46, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_46, 2) = ((MR_Box) (ml_backend__ml_code_util__VarName_15));
          }
          {
            ml_backend__ml_code_util__VarLval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__VarLval_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__VarLval_16, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_46));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__VarLval_16, 2) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_23));
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__OutputVars_17);
          }
          {
            ml_backend__ml_code_util__succeeded = mercury__list__member_2_p_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[0], ((MR_Box) (ml_backend__ml_code_util__Var_6)), ml_backend__ml_code_util__OutputVars_17);
          }
          if (ml_backend__ml_code_util__succeeded)
            {
              MR_Word ml_backend__ml_code_util__Var_18;

              {
                ml_backend__ml_code_util__Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_18, 0) = ((MR_Box) (ml_backend__ml_code_util__VarLval_16));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_code_util__Lval_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_18));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_23));
              }
            }
          else
            *ml_backend__ml_code_util__Lval_8 = ml_backend__ml_code_util__VarLval_16;
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_new_label_3_p_0(
  MR_String * ml_backend__ml_code_util__Label_4,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_7,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_8)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Integer ml_backend__ml_code_util__LabelNum_6;
    MR_String ml_backend__ml_code_util__Var_11;

    {
      ml_backend__ml_gen_info__ml_gen_info_new_label_3_p_0(&ml_backend__ml_code_util__LabelNum_6, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_7, ml_backend__ml_code_util__STATE_VARIABLE_Info_8);
    }
    {
      ml_backend__ml_code_util__Var_11 = mercury__string__int_to_string_1_f_0(ml_backend__ml_code_util__LabelNum_6);
    }
    {
      *ml_backend__ml_code_util__Label_4 = mercury__string__f_43_43_2_f_0((MR_String) "label_", ml_backend__ml_code_util__Var_11);
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_pred_label_5_p_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_6,
  MR_Word ml_backend__ml_code_util__PredId_7,
  MR_Integer ml_backend__ml_code_util__ProcId_8,
  MR_Word * ml_backend__ml_code_util__MLDS_PredLabel_9,
  MR_Word * ml_backend__ml_code_util__MLDS_Module_10)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__RttiProcLabel_11;

    {
      ml_backend__ml_code_util__RttiProcLabel_11 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ml_backend__ml_code_util__ModuleInfo_6, ml_backend__ml_code_util__PredId_7, ml_backend__ml_code_util__ProcId_8);
    }
    {
      ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__ml_code_util__ModuleInfo_6, ml_backend__ml_code_util__RttiProcLabel_11, ml_backend__ml_code_util__MLDS_PredLabel_9, ml_backend__ml_code_util__MLDS_Module_10);
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_nondet_label_4_f_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_6,
  MR_Word ml_backend__ml_code_util__PredId_7,
  MR_Integer ml_backend__ml_code_util__ProcId_8,
  MR_Integer ml_backend__ml_code_util__SeqNum_9)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__MLDS_Name_10;
    MR_Word ml_backend__ml_code_util__Var_12;
    MR_Word ml_backend__ml_code_util__MLDS_PredLabel_19;
    MR_Word ml_backend__ml_code_util__RttiProcLabel_25;
    MR_Word ml_backend__ml_code_util___MLDS_ModuleName_11;

    {
      ml_backend__ml_code_util__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_12, 0) = ((MR_Box) (ml_backend__ml_code_util__SeqNum_9));
    }
    {
      ml_backend__ml_code_util__RttiProcLabel_25 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ml_backend__ml_code_util__ModuleInfo_6, ml_backend__ml_code_util__PredId_7, ml_backend__ml_code_util__ProcId_8);
    }
    {
      ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__ml_code_util__ModuleInfo_6, ml_backend__ml_code_util__RttiProcLabel_25, &ml_backend__ml_code_util__MLDS_PredLabel_19, &ml_backend__ml_code_util___MLDS_ModuleName_11);
    }
    {
      ml_backend__ml_code_util__MLDS_Name_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Name_10, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_PredLabel_19));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Name_10, 1) = ((MR_Box) (ml_backend__ml_code_util__ProcId_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Name_10, 2) = ((MR_Box) (ml_backend__ml_code_util__Var_12));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Name_10, 3) = ((MR_Box) (ml_backend__ml_code_util__PredId_7));
    }
    return ml_backend__ml_code_util__MLDS_Name_10;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_6,
  MR_Word ml_backend__ml_code_util__PredId_7,
  MR_Integer ml_backend__ml_code_util__ProcId_8,
  MR_Word * ml_backend__ml_code_util__MLDS_ModuleName_9,
  MR_Word * ml_backend__ml_code_util__MLDS_Name_10)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__MLDS_PredLabel_18;
    MR_Word ml_backend__ml_code_util__RttiProcLabel_24;

    {
      ml_backend__ml_code_util__RttiProcLabel_24 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ml_backend__ml_code_util__ModuleInfo_6, ml_backend__ml_code_util__PredId_7, ml_backend__ml_code_util__ProcId_8);
    }
    {
      ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__ml_code_util__ModuleInfo_6, ml_backend__ml_code_util__RttiProcLabel_24, &ml_backend__ml_code_util__MLDS_PredLabel_18, ml_backend__ml_code_util__MLDS_ModuleName_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_code_util__MLDS_Name_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_PredLabel_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__ProcId_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_code_util__PredId_7));
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_params_6_f_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_8,
  MR_Word ml_backend__ml_code_util__HeadVarNames_9,
  MR_Word ml_backend__ml_code_util__HeadTypes_10,
  MR_Word ml_backend__ml_code_util__HeadModes_11,
  MR_Word ml_backend__ml_code_util__PredOrFunc_12,
  MR_Word ml_backend__ml_code_util__CodeModel_13)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__FuncParams_14;
    MR_Word ml_backend__ml_code_util__TopFunctorModes_15;
    MR_Word ml_backend__ml_code_util__Var_16;

    {
      check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ml_backend__ml_code_util__ModuleInfo_8, ml_backend__ml_code_util__HeadModes_11, ml_backend__ml_code_util__HeadTypes_10, &ml_backend__ml_code_util__TopFunctorModes_15);
    }
    {
      ml_backend__ml_code_util__ml_gen_params_base_9_p_0(ml_backend__ml_code_util__ModuleInfo_8, ml_backend__ml_code_util__HeadVarNames_9, ml_backend__ml_code_util__HeadTypes_10, ml_backend__ml_code_util__TopFunctorModes_15, ml_backend__ml_code_util__PredOrFunc_12, ml_backend__ml_code_util__CodeModel_13, &ml_backend__ml_code_util__FuncParams_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_code_util__Var_16);
    }
    return ml_backend__ml_code_util__FuncParams_14;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_f_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
    MR_Word ml_backend__ml_code_util__conv0_LambdaHeadVar__2_21;

    {
      ml_backend__ml_code_util__conv0_LambdaHeadVar__2_21 = ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__900__1_1_f_0(((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_LambdaHeadVar__2_21));
    return ml_backend__ml_code_util__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_f_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_4,
  MR_Word ml_backend__ml_code_util__RttiProcId_5)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__FuncParams_6;
    MR_Word ml_backend__ml_code_util__HeadVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 8)));
    MR_Word ml_backend__ml_code_util__ArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 5)));
    MR_Word ml_backend__ml_code_util__TopFunctorModes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 9)));
    MR_Word ml_backend__ml_code_util__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_code_util__Detism_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 10)))) & (MR_Integer) 7);
    MR_Word ml_backend__ml_code_util__CodeModel_12;
    MR_Word ml_backend__ml_code_util__HeadVarNames_13;
    MR_Word ml_backend__ml_code_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_code_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 2)));
    MR_String ml_backend__ml_code_util__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 3)));
    MR_Integer ml_backend__ml_code_util__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_code_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 6)));
    MR_Integer ml_backend__ml_code_util__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 7)));
    MR_Word ml_backend__ml_code_util__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ml_backend__ml_code_util__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ml_backend__ml_code_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 11)));
    MR_Word ml_backend__ml_code_util__Var_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_code_util__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__ml_code_util__Var_18;

    {
      hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_code_util__Detism_11, &ml_backend__ml_code_util__CodeModel_12);
    }
    {
      ml_backend__ml_code_util__HeadVarNames_13 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_code_util_scalar_common_2[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0, (MR_Word) &ml_backend__ml_code_util_scalar_common_2[6], ml_backend__ml_code_util__HeadVars_7);
    }
    {
      ml_backend__ml_code_util__ml_gen_params_base_9_p_0(ml_backend__ml_code_util__ModuleInfo_4, ml_backend__ml_code_util__HeadVarNames_13, ml_backend__ml_code_util__ArgTypes_8, ml_backend__ml_code_util__TopFunctorModes_9, ml_backend__ml_code_util__PredOrFunc_10, ml_backend__ml_code_util__CodeModel_12, &ml_backend__ml_code_util__FuncParams_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_code_util__Var_18);
    }
    return ml_backend__ml_code_util__FuncParams_6;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_5_p_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
    MR_Word ml_backend__ml_code_util__conv0_MLDSVarName_6;

    {
      ml_backend__ml_code_util__conv0_MLDSVarName_6 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_MLDSVarName_6));
    return ml_backend__ml_code_util__wrapper_arg_2;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_5_p_0(
  MR_Word ml_backend__ml_code_util__PredId_6,
  MR_Integer ml_backend__ml_code_util__ProcId_7,
  MR_Word * ml_backend__ml_code_util__FuncParams_8,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_23,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_24)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__ModuleInfo_10;
    MR_Word ml_backend__ml_code_util__PredInfo_11;
    MR_Word ml_backend__ml_code_util__ProcInfo_12;
    MR_Word ml_backend__ml_code_util__VarSet_13;
    MR_Word ml_backend__ml_code_util__HeadVars_14;
    MR_Word ml_backend__ml_code_util__PredOrFunc_15;
    MR_Word ml_backend__ml_code_util__HeadTypes_16;
    MR_Word ml_backend__ml_code_util__HeadModes_17;
    MR_Word ml_backend__ml_code_util__CodeModel_18;
    MR_Word ml_backend__ml_code_util__HeadVarNames_19;
    MR_Word ml_backend__ml_code_util__PredModule_20;
    MR_String ml_backend__ml_code_util__PredName_21;
    MR_Integer ml_backend__ml_code_util__PredArity_22;
    MR_Word ml_backend__ml_code_util__Var_28;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_23, &ml_backend__ml_code_util__ModuleInfo_10);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__PredId_6, ml_backend__ml_code_util__ProcId_7, &ml_backend__ml_code_util__PredInfo_11, &ml_backend__ml_code_util__ProcInfo_12);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_code_util__ProcInfo_12, &ml_backend__ml_code_util__VarSet_13);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ml_backend__ml_code_util__ProcInfo_12, &ml_backend__ml_code_util__HeadVars_14);
    }
    {
      ml_backend__ml_code_util__PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_code_util__PredInfo_11);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_code_util__PredInfo_11, &ml_backend__ml_code_util__HeadTypes_16);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_code_util__ProcInfo_12, &ml_backend__ml_code_util__HeadModes_17);
    }
    {
      ml_backend__ml_code_util__CodeModel_18 = hlds__code_model__proc_info_interface_code_model_1_f_0(ml_backend__ml_code_util__ProcInfo_12);
    }
    {
      ml_backend__ml_code_util__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_28, 0) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_28, 1) = ((MR_Box) (ml_backend__ml_code_util__ml_gen_proc_params_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_28, 3) = ((MR_Box) (ml_backend__ml_code_util__VarSet_13));
    }
    {
      ml_backend__ml_code_util__HeadVarNames_19 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0, ml_backend__ml_code_util__Var_28, ml_backend__ml_code_util__HeadVars_14);
    }
    {
      ml_backend__ml_code_util__PredModule_20 = hlds__hlds_pred__pred_info_module_1_f_0(ml_backend__ml_code_util__PredInfo_11);
    }
    {
      ml_backend__ml_code_util__PredName_21 = hlds__hlds_pred__pred_info_name_1_f_0(ml_backend__ml_code_util__PredInfo_11);
    }
    {
      ml_backend__ml_code_util__PredArity_22 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ml_backend__ml_code_util__PredInfo_11);
    }
    {
      ml_backend__ml_code_util__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(ml_backend__ml_code_util__PredModule_20, ml_backend__ml_code_util__PredName_21, ml_backend__ml_code_util__PredArity_22);
    }
    if (ml_backend__ml_code_util__succeeded)
      {
        MR_Word ml_backend__ml_code_util__TopFunctorModes_40;
        MR_Word ml_backend__ml_code_util__Var_41;

        {
          check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__HeadModes_17, ml_backend__ml_code_util__HeadTypes_16, &ml_backend__ml_code_util__TopFunctorModes_40);
        }
        {
          ml_backend__ml_code_util__ml_gen_params_base_9_p_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__HeadVarNames_19, ml_backend__ml_code_util__HeadTypes_16, ml_backend__ml_code_util__TopFunctorModes_40, ml_backend__ml_code_util__PredOrFunc_15, ml_backend__ml_code_util__CodeModel_18, ml_backend__ml_code_util__FuncParams_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_code_util__Var_41);
        }
        *ml_backend__ml_code_util__STATE_VARIABLE_Info_24 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_23;
      }
    else
      {
        ml_backend__ml_code_util__ml_gen_params_8_p_0(ml_backend__ml_code_util__HeadVarNames_19, ml_backend__ml_code_util__HeadTypes_16, ml_backend__ml_code_util__HeadModes_17, ml_backend__ml_code_util__PredOrFunc_15, ml_backend__ml_code_util__CodeModel_18, ml_backend__ml_code_util__FuncParams_8, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_23, ml_backend__ml_code_util__STATE_VARIABLE_Info_24);
      }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_params_8_p_0(
  MR_Word ml_backend__ml_code_util__HeadVarNames_9,
  MR_Word ml_backend__ml_code_util__HeadTypes_10,
  MR_Word ml_backend__ml_code_util__HeadModes_11,
  MR_Word ml_backend__ml_code_util__PredOrFunc_12,
  MR_Word ml_backend__ml_code_util__CodeModel_13,
  MR_Word * ml_backend__ml_code_util__FuncParams_14,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_19,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_20)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__ModuleInfo_16;
    MR_Word ml_backend__ml_code_util__TopFunctorModes_17;
    MR_Word ml_backend__ml_code_util__MaybeInfo_18;
    MR_Word ml_backend__ml_code_util__Var_21;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_19, &ml_backend__ml_code_util__ModuleInfo_16);
    }
    {
      check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ml_backend__ml_code_util__ModuleInfo_16, ml_backend__ml_code_util__HeadModes_11, ml_backend__ml_code_util__HeadTypes_10, &ml_backend__ml_code_util__TopFunctorModes_17);
    }
    {
      ml_backend__ml_code_util__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_21, 0) = ((MR_Box) (ml_backend__ml_code_util__STATE_VARIABLE_Info_0_19));
    }
    {
      ml_backend__ml_code_util__ml_gen_params_base_9_p_0(ml_backend__ml_code_util__ModuleInfo_16, ml_backend__ml_code_util__HeadVarNames_9, ml_backend__ml_code_util__HeadTypes_10, ml_backend__ml_code_util__TopFunctorModes_17, ml_backend__ml_code_util__PredOrFunc_12, ml_backend__ml_code_util__CodeModel_13, ml_backend__ml_code_util__FuncParams_14, ml_backend__ml_code_util__Var_21, &ml_backend__ml_code_util__MaybeInfo_18);
    }
    if ((ml_backend__ml_code_util__MaybeInfo_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_params\'/8", (MR_String) "missing ml_gen_info");
          return;
        }
      }
    else
      *ml_backend__ml_code_util__STATE_VARIABLE_Info_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__MaybeInfo_18, (MR_Integer) 0)));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_3_f_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
    MR_Word ml_backend__ml_code_util__conv0_MLDSVarName_6;

    {
      ml_backend__ml_code_util__conv0_MLDSVarName_6 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_MLDSVarName_6));
    return ml_backend__ml_code_util__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_3_f_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_5,
  MR_Word ml_backend__ml_code_util__PredId_6,
  MR_Integer ml_backend__ml_code_util__ProcId_7)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__FuncParams_8;
    MR_Word ml_backend__ml_code_util__PredInfo_9;
    MR_Word ml_backend__ml_code_util__ProcInfo_10;
    MR_Word ml_backend__ml_code_util__VarSet_11;
    MR_Word ml_backend__ml_code_util__HeadVars_12;
    MR_Word ml_backend__ml_code_util__PredOrFunc_13;
    MR_Word ml_backend__ml_code_util__HeadTypes_14;
    MR_Word ml_backend__ml_code_util__HeadModes_15;
    MR_Word ml_backend__ml_code_util__CodeModel_16;
    MR_Word ml_backend__ml_code_util__HeadVarNames_17;
    MR_Word ml_backend__ml_code_util__Var_20;
    MR_Word ml_backend__ml_code_util__TopFunctorModes_32;
    MR_Word ml_backend__ml_code_util__Var_33;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_code_util__ModuleInfo_5, ml_backend__ml_code_util__PredId_6, ml_backend__ml_code_util__ProcId_7, &ml_backend__ml_code_util__PredInfo_9, &ml_backend__ml_code_util__ProcInfo_10);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_code_util__ProcInfo_10, &ml_backend__ml_code_util__VarSet_11);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ml_backend__ml_code_util__ProcInfo_10, &ml_backend__ml_code_util__HeadVars_12);
    }
    {
      ml_backend__ml_code_util__PredOrFunc_13 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_code_util__PredInfo_9);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_code_util__PredInfo_9, &ml_backend__ml_code_util__HeadTypes_14);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_code_util__ProcInfo_10, &ml_backend__ml_code_util__HeadModes_15);
    }
    {
      ml_backend__ml_code_util__CodeModel_16 = hlds__code_model__proc_info_interface_code_model_1_f_0(ml_backend__ml_code_util__ProcInfo_10);
    }
    {
      ml_backend__ml_code_util__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_20, 0) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_20, 1) = ((MR_Box) (ml_backend__ml_code_util__ml_gen_proc_params_3_f_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Var_20, 3) = ((MR_Box) (ml_backend__ml_code_util__VarSet_11));
    }
    {
      ml_backend__ml_code_util__HeadVarNames_17 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0, ml_backend__ml_code_util__Var_20, ml_backend__ml_code_util__HeadVars_12);
    }
    {
      check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ml_backend__ml_code_util__ModuleInfo_5, ml_backend__ml_code_util__HeadModes_15, ml_backend__ml_code_util__HeadTypes_14, &ml_backend__ml_code_util__TopFunctorModes_32);
    }
    {
      ml_backend__ml_code_util__ml_gen_params_base_9_p_0(ml_backend__ml_code_util__ModuleInfo_5, ml_backend__ml_code_util__HeadVarNames_17, ml_backend__ml_code_util__HeadTypes_14, ml_backend__ml_code_util__TopFunctorModes_32, ml_backend__ml_code_util__PredOrFunc_13, ml_backend__ml_code_util__CodeModel_16, &ml_backend__ml_code_util__FuncParams_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_code_util__Var_33);
    }
    return ml_backend__ml_code_util__FuncParams_8;
  }
}

static void MR_CALL 
ml_backend__ml_code_util__ml_gen_params_base_9_p_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_10,
  MR_Word ml_backend__ml_code_util__HeadVarNames_11,
  MR_Word ml_backend__ml_code_util__HeadTypes_12,
  MR_Word ml_backend__ml_code_util__HeadModes_13,
  MR_Word ml_backend__ml_code_util__PredOrFunc_14,
  MR_Word ml_backend__ml_code_util__CodeModel_15,
  MR_Word * ml_backend__ml_code_util__FuncParams_16,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_42,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_43)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__Globals_18;
    MR_Word ml_backend__ml_code_util__FuncArgs_26;
    MR_Word ml_backend__ml_code_util__RetTypes_32;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_code_util__ModuleInfo_10, &ml_backend__ml_code_util__Globals_18);
    }
    switch (ml_backend__ml_code_util__CodeModel_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_code_util__CopyOut_19;
          MR_Word ml_backend__ml_code_util__FuncArgs0_20;
          MR_Word ml_backend__ml_code_util__RetTypes0_21;

          {
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_code_util__Globals_18, (MR_Integer) 266, &ml_backend__ml_code_util__CopyOut_19);
          }
          {
            ml_backend__ml_code_util__ml_gen_arg_decls_9_p_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__HeadVarNames_11, ml_backend__ml_code_util__HeadTypes_12, ml_backend__ml_code_util__HeadModes_13, ml_backend__ml_code_util__CopyOut_19, &ml_backend__ml_code_util__FuncArgs0_20, &ml_backend__ml_code_util__RetTypes0_21, ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_42, ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_43);
          }
          switch (ml_backend__ml_code_util__CodeModel_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_code_util__TypeCtorInfo_60_60;
                MR_Word ml_backend__ml_code_util__TypeCtorInfo_61_61;
                MR_Word ml_backend__ml_code_util__ResultMode_23;
                MR_Word ml_backend__ml_code_util__ResultType_25;
                MR_Word ml_backend__ml_code_util__Var_55;
                MR_Word ml_backend__ml_code_util__Var_22;
                MR_Box ml_backend__ml_code_util__conv0_ResultMode_23;
                MR_Word ml_backend__ml_code_util__Var_24;
                MR_Box ml_backend__ml_code_util__conv1_ResultType_25;

                ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__RetTypes0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (ml_backend__ml_code_util__succeeded)
                  {
                    ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__PredOrFunc_14 == (MR_Integer) 1);
                    if (ml_backend__ml_code_util__succeeded)
                      {
                        ml_backend__ml_code_util__TypeCtorInfo_60_60 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_top_functor_mode_0;
                        {
                          parse_tree__prog_util__pred_args_to_func_args_3_p_0(ml_backend__ml_code_util__TypeCtorInfo_60_60, ml_backend__ml_code_util__HeadModes_13, &ml_backend__ml_code_util__Var_22, &ml_backend__ml_code_util__conv0_ResultMode_23);
                        }
                        ml_backend__ml_code_util__ResultMode_23 = ((MR_Word) ml_backend__ml_code_util__conv0_ResultMode_23);
                        ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__ResultMode_23 == (MR_Integer) 1);
                        if (ml_backend__ml_code_util__succeeded)
                          {
                            ml_backend__ml_code_util__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                            {
                              parse_tree__prog_util__pred_args_to_func_args_3_p_0(ml_backend__ml_code_util__TypeCtorInfo_61_61, ml_backend__ml_code_util__HeadTypes_12, &ml_backend__ml_code_util__Var_24, &ml_backend__ml_code_util__conv1_ResultType_25);
                            }
                            ml_backend__ml_code_util__ResultType_25 = ((MR_Word) ml_backend__ml_code_util__conv1_ResultType_25);
                            {
                              ml_backend__ml_code_util__Var_55 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__ResultType_25);
                            }
                            ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_55 == (MR_Integer) 1);
                          }
                      }
                  }
                if (ml_backend__ml_code_util__succeeded)
                  {
                    MR_Word ml_backend__ml_code_util__RetArg_27;
                    MR_Word ml_backend__ml_code_util__RetTypePtr_29;
                    MR_Box ml_backend__ml_code_util__conv2_RetArg_27;
                    MR_Word ml_backend__ml_code_util___RetArgName_28;
                    MR_Word ml_backend__ml_code_util___GCStmt_30;
                    MR_Word ml_backend__ml_code_util__RetType_31;

                    {
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__ml_code_util__FuncArgs0_20, &ml_backend__ml_code_util__FuncArgs_26, &ml_backend__ml_code_util__conv2_RetArg_27);
                    }
                    ml_backend__ml_code_util__RetArg_27 = ((MR_Word) ml_backend__ml_code_util__conv2_RetArg_27);
                    ml_backend__ml_code_util___RetArgName_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RetArg_27, (MR_Integer) 0)));
                    ml_backend__ml_code_util__RetTypePtr_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RetArg_27, (MR_Integer) 1)));
                    ml_backend__ml_code_util___GCStmt_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RetArg_27, (MR_Integer) 2)));
                    ml_backend__ml_code_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_code_util__RetTypePtr_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__RetTypePtr_29, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (ml_backend__ml_code_util__succeeded)
                      {
                        ml_backend__ml_code_util__RetType_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__RetTypePtr_29, (MR_Integer) 1)));
                        {
                          ml_backend__ml_code_util__RetTypes_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__RetTypes_32, 0) = ((MR_Box) (ml_backend__ml_code_util__RetType_31));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__RetTypes_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_params_base\'/9", (MR_String) "output mode function result doesn\'t have pointer type");
                          return;
                        }
                      }
                  }
                else
                  {
                    ml_backend__ml_code_util__FuncArgs_26 = ml_backend__ml_code_util__FuncArgs0_20;
                    ml_backend__ml_code_util__RetTypes_32 = ml_backend__ml_code_util__RetTypes0_21;
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                ml_backend__ml_code_util__FuncArgs_26 = ml_backend__ml_code_util__FuncArgs0_20;
                {
                  ml_backend__ml_code_util__RetTypes_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__RetTypes_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__RetTypes_32, 1) = ((MR_Box) (ml_backend__ml_code_util__RetTypes0_21));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_code_util__ContType_33;
          MR_Word ml_backend__ml_code_util__ContArg_36;
          MR_Word ml_backend__ml_code_util__NestedFunctions_41;
          MR_Word ml_backend__ml_code_util__CopyOut_70;
          MR_Word ml_backend__ml_code_util__FuncArgs0_71;
          MR_Word ml_backend__ml_code_util__RetTypes0_72;

          {
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_code_util__Globals_18, (MR_Integer) 267, &ml_backend__ml_code_util__CopyOut_70);
          }
          {
            ml_backend__ml_code_util__ml_gen_arg_decls_9_p_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__HeadVarNames_11, ml_backend__ml_code_util__HeadTypes_12, ml_backend__ml_code_util__HeadModes_13, ml_backend__ml_code_util__CopyOut_70, &ml_backend__ml_code_util__FuncArgs0_71, &ml_backend__ml_code_util__RetTypes0_72, ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_42, ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_43);
          }
          switch (ml_backend__ml_code_util__CopyOut_70) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_code_util__ContType_33 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[13]);
                ml_backend__ml_code_util__RetTypes_32 = ml_backend__ml_code_util__RetTypes0_72;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  ml_backend__ml_code_util__ContType_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ContType_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ContType_33, 1) = ((MR_Box) (ml_backend__ml_code_util__RetTypes0_72));
                }
                ml_backend__ml_code_util__RetTypes_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
          }
          {
            ml_backend__ml_code_util__ContArg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ContArg_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[14])));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ContArg_36, 1) = ((MR_Box) (ml_backend__ml_code_util__ContType_33));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ContArg_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_code_util__Globals_18, (MR_Integer) 265, &ml_backend__ml_code_util__NestedFunctions_41);
          }
          switch (ml_backend__ml_code_util__NestedFunctions_41) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_code_util__Var_49;

                {
                  ml_backend__ml_code_util__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_49, 0) = ((MR_Box) (ml_backend__ml_code_util__ContArg_36));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[16])));
                }
                {
                  ml_backend__ml_code_util__FuncArgs_26 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__ml_code_util__FuncArgs0_71, ml_backend__ml_code_util__Var_49);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_code_util__Var_52;

                {
                  ml_backend__ml_code_util__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_52, 0) = ((MR_Box) (ml_backend__ml_code_util__ContArg_36));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ml_backend__ml_code_util__FuncArgs_26 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__ml_code_util__FuncArgs0_71, ml_backend__ml_code_util__Var_52);
                }
              }
              break;
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_code_util__FuncParams_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__FuncArgs_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__RetTypes_32));
    }
  }
}

static void MR_CALL 
ml_backend__ml_code_util__ml_gen_arg_decls_9_p_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_10,
  MR_Word ml_backend__ml_code_util__HeadVars_11,
  MR_Word ml_backend__ml_code_util__HeadTypes_12,
  MR_Word ml_backend__ml_code_util__HeadModes_13,
  MR_Word ml_backend__ml_code_util__CopyOut_14,
  MR_Word * ml_backend__ml_code_util__FuncArgs_15,
  MR_Word * ml_backend__ml_code_util__RetTypes_16,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_28,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_29)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__HeadVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (ml_backend__ml_code_util__succeeded)
      {
        ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__HeadTypes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ml_backend__ml_code_util__succeeded)
          ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__HeadModes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (ml_backend__ml_code_util__succeeded)
      {
        *ml_backend__ml_code_util__FuncArgs_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_code_util__RetTypes_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_29 = ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_28;
      }
    else
      {
        MR_Word ml_backend__ml_code_util__Var_18;
        MR_Word ml_backend__ml_code_util__Vars_19;
        MR_Word ml_backend__ml_code_util__Type_20;
        MR_Word ml_backend__ml_code_util__Types_21;
        MR_Word ml_backend__ml_code_util__Mode_22;
        MR_Word ml_backend__ml_code_util__Modes_23;

        ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__HeadVars_11)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_code_util__succeeded)
          {
            ml_backend__ml_code_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVars_11, (MR_Integer) 0)));
            ml_backend__ml_code_util__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVars_11, (MR_Integer) 1)));
            ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__HeadTypes_12)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_code_util__succeeded)
              {
                ml_backend__ml_code_util__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadTypes_12, (MR_Integer) 0)));
                ml_backend__ml_code_util__Types_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadTypes_12, (MR_Integer) 1)));
                ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__HeadModes_13)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_code_util__succeeded)
                  {
                    ml_backend__ml_code_util__Mode_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadModes_13, (MR_Integer) 0)));
                    ml_backend__ml_code_util__Modes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadModes_13, (MR_Integer) 1)));
                  }
              }
          }
        if (ml_backend__ml_code_util__succeeded)
          {
            MR_Word ml_backend__ml_code_util__FuncArgs0_24;
            MR_Word ml_backend__ml_code_util__RetTypes0_25;
            MR_Word ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_30_30;

            {
              ml_backend__ml_code_util__ml_gen_arg_decls_9_p_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__Vars_19, ml_backend__ml_code_util__Types_21, ml_backend__ml_code_util__Modes_23, ml_backend__ml_code_util__CopyOut_14, &ml_backend__ml_code_util__FuncArgs0_24, &ml_backend__ml_code_util__RetTypes0_25, ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_28, &ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_30_30);
            }
            {
              MR_Word ml_backend__ml_code_util__Var_31;

              {
                ml_backend__ml_code_util__Var_31 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__Type_20);
              }
              ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_31 == (MR_Integer) 0);
            }
            if (!(ml_backend__ml_code_util__succeeded))
              ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Mode_22 == (MR_Integer) 2);
            if (ml_backend__ml_code_util__succeeded)
              {
                *ml_backend__ml_code_util__FuncArgs_15 = ml_backend__ml_code_util__FuncArgs0_24;
                *ml_backend__ml_code_util__RetTypes_16 = ml_backend__ml_code_util__RetTypes0_25;
                *ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_29 = ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_30_30;
              }
            else
              {
                ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Mode_22 == (MR_Integer) 1);
                if (ml_backend__ml_code_util__succeeded)
                  ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__CopyOut_14 == (MR_Integer) 1);
                if (ml_backend__ml_code_util__succeeded)
                  {
                    MR_Word ml_backend__ml_code_util__RetType_26;

                    {
                      ml_backend__ml_code_util__RetType_26 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__Type_20);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_code_util__RetTypes_16 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__RetType_26));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__RetTypes0_25));
                    }
                    *ml_backend__ml_code_util__FuncArgs_15 = ml_backend__ml_code_util__FuncArgs0_24;
                    *ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_29 = ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_30_30;
                  }
                else
                  {
                    MR_Word ml_backend__ml_code_util__FuncArg_27;
                    MR_Word ml_backend__ml_code_util__MLDS_Type_44;
                    MR_Word ml_backend__ml_code_util__MLDS_ArgType_45;
                    MR_Word ml_backend__ml_code_util__GCStmt_48;

                    {
                      ml_backend__ml_code_util__MLDS_Type_44 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__Type_20);
                    }
                    switch (ml_backend__ml_code_util__Mode_22) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ml_backend__ml_code_util__MLDS_ArgType_45 = ml_backend__ml_code_util__MLDS_Type_44;
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        {
                          ml_backend__ml_code_util__MLDS_ArgType_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MLDS_ArgType_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MLDS_ArgType_45, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_44));
                        }
                        break;
                    }
                    if ((ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        ml_backend__ml_code_util__GCStmt_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        *ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                    else
                      {
                        MR_Word ml_backend__ml_code_util__Info0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_30_30, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_code_util__Context_47;
                        MR_Word ml_backend__ml_code_util__Info_49;

                        {
                          mercury__term__context_init_1_p_0(&ml_backend__ml_code_util__Context_47);
                        }
                        {
                          ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(ml_backend__ml_code_util__Var_18, ml_backend__ml_code_util__Type_20, ml_backend__ml_code_util__Context_47, &ml_backend__ml_code_util__GCStmt_48, ml_backend__ml_code_util__Info0_46, &ml_backend__ml_code_util__Info_49);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_29 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Info_49));
                        }
                      }
                    {
                      ml_backend__ml_code_util__FuncArg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FuncArg_27, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_18));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FuncArg_27, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ArgType_45));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FuncArg_27, 2) = ((MR_Box) (ml_backend__ml_code_util__GCStmt_48));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_code_util__FuncArgs_15 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__FuncArg_27));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__FuncArgs0_24));
                    }
                    *ml_backend__ml_code_util__RetTypes_16 = ml_backend__ml_code_util__RetTypes0_25;
                  }
              }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_arg_decls\'/9", (MR_String) "length mismatch");
              return;
            }
          }
      }
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_java_mercury_enum_class_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__EnumClassDefn_2;
    MR_Word ml_backend__ml_code_util__InterfaceModuleName_3;
    MR_Word ml_backend__ml_code_util__EnumClass_4;
    MR_Word ml_backend__ml_code_util__Var_5;

    {
      ml_backend__ml_code_util__Var_5 = parse_tree__java_names__java_mercury_runtime_package_name_0_f_0();
    }
    {
      ml_backend__ml_code_util__InterfaceModuleName_3 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__Var_5);
    }
    {
      ml_backend__ml_code_util__EnumClass_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__EnumClass_4, 0) = ((MR_Box) (ml_backend__ml_code_util__InterfaceModuleName_3));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__EnumClass_4, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__EnumClass_4, 2) = ((MR_Box) ((MR_String) "MercuryEnum"));
    }
    {
      ml_backend__ml_code_util__EnumClassDefn_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__EnumClassDefn_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__EnumClassDefn_2, 1) = ((MR_Box) (ml_backend__ml_code_util__EnumClass_4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__EnumClassDefn_2, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__EnumClassDefn_2, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    return ml_backend__ml_code_util__EnumClassDefn_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__TypeInterfaceDefn_2;
    MR_Word ml_backend__ml_code_util__InterfaceModuleName_3;
    MR_Word ml_backend__ml_code_util__TypeInterface_4;
    MR_Word ml_backend__ml_code_util__Var_5;

    {
      ml_backend__ml_code_util__Var_5 = parse_tree__java_names__java_mercury_runtime_package_name_0_f_0();
    }
    {
      ml_backend__ml_code_util__InterfaceModuleName_3 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__Var_5);
    }
    {
      ml_backend__ml_code_util__TypeInterface_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__TypeInterface_4, 0) = ((MR_Box) (ml_backend__ml_code_util__InterfaceModuleName_3));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__TypeInterface_4, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__TypeInterface_4, 2) = ((MR_Box) ((MR_String) "MercuryType"));
    }
    {
      ml_backend__ml_code_util__TypeInterfaceDefn_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__TypeInterfaceDefn_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__TypeInterfaceDefn_2, 1) = ((MR_Box) (ml_backend__ml_code_util__TypeInterface_4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__TypeInterfaceDefn_2, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__TypeInterfaceDefn_2, 3) = ((MR_Box) ((MR_Integer) 2));
    }
    return ml_backend__ml_code_util__TypeInterfaceDefn_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(
  MR_Integer ml_backend__ml_code_util__Arity_3)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__BoxedTypes_4;
    MR_Word ml_backend__ml_code_util__TypeCtorInfo_9_9 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    MR_Word ml_backend__ml_code_util__TypeVarSet0_5;
    MR_Word ml_backend__ml_code_util__BoxedTypeVars_6;
    MR_Word ml_backend__ml_code_util__Var_8;
    MR_Word ml_backend__ml_code_util___TypeVarSet_7;

    {
      mercury__varset__init_1_p_0(ml_backend__ml_code_util__TypeCtorInfo_9_9, &ml_backend__ml_code_util__TypeVarSet0_5);
    }
    {
      mercury__varset__new_vars_4_p_0(ml_backend__ml_code_util__TypeCtorInfo_9_9, ml_backend__ml_code_util__Arity_3, &ml_backend__ml_code_util__BoxedTypeVars_6, ml_backend__ml_code_util__TypeVarSet0_5, &ml_backend__ml_code_util___TypeVarSet_7);
    }
    {
      ml_backend__ml_code_util__Var_8 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
    {
      parse_tree__prog_type__var_list_to_type_list_3_p_0(ml_backend__ml_code_util__Var_8, ml_backend__ml_code_util__BoxedTypeVars_6, &ml_backend__ml_code_util__BoxedTypes_4);
    }
    return ml_backend__ml_code_util__BoxedTypes_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_make_boxed_type_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__BoxedType_2;
    MR_Word ml_backend__ml_code_util__TypeCtorInfo_7_7 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    MR_Word ml_backend__ml_code_util__TypeVarSet0_3;
    MR_Word ml_backend__ml_code_util__BoxedTypeVar_4;
    MR_Word ml_backend__ml_code_util__Var_6;
    MR_Word ml_backend__ml_code_util___TypeVarSet_5;

    {
      mercury__varset__init_1_p_0(ml_backend__ml_code_util__TypeCtorInfo_7_7, &ml_backend__ml_code_util__TypeVarSet0_3);
    }
    {
      mercury__varset__new_var_3_p_0(ml_backend__ml_code_util__TypeCtorInfo_7_7, &ml_backend__ml_code_util__BoxedTypeVar_4, ml_backend__ml_code_util__TypeVarSet0_3, &ml_backend__ml_code_util___TypeVarSet_5);
    }
    {
      ml_backend__ml_code_util__Var_6 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
    {
      parse_tree__prog_type__var_to_type_3_p_0(ml_backend__ml_code_util__Var_6, ml_backend__ml_code_util__BoxedTypeVar_4, &ml_backend__ml_code_util__BoxedType_2);
    }
    return ml_backend__ml_code_util__BoxedType_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_char_type_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__HeadVar__1_1;
    MR_Word ml_backend__ml_code_util__Var_2;
    MR_Word ml_backend__ml_code_util__Var_5;
    MR_Word ml_backend__ml_code_util__Var_6;

    {
      ml_backend__ml_code_util__Var_2 = parse_tree__builtin_lib_types__char_type_0_f_0();
    }
    {
      ml_backend__ml_code_util__Var_6 = parse_tree__builtin_lib_types__char_type_0_f_0();
    }
    {
      ml_backend__ml_code_util__Var_5 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__ml_code_util__Var_6);
    }
    {
      ml_backend__ml_code_util__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_2));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[6])));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 2) = ((MR_Box) (ml_backend__ml_code_util__Var_5));
    }
    return ml_backend__ml_code_util__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_int_type_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__HeadVar__1_1;
    MR_Word ml_backend__ml_code_util__Var_2;
    MR_Word ml_backend__ml_code_util__Var_6;
    MR_Word ml_backend__ml_code_util__Var_7;

    {
      ml_backend__ml_code_util__Var_2 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    {
      ml_backend__ml_code_util__Var_7 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    {
      ml_backend__ml_code_util__Var_6 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__ml_code_util__Var_7);
    }
    {
      ml_backend__ml_code_util__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_2));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[5])));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 2) = ((MR_Box) (ml_backend__ml_code_util__Var_6));
    }
    return ml_backend__ml_code_util__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_string_type_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__HeadVar__1_1;
    MR_Word ml_backend__ml_code_util__Var_2;
    MR_Word ml_backend__ml_code_util__Var_5;
    MR_Word ml_backend__ml_code_util__Var_6;

    {
      ml_backend__ml_code_util__Var_2 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
    {
      ml_backend__ml_code_util__Var_6 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
    {
      ml_backend__ml_code_util__Var_5 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__ml_code_util__Var_6);
    }
    {
      ml_backend__ml_code_util__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_2));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[3])));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 2) = ((MR_Box) (ml_backend__ml_code_util__Var_5));
    }
    return ml_backend__ml_code_util__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_array_elem_type_1_f_0(
  MR_Word ml_backend__ml_code_util__ElemType_3)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__MLDS_Type_4;

    if (((MR_tag((MR_Word) ml_backend__ml_code_util__ElemType_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ml_backend__ml_code_util__ScalarElem_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ElemType_3, (MR_Integer) 0)));

        switch (ml_backend__ml_code_util__ScalarElem_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            ml_backend__ml_code_util__MLDS_Type_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
            break;
          case (MR_Integer) 1:
            ml_backend__ml_code_util__MLDS_Type_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
            break;
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_code_util__Var_10;
              MR_Word ml_backend__ml_code_util__Var_13;
              MR_Word ml_backend__ml_code_util__Var_14;

              {
                ml_backend__ml_code_util__Var_10 = parse_tree__builtin_lib_types__string_type_0_f_0();
              }
              {
                ml_backend__ml_code_util__Var_14 = parse_tree__builtin_lib_types__string_type_0_f_0();
              }
              {
                ml_backend__ml_code_util__Var_13 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__ml_code_util__Var_14);
              }
              {
                ml_backend__ml_code_util__MLDS_Type_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_4, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_10));
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[3])));
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_4, 2) = ((MR_Box) (ml_backend__ml_code_util__Var_13));
              }
            }
            break;
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "function \140ml_backend.ml_code_util.ml_gen_array_elem_type\'/1", (MR_String) "struct");
        }
      }
    return ml_backend__ml_code_util__MLDS_Type_4;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_type_3_p_0(
  MR_Word ml_backend__ml_code_util__Info_4,
  MR_Word ml_backend__ml_code_util__Type_5,
  MR_Word * ml_backend__ml_code_util__MLDS_Type_6)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__ModuleInfo_7;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__Info_4, &ml_backend__ml_code_util__ModuleInfo_7);
    }
    {
      *ml_backend__ml_code_util__MLDS_Type_6 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__Type_5);
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(
  MR_Word ml_backend__ml_code_util__IntTag_5,
  MR_Word ml_backend__ml_code_util__MerType_6,
  MR_Word ml_backend__ml_code_util__MLDS_Type_7)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__Rval_8;

    switch (MR_tag((MR_Word) ml_backend__ml_code_util__IntTag_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ml_backend__ml_code_util__Int_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__IntTag_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_code_util__Var_27;

          {
            ml_backend__ml_code_util__Var_27 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
          {
            ml_backend__ml_code_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_code_util__MerType_6, ml_backend__ml_code_util__Var_27);
          }
          if (ml_backend__ml_code_util__succeeded)
            {
              MR_Word ml_backend__ml_code_util__Var_24;

              {
                ml_backend__ml_code_util__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_24, 0) = ((MR_Box) (ml_backend__ml_code_util__Int_9));
              }
              {
                ml_backend__ml_code_util__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_24));
              }
            }
          else
            {
              MR_Word ml_backend__ml_code_util__Var_28;

              {
                ml_backend__ml_code_util__Var_28 = parse_tree__builtin_lib_types__char_type_0_f_0();
              }
              {
                ml_backend__ml_code_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_code_util__MerType_6, ml_backend__ml_code_util__Var_28);
              }
              if (ml_backend__ml_code_util__succeeded)
                {
                  MR_Word ml_backend__ml_code_util__Var_25;

                  {
                    ml_backend__ml_code_util__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_25, 1) = ((MR_Box) (ml_backend__ml_code_util__Int_9));
                  }
                  {
                    ml_backend__ml_code_util__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_25));
                  }
                }
              else
                {
                  MR_Word ml_backend__ml_code_util__Var_26;

                  {
                    ml_backend__ml_code_util__Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_26, 1) = ((MR_Box) (ml_backend__ml_code_util__Int_9));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_26, 2) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_7));
                  }
                  {
                    ml_backend__ml_code_util__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_26));
                  }
                }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned ml_backend__ml_code_util__UInt_10 = ((MR_Unsigned) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__IntTag_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_code_util__Var_23;

          {
            ml_backend__ml_code_util__Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Var_23, 0) = ((MR_Box) (ml_backend__ml_code_util__UInt_10));
          }
          {
            ml_backend__ml_code_util__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_23));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ml_backend__ml_code_util__Int8_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__IntTag_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_code_util__Var_22;

          {
            ml_backend__ml_code_util__Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_22, 1) = ((MR_Box) (ml_backend__ml_code_util__Int8_11));
          }
          {
            ml_backend__ml_code_util__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_22));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__IntTag_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ml_backend__ml_code_util__UInt8_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__IntTag_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_util__Var_21;

              {
                ml_backend__ml_code_util__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_21, 1) = ((MR_Box) (ml_backend__ml_code_util__UInt8_12));
              }
              {
                ml_backend__ml_code_util__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_21));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ml_backend__ml_code_util__Int16_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__IntTag_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_util__Var_20;

              {
                ml_backend__ml_code_util__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_20, 1) = ((MR_Box) (ml_backend__ml_code_util__Int16_13));
              }
              {
                ml_backend__ml_code_util__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_20));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ml_backend__ml_code_util__UInt16_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__IntTag_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_util__Var_19;

              {
                ml_backend__ml_code_util__Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_19, 1) = ((MR_Box) (ml_backend__ml_code_util__UInt16_14));
              }
              {
                ml_backend__ml_code_util__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_19));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer ml_backend__ml_code_util__Int32_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__IntTag_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_util__Var_18;

              {
                ml_backend__ml_code_util__Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_18, 1) = ((MR_Box) (ml_backend__ml_code_util__Int32_15));
              }
              {
                ml_backend__ml_code_util__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_18));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer ml_backend__ml_code_util__UInt32_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__IntTag_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_util__Var_17;

              {
                ml_backend__ml_code_util__Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_17, 1) = ((MR_Box) (ml_backend__ml_code_util__UInt32_16));
              }
              {
                ml_backend__ml_code_util__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Rval_8, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_17));
              }
            }
            break;
        }
        break;
    }
    return ml_backend__ml_code_util__Rval_8;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_not_1_f_0(
  MR_Word ml_backend__ml_code_util__X_3)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__HeadVar__2_2;

    {
      ml_backend__ml_code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_4[2])));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadVar__2_2, 2) = ((MR_Box) (ml_backend__ml_code_util__X_3));
    }
    return ml_backend__ml_code_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_and_2_f_0(
  MR_Word ml_backend__ml_code_util__X_4,
  MR_Word ml_backend__ml_code_util__Y_5)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_code_util__X_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__X_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ml_backend__ml_code_util__HeadVar__3_3;
    MR_Word ml_backend__ml_code_util__Var_6;

    if (ml_backend__ml_code_util__succeeded)
      {
        ml_backend__ml_code_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__X_4, (MR_Integer) 1)));
        ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (ml_backend__ml_code_util__succeeded)
      ml_backend__ml_code_util__HeadVar__3_3 = ml_backend__ml_code_util__Y_5;
    else
      {
        MR_Word ml_backend__ml_code_util__Var_7;

        ml_backend__ml_code_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_code_util__Y_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Y_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ml_backend__ml_code_util__succeeded)
          {
            ml_backend__ml_code_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Y_5, (MR_Integer) 1)));
            ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (ml_backend__ml_code_util__succeeded)
          ml_backend__ml_code_util__HeadVar__3_3 = ml_backend__ml_code_util__X_4;
        else
          {
            {
              ml_backend__ml_code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadVar__3_3, 2) = ((MR_Box) (ml_backend__ml_code_util__X_4));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadVar__3_3, 3) = ((MR_Box) (ml_backend__ml_code_util__Y_5));
            }
          }
      }
    return ml_backend__ml_code_util__HeadVar__3_3;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_combine_conj_8_p_0(
  MR_Word ml_backend__ml_code_util__FirstCodeModel_9,
  MR_Word ml_backend__ml_code_util__Context_10,
  MR_Word ml_backend__ml_code_util__DoGenFirst_11,
  MR_Word ml_backend__ml_code_util__DoGenRest_12,
  MR_Word * ml_backend__ml_code_util__Decls_13,
  MR_Word * ml_backend__ml_code_util__Stmts_14,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_29,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_30)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    switch (ml_backend__ml_code_util__FirstCodeModel_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_code_util__FirstDecls_16;
          MR_Word ml_backend__ml_code_util__FirstStmts_17;
          MR_Word ml_backend__ml_code_util__RestDecls_18;
          MR_Word ml_backend__ml_code_util__RestStmts_19;
          MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_48_48;
          void MR_CALL (* ml_backend__ml_code_util__func_0)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DoGenFirst_11, (MR_Integer) 1)));
          MR_Box ml_backend__ml_code_util__conv3_FirstDecls_16;
          MR_Box ml_backend__ml_code_util__conv2_FirstStmts_17;
          MR_Box ml_backend__ml_code_util__conv1_STATE_VARIABLE_Info_48_48;
          void MR_CALL (* ml_backend__ml_code_util__func_4)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *);
          MR_Box ml_backend__ml_code_util__conv7_RestDecls_18;
          MR_Box ml_backend__ml_code_util__conv6_RestStmts_19;
          MR_Box ml_backend__ml_code_util__conv5_STATE_VARIABLE_Info_30;

          {
            ml_backend__ml_code_util__func_0(((MR_Box) ml_backend__ml_code_util__DoGenFirst_11), &ml_backend__ml_code_util__conv3_FirstDecls_16, &ml_backend__ml_code_util__conv2_FirstStmts_17, ((MR_Box) (ml_backend__ml_code_util__STATE_VARIABLE_Info_0_29)), &ml_backend__ml_code_util__conv1_STATE_VARIABLE_Info_48_48);
          }
          ml_backend__ml_code_util__FirstDecls_16 = ((MR_Word) ml_backend__ml_code_util__conv3_FirstDecls_16);
          ml_backend__ml_code_util__FirstStmts_17 = ((MR_Word) ml_backend__ml_code_util__conv2_FirstStmts_17);
          ml_backend__ml_code_util__STATE_VARIABLE_Info_48_48 = ((MR_Word) ml_backend__ml_code_util__conv1_STATE_VARIABLE_Info_48_48);
          ml_backend__ml_code_util__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DoGenRest_12, (MR_Integer) 1)));
          {
            ml_backend__ml_code_util__func_4(((MR_Box) ml_backend__ml_code_util__DoGenRest_12), &ml_backend__ml_code_util__conv7_RestDecls_18, &ml_backend__ml_code_util__conv6_RestStmts_19, ((MR_Box) (ml_backend__ml_code_util__STATE_VARIABLE_Info_48_48)), &ml_backend__ml_code_util__conv5_STATE_VARIABLE_Info_30);
          }
          ml_backend__ml_code_util__RestDecls_18 = ((MR_Word) ml_backend__ml_code_util__conv7_RestDecls_18);
          ml_backend__ml_code_util__RestStmts_19 = ((MR_Word) ml_backend__ml_code_util__conv6_RestStmts_19);
          *ml_backend__ml_code_util__STATE_VARIABLE_Info_30 = ((MR_Word) ml_backend__ml_code_util__conv5_STATE_VARIABLE_Info_30);
          {
            *ml_backend__ml_code_util__Decls_13 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_code_util__FirstDecls_16, ml_backend__ml_code_util__RestDecls_18);
          }
          {
            *ml_backend__ml_code_util__Stmts_14 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_code_util__FirstStmts_17, ml_backend__ml_code_util__RestStmts_19);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ml_backend__ml_code_util__RestFuncLabel_23;
          MR_Word ml_backend__ml_code_util__RestFuncLabelRval_24;
          MR_Word ml_backend__ml_code_util__EnvPtrRval_25;
          MR_Word ml_backend__ml_code_util__SuccessCont_26;
          MR_Word ml_backend__ml_code_util__RestStmt_27;
          MR_Word ml_backend__ml_code_util__RestFunc_28;
          MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_32_32;
          MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_35_35;
          MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_36_36;
          MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_37_37;
          MR_Word ml_backend__ml_code_util__Var_39;
          MR_Word ml_backend__ml_code_util__Var_40;
          MR_Word ml_backend__ml_code_util__FirstDecls_54;
          MR_Word ml_backend__ml_code_util__RestDecls_56;
          MR_Word ml_backend__ml_code_util__RestStmts_57;
          void MR_CALL (* ml_backend__ml_code_util__func_8)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *);
          MR_Box ml_backend__ml_code_util__conv11_FirstDecls_54;
          MR_Box ml_backend__ml_code_util__conv10_Stmts_14;
          MR_Box ml_backend__ml_code_util__conv9_STATE_VARIABLE_Info_36_36;
          void MR_CALL (* ml_backend__ml_code_util__func_12)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *);
          MR_Box ml_backend__ml_code_util__conv15_RestDecls_56;
          MR_Box ml_backend__ml_code_util__conv14_RestStmts_57;
          MR_Box ml_backend__ml_code_util__conv13_STATE_VARIABLE_Info_30;
          MR_Word ml_backend__ml_code_util__SingleStmt_67;
          MR_Word ml_backend__ml_code_util__Var_68;

          {
            ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_code_util__RestFuncLabel_23, &ml_backend__ml_code_util__RestFuncLabelRval_24, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_29, &ml_backend__ml_code_util__STATE_VARIABLE_Info_32_32);
          }
          {
            ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_32_32, &ml_backend__ml_code_util__EnvPtrRval_25);
          }
          {
            ml_backend__ml_code_util__SuccessCont_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccessCont_26, 0) = ((MR_Box) (ml_backend__ml_code_util__RestFuncLabelRval_24));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccessCont_26, 1) = ((MR_Box) (ml_backend__ml_code_util__EnvPtrRval_25));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccessCont_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccessCont_26, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(ml_backend__ml_code_util__SuccessCont_26, ml_backend__ml_code_util__STATE_VARIABLE_Info_32_32, &ml_backend__ml_code_util__STATE_VARIABLE_Info_35_35);
          }
          ml_backend__ml_code_util__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DoGenFirst_11, (MR_Integer) 1)));
          {
            ml_backend__ml_code_util__func_8(((MR_Box) ml_backend__ml_code_util__DoGenFirst_11), &ml_backend__ml_code_util__conv11_FirstDecls_54, &ml_backend__ml_code_util__conv10_Stmts_14, ((MR_Box) (ml_backend__ml_code_util__STATE_VARIABLE_Info_35_35)), &ml_backend__ml_code_util__conv9_STATE_VARIABLE_Info_36_36);
          }
          ml_backend__ml_code_util__FirstDecls_54 = ((MR_Word) ml_backend__ml_code_util__conv11_FirstDecls_54);
          *ml_backend__ml_code_util__Stmts_14 = ((MR_Word) ml_backend__ml_code_util__conv10_Stmts_14);
          ml_backend__ml_code_util__STATE_VARIABLE_Info_36_36 = ((MR_Word) ml_backend__ml_code_util__conv9_STATE_VARIABLE_Info_36_36);
          {
            ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_36_36, &ml_backend__ml_code_util__STATE_VARIABLE_Info_37_37);
          }
          ml_backend__ml_code_util__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DoGenRest_12, (MR_Integer) 1)));
          {
            ml_backend__ml_code_util__func_12(((MR_Box) ml_backend__ml_code_util__DoGenRest_12), &ml_backend__ml_code_util__conv15_RestDecls_56, &ml_backend__ml_code_util__conv14_RestStmts_57, ((MR_Box) (ml_backend__ml_code_util__STATE_VARIABLE_Info_37_37)), &ml_backend__ml_code_util__conv13_STATE_VARIABLE_Info_30);
          }
          ml_backend__ml_code_util__RestDecls_56 = ((MR_Word) ml_backend__ml_code_util__conv15_RestDecls_56);
          ml_backend__ml_code_util__RestStmts_57 = ((MR_Word) ml_backend__ml_code_util__conv14_RestStmts_57);
          *ml_backend__ml_code_util__STATE_VARIABLE_Info_30 = ((MR_Word) ml_backend__ml_code_util__conv13_STATE_VARIABLE_Info_30);
          ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__RestDecls_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (ml_backend__ml_code_util__succeeded)
            {
              ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__RestStmts_57)) == (MR_mktag((MR_Integer) 1)));
              if (ml_backend__ml_code_util__succeeded)
                {
                  ml_backend__ml_code_util__SingleStmt_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__RestStmts_57, (MR_Integer) 0)));
                  ml_backend__ml_code_util__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__RestStmts_57, (MR_Integer) 1)));
                  ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
            }
          if (ml_backend__ml_code_util__succeeded)
            ml_backend__ml_code_util__RestStmt_27 = ml_backend__ml_code_util__SingleStmt_67;
          else
            {
              ml_backend__ml_code_util__RestStmt_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RestStmt_27, 0) = ((MR_Box) (ml_backend__ml_code_util__RestDecls_56));
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RestStmt_27, 1) = ((MR_Box) (ml_backend__ml_code_util__RestStmts_57));
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RestStmt_27, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_10));
            }
          {
            ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(*ml_backend__ml_code_util__STATE_VARIABLE_Info_30, ml_backend__ml_code_util__RestFuncLabel_23, ml_backend__ml_code_util__Context_10, ml_backend__ml_code_util__RestStmt_27, &ml_backend__ml_code_util__RestFunc_28);
          }
          {
            ml_backend__ml_code_util__Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_40, 1) = ((MR_Box) (ml_backend__ml_code_util__RestFunc_28));
          }
          {
            ml_backend__ml_code_util__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_39, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_40));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            *ml_backend__ml_code_util__Decls_13 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_code_util__FirstDecls_54, ml_backend__ml_code_util__Var_39);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_code_util__Succeeded_20;
          MR_Word ml_backend__ml_code_util__IfBody_21;
          MR_Word ml_backend__ml_code_util__IfStmt_22;
          MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_42_42;
          MR_Word ml_backend__ml_code_util__Var_44;
          MR_Word ml_backend__ml_code_util__Var_46;
          MR_Word ml_backend__ml_code_util__FirstDecls_50;
          MR_Word ml_backend__ml_code_util__FirstStmts_51;
          MR_Word ml_backend__ml_code_util__RestDecls_52;
          MR_Word ml_backend__ml_code_util__RestStmts_53;
          MR_Word ml_backend__ml_code_util__SucceededLval_71;
          void MR_CALL (* ml_backend__ml_code_util__func_16)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DoGenFirst_11, (MR_Integer) 1)));
          MR_Box ml_backend__ml_code_util__conv19_FirstDecls_50;
          MR_Box ml_backend__ml_code_util__conv18_FirstStmts_51;
          MR_Box ml_backend__ml_code_util__conv17_STATE_VARIABLE_Info_42_42;
          void MR_CALL (* ml_backend__ml_code_util__func_20)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *);
          MR_Box ml_backend__ml_code_util__conv23_RestDecls_52;
          MR_Box ml_backend__ml_code_util__conv22_RestStmts_53;
          MR_Box ml_backend__ml_code_util__conv21_STATE_VARIABLE_Info_30;
          MR_Word ml_backend__ml_code_util__SingleStmt_76;
          MR_Word ml_backend__ml_code_util__Var_77;

          {
            ml_backend__ml_code_util__func_16(((MR_Box) ml_backend__ml_code_util__DoGenFirst_11), &ml_backend__ml_code_util__conv19_FirstDecls_50, &ml_backend__ml_code_util__conv18_FirstStmts_51, ((MR_Box) (ml_backend__ml_code_util__STATE_VARIABLE_Info_0_29)), &ml_backend__ml_code_util__conv17_STATE_VARIABLE_Info_42_42);
          }
          ml_backend__ml_code_util__FirstDecls_50 = ((MR_Word) ml_backend__ml_code_util__conv19_FirstDecls_50);
          ml_backend__ml_code_util__FirstStmts_51 = ((MR_Word) ml_backend__ml_code_util__conv18_FirstStmts_51);
          ml_backend__ml_code_util__STATE_VARIABLE_Info_42_42 = ((MR_Word) ml_backend__ml_code_util__conv17_STATE_VARIABLE_Info_42_42);
          {
            ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_42_42, &ml_backend__ml_code_util__SucceededLval_71);
          }
          {
            ml_backend__ml_code_util__Succeeded_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Succeeded_20, 0) = ((MR_Box) (ml_backend__ml_code_util__SucceededLval_71));
          }
          ml_backend__ml_code_util__func_20 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DoGenRest_12, (MR_Integer) 1)));
          {
            ml_backend__ml_code_util__func_20(((MR_Box) ml_backend__ml_code_util__DoGenRest_12), &ml_backend__ml_code_util__conv23_RestDecls_52, &ml_backend__ml_code_util__conv22_RestStmts_53, ((MR_Box) (ml_backend__ml_code_util__STATE_VARIABLE_Info_42_42)), &ml_backend__ml_code_util__conv21_STATE_VARIABLE_Info_30);
          }
          ml_backend__ml_code_util__RestDecls_52 = ((MR_Word) ml_backend__ml_code_util__conv23_RestDecls_52);
          ml_backend__ml_code_util__RestStmts_53 = ((MR_Word) ml_backend__ml_code_util__conv22_RestStmts_53);
          *ml_backend__ml_code_util__STATE_VARIABLE_Info_30 = ((MR_Word) ml_backend__ml_code_util__conv21_STATE_VARIABLE_Info_30);
          ml_backend__ml_code_util__Var_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (ml_backend__ml_code_util__succeeded)
            {
              ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__RestStmts_53)) == (MR_mktag((MR_Integer) 1)));
              if (ml_backend__ml_code_util__succeeded)
                {
                  ml_backend__ml_code_util__SingleStmt_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__RestStmts_53, (MR_Integer) 0)));
                  ml_backend__ml_code_util__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__RestStmts_53, (MR_Integer) 1)));
                  ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
            }
          if (ml_backend__ml_code_util__succeeded)
            ml_backend__ml_code_util__IfBody_21 = ml_backend__ml_code_util__SingleStmt_76;
          else
            {
              ml_backend__ml_code_util__IfBody_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__IfBody_21, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_44));
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__IfBody_21, 1) = ((MR_Box) (ml_backend__ml_code_util__RestStmts_53));
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__IfBody_21, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_10));
            }
          {
            ml_backend__ml_code_util__IfStmt_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__IfStmt_22, 0) = ((MR_Box) (ml_backend__ml_code_util__Succeeded_20));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__IfStmt_22, 1) = ((MR_Box) (ml_backend__ml_code_util__IfBody_21));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__IfStmt_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__IfStmt_22, 3) = ((MR_Box) (ml_backend__ml_code_util__Context_10));
          }
          {
            *ml_backend__ml_code_util__Decls_13 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_code_util__FirstDecls_50, ml_backend__ml_code_util__RestDecls_52);
          }
          {
            ml_backend__ml_code_util__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_46, 0) = ((MR_Box) (ml_backend__ml_code_util__IfStmt_22));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            *ml_backend__ml_code_util__Stmts_14 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_code_util__FirstStmts_51, ml_backend__ml_code_util__Var_46);
          }
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(
  MR_Word ml_backend__ml_code_util__Info_3,
  MR_Word * ml_backend__ml_code_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__EnvPtrLval_4;
    MR_Word ml_backend__ml_code_util__ModuleName_12;
    MR_Word ml_backend__ml_code_util__MLDS_ModuleName_13;
    MR_Word ml_backend__ml_code_util__MLDS_Var_14;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__Info_3, &ml_backend__ml_code_util__ModuleName_12);
    }
    {
      ml_backend__ml_code_util__MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_12);
    }
    {
      ml_backend__ml_code_util__MLDS_Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_14, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_13));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_14, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[12])));
    }
    {
      ml_backend__ml_code_util__EnvPtrLval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__EnvPtrLval_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__EnvPtrLval_4, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_14));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__EnvPtrLval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_code_util__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_code_util__EnvPtrLval_4));
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0(
  MR_Word ml_backend__ml_code_util__MaybeParams_6,
  MR_Integer * ml_backend__ml_code_util__FuncLabel_7,
  MR_Word * ml_backend__ml_code_util__FuncLabelRval_8,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_21,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_22)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__ModuleInfo_10;
    MR_Word ml_backend__ml_code_util__PredId_11;
    MR_Integer ml_backend__ml_code_util__ProcId_12;
    MR_Word ml_backend__ml_code_util__PredLabel_13;
    MR_Word ml_backend__ml_code_util__PredModule_14;
    MR_Word ml_backend__ml_code_util__UseNestedFuncs_15;
    MR_Word ml_backend__ml_code_util__Signature_17;
    MR_Word ml_backend__ml_code_util__ProcLabel_19;
    MR_Word ml_backend__ml_code_util__QualProcLabel_20;
    MR_Word ml_backend__ml_code_util__Var_27;
    MR_Word ml_backend__ml_code_util__Var_28;
    MR_Word ml_backend__ml_code_util__RttiProcLabel_34;

    {
      ml_backend__ml_gen_info__ml_gen_info_new_func_label_3_p_0(ml_backend__ml_code_util__FuncLabel_7, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_21, ml_backend__ml_code_util__STATE_VARIABLE_Info_22);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_code_util__STATE_VARIABLE_Info_22, &ml_backend__ml_code_util__ModuleInfo_10);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(*ml_backend__ml_code_util__STATE_VARIABLE_Info_22, &ml_backend__ml_code_util__PredId_11);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(*ml_backend__ml_code_util__STATE_VARIABLE_Info_22, &ml_backend__ml_code_util__ProcId_12);
    }
    {
      ml_backend__ml_code_util__RttiProcLabel_34 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__PredId_11, ml_backend__ml_code_util__ProcId_12);
    }
    {
      ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__RttiProcLabel_34, &ml_backend__ml_code_util__PredLabel_13, &ml_backend__ml_code_util__PredModule_14);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(*ml_backend__ml_code_util__STATE_VARIABLE_Info_22, &ml_backend__ml_code_util__UseNestedFuncs_15);
    }
    if ((ml_backend__ml_code_util__MaybeParams_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ml_backend__ml_code_util__ArgTypes_18;

        switch (ml_backend__ml_code_util__UseNestedFuncs_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_code_util__ArgTypes_18 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[11]);
            }
            break;
          case (MR_Integer) 1:
            ml_backend__ml_code_util__ArgTypes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        {
          ml_backend__ml_code_util__Signature_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Signature_17, 0) = ((MR_Box) (ml_backend__ml_code_util__ArgTypes_18));
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Signature_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      {
        MR_Word ml_backend__ml_code_util__Params_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__MaybeParams_6, (MR_Integer) 0)));

        {
          ml_backend__ml_code_util__Signature_17 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__ml_code_util__Params_16);
        }
      }
    {
      ml_backend__ml_code_util__ProcLabel_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ProcLabel_19, 0) = ((MR_Box) (ml_backend__ml_code_util__PredLabel_13));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ProcLabel_19, 1) = ((MR_Box) (ml_backend__ml_code_util__ProcId_12));
    }
    {
      ml_backend__ml_code_util__QualProcLabel_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__QualProcLabel_20, 0) = ((MR_Box) (ml_backend__ml_code_util__PredModule_14));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__QualProcLabel_20, 1) = ((MR_Box) (ml_backend__ml_code_util__ProcLabel_19));
    }
    {
      ml_backend__ml_code_util__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_28, 0) = ((MR_Box) (ml_backend__ml_code_util__QualProcLabel_20));
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_28, 1) = ((MR_Box) (*ml_backend__ml_code_util__FuncLabel_7));
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_28, 2) = ((MR_Box) (ml_backend__ml_code_util__Signature_17));
    }
    {
      ml_backend__ml_code_util__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Var_27, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_code_util__FuncLabelRval_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Var_27));
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(
  MR_Word ml_backend__ml_code_util__Info_6,
  MR_Integer ml_backend__ml_code_util__FuncLabel_7,
  MR_Word ml_backend__ml_code_util__Context_8,
  MR_Word ml_backend__ml_code_util__Stmt_9,
  MR_Word * ml_backend__ml_code_util__Func_10)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__UseNested_11;
    MR_Word ml_backend__ml_code_util__FuncParams_12;

    {
      ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(ml_backend__ml_code_util__Info_6, &ml_backend__ml_code_util__UseNested_11);
    }
    switch (ml_backend__ml_code_util__UseNested_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__ml_code_util__FuncParams_12 = (MR_Word) &ml_backend__ml_code_util_scalar_common_1[9];
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_code_util__FuncParams_12 = (MR_Word) &ml_backend__ml_code_util_scalar_common_1[10];
        }
        break;
    }
    {
      ml_backend__ml_code_util__ml_gen_label_func_6_p_0(ml_backend__ml_code_util__Info_6, ml_backend__ml_code_util__FuncLabel_7, ml_backend__ml_code_util__FuncParams_12, ml_backend__ml_code_util__Context_8, ml_backend__ml_code_util__Stmt_9, ml_backend__ml_code_util__Func_10);
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_label_func_6_p_0(
  MR_Word ml_backend__ml_code_util__Info_7,
  MR_Integer ml_backend__ml_code_util__FuncLabel_8,
  MR_Word ml_backend__ml_code_util__FuncParams_9,
  MR_Word ml_backend__ml_code_util__Context_10,
  MR_Word ml_backend__ml_code_util__Stmt_11,
  MR_Word * ml_backend__ml_code_util__Func_12)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__ModuleInfo_13;
    MR_Word ml_backend__ml_code_util__PredId_14;
    MR_Integer ml_backend__ml_code_util__ProcId_15;
    MR_Word ml_backend__ml_code_util__FuncName_16;
    MR_Word ml_backend__ml_code_util__DeclFlags_17;
    MR_Word ml_backend__ml_code_util__Body_19;
    MR_Word ml_backend__ml_code_util__EnvVarNames_21;
    MR_Word ml_backend__ml_code_util__Var_22;
    MR_Word ml_backend__ml_code_util__Var_31;
    MR_Word ml_backend__ml_code_util__MLDS_PredLabel_38;
    MR_Word ml_backend__ml_code_util__RttiProcLabel_44;
    MR_Word ml_backend__ml_code_util___MLDS_ModuleName_30;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__Info_7, &ml_backend__ml_code_util__ModuleInfo_13);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_code_util__Info_7, &ml_backend__ml_code_util__PredId_14);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_code_util__Info_7, &ml_backend__ml_code_util__ProcId_15);
    }
    {
      ml_backend__ml_code_util__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_31, 0) = ((MR_Box) (ml_backend__ml_code_util__FuncLabel_8));
    }
    {
      ml_backend__ml_code_util__RttiProcLabel_44 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ml_backend__ml_code_util__ModuleInfo_13, ml_backend__ml_code_util__PredId_14, ml_backend__ml_code_util__ProcId_15);
    }
    {
      ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__ml_code_util__ModuleInfo_13, ml_backend__ml_code_util__RttiProcLabel_44, &ml_backend__ml_code_util__MLDS_PredLabel_38, &ml_backend__ml_code_util___MLDS_ModuleName_30);
    }
    {
      ml_backend__ml_code_util__FuncName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FuncName_16, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_PredLabel_38));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FuncName_16, 1) = ((MR_Box) (ml_backend__ml_code_util__ProcId_15));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FuncName_16, 2) = ((MR_Box) (ml_backend__ml_code_util__Var_31));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FuncName_16, 3) = ((MR_Box) (ml_backend__ml_code_util__PredId_14));
    }
    {
      ml_backend__ml_code_util__DeclFlags_17 = ml_backend__mlds__init_function_decl_flags_2_f_0((MR_Integer) 2, (MR_Integer) 1);
    }
    {
      ml_backend__ml_code_util__Body_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Body_19, 0) = ((MR_Box) (ml_backend__ml_code_util__Stmt_11));
    }
    {
      ml_backend__ml_code_util__EnvVarNames_21 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    ml_backend__ml_code_util__Var_22 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_code_util__FuncName_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_code_util__Func_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Var_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Context_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_code_util__DeclFlags_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_code_util__FuncParams_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_code_util__Body_19));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_code_util__EnvVarNames_21));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_5,
  MR_Word ml_backend__ml_code_util__RttiProcLabel_6,
  MR_Word * ml_backend__ml_code_util__MLDS_PredLabel_7,
  MR_Word * ml_backend__ml_code_util__MLDS_Module_8)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_code_util__ThisModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_code_util__PredModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 2)));
    MR_String ml_backend__ml_code_util__PredName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 3)));
    MR_Integer ml_backend__ml_code_util__PredArity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_code_util__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 6)));
    MR_Integer ml_backend__ml_code_util__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_code_util__Detism_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 10)))) & (MR_Integer) 7);
    MR_Word ml_backend__ml_code_util__PredIsImported_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ml_backend__ml_code_util__Origin_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 11)));
    MR_Word ml_backend__ml_code_util__DefiningModule_31;
    MR_Word ml_backend__ml_code_util___ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_code_util___HeadVarsWithNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 8)));
    MR_Word ml_backend__ml_code_util___TopFunctorModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 9)));
    MR_Word ml_backend__ml_code_util___PredIsPseudoImported_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ml_backend__ml_code_util___ProcIsExported_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_code_util___ProcIsImported_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__ml_code_util__SpecialPred_25;
    MR_Word ml_backend__ml_code_util__TypeCtor_26;

    ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__Origin_22)) == (MR_mktag((MR_Integer) 0)));
    if (ml_backend__ml_code_util__succeeded)
      {
        ml_backend__ml_code_util__SpecialPred_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Origin_22, (MR_Integer) 0)));
        ml_backend__ml_code_util__TypeCtor_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Origin_22, (MR_Integer) 1)));
        {
          MR_Integer ml_backend__ml_code_util__TypeArity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__TypeCtor_26, (MR_Integer) 1)));
          MR_String ml_backend__ml_code_util__TypeName_29;
          MR_Word ml_backend__ml_code_util__TypeModule_30;
          MR_Word ml_backend__ml_code_util__TypeCtorSymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__TypeCtor_26, (MR_Integer) 0)));

          if (((MR_tag((MR_Word) ml_backend__ml_code_util__TypeCtorSymName_27)) == (MR_mktag((MR_Integer) 1))))
            {
              ml_backend__ml_code_util__TypeModule_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__TypeCtorSymName_27, (MR_Integer) 0)));
              ml_backend__ml_code_util__TypeName_29 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__TypeCtorSymName_27, (MR_Integer) 1)));
              ml_backend__ml_code_util__succeeded = MR_TRUE;
            }
          else
            {
              ml_backend__ml_code_util__TypeName_29 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__TypeCtorSymName_27, (MR_Integer) 0)));
              {
                ml_backend__ml_code_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(ml_backend__ml_code_util__TypeCtor_26);
              }
              if (ml_backend__ml_code_util__succeeded)
                {
                  {
                    ml_backend__ml_code_util__TypeModule_30 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  }
                  ml_backend__ml_code_util__succeeded = MR_TRUE;
                }
            }
          if (ml_backend__ml_code_util__succeeded)
            {
              MR_Word ml_backend__ml_code_util__MaybeDeclaringModule_32;
              MR_Integer ml_backend__ml_code_util__Var_43;

              {
                ml_backend__ml_code_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_code_util__ThisModule_10, ml_backend__ml_code_util__TypeModule_30);
              }
              ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
              if (ml_backend__ml_code_util__succeeded)
                {
                  ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__SpecialPred_25 == (MR_Integer) 0);
                  if (ml_backend__ml_code_util__succeeded)
                    {
                      {
                        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&ml_backend__ml_code_util__Var_43);
                      }
                      ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__ProcId_16 == ml_backend__ml_code_util__Var_43);
                      ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
                    }
                }
              if (ml_backend__ml_code_util__succeeded)
                {
                  ml_backend__ml_code_util__DefiningModule_31 = ml_backend__ml_code_util__ThisModule_10;
                  {
                    ml_backend__ml_code_util__MaybeDeclaringModule_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__MaybeDeclaringModule_32, 0) = ((MR_Box) (ml_backend__ml_code_util__TypeModule_30));
                  }
                }
              else
                {
                  ml_backend__ml_code_util__DefiningModule_31 = ml_backend__ml_code_util__TypeModule_30;
                  ml_backend__ml_code_util__MaybeDeclaringModule_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_code_util__MLDS_PredLabel_7 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__PredName_12));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__MaybeDeclaringModule_32));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_code_util__TypeName_29));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ml_backend__ml_code_util__TypeArity_28));
              }
            }
          else
            {
              MR_String ml_backend__ml_code_util__Var_38;
              MR_String ml_backend__ml_code_util__Var_40;

              {
                ml_backend__ml_code_util__Var_40 = mercury__string__f_43_43_2_f_0(ml_backend__ml_code_util__PredName_12, (MR_String) "\'");
              }
              {
                ml_backend__ml_code_util__Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred \140", ml_backend__ml_code_util__Var_40);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_pred_label_from_rtti\'/4", ml_backend__ml_code_util__Var_38);
                return;
              }
            }
        }
      }
    else
      {
        MR_Word ml_backend__ml_code_util__NonOutputFunc_34;
        MR_Word ml_backend__ml_code_util__CodeModel_35;
        MR_Word ml_backend__ml_code_util__MaybeDeclaringModule_42;
        MR_Word ml_backend__ml_code_util__Var_33;

        {
          ml_backend__ml_code_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_code_util__ThisModule_10, ml_backend__ml_code_util__PredModule_11);
        }
        ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
        if (ml_backend__ml_code_util__succeeded)
          ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__PredIsImported_20 == (MR_Integer) 0);
        if (ml_backend__ml_code_util__succeeded)
          {
            ml_backend__ml_code_util__DefiningModule_31 = ml_backend__ml_code_util__ThisModule_10;
            {
              ml_backend__ml_code_util__MaybeDeclaringModule_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__MaybeDeclaringModule_42, 0) = ((MR_Box) (ml_backend__ml_code_util__PredModule_11));
            }
          }
        else
          {
            ml_backend__ml_code_util__DefiningModule_31 = ml_backend__ml_code_util__PredModule_11;
            ml_backend__ml_code_util__MaybeDeclaringModule_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__PredOrFunc_9 == (MR_Integer) 1);
        if (ml_backend__ml_code_util__succeeded)
          {
            {
              ml_backend__ml_code_util__succeeded = ml_backend__ml_code_util__ml_is_output_det_function_4_p_0(ml_backend__ml_code_util__ModuleInfo_5, ml_backend__ml_code_util__PredId_15, ml_backend__ml_code_util__ProcId_16, &ml_backend__ml_code_util__Var_33);
            }
            ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
          }
        if (ml_backend__ml_code_util__succeeded)
          ml_backend__ml_code_util__NonOutputFunc_34 = (MR_Integer) 1;
        else
          ml_backend__ml_code_util__NonOutputFunc_34 = (MR_Integer) 0;
        {
          hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_code_util__Detism_19, &ml_backend__ml_code_util__CodeModel_35);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_code_util__MLDS_PredLabel_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__PredOrFunc_9));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__MaybeDeclaringModule_42));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_code_util__PredName_12));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_code_util__PredArity_13));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_code_util__CodeModel_35));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_code_util__NonOutputFunc_34));
        }
      }
    {
      *ml_backend__ml_code_util__MLDS_Module_8 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__DefiningModule_31);
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_code_util__ml_is_output_det_function_4_p_0(
  MR_Word ml_backend__ml_code_util__ModuleInfo_5,
  MR_Word ml_backend__ml_code_util__PredId_6,
  MR_Integer ml_backend__ml_code_util__ProcId_7,
  MR_Word * ml_backend__ml_code_util__RetArgVar_8)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__TypeCtorInfo_23_23;
    MR_Word ml_backend__ml_code_util__TypeCtorInfo_24_24;
    MR_Word ml_backend__ml_code_util__TypeInfo_25_25;
    MR_Word ml_backend__ml_code_util__PredInfo_9;
    MR_Word ml_backend__ml_code_util__ProcInfo_10;
    MR_Word ml_backend__ml_code_util__Modes_11;
    MR_Word ml_backend__ml_code_util__ArgTypes_12;
    MR_Word ml_backend__ml_code_util__ArgVars_13;
    MR_Word ml_backend__ml_code_util__TopFunctorModes_14;
    MR_Word ml_backend__ml_code_util__RetTopFunctorMode_16;
    MR_Word ml_backend__ml_code_util__RetArgType_18;
    MR_Word ml_backend__ml_code_util__Var_20;
    MR_Word ml_backend__ml_code_util__Var_21;
    MR_Word ml_backend__ml_code_util__Var_22;
    MR_Word ml_backend__ml_code_util___InputTopFunctorModes_15;
    MR_Box ml_backend__ml_code_util__conv0_RetTopFunctorMode_16;
    MR_Word ml_backend__ml_code_util___InputArgTypes_17;
    MR_Box ml_backend__ml_code_util__conv1_RetArgType_18;
    MR_Word ml_backend__ml_code_util___InputArgVars_19;
    MR_Box ml_backend__ml_code_util__conv2_RetArgVar_8;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_code_util__ModuleInfo_5, ml_backend__ml_code_util__PredId_6, ml_backend__ml_code_util__ProcId_7, &ml_backend__ml_code_util__PredInfo_9, &ml_backend__ml_code_util__ProcInfo_10);
    }
    {
      ml_backend__ml_code_util__Var_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_code_util__PredInfo_9);
    }
    ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_20 == (MR_Integer) 1);
    if (ml_backend__ml_code_util__succeeded)
      {
        {
          ml_backend__ml_code_util__Var_21 = hlds__code_model__proc_info_interface_code_model_1_f_0(ml_backend__ml_code_util__ProcInfo_10);
        }
        ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_21 == (MR_Integer) 0);
        if (ml_backend__ml_code_util__succeeded)
          {
            {
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_code_util__ProcInfo_10, &ml_backend__ml_code_util__Modes_11);
            }
            {
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_code_util__PredInfo_9, &ml_backend__ml_code_util__ArgTypes_12);
            }
            {
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(ml_backend__ml_code_util__ProcInfo_10, &ml_backend__ml_code_util__ArgVars_13);
            }
            {
              check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ml_backend__ml_code_util__ModuleInfo_5, ml_backend__ml_code_util__Modes_11, ml_backend__ml_code_util__ArgTypes_12, &ml_backend__ml_code_util__TopFunctorModes_14);
            }
            ml_backend__ml_code_util__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_top_functor_mode_0;
            {
              parse_tree__prog_util__pred_args_to_func_args_3_p_0(ml_backend__ml_code_util__TypeCtorInfo_23_23, ml_backend__ml_code_util__TopFunctorModes_14, &ml_backend__ml_code_util___InputTopFunctorModes_15, &ml_backend__ml_code_util__conv0_RetTopFunctorMode_16);
            }
            ml_backend__ml_code_util__RetTopFunctorMode_16 = ((MR_Word) ml_backend__ml_code_util__conv0_RetTopFunctorMode_16);
            ml_backend__ml_code_util__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
            {
              parse_tree__prog_util__pred_args_to_func_args_3_p_0(ml_backend__ml_code_util__TypeCtorInfo_24_24, ml_backend__ml_code_util__ArgTypes_12, &ml_backend__ml_code_util___InputArgTypes_17, &ml_backend__ml_code_util__conv1_RetArgType_18);
            }
            ml_backend__ml_code_util__RetArgType_18 = ((MR_Word) ml_backend__ml_code_util__conv1_RetArgType_18);
            ml_backend__ml_code_util__TypeInfo_25_25 = (MR_Word) &ml_backend__ml_code_util_scalar_common_1[0];
            {
              parse_tree__prog_util__pred_args_to_func_args_3_p_0(ml_backend__ml_code_util__TypeInfo_25_25, ml_backend__ml_code_util__ArgVars_13, &ml_backend__ml_code_util___InputArgVars_19, &ml_backend__ml_code_util__conv2_RetArgVar_8);
            }
            *ml_backend__ml_code_util__RetArgVar_8 = ((MR_Word) ml_backend__ml_code_util__conv2_RetArgVar_8);
            ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__RetTopFunctorMode_16 == (MR_Integer) 1);
            if (ml_backend__ml_code_util__succeeded)
              {
                {
                  ml_backend__ml_code_util__Var_22 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_5, ml_backend__ml_code_util__RetArgType_18);
                }
                ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_22 == (MR_Integer) 1);
              }
          }
      }
    return ml_backend__ml_code_util__succeeded;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_block_3_f_0(
  MR_Word ml_backend__ml_code_util__VarDecls_5,
  MR_Word ml_backend__ml_code_util__Stmts_6,
  MR_Word ml_backend__ml_code_util__Context_7)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__VarDecls_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word ml_backend__ml_code_util__Block_8;
    MR_Word ml_backend__ml_code_util__SingleStmt_9;
    MR_Word ml_backend__ml_code_util__Var_10;

    if (ml_backend__ml_code_util__succeeded)
      {
        ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__Stmts_6)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_code_util__succeeded)
          {
            ml_backend__ml_code_util__SingleStmt_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Stmts_6, (MR_Integer) 0)));
            ml_backend__ml_code_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Stmts_6, (MR_Integer) 1)));
            ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Var_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    if (ml_backend__ml_code_util__succeeded)
      ml_backend__ml_code_util__Block_8 = ml_backend__ml_code_util__SingleStmt_9;
    else
      {
        ml_backend__ml_code_util__Block_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Block_8, 0) = ((MR_Box) (ml_backend__ml_code_util__VarDecls_5));
        MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Block_8, 1) = ((MR_Box) (ml_backend__ml_code_util__Stmts_6));
        MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Block_8, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_7));
      }
    return ml_backend__ml_code_util__Block_8;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_append_return_statement_6_p_0_2(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
    MR_Word ml_backend__ml_code_util__conv1_LambdaHeadVar__2_29;

    {
      ml_backend__ml_code_util__conv1_LambdaHeadVar__2_29 = ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__572__1_1_f_0(((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv1_LambdaHeadVar__2_29));
    return ml_backend__ml_code_util__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_append_return_statement_6_p_0_1(
  MR_Box ml_backend__ml_code_util__closure_arg,
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
    MR_Word ml_backend__ml_code_util__conv0_LambdaHeadVar__2_23;

    {
      ml_backend__ml_code_util__conv0_LambdaHeadVar__2_23 = ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__581__1_1_f_0(((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_LambdaHeadVar__2_23));
    return ml_backend__ml_code_util__wrapper_arg_2;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_append_return_statement_6_p_0(
  MR_Word ml_backend__ml_code_util__Info_7,
  MR_Word ml_backend__ml_code_util__CodeModel_8,
  MR_Word ml_backend__ml_code_util__CopiedOutputVarLvals_9,
  MR_Word ml_backend__ml_code_util__Context_10,
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Stmts_0_19,
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Stmts_20)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    switch (ml_backend__ml_code_util__CodeModel_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((ml_backend__ml_code_util__CopiedOutputVarLvals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__ml_code_util__STATE_VARIABLE_Stmts_20 = ml_backend__ml_code_util__STATE_VARIABLE_Stmts_0_19;
        else
          {
            MR_Word ml_backend__ml_code_util__Var_25;
            MR_Word ml_backend__ml_code_util__CopiedOutputVarRvals_35;
            MR_Word ml_backend__ml_code_util__ReturnStmt_36;

            {
              ml_backend__ml_code_util__CopiedOutputVarRvals_35 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_code_util_scalar_common_2[2], ml_backend__ml_code_util__CopiedOutputVarLvals_9);
            }
            {
              ml_backend__ml_code_util__ReturnStmt_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ReturnStmt_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ReturnStmt_36, 1) = ((MR_Box) (ml_backend__ml_code_util__CopiedOutputVarRvals_35));
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ReturnStmt_36, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_10));
            }
            {
              ml_backend__ml_code_util__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_25, 0) = ((MR_Box) (ml_backend__ml_code_util__ReturnStmt_36));
              MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              *ml_backend__ml_code_util__STATE_VARIABLE_Stmts_20 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_code_util__STATE_VARIABLE_Stmts_0_19, ml_backend__ml_code_util__Var_25);
            }
          }
        break;
      case (MR_Integer) 2:
        *ml_backend__ml_code_util__STATE_VARIABLE_Stmts_20 = ml_backend__ml_code_util__STATE_VARIABLE_Stmts_0_19;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_code_util__Succeeded_12;
          MR_Word ml_backend__ml_code_util__CopiedOutputVarRvals_13;
          MR_Word ml_backend__ml_code_util__ReturnedRvals_15;
          MR_Word ml_backend__ml_code_util__ReturnStmt_16;
          MR_Word ml_backend__ml_code_util__Var_31;
          MR_Word ml_backend__ml_code_util__SucceededLval_49;

          {
            ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_code_util__Info_7, &ml_backend__ml_code_util__SucceededLval_49);
          }
          {
            ml_backend__ml_code_util__Succeeded_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Succeeded_12, 0) = ((MR_Box) (ml_backend__ml_code_util__SucceededLval_49));
          }
          {
            ml_backend__ml_code_util__CopiedOutputVarRvals_13 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_code_util_scalar_common_2[3], ml_backend__ml_code_util__CopiedOutputVarLvals_9);
          }
          {
            ml_backend__ml_code_util__ReturnedRvals_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__ReturnedRvals_15, 0) = ((MR_Box) (ml_backend__ml_code_util__Succeeded_12));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__ReturnedRvals_15, 1) = ((MR_Box) (ml_backend__ml_code_util__CopiedOutputVarRvals_13));
          }
          {
            ml_backend__ml_code_util__ReturnStmt_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ReturnStmt_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ReturnStmt_16, 1) = ((MR_Box) (ml_backend__ml_code_util__ReturnedRvals_15));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ReturnStmt_16, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_10));
          }
          {
            ml_backend__ml_code_util__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_31, 0) = ((MR_Box) (ml_backend__ml_code_util__ReturnStmt_16));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            *ml_backend__ml_code_util__STATE_VARIABLE_Stmts_20 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_code_util__STATE_VARIABLE_Stmts_0_19, ml_backend__ml_code_util__Var_31);
          }
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_success_lval_2_p_0(
  MR_Word ml_backend__ml_code_util__Info_3,
  MR_Word * ml_backend__ml_code_util__SucceededLval_4)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__ModuleName_12;
    MR_Word ml_backend__ml_code_util__MLDS_ModuleName_13;
    MR_Word ml_backend__ml_code_util__MLDS_Var_14;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__Info_3, &ml_backend__ml_code_util__ModuleName_12);
    }
    {
      ml_backend__ml_code_util__MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_12);
    }
    {
      ml_backend__ml_code_util__MLDS_Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_14, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_13));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_14, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[6])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_code_util__SucceededLval_4 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_14));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_assign_3_f_0(
  MR_Word ml_backend__ml_code_util__Lval_5,
  MR_Word ml_backend__ml_code_util__Rval_6,
  MR_Word ml_backend__ml_code_util__Context_7)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;
    MR_Word ml_backend__ml_code_util__Stmt_8;
    MR_Word ml_backend__ml_code_util__Assign_9;

    {
      ml_backend__ml_code_util__Assign_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_9, 0) = ((MR_Box) (ml_backend__ml_code_util__Lval_5));
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_9, 1) = ((MR_Box) (ml_backend__ml_code_util__Rval_6));
    }
    {
      ml_backend__ml_code_util__Stmt_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_8, 1) = ((MR_Box) (ml_backend__ml_code_util__Assign_9));
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_8, 2) = ((MR_Box) (ml_backend__ml_code_util__Context_7));
    }
    return ml_backend__ml_code_util__Stmt_8;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_code_util____Unify____gen_pred_0_0_10001(
  MR_Box ml_backend__ml_code_util__wrapper_arg_1,
  MR_Box ml_backend__ml_code_util__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_code_util__succeeded;

    {
      ml_backend__ml_code_util__succeeded = ml_backend__ml_code_util____Unify____gen_pred_0_0(((MR_Word) ml_backend__ml_code_util__wrapper_arg_1), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_2));
    }
    return ml_backend__ml_code_util__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_code_util____Compare____gen_pred_0_0_10001(
  MR_Box * ml_backend__ml_code_util__wrapper_arg_1,
  MR_Box ml_backend__ml_code_util__wrapper_arg_2,
  MR_Box ml_backend__ml_code_util__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_code_util__conv0_HeadVar__1_1;

    {
      ml_backend__ml_code_util____Compare____gen_pred_0_0(&ml_backend__ml_code_util__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_code_util__wrapper_arg_2), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_3));
    }
    *ml_backend__ml_code_util__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_code_util__conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_code_util__init(void)
{
}

void mercury__ml_backend__ml_code_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_code_util__ml_backend__ml_code_util__type_ctor_info_gen_pred_0);
}

void mercury__ml_backend__ml_code_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_code_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.ml_code_util. */
