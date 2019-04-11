/*
** Automatically generated from `ml_util.m'
** by the Mercury compiler,
** version rotd-2017-07-04
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


/* :- module ml_backend.ml_util. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_util__init
ENDINIT
*/

#include "ml_backend.ml_util.mih"


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
#include "check_hlds.proc_requests.mih"
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
#include "solutions.mih"
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
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_unify_gen.mih"
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



struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0_s {
  MR_Word * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__LambdaHeadVar__1_12;
  MR_Cont ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__cont;
  void * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__cont_env_ptr;
  MR_bool ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__SubStatement_7;
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__Var_13;
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__Var_14;
};

struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s {
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3;
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4;
  MR_bool ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
  jmp_buf ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_7;
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_8;
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Var_14;
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Var_23;
};

struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s {
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3;
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4;
  MR_bool ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
  jmp_buf ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_7;
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_8;
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Var_27;
};

struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s {
  MR_Box * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont;
  void * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr;
  MR_Word ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12;
};

struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s {
  MR_Word * ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStatement_4;
  MR_Cont ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont;
  void * ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr;
  MR_Word ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Statement_41;
  MR_Box ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv0_Statement_41;
  MR_Word ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_54;
  MR_Word ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Statement_57;
  MR_Box ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv1_Case_54;
};


static const MR_FA_TypeInfo_Struct1 ml_backend__ml_util__set_tree234__ti_set_tree234_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_util__pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_util__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0;

static const MR_PseudoTypeInfo ml_backend__ml_util__ml_backend__ml_util__field_types_code_addrs_in_consts_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_util__ml_backend__ml_util__du_functor_desc_code_addrs_in_consts_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_util__ml_backend__ml_util__du_stag_ordered_code_addrs_in_consts_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_util__ml_backend__ml_util__du_ptag_ordered_code_addrs_in_consts_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_util__ml_backend__ml_util__du_name_ordered_code_addrs_in_consts_0[1];

static const MR_Integer ml_backend__ml_util__ml_backend__ml_util__functor_number_map_code_addrs_in_consts_0[1];

static MR_bool MR_CALL 
ml_backend__ml_util____Unify____code_addrs_in_consts_0_0_10001(
  MR_Box ml_backend__ml_util__wrapper_arg_1,
  MR_Box ml_backend__ml_util__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_util____Compare____code_addrs_in_consts_0_0_10001(
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
  MR_Box ml_backend__ml_util__wrapper_arg_2,
  MR_Box ml_backend__ml_util__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_116_104_111_100_95_112_116_114_115_95_105_110_95_108_118_97_108_95_95_91_49_93_95_48_3_p_0(
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_14,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_15);

static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0(
  MR_Word ml_backend__ml_util__Statement_3,
  MR_Word * ml_backend__ml_util__LambdaHeadVar__1_12,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr);

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_rval_3_p_0(
  MR_Word ml_backend__ml_util__Rval_4,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42);

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_rvals_3_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_3);

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_initializers_3_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_3);

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_initializer_3_p_0(
  MR_Word ml_backend__ml_util__Initializer_4,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_9,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_10);

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_switch_cases_3_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_3);

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_switch_default_3_p_0(
  MR_Word ml_backend__ml_util__Default_4,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_7,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_8);

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_statement_3_p_0(
  MR_Word ml_backend__ml_util__Statement_4,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_46);

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_statements_3_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_3);

static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Body_4,
  MR_Word ml_backend__ml_util__DataName_5);

static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_util__atomic_stmt_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__AtomicStmt_4,
  MR_Word ml_backend__ml_util__DataName_5);

static MR_Word MR_CALL 
ml_backend__ml_util__default_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Default_4,
  MR_Word ml_backend__ml_util__DataName_5);

static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__DataName_2);

static MR_Word MR_CALL 
ml_backend__ml_util__statements_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_scalars_3_p_0_1(
  MR_Box ml_backend__ml_util__closure_arg,
  MR_Box ml_backend__ml_util__wrapper_arg_1,
  MR_Box ml_backend__ml_util__wrapper_arg_2,
  MR_Box * ml_backend__ml_util__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
  MR_Box ml_backend__ml_util__closure_arg,
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr);

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_2(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_4(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_3(
  void * ml_backend__ml_util__env_ptr_arg);


static /* final */ const MR_Box ml_backend__ml_util_scalar_common_1[5][2];

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_2[2][3];

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_3[1][5];

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_4[3][1];

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_5[1][6];




static /* final */ const MR_Box ml_backend__ml_util_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_util_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_util_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_util__method_ptrs_in_scalars_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_4[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_util_scalar_common_1[3])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_util_scalar_common_1[4])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
};

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__ml_util__ml_backend__ml_util__type_ctor_info_code_addrs_in_consts_0)),
    ((MR_Box) (&ml_backend__ml_util__ml_backend__ml_util__type_ctor_info_code_addrs_in_consts_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ml_backend__ml_util__set_tree234__ti_set_tree234_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_util__pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_util__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_util__pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_util__ml_backend__ml_util__field_types_code_addrs_in_consts_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_util__set_tree234__ti_set_tree234_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_util__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_code_addr_0
};

static const MR_DuFunctorDesc ml_backend__ml_util__ml_backend__ml_util__du_functor_desc_code_addrs_in_consts_0_0 = {
  (MR_String) "code_addrs_in_consts",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_util__ml_backend__ml_util__field_types_code_addrs_in_consts_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_util__ml_backend__ml_util__du_stag_ordered_code_addrs_in_consts_0_0[1] = {
  &ml_backend__ml_util__ml_backend__ml_util__du_functor_desc_code_addrs_in_consts_0_0
};

static const MR_DuPtagLayout ml_backend__ml_util__ml_backend__ml_util__du_ptag_ordered_code_addrs_in_consts_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_util__ml_backend__ml_util__du_stag_ordered_code_addrs_in_consts_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_util__ml_backend__ml_util__du_name_ordered_code_addrs_in_consts_0[1] = {
  &ml_backend__ml_util__ml_backend__ml_util__du_functor_desc_code_addrs_in_consts_0_0
};

static const MR_Integer ml_backend__ml_util__ml_backend__ml_util__functor_number_map_code_addrs_in_consts_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_util__ml_backend__ml_util__type_ctor_info_code_addrs_in_consts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_util____Unify____code_addrs_in_consts_0_0_10001)),
  ((MR_Box) (ml_backend__ml_util____Compare____code_addrs_in_consts_0_0_10001)),
  (MR_String) "ml_backend.ml_util",
  (MR_String) "code_addrs_in_consts",
  {     ml_backend__ml_util__ml_backend__ml_util__du_name_ordered_code_addrs_in_consts_0 },
  {     ml_backend__ml_util__ml_backend__ml_util__du_ptag_ordered_code_addrs_in_consts_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_util__ml_backend__ml_util__functor_number_map_code_addrs_in_consts_0
};

