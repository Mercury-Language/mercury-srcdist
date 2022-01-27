/*
** Automatically generated from `ml_util.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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



#line 664 "ml_util.m"
struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0_s {
#line 664 "ml_util.m"
  MR_Word * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__HeadVar__2_12;
#line 664 "ml_util.m"
  MR_Cont ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__cont;
#line 664 "ml_util.m"
  void * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__cont_env_ptr;
#line 664 "ml_util.m"
  MR_bool ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__succeeded;
#line 664 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__SubStatement_7;
#line 664 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__V_13_13;
#line 664 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__V_14_14;
#line 664 "ml_util.m"
};

#line 308 "ml_util.m"
struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s {
#line 308 "ml_util.m"
  MR_Word * ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4;
#line 308 "ml_util.m"
  MR_Cont ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont;
#line 308 "ml_util.m"
  void * ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr;
#line 311 "ml_util.m"
  MR_Word ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5;
#line 311 "ml_util.m"
  MR_Word ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8;
#line 312 "ml_util.m"
  MR_Box ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5;
#line 308 "ml_util.m"
};

#line 255 "ml_util.m"
struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s {
#line 255 "ml_util.m"
  MR_Word * ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4;
#line 255 "ml_util.m"
  MR_Cont ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont;
#line 255 "ml_util.m"
  void * ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr;
#line 258 "ml_util.m"
  MR_Word ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5;
#line 259 "ml_util.m"
  MR_Box ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5;
#line 255 "ml_util.m"
};

#line 86 "ml_util.m"
struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s {
#line 86 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3;
#line 86 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4;
#line 688 "ml_util.m"
  MR_bool ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
#line 688 "ml_util.m"
  jmp_buf ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0;
#line 688 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14;
#line 688 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15;
#line 688 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21;
#line 688 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22;
#line 86 "ml_util.m"
};

#line 78 "ml_util.m"
struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s {
#line 78 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3;
#line 78 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4;
#line 676 "ml_util.m"
  MR_bool ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
#line 676 "ml_util.m"
  jmp_buf ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0;
#line 676 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14;
#line 676 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15;
#line 676 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26;
#line 78 "ml_util.m"
};

#line 664 "ml_util.m"
struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s {
#line 664 "ml_util.m"
  MR_Box * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1;
#line 664 "ml_util.m"
  MR_Cont ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont;
#line 664 "ml_util.m"
  void * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr;
#line 664 "ml_util.m"
  MR_Word ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_HeadVar__2_12;
#line 664 "ml_util.m"
};


#line 664 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_1(
#line 664 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 664 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0(
#line 664 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 664 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_12,
#line 664 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 664 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 811 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
#line 811 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 811 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 769 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
#line 769 "ml_util.m"
  MR_Word ml_backend__ml_util__Body_4,
#line 769 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 744 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__defn_body_contains_var_2_f_0(
#line 744 "ml_util.m"
  MR_Word ml_backend__ml_util__DefnBody_4,
#line 744 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 633 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
#line 633 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 633 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 586 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
#line 586 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 586 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 489 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__default_contains_var_2_f_0(
#line 489 "ml_util.m"
  MR_Word ml_backend__ml_util__Default_4,
#line 489 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 475 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
#line 475 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 475 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 358 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__stmt_contains_var_2_f_0(
#line 358 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_4,
#line 358 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 348 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
#line 348 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 348 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_2);

#line 335 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__statements_contains_var_2_f_0(
#line 335 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 335 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 316 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__default_contains_statement_2_p_0(
#line 316 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 316 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_2,
#line 316 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 316 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 312 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_2(
#line 312 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 311 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_1(
#line 311 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 308 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0(
#line 308 "ml_util.m"
  MR_Word ml_backend__ml_util__Cases_3,
#line 308 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 308 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 308 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 262 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(
#line 262 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 262 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
#line 262 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 262 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 259 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_2(
#line 259 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 258 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_1(
#line 258 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 255 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0(
#line 255 "ml_util.m"
  MR_Word ml_backend__ml_util__Statements_3,
#line 255 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 255 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 255 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 688 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(
#line 688 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 688 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(
#line 688 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 688 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(
#line 688 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 676 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(
#line 676 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 676 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(
#line 676 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 676 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(
#line 676 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 664 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
#line 664 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 664 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
#line 664 "ml_util.m"
  MR_Box ml_backend__ml_util__closure_arg,
#line 664 "ml_util.m"
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
#line 664 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 664 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);


static /* final */ const MR_Box ml_backend__ml_util_scalar_common_1[3][2];

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_2[1][5];

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_3[7][1];


#line 947 "ml_util.m"
/* sealed */ struct ml_backend__ml_util__vector_common_type_4_0_s {
#line 947 "ml_util.m"
  const MR_String ml_backend__ml_util__vector_common_type_4_0__vct_4_f_0;
#line 947 "ml_util.m"
};

static /* final */ const struct ml_backend__ml_util__vector_common_type_4_0_s ml_backend__ml_util_vector_common_4[64];



static /* final */ const MR_Box ml_backend__ml_util_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_3[7][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "rtti_implementation"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "univ"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "mutvar"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "type_desc"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_util_scalar_common_1[1])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_util_scalar_common_1[2])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
};


static /* final */ const struct ml_backend__ml_util__vector_common_type_4_0_s ml_backend__ml_util_vector_common_4[64] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     NULL },
  /* row 2 */   {     NULL },
  /* row 3 */   {     NULL },
  /* row 4 */   {     NULL },
  /* row 5 */   {     NULL },
  /* row 6 */   {     (MR_String) "c_pointer" },
  /* row 7 */   {     NULL },
  /* row 8 */   {     NULL },
  /* row 9 */   {     NULL },
  /* row 10 */   {     NULL },
  /* row 11 */   {     NULL },
  /* row 12 */   {     NULL },
  /* row 13 */   {     NULL },
  /* row 14 */   {     NULL },
  /* row 15 */   {     NULL },
  /* row 16 */   {     NULL },
  /* row 17 */   {     (MR_String) "type_ctor_desc" },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     NULL },
  /* row 21 */   {     NULL },
  /* row 22 */   {     NULL },
  /* row 23 */   {     NULL },
  /* row 24 */   {     (MR_String) "type_info" },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     NULL },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     NULL },
  /* row 32 */   {     NULL },
  /* row 33 */   {     NULL },
  /* row 34 */   {     (MR_String) "ref" },
  /* row 35 */   {     NULL },
  /* row 36 */   {     (MR_String) "comparison_result" },
  /* row 37 */   {     NULL },
  /* row 38 */   {     (MR_String) "univ" },
  /* row 39 */   {     NULL },
  /* row 40 */   {     NULL },
  /* row 41 */   {     NULL },
  /* row 42 */   {     (MR_String) "heap_pointer" },
  /* row 43 */   {     NULL },
  /* row 44 */   {     NULL },
  /* row 45 */   {     NULL },
  /* row 46 */   {     (MR_String) "base_typeclass_info" },
  /* row 47 */   {     NULL },
  /* row 48 */   {     NULL },
  /* row 49 */   {     (MR_String) "mutvar" },
  /* row 50 */   {     (MR_String) "type_ctor_info" },
  /* row 51 */   {     (MR_String) "pseudo_type_desc" },
  /* row 52 */   {     NULL },
  /* row 53 */   {     (MR_String) "typeclass_info" },
  /* row 54 */   {     NULL },
  /* row 55 */   {     NULL },
  /* row 56 */   {     NULL },
  /* row 57 */   {     NULL },
  /* row 58 */   {     NULL },
  /* row 59 */   {     NULL },
  /* row 60 */   {     NULL },
  /* row 61 */   {     (MR_String) "type_desc" },
  /* row 62 */   {     NULL },
  /* row 63 */   {     NULL },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 664 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_1(
#line 664 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 664 "ml_util.m"
{
#line 664 "ml_util.m"
  {
#line 664 "ml_util.m"
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 664 "ml_util.m"
    {
#line 666 "ml_util.m"
      MR_Word ml_backend__ml_util__V_11_11;
#line 667 "ml_util.m"
      MR_Word ml_backend__ml_util__V_8_8;
#line 667 "ml_util.m"
      MR_Word ml_backend__ml_util__V_9_9;
#line 667 "ml_util.m"
      MR_String ml_backend__ml_util__V_10_10;

#line 666 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 0)));
#line 666 "ml_util.m"
      ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 1)));
#line 666 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__V_13_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__V_13_13, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 666 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__succeeded)
#line 666 "ml_util.m"
        {
#line 666 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__V_13_13, (MR_Integer) 1)));
#line 664 "ml_util.m"
          {
#line 667 "ml_util.m"
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 667 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__succeeded)
#line 667 "ml_util.m"
              {
#line 667 "ml_util.m"
                {
#line 667 "ml_util.m"
                  *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__HeadVar__2_12) = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__V_14_14, (MR_Integer) 1)));
#line 667 "ml_util.m"
                  ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__V_14_14, (MR_Integer) 2)));
#line 667 "ml_util.m"
                  ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__V_14_14, (MR_Integer) 3)));
#line 667 "ml_util.m"
                  ml_backend__ml_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__V_14_14, (MR_Integer) 4)));
#line 667 "ml_util.m"
                }
#line 667 "ml_util.m"
                {
#line 667 "ml_util.m"
                  ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__cont_env_ptr);
#line 667 "ml_util.m"
                  return;
                }
#line 667 "ml_util.m"
              }
#line 664 "ml_util.m"
          }
#line 666 "ml_util.m"
        }
#line 664 "ml_util.m"
    }
#line 664 "ml_util.m"
  }
#line 664 "ml_util.m"
}

#line 664 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0(
#line 664 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 664 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_12,
#line 664 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 664 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 664 "ml_util.m"
{
#line 664 "ml_util.m"
  {
#line 664 "ml_util.m"
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0_s ml_backend__ml_util__env;

#line 664 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__HeadVar__2_12 = ml_backend__ml_util__HeadVar__2_12;
#line 664 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__cont = ml_backend__ml_util__cont;
#line 664 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 269 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__SubStatement_7 = ml_backend__ml_util__Statement_3;
#line 269 "ml_util.m"
    {
#line 269 "ml_util.m"
      ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_1(&ml_backend__ml_util__env);
    }
#line 270 "ml_util.m"
    {
#line 270 "ml_util.m"
      MR_Word ml_backend__ml_util__Stmt_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_3, (MR_Integer) 0)));
#line 271 "ml_util.m"
      MR_Word ml_backend__ml_util___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_3, (MR_Integer) 1)));

#line 272 "ml_util.m"
      {
#line 272 "ml_util.m"
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_20, &(ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_env_0__SubStatement_7, ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0_1, &ml_backend__ml_util__env);
      }
#line 270 "ml_util.m"
    }
#line 664 "ml_util.m"
  }
#line 664 "ml_util.m"
}

#line 811 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
#line 811 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 811 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 811 "ml_util.m"
{
#line 813 "ml_util.m"
  while (MR_TRUE)
#line 813 "ml_util.m"
    {
#line 813 "ml_util.m"
      /* tailcall optimized into a loop */
#line 813 "ml_util.m"
      {
#line 813 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 813 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 813 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 813 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 813 "ml_util.m"
        else
#line 815 "ml_util.m"
          {
#line 815 "ml_util.m"
            MR_Word ml_backend__ml_util__Initializer_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 815 "ml_util.m"
            MR_Word ml_backend__ml_util__Initializers_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 815 "ml_util.m"
            MR_Word ml_backend__ml_util__InitializerContainsVar_9;

#line 816 "ml_util.m"
            {
#line 816 "ml_util.m"
              ml_backend__ml_util__InitializerContainsVar_9 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 820 "ml_util.m"
#line 820 "ml_util.m"
            switch (ml_backend__ml_util__InitializerContainsVar_9) {
#line 820 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 820 "ml_util.m"
              case (MR_Integer) 0:
#line 822 "ml_util.m"
                {
#line 822 "ml_util.m"
                  /* direct tailcall eliminated */
#line 822 "ml_util.m"
                  {
#line 822 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Initializers_6;

#line 822 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 822 "ml_util.m"
                  }
#line 822 "ml_util.m"
                  continue;
#line 822 "ml_util.m"
                }
#line 820 "ml_util.m"
                break;
#line 820 "ml_util.m"
              case (MR_Integer) 1:
#line 819 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 820 "ml_util.m"
                break;
#line 820 "ml_util.m"
            }
#line 815 "ml_util.m"
          }
#line 813 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 813 "ml_util.m"
      }
#line 813 "ml_util.m"
      break;
#line 813 "ml_util.m"
    }
#line 811 "ml_util.m"
}

#line 769 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
#line 769 "ml_util.m"
  MR_Word ml_backend__ml_util__Body_4,
#line 769 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 769 "ml_util.m"
{
#line 773 "ml_util.m"
  {
#line 773 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 773 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 773 "ml_util.m"
    if ((ml_backend__ml_util__Body_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "ml_util.m"
      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 773 "ml_util.m"
    else
#line 776 "ml_util.m"
      {
#line 776 "ml_util.m"
        MR_Word ml_backend__ml_util__Statement_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Body_4), (MR_Integer) 1);
#line 776 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 0)));
#line 355 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 1)));

#line 356 "ml_util.m"
        {
#line 356 "ml_util.m"
          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_5);
        }
#line 776 "ml_util.m"
      }
#line 773 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 773 "ml_util.m"
  }
#line 769 "ml_util.m"
}

#line 744 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__defn_body_contains_var_2_f_0(
#line 744 "ml_util.m"
  MR_Word ml_backend__ml_util__DefnBody_4,
#line 744 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 744 "ml_util.m"
{
#line 748 "ml_util.m"
  {
#line 748 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 748 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 748 "ml_util.m"
#line 748 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__DefnBody_4)) {
#line 748 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 748 "ml_util.m"
      case (MR_Integer) 0:
#line 756 "ml_util.m"
        {
#line 756 "ml_util.m"
          MR_Word ml_backend__ml_util__ClassDefn_15 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__DefnBody_4), (MR_Integer) 0);
#line 756 "ml_util.m"
          MR_Word ml_backend__ml_util__CtorDefns_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 5)));
#line 756 "ml_util.m"
          MR_Word ml_backend__ml_util__FieldDefns_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 6)));
#line 756 "ml_util.m"
          MR_Word ml_backend__ml_util__FieldDefnsContainVar_23;
#line 757 "ml_util.m"
          MR_Word ml_backend__ml_util___Kind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 0)));
#line 757 "ml_util.m"
          MR_Word ml_backend__ml_util___Imports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 1)));
#line 757 "ml_util.m"
          MR_Word ml_backend__ml_util___Inherits_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 2)));
#line 757 "ml_util.m"
          MR_Word ml_backend__ml_util___Implements_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 3)));
#line 757 "ml_util.m"
          MR_Word ml_backend__ml_util___TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 4)));

#line 759 "ml_util.m"
          {
#line 759 "ml_util.m"
            ml_backend__ml_util__FieldDefnsContainVar_23 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__FieldDefns_22, ml_backend__ml_util__DataName_5);
          }
#line 763 "ml_util.m"
#line 763 "ml_util.m"
          switch (ml_backend__ml_util__FieldDefnsContainVar_23) {
#line 763 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 763 "ml_util.m"
            case (MR_Integer) 0:
#line 765 "ml_util.m"
              {
#line 765 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__CtorDefns_21, ml_backend__ml_util__DataName_5);
              }
#line 763 "ml_util.m"
              break;
#line 763 "ml_util.m"
            case (MR_Integer) 1:
#line 762 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 763 "ml_util.m"
              break;
#line 763 "ml_util.m"
          }
#line 756 "ml_util.m"
        }
#line 748 "ml_util.m"
        break;
#line 748 "ml_util.m"
      case (MR_Integer) 1:
#line 748 "ml_util.m"
        {
#line 748 "ml_util.m"
          MR_Word ml_backend__ml_util__Initializer_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 1)));
#line 748 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 0)));
#line 748 "ml_util.m"
          MR_Word ml_backend__ml_util___GCStatement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 2)));

#line 750 "ml_util.m"
          {
#line 750 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_8, ml_backend__ml_util__DataName_5);
          }
#line 748 "ml_util.m"
        }
#line 748 "ml_util.m"
        break;
#line 748 "ml_util.m"
      case (MR_Integer) 2:
#line 753 "ml_util.m"
        {
#line 753 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 2)));
#line 752 "ml_util.m"
          MR_Word ml_backend__ml_util___PredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 0)));
#line 752 "ml_util.m"
          MR_Word ml_backend__ml_util___Params_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 1)));
#line 752 "ml_util.m"
          MR_Word ml_backend__ml_util___Attrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 3)));
#line 752 "ml_util.m"
          MR_Word ml_backend__ml_util___EnvVarNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 4)));

#line 754 "ml_util.m"
          {
#line 754 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__function_body_contains_var_2_f_0(ml_backend__ml_util__FunctionBody_12, ml_backend__ml_util__DataName_5);
          }
#line 753 "ml_util.m"
        }
#line 748 "ml_util.m"
        break;
#line 748 "ml_util.m"
    }
#line 748 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 748 "ml_util.m"
  }
#line 744 "ml_util.m"
}

#line 633 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
#line 633 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 633 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 633 "ml_util.m"
{
#line 635 "ml_util.m"
  while (MR_TRUE)
#line 635 "ml_util.m"
    {
#line 635 "ml_util.m"
      /* tailcall optimized into a loop */
#line 635 "ml_util.m"
      {
#line 635 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 635 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 635 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 635 "ml_util.m"
        else
#line 637 "ml_util.m"
          {
#line 637 "ml_util.m"
            MR_Word ml_backend__ml_util__OutlineArg_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 637 "ml_util.m"
            MR_Word ml_backend__ml_util__OutlineArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1055 "ml_backend.ml_util.c"
#line 1056 "ml_backend.ml_util.c"
            switch (MR_tag((MR_Word) ml_backend__ml_util__OutlineArg_5)) {
#line 1058 "ml_backend.ml_util.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1060 "ml_backend.ml_util.c"
              case (MR_Integer) 0:
#line 644 "ml_util.m"
                {
#line 644 "ml_util.m"
                  /* direct tailcall eliminated */
#line 644 "ml_util.m"
                  {
#line 644 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

#line 644 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 644 "ml_util.m"
                  }
#line 644 "ml_util.m"
                  continue;
#line 644 "ml_util.m"
                }
#line 1079 "ml_backend.ml_util.c"
                break;
#line 1081 "ml_backend.ml_util.c"
              case (MR_Integer) 1:
#line 1083 "ml_backend.ml_util.c"
                {
#line 1085 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__OutlineArgContainsVar_9;
#line 1087 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 2)));
#line 651 "ml_util.m"
                  MR_Word ml_backend__ml_util___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 0)));
#line 651 "ml_util.m"
                  MR_String ml_backend__ml_util___Str_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 1)));

#line 652 "ml_util.m"
                  {
#line 652 "ml_util.m"
                    ml_backend__ml_util__OutlineArgContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_15, ml_backend__ml_util__HeadVar__2_2);
                  }
#line 642 "ml_util.m"
#line 642 "ml_util.m"
                  switch (ml_backend__ml_util__OutlineArgContainsVar_9) {
#line 642 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 642 "ml_util.m"
                    case (MR_Integer) 0:
#line 644 "ml_util.m"
                      {
#line 644 "ml_util.m"
                        /* direct tailcall eliminated */
#line 644 "ml_util.m"
                        {
#line 644 "ml_util.m"
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

#line 644 "ml_util.m"
                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 644 "ml_util.m"
                        }
#line 644 "ml_util.m"
                        continue;
#line 644 "ml_util.m"
                      }
#line 642 "ml_util.m"
                      break;
#line 642 "ml_util.m"
                    case (MR_Integer) 1:
#line 641 "ml_util.m"
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 642 "ml_util.m"
                      break;
#line 642 "ml_util.m"
                  }