static MR_bool MR_CALL 
ml_backend__ml_util____Unify____code_addrs_in_consts_0_0_10001(
  MR_Box ml_backend__ml_util__wrapper_arg_1,
  MR_Box ml_backend__ml_util__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_util__succeeded;

    {
      ml_backend__ml_util__succeeded = ml_backend__ml_util____Unify____code_addrs_in_consts_0_0(((MR_Word) ml_backend__ml_util__wrapper_arg_1), ((MR_Word) ml_backend__ml_util__wrapper_arg_2));
    }
    return ml_backend__ml_util__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_util____Compare____code_addrs_in_consts_0_0_10001(
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
  MR_Box ml_backend__ml_util__wrapper_arg_2,
  MR_Box ml_backend__ml_util__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_util__conv0_HeadVar__1_1;

    {
      ml_backend__ml_util____Compare____code_addrs_in_consts_0_0(&ml_backend__ml_util__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_util__wrapper_arg_2), ((MR_Word) ml_backend__ml_util__wrapper_arg_3));
    }
    *ml_backend__ml_util__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_util__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ml_backend__ml_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_116_104_111_100_95_112_116_114_115_95_105_110_95_108_118_97_108_95_95_91_49_93_95_48_3_p_0(
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_14,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_15)
{
  {
    MR_bool ml_backend__ml_util__succeeded;

    *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_15 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_14;
  }
}

static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    {
      MR_Word ml_backend__ml_util__Var_11;
      MR_Word ml_backend__ml_util__Var_8;
      MR_Word ml_backend__ml_util__Var_9;
      MR_String ml_backend__ml_util__Var_10;

      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 0)));
      ml_backend__ml_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 1)));
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__Var_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__Var_13, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__succeeded)
        {
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__Var_13, (MR_Integer) 1)));
          {
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__Var_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__Var_14, (MR_Integer) 0)))) == (MR_Integer) 7)));
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__succeeded)
              {
                {
                  *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__LambdaHeadVar__1_12) = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__Var_14, (MR_Integer) 1)));
                  ml_backend__ml_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__Var_14, (MR_Integer) 2)));
                  ml_backend__ml_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__Var_14, (MR_Integer) 3)));
                  ml_backend__ml_util__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__Var_14, (MR_Integer) 4)));
                }
                {
                  ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__cont_env_ptr);
                }
              }
          }
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0(
  MR_Word ml_backend__ml_util__Statement_3,
  MR_Word * ml_backend__ml_util__LambdaHeadVar__1_12,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr)
{
  {
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0_s ml_backend__ml_util__env;

    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__LambdaHeadVar__1_12 = ml_backend__ml_util__LambdaHeadVar__1_12;
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__cont = ml_backend__ml_util__cont;
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__SubStatement_7 = ml_backend__ml_util__Statement_3;
    {
      ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_1(&ml_backend__ml_util__env);
    }
    {
      MR_Word ml_backend__ml_util__Stmt_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_util___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_3, (MR_Integer) 1)));

      {
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_20, &(ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_env_0__SubStatement_7, ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0_1, &ml_backend__ml_util__env);
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_util____Compare____code_addrs_in_consts_0_0(
  MR_Word * ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2,
  MR_Word ml_backend__ml_util__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Integer ml_backend__ml_util__CastX_12 = (MR_Integer) ml_backend__ml_util__HeadVar__2_2;
    MR_Integer ml_backend__ml_util__CastY_13 = (MR_Integer) ml_backend__ml_util__HeadVar__3_3;

    ml_backend__ml_util__succeeded = (ml_backend__ml_util__CastX_12 == ml_backend__ml_util__CastY_13);
    if (ml_backend__ml_util__succeeded)
      *ml_backend__ml_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_util__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_util__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_util__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_util__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_util__Var_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_util_scalar_common_1[0], &ml_backend__ml_util__Var_10, ((MR_Box) (ml_backend__ml_util__ArgX1_4)), ((MR_Box) (ml_backend__ml_util__ArgY1_5)));
        }
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__Var_10 == (MR_Integer) 0);
        ml_backend__ml_util__succeeded = !(ml_backend__ml_util__succeeded);
        if (ml_backend__ml_util__succeeded)
          *ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__Var_10;
        else
          {
            MR_Word ml_backend__ml_util__Var_11;

            {
              mercury__counter____Compare____counter_0_0(&ml_backend__ml_util__Var_11, ml_backend__ml_util__ArgX2_6, ml_backend__ml_util__ArgY2_7);
            }
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__Var_11 == (MR_Integer) 0);
            ml_backend__ml_util__succeeded = !(ml_backend__ml_util__succeeded);
            if (ml_backend__ml_util__succeeded)
              *ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_util_scalar_common_1[1], ml_backend__ml_util__HeadVar__1_1, ((MR_Box) (ml_backend__ml_util__ArgX3_8)), ((MR_Box) (ml_backend__ml_util__ArgY3_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
ml_backend__ml_util____Unify____code_addrs_in_consts_0_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Integer ml_backend__ml_util__CastX_9 = (MR_Integer) ml_backend__ml_util__HeadVar__1_1;
    MR_Integer ml_backend__ml_util__CastY_10 = (MR_Integer) ml_backend__ml_util__HeadVar__2_2;

    ml_backend__ml_util__succeeded = (ml_backend__ml_util__CastX_9 == ml_backend__ml_util__CastY_10);
    if (ml_backend__ml_util__succeeded)
      ml_backend__ml_util__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_util__TypeInfo_13_13;
        MR_Word ml_backend__ml_util__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_util__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_util__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_util__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 2)));

        {
          ml_backend__ml_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_util_scalar_common_1[0], ((MR_Box) (ml_backend__ml_util__ArgX1_3)), ((MR_Box) (ml_backend__ml_util__ArgY1_4)));
        }
        if (ml_backend__ml_util__succeeded)
          {
            {
              ml_backend__ml_util__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_util__ArgX2_5, ml_backend__ml_util__ArgY2_6);
            }
            if (ml_backend__ml_util__succeeded)
              {
                ml_backend__ml_util__TypeInfo_13_13 = (MR_Word) &ml_backend__ml_util_scalar_common_1[1];
                {
                  ml_backend__ml_util__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_util__TypeInfo_13_13, ((MR_Box) (ml_backend__ml_util__ArgX3_7)), ((MR_Box) (ml_backend__ml_util__ArgY3_8)));
                }
              }
          }
      }
    return ml_backend__ml_util__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_rval_3_p_0(
  MR_Word ml_backend__ml_util__Rval_4,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;

        switch (MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
            break;
          case (MR_Integer) 1:
            *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_util__SubRval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_util___Tag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_util__next_value_of_Rval_4 = ml_backend__ml_util__SubRval_8;

                ml_backend__ml_util__Rval_4 = ml_backend__ml_util__next_value_of_Rval_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_util__RvalConst_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ml_backend__ml_util__RvalConst_9)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(ml_backend__ml_util__RvalConst_9)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                          break;
                        case (MR_Integer) 1:
                          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                      break;
                    case (MR_Integer) 2:
                      *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__RvalConst_9, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                          break;
                        case (MR_Integer) 1:
                          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                          break;
                        case (MR_Integer) 2:
                          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                          break;
                        case (MR_Integer) 3:
                          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                          break;
                        case (MR_Integer) 4:
                          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                          break;
                        case (MR_Integer) 5:
                          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                          break;
                        case (MR_Integer) 6:
                          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                          break;
                        case (MR_Integer) 7:
                          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                          break;
                        case (MR_Integer) 8:
                          {
                            MR_Word ml_backend__ml_util__CodeAddr_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__RvalConst_9, (MR_Integer) 1)));
                            MR_Word ml_backend__ml_util__Seen0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41, (MR_Integer) 0)));
                            MR_Word ml_backend__ml_util__Counter0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41, (MR_Integer) 1)));
                            MR_Word ml_backend__ml_util__Rev0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41, (MR_Integer) 2)));
                            MR_Word ml_backend__ml_util__Seen_14;

                            {
                              ml_backend__ml_util__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, ((MR_Box) (ml_backend__ml_util__CodeAddr_10)), ml_backend__ml_util__Seen0_11, &ml_backend__ml_util__Seen_14);
                            }
                            if (ml_backend__ml_util__succeeded)
                              {
                                MR_Integer ml_backend__ml_util__SeqNum_15;
                                MR_Word ml_backend__ml_util__Counter_16;
                                MR_Word ml_backend__ml_util__Rev_17;
                                MR_Word ml_backend__ml_util__Var_47;

                                {
                                  mercury__counter__allocate_3_p_0(&ml_backend__ml_util__SeqNum_15, ml_backend__ml_util__Counter0_12, &ml_backend__ml_util__Counter_16);
                                }
                                {
                                  ml_backend__ml_util__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_47, 0) = ((MR_Box) (ml_backend__ml_util__SeqNum_15));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_47, 1) = ((MR_Box) (ml_backend__ml_util__CodeAddr_10));
                                }
                                {
                                  ml_backend__ml_util__Rev_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rev_17, 0) = ((MR_Box) (ml_backend__ml_util__Var_47));
                                  MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rev_17, 1) = ((MR_Box) (ml_backend__ml_util__Rev0_13));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                  *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = base;
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_util__Seen_14));
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_util__Counter_16));
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_util__Rev_17));
                                }
                              }
                            else
                              *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                          }
                          break;
                        case (MR_Integer) 9:
                          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_util__SubRval_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util___UnaryOp_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_Rval_4 = ml_backend__ml_util__SubRval_51;

                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__next_value_of_Rval_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_util__SubRvalA_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__SubRvalB_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_44_44;
                  MR_Word ml_backend__ml_util___BinaryOp_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__method_ptrs_in_rval_3_p_0(ml_backend__ml_util__SubRvalA_34, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_44_44);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_Rval_4 = ml_backend__ml_util__SubRvalB_35;
                    MR_Word ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_41 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_44_44;

                    ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41 = ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_41;
                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__next_value_of_Rval_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__ml_util__RowRval_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_Rval_4 = ml_backend__ml_util__RowRval_37;

                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__next_value_of_Rval_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 5:
                *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_42 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_41;
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_rvals_3_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;

        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_3 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2;
        else
          {
            MR_Word ml_backend__ml_util__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__Rvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12;

            {
              ml_backend__ml_util__method_ptrs_in_rval_3_p_0(ml_backend__ml_util__Rval_7, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Rvals_8;
              MR_Word ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12;

              ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2 = ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_initializers_3_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;

        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_3 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2;
        else
          {
            MR_Word ml_backend__ml_util__Initializer_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__Initializers_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12;

            {
              ml_backend__ml_util__method_ptrs_in_initializer_3_p_0(ml_backend__ml_util__Initializer_7, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Initializers_8;
              MR_Word ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12;

              ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2 = ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_initializer_3_p_0(
  MR_Word ml_backend__ml_util__Initializer_4,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_9,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_10)
{
  {
    MR_bool ml_backend__ml_util__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_util__Initializer_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_10 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_9;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_util__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

          {
            ml_backend__ml_util__method_ptrs_in_rval_3_p_0(ml_backend__ml_util__Rval_8, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_9, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_util__SubInitializers_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util___Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

          {
            ml_backend__ml_util__method_ptrs_in_initializers_3_p_0(ml_backend__ml_util__SubInitializers_7, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_9, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_10);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__ml_util__SubInitializers_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

          {
            ml_backend__ml_util__method_ptrs_in_initializers_3_p_0(ml_backend__ml_util__SubInitializers_14, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_9, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_10);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_switch_cases_3_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;

        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_3 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2;
        else
          {
            MR_Word ml_backend__ml_util__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util__Statement_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_7, (MR_Integer) 2)));
            MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_15_15;
            MR_Word ml_backend__ml_util___FirstCond_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_7, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util___LaterConds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_7, (MR_Integer) 1)));

            {
              ml_backend__ml_util__method_ptrs_in_statement_3_p_0(ml_backend__ml_util__Statement_12, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Cases_8;
              MR_Word ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_15_15;

              ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2 = ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_switch_default_3_p_0(
  MR_Word ml_backend__ml_util__Default_4,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_7,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_8)
{
  {
    MR_bool ml_backend__ml_util__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_util__Default_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__ml_util__Default_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_8 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_7;
            break;
          case (MR_Integer) 1:
            *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_8 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_7;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_util__Statement_6 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Default_4), (MR_Integer) 1);

          {
            ml_backend__ml_util__method_ptrs_in_statement_3_p_0(ml_backend__ml_util__Statement_6, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_7, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_8);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_statement_3_p_0(
  MR_Word ml_backend__ml_util__Statement_4,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_46)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;
        MR_Word ml_backend__ml_util__Stmt_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_util__Defns_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_6, (MR_Integer) 0)));
              MR_Word ml_backend__ml_util__SubStatements_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_6, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_69_69;

              {
                ml_backend__ml_util__method_ptrs_in_defns_3_p_0(ml_backend__ml_util__Defns_8, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_69_69);
              }
              {
                ml_backend__ml_util__method_ptrs_in_statements_3_p_0(ml_backend__ml_util__SubStatements_9, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_69_69, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_46);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_util__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_6, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__SubStatement_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_6, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_67_67;
              MR_Word ml_backend__ml_util___Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_6, (MR_Integer) 0)));

              {
                ml_backend__ml_util__method_ptrs_in_rval_3_p_0(ml_backend__ml_util__Rval_11, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_67_67);
              }
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_util__next_value_of_Statement_4 = ml_backend__ml_util__SubStatement_12;
                MR_Word ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_45 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_67_67;

                ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45 = ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_45;
                ml_backend__ml_util__Statement_4 = ml_backend__ml_util__next_value_of_Statement_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_util__SubRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_6, (MR_Integer) 0)));
              MR_Word ml_backend__ml_util__StatementThen_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_6, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__MaybeStatementElse_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_6, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_64_64;
              MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_65_65;

              {
                ml_backend__ml_util__method_ptrs_in_rval_3_p_0(ml_backend__ml_util__SubRval_13, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_64_64);
              }
              {
                ml_backend__ml_util__method_ptrs_in_statement_3_p_0(ml_backend__ml_util__StatementThen_14, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_64_64, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_65_65);
              }
              if ((ml_backend__ml_util__MaybeStatementElse_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_46 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_65_65;
              else
                {
                  MR_Word ml_backend__ml_util__StatementElse_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__MaybeStatementElse_15, (MR_Integer) 0)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_Statement_4 = ml_backend__ml_util__StatementElse_16;
                    MR_Word ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_45 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_65_65;

                    ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45 = ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_45;
                    ml_backend__ml_util__Statement_4 = ml_backend__ml_util__next_value_of_Statement_4;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_util__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_util__Default_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 5)));
                  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_61_61;
                  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_62_62;
                  MR_Word ml_backend__ml_util__SubRval_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util___Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util___Range_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 3)));

                  {
                    ml_backend__ml_util__method_ptrs_in_rval_3_p_0(ml_backend__ml_util__SubRval_71, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_61_61);
                  }
                  {
                    ml_backend__ml_util__method_ptrs_in_switch_cases_3_p_0(ml_backend__ml_util__Cases_19, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_61_61, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_62_62);
                  }
                  {
                    ml_backend__ml_util__method_ptrs_in_switch_default_3_p_0(ml_backend__ml_util__Default_20, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_62_62, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_46);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_util.method_ptrs_in_statement\'/3", (MR_String) "labels are not supported in C# or Java.");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_util__Target_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ml_backend__ml_util__Target_22)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(ml_backend__ml_util__Target_22)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_util.method_ptrs_in_statement\'/3", (MR_String) "goto label is not supported in C# or Java.");
                          return;
                        }
                      }
                      break;
                  }
                  *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_46 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45;
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_util.method_ptrs_in_statement\'/3", (MR_String) "computed gotos are not supported in C# or Java.");
                    return;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__ml_util__Rvals_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_util___FuncSig_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util___MaybeThis_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_util___ReturnVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 5)));
                  MR_Word ml_backend__ml_util___IsTailCall_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 6)));
                  MR_Word ml_backend__ml_util___Markers_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 7)));
                  MR_Word ml_backend__ml_util___Rval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 2)));

                  {
                    ml_backend__ml_util__method_ptrs_in_rvals_3_p_0(ml_backend__ml_util__Rvals_74, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_46);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ml_backend__ml_util__Rvals_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__method_ptrs_in_rvals_3_p_0(ml_backend__ml_util__Rvals_30, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_46);
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ml_backend__ml_util__StatementGoal_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__StatementHandler_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_53_53;
                  MR_Word ml_backend__ml_util___Lval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__method_ptrs_in_statement_3_p_0(ml_backend__ml_util__StatementGoal_27, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_53_53);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_Statement_4 = ml_backend__ml_util__StatementHandler_28;
                    MR_Word ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_45 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_53_53;

                    ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45 = ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_45;
                    ml_backend__ml_util__Statement_4 = ml_backend__ml_util__next_value_of_Statement_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_46 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45;
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ml_backend__ml_util__AtomicStatement_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_6, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__Rvals_80;
                  MR_Word ml_backend__ml_util__Lval_37;
                  MR_Word ml_backend__ml_util___MaybeTag_38;
                  MR_Word ml_backend__ml_util___Bool_39;
                  MR_Word ml_backend__ml_util___MemRval_40;
                  MR_Word ml_backend__ml_util___MaybeCtorName_41;
                  MR_Word ml_backend__ml_util___Types_42;
                  MR_Word ml_backend__ml_util___MayUseAtomic_43;
                  MR_Word ml_backend__ml_util___AllocId_44;
                  MR_Word ml_backend__ml_util___Type_75;

                  ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStatement_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStatement_36, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (ml_backend__ml_util__succeeded)
                    {
                      ml_backend__ml_util__Lval_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStatement_36, (MR_Integer) 1)));
                      ml_backend__ml_util___MaybeTag_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStatement_36, (MR_Integer) 2)));
                      ml_backend__ml_util___Bool_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStatement_36, (MR_Integer) 3)));
                      ml_backend__ml_util___Type_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStatement_36, (MR_Integer) 4)));
                      ml_backend__ml_util___MemRval_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStatement_36, (MR_Integer) 5)));
                      ml_backend__ml_util___MaybeCtorName_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStatement_36, (MR_Integer) 6)));
                      ml_backend__ml_util__Rvals_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStatement_36, (MR_Integer) 7)));
                      ml_backend__ml_util___Types_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStatement_36, (MR_Integer) 8)));
                      ml_backend__ml_util___MayUseAtomic_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStatement_36, (MR_Integer) 9)));
                      ml_backend__ml_util___AllocId_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStatement_36, (MR_Integer) 10)));
                      {
                        ml_backend__ml_util__method_ptrs_in_rvals_3_p_0(ml_backend__ml_util__Rvals_80, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_46);
                      }
                    }
                  else
                    {
                      MR_Word ml_backend__ml_util__Rval_76;
                      MR_Word ml_backend__ml_util__Lval_77;

                      ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__AtomicStatement_36)) == (MR_mktag((MR_Integer) 2)));
                      if (ml_backend__ml_util__succeeded)
                        {
                          ml_backend__ml_util__Lval_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStatement_36, (MR_Integer) 0)));
                          ml_backend__ml_util__Rval_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStatement_36, (MR_Integer) 1)));
                          {
                            MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_49_49;

                            {
                              ml_backend__ml_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_116_104_111_100_95_112_116_114_115_95_105_110_95_108_118_97_108_95_95_91_49_93_95_48_3_p_0(ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_49_49);
                            }
                            {
                              ml_backend__ml_util__method_ptrs_in_rval_3_p_0(ml_backend__ml_util__Rval_76, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_49_49, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_46);
                            }
                          }
                        }
                      else
                        *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_46 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_45;
                    }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_statements_3_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;

        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_3 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2;
        else
          {
            MR_Word ml_backend__ml_util__Statement_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__Statements_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12;

            {
              ml_backend__ml_util__method_ptrs_in_statement_3_p_0(ml_backend__ml_util__Statement_7, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Statements_8;
              MR_Word ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12;

              ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2 = ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;
        MR_Word ml_backend__ml_util__HeadVar__3_3;

        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word ml_backend__ml_util__Initializer_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__Initializers_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util__InitializerContainsVar_9;

            {
              ml_backend__ml_util__InitializerContainsVar_9 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_5, ml_backend__ml_util__HeadVar__2_2);
            }
            switch (ml_backend__ml_util__InitializerContainsVar_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Initializers_6;

                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                break;
            }
          }
        return ml_backend__ml_util__HeadVar__3_3;
      }
      break;
    }
}

static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Body_4,
  MR_Word ml_backend__ml_util__DataName_5)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__ContainsVar_6;

    if ((ml_backend__ml_util__Body_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_util__Statement_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Body_4), (MR_Integer) 1);
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_util__Defns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_11, (MR_Integer) 0)));
              MR_Word ml_backend__ml_util__Statements_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__DefnsContainVar_18;

              {
                ml_backend__ml_util__DefnsContainVar_18 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__Defns_16, ml_backend__ml_util__DataName_5);
              }
              switch (ml_backend__ml_util__DefnsContainVar_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statements_contains_var_2_f_0(ml_backend__ml_util__Statements_17, ml_backend__ml_util__DataName_5);
                  }
                  break;
                case (MR_Integer) 1:
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_util__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__Statement_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__RvalContainsVar_22;
              MR_Word ml_backend__ml_util___Kind_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_11, (MR_Integer) 0)));

              {
                ml_backend__ml_util__RvalContainsVar_22 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_20, ml_backend__ml_util__DataName_5);
              }
              switch (ml_backend__ml_util__RvalContainsVar_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_21, ml_backend__ml_util__DataName_5);
                  }
                  break;
                case (MR_Integer) 1:
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_util__Cond_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_11, (MR_Integer) 0)));
              MR_Word ml_backend__ml_util__Then_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__MaybeElse_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__CondContainsVar_26;

              {
                ml_backend__ml_util__CondContainsVar_26 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Cond_23, ml_backend__ml_util__DataName_5);
              }
              switch (ml_backend__ml_util__CondContainsVar_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_util__ThenContainsVar_27;

                    {
                      ml_backend__ml_util__ThenContainsVar_27 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Then_24, ml_backend__ml_util__DataName_5);
                    }
                    switch (ml_backend__ml_util__ThenContainsVar_27) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__maybe_statement_contains_var_2_f_0(ml_backend__ml_util__MaybeElse_25, ml_backend__ml_util__DataName_5);
                        }
                        break;
                      case (MR_Integer) 1:
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_util__Val_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__Cases_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_util__Default_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 5)));
                  MR_Word ml_backend__ml_util__ValContainsVar_33;
                  MR_Word ml_backend__ml_util___Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util___Range_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 3)));

                  {
                    ml_backend__ml_util__ValContainsVar_33 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Val_29, ml_backend__ml_util__DataName_5);
                  }
                  switch (ml_backend__ml_util__ValContainsVar_33) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__CasesContainsVar_34;

                        {
                          ml_backend__ml_util__CasesContainsVar_34 = ml_backend__ml_util__cases_contains_var_2_f_0(ml_backend__ml_util__Cases_31, ml_backend__ml_util__DataName_5);
                        }
                        switch (ml_backend__ml_util__CasesContainsVar_34) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__default_contains_var_2_f_0(ml_backend__ml_util__Default_32, ml_backend__ml_util__DataName_5);
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__ml_util__Rval_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util___Labels_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));

                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_54, ml_backend__ml_util__DataName_5);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__ml_util__Func_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__Obj_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_util__Args_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_util__RetLvals_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 5)));
                  MR_Word ml_backend__ml_util__FuncContainsVar_45;
                  MR_Word ml_backend__ml_util___Sig_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util___TailCall_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 6)));
                  MR_Word ml_backend__ml_util___Markers_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 7)));

                  {
                    ml_backend__ml_util__FuncContainsVar_45 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Func_39, ml_backend__ml_util__DataName_5);
                  }
                  switch (ml_backend__ml_util__FuncContainsVar_45) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__ObjContainsVar_46;

                        {
                          ml_backend__ml_util__ObjContainsVar_46 = ml_backend__ml_util__maybe_rval_contains_var_2_f_0(ml_backend__ml_util__Obj_40, ml_backend__ml_util__DataName_5);
                        }
                        switch (ml_backend__ml_util__ObjContainsVar_46) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word ml_backend__ml_util__ArgsContainVar_47;

                              {
                                ml_backend__ml_util__ArgsContainVar_47 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_41, ml_backend__ml_util__DataName_5);
                              }
                              switch (ml_backend__ml_util__ArgsContainVar_47) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_42, ml_backend__ml_util__DataName_5);
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                                  break;
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ml_backend__ml_util__Rvals_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Rvals_48, ml_backend__ml_util__DataName_5);
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ml_backend__ml_util__Handler_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_util__RefContainsVar_51;
                  MR_Word ml_backend__ml_util__Statement_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__Ref_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__RefContainsVar_51 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Ref_56, ml_backend__ml_util__DataName_5);
                  }
                  switch (ml_backend__ml_util__RefContainsVar_51) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__StatementContainsVar_52;

                        {
                          ml_backend__ml_util__StatementContainsVar_52 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_55, ml_backend__ml_util__DataName_5);
                        }
                        switch (ml_backend__ml_util__StatementContainsVar_52) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Handler_50, ml_backend__ml_util__DataName_5);
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ml_backend__ml_util__Ref_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Ref_49, ml_backend__ml_util__DataName_5);
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ml_backend__ml_util__AtomicStmt_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__atomic_stmt_contains_var_2_f_0(ml_backend__ml_util__AtomicStmt_53, ml_backend__ml_util__DataName_5);
                  }
                }
                break;
            }
            break;
        }
      }
    return ml_backend__ml_util__ContainsVar_6;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;
        MR_Word ml_backend__ml_util__HeadVar__3_3;

        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word ml_backend__ml_util__OutlineArg_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__OutlineArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ml_backend__ml_util__OutlineArg_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__OutlineArgs_6;

                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_util__OutlineArgContainsVar_9;
                  MR_Word ml_backend__ml_util__Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 0)));
                  MR_String ml_backend__ml_util___Str_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__OutlineArgContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_15, ml_backend__ml_util__HeadVar__2_2);
                  }
                  switch (ml_backend__ml_util__OutlineArgContainsVar_9) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__OutlineArgs_6;

                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_util__Lval_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__OutlineArgContainsVar_21;
                  MR_Word ml_backend__ml_util___Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 0)));
                  MR_String ml_backend__ml_util___Str_18 = ((MR_String) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__OutlineArgContainsVar_21 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_16, ml_backend__ml_util__HeadVar__2_2);
                  }
                  switch (ml_backend__ml_util__OutlineArgContainsVar_21) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__OutlineArgs_6;

                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
            }
          }
        return ml_backend__ml_util__HeadVar__3_3;
      }
      break;
    }
}

static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;
        MR_Word ml_backend__ml_util__HeadVar__3_3;

        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word ml_backend__ml_util__TargetCode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__TargetCodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ml_backend__ml_util__TargetCode_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__TargetCodes_6;

                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_util__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_util__TargetCodeContainsVar_21;

                  {
                    ml_backend__ml_util__TargetCodeContainsVar_21 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_19, ml_backend__ml_util__HeadVar__2_2);
                  }
                  switch (ml_backend__ml_util__TargetCodeContainsVar_21) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__TargetCodes_6;

                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ml_backend__ml_util__Lval_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util__TargetCodeContainsVar_22;

                      {
                        ml_backend__ml_util__TargetCodeContainsVar_22 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_20, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__TargetCodeContainsVar_22) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__TargetCodes_6;

                              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__TargetCodes_6;

                        ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                }
                break;
            }
          }
        return ml_backend__ml_util__HeadVar__3_3;
      }
      break;
    }
}

static MR_Word MR_CALL 
ml_backend__ml_util__atomic_stmt_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__AtomicStmt_4,
  MR_Word ml_backend__ml_util__DataName_5)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__ContainsVar_6;

    switch (MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_util__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util__LvalContainsVar_10;

          {
            ml_backend__ml_util__LvalContainsVar_10 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_8, ml_backend__ml_util__DataName_5);
          }
          switch (ml_backend__ml_util__LvalContainsVar_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_9, ml_backend__ml_util__DataName_5);
              }
              break;
            case (MR_Integer) 1:
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_util__Lval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__Rval_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__LvalContainsVar_36;

              {
                ml_backend__ml_util__LvalContainsVar_36 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_34, ml_backend__ml_util__DataName_5);
              }
              switch (ml_backend__ml_util__LvalContainsVar_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_35, ml_backend__ml_util__DataName_5);
                  }
                  break;
                case (MR_Integer) 1:
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_util__Rval_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 1)));

              {
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_29, ml_backend__ml_util__DataName_5);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_util__Target_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 7)));
              MR_Word ml_backend__ml_util__TargetContainsVar_21;
              MR_Word ml_backend__ml_util___MaybeTag_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util___ExplicitSecTag_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 3)));
              MR_Word ml_backend__ml_util___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 4)));
              MR_Word ml_backend__ml_util___MaybeSize_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 5)));
              MR_Word ml_backend__ml_util___MaybeCtorName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 6)));
              MR_Word ml_backend__ml_util___ArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 8)));
              MR_Word ml_backend__ml_util___MayUseAtomic_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 9)));
              MR_Word ml_backend__ml_util___AllocId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 10)));

              {
                ml_backend__ml_util__TargetContainsVar_21 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Target_11, ml_backend__ml_util__DataName_5);
              }
              switch (ml_backend__ml_util__TargetContainsVar_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_17, ml_backend__ml_util__DataName_5);
                  }
                  break;
                case (MR_Integer) 1:
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__ml_util__Lval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 1)));

              {
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_30, ml_backend__ml_util__DataName_5);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__ml_util__Rval_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 1)));

              {
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_31, ml_backend__ml_util__DataName_5);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_util__TrailOp_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ml_backend__ml_util__TrailOp_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__ml_util__Lval_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__TrailOp_22, (MR_Integer) 0)));

                    {
                      ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_40, ml_backend__ml_util__DataName_5);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ml_backend__ml_util__Rval_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_22, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_util___Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_22, (MR_Integer) 1)));

                    {
                      ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_41, ml_backend__ml_util__DataName_5);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_22, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__Lval_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_22, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_43, ml_backend__ml_util__DataName_5);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ml_backend__ml_util__Rval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_22, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_44, ml_backend__ml_util__DataName_5);
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_util__Components_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util___Lang_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 1)));

              {
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__target_code_components_contains_var_2_f_0(ml_backend__ml_util__Components_24, ml_backend__ml_util__DataName_5);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ml_backend__ml_util__OutlineArgs_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__ReturnLvals_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 3)));
              MR_Word ml_backend__ml_util__OutlineArgsContainVar_28;
              MR_String ml_backend__ml_util___Code_27 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 4)));
              MR_Word ml_backend__ml_util___Lang_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 1)));

              {
                ml_backend__ml_util__OutlineArgsContainVar_28 = ml_backend__ml_util__outline_args_contains_var_2_f_0(ml_backend__ml_util__OutlineArgs_25, ml_backend__ml_util__DataName_5);
              }
              switch (ml_backend__ml_util__OutlineArgsContainVar_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__ReturnLvals_26, ml_backend__ml_util__DataName_5);
                  }
                  break;
                case (MR_Integer) 1:
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
        }
        break;
    }
    return ml_backend__ml_util__ContainsVar_6;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_util__default_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Default_4,
  MR_Word ml_backend__ml_util__DataName_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;
        MR_Word ml_backend__ml_util__ContainsVar_6;

        switch (MR_tag((MR_Word) ml_backend__ml_util__Default_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_util__Statement_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Default_4), (MR_Integer) 1);
              MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 0)));
              MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_util__Defns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_11, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_util__Statements_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_util__DefnsContainVar_18;

                    {
                      ml_backend__ml_util__DefnsContainVar_18 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__Defns_16, ml_backend__ml_util__DataName_5);
                    }
                    switch (ml_backend__ml_util__DefnsContainVar_18) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statements_contains_var_2_f_0(ml_backend__ml_util__Statements_17, ml_backend__ml_util__DataName_5);
                        }
                        break;
                      case (MR_Integer) 1:
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__ml_util__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_util__Statement_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
                    MR_Word ml_backend__ml_util__RvalContainsVar_22;
                    MR_Word ml_backend__ml_util___Kind_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_11, (MR_Integer) 0)));

                    {
                      ml_backend__ml_util__RvalContainsVar_22 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_20, ml_backend__ml_util__DataName_5);
                    }
                    switch (ml_backend__ml_util__RvalContainsVar_22) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_21, ml_backend__ml_util__DataName_5);
                        }
                        break;
                      case (MR_Integer) 1:
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ml_backend__ml_util__Cond_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_11, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_util__Then_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_util__MaybeElse_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
                    MR_Word ml_backend__ml_util__CondContainsVar_26;

                    {
                      ml_backend__ml_util__CondContainsVar_26 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Cond_23, ml_backend__ml_util__DataName_5);
                    }
                    switch (ml_backend__ml_util__CondContainsVar_26) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ml_backend__ml_util__ThenContainsVar_27;

                          {
                            ml_backend__ml_util__ThenContainsVar_27 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Then_24, ml_backend__ml_util__DataName_5);
                          }
                          switch (ml_backend__ml_util__ThenContainsVar_27) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__maybe_statement_contains_var_2_f_0(ml_backend__ml_util__MaybeElse_25, ml_backend__ml_util__DataName_5);
                              }
                              break;
                            case (MR_Integer) 1:
                              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__Val_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_util__Cases_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 4)));
                        MR_Word ml_backend__ml_util__Default_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 5)));
                        MR_Word ml_backend__ml_util__ValContainsVar_33;
                        MR_Word ml_backend__ml_util___Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                        MR_Word ml_backend__ml_util___Range_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 3)));

                        {
                          ml_backend__ml_util__ValContainsVar_33 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Val_29, ml_backend__ml_util__DataName_5);
                        }
                        switch (ml_backend__ml_util__ValContainsVar_33) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word ml_backend__ml_util__CasesContainsVar_34;

                              {
                                ml_backend__ml_util__CasesContainsVar_34 = ml_backend__ml_util__cases_contains_var_2_f_0(ml_backend__ml_util__Cases_31, ml_backend__ml_util__DataName_5);
                              }
                              switch (ml_backend__ml_util__CasesContainsVar_34) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    /* direct tailcall eliminated */
                                    {
                                      MR_Word ml_backend__ml_util__next_value_of_Default_4 = ml_backend__ml_util__Default_32;

                                      ml_backend__ml_util__Default_4 = ml_backend__ml_util__next_value_of_Default_4;
                                    }
                                    continue;
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                                  break;
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ml_backend__ml_util__Rval_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                        MR_Word ml_backend__ml_util___Labels_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));

                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_54, ml_backend__ml_util__DataName_5);
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ml_backend__ml_util__Func_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_util__Obj_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 3)));
                        MR_Word ml_backend__ml_util__Args_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 4)));
                        MR_Word ml_backend__ml_util__RetLvals_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 5)));
                        MR_Word ml_backend__ml_util__FuncContainsVar_45;
                        MR_Word ml_backend__ml_util___Sig_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                        MR_Word ml_backend__ml_util___TailCall_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 6)));
                        MR_Word ml_backend__ml_util___Markers_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 7)));

                        {
                          ml_backend__ml_util__FuncContainsVar_45 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Func_39, ml_backend__ml_util__DataName_5);
                        }
                        switch (ml_backend__ml_util__FuncContainsVar_45) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word ml_backend__ml_util__ObjContainsVar_46;

                              {
                                ml_backend__ml_util__ObjContainsVar_46 = ml_backend__ml_util__maybe_rval_contains_var_2_f_0(ml_backend__ml_util__Obj_40, ml_backend__ml_util__DataName_5);
                              }
                              switch (ml_backend__ml_util__ObjContainsVar_46) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    MR_Word ml_backend__ml_util__ArgsContainVar_47;

                                    {
                                      ml_backend__ml_util__ArgsContainVar_47 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_41, ml_backend__ml_util__DataName_5);
                                    }
                                    switch (ml_backend__ml_util__ArgsContainVar_47) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 0:
                                        {
                                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_42, ml_backend__ml_util__DataName_5);
                                        }
                                        break;
                                      case (MR_Integer) 1:
                                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                                        break;
                                    }
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                                  break;
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word ml_backend__ml_util__Rvals_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Rvals_48, ml_backend__ml_util__DataName_5);
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word ml_backend__ml_util__Handler_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 3)));
                        MR_Word ml_backend__ml_util__RefContainsVar_51;
                        MR_Word ml_backend__ml_util__Statement_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_util__Ref_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__RefContainsVar_51 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Ref_56, ml_backend__ml_util__DataName_5);
                        }
                        switch (ml_backend__ml_util__RefContainsVar_51) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word ml_backend__ml_util__StatementContainsVar_52;

                              {
                                ml_backend__ml_util__StatementContainsVar_52 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_55, ml_backend__ml_util__DataName_5);
                              }
                              switch (ml_backend__ml_util__StatementContainsVar_52) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Handler_50, ml_backend__ml_util__DataName_5);
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                                  break;
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word ml_backend__ml_util__Ref_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Ref_49, ml_backend__ml_util__DataName_5);
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word ml_backend__ml_util__AtomicStmt_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__atomic_stmt_contains_var_2_f_0(ml_backend__ml_util__AtomicStmt_53, ml_backend__ml_util__DataName_5);
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        return ml_backend__ml_util__ContainsVar_6;
      }
      break;
    }
}