#line 1133 "ml_backend.ml_util.c"
                }
#line 1135 "ml_backend.ml_util.c"
                break;
#line 1137 "ml_backend.ml_util.c"
              case (MR_Integer) 2:
#line 1139 "ml_backend.ml_util.c"
                {
#line 1141 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__Lval_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 2)));
#line 1143 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__OutlineArgContainsVar_21;
#line 654 "ml_util.m"
                  MR_Word ml_backend__ml_util___Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 0)));
#line 654 "ml_util.m"
                  MR_String ml_backend__ml_util___Str_18 = ((MR_String) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 1)));

#line 655 "ml_util.m"
                  {
#line 655 "ml_util.m"
                    ml_backend__ml_util__OutlineArgContainsVar_21 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_16, ml_backend__ml_util__HeadVar__2_2);
                  }
#line 642 "ml_util.m"
#line 642 "ml_util.m"
                  switch (ml_backend__ml_util__OutlineArgContainsVar_21) {
#line 642 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 642 "ml_util.m"
                    case (MR_Integer) 0:
#line 644 "ml_util.m"
                      {
#line 644 "ml_util.m"
                        /* direct tailcall eliminated */
#line 644 "ml_util.m"
                        {
#line 644 "ml_util.m"
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

#line 644 "ml_util.m"
                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 644 "ml_util.m"
                        }
#line 644 "ml_util.m"
                        continue;
#line 644 "ml_util.m"
                      }
#line 642 "ml_util.m"
                      break;
#line 642 "ml_util.m"
                    case (MR_Integer) 1:
#line 641 "ml_util.m"
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 642 "ml_util.m"
                      break;
#line 642 "ml_util.m"
                  }
#line 1189 "ml_backend.ml_util.c"
                }
#line 1191 "ml_backend.ml_util.c"
                break;
#line 1193 "ml_backend.ml_util.c"
            }
#line 637 "ml_util.m"
          }
#line 635 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 635 "ml_util.m"
      }
#line 635 "ml_util.m"
      break;
#line 635 "ml_util.m"
    }
#line 633 "ml_util.m"
}

#line 586 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
#line 586 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 586 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 586 "ml_util.m"
{
#line 589 "ml_util.m"
  while (MR_TRUE)
#line 589 "ml_util.m"
    {
#line 589 "ml_util.m"
      /* tailcall optimized into a loop */
#line 589 "ml_util.m"
      {
#line 589 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 589 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 589 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 589 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 589 "ml_util.m"
        else
#line 591 "ml_util.m"
          {
#line 591 "ml_util.m"
            MR_Word ml_backend__ml_util__TargetCode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 591 "ml_util.m"
            MR_Word ml_backend__ml_util__TargetCodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1243 "ml_backend.ml_util.c"
#line 1244 "ml_backend.ml_util.c"
            switch (MR_tag((MR_Word) ml_backend__ml_util__TargetCode_5)) {
#line 1246 "ml_backend.ml_util.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1248 "ml_backend.ml_util.c"
              case (MR_Integer) 0:
#line 1250 "ml_backend.ml_util.c"
              case (MR_Integer) 1:
#line 599 "ml_util.m"
                {
#line 599 "ml_util.m"
                  /* direct tailcall eliminated */
#line 599 "ml_util.m"
                  {
#line 599 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 599 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 599 "ml_util.m"
                  }
#line 599 "ml_util.m"
                  continue;
#line 599 "ml_util.m"
                }
#line 1269 "ml_backend.ml_util.c"
                break;
#line 1271 "ml_backend.ml_util.c"
              case (MR_Integer) 2:
#line 1273 "ml_backend.ml_util.c"
                {
#line 1275 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)));
#line 1277 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__TargetCodeContainsVar_32;

#line 616 "ml_util.m"
                  {
#line 616 "ml_util.m"
                    ml_backend__ml_util__TargetCodeContainsVar_32 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_20, ml_backend__ml_util__HeadVar__2_2);
                  }
#line 597 "ml_util.m"
#line 597 "ml_util.m"
                  switch (ml_backend__ml_util__TargetCodeContainsVar_32) {
#line 597 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 597 "ml_util.m"
                    case (MR_Integer) 0:
#line 599 "ml_util.m"
                      {
#line 599 "ml_util.m"
                        /* direct tailcall eliminated */
#line 599 "ml_util.m"
                        {
#line 599 "ml_util.m"
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 599 "ml_util.m"
                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 599 "ml_util.m"
                        }
#line 599 "ml_util.m"
                        continue;
#line 599 "ml_util.m"
                      }
#line 597 "ml_util.m"
                      break;
#line 597 "ml_util.m"
                    case (MR_Integer) 1:
#line 596 "ml_util.m"
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 597 "ml_util.m"
                      break;
#line 597 "ml_util.m"
                  }
#line 1319 "ml_backend.ml_util.c"
                }
#line 1321 "ml_backend.ml_util.c"
                break;
#line 1323 "ml_backend.ml_util.c"
              case (MR_Integer) 3:
#line 1325 "ml_backend.ml_util.c"
#line 1326 "ml_backend.ml_util.c"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)))) {
#line 1328 "ml_backend.ml_util.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1330 "ml_backend.ml_util.c"
                  case (MR_Integer) 0:
#line 1332 "ml_backend.ml_util.c"
                    {
#line 1334 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__Lval_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
#line 1336 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__TargetCodeContainsVar_34;

#line 619 "ml_util.m"
                      {
#line 619 "ml_util.m"
                        ml_backend__ml_util__TargetCodeContainsVar_34 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_21, ml_backend__ml_util__HeadVar__2_2);
                      }
#line 597 "ml_util.m"
#line 597 "ml_util.m"
                      switch (ml_backend__ml_util__TargetCodeContainsVar_34) {
#line 597 "ml_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 597 "ml_util.m"
                        case (MR_Integer) 0:
#line 599 "ml_util.m"
                          {
#line 599 "ml_util.m"
                            /* direct tailcall eliminated */
#line 599 "ml_util.m"
                            {
#line 599 "ml_util.m"
                              MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 599 "ml_util.m"
                              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 599 "ml_util.m"
                            }
#line 599 "ml_util.m"
                            continue;
#line 599 "ml_util.m"
                          }
#line 597 "ml_util.m"
                          break;
#line 597 "ml_util.m"
                        case (MR_Integer) 1:
#line 596 "ml_util.m"
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 597 "ml_util.m"
                          break;
#line 597 "ml_util.m"
                      }
#line 1378 "ml_backend.ml_util.c"
                    }
#line 1380 "ml_backend.ml_util.c"
                    break;
#line 1382 "ml_backend.ml_util.c"
                  case (MR_Integer) 1:
#line 1384 "ml_backend.ml_util.c"
                  case (MR_Integer) 3:
#line 599 "ml_util.m"
                    {
#line 599 "ml_util.m"
                      /* direct tailcall eliminated */
#line 599 "ml_util.m"
                      {
#line 599 "ml_util.m"
                        MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 599 "ml_util.m"
                        ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 599 "ml_util.m"
                      }
#line 599 "ml_util.m"
                      continue;
#line 599 "ml_util.m"
                    }
#line 1403 "ml_backend.ml_util.c"
                    break;
#line 1405 "ml_backend.ml_util.c"
                  case (MR_Integer) 2:
#line 1407 "ml_backend.ml_util.c"
                    {
#line 1409 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__EntityName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
#line 624 "ml_util.m"
                      MR_Word ml_backend__ml_util__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_22, (MR_Integer) 0)));
#line 624 "ml_util.m"
                      MR_Word ml_backend__ml_util__QualKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_22, (MR_Integer) 1)));
#line 624 "ml_util.m"
                      MR_Word ml_backend__ml_util__UnqualDataName_25;
#line 624 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_22, (MR_Integer) 2)));
#line 624 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_27_27;
#line 624 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_28_28;
#line 624 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_29_29;

#line 624 "ml_util.m"
                      ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 624 "ml_util.m"
                      if (ml_backend__ml_util__succeeded)
#line 624 "ml_util.m"
                        {
#line 624 "ml_util.m"
                          ml_backend__ml_util__UnqualDataName_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__V_26_26, (MR_Integer) 0)));
#line 625 "ml_util.m"
                          ml_backend__ml_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 0)));
#line 625 "ml_util.m"
                          ml_backend__ml_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 625 "ml_util.m"
                          ml_backend__ml_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 2)));
#line 625 "ml_util.m"
                          {
#line 625 "ml_util.m"
                            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_23, ml_backend__ml_util__V_27_27);
                          }
#line 624 "ml_util.m"
                          if (ml_backend__ml_util__succeeded)
#line 624 "ml_util.m"
                            {
#line 625 "ml_util.m"
                              ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_24 == ml_backend__ml_util__V_28_28);
#line 624 "ml_util.m"
                              if (ml_backend__ml_util__succeeded)
#line 625 "ml_util.m"
                                {
#line 625 "ml_util.m"
                                  ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__UnqualDataName_25, ml_backend__ml_util__V_29_29);
                                }
#line 624 "ml_util.m"
                            }
#line 624 "ml_util.m"
                        }
#line 1462 "ml_backend.ml_util.c"
                      if (ml_backend__ml_util__succeeded)
#line 596 "ml_util.m"
                        ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 1466 "ml_backend.ml_util.c"
                      else
#line 599 "ml_util.m"
                        {
#line 599 "ml_util.m"
                          /* direct tailcall eliminated */
#line 599 "ml_util.m"
                          {
#line 599 "ml_util.m"
                            MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 599 "ml_util.m"
                            ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 599 "ml_util.m"
                          }
#line 599 "ml_util.m"
                          continue;
#line 599 "ml_util.m"
                        }
#line 1485 "ml_backend.ml_util.c"
                    }
#line 1487 "ml_backend.ml_util.c"
                    break;
#line 1489 "ml_backend.ml_util.c"
                }
#line 1491 "ml_backend.ml_util.c"
                break;
#line 1493 "ml_backend.ml_util.c"
            }
#line 591 "ml_util.m"
          }
#line 589 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 589 "ml_util.m"
      }
#line 589 "ml_util.m"
      break;
#line 589 "ml_util.m"
    }
#line 586 "ml_util.m"
}

#line 489 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__default_contains_var_2_f_0(
#line 489 "ml_util.m"
  MR_Word ml_backend__ml_util__Default_4,
#line 489 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 489 "ml_util.m"
{
#line 495 "ml_util.m"
  {
#line 495 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 495 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 495 "ml_util.m"
#line 495 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Default_4)) {
#line 495 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 495 "ml_util.m"
      case (MR_Integer) 0:
#line 496 "ml_util.m"
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 495 "ml_util.m"
        break;
#line 495 "ml_util.m"
      case (MR_Integer) 1:
#line 498 "ml_util.m"
        {
#line 498 "ml_util.m"
          MR_Word ml_backend__ml_util__Statement_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Default_4), (MR_Integer) 1);
#line 498 "ml_util.m"
          MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 0)));
#line 355 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 1)));

#line 356 "ml_util.m"
          {
#line 356 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_5);
          }
#line 498 "ml_util.m"
        }
#line 495 "ml_util.m"
        break;
#line 495 "ml_util.m"
    }
#line 495 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 495 "ml_util.m"
  }
#line 489 "ml_util.m"
}

#line 475 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
#line 475 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 475 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 475 "ml_util.m"
{
#line 477 "ml_util.m"
  while (MR_TRUE)
#line 477 "ml_util.m"
    {
#line 477 "ml_util.m"
      /* tailcall optimized into a loop */
#line 477 "ml_util.m"
      {
#line 477 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 477 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 477 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 477 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 477 "ml_util.m"
        else
#line 478 "ml_util.m"
          {
#line 478 "ml_util.m"
            MR_Word ml_backend__ml_util__Case_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 478 "ml_util.m"
            MR_Word ml_backend__ml_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 478 "ml_util.m"
            MR_Word ml_backend__ml_util__Statement_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 2)));
#line 478 "ml_util.m"
            MR_Word ml_backend__ml_util__StatementContainsVar_12;
#line 478 "ml_util.m"
            MR_Word ml_backend__ml_util__Stmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 0)));
#line 479 "ml_util.m"
            MR_Word ml_backend__ml_util___FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 0)));
#line 479 "ml_util.m"
            MR_Word ml_backend__ml_util___LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 1)));
#line 355 "ml_util.m"
            MR_Word ml_backend__ml_util___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 1)));

#line 356 "ml_util.m"
            {
#line 356 "ml_util.m"
              ml_backend__ml_util__StatementContainsVar_12 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_16, ml_backend__ml_util__HeadVar__2_2);
            }
#line 484 "ml_util.m"
#line 484 "ml_util.m"
            switch (ml_backend__ml_util__StatementContainsVar_12) {
#line 484 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 484 "ml_util.m"
              case (MR_Integer) 0:
#line 486 "ml_util.m"
                {
#line 486 "ml_util.m"
                  /* direct tailcall eliminated */
#line 486 "ml_util.m"
                  {
#line 486 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Cases_6;

#line 486 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 486 "ml_util.m"
                  }
#line 486 "ml_util.m"
                  continue;
#line 486 "ml_util.m"
                }
#line 484 "ml_util.m"
                break;
#line 484 "ml_util.m"
              case (MR_Integer) 1:
#line 483 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 484 "ml_util.m"
                break;
#line 484 "ml_util.m"
            }
#line 478 "ml_util.m"
          }
#line 477 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 477 "ml_util.m"
      }
#line 477 "ml_util.m"
      break;
#line 477 "ml_util.m"
    }
#line 475 "ml_util.m"
}

#line 358 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__stmt_contains_var_2_f_0(
#line 358 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_4,
#line 358 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 358 "ml_util.m"
{
#line 362 "ml_util.m"
  {
#line 362 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 362 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 362 "ml_util.m"
#line 362 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) {
#line 362 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 362 "ml_util.m"
      case (MR_Integer) 0:
#line 362 "ml_util.m"
        {
#line 362 "ml_util.m"
          MR_Word ml_backend__ml_util__Defns_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
#line 362 "ml_util.m"
          MR_Word ml_backend__ml_util__Statements_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 362 "ml_util.m"
          MR_Word ml_backend__ml_util__DefnsContainVar_9;

#line 363 "ml_util.m"
          {
#line 363 "ml_util.m"
            ml_backend__ml_util__DefnsContainVar_9 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__Defns_7, ml_backend__ml_util__DataName_5);
          }
#line 367 "ml_util.m"
#line 367 "ml_util.m"
          switch (ml_backend__ml_util__DefnsContainVar_9) {
#line 367 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 367 "ml_util.m"
            case (MR_Integer) 0:
#line 369 "ml_util.m"
              {
#line 369 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statements_contains_var_2_f_0(ml_backend__ml_util__Statements_8, ml_backend__ml_util__DataName_5);
              }
#line 367 "ml_util.m"
              break;
#line 367 "ml_util.m"
            case (MR_Integer) 1:
#line 366 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 367 "ml_util.m"
              break;
#line 367 "ml_util.m"
          }
#line 362 "ml_util.m"
        }
#line 362 "ml_util.m"
        break;
#line 362 "ml_util.m"
      case (MR_Integer) 1:
#line 372 "ml_util.m"
        {
#line 372 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 372 "ml_util.m"
          MR_Word ml_backend__ml_util__Statement_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 372 "ml_util.m"
          MR_Word ml_backend__ml_util__RvalContainsVar_13;
#line 372 "ml_util.m"
          MR_Word ml_backend__ml_util___Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));

#line 373 "ml_util.m"
          {
#line 373 "ml_util.m"
            ml_backend__ml_util__RvalContainsVar_13 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_11, ml_backend__ml_util__DataName_5);
          }
#line 377 "ml_util.m"
#line 377 "ml_util.m"
          switch (ml_backend__ml_util__RvalContainsVar_13) {
#line 377 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 377 "ml_util.m"
            case (MR_Integer) 0:
#line 379 "ml_util.m"
              {
#line 379 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_12, ml_backend__ml_util__DataName_5);
              }
#line 377 "ml_util.m"
              break;
#line 377 "ml_util.m"
            case (MR_Integer) 1:
#line 376 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 377 "ml_util.m"
              break;
#line 377 "ml_util.m"
          }
#line 372 "ml_util.m"
        }
#line 362 "ml_util.m"
        break;
#line 362 "ml_util.m"
      case (MR_Integer) 2:
#line 382 "ml_util.m"
        {
#line 382 "ml_util.m"
          MR_Word ml_backend__ml_util__Cond_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
#line 382 "ml_util.m"
          MR_Word ml_backend__ml_util__Then_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 382 "ml_util.m"
          MR_Word ml_backend__ml_util__MaybeElse_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 382 "ml_util.m"
          MR_Word ml_backend__ml_util__CondContainsVar_17;

#line 383 "ml_util.m"
          {
#line 383 "ml_util.m"
            ml_backend__ml_util__CondContainsVar_17 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Cond_14, ml_backend__ml_util__DataName_5);
          }
#line 387 "ml_util.m"
#line 387 "ml_util.m"
          switch (ml_backend__ml_util__CondContainsVar_17) {
#line 387 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 387 "ml_util.m"
            case (MR_Integer) 0:
#line 388 "ml_util.m"
              {
#line 388 "ml_util.m"
                MR_Word ml_backend__ml_util__ThenContainsVar_18;
#line 388 "ml_util.m"
                MR_Word ml_backend__ml_util__Stmt_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_15, (MR_Integer) 0)));
#line 355 "ml_util.m"
                MR_Word ml_backend__ml_util___Context_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_15, (MR_Integer) 1)));

#line 356 "ml_util.m"
                {
#line 356 "ml_util.m"
                  ml_backend__ml_util__ThenContainsVar_18 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_94, ml_backend__ml_util__DataName_5);
                }
#line 393 "ml_util.m"
#line 393 "ml_util.m"
                switch (ml_backend__ml_util__ThenContainsVar_18) {
#line 393 "ml_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 393 "ml_util.m"
                  case (MR_Integer) 0:
#line 395 "ml_util.m"
                    {
#line 395 "ml_util.m"
                      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__maybe_statement_contains_var_2_f_0(ml_backend__ml_util__MaybeElse_16, ml_backend__ml_util__DataName_5);
                    }
#line 393 "ml_util.m"
                    break;
#line 393 "ml_util.m"
                  case (MR_Integer) 1:
#line 392 "ml_util.m"
                    ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 393 "ml_util.m"
                    break;
#line 393 "ml_util.m"
                }
#line 388 "ml_util.m"
              }
#line 387 "ml_util.m"
              break;
#line 387 "ml_util.m"
            case (MR_Integer) 1:
#line 386 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 387 "ml_util.m"
              break;
#line 387 "ml_util.m"
          }
#line 382 "ml_util.m"
        }
#line 362 "ml_util.m"
        break;
#line 362 "ml_util.m"
      case (MR_Integer) 3:
#line 362 "ml_util.m"
#line 362 "ml_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) {
#line 362 "ml_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 362 "ml_util.m"
          case (MR_Integer) 0:
#line 399 "ml_util.m"
            {
#line 399 "ml_util.m"
              MR_Word ml_backend__ml_util__Val_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 399 "ml_util.m"
              MR_Word ml_backend__ml_util__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
#line 399 "ml_util.m"
              MR_Word ml_backend__ml_util__Default_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
#line 399 "ml_util.m"
              MR_Word ml_backend__ml_util__ValContainsVar_24;
#line 399 "ml_util.m"
              MR_Word ml_backend__ml_util___Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 399 "ml_util.m"
              MR_Word ml_backend__ml_util___Range_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));

#line 400 "ml_util.m"
              {
#line 400 "ml_util.m"
                ml_backend__ml_util__ValContainsVar_24 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Val_20, ml_backend__ml_util__DataName_5);
              }
#line 404 "ml_util.m"
#line 404 "ml_util.m"
              switch (ml_backend__ml_util__ValContainsVar_24) {
#line 404 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 404 "ml_util.m"
                case (MR_Integer) 0:
#line 405 "ml_util.m"
                  {
#line 405 "ml_util.m"
                    MR_Word ml_backend__ml_util__CasesContainsVar_25;

#line 406 "ml_util.m"
                    {
#line 406 "ml_util.m"
                      ml_backend__ml_util__CasesContainsVar_25 = ml_backend__ml_util__cases_contains_var_2_f_0(ml_backend__ml_util__Cases_22, ml_backend__ml_util__DataName_5);
                    }
#line 410 "ml_util.m"
#line 410 "ml_util.m"
                    switch (ml_backend__ml_util__CasesContainsVar_25) {
#line 410 "ml_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 410 "ml_util.m"
                      case (MR_Integer) 0:
#line 412 "ml_util.m"
                        {
#line 412 "ml_util.m"
                          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__default_contains_var_2_f_0(ml_backend__ml_util__Default_23, ml_backend__ml_util__DataName_5);
                        }
#line 410 "ml_util.m"
                        break;
#line 410 "ml_util.m"
                      case (MR_Integer) 1:
#line 409 "ml_util.m"
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 410 "ml_util.m"
                        break;
#line 410 "ml_util.m"
                    }
#line 405 "ml_util.m"
                  }
#line 404 "ml_util.m"
                  break;
#line 404 "ml_util.m"
                case (MR_Integer) 1:
#line 403 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 404 "ml_util.m"
                  break;
#line 404 "ml_util.m"
              }
#line 399 "ml_util.m"
            }
#line 362 "ml_util.m"
            break;
#line 362 "ml_util.m"
          case (MR_Integer) 1:
#line 362 "ml_util.m"
          case (MR_Integer) 2:
#line 419 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 362 "ml_util.m"
            break;
#line 362 "ml_util.m"
          case (MR_Integer) 3:
#line 421 "ml_util.m"
            {
#line 421 "ml_util.m"
              MR_Word ml_backend__ml_util__Rval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 421 "ml_util.m"
              MR_Word ml_backend__ml_util___Labels_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));

#line 422 "ml_util.m"
              {
#line 422 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_44, ml_backend__ml_util__DataName_5);
              }
#line 421 "ml_util.m"
            }
#line 362 "ml_util.m"
            break;
#line 362 "ml_util.m"
          case (MR_Integer) 4:
#line 424 "ml_util.m"
            {
#line 424 "ml_util.m"
              MR_Word ml_backend__ml_util__Func_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 424 "ml_util.m"
              MR_Word ml_backend__ml_util__Obj_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
#line 424 "ml_util.m"
              MR_Word ml_backend__ml_util__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
#line 424 "ml_util.m"
              MR_Word ml_backend__ml_util__RetLvals_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
#line 424 "ml_util.m"
              MR_Word ml_backend__ml_util__FuncContainsVar_35;
#line 424 "ml_util.m"
              MR_Word ml_backend__ml_util___Sig_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 424 "ml_util.m"
              MR_Word ml_backend__ml_util___TailCall_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 6)));

#line 425 "ml_util.m"
              {
#line 425 "ml_util.m"
                ml_backend__ml_util__FuncContainsVar_35 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Func_30, ml_backend__ml_util__DataName_5);
              }
#line 429 "ml_util.m"
#line 429 "ml_util.m"
              switch (ml_backend__ml_util__FuncContainsVar_35) {
#line 429 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 429 "ml_util.m"
                case (MR_Integer) 0:
#line 1988 "ml_backend.ml_util.c"
                  if ((ml_backend__ml_util__Obj_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1990 "ml_backend.ml_util.c"
                    {
#line 1992 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__ArgsContainVar_37;

#line 437 "ml_util.m"
                      {
#line 437 "ml_util.m"
                        ml_backend__ml_util__ArgsContainVar_37 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_32, ml_backend__ml_util__DataName_5);
                      }
#line 441 "ml_util.m"
#line 441 "ml_util.m"
                      switch (ml_backend__ml_util__ArgsContainVar_37) {
#line 441 "ml_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 441 "ml_util.m"
                        case (MR_Integer) 0:
#line 443 "ml_util.m"
                          {
#line 443 "ml_util.m"
                            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_33, ml_backend__ml_util__DataName_5);
                          }
#line 441 "ml_util.m"
                          break;
#line 441 "ml_util.m"
                        case (MR_Integer) 1:
#line 440 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 441 "ml_util.m"
                          break;
#line 441 "ml_util.m"
                      }
#line 2022 "ml_backend.ml_util.c"
                    }
#line 2024 "ml_backend.ml_util.c"
                  else
#line 2026 "ml_backend.ml_util.c"
                    {
#line 2028 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__Rval_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Obj_31, (MR_Integer) 0)));
#line 2030 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__ObjContainsVar_98;

#line 838 "ml_util.m"
                      {
#line 838 "ml_util.m"
                        ml_backend__ml_util__ObjContainsVar_98 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_89, ml_backend__ml_util__DataName_5);
                      }
#line 435 "ml_util.m"
#line 435 "ml_util.m"
                      switch (ml_backend__ml_util__ObjContainsVar_98) {
#line 435 "ml_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 435 "ml_util.m"
                        case (MR_Integer) 0:
#line 436 "ml_util.m"
                          {
#line 436 "ml_util.m"
                            MR_Word ml_backend__ml_util__ArgsContainVar_96;

#line 437 "ml_util.m"
                            {
#line 437 "ml_util.m"
                              ml_backend__ml_util__ArgsContainVar_96 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_32, ml_backend__ml_util__DataName_5);
                            }
#line 441 "ml_util.m"
#line 441 "ml_util.m"
                            switch (ml_backend__ml_util__ArgsContainVar_96) {
#line 441 "ml_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 441 "ml_util.m"
                              case (MR_Integer) 0:
#line 443 "ml_util.m"
                                {
#line 443 "ml_util.m"
                                  return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_33, ml_backend__ml_util__DataName_5);
                                }
#line 441 "ml_util.m"
                                break;
#line 441 "ml_util.m"
                              case (MR_Integer) 1:
#line 440 "ml_util.m"
                                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 441 "ml_util.m"
                                break;
#line 441 "ml_util.m"
                            }
#line 436 "ml_util.m"
                          }
#line 435 "ml_util.m"
                          break;
#line 435 "ml_util.m"
                        case (MR_Integer) 1:
#line 434 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 435 "ml_util.m"
                          break;
#line 435 "ml_util.m"
                      }
#line 2089 "ml_backend.ml_util.c"
                    }
#line 429 "ml_util.m"
                  break;
#line 429 "ml_util.m"
                case (MR_Integer) 1:
#line 428 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 429 "ml_util.m"
                  break;
#line 429 "ml_util.m"
              }
#line 424 "ml_util.m"
            }
#line 362 "ml_util.m"
            break;
#line 362 "ml_util.m"
          case (MR_Integer) 5:
#line 448 "ml_util.m"
            {
#line 448 "ml_util.m"
              MR_Word ml_backend__ml_util__Rvals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 449 "ml_util.m"
              {
#line 449 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Rvals_38, ml_backend__ml_util__DataName_5);
              }
#line 448 "ml_util.m"
            }
#line 362 "ml_util.m"
            break;
#line 362 "ml_util.m"
          case (MR_Integer) 6:
#line 454 "ml_util.m"
            {
#line 454 "ml_util.m"
              MR_Word ml_backend__ml_util__Handler_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
#line 454 "ml_util.m"
              MR_Word ml_backend__ml_util__RefContainsVar_41;
#line 454 "ml_util.m"
              MR_Word ml_backend__ml_util__Statement_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 454 "ml_util.m"
              MR_Word ml_backend__ml_util__Ref_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 455 "ml_util.m"
              {
#line 455 "ml_util.m"
                ml_backend__ml_util__RefContainsVar_41 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Ref_46, ml_backend__ml_util__DataName_5);
              }
#line 459 "ml_util.m"
#line 459 "ml_util.m"
              switch (ml_backend__ml_util__RefContainsVar_41) {
#line 459 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 459 "ml_util.m"
                case (MR_Integer) 0:
#line 460 "ml_util.m"
                  {
#line 460 "ml_util.m"
                    MR_Word ml_backend__ml_util__StatementContainsVar_42;

#line 461 "ml_util.m"
                    {
#line 461 "ml_util.m"
                      ml_backend__ml_util__StatementContainsVar_42 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_45, ml_backend__ml_util__DataName_5);
                    }
#line 465 "ml_util.m"
#line 465 "ml_util.m"
                    switch (ml_backend__ml_util__StatementContainsVar_42) {
#line 465 "ml_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 465 "ml_util.m"
                      case (MR_Integer) 0:
#line 467 "ml_util.m"
                        {
#line 467 "ml_util.m"
                          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Handler_40, ml_backend__ml_util__DataName_5);
                        }
#line 465 "ml_util.m"
                        break;
#line 465 "ml_util.m"
                      case (MR_Integer) 1:
#line 464 "ml_util.m"
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 465 "ml_util.m"
                        break;
#line 465 "ml_util.m"
                    }
#line 460 "ml_util.m"
                  }
#line 459 "ml_util.m"
                  break;
#line 459 "ml_util.m"
                case (MR_Integer) 1:
#line 458 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 459 "ml_util.m"
                  break;
#line 459 "ml_util.m"
              }
#line 454 "ml_util.m"
            }
#line 362 "ml_util.m"
            break;
#line 362 "ml_util.m"
          case (MR_Integer) 7:
#line 451 "ml_util.m"
            {
#line 451 "ml_util.m"
              MR_Word ml_backend__ml_util__Ref_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 452 "ml_util.m"
              {
#line 452 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Ref_39, ml_backend__ml_util__DataName_5);
              }
#line 451 "ml_util.m"
            }
#line 362 "ml_util.m"
            break;
#line 362 "ml_util.m"
          case (MR_Integer) 8:
#line 471 "ml_util.m"
            {
#line 471 "ml_util.m"
              MR_Word ml_backend__ml_util__AtomicStmt_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 506 "ml_util.m"
#line 506 "ml_util.m"
              switch (MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_43)) {
#line 506 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 506 "ml_util.m"
                case (MR_Integer) 0:
#line 537 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 506 "ml_util.m"
                  break;
#line 506 "ml_util.m"
                case (MR_Integer) 1:
#line 507 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 506 "ml_util.m"
                  break;
#line 506 "ml_util.m"
                case (MR_Integer) 2:
#line 511 "ml_util.m"
                  {
#line 511 "ml_util.m"
                    MR_Word ml_backend__ml_util__Lval_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 0)));
#line 511 "ml_util.m"
                    MR_Word ml_backend__ml_util__Rval_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
#line 511 "ml_util.m"
                    MR_Word ml_backend__ml_util__LvalContainsVar_53;

#line 512 "ml_util.m"
                    {
#line 512 "ml_util.m"
                      ml_backend__ml_util__LvalContainsVar_53 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_51, ml_backend__ml_util__DataName_5);
                    }
#line 516 "ml_util.m"
#line 516 "ml_util.m"
                    switch (ml_backend__ml_util__LvalContainsVar_53) {
#line 516 "ml_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 516 "ml_util.m"
                      case (MR_Integer) 0:
#line 518 "ml_util.m"
                        {
#line 518 "ml_util.m"
                          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_52, ml_backend__ml_util__DataName_5);
                        }
#line 516 "ml_util.m"
                        break;
#line 516 "ml_util.m"
                      case (MR_Integer) 1:
#line 515 "ml_util.m"
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 516 "ml_util.m"
                        break;
#line 516 "ml_util.m"
                    }
#line 511 "ml_util.m"
                  }
#line 506 "ml_util.m"
                  break;
#line 506 "ml_util.m"
                case (MR_Integer) 3:
#line 506 "ml_util.m"
#line 506 "ml_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 0)))) {
#line 506 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 506 "ml_util.m"
                    case (MR_Integer) 0:
#line 511 "ml_util.m"
                      {
#line 511 "ml_util.m"
                        MR_Word ml_backend__ml_util__Lval_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
#line 511 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 511 "ml_util.m"
                        MR_Word ml_backend__ml_util__LvalContainsVar_79;

#line 512 "ml_util.m"
                        {
#line 512 "ml_util.m"
                          ml_backend__ml_util__LvalContainsVar_79 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_77, ml_backend__ml_util__DataName_5);
                        }
#line 516 "ml_util.m"
#line 516 "ml_util.m"
                        switch (ml_backend__ml_util__LvalContainsVar_79) {
#line 516 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 516 "ml_util.m"
                          case (MR_Integer) 0:
#line 518 "ml_util.m"
                            {
#line 518 "ml_util.m"
                              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_78, ml_backend__ml_util__DataName_5);
                            }
#line 516 "ml_util.m"
                            break;
#line 516 "ml_util.m"
                          case (MR_Integer) 1:
#line 515 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 516 "ml_util.m"
                            break;
#line 516 "ml_util.m"
                        }
#line 511 "ml_util.m"
                      }
#line 506 "ml_util.m"
                      break;
#line 506 "ml_util.m"
                    case (MR_Integer) 1:
#line 521 "ml_util.m"
                      {
#line 521 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 522 "ml_util.m"
                        {
#line 522 "ml_util.m"
                          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_72, ml_backend__ml_util__DataName_5);
                        }
#line 521 "ml_util.m"
                      }
#line 506 "ml_util.m"
                      break;
#line 506 "ml_util.m"
                    case (MR_Integer) 2:
#line 526 "ml_util.m"
                      {
#line 526 "ml_util.m"
                        MR_Word ml_backend__ml_util__Target_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
#line 526 "ml_util.m"
                        MR_Word ml_backend__ml_util__Args_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 7)));
#line 526 "ml_util.m"
                        MR_Word ml_backend__ml_util__TargetContainsVar_64;
#line 524 "ml_util.m"
                        MR_Word ml_backend__ml_util___MaybeTag_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 524 "ml_util.m"
                        MR_Word ml_backend__ml_util___ExplicitSecTag_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 3)));
#line 524 "ml_util.m"
                        MR_Word ml_backend__ml_util___Type_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 4)));
#line 524 "ml_util.m"
                        MR_Word ml_backend__ml_util___MaybeSize_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 5)));
#line 524 "ml_util.m"
                        MR_Word ml_backend__ml_util___MaybeCtorName_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 6)));
#line 524 "ml_util.m"
                        MR_Word ml_backend__ml_util___ArgTypes_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 8)));
#line 524 "ml_util.m"
                        MR_Word ml_backend__ml_util___MayUseAtomic_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 9)));
#line 524 "ml_util.m"
                        MR_Word ml_backend__ml_util___AllocId_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 10)));

#line 527 "ml_util.m"
                        {
#line 527 "ml_util.m"
                          ml_backend__ml_util__TargetContainsVar_64 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Target_54, ml_backend__ml_util__DataName_5);
                        }
#line 531 "ml_util.m"
#line 531 "ml_util.m"
                        switch (ml_backend__ml_util__TargetContainsVar_64) {
#line 531 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 531 "ml_util.m"
                          case (MR_Integer) 0:
#line 533 "ml_util.m"
                            {
#line 533 "ml_util.m"
                              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_60, ml_backend__ml_util__DataName_5);
                            }
#line 531 "ml_util.m"
                            break;
#line 531 "ml_util.m"
                          case (MR_Integer) 1:
#line 530 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 531 "ml_util.m"
                            break;
#line 531 "ml_util.m"
                        }
#line 526 "ml_util.m"
                      }
#line 506 "ml_util.m"
                      break;
#line 506 "ml_util.m"
                    case (MR_Integer) 3:
#line 539 "ml_util.m"
                      {
#line 539 "ml_util.m"
                        MR_Word ml_backend__ml_util__Lval_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 540 "ml_util.m"
                        {
#line 540 "ml_util.m"
                          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_73, ml_backend__ml_util__DataName_5);
                        }
#line 539 "ml_util.m"
                      }
#line 506 "ml_util.m"
                      break;
#line 506 "ml_util.m"
                    case (MR_Integer) 4:
#line 542 "ml_util.m"
                      {
#line 542 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 543 "ml_util.m"
                        {
#line 543 "ml_util.m"
                          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_74, ml_backend__ml_util__DataName_5);
                        }
#line 542 "ml_util.m"
                      }
#line 506 "ml_util.m"
                      break;
#line 506 "ml_util.m"
                    case (MR_Integer) 5:
#line 545 "ml_util.m"
                      {
#line 545 "ml_util.m"
                        MR_Word ml_backend__ml_util__TrailOp_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 568 "ml_util.m"
#line 568 "ml_util.m"
                        switch (MR_tag((MR_Word) ml_backend__ml_util__TrailOp_65)) {
#line 568 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 568 "ml_util.m"
                          case (MR_Integer) 0:
#line 577 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 568 "ml_util.m"
                            break;
#line 568 "ml_util.m"
                          case (MR_Integer) 1:
#line 568 "ml_util.m"
                            {
#line 568 "ml_util.m"
                              MR_Word ml_backend__ml_util__Lval_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)));

#line 569 "ml_util.m"
                              {
#line 569 "ml_util.m"
                                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_83, ml_backend__ml_util__DataName_5);
                              }
#line 568 "ml_util.m"
                            }
#line 568 "ml_util.m"
                            break;
#line 568 "ml_util.m"
                          case (MR_Integer) 2:
#line 571 "ml_util.m"
                            {
#line 571 "ml_util.m"
                              MR_Word ml_backend__ml_util__Rval_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)));
#line 571 "ml_util.m"
                              MR_Word ml_backend__ml_util___Reason_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

#line 572 "ml_util.m"
                              {
#line 572 "ml_util.m"
                                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_84, ml_backend__ml_util__DataName_5);
                              }
#line 571 "ml_util.m"
                            }
#line 568 "ml_util.m"
                            break;
#line 568 "ml_util.m"
                          case (MR_Integer) 3:
#line 568 "ml_util.m"
#line 568 "ml_util.m"
                            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)))) {
#line 568 "ml_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 568 "ml_util.m"
                              case (MR_Integer) 0:
#line 579 "ml_util.m"
                                {
#line 579 "ml_util.m"
                                  MR_Word ml_backend__ml_util__Lval_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

#line 580 "ml_util.m"
                                  {
#line 580 "ml_util.m"
                                    return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_86, ml_backend__ml_util__DataName_5);
                                  }
#line 579 "ml_util.m"
                                }
#line 568 "ml_util.m"
                                break;
#line 568 "ml_util.m"
                              case (MR_Integer) 1:
#line 582 "ml_util.m"
                                {
#line 582 "ml_util.m"
                                  MR_Word ml_backend__ml_util__Rval_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

#line 583 "ml_util.m"
                                  {
#line 583 "ml_util.m"
                                    return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_87, ml_backend__ml_util__DataName_5);
                                  }
#line 582 "ml_util.m"
                                }
#line 568 "ml_util.m"
                                break;
#line 568 "ml_util.m"
                            }
#line 568 "ml_util.m"
                            break;