static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;
        MR_Word ml_backend__ml_util__HeadVar__3_3;

        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word ml_backend__ml_util__Case_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util__Statement_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 2)));
            MR_Word ml_backend__ml_util__Stmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util___FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util___LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_util__Defns_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_16, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_util__Statements_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_16, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__DefnsContainVar_23;
                  MR_Word ml_backend__ml_util__StatementContainsVar_62;

                  {
                    ml_backend__ml_util__DefnsContainVar_23 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__Defns_21, ml_backend__ml_util__HeadVar__2_2);
                  }
                  switch (ml_backend__ml_util__DefnsContainVar_23) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        ml_backend__ml_util__StatementContainsVar_62 = ml_backend__ml_util__statements_contains_var_2_f_0(ml_backend__ml_util__Statements_22, ml_backend__ml_util__HeadVar__2_2);
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__StatementContainsVar_62 = (MR_Integer) 1;
                      break;
                  }
                  switch (ml_backend__ml_util__StatementContainsVar_62) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Cases_6;

                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_util__Rval_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_16, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__Statement_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_16, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__RvalContainsVar_27;
                  MR_Word ml_backend__ml_util___Kind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_16, (MR_Integer) 0)));

                  {
                    ml_backend__ml_util__RvalContainsVar_27 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_25, ml_backend__ml_util__HeadVar__2_2);
                  }
                  switch (ml_backend__ml_util__RvalContainsVar_27) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__StatementContainsVar_72;

                        {
                          ml_backend__ml_util__StatementContainsVar_72 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_26, ml_backend__ml_util__HeadVar__2_2);
                        }
                        switch (ml_backend__ml_util__StatementContainsVar_72) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              /* direct tailcall eliminated */
                              {
                                MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Cases_6;

                                ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                              }
                              continue;
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_util__Cond_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_16, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_util__Then_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_16, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__MaybeElse_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_16, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__CondContainsVar_31;

                  {
                    ml_backend__ml_util__CondContainsVar_31 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Cond_28, ml_backend__ml_util__HeadVar__2_2);
                  }
                  switch (ml_backend__ml_util__CondContainsVar_31) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__ThenContainsVar_32;

                        {
                          ml_backend__ml_util__ThenContainsVar_32 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Then_29, ml_backend__ml_util__HeadVar__2_2);
                        }
                        switch (ml_backend__ml_util__ThenContainsVar_32) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word ml_backend__ml_util__StatementContainsVar_68;

                              {
                                ml_backend__ml_util__StatementContainsVar_68 = ml_backend__ml_util__maybe_statement_contains_var_2_f_0(ml_backend__ml_util__MaybeElse_30, ml_backend__ml_util__HeadVar__2_2);
                              }
                              switch (ml_backend__ml_util__StatementContainsVar_68) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    /* direct tailcall eliminated */
                                    {
                                      MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Cases_6;

                                      ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                                    }
                                    continue;
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                  break;
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ml_backend__ml_util__Val_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_util__Cases_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 4)));
                      MR_Word ml_backend__ml_util__Default_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 5)));
                      MR_Word ml_backend__ml_util__ValContainsVar_38;
                      MR_Word ml_backend__ml_util___Type_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util___Range_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 3)));

                      {
                        ml_backend__ml_util__ValContainsVar_38 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Val_34, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__ValContainsVar_38) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ml_backend__ml_util__CasesContainsVar_39;

                            {
                              ml_backend__ml_util__CasesContainsVar_39 = ml_backend__ml_util__cases_contains_var_2_f_0(ml_backend__ml_util__Cases_36, ml_backend__ml_util__HeadVar__2_2);
                            }
                            switch (ml_backend__ml_util__CasesContainsVar_39) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Word ml_backend__ml_util__StatementContainsVar_70;

                                  {
                                    ml_backend__ml_util__StatementContainsVar_70 = ml_backend__ml_util__default_contains_var_2_f_0(ml_backend__ml_util__Default_37, ml_backend__ml_util__HeadVar__2_2);
                                  }
                                  switch (ml_backend__ml_util__StatementContainsVar_70) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      {
                                        /* direct tailcall eliminated */
                                        {
                                          MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Cases_6;

                                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                                        }
                                        continue;
                                      }
                                      break;
                                    case (MR_Integer) 1:
                                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Cases_6;

                        ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ml_backend__ml_util__Rval_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util__StatementContainsVar_64;
                      MR_Word ml_backend__ml_util___Labels_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 2)));

                      {
                        ml_backend__ml_util__StatementContainsVar_64 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_59, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__StatementContainsVar_64) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Cases_6;

                              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ml_backend__ml_util__Func_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_util__Obj_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 3)));
                      MR_Word ml_backend__ml_util__Args_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 4)));
                      MR_Word ml_backend__ml_util__RetLvals_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 5)));
                      MR_Word ml_backend__ml_util__FuncContainsVar_50;
                      MR_Word ml_backend__ml_util___Sig_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util___TailCall_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 6)));
                      MR_Word ml_backend__ml_util___Markers_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 7)));

                      {
                        ml_backend__ml_util__FuncContainsVar_50 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Func_44, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__FuncContainsVar_50) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ml_backend__ml_util__ObjContainsVar_51;

                            {
                              ml_backend__ml_util__ObjContainsVar_51 = ml_backend__ml_util__maybe_rval_contains_var_2_f_0(ml_backend__ml_util__Obj_45, ml_backend__ml_util__HeadVar__2_2);
                            }
                            switch (ml_backend__ml_util__ObjContainsVar_51) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Word ml_backend__ml_util__ArgsContainVar_52;

                                  {
                                    ml_backend__ml_util__ArgsContainVar_52 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_46, ml_backend__ml_util__HeadVar__2_2);
                                  }
                                  switch (ml_backend__ml_util__ArgsContainVar_52) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      {
                                        MR_Word ml_backend__ml_util__StatementContainsVar_63;

                                        {
                                          ml_backend__ml_util__StatementContainsVar_63 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_47, ml_backend__ml_util__HeadVar__2_2);
                                        }
                                        switch (ml_backend__ml_util__StatementContainsVar_63) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 0:
                                            {
                                              /* direct tailcall eliminated */
                                              {
                                                MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Cases_6;

                                                ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                                              }
                                              continue;
                                            }
                                            break;
                                          case (MR_Integer) 1:
                                            ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                            break;
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 1:
                                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word ml_backend__ml_util__Rvals_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util__StatementContainsVar_69;

                      {
                        ml_backend__ml_util__StatementContainsVar_69 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Rvals_53, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__StatementContainsVar_69) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Cases_6;

                              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word ml_backend__ml_util__Handler_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 3)));
                      MR_Word ml_backend__ml_util__RefContainsVar_56;
                      MR_Word ml_backend__ml_util__Statement_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_util__Ref_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 1)));

                      {
                        ml_backend__ml_util__RefContainsVar_56 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Ref_61, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__RefContainsVar_56) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ml_backend__ml_util__StatementContainsVar_57;

                            {
                              ml_backend__ml_util__StatementContainsVar_57 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_60, ml_backend__ml_util__HeadVar__2_2);
                            }
                            switch (ml_backend__ml_util__StatementContainsVar_57) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Word ml_backend__ml_util__StatementContainsVar_71;

                                  {
                                    ml_backend__ml_util__StatementContainsVar_71 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Handler_55, ml_backend__ml_util__HeadVar__2_2);
                                  }
                                  switch (ml_backend__ml_util__StatementContainsVar_71) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      {
                                        /* direct tailcall eliminated */
                                        {
                                          MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Cases_6;

                                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                                        }
                                        continue;
                                      }
                                      break;
                                    case (MR_Integer) 1:
                                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word ml_backend__ml_util__Ref_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util__StatementContainsVar_65;

                      {
                        ml_backend__ml_util__StatementContainsVar_65 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Ref_54, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__StatementContainsVar_65) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Cases_6;

                              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word ml_backend__ml_util__StatementContainsVar_12;
                      MR_Word ml_backend__ml_util__AtomicStmt_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_16, (MR_Integer) 1)));

                      {
                        ml_backend__ml_util__StatementContainsVar_12 = ml_backend__ml_util__atomic_stmt_contains_var_2_f_0(ml_backend__ml_util__AtomicStmt_58, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__StatementContainsVar_12) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Cases_6;

                              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                }
                break;
            }
          }
        return ml_backend__ml_util__HeadVar__3_3;
      }
      break;
    }
}

static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__DataName_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;
        MR_Word ml_backend__ml_util__HeadVar__3_3;

        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word ml_backend__ml_util__Statement_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_util__Defns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_11, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_util__Statements_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__DefnsContainVar_18;

                  {
                    ml_backend__ml_util__DefnsContainVar_18 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__Defns_16, ml_backend__ml_util__DataName_2);
                  }
                  switch (ml_backend__ml_util__DefnsContainVar_18) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__statements_contains_var_2_f_0(ml_backend__ml_util__Statements_17, ml_backend__ml_util__DataName_2);
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_util__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__Statement_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__RvalContainsVar_22;
                  MR_Word ml_backend__ml_util___Kind_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_11, (MR_Integer) 0)));

                  {
                    ml_backend__ml_util__RvalContainsVar_22 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_20, ml_backend__ml_util__DataName_2);
                  }
                  switch (ml_backend__ml_util__RvalContainsVar_22) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_21, ml_backend__ml_util__DataName_2);
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_util__Cond_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_11, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_util__Then_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__MaybeElse_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__CondContainsVar_26;

                  {
                    ml_backend__ml_util__CondContainsVar_26 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Cond_23, ml_backend__ml_util__DataName_2);
                  }
                  switch (ml_backend__ml_util__CondContainsVar_26) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__ThenContainsVar_27;

                        {
                          ml_backend__ml_util__ThenContainsVar_27 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Then_24, ml_backend__ml_util__DataName_2);
                        }
                        switch (ml_backend__ml_util__ThenContainsVar_27) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              /* direct tailcall eliminated */
                              {
                                MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__MaybeElse_25;

                                ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                              }
                              continue;
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ml_backend__ml_util__Val_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_util__Cases_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 4)));
                      MR_Word ml_backend__ml_util__Default_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 5)));
                      MR_Word ml_backend__ml_util__ValContainsVar_33;
                      MR_Word ml_backend__ml_util___Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util___Range_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 3)));

                      {
                        ml_backend__ml_util__ValContainsVar_33 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Val_29, ml_backend__ml_util__DataName_2);
                      }
                      switch (ml_backend__ml_util__ValContainsVar_33) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ml_backend__ml_util__CasesContainsVar_34;

                            {
                              ml_backend__ml_util__CasesContainsVar_34 = ml_backend__ml_util__cases_contains_var_2_f_0(ml_backend__ml_util__Cases_31, ml_backend__ml_util__DataName_2);
                            }
                            switch (ml_backend__ml_util__CasesContainsVar_34) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__default_contains_var_2_f_0(ml_backend__ml_util__Default_32, ml_backend__ml_util__DataName_2);
                                }
                                break;
                              case (MR_Integer) 1:
                                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ml_backend__ml_util__Rval_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util___Labels_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));

                      {
                        ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_54, ml_backend__ml_util__DataName_2);
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ml_backend__ml_util__Func_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_util__Obj_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 3)));
                      MR_Word ml_backend__ml_util__Args_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 4)));
                      MR_Word ml_backend__ml_util__RetLvals_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 5)));
                      MR_Word ml_backend__ml_util__FuncContainsVar_45;
                      MR_Word ml_backend__ml_util___Sig_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util___TailCall_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 6)));
                      MR_Word ml_backend__ml_util___Markers_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 7)));

                      {
                        ml_backend__ml_util__FuncContainsVar_45 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Func_39, ml_backend__ml_util__DataName_2);
                      }
                      switch (ml_backend__ml_util__FuncContainsVar_45) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ml_backend__ml_util__ObjContainsVar_46;

                            {
                              ml_backend__ml_util__ObjContainsVar_46 = ml_backend__ml_util__maybe_rval_contains_var_2_f_0(ml_backend__ml_util__Obj_40, ml_backend__ml_util__DataName_2);
                            }
                            switch (ml_backend__ml_util__ObjContainsVar_46) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Word ml_backend__ml_util__ArgsContainVar_47;

                                  {
                                    ml_backend__ml_util__ArgsContainVar_47 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_41, ml_backend__ml_util__DataName_2);
                                  }
                                  switch (ml_backend__ml_util__ArgsContainVar_47) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      {
                                        ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_42, ml_backend__ml_util__DataName_2);
                                      }
                                      break;
                                    case (MR_Integer) 1:
                                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word ml_backend__ml_util__Rvals_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));

                      {
                        ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Rvals_48, ml_backend__ml_util__DataName_2);
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word ml_backend__ml_util__Handler_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 3)));
                      MR_Word ml_backend__ml_util__RefContainsVar_51;
                      MR_Word ml_backend__ml_util__Statement_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_util__Ref_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));

                      {
                        ml_backend__ml_util__RefContainsVar_51 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Ref_56, ml_backend__ml_util__DataName_2);
                      }
                      switch (ml_backend__ml_util__RefContainsVar_51) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ml_backend__ml_util__StatementContainsVar_52;

                            {
                              ml_backend__ml_util__StatementContainsVar_52 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_55, ml_backend__ml_util__DataName_2);
                            }
                            switch (ml_backend__ml_util__StatementContainsVar_52) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Handler_50, ml_backend__ml_util__DataName_2);
                                }
                                break;
                              case (MR_Integer) 1:
                                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word ml_backend__ml_util__Ref_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));

                      {
                        ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Ref_49, ml_backend__ml_util__DataName_2);
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word ml_backend__ml_util__AtomicStmt_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_11, (MR_Integer) 1)));

                      {
                        ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__atomic_stmt_contains_var_2_f_0(ml_backend__ml_util__AtomicStmt_53, ml_backend__ml_util__DataName_2);
                      }
                    }
                    break;
                }
                break;
            }
          }
        return ml_backend__ml_util__HeadVar__3_3;
      }
      break;
    }
}

static MR_Word MR_CALL 
ml_backend__ml_util__statements_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;
        MR_Word ml_backend__ml_util__HeadVar__3_3;

        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word ml_backend__ml_util__Statement_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__Statements_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util__Stmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_util__Defns_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_13, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_util__Statements_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_13, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__DefnsContainVar_20;

                  {
                    ml_backend__ml_util__DefnsContainVar_20 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__Defns_18, ml_backend__ml_util__HeadVar__2_2);
                  }
                  switch (ml_backend__ml_util__DefnsContainVar_20) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__StatementContainsVar_59;

                        {
                          ml_backend__ml_util__StatementContainsVar_59 = ml_backend__ml_util__statements_contains_var_2_f_0(ml_backend__ml_util__Statements_19, ml_backend__ml_util__HeadVar__2_2);
                        }
                        switch (ml_backend__ml_util__StatementContainsVar_59) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              /* direct tailcall eliminated */
                              {
                                MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Statements_6;

                                ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                              }
                              continue;
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_util__Rval_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_13, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__Statement_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_13, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__RvalContainsVar_24;
                  MR_Word ml_backend__ml_util___Kind_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_13, (MR_Integer) 0)));

                  {
                    ml_backend__ml_util__RvalContainsVar_24 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_22, ml_backend__ml_util__HeadVar__2_2);
                  }
                  switch (ml_backend__ml_util__RvalContainsVar_24) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__StatementContainsVar_69;

                        {
                          ml_backend__ml_util__StatementContainsVar_69 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_23, ml_backend__ml_util__HeadVar__2_2);
                        }
                        switch (ml_backend__ml_util__StatementContainsVar_69) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              /* direct tailcall eliminated */
                              {
                                MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Statements_6;

                                ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                              }
                              continue;
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_util__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_13, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_util__Then_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_13, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__MaybeElse_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_13, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__CondContainsVar_28;

                  {
                    ml_backend__ml_util__CondContainsVar_28 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Cond_25, ml_backend__ml_util__HeadVar__2_2);
                  }
                  switch (ml_backend__ml_util__CondContainsVar_28) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__ThenContainsVar_29;

                        {
                          ml_backend__ml_util__ThenContainsVar_29 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Then_26, ml_backend__ml_util__HeadVar__2_2);
                        }
                        switch (ml_backend__ml_util__ThenContainsVar_29) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word ml_backend__ml_util__StatementContainsVar_65;

                              {
                                ml_backend__ml_util__StatementContainsVar_65 = ml_backend__ml_util__maybe_statement_contains_var_2_f_0(ml_backend__ml_util__MaybeElse_27, ml_backend__ml_util__HeadVar__2_2);
                              }
                              switch (ml_backend__ml_util__StatementContainsVar_65) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    /* direct tailcall eliminated */
                                    {
                                      MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Statements_6;

                                      ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                                    }
                                    continue;
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                  break;
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ml_backend__ml_util__Val_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_util__Cases_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 4)));
                      MR_Word ml_backend__ml_util__Default_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 5)));
                      MR_Word ml_backend__ml_util__ValContainsVar_35;
                      MR_Word ml_backend__ml_util___Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util___Range_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 3)));

                      {
                        ml_backend__ml_util__ValContainsVar_35 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Val_31, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__ValContainsVar_35) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ml_backend__ml_util__CasesContainsVar_36;

                            {
                              ml_backend__ml_util__CasesContainsVar_36 = ml_backend__ml_util__cases_contains_var_2_f_0(ml_backend__ml_util__Cases_33, ml_backend__ml_util__HeadVar__2_2);
                            }
                            switch (ml_backend__ml_util__CasesContainsVar_36) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Word ml_backend__ml_util__StatementContainsVar_67;

                                  {
                                    ml_backend__ml_util__StatementContainsVar_67 = ml_backend__ml_util__default_contains_var_2_f_0(ml_backend__ml_util__Default_34, ml_backend__ml_util__HeadVar__2_2);
                                  }
                                  switch (ml_backend__ml_util__StatementContainsVar_67) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      {
                                        /* direct tailcall eliminated */
                                        {
                                          MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Statements_6;

                                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                                        }
                                        continue;
                                      }
                                      break;
                                    case (MR_Integer) 1:
                                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Statements_6;

                        ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ml_backend__ml_util__Rval_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util__StatementContainsVar_61;
                      MR_Word ml_backend__ml_util___Labels_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 2)));

                      {
                        ml_backend__ml_util__StatementContainsVar_61 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_56, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__StatementContainsVar_61) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Statements_6;

                              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ml_backend__ml_util__Func_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_util__Obj_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 3)));
                      MR_Word ml_backend__ml_util__Args_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 4)));
                      MR_Word ml_backend__ml_util__RetLvals_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 5)));
                      MR_Word ml_backend__ml_util__FuncContainsVar_47;
                      MR_Word ml_backend__ml_util___Sig_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util___TailCall_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 6)));
                      MR_Word ml_backend__ml_util___Markers_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 7)));

                      {
                        ml_backend__ml_util__FuncContainsVar_47 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Func_41, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__FuncContainsVar_47) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ml_backend__ml_util__ObjContainsVar_48;

                            {
                              ml_backend__ml_util__ObjContainsVar_48 = ml_backend__ml_util__maybe_rval_contains_var_2_f_0(ml_backend__ml_util__Obj_42, ml_backend__ml_util__HeadVar__2_2);
                            }
                            switch (ml_backend__ml_util__ObjContainsVar_48) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Word ml_backend__ml_util__ArgsContainVar_49;

                                  {
                                    ml_backend__ml_util__ArgsContainVar_49 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_43, ml_backend__ml_util__HeadVar__2_2);
                                  }
                                  switch (ml_backend__ml_util__ArgsContainVar_49) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      {
                                        MR_Word ml_backend__ml_util__StatementContainsVar_60;

                                        {
                                          ml_backend__ml_util__StatementContainsVar_60 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_44, ml_backend__ml_util__HeadVar__2_2);
                                        }
                                        switch (ml_backend__ml_util__StatementContainsVar_60) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 0:
                                            {
                                              /* direct tailcall eliminated */
                                              {
                                                MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Statements_6;

                                                ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                                              }
                                              continue;
                                            }
                                            break;
                                          case (MR_Integer) 1:
                                            ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                            break;
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 1:
                                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word ml_backend__ml_util__Rvals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util__StatementContainsVar_66;

                      {
                        ml_backend__ml_util__StatementContainsVar_66 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Rvals_50, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__StatementContainsVar_66) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Statements_6;

                              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word ml_backend__ml_util__Handler_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 3)));
                      MR_Word ml_backend__ml_util__RefContainsVar_53;
                      MR_Word ml_backend__ml_util__Statement_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_util__Ref_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 1)));

                      {
                        ml_backend__ml_util__RefContainsVar_53 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Ref_58, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__RefContainsVar_53) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ml_backend__ml_util__StatementContainsVar_54;

                            {
                              ml_backend__ml_util__StatementContainsVar_54 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_57, ml_backend__ml_util__HeadVar__2_2);
                            }
                            switch (ml_backend__ml_util__StatementContainsVar_54) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Word ml_backend__ml_util__StatementContainsVar_68;

                                  {
                                    ml_backend__ml_util__StatementContainsVar_68 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Handler_52, ml_backend__ml_util__HeadVar__2_2);
                                  }
                                  switch (ml_backend__ml_util__StatementContainsVar_68) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      {
                                        /* direct tailcall eliminated */
                                        {
                                          MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Statements_6;

                                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                                        }
                                        continue;
                                      }
                                      break;
                                    case (MR_Integer) 1:
                                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word ml_backend__ml_util__Ref_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util__StatementContainsVar_62;

                      {
                        ml_backend__ml_util__StatementContainsVar_62 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Ref_51, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__StatementContainsVar_62) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Statements_6;

                              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word ml_backend__ml_util__StatementContainsVar_9;
                      MR_Word ml_backend__ml_util__AtomicStmt_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_13, (MR_Integer) 1)));

                      {
                        ml_backend__ml_util__StatementContainsVar_9 = ml_backend__ml_util__atomic_stmt_contains_var_2_f_0(ml_backend__ml_util__AtomicStmt_55, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__StatementContainsVar_9) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Statements_6;

                              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                          break;
                      }
                    }
                    break;
                }
                break;
            }
          }
        return ml_backend__ml_util__HeadVar__3_3;
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_util__method_ptrs_in_scalars_3_p_0_1(
  MR_Box ml_backend__ml_util__closure_arg,
  MR_Box ml_backend__ml_util__wrapper_arg_1,
  MR_Box ml_backend__ml_util__wrapper_arg_2,
  MR_Box * ml_backend__ml_util__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_util__closure = ml_backend__ml_util__closure_arg;
    MR_Word ml_backend__ml_util__conv0_STATE_VARIABLE_CodeAddrsInConsts_10;

    {
      ml_backend__ml_util__method_ptrs_in_initializer_3_p_0(((MR_Word) ml_backend__ml_util__wrapper_arg_1), ((MR_Word) ml_backend__ml_util__wrapper_arg_2), &ml_backend__ml_util__conv0_STATE_VARIABLE_CodeAddrsInConsts_10);
    }
    *ml_backend__ml_util__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_util__conv0_STATE_VARIABLE_CodeAddrsInConsts_10));
  }
}

void MR_CALL 
ml_backend__ml_util__method_ptrs_in_scalars_3_p_0(
  MR_Word ml_backend__ml_util__Cord_4,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_6,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_7)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Box ml_backend__ml_util__conv1_STATE_VARIABLE_CodeAddrsInConsts_7;

    {
      mercury__cord__foldl_pred_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_util__ml_backend__ml_util__type_ctor_info_code_addrs_in_consts_0, (MR_Word) &ml_backend__ml_util_scalar_common_2[1], ml_backend__ml_util__Cord_4, ((MR_Box) (ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_6)), &ml_backend__ml_util__conv1_STATE_VARIABLE_CodeAddrsInConsts_7);
    }
    *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_7 = ((MR_Word) ml_backend__ml_util__conv1_STATE_VARIABLE_CodeAddrsInConsts_7);
  }
}

void MR_CALL 
ml_backend__ml_util__method_ptrs_in_defns_3_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2,
  MR_Word * ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;

        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_3 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2;
        else
          {
            MR_Word ml_backend__ml_util__Defn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__Defns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12;

            switch (MR_tag((MR_Word) ml_backend__ml_util__Defn_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_util__DataDefn_18 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_7), (MR_Integer) 0);
                  MR_Word ml_backend__ml_util__Initializer_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_18, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_18, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_18, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_18, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util___Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_18, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_util___GCStatement_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_18, (MR_Integer) 5)));

                  {
                    ml_backend__ml_util__method_ptrs_in_initializer_3_p_0(ml_backend__ml_util__Initializer_23, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_util__FunctionDefn_25 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_7), (MR_Integer) 1);
                  MR_Word ml_backend__ml_util__Body_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_25, (MR_Integer) 5)));
                  MR_Word ml_backend__ml_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_25, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_25, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_25, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util___MaybeID_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_25, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_util___Params_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_25, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_util___Attributes_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_25, (MR_Integer) 6)));
                  MR_Word ml_backend__ml_util___EnvVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_25, (MR_Integer) 7)));
                  MR_Word ml_backend__ml_util___MaybeRequireTailrecInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_25, (MR_Integer) 8)));

                  if ((ml_backend__ml_util__Body_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2;
                  else
                    {
                      MR_Word ml_backend__ml_util__Statement_35 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Body_31), (MR_Integer) 1);

                      {
                        ml_backend__ml_util__method_ptrs_in_statement_3_p_0(ml_backend__ml_util__Statement_35, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12);
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_util__ClassDefn_36 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_7), (MR_Integer) 2);
                  MR_Word ml_backend__ml_util__Ctors_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_36, (MR_Integer) 8)));
                  MR_Word ml_backend__ml_util__Members_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_36, (MR_Integer) 9)));
                  MR_Word ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_37_47;
                  MR_Word ml_backend__ml_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_36, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_util__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_36, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_36, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_36, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_util__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_36, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_util__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_36, (MR_Integer) 5)));
                  MR_Word ml_backend__ml_util__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_36, (MR_Integer) 6)));
                  MR_Word ml_backend__ml_util__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_36, (MR_Integer) 7)));

                  {
                    ml_backend__ml_util__method_ptrs_in_defns_3_p_0(ml_backend__ml_util__Ctors_45, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_37_47);
                  }
                  {
                    ml_backend__ml_util__method_ptrs_in_defns_3_p_0(ml_backend__ml_util__Members_46, ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_37_47, &ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12);
                  }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Defns_8;
              MR_Word ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2 = ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_12_12;

              ml_backend__ml_util__STATE_VARIABLE_CodeAddrsInConsts_0_2 = ml_backend__ml_util__next_value_of_STATE_VARIABLE_CodeAddrsInConsts_0_2;
              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
ml_backend__ml_util__init_code_addrs_in_consts_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__1_1;
    MR_Word ml_backend__ml_util__Var_2;
    MR_Word ml_backend__ml_util__Var_3;

    {
      ml_backend__ml_util__Var_2 = mercury__set_tree234__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0);
    }
    {
      ml_backend__ml_util__Var_3 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_util__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__1_1, 0) = ((MR_Box) (ml_backend__ml_util__Var_2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__1_1, 1) = ((MR_Box) (ml_backend__ml_util__Var_3));
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return ml_backend__ml_util__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__wrap_init_obj_1_f_0(
  MR_Word ml_backend__ml_util__Rval_3)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__2_2;

    {
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_3));
    }
    return ml_backend__ml_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_array_2_f_0(
  MR_Word ml_backend__ml_util__TypeInfo_for_T_7,
  MR_Word ml_backend__ml_util__Conv_4,
  MR_Word ml_backend__ml_util__List_5)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__3_3;
    MR_Word ml_backend__ml_util__Var_6;

    {
      ml_backend__ml_util__Var_6 = mercury__list__map_2_f_0(ml_backend__ml_util__TypeInfo_for_T_7, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_util__Conv_4, ml_backend__ml_util__List_5);
    }
    {
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__Var_6));
    }
    return ml_backend__ml_util__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_maybe_3_f_0(
  MR_Word ml_backend__ml_util__TypeInfo_for_T_10,
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2,
  MR_Word ml_backend__ml_util__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__4_4;

    if ((ml_backend__ml_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ml_backend__ml_util__Var_12;
        MR_Word ml_backend__ml_util__Var_13;

        {
          ml_backend__ml_util__Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_13, 1) = ((MR_Box) (ml_backend__ml_util__HeadVar__1_1));
        }
        {
          ml_backend__ml_util__Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_12, 1) = ((MR_Box) (ml_backend__ml_util__Var_13));
        }
        {
          ml_backend__ml_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__ml_util__Var_12));
        }
      }
    else
      {
        MR_Box ml_backend__ml_util__X_7 = (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, (MR_Integer) 0));
        MR_Box MR_CALL (* ml_backend__ml_util__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box ml_backend__ml_util__conv1_HeadVar__4_4;

        {
          ml_backend__ml_util__conv1_HeadVar__4_4 = ml_backend__ml_util__func_0(((MR_Box) ml_backend__ml_util__HeadVar__2_2), ml_backend__ml_util__X_7);
        }
        ml_backend__ml_util__HeadVar__4_4 = ((MR_Word) ml_backend__ml_util__conv1_HeadVar__4_4);
      }
    return ml_backend__ml_util__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_reserved_address_2_f_0(
  MR_Word ml_backend__ml_util__ModuleInfo_4,
  MR_Word ml_backend__ml_util__ReservedAddress_5)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__3_3;
    MR_Word ml_backend__ml_util__Var_6;

    {
      ml_backend__ml_util__Var_6 = ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(ml_backend__ml_util__ModuleInfo_4, ml_backend__ml_util__ReservedAddress_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
    }
    {
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__Var_6));
    }
    return ml_backend__ml_util__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_null_pointer_1_f_0(
  MR_Word ml_backend__ml_util__Type_3)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__2_2;
    MR_Word ml_backend__ml_util__Var_4;
    MR_Word ml_backend__ml_util__Var_5;

    {
      ml_backend__ml_util__Var_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_5, 1) = ((MR_Box) (ml_backend__ml_util__Type_3));
    }
    {
      ml_backend__ml_util__Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_4, 1) = ((MR_Box) (ml_backend__ml_util__Var_5));
    }
    {
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Var_4));
    }
    return ml_backend__ml_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_foreign_2_f_0(
  MR_Word ml_backend__ml_util__Lang_4,
  MR_String ml_backend__ml_util__String_5)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__3_3;
    MR_Word ml_backend__ml_util__Var_6;
    MR_Word ml_backend__ml_util__Var_7;

    {
      ml_backend__ml_util__Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 1) = ((MR_Box) (ml_backend__ml_util__Lang_4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 2) = ((MR_Box) (ml_backend__ml_util__String_5));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    {
      ml_backend__ml_util__Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_6, 1) = ((MR_Box) (ml_backend__ml_util__Var_7));
    }
    {
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__Var_6));
    }
    return ml_backend__ml_util__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_builtin_const_1_f_0(
  MR_String ml_backend__ml_util__Name_3)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__2_2;
    MR_Word ml_backend__ml_util__Rval_4;
    MR_Word ml_backend__ml_util__PrivateBuiltin_5;
    MR_Word ml_backend__ml_util__MLDS_Module_6;
    MR_Word ml_backend__ml_util__VarName_7;
    MR_Word ml_backend__ml_util__Var_9;
    MR_Word ml_backend__ml_util__Var_10;
    MR_Word ml_backend__ml_util__Var_11;

    {
      ml_backend__ml_util__PrivateBuiltin_5 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      ml_backend__ml_util__MLDS_Module_6 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_util__PrivateBuiltin_5);
    }
    {
      ml_backend__ml_util__Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_9, 1) = ((MR_Box) (ml_backend__ml_util__Name_3));
    }
    {
      ml_backend__ml_util__VarName_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__VarName_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__VarName_7, 1) = ((MR_Box) (ml_backend__ml_util__Var_9));
    }
    {
      ml_backend__ml_util__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_11, 0) = ((MR_Box) (ml_backend__ml_util__MLDS_Module_6));
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_11, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_11, 2) = ((MR_Box) (ml_backend__ml_util__VarName_7));
    }
    {
      ml_backend__ml_util__Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_10, 0) = ((MR_Box) (ml_backend__ml_util__Var_11));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    {
      ml_backend__ml_util__Rval_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, 0) = ((MR_Box) (ml_backend__ml_util__Var_10));
    }
    {
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_4));
    }
    return ml_backend__ml_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_string_1_f_0(
  MR_String ml_backend__ml_util__String_3)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__2_2;
    MR_Word ml_backend__ml_util__Var_4;
    MR_Word ml_backend__ml_util__Var_5;

    {
      ml_backend__ml_util__Var_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_5, 1) = ((MR_Box) (ml_backend__ml_util__String_3));
    }
    {
      ml_backend__ml_util__Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_4, 1) = ((MR_Box) (ml_backend__ml_util__Var_5));
    }
    {
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Var_4));
    }
    return ml_backend__ml_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_boxed_int_1_f_0(
  MR_Integer ml_backend__ml_util__Int_3)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__2_2;
    MR_Word ml_backend__ml_util__Var_4;
    MR_Word ml_backend__ml_util__Var_7;
    MR_Word ml_backend__ml_util__Var_8;

    {
      ml_backend__ml_util__Var_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__Var_8, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
    }
    {
      ml_backend__ml_util__Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 1) = ((MR_Box) (ml_backend__ml_util__Var_8));
    }
    {
      ml_backend__ml_util__Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_4, 1) = ((MR_Box) (&ml_backend__ml_util_scalar_common_4[2]));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_4, 2) = ((MR_Box) (ml_backend__ml_util__Var_7));
    }
    {
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Var_4));
    }
    return ml_backend__ml_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_int_1_f_0(
  MR_Integer ml_backend__ml_util__Int_3)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__2_2;
    MR_Word ml_backend__ml_util__Var_4;
    MR_Word ml_backend__ml_util__Var_5;

    {
      ml_backend__ml_util__Var_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__Var_5, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
    }
    {
      ml_backend__ml_util__Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_4, 1) = ((MR_Box) (ml_backend__ml_util__Var_5));
    }
    {
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Var_4));
    }
    return ml_backend__ml_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_bool_1_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__2_2;

    switch (ml_backend__ml_util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_4[0]);
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_4[1]);
        }
        break;
    }
    return ml_backend__ml_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__lval_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Lval_4,
  MR_Word ml_backend__ml_util__DataName_5)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__ContainsVar_6;

    switch (MR_tag((MR_Word) ml_backend__ml_util__Lval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_util__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util___MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___FieldId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 2)));
          MR_Word ml_backend__ml_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 3)));
          MR_Word ml_backend__ml_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 4)));

          {
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_8, ml_backend__ml_util__DataName_5);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_util__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));

          {
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_19, ml_backend__ml_util__DataName_5);
          }
        }
        break;
      case (MR_Integer) 2:
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__ml_util__ModuleName_14;
          MR_Word ml_backend__ml_util__QualKind_15;
          MR_Word ml_backend__ml_util__Name_16;
          MR_Word ml_backend__ml_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util__Var_18;
          MR_Word ml_backend__ml_util__Var_22;
          MR_Word ml_backend__ml_util__Var_23;
          MR_Word ml_backend__ml_util__Var_24;

          ml_backend__ml_util__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_17, (MR_Integer) 0)));
          ml_backend__ml_util__QualKind_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_17, (MR_Integer) 1)));
          ml_backend__ml_util__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_17, (MR_Integer) 2)));
          ml_backend__ml_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
          ml_backend__ml_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));
          ml_backend__ml_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
          {
            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_14, ml_backend__ml_util__Var_22);
          }
          if (ml_backend__ml_util__succeeded)
            {
              ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_15 == ml_backend__ml_util__Var_23);
              if (ml_backend__ml_util__succeeded)
                {
                  ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Var_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_18, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (ml_backend__ml_util__succeeded)
                    {
                      ml_backend__ml_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_18, (MR_Integer) 1)));
                      {
                        ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_util__Name_16, ml_backend__ml_util__Var_24);
                      }
                    }
                }
            }
          if (ml_backend__ml_util__succeeded)
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
          else
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
        }
        break;
    }
    return ml_backend__ml_util__ContainsVar_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__lvals_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;
        MR_Word ml_backend__ml_util__HeadVar__3_3;

        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word ml_backend__ml_util__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__Lvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util__LvalContainsVar_9;

            {
              ml_backend__ml_util__LvalContainsVar_9 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_5, ml_backend__ml_util__HeadVar__2_2);
            }
            switch (ml_backend__ml_util__LvalContainsVar_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Lvals_6;

                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                break;
            }
          }
        return ml_backend__ml_util__HeadVar__3_3;
      }
      break;
    }
}