#line 568 "ml_util.m"
                        }
#line 545 "ml_util.m"
                      }
#line 506 "ml_util.m"
                      break;
#line 506 "ml_util.m"
                    case (MR_Integer) 6:
#line 548 "ml_util.m"
                      {
#line 548 "ml_util.m"
                        MR_Word ml_backend__ml_util__Components_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 548 "ml_util.m"
                        MR_Word ml_backend__ml_util___Lang_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 549 "ml_util.m"
                        {
#line 549 "ml_util.m"
                          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__target_code_components_contains_var_2_f_0(ml_backend__ml_util__Components_67, ml_backend__ml_util__DataName_5);
                        }
#line 548 "ml_util.m"
                      }
#line 506 "ml_util.m"
                      break;
#line 506 "ml_util.m"
                    case (MR_Integer) 7:
#line 552 "ml_util.m"
                      {
#line 552 "ml_util.m"
                        MR_Word ml_backend__ml_util__OutlineArgs_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 552 "ml_util.m"
                        MR_Word ml_backend__ml_util__ReturnLvals_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 3)));
#line 552 "ml_util.m"
                        MR_Word ml_backend__ml_util__OutlineArgsContainVar_71;
#line 551 "ml_util.m"
                        MR_String ml_backend__ml_util___Code_70 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 4)));
#line 551 "ml_util.m"
                        MR_Word ml_backend__ml_util___Lang_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 553 "ml_util.m"
                        {
#line 553 "ml_util.m"
                          ml_backend__ml_util__OutlineArgsContainVar_71 = ml_backend__ml_util__outline_args_contains_var_2_f_0(ml_backend__ml_util__OutlineArgs_68, ml_backend__ml_util__DataName_5);
                        }
#line 558 "ml_util.m"
#line 558 "ml_util.m"
                        switch (ml_backend__ml_util__OutlineArgsContainVar_71) {
#line 558 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 558 "ml_util.m"
                          case (MR_Integer) 0:
#line 560 "ml_util.m"
                            {
#line 560 "ml_util.m"
                              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__ReturnLvals_69, ml_backend__ml_util__DataName_5);
                            }
#line 558 "ml_util.m"
                            break;
#line 558 "ml_util.m"
                          case (MR_Integer) 1:
#line 557 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 558 "ml_util.m"
                            break;
#line 558 "ml_util.m"
                        }
#line 552 "ml_util.m"
                      }
#line 506 "ml_util.m"
                      break;
#line 506 "ml_util.m"
                  }
#line 506 "ml_util.m"
                  break;
#line 506 "ml_util.m"
              }
#line 471 "ml_util.m"
            }
#line 362 "ml_util.m"
            break;
#line 362 "ml_util.m"
        }
#line 362 "ml_util.m"
        break;
#line 362 "ml_util.m"
    }
#line 362 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 362 "ml_util.m"
  }
#line 358 "ml_util.m"
}

#line 348 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
#line 348 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 348 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_2)
#line 348 "ml_util.m"
{
#line 350 "ml_util.m"
  {
#line 350 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 350 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 350 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 350 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 350 "ml_util.m"
    else
#line 351 "ml_util.m"
      {
#line 351 "ml_util.m"
        MR_Word ml_backend__ml_util__Statement_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 351 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 355 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 356 "ml_util.m"
        {
#line 356 "ml_util.m"
          return ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_2);
        }
#line 351 "ml_util.m"
      }
#line 350 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 350 "ml_util.m"
  }
#line 348 "ml_util.m"
}

#line 335 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__statements_contains_var_2_f_0(
#line 335 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 335 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 335 "ml_util.m"
{
#line 337 "ml_util.m"
  while (MR_TRUE)
#line 337 "ml_util.m"
    {
#line 337 "ml_util.m"
      /* tailcall optimized into a loop */
#line 337 "ml_util.m"
      {
#line 337 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 337 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 337 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 337 "ml_util.m"
        else
#line 338 "ml_util.m"
          {
#line 338 "ml_util.m"
            MR_Word ml_backend__ml_util__Statement_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 338 "ml_util.m"
            MR_Word ml_backend__ml_util__Statements_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 338 "ml_util.m"
            MR_Word ml_backend__ml_util__StatementContainsVar_9;
#line 338 "ml_util.m"
            MR_Word ml_backend__ml_util__Stmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 355 "ml_util.m"
            MR_Word ml_backend__ml_util___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 356 "ml_util.m"
            {
#line 356 "ml_util.m"
              ml_backend__ml_util__StatementContainsVar_9 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_13, ml_backend__ml_util__HeadVar__2_2);
            }
#line 343 "ml_util.m"
#line 343 "ml_util.m"
            switch (ml_backend__ml_util__StatementContainsVar_9) {
#line 343 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 343 "ml_util.m"
              case (MR_Integer) 0:
#line 345 "ml_util.m"
                {
#line 345 "ml_util.m"
                  /* direct tailcall eliminated */
#line 345 "ml_util.m"
                  {
#line 345 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Statements_6;

#line 345 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 345 "ml_util.m"
                  }
#line 345 "ml_util.m"
                  continue;
#line 345 "ml_util.m"
                }
#line 343 "ml_util.m"
                break;
#line 343 "ml_util.m"
              case (MR_Integer) 1:
#line 342 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 343 "ml_util.m"
                break;
#line 343 "ml_util.m"
            }
#line 338 "ml_util.m"
          }
#line 337 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 337 "ml_util.m"
      }
#line 337 "ml_util.m"
      break;
#line 337 "ml_util.m"
    }
#line 335 "ml_util.m"
}

#line 316 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__default_contains_statement_2_p_0(
#line 316 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 316 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_2,
#line 316 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 316 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 316 "ml_util.m"
{
#line 2770 "ml_backend.ml_util.c"
  {
#line 2772 "ml_backend.ml_util.c"
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2774 "ml_backend.ml_util.c"
    MR_Word ml_backend__ml_util__Statement_5;

#line 2777 "ml_backend.ml_util.c"
    if (ml_backend__ml_util__succeeded)
#line 2779 "ml_backend.ml_util.c"
      {
#line 2781 "ml_backend.ml_util.c"
        ml_backend__ml_util__Statement_5 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__HeadVar__1_1), (MR_Integer) 1);
#line 269 "ml_util.m"
        *ml_backend__ml_util__SubStatement_2 = ml_backend__ml_util__Statement_5;
#line 269 "ml_util.m"
        {
#line 269 "ml_util.m"
          ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
        }
#line 270 "ml_util.m"
        {
#line 270 "ml_util.m"
          MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 271 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 272 "ml_util.m"
          {
#line 272 "ml_util.m"
            ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__SubStatement_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 272 "ml_util.m"
            return;
          }
#line 270 "ml_util.m"
        }
#line 2806 "ml_backend.ml_util.c"
      }
#line 2808 "ml_backend.ml_util.c"
  }
#line 316 "ml_util.m"
}

#line 312 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_2(
#line 312 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 312 "ml_util.m"
{
#line 312 "ml_util.m"
  {
#line 312 "ml_util.m"
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 312 "ml_util.m"
    (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5 = ((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5);
#line 312 "ml_util.m"
    {
#line 312 "ml_util.m"
      ml_backend__ml_util__cases_contains_statement_2_p_0_1(ml_backend__ml_util__env_ptr);
#line 312 "ml_util.m"
      return;
    }
#line 312 "ml_util.m"
  }
#line 312 "ml_util.m"
}

#line 311 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_1(
#line 311 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 311 "ml_util.m"
{
#line 311 "ml_util.m"
  {
#line 311 "ml_util.m"
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 311 "ml_util.m"
    {
#line 313 "ml_util.m"
      MR_Word ml_backend__ml_util___FirstCond_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 0)));
#line 313 "ml_util.m"
      MR_Word ml_backend__ml_util___LaterConds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 1)));

#line 313 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 2)));
#line 269 "ml_util.m"
      *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4) = (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8;
#line 269 "ml_util.m"
      {
#line 269 "ml_util.m"
        ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr);
      }
#line 270 "ml_util.m"
      {
#line 270 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8, (MR_Integer) 0)));
#line 271 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8, (MR_Integer) 1)));

#line 272 "ml_util.m"
        {
#line 272 "ml_util.m"
          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_13, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr);
#line 272 "ml_util.m"
          return;
        }
#line 270 "ml_util.m"
      }
#line 311 "ml_util.m"
    }
#line 311 "ml_util.m"
  }
#line 311 "ml_util.m"
}

#line 308 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0(
#line 308 "ml_util.m"
  MR_Word ml_backend__ml_util__Cases_3,
#line 308 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 308 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 308 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 308 "ml_util.m"
{
#line 308 "ml_util.m"
  {
#line 308 "ml_util.m"
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s ml_backend__ml_util__env;

#line 308 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4 = ml_backend__ml_util__SubStatement_4;
#line 308 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont = ml_backend__ml_util__cont;
#line 308 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 311 "ml_util.m"
    {
#line 311 "ml_util.m"
      MR_bool ml_backend__ml_util__succeeded;

#line 312 "ml_util.m"
      {
#line 312 "ml_util.m"
        mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, &(ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5, ml_backend__ml_util__Cases_3, ml_backend__ml_util__cases_contains_statement_2_p_0_2, &ml_backend__ml_util__env);
      }
#line 311 "ml_util.m"
    }
#line 308 "ml_util.m"
  }
#line 308 "ml_util.m"
}

#line 262 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(
#line 262 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 262 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
#line 262 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 262 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 262 "ml_util.m"
{
#line 2944 "ml_backend.ml_util.c"
  {
#line 2946 "ml_backend.ml_util.c"
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2948 "ml_backend.ml_util.c"
    MR_Word ml_backend__ml_util__Statement_4;

#line 2951 "ml_backend.ml_util.c"
    if (ml_backend__ml_util__succeeded)
#line 2953 "ml_backend.ml_util.c"
      {
#line 2955 "ml_backend.ml_util.c"
        ml_backend__ml_util__Statement_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 269 "ml_util.m"
        *ml_backend__ml_util__HeadVar__2_2 = ml_backend__ml_util__Statement_4;
#line 269 "ml_util.m"
        {
#line 269 "ml_util.m"
          ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
        }
#line 270 "ml_util.m"
        {
#line 270 "ml_util.m"
          MR_Word ml_backend__ml_util__Stmt_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 0)));
#line 271 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 1)));

#line 272 "ml_util.m"
          {
#line 272 "ml_util.m"
            ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_10, ml_backend__ml_util__HeadVar__2_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 272 "ml_util.m"
            return;
          }
#line 270 "ml_util.m"
        }
#line 2980 "ml_backend.ml_util.c"
      }
#line 2982 "ml_backend.ml_util.c"
  }
#line 262 "ml_util.m"
}

#line 259 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_2(
#line 259 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 259 "ml_util.m"
{
#line 259 "ml_util.m"
  {
#line 259 "ml_util.m"
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 259 "ml_util.m"
    (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5 = ((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5);
#line 259 "ml_util.m"
    {
#line 259 "ml_util.m"
      ml_backend__ml_util__statements_contains_statement_2_p_0_1(ml_backend__ml_util__env_ptr);
#line 259 "ml_util.m"
      return;
    }
#line 259 "ml_util.m"
  }
#line 259 "ml_util.m"
}

#line 258 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_1(
#line 258 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 258 "ml_util.m"
{
#line 258 "ml_util.m"
  {
#line 258 "ml_util.m"
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 269 "ml_util.m"
    {
#line 269 "ml_util.m"
      *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4) = (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5;
#line 269 "ml_util.m"
      {
#line 269 "ml_util.m"
        ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr);
      }
#line 269 "ml_util.m"
    }
#line 270 "ml_util.m"
    {
#line 270 "ml_util.m"
      MR_Word ml_backend__ml_util__Stmt_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5, (MR_Integer) 0)));
#line 271 "ml_util.m"
      MR_Word ml_backend__ml_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5, (MR_Integer) 1)));

#line 272 "ml_util.m"
      {
#line 272 "ml_util.m"
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_10, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr);
#line 272 "ml_util.m"
        return;
      }
#line 270 "ml_util.m"
    }
#line 258 "ml_util.m"
  }
#line 258 "ml_util.m"
}

#line 255 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0(
#line 255 "ml_util.m"
  MR_Word ml_backend__ml_util__Statements_3,
#line 255 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 255 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 255 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 255 "ml_util.m"
{
#line 255 "ml_util.m"
  {
#line 255 "ml_util.m"
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s ml_backend__ml_util__env;

#line 255 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4 = ml_backend__ml_util__SubStatement_4;
#line 255 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont = ml_backend__ml_util__cont;
#line 255 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 258 "ml_util.m"
    {
#line 258 "ml_util.m"
      MR_bool ml_backend__ml_util__succeeded;

#line 259 "ml_util.m"
      {
#line 259 "ml_util.m"
        mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, &(ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5, ml_backend__ml_util__Statements_3, ml_backend__ml_util__statements_contains_statement_2_p_0_2, &ml_backend__ml_util__env);
      }
#line 258 "ml_util.m"
    }
#line 255 "ml_util.m"
  }
#line 255 "ml_util.m"
}

#line 188 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__wrap_init_obj_1_f_0(
#line 188 "ml_util.m"
  MR_Word ml_backend__ml_util__Rval_3)
#line 188 "ml_util.m"
{
#line 1010 "ml_util.m"
  {
#line 1010 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 1010 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;

#line 1010 "ml_util.m"
    {
#line 1010 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_3));
#line 1010 "ml_util.m"
    }
#line 1010 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 1010 "ml_util.m"
  }
#line 188 "ml_util.m"
}

#line 185 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_reserved_address_2_f_0(
#line 185 "ml_util.m"
  MR_Word ml_backend__ml_util__ModuleInfo_4,
#line 185 "ml_util.m"
  MR_Word ml_backend__ml_util__ReservedAddress_5)
#line 185 "ml_util.m"
{
#line 1005 "ml_util.m"
  {
#line 1005 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 1005 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 1005 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;

#line 1007 "ml_util.m"
    {
#line 1007 "ml_util.m"
      ml_backend__ml_util__V_6_6 = ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(ml_backend__ml_util__ModuleInfo_4, ml_backend__ml_util__ReservedAddress_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
    }
#line 1007 "ml_util.m"
    {
#line 1007 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 1007 "ml_util.m"
    }
#line 1005 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 1005 "ml_util.m"
  }
#line 185 "ml_util.m"
}

#line 183 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_boxed_int_1_f_0(
#line 183 "ml_util.m"
  MR_Integer ml_backend__ml_util__Int_3)
#line 183 "ml_util.m"
{
#line 1002 "ml_util.m"
  {
#line 1002 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 1002 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 1002 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 1002 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 1002 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;

#line 1003 "ml_util.m"
    {
#line 1003 "ml_util.m"
      ml_backend__ml_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "ml_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__V_8_8, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
#line 1003 "ml_util.m"
    }
#line 1003 "ml_util.m"
    {
#line 1003 "ml_util.m"
      ml_backend__ml_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1003 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 1) = ((MR_Box) (ml_backend__ml_util__V_8_8));
#line 1003 "ml_util.m"
    }
#line 1003 "ml_util.m"
    {
#line 1003 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1003 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (&ml_backend__ml_util_scalar_common_3[6]));
#line 1003 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 2) = ((MR_Box) (ml_backend__ml_util__V_7_7));
#line 1003 "ml_util.m"
    }
#line 1003 "ml_util.m"
    {
#line 1003 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 1003 "ml_util.m"
    }
#line 1002 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 1002 "ml_util.m"
  }
#line 183 "ml_util.m"
}

#line 181 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_bool_1_f_0(
#line 181 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1)
#line 181 "ml_util.m"
{
#line 999 "ml_util.m"
  {
#line 999 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 999 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;

#line 999 "ml_util.m"
#line 999 "ml_util.m"
    switch (ml_backend__ml_util__HeadVar__1_1) {
#line 999 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 999 "ml_util.m"
      case (MR_Integer) 0:
#line 999 "ml_util.m"
        {
#line 999 "ml_util.m"
          ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[4]);
#line 999 "ml_util.m"
        }
#line 999 "ml_util.m"
        break;
#line 999 "ml_util.m"
      case (MR_Integer) 1:
#line 1000 "ml_util.m"
        {
#line 1000 "ml_util.m"
          ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[5]);
#line 1000 "ml_util.m"
        }
#line 999 "ml_util.m"
        break;
#line 999 "ml_util.m"
    }
#line 999 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 999 "ml_util.m"
  }
#line 181 "ml_util.m"
}

#line 179 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_int_1_f_0(
#line 179 "ml_util.m"
  MR_Integer ml_backend__ml_util__Int_3)
#line 179 "ml_util.m"
{
#line 994 "ml_util.m"
  {
#line 994 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 994 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 994 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 994 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 994 "ml_util.m"
    {
#line 994 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 994 "ml_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
#line 994 "ml_util.m"
    }
#line 994 "ml_util.m"
    {
#line 994 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 994 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 994 "ml_util.m"
    }
#line 994 "ml_util.m"
    {
#line 994 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 994 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 994 "ml_util.m"
    }
#line 994 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 994 "ml_util.m"
  }
#line 179 "ml_util.m"
}

#line 177 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_foreign_2_f_0(
#line 177 "ml_util.m"
  MR_Word ml_backend__ml_util__Lang_4,
#line 177 "ml_util.m"
  MR_String ml_backend__ml_util__String_5)
#line 177 "ml_util.m"
{
#line 996 "ml_util.m"
  {
#line 996 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 996 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 996 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;
#line 996 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;

#line 997 "ml_util.m"
    {
#line 997 "ml_util.m"
      ml_backend__ml_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 997 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 997 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 1) = ((MR_Box) (ml_backend__ml_util__Lang_4));
#line 997 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 2) = ((MR_Box) (ml_backend__ml_util__String_5));
#line 997 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 997 "ml_util.m"
    }
#line 997 "ml_util.m"
    {
#line 997 "ml_util.m"
      ml_backend__ml_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 997 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_6_6, 1) = ((MR_Box) (ml_backend__ml_util__V_7_7));
#line 997 "ml_util.m"
    }
#line 997 "ml_util.m"
    {
#line 997 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 997 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 997 "ml_util.m"
    }
#line 996 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 996 "ml_util.m"
  }
#line 177 "ml_util.m"
}

#line 175 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_string_1_f_0(
#line 175 "ml_util.m"
  MR_String ml_backend__ml_util__String_3)
#line 175 "ml_util.m"
{
#line 992 "ml_util.m"
  {
#line 992 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 992 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 992 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 992 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 992 "ml_util.m"
    {
#line 992 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 992 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 992 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 1) = ((MR_Box) (ml_backend__ml_util__String_3));
#line 992 "ml_util.m"
    }
#line 992 "ml_util.m"
    {
#line 992 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 992 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 992 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 992 "ml_util.m"
    }
#line 992 "ml_util.m"
    {
#line 992 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 992 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 992 "ml_util.m"
    }
#line 992 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 992 "ml_util.m"
  }
#line 175 "ml_util.m"
}

#line 173 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_null_pointer_1_f_0(
#line 173 "ml_util.m"
  MR_Word ml_backend__ml_util__Type_3)
#line 173 "ml_util.m"
{
#line 990 "ml_util.m"
  {
#line 990 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 990 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 990 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 990 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 990 "ml_util.m"
    {
#line 990 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 990 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 1) = ((MR_Box) (ml_backend__ml_util__Type_3));
#line 990 "ml_util.m"
    }
#line 990 "ml_util.m"
    {
#line 990 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 990 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 990 "ml_util.m"
    }
#line 990 "ml_util.m"
    {
#line 990 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 990 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 990 "ml_util.m"
    }
#line 990 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 990 "ml_util.m"
  }
#line 173 "ml_util.m"
}