MR_Word MR_CALL 
ml_backend__ml_util__rval_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Rval_4,
  MR_Word ml_backend__ml_util__DataName_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;
        MR_Word ml_backend__ml_util__ContainsVar_6;

        switch (MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_util__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

              {
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_7, ml_backend__ml_util__DataName_5);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_util__SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_util___Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_util__next_value_of_Rval_4 = ml_backend__ml_util__SubRval_9;

                ml_backend__ml_util__Rval_4 = ml_backend__ml_util__next_value_of_Rval_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_util__Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ml_backend__ml_util__Const_10)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ml_backend__ml_util__DataAddr_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Const_10), (MR_Integer) 1);
                        MR_Word ml_backend__ml_util__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataAddr_11, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_util__RawDataName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataAddr_11, (MR_Integer) 1)));
                        MR_Word ml_backend__ml_util__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_util__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_util___QualKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_12, ml_backend__ml_util__Var_41);
                        }
                        if (ml_backend__ml_util__succeeded)
                          {
                            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__RawDataName_13, ml_backend__ml_util__Var_42);
                          }
                        if (ml_backend__ml_util__succeeded)
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                        else
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 2:
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_util__RvalA_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util___Op_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_Rval_4 = ml_backend__ml_util__RvalA_30;

                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__next_value_of_Rval_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_util__RvalB_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_util__RvalAContainsVar_32;
                  MR_Word ml_backend__ml_util__RvalA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util___Op_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__RvalAContainsVar_32 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__RvalA_39, ml_backend__ml_util__DataName_5);
                  }
                  switch (ml_backend__ml_util__RvalAContainsVar_32) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_util__next_value_of_Rval_4 = ml_backend__ml_util__RvalB_31;

                          ml_backend__ml_util__Rval_4 = ml_backend__ml_util__next_value_of_Rval_4;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__ml_util__Lval_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_40, ml_backend__ml_util__DataName_5);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__ml_util__IndexRval_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util___VectorCommon_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_Rval_4 = ml_backend__ml_util__IndexRval_35;

                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__next_value_of_Rval_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 5:
                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                break;
            }
            break;
        }
        return ml_backend__ml_util__ContainsVar_6;
      }
      break;
    }
}

MR_Word MR_CALL 
ml_backend__ml_util__maybe_rval_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__3_3;

    if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));

        {
          ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
        }
      }
    return ml_backend__ml_util__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__rvals_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;
        MR_Word ml_backend__ml_util__HeadVar__3_3;

        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__Rvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util__RvalContainsVar_9;

            {
              ml_backend__ml_util__RvalContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
            }
            switch (ml_backend__ml_util__RvalContainsVar_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Rvals_6;

                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                break;
            }
          }
        return ml_backend__ml_util__HeadVar__3_3;
      }
      break;
    }
}

MR_Word MR_CALL 
ml_backend__ml_util__initializer_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Initializer_4,
  MR_Word ml_backend__ml_util__DataName_5)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__ContainsVar_6;

    switch (MR_tag((MR_Word) ml_backend__ml_util__Initializer_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_util__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

          {
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_7, ml_backend__ml_util__DataName_5);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_util__FieldInitializers_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util___Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

          {
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__FieldInitializers_9, ml_backend__ml_util__DataName_5);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__ml_util__ElementInitializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

          {
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__ElementInitializers_10, ml_backend__ml_util__DataName_5);
          }
        }
        break;
    }
    return ml_backend__ml_util__ContainsVar_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__function_defn_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__FunctionDefn_4,
  MR_Word ml_backend__ml_util__DataName_5)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__ContainsVar_6;
    MR_Word ml_backend__ml_util__FunctionBody_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_4, (MR_Integer) 5)));
    MR_Word ml_backend__ml_util___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_util___Ctxt_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_util___Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_util___PredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_util___Params_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_4, (MR_Integer) 4)));
    MR_Word ml_backend__ml_util___Attrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_4, (MR_Integer) 6)));
    MR_Word ml_backend__ml_util___EnvVarNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_4, (MR_Integer) 7)));
    MR_Word ml_backend__ml_util___MaybeRequireTailrecInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_4, (MR_Integer) 8)));

    if ((ml_backend__ml_util__FunctionBody_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_util__Statement_19 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__FunctionBody_12), (MR_Integer) 1);

        {
          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_19, ml_backend__ml_util__DataName_5);
        }
      }
    return ml_backend__ml_util__ContainsVar_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__defn_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Defn_4,
  MR_Word ml_backend__ml_util__DataName_5)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__ContainsVar_6;

    switch (MR_tag((MR_Word) ml_backend__ml_util__Defn_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_util__DataDefn_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_4), (MR_Integer) 0);
          MR_Word ml_backend__ml_util__Initializer_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_7, (MR_Integer) 4)));
          MR_Word ml_backend__ml_util___Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_7, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___Ctxt_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_7, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util___Flags_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_7, (MR_Integer) 2)));
          MR_Word ml_backend__ml_util___Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_7, (MR_Integer) 3)));
          MR_Word ml_backend__ml_util___GCStatement_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_7, (MR_Integer) 5)));

          {
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_12, ml_backend__ml_util__DataName_5);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_util__FunctionDefn_14 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_4), (MR_Integer) 1);
          MR_Word ml_backend__ml_util__FunctionBody_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_14, (MR_Integer) 5)));
          MR_Word ml_backend__ml_util___Name_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_14, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___Ctxt_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_14, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util___Flags_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_14, (MR_Integer) 2)));
          MR_Word ml_backend__ml_util___PredProcId_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_14, (MR_Integer) 3)));
          MR_Word ml_backend__ml_util___Params_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_14, (MR_Integer) 4)));
          MR_Word ml_backend__ml_util___Attrs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_14, (MR_Integer) 6)));
          MR_Word ml_backend__ml_util___EnvVarNames_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_14, (MR_Integer) 7)));
          MR_Word ml_backend__ml_util___MaybeRequireTailrecInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_14, (MR_Integer) 8)));

          {
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__function_body_contains_var_2_f_0(ml_backend__ml_util__FunctionBody_38, ml_backend__ml_util__DataName_5);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_util__ClassDefn_15 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_4), (MR_Integer) 2);
          MR_Word ml_backend__ml_util__CtorDefns_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 8)));
          MR_Word ml_backend__ml_util__FieldDefns_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 9)));
          MR_Word ml_backend__ml_util__FieldDefnsContainVar_23;
          MR_Word ml_backend__ml_util___Kind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 3)));
          MR_Word ml_backend__ml_util___Imports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 4)));
          MR_Word ml_backend__ml_util___Inherits_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 5)));
          MR_Word ml_backend__ml_util___Implements_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 6)));
          MR_Word ml_backend__ml_util___TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 7)));
          MR_Word ml_backend__ml_util___Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___Ctxt_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util___Flags_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 2)));

          {
            ml_backend__ml_util__FieldDefnsContainVar_23 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__FieldDefns_22, ml_backend__ml_util__DataName_5);
          }
          switch (ml_backend__ml_util__FieldDefnsContainVar_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__CtorDefns_21, ml_backend__ml_util__DataName_5);
              }
              break;
            case (MR_Integer) 1:
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
              break;
          }
        }
        break;
    }
    return ml_backend__ml_util__ContainsVar_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__defns_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;
        MR_Word ml_backend__ml_util__HeadVar__3_3;

        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word ml_backend__ml_util__Defn_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__Defns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util__DefnContainsVar_9;

            {
              ml_backend__ml_util__DefnContainsVar_9 = ml_backend__ml_util__defn_contains_var_2_f_0(ml_backend__ml_util__Defn_5, ml_backend__ml_util__HeadVar__2_2);
            }
            switch (ml_backend__ml_util__DefnContainsVar_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Defns_6;

                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                break;
            }
          }
        return ml_backend__ml_util__HeadVar__3_3;
      }
      break;
    }
}

MR_bool MR_CALL 
ml_backend__ml_util__defn_is_rtti_data_2_p_0(
  MR_Word ml_backend__ml_util__Defn_3,
  MR_Word * ml_backend__ml_util__DataDefn_4)
{
  {
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Defn_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ml_backend__ml_util__Var_6;
    MR_Word ml_backend__ml_util__Var_7;
    MR_Word ml_backend__ml_util__Var_8;
    MR_Word ml_backend__ml_util__Var_9;
    MR_Word ml_backend__ml_util__Var_10;
    MR_Word ml_backend__ml_util__Var_11;
    MR_Word ml_backend__ml_util__Var_5;

    if (ml_backend__ml_util__succeeded)
      {
        *ml_backend__ml_util__DataDefn_4 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_3), (MR_Integer) 0);
        ml_backend__ml_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 0)));
        ml_backend__ml_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 1)));
        ml_backend__ml_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 2)));
        ml_backend__ml_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 3)));
        ml_backend__ml_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 4)));
        ml_backend__ml_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 5)));
        ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Var_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_6, (MR_Integer) 0)))) == (MR_Integer) 7)));
        if (ml_backend__ml_util__succeeded)
          ml_backend__ml_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_6, (MR_Integer) 1)));
      }
    return ml_backend__ml_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__defn_is_enum_const_2_p_0(
  MR_Word ml_backend__ml_util__Defn_3,
  MR_Word * ml_backend__ml_util__DataDefn_4)
{
  {
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Defn_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ml_backend__ml_util__Flags_5;
    MR_Word ml_backend__ml_util__Var_6;
    MR_Word ml_backend__ml_util__Var_7;
    MR_Word ml_backend__ml_util__Var_8;
    MR_Word ml_backend__ml_util__Var_9;
    MR_Word ml_backend__ml_util__Var_10;
    MR_Word ml_backend__ml_util__Var_11;

    if (ml_backend__ml_util__succeeded)
      {
        *ml_backend__ml_util__DataDefn_4 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_3), (MR_Integer) 0);
        ml_backend__ml_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 0)));
        ml_backend__ml_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 1)));
        ml_backend__ml_util__Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 2)));
        ml_backend__ml_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 3)));
        ml_backend__ml_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 4)));
        ml_backend__ml_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 5)));
        {
          ml_backend__ml_util__Var_6 = ml_backend__mlds__get_data_constness_1_f_0(ml_backend__ml_util__Flags_5);
        }
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__Var_6 == (MR_Integer) 1);
      }
    return ml_backend__ml_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__defn_is_public_1_p_0(
  MR_Word ml_backend__ml_util__Defn_2)
{
  {
    MR_bool ml_backend__ml_util__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_util__Defn_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_util__DataDefn_3 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_2), (MR_Integer) 0);
          MR_Word ml_backend__ml_util__DataFlags_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_3, (MR_Integer) 2)));
          MR_Word ml_backend__ml_util__Var_11;
          MR_Word ml_backend__ml_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_3, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_3, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_3, (MR_Integer) 3)));
          MR_Word ml_backend__ml_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_3, (MR_Integer) 4)));
          MR_Word ml_backend__ml_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_3, (MR_Integer) 5)));

          {
            ml_backend__ml_util__Var_11 = ml_backend__mlds__get_data_access_1_f_0(ml_backend__ml_util__DataFlags_4);
          }
          ml_backend__ml_util__succeeded = (ml_backend__ml_util__Var_11 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_util__FuncDefn_5 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_2), (MR_Integer) 1);
          MR_Word ml_backend__ml_util__FuncFlags_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_util__Var_10;
          MR_Word ml_backend__ml_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 3)));
          MR_Word ml_backend__ml_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 4)));
          MR_Word ml_backend__ml_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 5)));
          MR_Word ml_backend__ml_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 6)));
          MR_Word ml_backend__ml_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 7)));
          MR_Word ml_backend__ml_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 8)));

          {
            ml_backend__ml_util__Var_10 = ml_backend__mlds__get_function_access_1_f_0(ml_backend__ml_util__FuncFlags_6);
          }
          ml_backend__ml_util__succeeded = (ml_backend__ml_util__Var_10 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_util__ClassDefn_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_2), (MR_Integer) 2);
          MR_Word ml_backend__ml_util__ClassFlags_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_7, (MR_Integer) 2)));
          MR_Word ml_backend__ml_util__Var_9;
          MR_Word ml_backend__ml_util__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_7, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_7, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_7, (MR_Integer) 3)));
          MR_Word ml_backend__ml_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_7, (MR_Integer) 4)));
          MR_Word ml_backend__ml_util__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_7, (MR_Integer) 5)));
          MR_Word ml_backend__ml_util__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_7, (MR_Integer) 6)));
          MR_Word ml_backend__ml_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_7, (MR_Integer) 7)));
          MR_Word ml_backend__ml_util__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_7, (MR_Integer) 8)));
          MR_Word ml_backend__ml_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_7, (MR_Integer) 9)));

          {
            ml_backend__ml_util__Var_9 = ml_backend__mlds__get_class_access_1_f_0(ml_backend__ml_util__ClassFlags_8);
          }
          ml_backend__ml_util__succeeded = (ml_backend__ml_util__Var_9 == (MR_Integer) 0);
        }
        break;
    }
    return ml_backend__ml_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__defn_is_commit_type_var_1_p_0(
  MR_Word ml_backend__ml_util__Defn_2)
{
  {
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Defn_2)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ml_backend__ml_util__DataDefn_3;
    MR_Word ml_backend__ml_util__Var_4;
    MR_Word ml_backend__ml_util__Var_5;
    MR_Word ml_backend__ml_util__Var_6;
    MR_Word ml_backend__ml_util__Var_7;
    MR_Word ml_backend__ml_util__Var_8;
    MR_Word ml_backend__ml_util__Var_9;

    if (ml_backend__ml_util__succeeded)
      {
        ml_backend__ml_util__DataDefn_3 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_2), (MR_Integer) 0);
        ml_backend__ml_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_3, (MR_Integer) 0)));
        ml_backend__ml_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_3, (MR_Integer) 1)));
        ml_backend__ml_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_3, (MR_Integer) 2)));
        ml_backend__ml_util__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_3, (MR_Integer) 3)));
        ml_backend__ml_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_3, (MR_Integer) 4)));
        ml_backend__ml_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataDefn_3, (MR_Integer) 5)));
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__Var_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    return ml_backend__ml_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__defn_is_type_ctor_info_2_p_0(
  MR_Word ml_backend__ml_util__Defn_3,
  MR_Word * ml_backend__ml_util__DataDefn_4)
{
  {
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Defn_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ml_backend__ml_util__Type_8;
    MR_Word ml_backend__ml_util__RttiId_11;
    MR_Word ml_backend__ml_util__RttiName_13;
    MR_Word ml_backend__ml_util__Var_14;
    MR_Word ml_backend__ml_util___Name_5;
    MR_Word ml_backend__ml_util___Context_6;
    MR_Word ml_backend__ml_util___Flags_7;
    MR_Word ml_backend__ml_util__Var_9;
    MR_Word ml_backend__ml_util__Var_10;
    MR_Word ml_backend__ml_util__Var_12;

    if (ml_backend__ml_util__succeeded)
      {
        *ml_backend__ml_util__DataDefn_4 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_3), (MR_Integer) 0);
        ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 0)));
        ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 1)));
        ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 2)));
        ml_backend__ml_util__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 3)));
        ml_backend__ml_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 4)));
        ml_backend__ml_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ml_backend__ml_util__DataDefn_4, (MR_Integer) 5)));
        ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Type_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_8, (MR_Integer) 0)))) == (MR_Integer) 7)));
        if (ml_backend__ml_util__succeeded)
          {
            ml_backend__ml_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_8, (MR_Integer) 1)));
            ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Var_14)) == (MR_mktag((MR_Integer) 0)));
            if (ml_backend__ml_util__succeeded)
              {
                ml_backend__ml_util__RttiId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_14, (MR_Integer) 0)));
                ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__RttiId_11)) == (MR_mktag((MR_Integer) 0)));
                if (ml_backend__ml_util__succeeded)
                  {
                    ml_backend__ml_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_11, (MR_Integer) 0)));
                    ml_backend__ml_util__RttiName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_11, (MR_Integer) 1)));
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__RttiName_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
                  }
              }
          }
      }
    return ml_backend__ml_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__defn_is_function_2_p_0(
  MR_Word ml_backend__ml_util__Defn_3,
  MR_Word * ml_backend__ml_util__FuncDefn_4)
{
  {
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Defn_3)) == (MR_mktag((MR_Integer) 1)));

    if (ml_backend__ml_util__succeeded)
      *ml_backend__ml_util__FuncDefn_4 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_3), (MR_Integer) 1);
    return ml_backend__ml_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__defn_is_type_2_p_0(
  MR_Word ml_backend__ml_util__Defn_3,
  MR_Word * ml_backend__ml_util__ClassDefn_4)
{
  {
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Defn_3)) == (MR_mktag((MR_Integer) 2)));

    if (ml_backend__ml_util__succeeded)
      *ml_backend__ml_util__ClassDefn_4 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_3), (MR_Integer) 2);
    return ml_backend__ml_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__defn_is_data_2_p_0(
  MR_Word ml_backend__ml_util__Defn_3,
  MR_Word * ml_backend__ml_util__DataDefn_4)
{
  {
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Defn_3)) == (MR_mktag((MR_Integer) 0)));

    if (ml_backend__ml_util__succeeded)
      *ml_backend__ml_util__DataDefn_4 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_3), (MR_Integer) 0);
    return ml_backend__ml_util__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    {
      MR_Word ml_backend__ml_util__Var_9;
      MR_Word ml_backend__ml_util__Var_10;
      MR_Word ml_backend__ml_util__Var_11;
      MR_String ml_backend__ml_util__Var_12;

      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_7, (MR_Integer) 0)));
      ml_backend__ml_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_7, (MR_Integer) 1)));
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_8, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
        {
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_8, (MR_Integer) 1)));
          {
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Var_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Var_14, (MR_Integer) 0)))) == (MR_Integer) 7)));
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
              {
                {
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Var_14, (MR_Integer) 1)));
                  ml_backend__ml_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Var_14, (MR_Integer) 2)));
                  ml_backend__ml_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Var_14, (MR_Integer) 3)));
                  ml_backend__ml_util__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Var_14, (MR_Integer) 4)));
                }
                {
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Var_23);
                  if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
                    {
                      ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(ml_backend__ml_util__env_ptr);
                    }
                }
              }
          }
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ml_backend__ml_util__FunctionDefn_5;
          MR_Word ml_backend__ml_util__FunctionBody_6;
          MR_Word ml_backend__ml_util__Var_13;
          MR_Word ml_backend__ml_util__Var_15;
          MR_Word ml_backend__ml_util__Var_16;
          MR_Word ml_backend__ml_util__Var_17;
          MR_Word ml_backend__ml_util__Var_18;
          MR_Word ml_backend__ml_util__Var_19;
          MR_Word ml_backend__ml_util__Var_20;
          MR_Word ml_backend__ml_util__Var_21;
          MR_Word ml_backend__ml_util__Var_22;

          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4)) == (MR_mktag((MR_Integer) 1)));
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
            {
              ml_backend__ml_util__FunctionDefn_5 = (MR_Word) MR_body(((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4), (MR_Integer) 1);
              {
                ml_backend__ml_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 0)));
                ml_backend__ml_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 1)));
                ml_backend__ml_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 2)));
                ml_backend__ml_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 3)));
                ml_backend__ml_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 4)));
                ml_backend__ml_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 5)));
                ml_backend__ml_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 6)));
                ml_backend__ml_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 7)));
                ml_backend__ml_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 8)));
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Var_13)) == (MR_mktag((MR_Integer) 1)));
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
                  {
                    ml_backend__ml_util__FunctionBody_6 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Var_13), (MR_Integer) 1);
                    {
                      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_7 = ml_backend__ml_util__FunctionBody_6;
                      {
                        ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(ml_backend__ml_util__env_ptr);
                      }
                      {
                        MR_Word ml_backend__ml_util__Stmt_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_6, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_util___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_6, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_27, &(ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_7, ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2, ml_backend__ml_util__env_ptr);
                        }
                      }
                    }
                  }
              }
            }
        }
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0(
  MR_Word ml_backend__ml_util__ForeignLang_3,
  MR_Word ml_backend__ml_util__Defn_4)
{
  {
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s ml_backend__ml_util__env;

    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3 = ml_backend__ml_util__ForeignLang_3;
    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4 = ml_backend__ml_util__Defn_4;
    {
      ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(&ml_backend__ml_util__env);
    }
    return (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    {
      MR_Word ml_backend__ml_util__Var_9;

      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_7, (MR_Integer) 0)));
      ml_backend__ml_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_7, (MR_Integer) 1)));
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_8, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
        {
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_8, (MR_Integer) 1)));
          {
            if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Var_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Var_27, (MR_Integer) 0)))) == (MR_Integer) 6))))
              {
                MR_Word ml_backend__ml_util__TargetLang_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Var_27, (MR_Integer) 1)));
                MR_Word ml_backend__ml_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Var_27, (MR_Integer) 2)));

                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = (ml_backend__ml_util__TargetLang_10 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3);
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = !((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded);
              }
            else
            if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Var_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Var_27, (MR_Integer) 0)))) == (MR_Integer) 7))))
              (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_TRUE;
            else
              (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_FALSE;
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
              {
                ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(ml_backend__ml_util__env_ptr);
              }
          }
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ml_backend__ml_util__FunctionDefn_5;
          MR_Word ml_backend__ml_util__FunctionBody_6;
          MR_Word ml_backend__ml_util__Var_16;
          MR_Word ml_backend__ml_util__Var_19;
          MR_Word ml_backend__ml_util__Var_20;
          MR_Word ml_backend__ml_util__Var_21;
          MR_Word ml_backend__ml_util__Var_22;
          MR_Word ml_backend__ml_util__Var_23;
          MR_Word ml_backend__ml_util__Var_24;
          MR_Word ml_backend__ml_util__Var_25;
          MR_Word ml_backend__ml_util__Var_26;

          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4)) == (MR_mktag((MR_Integer) 1)));
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
            {
              ml_backend__ml_util__FunctionDefn_5 = (MR_Word) MR_body(((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4), (MR_Integer) 1);
              {
                ml_backend__ml_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 0)));
                ml_backend__ml_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 1)));
                ml_backend__ml_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 2)));
                ml_backend__ml_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 3)));
                ml_backend__ml_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 4)));
                ml_backend__ml_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 5)));
                ml_backend__ml_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 6)));
                ml_backend__ml_util__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 7)));
                ml_backend__ml_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionDefn_5, (MR_Integer) 8)));
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Var_16)) == (MR_mktag((MR_Integer) 1)));
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
                  {
                    ml_backend__ml_util__FunctionBody_6 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Var_16), (MR_Integer) 1);
                    {
                      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_7 = ml_backend__ml_util__FunctionBody_6;
                      {
                        ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(ml_backend__ml_util__env_ptr);
                      }
                      {
                        MR_Word ml_backend__ml_util__Stmt_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_6, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_util___Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_6, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_31, &(ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_7, ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2, ml_backend__ml_util__env_ptr);
                        }
                      }
                    }
                  }
              }
            }
        }
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0(
  MR_Word ml_backend__ml_util__NativeTargetLang_3,
  MR_Word ml_backend__ml_util__Defn_4)
{
  {
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s ml_backend__ml_util__env;

    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3 = ml_backend__ml_util__NativeTargetLang_3;
    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4 = ml_backend__ml_util__Defn_4;
    {
      ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(&ml_backend__ml_util__env);
    }
    return (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12));
    {
      ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
  MR_Box ml_backend__ml_util__closure_arg,
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr)
{
  {
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s ml_backend__ml_util__env;

    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1 = ml_backend__ml_util__wrapper_arg_1;
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont = ml_backend__ml_util__cont;
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
    {
      MR_Box ml_backend__ml_util__closure = ml_backend__ml_util__closure_arg;

      {
        ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__699__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__closure, (MR_Integer) 3))), &(ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12, ml_backend__ml_util__has_foreign_languages_2_p_0_1, &ml_backend__ml_util__env);
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0(
  MR_Word ml_backend__ml_util__Statement_3,
  MR_Word * ml_backend__ml_util__Langs_4)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__GetTargetCode_5;

    {
      ml_backend__ml_util__GetTargetCode_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 0) = ((MR_Box) (&ml_backend__ml_util_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 1) = ((MR_Box) (ml_backend__ml_util__has_foreign_languages_2_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 3) = ((MR_Box) (ml_backend__ml_util__Statement_3));
    }
    {
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ml_backend__ml_util__GetTargetCode_5, ml_backend__ml_util__Langs_4);
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__statement_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Statement_4,
  MR_Word ml_backend__ml_util__DataName_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded;
        MR_Word ml_backend__ml_util__ContainsVar_6;
        MR_Word ml_backend__ml_util__Stmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_util__Defns_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_7, (MR_Integer) 0)));
              MR_Word ml_backend__ml_util__Statements_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_7, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__DefnsContainVar_14;

              {
                ml_backend__ml_util__DefnsContainVar_14 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__Defns_12, ml_backend__ml_util__DataName_5);
              }
              switch (ml_backend__ml_util__DefnsContainVar_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statements_contains_var_2_f_0(ml_backend__ml_util__Statements_13, ml_backend__ml_util__DataName_5);
                  }
                  break;
                case (MR_Integer) 1:
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_util__Rval_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_7, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__Statement_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_7, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__RvalContainsVar_18;
              MR_Word ml_backend__ml_util___Kind_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_7, (MR_Integer) 0)));

              {
                ml_backend__ml_util__RvalContainsVar_18 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_16, ml_backend__ml_util__DataName_5);
              }
              switch (ml_backend__ml_util__RvalContainsVar_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word ml_backend__ml_util__next_value_of_Statement_4 = ml_backend__ml_util__Statement_17;

                      ml_backend__ml_util__Statement_4 = ml_backend__ml_util__next_value_of_Statement_4;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_util__Cond_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_7, (MR_Integer) 0)));
              MR_Word ml_backend__ml_util__Then_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_7, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__MaybeElse_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_7, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__CondContainsVar_22;

              {
                ml_backend__ml_util__CondContainsVar_22 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Cond_19, ml_backend__ml_util__DataName_5);
              }
              switch (ml_backend__ml_util__CondContainsVar_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_util__ThenContainsVar_23;

                    {
                      ml_backend__ml_util__ThenContainsVar_23 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Then_20, ml_backend__ml_util__DataName_5);
                    }
                    switch (ml_backend__ml_util__ThenContainsVar_23) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__maybe_statement_contains_var_2_f_0(ml_backend__ml_util__MaybeElse_21, ml_backend__ml_util__DataName_5);
                        }
                        break;
                      case (MR_Integer) 1:
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_util__Val_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__Cases_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_util__Default_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 5)));
                  MR_Word ml_backend__ml_util__ValContainsVar_29;
                  MR_Word ml_backend__ml_util___Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util___Range_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 3)));

                  {
                    ml_backend__ml_util__ValContainsVar_29 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Val_25, ml_backend__ml_util__DataName_5);
                  }
                  switch (ml_backend__ml_util__ValContainsVar_29) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__CasesContainsVar_30;

                        {
                          ml_backend__ml_util__CasesContainsVar_30 = ml_backend__ml_util__cases_contains_var_2_f_0(ml_backend__ml_util__Cases_27, ml_backend__ml_util__DataName_5);
                        }
                        switch (ml_backend__ml_util__CasesContainsVar_30) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__default_contains_var_2_f_0(ml_backend__ml_util__Default_28, ml_backend__ml_util__DataName_5);
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__ml_util__Rval_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util___Labels_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 2)));

                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_50, ml_backend__ml_util__DataName_5);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__ml_util__Func_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__Obj_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_util__Args_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_util__RetLvals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 5)));
                  MR_Word ml_backend__ml_util__FuncContainsVar_41;
                  MR_Word ml_backend__ml_util___Sig_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util___TailCall_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 6)));
                  MR_Word ml_backend__ml_util___Markers_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 7)));

                  {
                    ml_backend__ml_util__FuncContainsVar_41 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Func_35, ml_backend__ml_util__DataName_5);
                  }
                  switch (ml_backend__ml_util__FuncContainsVar_41) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__ObjContainsVar_42;

                        {
                          ml_backend__ml_util__ObjContainsVar_42 = ml_backend__ml_util__maybe_rval_contains_var_2_f_0(ml_backend__ml_util__Obj_36, ml_backend__ml_util__DataName_5);
                        }
                        switch (ml_backend__ml_util__ObjContainsVar_42) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word ml_backend__ml_util__ArgsContainVar_43;

                              {
                                ml_backend__ml_util__ArgsContainVar_43 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_37, ml_backend__ml_util__DataName_5);
                              }
                              switch (ml_backend__ml_util__ArgsContainVar_43) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_38, ml_backend__ml_util__DataName_5);
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                                  break;
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ml_backend__ml_util__Rvals_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Rvals_44, ml_backend__ml_util__DataName_5);
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ml_backend__ml_util__Handler_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_util__RefContainsVar_47;
                  MR_Word ml_backend__ml_util__Statement_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util__Ref_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__RefContainsVar_47 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Ref_52, ml_backend__ml_util__DataName_5);
                  }
                  switch (ml_backend__ml_util__RefContainsVar_47) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__StatementContainsVar_48;

                        {
                          ml_backend__ml_util__StatementContainsVar_48 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_51, ml_backend__ml_util__DataName_5);
                        }
                        switch (ml_backend__ml_util__StatementContainsVar_48) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              /* direct tailcall eliminated */
                              {
                                MR_Word ml_backend__ml_util__next_value_of_Statement_4 = ml_backend__ml_util__Handler_46;

                                ml_backend__ml_util__Statement_4 = ml_backend__ml_util__next_value_of_Statement_4;
                              }
                              continue;
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ml_backend__ml_util__Ref_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Ref_45, ml_backend__ml_util__DataName_5);
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ml_backend__ml_util__AtomicStmt_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_7, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__atomic_stmt_contains_var_2_f_0(ml_backend__ml_util__AtomicStmt_49, ml_backend__ml_util__DataName_5);
                  }
                }
                break;
            }
            break;
        }
        return ml_backend__ml_util__ContainsVar_6;
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_2(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Statement_41 = ((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv0_Statement_41);
    {
      ml_backend__ml_util__stmt_contains_statement_2_p_0_1(ml_backend__ml_util__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    {
      ml_backend__ml_util__statement_contains_statement_2_p_0((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Statement_41, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_4(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_54 = ((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv1_Case_54);
    {
      ml_backend__ml_util__stmt_contains_statement_2_p_0_3(ml_backend__ml_util__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_3(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    {
      MR_Word ml_backend__ml_util___FirstCond_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_54, (MR_Integer) 0)));
      MR_Word ml_backend__ml_util___LaterConds_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_54, (MR_Integer) 1)));

      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Statement_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_54, (MR_Integer) 2)));
      {
        ml_backend__ml_util__statement_contains_statement_2_p_0((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Statement_57, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0(
  MR_Word ml_backend__ml_util__Stmt_3,
  MR_Word * ml_backend__ml_util__SubStatement_4,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s ml_backend__ml_util__env;

    (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStatement_4 = ml_backend__ml_util__SubStatement_4;
    (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont = ml_backend__ml_util__cont;
    (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        {
          MR_bool ml_backend__ml_util__succeeded;

          switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) {
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_util__Statements_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
                MR_Word ml_backend__ml_util___Defns_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));

                {
                  mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, &(ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv0_Statement_41, ml_backend__ml_util__Statements_6, ml_backend__ml_util__stmt_contains_statement_2_p_0_2, &ml_backend__ml_util__env);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_util__Statement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
                MR_Word ml_backend__ml_util___Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));
                MR_Word ml_backend__ml_util___Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

                *((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStatement_4) = ml_backend__ml_util__Statement_9;
                {
                  ((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                }
                {
                  MR_Word ml_backend__ml_util__Stmt_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_9, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_util___Context_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_9, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_Stmt_3 = ml_backend__ml_util__Stmt_77;

                    ml_backend__ml_util__Stmt_3 = ml_backend__ml_util__next_value_of_Stmt_3;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ml_backend__ml_util__Then_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
                MR_Word ml_backend__ml_util__MaybeElse_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
                MR_Word ml_backend__ml_util___Cond_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));

                *((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStatement_4) = ml_backend__ml_util__Then_11;
                {
                  ((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                }
                {
                  MR_Word ml_backend__ml_util__Stmt_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_11, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_util___Context_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_11, (MR_Integer) 1)));

                  {
                    ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_46, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                  }
                }
                {
                  MR_Word ml_backend__ml_util__Statement_49;

                  ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__MaybeElse_12)) == (MR_mktag((MR_Integer) 1)));
                  if (ml_backend__ml_util__succeeded)
                    {
                      ml_backend__ml_util__Statement_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__MaybeElse_12, (MR_Integer) 0)));
                      {
                        ml_backend__ml_util__statement_contains_statement_2_p_0(ml_backend__ml_util__Statement_49, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                      }
                    }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)))) {
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_util__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 4)));
                    MR_Word ml_backend__ml_util__Default_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 5)));
                    MR_Word ml_backend__ml_util___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_util___Val_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
                    MR_Word ml_backend__ml_util___Range_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));

                    {
                      mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, &(ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv1_Case_54, ml_backend__ml_util__Cases_16, ml_backend__ml_util__stmt_contains_statement_2_p_0_4, &ml_backend__ml_util__env);
                    }
                    {
                      MR_Word ml_backend__ml_util__Statement_61;

                      ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Default_17)) == (MR_mktag((MR_Integer) 1)));
                      if (ml_backend__ml_util__succeeded)
                        {
                          ml_backend__ml_util__Statement_61 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Default_17), (MR_Integer) 1);
                          {
                            ml_backend__ml_util__statement_contains_statement_2_p_0(ml_backend__ml_util__Statement_61, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                          }
                        }
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word ml_backend__ml_util__Handler_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));
                    MR_Word ml_backend__ml_util__Statement_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
                    MR_Word ml_backend__ml_util___Ref_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

                    *((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStatement_4) = ml_backend__ml_util__Statement_32;
                    {
                      ((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                    }
                    {
                      MR_Word ml_backend__ml_util__Stmt_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_32, (MR_Integer) 0)));
                      MR_Word ml_backend__ml_util___Context_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_32, (MR_Integer) 1)));

                      {
                        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_67, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                      }
                    }
                    *((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStatement_4) = ml_backend__ml_util__Handler_19;
                    {
                      ((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                    }
                    {
                      MR_Word ml_backend__ml_util__Stmt_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Handler_19, (MR_Integer) 0)));
                      MR_Word ml_backend__ml_util___Context_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Handler_19, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word ml_backend__ml_util__next_value_of_Stmt_3 = ml_backend__ml_util__Stmt_72;

                        ml_backend__ml_util__Stmt_3 = ml_backend__ml_util__next_value_of_Stmt_3;
                      }
                      continue;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      }
  }
}