#line 170 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_maybe_3_f_0(
#line 170 "ml_util.m"
  MR_Word ml_backend__ml_util__TypeInfo_for_T_10,
#line 170 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 170 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2,
#line 170 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__3_3)
#line 170 "ml_util.m"
{
#line 987 "ml_util.m"
  {
#line 987 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 987 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__4_4;

#line 987 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "ml_util.m"
      {
#line 990 "ml_util.m"
        MR_Word ml_backend__ml_util__V_12_12;
#line 990 "ml_util.m"
        MR_Word ml_backend__ml_util__V_13_13;

#line 990 "ml_util.m"
        {
#line 990 "ml_util.m"
          ml_backend__ml_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 990 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_13_13, 1) = ((MR_Box) (ml_backend__ml_util__HeadVar__1_1));
#line 990 "ml_util.m"
        }
#line 990 "ml_util.m"
        {
#line 990 "ml_util.m"
          ml_backend__ml_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 990 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_12_12, 1) = ((MR_Box) (ml_backend__ml_util__V_13_13));
#line 990 "ml_util.m"
        }
#line 990 "ml_util.m"
        {
#line 990 "ml_util.m"
          ml_backend__ml_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 990 "ml_util.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__ml_util__V_12_12));
#line 990 "ml_util.m"
        }
#line 990 "ml_util.m"
      }
#line 987 "ml_util.m"
    else
#line 987 "ml_util.m"
      {
#line 987 "ml_util.m"
        MR_Box ml_backend__ml_util__X_7 = (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, (MR_Integer) 0));
#line 987 "ml_util.m"
        MR_Box MR_CALL (* ml_backend__ml_util__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 987 "ml_util.m"
        MR_Box ml_backend__ml_util__conv1_HeadVar__4_4;

#line 987 "ml_util.m"
        {
#line 987 "ml_util.m"
          ml_backend__ml_util__conv1_HeadVar__4_4 = ml_backend__ml_util__func_0(((MR_Box) ml_backend__ml_util__HeadVar__2_2), ml_backend__ml_util__X_7);
        }
#line 987 "ml_util.m"
        ml_backend__ml_util__HeadVar__4_4 = ((MR_Word) ml_backend__ml_util__conv1_HeadVar__4_4);
#line 987 "ml_util.m"
      }
#line 987 "ml_util.m"
    return ml_backend__ml_util__HeadVar__4_4;
#line 987 "ml_util.m"
  }
#line 170 "ml_util.m"
}

#line 168 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_array_2_f_0(
#line 168 "ml_util.m"
  MR_Word ml_backend__ml_util__TypeInfo_for_T_7,
#line 168 "ml_util.m"
  MR_Word ml_backend__ml_util__Conv_4,
#line 168 "ml_util.m"
  MR_Word ml_backend__ml_util__List_5)
#line 168 "ml_util.m"
{
#line 985 "ml_util.m"
  {
#line 985 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 985 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 985 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;

#line 985 "ml_util.m"
    {
#line 985 "ml_util.m"
      ml_backend__ml_util__V_6_6 = mercury__list__map_2_f_0(ml_backend__ml_util__TypeInfo_for_T_7, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_util__Conv_4, ml_backend__ml_util__List_5);
    }
#line 985 "ml_util.m"
    {
#line 985 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 985 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 985 "ml_util.m"
    }
#line 985 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 985 "ml_util.m"
  }
#line 168 "ml_util.m"
}

#line 166 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_builtin_const_1_f_0(
#line 166 "ml_util.m"
  MR_String ml_backend__ml_util__Name_3)
#line 166 "ml_util.m"
{
#line 975 "ml_util.m"
  {
#line 975 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 975 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 975 "ml_util.m"
    MR_Word ml_backend__ml_util__Rval_4;
#line 975 "ml_util.m"
    MR_Word ml_backend__ml_util__PrivateBuiltin_5;
#line 975 "ml_util.m"
    MR_Word ml_backend__ml_util__MLDS_Module_6;
#line 975 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 975 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 975 "ml_util.m"
    MR_Word ml_backend__ml_util__V_11_11;

#line 976 "ml_util.m"
    {
#line 976 "ml_util.m"
      ml_backend__ml_util__PrivateBuiltin_5 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 977 "ml_util.m"
    {
#line 977 "ml_util.m"
      ml_backend__ml_util__MLDS_Module_6 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_util__PrivateBuiltin_5);
    }
#line 983 "ml_util.m"
    {
#line 983 "ml_util.m"
      ml_backend__ml_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 983 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_11_11, 0) = ((MR_Box) (ml_backend__ml_util__Name_3));
#line 983 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "ml_util.m"
    }
#line 982 "ml_util.m"
    {
#line 982 "ml_util.m"
      ml_backend__ml_util__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 982 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 0) = ((MR_Box) (ml_backend__ml_util__MLDS_Module_6));
#line 982 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 1) = ((MR_Box) ((MR_Integer) 0));
#line 982 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 2) = ((MR_Box) (ml_backend__ml_util__V_11_11));
#line 982 "ml_util.m"
    }
#line 982 "ml_util.m"
    {
#line 982 "ml_util.m"
      ml_backend__ml_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_8_8, 0) = ((MR_Box) (ml_backend__ml_util__V_9_9));
#line 982 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 982 "ml_util.m"
    }
#line 982 "ml_util.m"
    {
#line 982 "ml_util.m"
      ml_backend__ml_util__Rval_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 982 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, 0) = ((MR_Box) (ml_backend__ml_util__V_8_8));
#line 982 "ml_util.m"
    }
#line 975 "ml_util.m"
    {
#line 975 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 975 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_4));
#line 975 "ml_util.m"
    }
#line 975 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 975 "ml_util.m"
  }
#line 166 "ml_util.m"
}

#line 157 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_p_0(
#line 157 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 157 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 157 "ml_util.m"
{
#line 939 "ml_util.m"
  {
#line 939 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded = (ml_backend__ml_util__HeadVar__1_1 == (MR_Integer) 1);
#line 939 "ml_util.m"
    MR_Word ml_backend__ml_util__TypeName_3;
#line 939 "ml_util.m"
    MR_Word ml_backend__ml_util__Builtin_5;
#line 939 "ml_util.m"
    MR_Word ml_backend__ml_util__PrivateBuiltin_6;
#line 939 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiImplementation_7;
#line 939 "ml_util.m"
    MR_Word ml_backend__ml_util__Univ_8;
#line 939 "ml_util.m"
    MR_Word ml_backend__ml_util__MutVar_9;
#line 939 "ml_util.m"
    MR_Word ml_backend__ml_util__TypeDesc_10;
#line 939 "ml_util.m"
    MR_String ml_backend__ml_util__V_12_12;
#line 939 "ml_util.m"
    MR_String ml_backend__ml_util__V_13_13;
#line 939 "ml_util.m"
    MR_String ml_backend__ml_util__V_14_14;
#line 939 "ml_util.m"
    MR_String ml_backend__ml_util__V_15_15;
#line 939 "ml_util.m"
    MR_String ml_backend__ml_util__V_43_43;
#line 939 "ml_util.m"
    MR_Word ml_backend__ml_util__V_44_44;
#line 939 "ml_util.m"
    MR_Integer ml_backend__ml_util___Arity_4;

#line 939 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 939 "ml_util.m"
      {
#line 939 "ml_util.m"
        ml_backend__ml_util__TypeName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 0)));
#line 939 "ml_util.m"
        ml_backend__ml_util___Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 940 "ml_util.m"
        {
#line 940 "ml_util.m"
          ml_backend__ml_util__Builtin_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
#line 941 "ml_util.m"
        {
#line 941 "ml_util.m"
          ml_backend__ml_util__PrivateBuiltin_6 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
#line 942 "ml_util.m"
        ml_backend__ml_util__V_12_12 = (MR_String) "rtti_implementation";
#line 943 "ml_util.m"
        ml_backend__ml_util__V_13_13 = (MR_String) "univ";
#line 944 "ml_util.m"
        ml_backend__ml_util__V_14_14 = (MR_String) "mutvar";
#line 945 "ml_util.m"
        ml_backend__ml_util__V_15_15 = (MR_String) "type_desc";
#line 946 "ml_util.m"
        ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__TypeName_3)) == (MR_mktag((MR_Integer) 1)));
#line 946 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 946 "ml_util.m"
          {
#line 946 "ml_util.m"
            ml_backend__ml_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__TypeName_3, (MR_Integer) 0)));
#line 946 "ml_util.m"
            ml_backend__ml_util__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__TypeName_3, (MR_Integer) 1)));
#line 942 "ml_util.m"
            ml_backend__ml_util__RttiImplementation_7 = (MR_Word) &ml_backend__ml_util_scalar_common_3[0];
#line 943 "ml_util.m"
            ml_backend__ml_util__Univ_8 = (MR_Word) &ml_backend__ml_util_scalar_common_3[1];
#line 944 "ml_util.m"
            ml_backend__ml_util__MutVar_9 = (MR_Word) &ml_backend__ml_util_scalar_common_3[2];
#line 945 "ml_util.m"
            ml_backend__ml_util__TypeDesc_10 = (MR_Word) &ml_backend__ml_util_scalar_common_3[3];
#line 947 "ml_util.m"
            {
#line 947 "ml_util.m"
              MR_Integer ml_backend__ml_util__slot_0;
#line 947 "ml_util.m"
              MR_String ml_backend__ml_util__str_1;

#line 947 "ml_util.m"
              /* hashed string jump switch */
#line 947 "ml_util.m"
              /* compute the hash value of the input string */
#line 947 "ml_util.m"
              ml_backend__ml_util__slot_0 = ((MR_hash_string5(ml_backend__ml_util__V_43_43)) & (MR_Integer) 63);
#line 947 "ml_util.m"
              /* no collisions; no hash chain loop */
#line 947 "ml_util.m"
              /* lookup the string for this hash slot */
#line 947 "ml_util.m"
              ml_backend__ml_util__str_1 = ((&ml_backend__ml_util_vector_common_4[0 + ml_backend__ml_util__slot_0]))->ml_backend__ml_util__vector_common_type_4_0__vct_4_f_0;
#line 947 "ml_util.m"
              /* did we find a match? */
#line 947 "ml_util.m"
              if ((((ml_backend__ml_util__str_1 != NULL)) && ((strcmp(ml_backend__ml_util__str_1, ml_backend__ml_util__V_43_43) == 0))))
#line 947 "ml_util.m"
                {
#line 947 "ml_util.m"
                  /* we found a match; dispatch to the corresponding code */
#line 947 "ml_util.m"
#line 947 "ml_util.m"
                  switch (ml_backend__ml_util__slot_0) {
#line 947 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 947 "ml_util.m"
                    case (MR_Integer) 6:
#line 963 "ml_util.m"
                      {
#line 963 "ml_util.m"
                        /* case "c_pointer" */
#line 963 "ml_util.m"
                        {
#line 963 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__Builtin_5, ml_backend__ml_util__V_44_44);
                        }
#line 963 "ml_util.m"
                      }
#line 947 "ml_util.m"
                      break;
#line 947 "ml_util.m"
                    case (MR_Integer) 17:
#line 958 "ml_util.m"
                      {
#line 958 "ml_util.m"
                        /* case "type_ctor_desc" */
#line 958 "ml_util.m"
                        {
#line 958 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__TypeDesc_10, ml_backend__ml_util__V_44_44);
                        }
#line 958 "ml_util.m"
                      }
#line 947 "ml_util.m"
                      break;
#line 947 "ml_util.m"
                    case (MR_Integer) 24:
#line 949 "ml_util.m"
                      {
#line 949 "ml_util.m"
                        /* case "type_info" */
#line 949 "ml_util.m"
                        {
#line 949 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                        }
#line 949 "ml_util.m"
                      }
#line 947 "ml_util.m"
                      break;
#line 947 "ml_util.m"
                    case (MR_Integer) 34:
#line 961 "ml_util.m"
                      {
#line 961 "ml_util.m"
                        /* case "ref" */
#line 961 "ml_util.m"
                        {
#line 961 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                        }
#line 961 "ml_util.m"
                      }
#line 947 "ml_util.m"
                      break;
#line 947 "ml_util.m"
                    case (MR_Integer) 36:
#line 968 "ml_util.m"
                      {
#line 968 "ml_util.m"
                        /* case "comparison_result" */
#line 968 "ml_util.m"
                        {
#line 968 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__Builtin_5, ml_backend__ml_util__V_44_44);
                        }
#line 968 "ml_util.m"
                      }
#line 947 "ml_util.m"
                      break;
#line 947 "ml_util.m"
                    case (MR_Integer) 38:
#line 969 "ml_util.m"
                      {
#line 969 "ml_util.m"
                        /* case "univ" */
#line 969 "ml_util.m"
                        {
#line 969 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__Univ_8, ml_backend__ml_util__V_44_44);
                        }
#line 969 "ml_util.m"
                      }
#line 947 "ml_util.m"
                      break;
#line 947 "ml_util.m"
                    case (MR_Integer) 42:
#line 962 "ml_util.m"
                      {
#line 962 "ml_util.m"
                        /* case "heap_pointer" */
#line 962 "ml_util.m"
                        {
#line 962 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                        }
#line 962 "ml_util.m"
                      }
#line 947 "ml_util.m"
                      break;
#line 947 "ml_util.m"
                    case (MR_Integer) 46:
#line 946 "ml_util.m"
                      {
#line 946 "ml_util.m"
                        /* case "base_typeclass_info" */
#line 946 "ml_util.m"
                        {
#line 946 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                        }
#line 946 "ml_util.m"
                      }
#line 947 "ml_util.m"
                      break;
#line 947 "ml_util.m"
                    case (MR_Integer) 49:
#line 970 "ml_util.m"
                      {
#line 970 "ml_util.m"
                        /* case "mutvar" */
#line 970 "ml_util.m"
                        {
#line 970 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__MutVar_9, ml_backend__ml_util__V_44_44);
                        }
#line 970 "ml_util.m"
                      }
#line 947 "ml_util.m"
                      break;
#line 947 "ml_util.m"
                    case (MR_Integer) 50:
#line 947 "ml_util.m"
                      {
#line 947 "ml_util.m"
                        /* case "type_ctor_info" */
#line 947 "ml_util.m"
                        {
#line 947 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                        }
#line 947 "ml_util.m"
                      }
#line 947 "ml_util.m"
                      break;
#line 947 "ml_util.m"
                    case (MR_Integer) 51:
#line 957 "ml_util.m"
                      {
#line 957 "ml_util.m"
                        /* case "pseudo_type_desc" */
#line 957 "ml_util.m"
                        {
#line 957 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__TypeDesc_10, ml_backend__ml_util__V_44_44);
                        }
#line 957 "ml_util.m"
                      }
#line 947 "ml_util.m"
                      break;
#line 947 "ml_util.m"
                    case (MR_Integer) 53:
#line 948 "ml_util.m"
                      {
#line 948 "ml_util.m"
                        /* case "typeclass_info" */
#line 948 "ml_util.m"
                        {
#line 948 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                        }
#line 948 "ml_util.m"
                      }
#line 947 "ml_util.m"
                      break;
#line 947 "ml_util.m"
                    case (MR_Integer) 61:
#line 956 "ml_util.m"
                      {
#line 956 "ml_util.m"
                        /* case "type_desc" */
#line 956 "ml_util.m"
                        {
#line 956 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__TypeDesc_10, ml_backend__ml_util__V_44_44);
                        }
#line 956 "ml_util.m"
                      }
#line 947 "ml_util.m"
                      break;
#line 947 "ml_util.m"
                  }
#line 947 "ml_util.m"
                  /* jump out of search loop */
#line 947 "ml_util.m"
                  goto label_0;
#line 947 "ml_util.m"
                }
#line 947 "ml_util.m"
              ml_backend__ml_util__succeeded = MR_FALSE;
#line 947 "ml_util.m"
            label_0:;
#line 947 "ml_util.m"
            }
#line 947 "ml_util.m"
            if (!(ml_backend__ml_util__succeeded))
#line 954 "ml_util.m"
              {
#line 954 "ml_util.m"
                return ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__RttiImplementation_7, ml_backend__ml_util__V_44_44);
              }
#line 946 "ml_util.m"
          }
#line 939 "ml_util.m"
      }
#line 939 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 939 "ml_util.m"
  }
#line 157 "ml_util.m"
}

#line 154 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__type_needs_lowlevel_rep_2_p_0(
#line 154 "ml_util.m"
  MR_Word ml_backend__ml_util__Target_3,
#line 154 "ml_util.m"
  MR_Word ml_backend__ml_util__Type_4)
#line 154 "ml_util.m"
{
#line 934 "ml_util.m"
  {
#line 934 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 934 "ml_util.m"
    MR_Word ml_backend__ml_util__TypeCtor_5;

#line 935 "ml_util.m"
    {
#line 935 "ml_util.m"
      ml_backend__ml_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ml_backend__ml_util__Type_4, &ml_backend__ml_util__TypeCtor_5);
    }
#line 934 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 936 "ml_util.m"
      {
#line 936 "ml_util.m"
        return ml_backend__ml_util__succeeded = ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_p_0(ml_backend__ml_util__Target_3, ml_backend__ml_util__TypeCtor_5);
      }
#line 934 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 934 "ml_util.m"
  }
#line 154 "ml_util.m"
}

#line 147 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__lval_contains_var_2_f_0(
#line 147 "ml_util.m"
  MR_Word ml_backend__ml_util__Lval_4,
#line 147 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 147 "ml_util.m"
{
#line 914 "ml_util.m"
  {
#line 914 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 914 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 914 "ml_util.m"
#line 914 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Lval_4)) {
#line 914 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 914 "ml_util.m"
      case (MR_Integer) 0:
#line 914 "ml_util.m"
        {
#line 914 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
#line 914 "ml_util.m"
          MR_Word ml_backend__ml_util___MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 914 "ml_util.m"
          MR_Word ml_backend__ml_util___FieldId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 2)));
#line 914 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 3)));
#line 914 "ml_util.m"
          MR_Word ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 4)));

#line 915 "ml_util.m"
          {
#line 915 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_8, ml_backend__ml_util__DataName_5);
          }
#line 914 "ml_util.m"
        }
#line 914 "ml_util.m"
        break;
#line 914 "ml_util.m"
      case (MR_Integer) 1:
#line 917 "ml_util.m"
        {
#line 917 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 917 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));

#line 918 "ml_util.m"
          {
#line 918 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_19, ml_backend__ml_util__DataName_5);
          }
#line 917 "ml_util.m"
        }
#line 914 "ml_util.m"
        break;
#line 914 "ml_util.m"
      case (MR_Integer) 2:
#line 921 "ml_util.m"
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 914 "ml_util.m"
        break;
#line 914 "ml_util.m"
      case (MR_Integer) 3:
#line 923 "ml_util.m"
        {
#line 923 "ml_util.m"
          MR_Word ml_backend__ml_util__ModuleName_14;
#line 923 "ml_util.m"
          MR_Word ml_backend__ml_util__QualKind_15;
#line 923 "ml_util.m"
          MR_Word ml_backend__ml_util__Name_16;
#line 923 "ml_util.m"
          MR_Word ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 923 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
#line 925 "ml_util.m"
          MR_Word ml_backend__ml_util__V_18_18;
#line 925 "ml_util.m"
          MR_Word ml_backend__ml_util__V_22_22;
#line 925 "ml_util.m"
          MR_Word ml_backend__ml_util__V_23_23;
#line 925 "ml_util.m"
          MR_Word ml_backend__ml_util__V_24_24;

#line 923 "ml_util.m"
          ml_backend__ml_util__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 0)));
#line 923 "ml_util.m"
          ml_backend__ml_util__QualKind_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 1)));
#line 923 "ml_util.m"
          ml_backend__ml_util__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 2)));
#line 925 "ml_util.m"
          ml_backend__ml_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
#line 925 "ml_util.m"
          ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));
#line 925 "ml_util.m"
          ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
#line 925 "ml_util.m"
          {
#line 925 "ml_util.m"
            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_14, ml_backend__ml_util__V_22_22);
          }
#line 925 "ml_util.m"
          if (ml_backend__ml_util__succeeded)
#line 925 "ml_util.m"
            {
#line 925 "ml_util.m"
              ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_15 == ml_backend__ml_util__V_23_23);
#line 925 "ml_util.m"
              if (ml_backend__ml_util__succeeded)
#line 925 "ml_util.m"
                {
#line 925 "ml_util.m"
                  ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 925 "ml_util.m"
                  if (ml_backend__ml_util__succeeded)
#line 925 "ml_util.m"
                    {
#line 925 "ml_util.m"
                      ml_backend__ml_util__V_24_24 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_18_18), (MR_Integer) 1);
#line 925 "ml_util.m"
                      {
#line 925 "ml_util.m"
                        ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_util__Name_16, ml_backend__ml_util__V_24_24);
                      }
#line 925 "ml_util.m"
                    }
#line 925 "ml_util.m"
                }
#line 925 "ml_util.m"
            }
#line 927 "ml_util.m"
          if (ml_backend__ml_util__succeeded)
#line 926 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 927 "ml_util.m"
          else
#line 928 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 923 "ml_util.m"
        }
#line 914 "ml_util.m"
        break;
#line 914 "ml_util.m"
    }
#line 914 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 914 "ml_util.m"
  }
#line 147 "ml_util.m"
}

#line 145 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__lvals_contains_var_2_f_0(
#line 145 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 145 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 145 "ml_util.m"
{
#line 901 "ml_util.m"
  while (MR_TRUE)
#line 901 "ml_util.m"
    {
#line 901 "ml_util.m"
      /* tailcall optimized into a loop */
#line 901 "ml_util.m"
      {
#line 901 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 901 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 901 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 901 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 901 "ml_util.m"
        else
#line 902 "ml_util.m"
          {
#line 902 "ml_util.m"
            MR_Word ml_backend__ml_util__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 902 "ml_util.m"
            MR_Word ml_backend__ml_util__Lvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 902 "ml_util.m"
            MR_Word ml_backend__ml_util__LvalContainsVar_9;

#line 903 "ml_util.m"
            {
#line 903 "ml_util.m"
              ml_backend__ml_util__LvalContainsVar_9 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 907 "ml_util.m"
#line 907 "ml_util.m"
            switch (ml_backend__ml_util__LvalContainsVar_9) {
#line 907 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 907 "ml_util.m"
              case (MR_Integer) 0:
#line 909 "ml_util.m"
                {
#line 909 "ml_util.m"
                  /* direct tailcall eliminated */
#line 909 "ml_util.m"
                  {
#line 909 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Lvals_6;

#line 909 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 909 "ml_util.m"
                  }
#line 909 "ml_util.m"
                  continue;
#line 909 "ml_util.m"
                }
#line 907 "ml_util.m"
                break;
#line 907 "ml_util.m"
              case (MR_Integer) 1:
#line 906 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 907 "ml_util.m"
                break;
#line 907 "ml_util.m"
            }
#line 902 "ml_util.m"
          }
#line 901 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 901 "ml_util.m"
      }
#line 901 "ml_util.m"
      break;
#line 901 "ml_util.m"
    }
#line 145 "ml_util.m"
}

#line 143 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__rval_contains_var_2_f_0(
#line 143 "ml_util.m"
  MR_Word ml_backend__ml_util__Rval_4,
#line 143 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 143 "ml_util.m"
{
#line 842 "ml_util.m"
  while (MR_TRUE)
#line 842 "ml_util.m"
    {
#line 842 "ml_util.m"
      /* tailcall optimized into a loop */
#line 842 "ml_util.m"
      {
#line 842 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 842 "ml_util.m"
        MR_Word ml_backend__ml_util__ContainsVar_6;

#line 842 "ml_util.m"
#line 842 "ml_util.m"
        switch (MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) {
#line 842 "ml_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 842 "ml_util.m"
          case (MR_Integer) 0:
#line 892 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 842 "ml_util.m"
            break;
#line 842 "ml_util.m"
          case (MR_Integer) 1:
#line 842 "ml_util.m"
            {
#line 842 "ml_util.m"
              MR_Word ml_backend__ml_util__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

#line 843 "ml_util.m"
              {
#line 843 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_7, ml_backend__ml_util__DataName_5);
              }
#line 842 "ml_util.m"
            }
#line 842 "ml_util.m"
            break;
#line 842 "ml_util.m"
          case (MR_Integer) 2:
#line 845 "ml_util.m"
            {
#line 845 "ml_util.m"
              MR_Word ml_backend__ml_util__SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));
#line 845 "ml_util.m"
              MR_Integer ml_backend__ml_util___Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

#line 846 "ml_util.m"
              /* direct tailcall eliminated */
#line 846 "ml_util.m"
              {
#line 846 "ml_util.m"
                MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__SubRval_9;

#line 846 "ml_util.m"
                ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 846 "ml_util.m"
              }
#line 846 "ml_util.m"
              continue;
#line 845 "ml_util.m"
            }
#line 842 "ml_util.m"
            break;
#line 842 "ml_util.m"
          case (MR_Integer) 3:
#line 842 "ml_util.m"
#line 842 "ml_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) {
#line 842 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 842 "ml_util.m"
              case (MR_Integer) 0:
#line 848 "ml_util.m"
                {
#line 848 "ml_util.m"
                  MR_Word ml_backend__ml_util__Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 858 "ml_util.m"
#line 858 "ml_util.m"
                  switch (MR_tag((MR_Word) ml_backend__ml_util__Const_10)) {
#line 858 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 858 "ml_util.m"
                    case (MR_Integer) 0:
#line 872 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 858 "ml_util.m"
                      break;
#line 858 "ml_util.m"
                    case (MR_Integer) 1:
#line 850 "ml_util.m"
                      {
#line 850 "ml_util.m"
                        MR_Word ml_backend__ml_util__DataAddr_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Const_10), (MR_Integer) 1);
#line 850 "ml_util.m"
                        MR_Word ml_backend__ml_util__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataAddr_11, (MR_Integer) 0)));
#line 850 "ml_util.m"
                        MR_Word ml_backend__ml_util__RawDataName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataAddr_11, (MR_Integer) 1)));
#line 852 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
#line 852 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
#line 852 "ml_util.m"
                        MR_Word ml_backend__ml_util___QualKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));

#line 852 "ml_util.m"
                        {
#line 852 "ml_util.m"
                          ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_12, ml_backend__ml_util__V_40_40);
                        }
#line 852 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 852 "ml_util.m"
                          {
#line 852 "ml_util.m"
                            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__RawDataName_13, ml_backend__ml_util__V_41_41);
                          }
#line 855 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 854 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 855 "ml_util.m"
                        else
#line 856 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 850 "ml_util.m"
                      }
#line 858 "ml_util.m"
                      break;
#line 858 "ml_util.m"
                    case (MR_Integer) 2:
#line 872 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 858 "ml_util.m"
                      break;
#line 858 "ml_util.m"
                    case (MR_Integer) 3:
#line 872 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 858 "ml_util.m"
                      break;
#line 858 "ml_util.m"
                  }
#line 848 "ml_util.m"
                }
#line 842 "ml_util.m"
                break;
#line 842 "ml_util.m"
              case (MR_Integer) 1:
#line 875 "ml_util.m"
                {
#line 875 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 875 "ml_util.m"
                  MR_Word ml_backend__ml_util___Op_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 876 "ml_util.m"
                  /* direct tailcall eliminated */
#line 876 "ml_util.m"
                  {
#line 876 "ml_util.m"
                    MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__RvalA_29;

#line 876 "ml_util.m"
                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 876 "ml_util.m"
                  }
#line 876 "ml_util.m"
                  continue;
#line 875 "ml_util.m"
                }
#line 842 "ml_util.m"
                break;
#line 842 "ml_util.m"
              case (MR_Integer) 2:
#line 878 "ml_util.m"
                {
#line 878 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 3)));
#line 878 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalAContainsVar_31;
#line 878 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 878 "ml_util.m"
                  MR_Word ml_backend__ml_util___Op_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 879 "ml_util.m"
                  {
#line 879 "ml_util.m"
                    ml_backend__ml_util__RvalAContainsVar_31 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__RvalA_38, ml_backend__ml_util__DataName_5);
                  }
#line 883 "ml_util.m"
#line 883 "ml_util.m"
                  switch (ml_backend__ml_util__RvalAContainsVar_31) {
#line 883 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 883 "ml_util.m"
                    case (MR_Integer) 0:
#line 885 "ml_util.m"
                      {
#line 885 "ml_util.m"
                        /* direct tailcall eliminated */
#line 885 "ml_util.m"
                        {
#line 885 "ml_util.m"
                          MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__RvalB_30;

#line 885 "ml_util.m"
                          ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 885 "ml_util.m"
                        }
#line 885 "ml_util.m"
                        continue;
#line 885 "ml_util.m"
                      }
#line 883 "ml_util.m"
                      break;
#line 883 "ml_util.m"
                    case (MR_Integer) 1:
#line 882 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 883 "ml_util.m"
                      break;
#line 883 "ml_util.m"
                  }
#line 878 "ml_util.m"
                }
#line 842 "ml_util.m"
                break;
#line 842 "ml_util.m"
              case (MR_Integer) 3:
#line 888 "ml_util.m"
                {
#line 888 "ml_util.m"
                  MR_Word ml_backend__ml_util__Lval_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 889 "ml_util.m"
                  {
#line 889 "ml_util.m"
                    return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_39, ml_backend__ml_util__DataName_5);
                  }
#line 888 "ml_util.m"
                }
#line 842 "ml_util.m"
                break;
#line 842 "ml_util.m"
              case (MR_Integer) 4:
#line 894 "ml_util.m"
                {
#line 894 "ml_util.m"
                  MR_Word ml_backend__ml_util__IndexRval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 894 "ml_util.m"
                  MR_Word ml_backend__ml_util___VectorCommon_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 895 "ml_util.m"
                  /* direct tailcall eliminated */
#line 895 "ml_util.m"
                  {
#line 895 "ml_util.m"
                    MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__IndexRval_34;

#line 895 "ml_util.m"
                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 895 "ml_util.m"
                  }
#line 895 "ml_util.m"
                  continue;
#line 894 "ml_util.m"
                }
#line 842 "ml_util.m"
                break;
#line 842 "ml_util.m"
              case (MR_Integer) 5:
#line 898 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 842 "ml_util.m"
                break;
#line 842 "ml_util.m"
            }
#line 842 "ml_util.m"
            break;
#line 842 "ml_util.m"
        }
#line 842 "ml_util.m"
        return ml_backend__ml_util__ContainsVar_6;
#line 842 "ml_util.m"
      }
#line 842 "ml_util.m"
      break;
#line 842 "ml_util.m"
    }
#line 143 "ml_util.m"
}

#line 141 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__maybe_rval_contains_var_2_f_0(
#line 141 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 141 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 141 "ml_util.m"
{
#line 836 "ml_util.m"
  {
#line 836 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 836 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 836 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 836 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 836 "ml_util.m"
    else
#line 837 "ml_util.m"
      {
#line 837 "ml_util.m"
        MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));

#line 838 "ml_util.m"
        {
#line 838 "ml_util.m"
          return ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
        }
#line 837 "ml_util.m"
      }
#line 836 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 836 "ml_util.m"
  }
#line 141 "ml_util.m"
}

#line 139 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__rvals_contains_var_2_f_0(
#line 139 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 139 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 139 "ml_util.m"
{
#line 825 "ml_util.m"
  while (MR_TRUE)
#line 825 "ml_util.m"
    {
#line 825 "ml_util.m"
      /* tailcall optimized into a loop */
#line 825 "ml_util.m"
      {
#line 825 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 825 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 825 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 825 "ml_util.m"
        else
#line 826 "ml_util.m"
          {
#line 826 "ml_util.m"
            MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 826 "ml_util.m"
            MR_Word ml_backend__ml_util__Rvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 826 "ml_util.m"
            MR_Word ml_backend__ml_util__RvalContainsVar_9;

#line 827 "ml_util.m"
            {
#line 827 "ml_util.m"
              ml_backend__ml_util__RvalContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 831 "ml_util.m"
#line 831 "ml_util.m"
            switch (ml_backend__ml_util__RvalContainsVar_9) {
#line 831 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 831 "ml_util.m"
              case (MR_Integer) 0:
#line 833 "ml_util.m"
                {
#line 833 "ml_util.m"
                  /* direct tailcall eliminated */
#line 833 "ml_util.m"
                  {
#line 833 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Rvals_6;

#line 833 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 833 "ml_util.m"
                  }
#line 833 "ml_util.m"
                  continue;
#line 833 "ml_util.m"
                }
#line 831 "ml_util.m"
                break;
#line 831 "ml_util.m"
              case (MR_Integer) 1:
#line 830 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 831 "ml_util.m"
                break;
#line 831 "ml_util.m"
            }
#line 826 "ml_util.m"
          }
#line 825 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 825 "ml_util.m"
      }
#line 825 "ml_util.m"
      break;
#line 825 "ml_util.m"
    }
#line 139 "ml_util.m"
}

#line 137 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__initializer_contains_var_2_f_0(
#line 137 "ml_util.m"
  MR_Word ml_backend__ml_util__Initializer_4,
#line 137 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 137 "ml_util.m"
{
#line 798 "ml_util.m"
  {
#line 798 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 798 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 798 "ml_util.m"
#line 798 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Initializer_4)) {
#line 798 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 798 "ml_util.m"
      case (MR_Integer) 0:
#line 799 "ml_util.m"
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 798 "ml_util.m"
        break;
#line 798 "ml_util.m"
      case (MR_Integer) 1:
#line 801 "ml_util.m"
        {
#line 801 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 802 "ml_util.m"
          {
#line 802 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_7, ml_backend__ml_util__DataName_5);
          }
#line 801 "ml_util.m"
        }
#line 798 "ml_util.m"
        break;
#line 798 "ml_util.m"
      case (MR_Integer) 2:
#line 804 "ml_util.m"
        {
#line 804 "ml_util.m"
          MR_Word ml_backend__ml_util__FieldInitializers_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 1)));
#line 804 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 805 "ml_util.m"
          {
#line 805 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__FieldInitializers_9, ml_backend__ml_util__DataName_5);
          }
#line 804 "ml_util.m"
        }
#line 798 "ml_util.m"
        break;
#line 798 "ml_util.m"
      case (MR_Integer) 3:
#line 807 "ml_util.m"
        {
#line 807 "ml_util.m"
          MR_Word ml_backend__ml_util__ElementInitializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 808 "ml_util.m"
          {
#line 808 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__ElementInitializers_10, ml_backend__ml_util__DataName_5);
          }
#line 807 "ml_util.m"
        }
#line 798 "ml_util.m"
        break;
#line 798 "ml_util.m"
    }
#line 798 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 798 "ml_util.m"
  }
#line 137 "ml_util.m"
}

#line 120 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__defn_contains_var_2_f_0(
#line 120 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_4,
#line 120 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 120 "ml_util.m"
{
#line 740 "ml_util.m"
  {
#line 740 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 740 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;
#line 740 "ml_util.m"
    MR_Word ml_backend__ml_util__DefnBody_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 3)));
#line 741 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 0)));
#line 741 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 1)));
#line 741 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 2)));

#line 742 "ml_util.m"
    {
#line 742 "ml_util.m"
      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defn_body_contains_var_2_f_0(ml_backend__ml_util__DefnBody_10, ml_backend__ml_util__DataName_5);
    }
#line 740 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 740 "ml_util.m"
  }
#line 120 "ml_util.m"
}

#line 115 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__defns_contains_var_2_f_0(
#line 115 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 115 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 115 "ml_util.m"
{
#line 729 "ml_util.m"
  while (MR_TRUE)
#line 729 "ml_util.m"
    {
#line 729 "ml_util.m"
      /* tailcall optimized into a loop */
#line 729 "ml_util.m"
      {
#line 729 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 729 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 729 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 729 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 729 "ml_util.m"
        else
#line 730 "ml_util.m"
          {
#line 730 "ml_util.m"
            MR_Word ml_backend__ml_util__Defn_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 730 "ml_util.m"
            MR_Word ml_backend__ml_util__Defns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 730 "ml_util.m"
            MR_Word ml_backend__ml_util__DefnContainsVar_9;

#line 731 "ml_util.m"
            {
#line 731 "ml_util.m"
              ml_backend__ml_util__DefnContainsVar_9 = ml_backend__ml_util__defn_contains_var_2_f_0(ml_backend__ml_util__Defn_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 735 "ml_util.m"
#line 735 "ml_util.m"
            switch (ml_backend__ml_util__DefnContainsVar_9) {
#line 735 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 735 "ml_util.m"
              case (MR_Integer) 0:
#line 737 "ml_util.m"
                {
#line 737 "ml_util.m"
                  /* direct tailcall eliminated */
#line 737 "ml_util.m"
                  {
#line 737 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Defns_6;

#line 737 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 737 "ml_util.m"
                  }
#line 737 "ml_util.m"
                  continue;
#line 737 "ml_util.m"
                }
#line 735 "ml_util.m"
                break;
#line 735 "ml_util.m"
              case (MR_Integer) 1:
#line 734 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 735 "ml_util.m"
                break;
#line 735 "ml_util.m"
            }
#line 730 "ml_util.m"
          }
#line 729 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 729 "ml_util.m"
      }
#line 729 "ml_util.m"
      break;
#line 729 "ml_util.m"
    }
#line 115 "ml_util.m"
}

#line 110 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_public_1_p_0(
#line 110 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 110 "ml_util.m"
{
#line 715 "ml_util.m"
  {
#line 715 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 715 "ml_util.m"
    MR_Word ml_backend__ml_util__Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 715 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 716 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 716 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 716 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));

#line 717 "ml_util.m"
    {
#line 717 "ml_util.m"
      ml_backend__ml_util__V_7_7 = ml_backend__mlds__access_1_f_0(ml_backend__ml_util__Flags_5);
    }
#line 717 "ml_util.m"
    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_7_7 == (MR_Integer) 0);
#line 715 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 715 "ml_util.m"
  }
#line 110 "ml_util.m"
}

#line 105 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_commit_type_var_1_p_0(
#line 105 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 105 "ml_util.m"
{
#line 710 "ml_util.m"
  {
#line 710 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 710 "ml_util.m"
    MR_Word ml_backend__ml_util__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 710 "ml_util.m"
    MR_Word ml_backend__ml_util__Type_7;
#line 711 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 711 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 711 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 712 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 712 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;

#line 712 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_6)) == (MR_mktag((MR_Integer) 1)));
#line 712 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 712 "ml_util.m"
      {
#line 712 "ml_util.m"
        ml_backend__ml_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 0)));
#line 712 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 1)));
#line 712 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 2)));
#line 713 "ml_util.m"
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "ml_util.m"
      }
#line 710 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 710 "ml_util.m"
  }
#line 105 "ml_util.m"
}