void MR_CALL 
ml_backend__ml_util__statement_contains_statement_2_p_0(
  MR_Word ml_backend__ml_util__Statement_1,
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr)
{
  {
    MR_bool ml_backend__ml_util__succeeded;

    *ml_backend__ml_util__HeadVar__2_2 = ml_backend__ml_util__Statement_1;
    {
      ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
    }
    {
      MR_Word ml_backend__ml_util__Stmt_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_1, (MR_Integer) 0)));
      MR_Word ml_backend__ml_util___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_1, (MR_Integer) 1)));

      {
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_6, ml_backend__ml_util__HeadVar__2_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__code_address_is_for_this_function_3_p_0(
  MR_Word ml_backend__ml_util__CodeAddr_4,
  MR_Word ml_backend__ml_util__ModuleName_5,
  MR_Word ml_backend__ml_util__FuncName_6)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__TypeInfo_25_25;
    MR_Word ml_backend__ml_util__QualifiedProcLabel_7;
    MR_Word ml_backend__ml_util__MaybeSeqNum_9;
    MR_Word ml_backend__ml_util__ProcLabel_11;
    MR_Word ml_backend__ml_util__PredLabel_12;
    MR_Integer ml_backend__ml_util__ProcId_13;
    MR_Word ml_backend__ml_util__Var_15;
    MR_Word ml_backend__ml_util__Var_16;
    MR_Word ml_backend__ml_util__Var_19;
    MR_Word ml_backend__ml_util__Var_20;
    MR_Integer ml_backend__ml_util__Var_21;
    MR_Word ml_backend__ml_util__Var_22;
    MR_Word ml_backend__ml_util__Var_14;

    if (((MR_tag((MR_Word) ml_backend__ml_util__CodeAddr_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Integer ml_backend__ml_util__SeqNum_10;
        MR_Word ml_backend__ml_util___Sig_17;

        ml_backend__ml_util__QualifiedProcLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_4, (MR_Integer) 0)));
        ml_backend__ml_util__SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_4, (MR_Integer) 1)));
        ml_backend__ml_util___Sig_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_4, (MR_Integer) 2)));
        {
          ml_backend__ml_util__MaybeSeqNum_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_util__MaybeSeqNum_9, 0) = ((MR_Box) (ml_backend__ml_util__SeqNum_10));
        }
      }
    else
      {
        MR_Word ml_backend__ml_util___Sig_8;

        ml_backend__ml_util__QualifiedProcLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__CodeAddr_4, (MR_Integer) 0)));
        ml_backend__ml_util___Sig_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__CodeAddr_4, (MR_Integer) 1)));
        ml_backend__ml_util__MaybeSeqNum_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    ml_backend__ml_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_7, (MR_Integer) 0)));
    ml_backend__ml_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_7, (MR_Integer) 1)));
    ml_backend__ml_util__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_7, (MR_Integer) 2)));
    {
      ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_5, ml_backend__ml_util__Var_19);
    }
    if (ml_backend__ml_util__succeeded)
      {
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__Var_15 == (MR_Integer) 0);
        if (ml_backend__ml_util__succeeded)
          {
            ml_backend__ml_util__PredLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_11, (MR_Integer) 0)));
            ml_backend__ml_util__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_11, (MR_Integer) 1)));
            ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_6)) == (MR_mktag((MR_Integer) 0)));
            if (ml_backend__ml_util__succeeded)
              {
                ml_backend__ml_util__Var_16 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__FuncName_6), (MR_Integer) 0);
                ml_backend__ml_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_16, (MR_Integer) 0)));
                ml_backend__ml_util__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_16, (MR_Integer) 1)));
                ml_backend__ml_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_16, (MR_Integer) 2)));
                ml_backend__ml_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_16, (MR_Integer) 3)));
                {
                  ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0(ml_backend__ml_util__PredLabel_12, ml_backend__ml_util__Var_20);
                }
                if (ml_backend__ml_util__succeeded)
                  {
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__ProcId_13 == ml_backend__ml_util__Var_21);
                    if (ml_backend__ml_util__succeeded)
                      {
                        ml_backend__ml_util__TypeInfo_25_25 = (MR_Word) &ml_backend__ml_util_scalar_common_1[2];
                        {
                          ml_backend__ml_util__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_util__TypeInfo_25_25, ((MR_Box) (ml_backend__ml_util__MaybeSeqNum_9)), ((MR_Box) (ml_backend__ml_util__Var_22)));
                        }
                      }
                  }
              }
          }
      }
    return ml_backend__ml_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__defns_contain_main_1_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ml_backend__ml_util__Defn_2;
        MR_Word ml_backend__ml_util__Defns_3;
        MR_Word ml_backend__ml_util__FuncDefn_4;
        MR_Word ml_backend__ml_util__FuncName_5;
        MR_Word ml_backend__ml_util__PlainFuncName_14;
        MR_Word ml_backend__ml_util__PredLabel_15;
        MR_Word ml_backend__ml_util__Var_22;
        MR_String ml_backend__ml_util__Var_23;
        MR_Integer ml_backend__ml_util__Var_24;
        MR_Word ml_backend__ml_util__Var_6;
        MR_Word ml_backend__ml_util__Var_7;
        MR_Word ml_backend__ml_util__Var_8;
        MR_Word ml_backend__ml_util__Var_9;
        MR_Word ml_backend__ml_util__Var_10;
        MR_Word ml_backend__ml_util__Var_11;
        MR_Word ml_backend__ml_util__Var_12;
        MR_Word ml_backend__ml_util__Var_13;
        MR_Integer ml_backend__ml_util__Var_16;
        MR_Word ml_backend__ml_util__Var_17;
        MR_Word ml_backend__ml_util__Var_18;
        MR_Word ml_backend__ml_util__Var_19;
        MR_Word ml_backend__ml_util__Var_20;
        MR_Word ml_backend__ml_util__Var_21;

        if (ml_backend__ml_util__succeeded)
          {
            ml_backend__ml_util__Defn_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            ml_backend__ml_util__Defns_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
            ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Defn_2)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_util__succeeded)
              {
                ml_backend__ml_util__FuncDefn_4 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Defn_2), (MR_Integer) 1);
                ml_backend__ml_util__FuncName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 0)));
                ml_backend__ml_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 1)));
                ml_backend__ml_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 2)));
                ml_backend__ml_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 3)));
                ml_backend__ml_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 4)));
                ml_backend__ml_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 5)));
                ml_backend__ml_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 6)));
                ml_backend__ml_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 7)));
                ml_backend__ml_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 8)));
                ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_5)) == (MR_mktag((MR_Integer) 0)));
                if (ml_backend__ml_util__succeeded)
                  {
                    ml_backend__ml_util__PlainFuncName_14 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__FuncName_5), (MR_Integer) 0);
                    ml_backend__ml_util__PredLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PlainFuncName_14, (MR_Integer) 0)));
                    ml_backend__ml_util__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PlainFuncName_14, (MR_Integer) 1)));
                    ml_backend__ml_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PlainFuncName_14, (MR_Integer) 2)));
                    ml_backend__ml_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PlainFuncName_14, (MR_Integer) 3)));
                    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__PredLabel_15)) == (MR_mktag((MR_Integer) 0)));
                    if (ml_backend__ml_util__succeeded)
                      {
                        ml_backend__ml_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PredLabel_15, (MR_Integer) 0)));
                        ml_backend__ml_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PredLabel_15, (MR_Integer) 1)));
                        ml_backend__ml_util__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PredLabel_15, (MR_Integer) 2)));
                        ml_backend__ml_util__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PredLabel_15, (MR_Integer) 3)));
                        ml_backend__ml_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PredLabel_15, (MR_Integer) 4)));
                        ml_backend__ml_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PredLabel_15, (MR_Integer) 5)));
                        ml_backend__ml_util__succeeded = (ml_backend__ml_util__Var_22 == (MR_Integer) 0);
                        if (ml_backend__ml_util__succeeded)
                          {
                            ml_backend__ml_util__succeeded = (strcmp(ml_backend__ml_util__Var_23, (MR_String) "main") == 0);
                            if (ml_backend__ml_util__succeeded)
                              ml_backend__ml_util__succeeded = (ml_backend__ml_util__Var_24 == (MR_Integer) 2);
                          }
                      }
                  }
              }
            if (ml_backend__ml_util__succeeded)
              ml_backend__ml_util__succeeded = MR_TRUE;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Defns_3;

                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return ml_backend__ml_util__succeeded;
      }
      break;
    }
}

void mercury__ml_backend__ml_util__init(void)
{
}

void mercury__ml_backend__ml_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_util__ml_backend__ml_util__type_ctor_info_code_addrs_in_consts_0);
}

void mercury__ml_backend__ml_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.ml_util. */