#line 100 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_type_ctor_info_1_p_0(
#line 100 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 100 "ml_util.m"
{
#line 703 "ml_util.m"
  {
#line 703 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 703 "ml_util.m"
    MR_Word ml_backend__ml_util__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 703 "ml_util.m"
    MR_Word ml_backend__ml_util__Type_7;
#line 703 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiId_10;
#line 703 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiName_12;
#line 703 "ml_util.m"
    MR_Word ml_backend__ml_util__V_13_13;
#line 704 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 704 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 704 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 705 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 705 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 707 "ml_util.m"
    MR_Word ml_backend__ml_util__V_11_11;

#line 705 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_6)) == (MR_mktag((MR_Integer) 1)));
#line 705 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 705 "ml_util.m"
      {
#line 705 "ml_util.m"
        ml_backend__ml_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 0)));
#line 705 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 1)));
#line 705 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 2)));
#line 706 "ml_util.m"
        ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Type_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 706 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 706 "ml_util.m"
          {
#line 706 "ml_util.m"
            ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_7, (MR_Integer) 1)));
#line 706 "ml_util.m"
            ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 706 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 706 "ml_util.m"
              {
#line 706 "ml_util.m"
                ml_backend__ml_util__RttiId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_13_13, (MR_Integer) 0)));
#line 707 "ml_util.m"
                ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__RttiId_10)) == (MR_mktag((MR_Integer) 0)));
#line 707 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 707 "ml_util.m"
                  {
#line 707 "ml_util.m"
                    ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_10, (MR_Integer) 0)));
#line 707 "ml_util.m"
                    ml_backend__ml_util__RttiName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_10, (MR_Integer) 1)));
#line 708 "ml_util.m"
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__RttiName_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 707 "ml_util.m"
                  }
#line 706 "ml_util.m"
              }
#line 706 "ml_util.m"
          }
#line 705 "ml_util.m"
      }
#line 703 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 703 "ml_util.m"
  }
#line 100 "ml_util.m"
}

#line 95 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_function_1_p_0(
#line 95 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 95 "ml_util.m"
{
#line 699 "ml_util.m"
  {
#line 699 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 699 "ml_util.m"
    MR_Word ml_backend__ml_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 700 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 700 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 700 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 701 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 701 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_8_8;
#line 701 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 701 "ml_util.m"
    MR_Word ml_backend__ml_util__V_10_10;

#line 701 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_3)) == (MR_mktag((MR_Integer) 2)));
#line 701 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 701 "ml_util.m"
      {
#line 701 "ml_util.m"
        ml_backend__ml_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 701 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 701 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 2)));
#line 701 "ml_util.m"
        ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 3)));
#line 701 "ml_util.m"
      }
#line 699 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 699 "ml_util.m"
  }
#line 95 "ml_util.m"
}

#line 91 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_type_1_p_0(
#line 91 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 91 "ml_util.m"
{
#line 695 "ml_util.m"
  {
#line 695 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 695 "ml_util.m"
    MR_Word ml_backend__ml_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 696 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 696 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 696 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 697 "ml_util.m"
    MR_String ml_backend__ml_util__V_7_7;
#line 697 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_8_8;

#line 697 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_3)) == (MR_mktag((MR_Integer) 0)));
#line 697 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 697 "ml_util.m"
      {
#line 697 "ml_util.m"
        ml_backend__ml_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 697 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 697 "ml_util.m"
      }
#line 695 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 695 "ml_util.m"
  }
#line 91 "ml_util.m"
}

#line 688 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(
#line 688 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 688 "ml_util.m"
{
#line 688 "ml_util.m"
  {
#line 688 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 688 "ml_util.m"
    MR_builtin_longjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0, 1);
#line 688 "ml_util.m"
  }
#line 688 "ml_util.m"
}

#line 688 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(
#line 688 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 688 "ml_util.m"
{
#line 688 "ml_util.m"
  {
#line 688 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 688 "ml_util.m"
    {
#line 692 "ml_util.m"
      MR_Word ml_backend__ml_util__V_16_16;
#line 693 "ml_util.m"
      MR_Word ml_backend__ml_util__V_17_17;
#line 693 "ml_util.m"
      MR_Word ml_backend__ml_util__V_18_18;
#line 693 "ml_util.m"
      MR_String ml_backend__ml_util__V_19_19;

#line 692 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, (MR_Integer) 0)));
#line 692 "ml_util.m"
      ml_backend__ml_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, (MR_Integer) 1)));
#line 693 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 693 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 693 "ml_util.m"
        {
#line 693 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15, (MR_Integer) 1)));
#line 688 "ml_util.m"
          {
#line 693 "ml_util.m"
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 693 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 693 "ml_util.m"
              {
#line 693 "ml_util.m"
                {
#line 693 "ml_util.m"
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 1)));
#line 693 "ml_util.m"
                  ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 2)));
#line 693 "ml_util.m"
                  ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 3)));
#line 693 "ml_util.m"
                  ml_backend__ml_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 4)));
#line 693 "ml_util.m"
                }
#line 688 "ml_util.m"
                {
#line 693 "ml_util.m"
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22);
#line 693 "ml_util.m"
                  if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 693 "ml_util.m"
                    {
#line 693 "ml_util.m"
                      ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(ml_backend__ml_util__env_ptr);
#line 693 "ml_util.m"
                      return;
                    }
#line 688 "ml_util.m"
                }
#line 693 "ml_util.m"
              }
#line 688 "ml_util.m"
          }
#line 693 "ml_util.m"
        }
#line 688 "ml_util.m"
    }
#line 688 "ml_util.m"
  }
#line 688 "ml_util.m"
}

#line 688 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(
#line 688 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 688 "ml_util.m"
{
#line 688 "ml_util.m"
  {
#line 688 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 688 "ml_util.m"
    if (MR_builtin_setjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0) == 0)
#line 688 "ml_util.m"
      {
#line 688 "ml_util.m"
        {
#line 688 "ml_util.m"
          MR_Word ml_backend__ml_util__Body_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 3)));
#line 688 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_11;
#line 688 "ml_util.m"
          MR_Word ml_backend__ml_util__V_20_20;
#line 689 "ml_util.m"
          MR_Word ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 0)));
#line 689 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 1)));
#line 689 "ml_util.m"
          MR_Word ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 2)));
#line 690 "ml_util.m"
          MR_Word ml_backend__ml_util__V_9_9;
#line 690 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10;
#line 690 "ml_util.m"
          MR_Word ml_backend__ml_util__V_12_12;
#line 690 "ml_util.m"
          MR_Word ml_backend__ml_util__V_13_13;

#line 690 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_8)) == (MR_mktag((MR_Integer) 2)));
#line 690 "ml_util.m"
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 690 "ml_util.m"
            {
#line 690 "ml_util.m"
              {
#line 690 "ml_util.m"
                ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 0)));
#line 690 "ml_util.m"
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 1)));
#line 690 "ml_util.m"
                ml_backend__ml_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 2)));
#line 690 "ml_util.m"
                ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 3)));
#line 690 "ml_util.m"
                ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 4)));
#line 690 "ml_util.m"
              }
#line 688 "ml_util.m"
              {
#line 690 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 690 "ml_util.m"
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 690 "ml_util.m"
                  {
#line 690 "ml_util.m"
                    ml_backend__ml_util__FunctionBody_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_20_20), (MR_Integer) 1);
#line 688 "ml_util.m"
                    {
#line 269 "ml_util.m"
                      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14 = ml_backend__ml_util__FunctionBody_11;
#line 269 "ml_util.m"
                      {
#line 269 "ml_util.m"
                        ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(ml_backend__ml_util__env_ptr);
                      }
#line 270 "ml_util.m"
                      {
#line 270 "ml_util.m"
                        MR_Word ml_backend__ml_util__Stmt_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 0)));
#line 271 "ml_util.m"
                        MR_Word ml_backend__ml_util___Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 1)));

#line 272 "ml_util.m"
                        {
#line 272 "ml_util.m"
                          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_26, &(ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2, ml_backend__ml_util__env_ptr);
                        }
#line 270 "ml_util.m"
                      }
#line 688 "ml_util.m"
                    }
#line 690 "ml_util.m"
                  }
#line 688 "ml_util.m"
              }
#line 690 "ml_util.m"
            }
#line 688 "ml_util.m"
        }
#line 688 "ml_util.m"
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = MR_FALSE;
#line 688 "ml_util.m"
      }
#line 688 "ml_util.m"
    else
#line 688 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = MR_TRUE;
#line 688 "ml_util.m"
  }
#line 688 "ml_util.m"
}

#line 86 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0(
#line 86 "ml_util.m"
  MR_Word ml_backend__ml_util__ForeignLang_3,
#line 86 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_4)
#line 86 "ml_util.m"
{
#line 86 "ml_util.m"
  {
#line 86 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s ml_backend__ml_util__env;

#line 86 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3 = ml_backend__ml_util__ForeignLang_3;
#line 86 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4 = ml_backend__ml_util__Defn_4;
#line 688 "ml_util.m"
    {
#line 688 "ml_util.m"
      ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(&ml_backend__ml_util__env);
    }
#line 688 "ml_util.m"
    return (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
#line 86 "ml_util.m"
  }
#line 86 "ml_util.m"
}

#line 676 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(
#line 676 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 676 "ml_util.m"
{
#line 676 "ml_util.m"
  {
#line 676 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 676 "ml_util.m"
    MR_builtin_longjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0, 1);
#line 676 "ml_util.m"
  }
#line 676 "ml_util.m"
}

#line 676 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(
#line 676 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 676 "ml_util.m"
{
#line 676 "ml_util.m"
  {
#line 676 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 676 "ml_util.m"
    {
#line 680 "ml_util.m"
      MR_Word ml_backend__ml_util__V_16_16;

#line 680 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, (MR_Integer) 0)));
#line 680 "ml_util.m"
      ml_backend__ml_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, (MR_Integer) 1)));
#line 682 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 682 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 682 "ml_util.m"
        {
#line 682 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15, (MR_Integer) 1)));
#line 676 "ml_util.m"
          {
#line 684 "ml_util.m"
            if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 682 "ml_util.m"
              {
#line 682 "ml_util.m"
                MR_Word ml_backend__ml_util__TargetLang_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 1)));
#line 682 "ml_util.m"
                MR_Word ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 2)));

#line 683 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = (ml_backend__ml_util__TargetLang_17 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3);
#line 683 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = !((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded);
#line 682 "ml_util.m"
              }
#line 684 "ml_util.m"
            else
#line 684 "ml_util.m"
            if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 685 "ml_util.m"
              (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_TRUE;
#line 684 "ml_util.m"
            else
#line 684 "ml_util.m"
              (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_FALSE;
#line 684 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 684 "ml_util.m"
              {
#line 684 "ml_util.m"
                ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(ml_backend__ml_util__env_ptr);
#line 684 "ml_util.m"
                return;
              }
#line 676 "ml_util.m"
          }
#line 682 "ml_util.m"
        }
#line 676 "ml_util.m"
    }
#line 676 "ml_util.m"
  }
#line 676 "ml_util.m"
}

#line 676 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(
#line 676 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 676 "ml_util.m"
{
#line 676 "ml_util.m"
  {
#line 676 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 676 "ml_util.m"
    if (MR_builtin_setjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0) == 0)
#line 676 "ml_util.m"
      {
#line 676 "ml_util.m"
        {
#line 676 "ml_util.m"
          MR_Word ml_backend__ml_util__Body_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 3)));
#line 676 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_11;
#line 676 "ml_util.m"
          MR_Word ml_backend__ml_util__V_23_23;
#line 677 "ml_util.m"
          MR_Word ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 0)));
#line 677 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 1)));
#line 677 "ml_util.m"
          MR_Word ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 2)));
#line 678 "ml_util.m"
          MR_Word ml_backend__ml_util__V_9_9;
#line 678 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10;
#line 678 "ml_util.m"
          MR_Word ml_backend__ml_util__V_12_12;
#line 678 "ml_util.m"
          MR_Word ml_backend__ml_util__V_13_13;

#line 678 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_8)) == (MR_mktag((MR_Integer) 2)));
#line 678 "ml_util.m"
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 678 "ml_util.m"
            {
#line 678 "ml_util.m"
              {
#line 678 "ml_util.m"
                ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 0)));
#line 678 "ml_util.m"
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 1)));
#line 678 "ml_util.m"
                ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 2)));
#line 678 "ml_util.m"
                ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 3)));
#line 678 "ml_util.m"
                ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 4)));
#line 678 "ml_util.m"
              }
#line 676 "ml_util.m"
              {
#line 678 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 678 "ml_util.m"
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 678 "ml_util.m"
                  {
#line 678 "ml_util.m"
                    ml_backend__ml_util__FunctionBody_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_23_23), (MR_Integer) 1);
#line 676 "ml_util.m"
                    {
#line 269 "ml_util.m"
                      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14 = ml_backend__ml_util__FunctionBody_11;
#line 269 "ml_util.m"
                      {
#line 269 "ml_util.m"
                        ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(ml_backend__ml_util__env_ptr);
                      }
#line 270 "ml_util.m"
                      {
#line 270 "ml_util.m"
                        MR_Word ml_backend__ml_util__Stmt_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 0)));
#line 271 "ml_util.m"
                        MR_Word ml_backend__ml_util___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 1)));

#line 272 "ml_util.m"
                        {
#line 272 "ml_util.m"
                          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_30, &(ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2, ml_backend__ml_util__env_ptr);
                        }
#line 270 "ml_util.m"
                      }
#line 676 "ml_util.m"
                    }
#line 678 "ml_util.m"
                  }
#line 676 "ml_util.m"
              }
#line 678 "ml_util.m"
            }
#line 676 "ml_util.m"
        }
#line 676 "ml_util.m"
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_FALSE;
#line 676 "ml_util.m"
      }
#line 676 "ml_util.m"
    else
#line 676 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_TRUE;
#line 676 "ml_util.m"
  }
#line 676 "ml_util.m"
}

#line 78 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0(
#line 78 "ml_util.m"
  MR_Word ml_backend__ml_util__NativeTargetLang_3,
#line 78 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_4)
#line 78 "ml_util.m"
{
#line 78 "ml_util.m"
  {
#line 78 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s ml_backend__ml_util__env;

#line 78 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3 = ml_backend__ml_util__NativeTargetLang_3;
#line 78 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4 = ml_backend__ml_util__Defn_4;
#line 676 "ml_util.m"
    {
#line 676 "ml_util.m"
      ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(&ml_backend__ml_util__env);
    }
#line 676 "ml_util.m"
    return (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
#line 78 "ml_util.m"
  }
#line 78 "ml_util.m"
}

#line 664 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
#line 664 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 664 "ml_util.m"
{
#line 664 "ml_util.m"
  {
#line 664 "ml_util.m"
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 664 "ml_util.m"
    *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_HeadVar__2_12));
#line 664 "ml_util.m"
    {
#line 664 "ml_util.m"
      ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr);
#line 664 "ml_util.m"
      return;
    }
#line 664 "ml_util.m"
  }
#line 664 "ml_util.m"
}

#line 664 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
#line 664 "ml_util.m"
  MR_Box ml_backend__ml_util__closure_arg,
#line 664 "ml_util.m"
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
#line 664 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 664 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 664 "ml_util.m"
{
#line 664 "ml_util.m"
  {
#line 664 "ml_util.m"
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s ml_backend__ml_util__env;

#line 664 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1 = ml_backend__ml_util__wrapper_arg_1;
#line 664 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont = ml_backend__ml_util__cont;
#line 664 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 664 "ml_util.m"
    {
#line 664 "ml_util.m"
      MR_Box ml_backend__ml_util__closure = ml_backend__ml_util__closure_arg;

#line 664 "ml_util.m"
      {
#line 664 "ml_util.m"
        ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__664__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__closure, (MR_Integer) 3))), &(ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_HeadVar__2_12, ml_backend__ml_util__has_foreign_languages_2_p_0_1, &ml_backend__ml_util__env);
      }
#line 664 "ml_util.m"
    }
#line 664 "ml_util.m"
  }
#line 664 "ml_util.m"
}

#line 60 "ml_util.m"
void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0(
#line 60 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 60 "ml_util.m"
  MR_Word * ml_backend__ml_util__Langs_4)
#line 60 "ml_util.m"
{
#line 663 "ml_util.m"
  {
#line 663 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 663 "ml_util.m"
    MR_Word ml_backend__ml_util__GetTargetCode_5;

#line 664 "ml_util.m"
    {
#line 664 "ml_util.m"
      ml_backend__ml_util__GetTargetCode_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 664 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 0) = ((MR_Box) (&ml_backend__ml_util_scalar_common_2[0]));
#line 664 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 1) = ((MR_Box) (ml_backend__ml_util__has_foreign_languages_2_p_0_2));
#line 664 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 664 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 3) = ((MR_Box) (ml_backend__ml_util__Statement_3));
#line 664 "ml_util.m"
    }
#line 669 "ml_util.m"
    {
#line 669 "ml_util.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ml_backend__ml_util__GetTargetCode_5, ml_backend__ml_util__Langs_4);
#line 669 "ml_util.m"
      return;
    }
#line 663 "ml_util.m"
  }
#line 60 "ml_util.m"
}

#line 58 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__statement_contains_var_2_f_0(
#line 58 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_4,
#line 58 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 58 "ml_util.m"
{
#line 354 "ml_util.m"
  {
#line 354 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 354 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;
#line 354 "ml_util.m"
    MR_Word ml_backend__ml_util__Stmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 0)));
#line 355 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 1)));

#line 356 "ml_util.m"
    {
#line 356 "ml_util.m"
      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_7, ml_backend__ml_util__DataName_5);
    }
#line 354 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 354 "ml_util.m"
  }
#line 58 "ml_util.m"
}

#line 53 "ml_util.m"
void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0(
#line 53 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_3,
#line 53 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 53 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 53 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 53 "ml_util.m"
{
#line 276 "ml_util.m"
  while (MR_TRUE)
#line 276 "ml_util.m"
    {
#line 276 "ml_util.m"
      /* tailcall optimized into a loop */
#line 276 "ml_util.m"
      {
#line 276 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;

#line 276 "ml_util.m"
#line 276 "ml_util.m"
        switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) {
#line 276 "ml_util.m"
          case (MR_Integer) 0:
#line 276 "ml_util.m"
            {
#line 276 "ml_util.m"
              MR_Word ml_backend__ml_util__Statements_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
#line 276 "ml_util.m"
              MR_Word ml_backend__ml_util___Defns_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));

#line 277 "ml_util.m"
              {
#line 277 "ml_util.m"
                ml_backend__ml_util__statements_contains_statement_2_p_0(ml_backend__ml_util__Statements_6, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 277 "ml_util.m"
                return;
              }
#line 276 "ml_util.m"
            }
#line 276 "ml_util.m"
            break;
#line 276 "ml_util.m"
          case (MR_Integer) 1:
#line 279 "ml_util.m"
            {
#line 279 "ml_util.m"
              MR_Word ml_backend__ml_util__Statement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 279 "ml_util.m"
              MR_Word ml_backend__ml_util___Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));
#line 279 "ml_util.m"
              MR_Word ml_backend__ml_util___Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

#line 269 "ml_util.m"
              *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Statement_9;
#line 269 "ml_util.m"
              {
#line 269 "ml_util.m"
                ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
              }
#line 270 "ml_util.m"
              {
#line 270 "ml_util.m"
                MR_Word ml_backend__ml_util__Stmt_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_9, (MR_Integer) 0)));
#line 271 "ml_util.m"
                MR_Word ml_backend__ml_util___Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_9, (MR_Integer) 1)));

#line 272 "ml_util.m"
                /* direct tailcall eliminated */
#line 272 "ml_util.m"
                {
#line 272 "ml_util.m"
                  MR_Word ml_backend__ml_util__Stmt__tmp_copy_3 = ml_backend__ml_util__Stmt_56;

#line 272 "ml_util.m"
                  ml_backend__ml_util__Stmt_3 = ml_backend__ml_util__Stmt__tmp_copy_3;
#line 272 "ml_util.m"
                }
#line 272 "ml_util.m"
                continue;
#line 270 "ml_util.m"
              }
#line 279 "ml_util.m"
            }
#line 276 "ml_util.m"
            break;
#line 276 "ml_util.m"
          case (MR_Integer) 2:
#line 282 "ml_util.m"
            {
#line 282 "ml_util.m"
              MR_Word ml_backend__ml_util__Then_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
#line 282 "ml_util.m"
              MR_Word ml_backend__ml_util__MaybeElse_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 282 "ml_util.m"
              MR_Word ml_backend__ml_util___Cond_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));

#line 269 "ml_util.m"
              *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Then_11;
#line 269 "ml_util.m"
              {
#line 269 "ml_util.m"
                ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
              }
#line 270 "ml_util.m"
              {
#line 270 "ml_util.m"
                MR_Word ml_backend__ml_util__Stmt_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_11, (MR_Integer) 0)));
#line 271 "ml_util.m"
                MR_Word ml_backend__ml_util___Context_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_11, (MR_Integer) 1)));

#line 272 "ml_util.m"
                {
#line 272 "ml_util.m"
                  ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_41, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                }
#line 270 "ml_util.m"
              }
#line 284 "ml_util.m"
              {
#line 284 "ml_util.m"
                ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(ml_backend__ml_util__MaybeElse_12, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 284 "ml_util.m"
                return;
              }
#line 282 "ml_util.m"
            }
#line 276 "ml_util.m"
            break;
#line 276 "ml_util.m"
          case (MR_Integer) 3:
#line 276 "ml_util.m"
#line 276 "ml_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)))) {
#line 276 "ml_util.m"
              case (MR_Integer) 0:
#line 287 "ml_util.m"
                {
#line 287 "ml_util.m"
                  MR_Word ml_backend__ml_util__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 4)));
#line 287 "ml_util.m"
                  MR_Word ml_backend__ml_util__Default_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 5)));
#line 287 "ml_util.m"
                  MR_Word ml_backend__ml_util___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
#line 287 "ml_util.m"
                  MR_Word ml_backend__ml_util___Val_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 287 "ml_util.m"
                  MR_Word ml_backend__ml_util___Range_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));

#line 288 "ml_util.m"
                  {
#line 288 "ml_util.m"
                    ml_backend__ml_util__cases_contains_statement_2_p_0(ml_backend__ml_util__Cases_16, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                  }
#line 289 "ml_util.m"
                  {
#line 289 "ml_util.m"
                    ml_backend__ml_util__default_contains_statement_2_p_0(ml_backend__ml_util__Default_17, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 289 "ml_util.m"
                    return;
                  }
#line 287 "ml_util.m"
                }
#line 276 "ml_util.m"
                break;
#line 276 "ml_util.m"
              case (MR_Integer) 6:
#line 292 "ml_util.m"
                {
#line 292 "ml_util.m"
                  MR_Word ml_backend__ml_util__Handler_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));
#line 292 "ml_util.m"
                  MR_Word ml_backend__ml_util__Statement_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 292 "ml_util.m"
                  MR_Word ml_backend__ml_util___Ref_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

#line 269 "ml_util.m"
                  *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Statement_31;
#line 269 "ml_util.m"
                  {
#line 269 "ml_util.m"
                    ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
                  }
#line 270 "ml_util.m"
                  {
#line 270 "ml_util.m"
                    MR_Word ml_backend__ml_util__Stmt_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_31, (MR_Integer) 0)));
#line 271 "ml_util.m"
                    MR_Word ml_backend__ml_util___Context_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_31, (MR_Integer) 1)));

#line 272 "ml_util.m"
                    {
#line 272 "ml_util.m"
                      ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_46, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                    }
#line 270 "ml_util.m"
                  }
#line 269 "ml_util.m"
                  *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Handler_19;
#line 269 "ml_util.m"
                  {
#line 269 "ml_util.m"
                    ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
                  }
#line 270 "ml_util.m"
                  {
#line 270 "ml_util.m"
                    MR_Word ml_backend__ml_util__Stmt_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Handler_19, (MR_Integer) 0)));
#line 271 "ml_util.m"
                    MR_Word ml_backend__ml_util___Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Handler_19, (MR_Integer) 1)));

#line 272 "ml_util.m"
                    /* direct tailcall eliminated */
#line 272 "ml_util.m"
                    {
#line 272 "ml_util.m"
                      MR_Word ml_backend__ml_util__Stmt__tmp_copy_3 = ml_backend__ml_util__Stmt_51;

#line 272 "ml_util.m"
                      ml_backend__ml_util__Stmt_3 = ml_backend__ml_util__Stmt__tmp_copy_3;
#line 272 "ml_util.m"
                    }
#line 272 "ml_util.m"
                    continue;
#line 270 "ml_util.m"
                  }
#line 292 "ml_util.m"
                }
#line 276 "ml_util.m"
                break;
#line 276 "ml_util.m"
            }
#line 276 "ml_util.m"
            break;
#line 276 "ml_util.m"
        }
#line 276 "ml_util.m"
      }
#line 276 "ml_util.m"
      break;
#line 276 "ml_util.m"
    }
#line 53 "ml_util.m"
}

#line 51 "ml_util.m"
void MR_CALL 
ml_backend__ml_util__statement_contains_statement_2_p_0(
#line 51 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_1,
#line 51 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
#line 51 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 51 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 51 "ml_util.m"
{
#line 269 "ml_util.m"
  {
#line 269 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;

#line 269 "ml_util.m"
    *ml_backend__ml_util__HeadVar__2_2 = ml_backend__ml_util__Statement_1;
#line 269 "ml_util.m"
    {
#line 269 "ml_util.m"
      ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
    }
#line 270 "ml_util.m"
    {
#line 270 "ml_util.m"
      MR_Word ml_backend__ml_util__Stmt_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_1, (MR_Integer) 0)));
#line 271 "ml_util.m"
      MR_Word ml_backend__ml_util___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_1, (MR_Integer) 1)));

#line 272 "ml_util.m"
      {
#line 272 "ml_util.m"
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_6, ml_backend__ml_util__HeadVar__2_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 272 "ml_util.m"
        return;
      }
#line 270 "ml_util.m"
    }
#line 269 "ml_util.m"
  }
#line 51 "ml_util.m"
}

#line 41 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__can_optimize_tailcall_2_p_0(
#line 41 "ml_util.m"
  MR_Word ml_backend__ml_util__Name_3,
#line 41 "ml_util.m"
  MR_Word ml_backend__ml_util__Call_4)
#line 41 "ml_util.m"
{
#line 215 "ml_util.m"
  {
#line 215 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Call_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__TypeInfo_33_33;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__FuncRval_6;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__MaybeObject_7;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__CallKind_10;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__CodeAddr_11;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__QualifiedProcLabel_12;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__MaybeSeqNum_14;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__ProcLabel_16;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__PredLabel_17;
#line 215 "ml_util.m"
    MR_Integer ml_backend__ml_util__ProcId_18;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__ModuleName_19;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__FuncName_20;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__V_22_22;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__V_23_23;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__V_24_24;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__V_27_27;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__V_28_28;
#line 215 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_29_29;
#line 215 "ml_util.m"
    MR_Word ml_backend__ml_util__V_30_30;
#line 216 "ml_util.m"
    MR_Word ml_backend__ml_util___Signature_5;
#line 216 "ml_util.m"
    MR_Word ml_backend__ml_util___CallArgs_8;
#line 216 "ml_util.m"
    MR_Word ml_backend__ml_util___Results_9;
#line 237 "ml_util.m"
    MR_Word ml_backend__ml_util__V_21_21;

#line 216 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 216 "ml_util.m"
      {
#line 216 "ml_util.m"
        ml_backend__ml_util___Signature_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 1)));
#line 216 "ml_util.m"
        ml_backend__ml_util__FuncRval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 2)));
#line 216 "ml_util.m"
        ml_backend__ml_util__MaybeObject_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 3)));
#line 216 "ml_util.m"
        ml_backend__ml_util___CallArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 4)));
#line 216 "ml_util.m"
        ml_backend__ml_util___Results_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 5)));
#line 216 "ml_util.m"
        ml_backend__ml_util__CallKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 6)));
#line 219 "ml_util.m"
#line 219 "ml_util.m"
        switch (ml_backend__ml_util__CallKind_10) {
#line 219 "ml_util.m"
          default:
#line 219 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_FALSE;
#line 219 "ml_util.m"
            break;
#line 219 "ml_util.m"
          case (MR_Integer) 0:
#line 219 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_TRUE;
#line 219 "ml_util.m"
            break;
#line 219 "ml_util.m"
          case (MR_Integer) 1:
#line 219 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_TRUE;
#line 219 "ml_util.m"
            break;
#line 219 "ml_util.m"
        }
#line 215 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 215 "ml_util.m"
          {
#line 222 "ml_util.m"
            ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__FuncRval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__FuncRval_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 222 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 222 "ml_util.m"
              {
#line 222 "ml_util.m"
                ml_backend__ml_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__FuncRval_6, (MR_Integer) 1)));
#line 222 "ml_util.m"
                ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 222 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 222 "ml_util.m"
                  {
#line 222 "ml_util.m"
                    ml_backend__ml_util__CodeAddr_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_22_22, (MR_Integer) 1)));
#line 226 "ml_util.m"
                    if (((MR_tag((MR_Word) ml_backend__ml_util__CodeAddr_11)) == (MR_mktag((MR_Integer) 1))))
#line 227 "ml_util.m"
                      {
#line 227 "ml_util.m"
                        MR_Integer ml_backend__ml_util__SeqNum_15;
#line 227 "ml_util.m"
                        MR_Word ml_backend__ml_util___Sig_25;

#line 227 "ml_util.m"
                        ml_backend__ml_util__QualifiedProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 0)));
#line 227 "ml_util.m"
                        ml_backend__ml_util__SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 1)));
#line 227 "ml_util.m"
                        ml_backend__ml_util___Sig_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 2)));
#line 228 "ml_util.m"
                        {
#line 228 "ml_util.m"
                          ml_backend__ml_util__MaybeSeqNum_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 228 "ml_util.m"
                          MR_hl_field(MR_mktag(1), ml_backend__ml_util__MaybeSeqNum_14, 0) = ((MR_Box) (ml_backend__ml_util__SeqNum_15));
#line 228 "ml_util.m"
                        }
#line 227 "ml_util.m"
                      }
#line 226 "ml_util.m"
                    else
#line 224 "ml_util.m"
                      {
#line 224 "ml_util.m"
                        MR_Word ml_backend__ml_util___Sig_13;

#line 224 "ml_util.m"
                        ml_backend__ml_util__QualifiedProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 0)));
#line 224 "ml_util.m"
                        ml_backend__ml_util___Sig_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 1)));
#line 225 "ml_util.m"
                        ml_backend__ml_util__MaybeSeqNum_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 224 "ml_util.m"
                      }
#line 231 "ml_util.m"
                    ml_backend__ml_util__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 0)));
#line 231 "ml_util.m"
                    ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 1)));
#line 231 "ml_util.m"
                    ml_backend__ml_util__ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 2)));
#line 231 "ml_util.m"
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_23_23 == (MR_Integer) 0);
#line 215 "ml_util.m"
                    if (ml_backend__ml_util__succeeded)
#line 215 "ml_util.m"
                      {
#line 230 "ml_util.m"
                        ml_backend__ml_util__PredLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_16, (MR_Integer) 0)));
#line 230 "ml_util.m"
                        ml_backend__ml_util__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_16, (MR_Integer) 1)));
#line 234 "ml_util.m"
                        ml_backend__ml_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 234 "ml_util.m"
                        ml_backend__ml_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 234 "ml_util.m"
                        ml_backend__ml_util__FuncName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 2)));
#line 234 "ml_util.m"
                        {
#line 234 "ml_util.m"
                          ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_19, ml_backend__ml_util__V_27_27);
                        }
#line 215 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 215 "ml_util.m"
                          {
#line 234 "ml_util.m"
                            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_24_24 == (MR_Integer) 0);
#line 215 "ml_util.m"
                            if (ml_backend__ml_util__succeeded)
#line 215 "ml_util.m"
                              {
#line 237 "ml_util.m"
                                ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_20)) == (MR_mktag((MR_Integer) 2)));
#line 237 "ml_util.m"
                                if (ml_backend__ml_util__succeeded)
#line 237 "ml_util.m"
                                  {
#line 237 "ml_util.m"
                                    ml_backend__ml_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 0)));
#line 237 "ml_util.m"
                                    ml_backend__ml_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 1)));
#line 237 "ml_util.m"
                                    ml_backend__ml_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 2)));
#line 237 "ml_util.m"
                                    ml_backend__ml_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 3)));
#line 237 "ml_util.m"
                                    {
#line 237 "ml_util.m"
                                      ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0(ml_backend__ml_util__PredLabel_17, ml_backend__ml_util__V_28_28);
                                    }
#line 215 "ml_util.m"
                                    if (ml_backend__ml_util__succeeded)
#line 215 "ml_util.m"
                                      {
#line 237 "ml_util.m"
                                        ml_backend__ml_util__succeeded = (ml_backend__ml_util__ProcId_18 == ml_backend__ml_util__V_29_29);
#line 215 "ml_util.m"
                                        if (ml_backend__ml_util__succeeded)
#line 215 "ml_util.m"
                                          {
#line 6403 "ml_backend.ml_util.c"
                                            ml_backend__ml_util__TypeInfo_33_33 = (MR_Word) &ml_backend__ml_util_scalar_common_1[0];
#line 237 "ml_util.m"
                                            {
#line 237 "ml_util.m"
                                              ml_backend__ml_util__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_util__TypeInfo_33_33, ((MR_Box) (ml_backend__ml_util__MaybeSeqNum_14)), ((MR_Box) (ml_backend__ml_util__V_30_30)));
                                            }
#line 215 "ml_util.m"
                                            if (ml_backend__ml_util__succeeded)
#line 242 "ml_util.m"
                                              ml_backend__ml_util__succeeded = (ml_backend__ml_util__MaybeObject_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "ml_util.m"
                                          }
#line 215 "ml_util.m"
                                      }
#line 237 "ml_util.m"
                                  }
#line 215 "ml_util.m"
                              }
#line 215 "ml_util.m"
                          }
#line 215 "ml_util.m"
                      }
#line 222 "ml_util.m"
                  }
#line 222 "ml_util.m"
              }
#line 215 "ml_util.m"
          }
#line 216 "ml_util.m"
      }
#line 215 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 215 "ml_util.m"
  }
#line 41 "ml_util.m"
}

#line 34 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defns_contain_main_1_p_0(
#line 34 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1)
#line 34 "ml_util.m"
{
#line 206 "ml_util.m"
  while (MR_TRUE)
#line 206 "ml_util.m"
    {
#line 206 "ml_util.m"
      /* tailcall optimized into a loop */
#line 206 "ml_util.m"
      {
#line 206 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 206 "ml_util.m"
        MR_Word ml_backend__ml_util__Defn_2;
#line 206 "ml_util.m"
        MR_Word ml_backend__ml_util__Defns_3;

#line 206 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 206 "ml_util.m"
          {
#line 206 "ml_util.m"
            ml_backend__ml_util__Defn_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 206 "ml_util.m"
            ml_backend__ml_util__Defns_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 208 "ml_util.m"
            {
#line 208 "ml_util.m"
              MR_Word ml_backend__ml_util__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 208 "ml_util.m"
              MR_Word ml_backend__ml_util__FuncName_8;
#line 208 "ml_util.m"
              MR_Word ml_backend__ml_util__V_15_15;
#line 208 "ml_util.m"
              MR_String ml_backend__ml_util__V_16_16;
#line 208 "ml_util.m"
              MR_Integer ml_backend__ml_util__V_17_17;
#line 208 "ml_util.m"
              MR_Word ml_backend__ml_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 208 "ml_util.m"
              MR_Word ml_backend__ml_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 208 "ml_util.m"
              MR_Word ml_backend__ml_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 209 "ml_util.m"
              MR_Integer ml_backend__ml_util__V_9_9;
#line 209 "ml_util.m"
              MR_Word ml_backend__ml_util__V_10_10;
#line 209 "ml_util.m"
              MR_Word ml_backend__ml_util__V_11_11;
#line 210 "ml_util.m"
              MR_Word ml_backend__ml_util__V_12_12;
#line 210 "ml_util.m"
              MR_Word ml_backend__ml_util__V_13_13;
#line 210 "ml_util.m"
              MR_Word ml_backend__ml_util__V_14_14;

#line 209 "ml_util.m"
              ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_4)) == (MR_mktag((MR_Integer) 2)));
#line 209 "ml_util.m"
              if (ml_backend__ml_util__succeeded)
#line 209 "ml_util.m"
                {
#line 209 "ml_util.m"
                  ml_backend__ml_util__FuncName_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 0)));
#line 209 "ml_util.m"
                  ml_backend__ml_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 1)));
#line 209 "ml_util.m"
                  ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 2)));
#line 209 "ml_util.m"
                  ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 3)));
#line 210 "ml_util.m"
                  ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_8)) == (MR_mktag((MR_Integer) 0)));
#line 210 "ml_util.m"
                  if (ml_backend__ml_util__succeeded)
#line 210 "ml_util.m"
                    {
#line 210 "ml_util.m"
                      ml_backend__ml_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 0)));
#line 210 "ml_util.m"
                      ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 1)));
#line 210 "ml_util.m"
                      ml_backend__ml_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 2)));
#line 210 "ml_util.m"
                      ml_backend__ml_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 3)));
#line 210 "ml_util.m"
                      ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 4)));
#line 210 "ml_util.m"
                      ml_backend__ml_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 5)));
#line 210 "ml_util.m"
                      ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_15_15 == (MR_Integer) 0);
#line 208 "ml_util.m"
                      if (ml_backend__ml_util__succeeded)
#line 208 "ml_util.m"
                        {
#line 210 "ml_util.m"
                          ml_backend__ml_util__succeeded = (strcmp(ml_backend__ml_util__V_16_16, (MR_String) "main") == 0);
#line 208 "ml_util.m"
                          if (ml_backend__ml_util__succeeded)
#line 210 "ml_util.m"
                            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_17_17 == (MR_Integer) 2);
#line 208 "ml_util.m"
                        }
#line 210 "ml_util.m"
                    }
#line 209 "ml_util.m"
                }
#line 208 "ml_util.m"
            }
#line 211 "ml_util.m"
            if (!(ml_backend__ml_util__succeeded))
#line 212 "ml_util.m"
              {
#line 212 "ml_util.m"
                /* direct tailcall eliminated */
#line 212 "ml_util.m"
                {
#line 212 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Defns_3;

#line 212 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 212 "ml_util.m"
                }
#line 212 "ml_util.m"
                continue;
#line 212 "ml_util.m"
              }
#line 206 "ml_util.m"
          }
#line 206 "ml_util.m"
        return ml_backend__ml_util__succeeded;
#line 206 "ml_util.m"
      }
#line 206 "ml_util.m"
      break;
#line 206 "ml_util.m"
    }
#line 34 "ml_util.m"
}

void mercury__ml_backend__ml_util__init(void)
{
}

void mercury__ml_backend__ml_util__init_type_tables(void)
{
}

void mercury__ml_backend__ml_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_util. */
