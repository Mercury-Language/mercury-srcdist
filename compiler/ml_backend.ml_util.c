/*
** Automatically generated from `ml_util.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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



#line 665 "ml_util.m"
struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0_s {
#line 665 "ml_util.m"
  MR_Word * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__LambdaHeadVar__1_12;
#line 665 "ml_util.m"
  MR_Cont ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__cont;
#line 665 "ml_util.m"
  void * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__cont_env_ptr;
#line 665 "ml_util.m"
  MR_bool ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__succeeded;
#line 665 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__SubStatement_7;
#line 665 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__V_13_13;
#line 665 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__V_14_14;
#line 665 "ml_util.m"
};

#line 309 "ml_util.m"
struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s {
#line 309 "ml_util.m"
  MR_Word * ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4;
#line 309 "ml_util.m"
  MR_Cont ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont;
#line 309 "ml_util.m"
  void * ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr;
#line 312 "ml_util.m"
  MR_Word ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5;
#line 312 "ml_util.m"
  MR_Word ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8;
#line 313 "ml_util.m"
  MR_Box ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5;
#line 309 "ml_util.m"
};

#line 256 "ml_util.m"
struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s {
#line 256 "ml_util.m"
  MR_Word * ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4;
#line 256 "ml_util.m"
  MR_Cont ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont;
#line 256 "ml_util.m"
  void * ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr;
#line 259 "ml_util.m"
  MR_Word ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5;
#line 260 "ml_util.m"
  MR_Box ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5;
#line 256 "ml_util.m"
};

#line 92 "ml_util.m"
struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s {
#line 92 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3;
#line 92 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4;
#line 689 "ml_util.m"
  MR_bool ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
#line 689 "ml_util.m"
  jmp_buf ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0;
#line 689 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14;
#line 689 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15;
#line 689 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21;
#line 689 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22;
#line 92 "ml_util.m"
};

#line 84 "ml_util.m"
struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s {
#line 84 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3;
#line 84 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4;
#line 677 "ml_util.m"
  MR_bool ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
#line 677 "ml_util.m"
  jmp_buf ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0;
#line 677 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14;
#line 677 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15;
#line 677 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26;
#line 84 "ml_util.m"
};

#line 665 "ml_util.m"
struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s {
#line 665 "ml_util.m"
  MR_Box * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1;
#line 665 "ml_util.m"
  MR_Cont ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont;
#line 665 "ml_util.m"
  void * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr;
#line 665 "ml_util.m"
  MR_Word ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12;
#line 665 "ml_util.m"
};


#line 665 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_1(
#line 665 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 665 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0(
#line 665 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 665 "ml_util.m"
  MR_Word * ml_backend__ml_util__LambdaHeadVar__1_12,
#line 665 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 665 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 812 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
#line 812 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 812 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 770 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
#line 770 "ml_util.m"
  MR_Word ml_backend__ml_util__Body_4,
#line 770 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 745 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__defn_body_contains_var_2_f_0(
#line 745 "ml_util.m"
  MR_Word ml_backend__ml_util__DefnBody_4,
#line 745 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 634 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
#line 634 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 634 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 587 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
#line 587 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 587 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 490 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__default_contains_var_2_f_0(
#line 490 "ml_util.m"
  MR_Word ml_backend__ml_util__Default_4,
#line 490 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 476 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
#line 476 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 476 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 359 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__stmt_contains_var_2_f_0(
#line 359 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_4,
#line 359 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 349 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
#line 349 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 349 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_2);

#line 336 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__statements_contains_var_2_f_0(
#line 336 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 336 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 317 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__default_contains_statement_2_p_0(
#line 317 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 317 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_2,
#line 317 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 317 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 313 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_2(
#line 313 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 312 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_1(
#line 312 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 309 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0(
#line 309 "ml_util.m"
  MR_Word ml_backend__ml_util__Cases_3,
#line 309 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 309 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 309 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 263 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(
#line 263 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 263 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
#line 263 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 263 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 260 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_2(
#line 260 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 259 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_1(
#line 259 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 256 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0(
#line 256 "ml_util.m"
  MR_Word ml_backend__ml_util__Statements_3,
#line 256 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 256 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 256 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 689 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(
#line 689 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 689 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(
#line 689 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 689 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(
#line 689 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 677 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(
#line 677 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 677 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(
#line 677 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 677 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(
#line 677 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 665 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
#line 665 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 665 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
#line 665 "ml_util.m"
  MR_Box ml_backend__ml_util__closure_arg,
#line 665 "ml_util.m"
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
#line 665 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 665 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);


static /* final */ const MR_Box ml_backend__ml_util_scalar_common_1[3][2];

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_2[1][5];

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_3[3][1];




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

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_util_scalar_common_1[1])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_util_scalar_common_1[2])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 665 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_1(
#line 665 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 665 "ml_util.m"
{
#line 665 "ml_util.m"
  {
#line 665 "ml_util.m"
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 665 "ml_util.m"
    {
#line 667 "ml_util.m"
      MR_Word ml_backend__ml_util__V_11_11;
#line 668 "ml_util.m"
      MR_Word ml_backend__ml_util__V_8_8;
#line 668 "ml_util.m"
      MR_Word ml_backend__ml_util__V_9_9;
#line 668 "ml_util.m"
      MR_String ml_backend__ml_util__V_10_10;

#line 667 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 0)));
#line 667 "ml_util.m"
      ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 1)));
#line 667 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__V_13_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__V_13_13, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 667 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__succeeded)
#line 667 "ml_util.m"
        {
#line 667 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__V_13_13, (MR_Integer) 1)));
#line 665 "ml_util.m"
          {
#line 668 "ml_util.m"
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 668 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__succeeded)
#line 668 "ml_util.m"
              {
#line 668 "ml_util.m"
                {
#line 668 "ml_util.m"
                  *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__LambdaHeadVar__1_12) = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__V_14_14, (MR_Integer) 1)));
#line 668 "ml_util.m"
                  ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__V_14_14, (MR_Integer) 2)));
#line 668 "ml_util.m"
                  ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__V_14_14, (MR_Integer) 3)));
#line 668 "ml_util.m"
                  ml_backend__ml_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__V_14_14, (MR_Integer) 4)));
#line 668 "ml_util.m"
                }
#line 668 "ml_util.m"
                {
#line 668 "ml_util.m"
                  ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__cont_env_ptr);
                }
#line 668 "ml_util.m"
              }
#line 665 "ml_util.m"
          }
#line 667 "ml_util.m"
        }
#line 665 "ml_util.m"
    }
#line 665 "ml_util.m"
  }
#line 665 "ml_util.m"
}

#line 665 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0(
#line 665 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 665 "ml_util.m"
  MR_Word * ml_backend__ml_util__LambdaHeadVar__1_12,
#line 665 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 665 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 665 "ml_util.m"
{
#line 665 "ml_util.m"
  {
#line 665 "ml_util.m"
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0_s ml_backend__ml_util__env;

#line 665 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__LambdaHeadVar__1_12 = ml_backend__ml_util__LambdaHeadVar__1_12;
#line 665 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__cont = ml_backend__ml_util__cont;
#line 665 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 270 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__SubStatement_7 = ml_backend__ml_util__Statement_3;
#line 270 "ml_util.m"
    {
#line 270 "ml_util.m"
      ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_1(&ml_backend__ml_util__env);
    }
#line 271 "ml_util.m"
    {
#line 271 "ml_util.m"
      MR_Word ml_backend__ml_util__Stmt_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_3, (MR_Integer) 0)));
#line 272 "ml_util.m"
      MR_Word ml_backend__ml_util___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_3, (MR_Integer) 1)));

#line 273 "ml_util.m"
      {
#line 273 "ml_util.m"
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_20, &(ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_env_0__SubStatement_7, ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0_1, &ml_backend__ml_util__env);
      }
#line 271 "ml_util.m"
    }
#line 665 "ml_util.m"
  }
#line 665 "ml_util.m"
}

#line 812 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
#line 812 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 812 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 812 "ml_util.m"
{
#line 814 "ml_util.m"
  while (MR_TRUE)
#line 814 "ml_util.m"
    {
#line 814 "ml_util.m"
      /* tailcall optimized into a loop */
#line 814 "ml_util.m"
      {
#line 814 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 814 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 814 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 814 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 814 "ml_util.m"
        else
#line 816 "ml_util.m"
          {
#line 816 "ml_util.m"
            MR_Word ml_backend__ml_util__Initializer_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 816 "ml_util.m"
            MR_Word ml_backend__ml_util__Initializers_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 816 "ml_util.m"
            MR_Word ml_backend__ml_util__InitializerContainsVar_9;

#line 817 "ml_util.m"
            {
#line 817 "ml_util.m"
              ml_backend__ml_util__InitializerContainsVar_9 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 821 "ml_util.m"
#line 821 "ml_util.m"
            switch (ml_backend__ml_util__InitializerContainsVar_9) {
#line 821 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 821 "ml_util.m"
              case (MR_Integer) 0:
#line 823 "ml_util.m"
                {
#line 823 "ml_util.m"
                  /* direct tailcall eliminated */
#line 823 "ml_util.m"
                  {
#line 823 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Initializers_6;

#line 823 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 823 "ml_util.m"
                  }
#line 823 "ml_util.m"
                  continue;
#line 823 "ml_util.m"
                }
#line 821 "ml_util.m"
                break;
#line 821 "ml_util.m"
              case (MR_Integer) 1:
#line 820 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 821 "ml_util.m"
                break;
#line 821 "ml_util.m"
            }
#line 816 "ml_util.m"
          }
#line 814 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 814 "ml_util.m"
      }
#line 814 "ml_util.m"
      break;
#line 814 "ml_util.m"
    }
#line 812 "ml_util.m"
}

#line 770 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
#line 770 "ml_util.m"
  MR_Word ml_backend__ml_util__Body_4,
#line 770 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 770 "ml_util.m"
{
#line 774 "ml_util.m"
  {
#line 774 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 774 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 774 "ml_util.m"
    if ((ml_backend__ml_util__Body_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "ml_util.m"
      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 774 "ml_util.m"
    else
#line 777 "ml_util.m"
      {
#line 777 "ml_util.m"
        MR_Word ml_backend__ml_util__Statement_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Body_4), (MR_Integer) 1);
#line 777 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 0)));
#line 356 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 1)));

#line 357 "ml_util.m"
        {
#line 357 "ml_util.m"
          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_5);
        }
#line 777 "ml_util.m"
      }
#line 774 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 774 "ml_util.m"
  }
#line 770 "ml_util.m"
}

#line 745 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__defn_body_contains_var_2_f_0(
#line 745 "ml_util.m"
  MR_Word ml_backend__ml_util__DefnBody_4,
#line 745 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 745 "ml_util.m"
{
#line 749 "ml_util.m"
  {
#line 749 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 749 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 749 "ml_util.m"
#line 749 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__DefnBody_4)) {
#line 749 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 749 "ml_util.m"
      case (MR_Integer) 0:
#line 757 "ml_util.m"
        {
#line 757 "ml_util.m"
          MR_Word ml_backend__ml_util__ClassDefn_15 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__DefnBody_4), (MR_Integer) 0);
#line 757 "ml_util.m"
          MR_Word ml_backend__ml_util__CtorDefns_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 5)));
#line 757 "ml_util.m"
          MR_Word ml_backend__ml_util__FieldDefns_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 6)));
#line 757 "ml_util.m"
          MR_Word ml_backend__ml_util__FieldDefnsContainVar_23;
#line 758 "ml_util.m"
          MR_Word ml_backend__ml_util___Kind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 0)));
#line 758 "ml_util.m"
          MR_Word ml_backend__ml_util___Imports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 1)));
#line 758 "ml_util.m"
          MR_Word ml_backend__ml_util___Inherits_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 2)));
#line 758 "ml_util.m"
          MR_Word ml_backend__ml_util___Implements_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 3)));
#line 758 "ml_util.m"
          MR_Word ml_backend__ml_util___TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 4)));

#line 760 "ml_util.m"
          {
#line 760 "ml_util.m"
            ml_backend__ml_util__FieldDefnsContainVar_23 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__FieldDefns_22, ml_backend__ml_util__DataName_5);
          }
#line 764 "ml_util.m"
#line 764 "ml_util.m"
          switch (ml_backend__ml_util__FieldDefnsContainVar_23) {
#line 764 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 764 "ml_util.m"
            case (MR_Integer) 0:
#line 766 "ml_util.m"
              {
#line 766 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__CtorDefns_21, ml_backend__ml_util__DataName_5);
              }
#line 764 "ml_util.m"
              break;
#line 764 "ml_util.m"
            case (MR_Integer) 1:
#line 763 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 764 "ml_util.m"
              break;
#line 764 "ml_util.m"
          }
#line 757 "ml_util.m"
        }
#line 749 "ml_util.m"
        break;
#line 749 "ml_util.m"
      case (MR_Integer) 1:
#line 749 "ml_util.m"
        {
#line 749 "ml_util.m"
          MR_Word ml_backend__ml_util__Initializer_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 1)));
#line 749 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 0)));
#line 749 "ml_util.m"
          MR_Word ml_backend__ml_util___GCStatement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 2)));

#line 751 "ml_util.m"
          {
#line 751 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_8, ml_backend__ml_util__DataName_5);
          }
#line 749 "ml_util.m"
        }
#line 749 "ml_util.m"
        break;
#line 749 "ml_util.m"
      case (MR_Integer) 2:
#line 754 "ml_util.m"
        {
#line 754 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 2)));
#line 753 "ml_util.m"
          MR_Word ml_backend__ml_util___PredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 0)));
#line 753 "ml_util.m"
          MR_Word ml_backend__ml_util___Params_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 1)));
#line 753 "ml_util.m"
          MR_Word ml_backend__ml_util___Attrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 3)));
#line 753 "ml_util.m"
          MR_Word ml_backend__ml_util___EnvVarNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 4)));

#line 755 "ml_util.m"
          {
#line 755 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__function_body_contains_var_2_f_0(ml_backend__ml_util__FunctionBody_12, ml_backend__ml_util__DataName_5);
          }
#line 754 "ml_util.m"
        }
#line 749 "ml_util.m"
        break;
#line 749 "ml_util.m"
    }
#line 749 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 749 "ml_util.m"
  }
#line 745 "ml_util.m"
}

#line 634 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
#line 634 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 634 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 634 "ml_util.m"
{
#line 636 "ml_util.m"
  while (MR_TRUE)
#line 636 "ml_util.m"
    {
#line 636 "ml_util.m"
      /* tailcall optimized into a loop */
#line 636 "ml_util.m"
      {
#line 636 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 636 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 636 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 636 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 636 "ml_util.m"
        else
#line 638 "ml_util.m"
          {
#line 638 "ml_util.m"
            MR_Word ml_backend__ml_util__OutlineArg_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 638 "ml_util.m"
            MR_Word ml_backend__ml_util__OutlineArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));

#line 964 "ml_backend.ml_util.c"
#line 965 "ml_backend.ml_util.c"
            switch (MR_tag((MR_Word) ml_backend__ml_util__OutlineArg_5)) {
#line 967 "ml_backend.ml_util.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 969 "ml_backend.ml_util.c"
              case (MR_Integer) 0:
#line 645 "ml_util.m"
                {
#line 645 "ml_util.m"
                  /* direct tailcall eliminated */
#line 645 "ml_util.m"
                  {
#line 645 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

#line 645 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 645 "ml_util.m"
                  }
#line 645 "ml_util.m"
                  continue;
#line 645 "ml_util.m"
                }
#line 988 "ml_backend.ml_util.c"
                break;
#line 990 "ml_backend.ml_util.c"
              case (MR_Integer) 1:
#line 992 "ml_backend.ml_util.c"
                {
#line 994 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__OutlineArgContainsVar_9;
#line 996 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 2)));
#line 652 "ml_util.m"
                  MR_Word ml_backend__ml_util___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 0)));
#line 652 "ml_util.m"
                  MR_String ml_backend__ml_util___Str_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 1)));

#line 653 "ml_util.m"
                  {
#line 653 "ml_util.m"
                    ml_backend__ml_util__OutlineArgContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_15, ml_backend__ml_util__HeadVar__2_2);
                  }
#line 643 "ml_util.m"
#line 643 "ml_util.m"
                  switch (ml_backend__ml_util__OutlineArgContainsVar_9) {
#line 643 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 643 "ml_util.m"
                    case (MR_Integer) 0:
#line 645 "ml_util.m"
                      {
#line 645 "ml_util.m"
                        /* direct tailcall eliminated */
#line 645 "ml_util.m"
                        {
#line 645 "ml_util.m"
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

#line 645 "ml_util.m"
                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 645 "ml_util.m"
                        }
#line 645 "ml_util.m"
                        continue;
#line 645 "ml_util.m"
                      }
#line 643 "ml_util.m"
                      break;
#line 643 "ml_util.m"
                    case (MR_Integer) 1:
#line 642 "ml_util.m"
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 643 "ml_util.m"
                      break;
#line 643 "ml_util.m"
                  }
#line 1042 "ml_backend.ml_util.c"
                }
#line 1044 "ml_backend.ml_util.c"
                break;
#line 1046 "ml_backend.ml_util.c"
              case (MR_Integer) 2:
#line 1048 "ml_backend.ml_util.c"
                {
#line 1050 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__Lval_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 2)));
#line 1052 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__OutlineArgContainsVar_21;
#line 655 "ml_util.m"
                  MR_Word ml_backend__ml_util___Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 0)));
#line 655 "ml_util.m"
                  MR_String ml_backend__ml_util___Str_18 = ((MR_String) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 1)));

#line 656 "ml_util.m"
                  {
#line 656 "ml_util.m"
                    ml_backend__ml_util__OutlineArgContainsVar_21 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_16, ml_backend__ml_util__HeadVar__2_2);
                  }
#line 643 "ml_util.m"
#line 643 "ml_util.m"
                  switch (ml_backend__ml_util__OutlineArgContainsVar_21) {
#line 643 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 643 "ml_util.m"
                    case (MR_Integer) 0:
#line 645 "ml_util.m"
                      {
#line 645 "ml_util.m"
                        /* direct tailcall eliminated */
#line 645 "ml_util.m"
                        {
#line 645 "ml_util.m"
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

#line 645 "ml_util.m"
                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 645 "ml_util.m"
                        }
#line 645 "ml_util.m"
                        continue;
#line 645 "ml_util.m"
                      }
#line 643 "ml_util.m"
                      break;
#line 643 "ml_util.m"
                    case (MR_Integer) 1:
#line 642 "ml_util.m"
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 643 "ml_util.m"
                      break;
#line 643 "ml_util.m"
                  }
#line 1098 "ml_backend.ml_util.c"
                }
#line 1100 "ml_backend.ml_util.c"
                break;
#line 1102 "ml_backend.ml_util.c"
            }
#line 638 "ml_util.m"
          }
#line 636 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 636 "ml_util.m"
      }
#line 636 "ml_util.m"
      break;
#line 636 "ml_util.m"
    }
#line 634 "ml_util.m"
}

#line 587 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
#line 587 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 587 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 587 "ml_util.m"
{
#line 590 "ml_util.m"
  while (MR_TRUE)
#line 590 "ml_util.m"
    {
#line 590 "ml_util.m"
      /* tailcall optimized into a loop */
#line 590 "ml_util.m"
      {
#line 590 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 590 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 590 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 590 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 590 "ml_util.m"
        else
#line 592 "ml_util.m"
          {
#line 592 "ml_util.m"
            MR_Word ml_backend__ml_util__TargetCode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 592 "ml_util.m"
            MR_Word ml_backend__ml_util__TargetCodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1152 "ml_backend.ml_util.c"
#line 1153 "ml_backend.ml_util.c"
            switch (MR_tag((MR_Word) ml_backend__ml_util__TargetCode_5)) {
#line 1155 "ml_backend.ml_util.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1157 "ml_backend.ml_util.c"
              case (MR_Integer) 0:
#line 1159 "ml_backend.ml_util.c"
              case (MR_Integer) 1:
#line 600 "ml_util.m"
                {
#line 600 "ml_util.m"
                  /* direct tailcall eliminated */
#line 600 "ml_util.m"
                  {
#line 600 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 600 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 600 "ml_util.m"
                  }
#line 600 "ml_util.m"
                  continue;
#line 600 "ml_util.m"
                }
#line 1178 "ml_backend.ml_util.c"
                break;
#line 1180 "ml_backend.ml_util.c"
              case (MR_Integer) 2:
#line 1182 "ml_backend.ml_util.c"
                {
#line 1184 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)));
#line 1186 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__TargetCodeContainsVar_30;

#line 617 "ml_util.m"
                  {
#line 617 "ml_util.m"
                    ml_backend__ml_util__TargetCodeContainsVar_30 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_18, ml_backend__ml_util__HeadVar__2_2);
                  }
#line 598 "ml_util.m"
#line 598 "ml_util.m"
                  switch (ml_backend__ml_util__TargetCodeContainsVar_30) {
#line 598 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 598 "ml_util.m"
                    case (MR_Integer) 0:
#line 600 "ml_util.m"
                      {
#line 600 "ml_util.m"
                        /* direct tailcall eliminated */
#line 600 "ml_util.m"
                        {
#line 600 "ml_util.m"
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 600 "ml_util.m"
                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 600 "ml_util.m"
                        }
#line 600 "ml_util.m"
                        continue;
#line 600 "ml_util.m"
                      }
#line 598 "ml_util.m"
                      break;
#line 598 "ml_util.m"
                    case (MR_Integer) 1:
#line 597 "ml_util.m"
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 598 "ml_util.m"
                      break;
#line 598 "ml_util.m"
                  }
#line 1228 "ml_backend.ml_util.c"
                }
#line 1230 "ml_backend.ml_util.c"
                break;
#line 1232 "ml_backend.ml_util.c"
              case (MR_Integer) 3:
#line 1234 "ml_backend.ml_util.c"
#line 1235 "ml_backend.ml_util.c"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)))) {
#line 1237 "ml_backend.ml_util.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1239 "ml_backend.ml_util.c"
                  case (MR_Integer) 0:
#line 1241 "ml_backend.ml_util.c"
                    {
#line 1243 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__Lval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
#line 1245 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__TargetCodeContainsVar_32;

#line 620 "ml_util.m"
                      {
#line 620 "ml_util.m"
                        ml_backend__ml_util__TargetCodeContainsVar_32 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_19, ml_backend__ml_util__HeadVar__2_2);
                      }
#line 598 "ml_util.m"
#line 598 "ml_util.m"
                      switch (ml_backend__ml_util__TargetCodeContainsVar_32) {
#line 598 "ml_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 598 "ml_util.m"
                        case (MR_Integer) 0:
#line 600 "ml_util.m"
                          {
#line 600 "ml_util.m"
                            /* direct tailcall eliminated */
#line 600 "ml_util.m"
                            {
#line 600 "ml_util.m"
                              MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 600 "ml_util.m"
                              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 600 "ml_util.m"
                            }
#line 600 "ml_util.m"
                            continue;
#line 600 "ml_util.m"
                          }
#line 598 "ml_util.m"
                          break;
#line 598 "ml_util.m"
                        case (MR_Integer) 1:
#line 597 "ml_util.m"
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 598 "ml_util.m"
                          break;
#line 598 "ml_util.m"
                      }
#line 1287 "ml_backend.ml_util.c"
                    }
#line 1289 "ml_backend.ml_util.c"
                    break;
#line 1291 "ml_backend.ml_util.c"
                  case (MR_Integer) 1:
#line 1293 "ml_backend.ml_util.c"
                  case (MR_Integer) 3:
#line 600 "ml_util.m"
                    {
#line 600 "ml_util.m"
                      /* direct tailcall eliminated */
#line 600 "ml_util.m"
                      {
#line 600 "ml_util.m"
                        MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 600 "ml_util.m"
                        ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 600 "ml_util.m"
                      }
#line 600 "ml_util.m"
                      continue;
#line 600 "ml_util.m"
                    }
#line 1312 "ml_backend.ml_util.c"
                    break;
#line 1314 "ml_backend.ml_util.c"
                  case (MR_Integer) 2:
#line 1316 "ml_backend.ml_util.c"
                    {
#line 1318 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__EntityName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
#line 625 "ml_util.m"
                      MR_Word ml_backend__ml_util__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_20, (MR_Integer) 0)));
#line 625 "ml_util.m"
                      MR_Word ml_backend__ml_util__QualKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_20, (MR_Integer) 1)));
#line 625 "ml_util.m"
                      MR_Word ml_backend__ml_util__UnqualDataName_23;
#line 625 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_20, (MR_Integer) 2)));
#line 625 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_25_25;
#line 625 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_26_26;
#line 625 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_27_27;

#line 625 "ml_util.m"
                      ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 625 "ml_util.m"
                      if (ml_backend__ml_util__succeeded)
#line 625 "ml_util.m"
                        {
#line 625 "ml_util.m"
                          ml_backend__ml_util__UnqualDataName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__V_24_24, (MR_Integer) 0)));
#line 626 "ml_util.m"
                          ml_backend__ml_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 0)));
#line 626 "ml_util.m"
                          ml_backend__ml_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 626 "ml_util.m"
                          ml_backend__ml_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 2)));
#line 626 "ml_util.m"
                          {
#line 626 "ml_util.m"
                            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_21, ml_backend__ml_util__V_25_25);
                          }
#line 625 "ml_util.m"
                          if (ml_backend__ml_util__succeeded)
#line 625 "ml_util.m"
                            {
#line 626 "ml_util.m"
                              ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_22 == ml_backend__ml_util__V_26_26);
#line 625 "ml_util.m"
                              if (ml_backend__ml_util__succeeded)
#line 626 "ml_util.m"
                                {
#line 626 "ml_util.m"
                                  ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__UnqualDataName_23, ml_backend__ml_util__V_27_27);
                                }
#line 625 "ml_util.m"
                            }
#line 625 "ml_util.m"
                        }
#line 1371 "ml_backend.ml_util.c"
                      if (ml_backend__ml_util__succeeded)
#line 597 "ml_util.m"
                        ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 1375 "ml_backend.ml_util.c"
                      else
#line 600 "ml_util.m"
                        {
#line 600 "ml_util.m"
                          /* direct tailcall eliminated */
#line 600 "ml_util.m"
                          {
#line 600 "ml_util.m"
                            MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 600 "ml_util.m"
                            ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 600 "ml_util.m"
                          }
#line 600 "ml_util.m"
                          continue;
#line 600 "ml_util.m"
                        }
#line 1394 "ml_backend.ml_util.c"
                    }
#line 1396 "ml_backend.ml_util.c"
                    break;
#line 1398 "ml_backend.ml_util.c"
                }
#line 1400 "ml_backend.ml_util.c"
                break;
#line 1402 "ml_backend.ml_util.c"
            }
#line 592 "ml_util.m"
          }
#line 590 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 590 "ml_util.m"
      }
#line 590 "ml_util.m"
      break;
#line 590 "ml_util.m"
    }
#line 587 "ml_util.m"
}

#line 490 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__default_contains_var_2_f_0(
#line 490 "ml_util.m"
  MR_Word ml_backend__ml_util__Default_4,
#line 490 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 490 "ml_util.m"
{
#line 496 "ml_util.m"
  {
#line 496 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 496 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 496 "ml_util.m"
#line 496 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Default_4)) {
#line 496 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 496 "ml_util.m"
      case (MR_Integer) 0:
#line 497 "ml_util.m"
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 496 "ml_util.m"
        break;
#line 496 "ml_util.m"
      case (MR_Integer) 1:
#line 499 "ml_util.m"
        {
#line 499 "ml_util.m"
          MR_Word ml_backend__ml_util__Statement_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Default_4), (MR_Integer) 1);
#line 499 "ml_util.m"
          MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 0)));
#line 356 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 1)));

#line 357 "ml_util.m"
          {
#line 357 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_5);
          }
#line 499 "ml_util.m"
        }
#line 496 "ml_util.m"
        break;
#line 496 "ml_util.m"
    }
#line 496 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 496 "ml_util.m"
  }
#line 490 "ml_util.m"
}

#line 476 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
#line 476 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 476 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 476 "ml_util.m"
{
#line 478 "ml_util.m"
  while (MR_TRUE)
#line 478 "ml_util.m"
    {
#line 478 "ml_util.m"
      /* tailcall optimized into a loop */
#line 478 "ml_util.m"
      {
#line 478 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 478 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 478 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 478 "ml_util.m"
        else
#line 479 "ml_util.m"
          {
#line 479 "ml_util.m"
            MR_Word ml_backend__ml_util__Case_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 479 "ml_util.m"
            MR_Word ml_backend__ml_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 479 "ml_util.m"
            MR_Word ml_backend__ml_util__Statement_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 2)));
#line 479 "ml_util.m"
            MR_Word ml_backend__ml_util__StatementContainsVar_12;
#line 479 "ml_util.m"
            MR_Word ml_backend__ml_util__Stmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 0)));
#line 480 "ml_util.m"
            MR_Word ml_backend__ml_util___FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 0)));
#line 480 "ml_util.m"
            MR_Word ml_backend__ml_util___LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 1)));
#line 356 "ml_util.m"
            MR_Word ml_backend__ml_util___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 1)));

#line 357 "ml_util.m"
            {
#line 357 "ml_util.m"
              ml_backend__ml_util__StatementContainsVar_12 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_16, ml_backend__ml_util__HeadVar__2_2);
            }
#line 485 "ml_util.m"
#line 485 "ml_util.m"
            switch (ml_backend__ml_util__StatementContainsVar_12) {
#line 485 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 485 "ml_util.m"
              case (MR_Integer) 0:
#line 487 "ml_util.m"
                {
#line 487 "ml_util.m"
                  /* direct tailcall eliminated */
#line 487 "ml_util.m"
                  {
#line 487 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Cases_6;

#line 487 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 487 "ml_util.m"
                  }
#line 487 "ml_util.m"
                  continue;
#line 487 "ml_util.m"
                }
#line 485 "ml_util.m"
                break;
#line 485 "ml_util.m"
              case (MR_Integer) 1:
#line 484 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 485 "ml_util.m"
                break;
#line 485 "ml_util.m"
            }
#line 479 "ml_util.m"
          }
#line 478 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 478 "ml_util.m"
      }
#line 478 "ml_util.m"
      break;
#line 478 "ml_util.m"
    }
#line 476 "ml_util.m"
}

#line 359 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__stmt_contains_var_2_f_0(
#line 359 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_4,
#line 359 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 359 "ml_util.m"
{
#line 363 "ml_util.m"
  {
#line 363 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 363 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 363 "ml_util.m"
#line 363 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) {
#line 363 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 363 "ml_util.m"
      case (MR_Integer) 0:
#line 363 "ml_util.m"
        {
#line 363 "ml_util.m"
          MR_Word ml_backend__ml_util__Defns_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
#line 363 "ml_util.m"
          MR_Word ml_backend__ml_util__Statements_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 363 "ml_util.m"
          MR_Word ml_backend__ml_util__DefnsContainVar_9;

#line 364 "ml_util.m"
          {
#line 364 "ml_util.m"
            ml_backend__ml_util__DefnsContainVar_9 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__Defns_7, ml_backend__ml_util__DataName_5);
          }
#line 368 "ml_util.m"
#line 368 "ml_util.m"
          switch (ml_backend__ml_util__DefnsContainVar_9) {
#line 368 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 368 "ml_util.m"
            case (MR_Integer) 0:
#line 370 "ml_util.m"
              {
#line 370 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statements_contains_var_2_f_0(ml_backend__ml_util__Statements_8, ml_backend__ml_util__DataName_5);
              }
#line 368 "ml_util.m"
              break;
#line 368 "ml_util.m"
            case (MR_Integer) 1:
#line 367 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 368 "ml_util.m"
              break;
#line 368 "ml_util.m"
          }
#line 363 "ml_util.m"
        }
#line 363 "ml_util.m"
        break;
#line 363 "ml_util.m"
      case (MR_Integer) 1:
#line 373 "ml_util.m"
        {
#line 373 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 373 "ml_util.m"
          MR_Word ml_backend__ml_util__Statement_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 373 "ml_util.m"
          MR_Word ml_backend__ml_util__RvalContainsVar_13;
#line 373 "ml_util.m"
          MR_Word ml_backend__ml_util___Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));

#line 374 "ml_util.m"
          {
#line 374 "ml_util.m"
            ml_backend__ml_util__RvalContainsVar_13 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_11, ml_backend__ml_util__DataName_5);
          }
#line 378 "ml_util.m"
#line 378 "ml_util.m"
          switch (ml_backend__ml_util__RvalContainsVar_13) {
#line 378 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 378 "ml_util.m"
            case (MR_Integer) 0:
#line 380 "ml_util.m"
              {
#line 380 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_12, ml_backend__ml_util__DataName_5);
              }
#line 378 "ml_util.m"
              break;
#line 378 "ml_util.m"
            case (MR_Integer) 1:
#line 377 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 378 "ml_util.m"
              break;
#line 378 "ml_util.m"
          }
#line 373 "ml_util.m"
        }
#line 363 "ml_util.m"
        break;
#line 363 "ml_util.m"
      case (MR_Integer) 2:
#line 383 "ml_util.m"
        {
#line 383 "ml_util.m"
          MR_Word ml_backend__ml_util__Cond_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
#line 383 "ml_util.m"
          MR_Word ml_backend__ml_util__Then_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 383 "ml_util.m"
          MR_Word ml_backend__ml_util__MaybeElse_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 383 "ml_util.m"
          MR_Word ml_backend__ml_util__CondContainsVar_17;

#line 384 "ml_util.m"
          {
#line 384 "ml_util.m"
            ml_backend__ml_util__CondContainsVar_17 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Cond_14, ml_backend__ml_util__DataName_5);
          }
#line 388 "ml_util.m"
#line 388 "ml_util.m"
          switch (ml_backend__ml_util__CondContainsVar_17) {
#line 388 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 388 "ml_util.m"
            case (MR_Integer) 0:
#line 389 "ml_util.m"
              {
#line 389 "ml_util.m"
                MR_Word ml_backend__ml_util__ThenContainsVar_18;
#line 389 "ml_util.m"
                MR_Word ml_backend__ml_util__Stmt_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_15, (MR_Integer) 0)));
#line 356 "ml_util.m"
                MR_Word ml_backend__ml_util___Context_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_15, (MR_Integer) 1)));

#line 357 "ml_util.m"
                {
#line 357 "ml_util.m"
                  ml_backend__ml_util__ThenContainsVar_18 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_94, ml_backend__ml_util__DataName_5);
                }
#line 394 "ml_util.m"
#line 394 "ml_util.m"
                switch (ml_backend__ml_util__ThenContainsVar_18) {
#line 394 "ml_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 394 "ml_util.m"
                  case (MR_Integer) 0:
#line 396 "ml_util.m"
                    {
#line 396 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__maybe_statement_contains_var_2_f_0(ml_backend__ml_util__MaybeElse_16, ml_backend__ml_util__DataName_5);
                    }
#line 394 "ml_util.m"
                    break;
#line 394 "ml_util.m"
                  case (MR_Integer) 1:
#line 393 "ml_util.m"
                    ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 394 "ml_util.m"
                    break;
#line 394 "ml_util.m"
                }
#line 389 "ml_util.m"
              }
#line 388 "ml_util.m"
              break;
#line 388 "ml_util.m"
            case (MR_Integer) 1:
#line 387 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 388 "ml_util.m"
              break;
#line 388 "ml_util.m"
          }
#line 383 "ml_util.m"
        }
#line 363 "ml_util.m"
        break;
#line 363 "ml_util.m"
      case (MR_Integer) 3:
#line 363 "ml_util.m"
#line 363 "ml_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) {
#line 363 "ml_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 363 "ml_util.m"
          case (MR_Integer) 0:
#line 400 "ml_util.m"
            {
#line 400 "ml_util.m"
              MR_Word ml_backend__ml_util__Val_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 400 "ml_util.m"
              MR_Word ml_backend__ml_util__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
#line 400 "ml_util.m"
              MR_Word ml_backend__ml_util__Default_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
#line 400 "ml_util.m"
              MR_Word ml_backend__ml_util__ValContainsVar_24;
#line 400 "ml_util.m"
              MR_Word ml_backend__ml_util___Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 400 "ml_util.m"
              MR_Word ml_backend__ml_util___Range_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));

#line 401 "ml_util.m"
              {
#line 401 "ml_util.m"
                ml_backend__ml_util__ValContainsVar_24 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Val_20, ml_backend__ml_util__DataName_5);
              }
#line 405 "ml_util.m"
#line 405 "ml_util.m"
              switch (ml_backend__ml_util__ValContainsVar_24) {
#line 405 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 405 "ml_util.m"
                case (MR_Integer) 0:
#line 406 "ml_util.m"
                  {
#line 406 "ml_util.m"
                    MR_Word ml_backend__ml_util__CasesContainsVar_25;

#line 407 "ml_util.m"
                    {
#line 407 "ml_util.m"
                      ml_backend__ml_util__CasesContainsVar_25 = ml_backend__ml_util__cases_contains_var_2_f_0(ml_backend__ml_util__Cases_22, ml_backend__ml_util__DataName_5);
                    }
#line 411 "ml_util.m"
#line 411 "ml_util.m"
                    switch (ml_backend__ml_util__CasesContainsVar_25) {
#line 411 "ml_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 411 "ml_util.m"
                      case (MR_Integer) 0:
#line 413 "ml_util.m"
                        {
#line 413 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__default_contains_var_2_f_0(ml_backend__ml_util__Default_23, ml_backend__ml_util__DataName_5);
                        }
#line 411 "ml_util.m"
                        break;
#line 411 "ml_util.m"
                      case (MR_Integer) 1:
#line 410 "ml_util.m"
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 411 "ml_util.m"
                        break;
#line 411 "ml_util.m"
                    }
#line 406 "ml_util.m"
                  }
#line 405 "ml_util.m"
                  break;
#line 405 "ml_util.m"
                case (MR_Integer) 1:
#line 404 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 405 "ml_util.m"
                  break;
#line 405 "ml_util.m"
              }
#line 400 "ml_util.m"
            }
#line 363 "ml_util.m"
            break;
#line 363 "ml_util.m"
          case (MR_Integer) 1:
#line 363 "ml_util.m"
          case (MR_Integer) 2:
#line 420 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 363 "ml_util.m"
            break;
#line 363 "ml_util.m"
          case (MR_Integer) 3:
#line 422 "ml_util.m"
            {
#line 422 "ml_util.m"
              MR_Word ml_backend__ml_util__Rval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 422 "ml_util.m"
              MR_Word ml_backend__ml_util___Labels_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));

#line 423 "ml_util.m"
              {
#line 423 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_44, ml_backend__ml_util__DataName_5);
              }
#line 422 "ml_util.m"
            }
#line 363 "ml_util.m"
            break;
#line 363 "ml_util.m"
          case (MR_Integer) 4:
#line 425 "ml_util.m"
            {
#line 425 "ml_util.m"
              MR_Word ml_backend__ml_util__Func_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 425 "ml_util.m"
              MR_Word ml_backend__ml_util__Obj_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
#line 425 "ml_util.m"
              MR_Word ml_backend__ml_util__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
#line 425 "ml_util.m"
              MR_Word ml_backend__ml_util__RetLvals_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
#line 425 "ml_util.m"
              MR_Word ml_backend__ml_util__FuncContainsVar_35;
#line 425 "ml_util.m"
              MR_Word ml_backend__ml_util___Sig_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 425 "ml_util.m"
              MR_Word ml_backend__ml_util___TailCall_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 6)));

#line 426 "ml_util.m"
              {
#line 426 "ml_util.m"
                ml_backend__ml_util__FuncContainsVar_35 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Func_30, ml_backend__ml_util__DataName_5);
              }
#line 430 "ml_util.m"
#line 430 "ml_util.m"
              switch (ml_backend__ml_util__FuncContainsVar_35) {
#line 430 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 430 "ml_util.m"
                case (MR_Integer) 0:
#line 1897 "ml_backend.ml_util.c"
                  if ((ml_backend__ml_util__Obj_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1899 "ml_backend.ml_util.c"
                    {
#line 1901 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__ArgsContainVar_37;

#line 438 "ml_util.m"
                      {
#line 438 "ml_util.m"
                        ml_backend__ml_util__ArgsContainVar_37 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_32, ml_backend__ml_util__DataName_5);
                      }
#line 442 "ml_util.m"
#line 442 "ml_util.m"
                      switch (ml_backend__ml_util__ArgsContainVar_37) {
#line 442 "ml_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 442 "ml_util.m"
                        case (MR_Integer) 0:
#line 444 "ml_util.m"
                          {
#line 444 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_33, ml_backend__ml_util__DataName_5);
                          }
#line 442 "ml_util.m"
                          break;
#line 442 "ml_util.m"
                        case (MR_Integer) 1:
#line 441 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 442 "ml_util.m"
                          break;
#line 442 "ml_util.m"
                      }
#line 1931 "ml_backend.ml_util.c"
                    }
#line 1933 "ml_backend.ml_util.c"
                  else
#line 1935 "ml_backend.ml_util.c"
                    {
#line 1937 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__Rval_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Obj_31, (MR_Integer) 0)));
#line 1939 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__ObjContainsVar_98;

#line 839 "ml_util.m"
                      {
#line 839 "ml_util.m"
                        ml_backend__ml_util__ObjContainsVar_98 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_89, ml_backend__ml_util__DataName_5);
                      }
#line 436 "ml_util.m"
#line 436 "ml_util.m"
                      switch (ml_backend__ml_util__ObjContainsVar_98) {
#line 436 "ml_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 436 "ml_util.m"
                        case (MR_Integer) 0:
#line 437 "ml_util.m"
                          {
#line 437 "ml_util.m"
                            MR_Word ml_backend__ml_util__ArgsContainVar_96;

#line 438 "ml_util.m"
                            {
#line 438 "ml_util.m"
                              ml_backend__ml_util__ArgsContainVar_96 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_32, ml_backend__ml_util__DataName_5);
                            }
#line 442 "ml_util.m"
#line 442 "ml_util.m"
                            switch (ml_backend__ml_util__ArgsContainVar_96) {
#line 442 "ml_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 442 "ml_util.m"
                              case (MR_Integer) 0:
#line 444 "ml_util.m"
                                {
#line 444 "ml_util.m"
                                  ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_33, ml_backend__ml_util__DataName_5);
                                }
#line 442 "ml_util.m"
                                break;
#line 442 "ml_util.m"
                              case (MR_Integer) 1:
#line 441 "ml_util.m"
                                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 442 "ml_util.m"
                                break;
#line 442 "ml_util.m"
                            }
#line 437 "ml_util.m"
                          }
#line 436 "ml_util.m"
                          break;
#line 436 "ml_util.m"
                        case (MR_Integer) 1:
#line 435 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 436 "ml_util.m"
                          break;
#line 436 "ml_util.m"
                      }
#line 1998 "ml_backend.ml_util.c"
                    }
#line 430 "ml_util.m"
                  break;
#line 430 "ml_util.m"
                case (MR_Integer) 1:
#line 429 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 430 "ml_util.m"
                  break;
#line 430 "ml_util.m"
              }
#line 425 "ml_util.m"
            }
#line 363 "ml_util.m"
            break;
#line 363 "ml_util.m"
          case (MR_Integer) 5:
#line 449 "ml_util.m"
            {
#line 449 "ml_util.m"
              MR_Word ml_backend__ml_util__Rvals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 450 "ml_util.m"
              {
#line 450 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Rvals_38, ml_backend__ml_util__DataName_5);
              }
#line 449 "ml_util.m"
            }
#line 363 "ml_util.m"
            break;
#line 363 "ml_util.m"
          case (MR_Integer) 6:
#line 455 "ml_util.m"
            {
#line 455 "ml_util.m"
              MR_Word ml_backend__ml_util__Handler_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
#line 455 "ml_util.m"
              MR_Word ml_backend__ml_util__RefContainsVar_41;
#line 455 "ml_util.m"
              MR_Word ml_backend__ml_util__Statement_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 455 "ml_util.m"
              MR_Word ml_backend__ml_util__Ref_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 456 "ml_util.m"
              {
#line 456 "ml_util.m"
                ml_backend__ml_util__RefContainsVar_41 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Ref_46, ml_backend__ml_util__DataName_5);
              }
#line 460 "ml_util.m"
#line 460 "ml_util.m"
              switch (ml_backend__ml_util__RefContainsVar_41) {
#line 460 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 460 "ml_util.m"
                case (MR_Integer) 0:
#line 461 "ml_util.m"
                  {
#line 461 "ml_util.m"
                    MR_Word ml_backend__ml_util__StatementContainsVar_42;

#line 462 "ml_util.m"
                    {
#line 462 "ml_util.m"
                      ml_backend__ml_util__StatementContainsVar_42 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_45, ml_backend__ml_util__DataName_5);
                    }
#line 466 "ml_util.m"
#line 466 "ml_util.m"
                    switch (ml_backend__ml_util__StatementContainsVar_42) {
#line 466 "ml_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 466 "ml_util.m"
                      case (MR_Integer) 0:
#line 468 "ml_util.m"
                        {
#line 468 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Handler_40, ml_backend__ml_util__DataName_5);
                        }
#line 466 "ml_util.m"
                        break;
#line 466 "ml_util.m"
                      case (MR_Integer) 1:
#line 465 "ml_util.m"
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 466 "ml_util.m"
                        break;
#line 466 "ml_util.m"
                    }
#line 461 "ml_util.m"
                  }
#line 460 "ml_util.m"
                  break;
#line 460 "ml_util.m"
                case (MR_Integer) 1:
#line 459 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 460 "ml_util.m"
                  break;
#line 460 "ml_util.m"
              }
#line 455 "ml_util.m"
            }
#line 363 "ml_util.m"
            break;
#line 363 "ml_util.m"
          case (MR_Integer) 7:
#line 452 "ml_util.m"
            {
#line 452 "ml_util.m"
              MR_Word ml_backend__ml_util__Ref_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 453 "ml_util.m"
              {
#line 453 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Ref_39, ml_backend__ml_util__DataName_5);
              }
#line 452 "ml_util.m"
            }
#line 363 "ml_util.m"
            break;
#line 363 "ml_util.m"
          case (MR_Integer) 8:
#line 472 "ml_util.m"
            {
#line 472 "ml_util.m"
              MR_Word ml_backend__ml_util__AtomicStmt_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 507 "ml_util.m"
#line 507 "ml_util.m"
              switch (MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_43)) {
#line 507 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 507 "ml_util.m"
                case (MR_Integer) 0:
#line 538 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 507 "ml_util.m"
                  break;
#line 507 "ml_util.m"
                case (MR_Integer) 1:
#line 508 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 507 "ml_util.m"
                  break;
#line 507 "ml_util.m"
                case (MR_Integer) 2:
#line 512 "ml_util.m"
                  {
#line 512 "ml_util.m"
                    MR_Word ml_backend__ml_util__Lval_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 0)));
#line 512 "ml_util.m"
                    MR_Word ml_backend__ml_util__Rval_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
#line 512 "ml_util.m"
                    MR_Word ml_backend__ml_util__LvalContainsVar_53;

#line 513 "ml_util.m"
                    {
#line 513 "ml_util.m"
                      ml_backend__ml_util__LvalContainsVar_53 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_51, ml_backend__ml_util__DataName_5);
                    }
#line 517 "ml_util.m"
#line 517 "ml_util.m"
                    switch (ml_backend__ml_util__LvalContainsVar_53) {
#line 517 "ml_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 517 "ml_util.m"
                      case (MR_Integer) 0:
#line 519 "ml_util.m"
                        {
#line 519 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_52, ml_backend__ml_util__DataName_5);
                        }
#line 517 "ml_util.m"
                        break;
#line 517 "ml_util.m"
                      case (MR_Integer) 1:
#line 516 "ml_util.m"
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 517 "ml_util.m"
                        break;
#line 517 "ml_util.m"
                    }
#line 512 "ml_util.m"
                  }
#line 507 "ml_util.m"
                  break;
#line 507 "ml_util.m"
                case (MR_Integer) 3:
#line 507 "ml_util.m"
#line 507 "ml_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 0)))) {
#line 507 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 507 "ml_util.m"
                    case (MR_Integer) 0:
#line 512 "ml_util.m"
                      {
#line 512 "ml_util.m"
                        MR_Word ml_backend__ml_util__Lval_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
#line 512 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 512 "ml_util.m"
                        MR_Word ml_backend__ml_util__LvalContainsVar_79;

#line 513 "ml_util.m"
                        {
#line 513 "ml_util.m"
                          ml_backend__ml_util__LvalContainsVar_79 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_77, ml_backend__ml_util__DataName_5);
                        }
#line 517 "ml_util.m"
#line 517 "ml_util.m"
                        switch (ml_backend__ml_util__LvalContainsVar_79) {
#line 517 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 517 "ml_util.m"
                          case (MR_Integer) 0:
#line 519 "ml_util.m"
                            {
#line 519 "ml_util.m"
                              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_78, ml_backend__ml_util__DataName_5);
                            }
#line 517 "ml_util.m"
                            break;
#line 517 "ml_util.m"
                          case (MR_Integer) 1:
#line 516 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 517 "ml_util.m"
                            break;
#line 517 "ml_util.m"
                        }
#line 512 "ml_util.m"
                      }
#line 507 "ml_util.m"
                      break;
#line 507 "ml_util.m"
                    case (MR_Integer) 1:
#line 522 "ml_util.m"
                      {
#line 522 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 523 "ml_util.m"
                        {
#line 523 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_72, ml_backend__ml_util__DataName_5);
                        }
#line 522 "ml_util.m"
                      }
#line 507 "ml_util.m"
                      break;
#line 507 "ml_util.m"
                    case (MR_Integer) 2:
#line 527 "ml_util.m"
                      {
#line 527 "ml_util.m"
                        MR_Word ml_backend__ml_util__Target_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
#line 527 "ml_util.m"
                        MR_Word ml_backend__ml_util__Args_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 7)));
#line 527 "ml_util.m"
                        MR_Word ml_backend__ml_util__TargetContainsVar_64;
#line 525 "ml_util.m"
                        MR_Word ml_backend__ml_util___MaybeTag_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 525 "ml_util.m"
                        MR_Word ml_backend__ml_util___ExplicitSecTag_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 3)));
#line 525 "ml_util.m"
                        MR_Word ml_backend__ml_util___Type_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 4)));
#line 525 "ml_util.m"
                        MR_Word ml_backend__ml_util___MaybeSize_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 5)));
#line 525 "ml_util.m"
                        MR_Word ml_backend__ml_util___MaybeCtorName_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 6)));
#line 525 "ml_util.m"
                        MR_Word ml_backend__ml_util___ArgTypes_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 8)));
#line 525 "ml_util.m"
                        MR_Word ml_backend__ml_util___MayUseAtomic_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 9)));
#line 525 "ml_util.m"
                        MR_Word ml_backend__ml_util___AllocId_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 10)));

#line 528 "ml_util.m"
                        {
#line 528 "ml_util.m"
                          ml_backend__ml_util__TargetContainsVar_64 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Target_54, ml_backend__ml_util__DataName_5);
                        }
#line 532 "ml_util.m"
#line 532 "ml_util.m"
                        switch (ml_backend__ml_util__TargetContainsVar_64) {
#line 532 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 532 "ml_util.m"
                          case (MR_Integer) 0:
#line 534 "ml_util.m"
                            {
#line 534 "ml_util.m"
                              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_60, ml_backend__ml_util__DataName_5);
                            }
#line 532 "ml_util.m"
                            break;
#line 532 "ml_util.m"
                          case (MR_Integer) 1:
#line 531 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 532 "ml_util.m"
                            break;
#line 532 "ml_util.m"
                        }
#line 527 "ml_util.m"
                      }
#line 507 "ml_util.m"
                      break;
#line 507 "ml_util.m"
                    case (MR_Integer) 3:
#line 540 "ml_util.m"
                      {
#line 540 "ml_util.m"
                        MR_Word ml_backend__ml_util__Lval_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 541 "ml_util.m"
                        {
#line 541 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_73, ml_backend__ml_util__DataName_5);
                        }
#line 540 "ml_util.m"
                      }
#line 507 "ml_util.m"
                      break;
#line 507 "ml_util.m"
                    case (MR_Integer) 4:
#line 543 "ml_util.m"
                      {
#line 543 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 544 "ml_util.m"
                        {
#line 544 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_74, ml_backend__ml_util__DataName_5);
                        }
#line 543 "ml_util.m"
                      }
#line 507 "ml_util.m"
                      break;
#line 507 "ml_util.m"
                    case (MR_Integer) 5:
#line 546 "ml_util.m"
                      {
#line 546 "ml_util.m"
                        MR_Word ml_backend__ml_util__TrailOp_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 569 "ml_util.m"
#line 569 "ml_util.m"
                        switch (MR_tag((MR_Word) ml_backend__ml_util__TrailOp_65)) {
#line 569 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 569 "ml_util.m"
                          case (MR_Integer) 0:
#line 578 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 569 "ml_util.m"
                            break;
#line 569 "ml_util.m"
                          case (MR_Integer) 1:
#line 569 "ml_util.m"
                            {
#line 569 "ml_util.m"
                              MR_Word ml_backend__ml_util__Lval_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)));

#line 570 "ml_util.m"
                              {
#line 570 "ml_util.m"
                                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_83, ml_backend__ml_util__DataName_5);
                              }
#line 569 "ml_util.m"
                            }
#line 569 "ml_util.m"
                            break;
#line 569 "ml_util.m"
                          case (MR_Integer) 2:
#line 572 "ml_util.m"
                            {
#line 572 "ml_util.m"
                              MR_Word ml_backend__ml_util__Rval_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)));
#line 572 "ml_util.m"
                              MR_Word ml_backend__ml_util___Reason_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

#line 573 "ml_util.m"
                              {
#line 573 "ml_util.m"
                                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_84, ml_backend__ml_util__DataName_5);
                              }
#line 572 "ml_util.m"
                            }
#line 569 "ml_util.m"
                            break;
#line 569 "ml_util.m"
                          case (MR_Integer) 3:
#line 569 "ml_util.m"
#line 569 "ml_util.m"
                            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)))) {
#line 569 "ml_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 569 "ml_util.m"
                              case (MR_Integer) 0:
#line 580 "ml_util.m"
                                {
#line 580 "ml_util.m"
                                  MR_Word ml_backend__ml_util__Lval_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

#line 581 "ml_util.m"
                                  {
#line 581 "ml_util.m"
                                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_86, ml_backend__ml_util__DataName_5);
                                  }
#line 580 "ml_util.m"
                                }
#line 569 "ml_util.m"
                                break;
#line 569 "ml_util.m"
                              case (MR_Integer) 1:
#line 583 "ml_util.m"
                                {
#line 583 "ml_util.m"
                                  MR_Word ml_backend__ml_util__Rval_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

#line 584 "ml_util.m"
                                  {
#line 584 "ml_util.m"
                                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_87, ml_backend__ml_util__DataName_5);
                                  }
#line 583 "ml_util.m"
                                }
#line 569 "ml_util.m"
                                break;
#line 569 "ml_util.m"
                            }
#line 569 "ml_util.m"
                            break;
#line 569 "ml_util.m"
                        }
#line 546 "ml_util.m"
                      }
#line 507 "ml_util.m"
                      break;
#line 507 "ml_util.m"
                    case (MR_Integer) 6:
#line 549 "ml_util.m"
                      {
#line 549 "ml_util.m"
                        MR_Word ml_backend__ml_util__Components_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 549 "ml_util.m"
                        MR_Word ml_backend__ml_util___Lang_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 550 "ml_util.m"
                        {
#line 550 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__target_code_components_contains_var_2_f_0(ml_backend__ml_util__Components_67, ml_backend__ml_util__DataName_5);
                        }
#line 549 "ml_util.m"
                      }
#line 507 "ml_util.m"
                      break;
#line 507 "ml_util.m"
                    case (MR_Integer) 7:
#line 553 "ml_util.m"
                      {
#line 553 "ml_util.m"
                        MR_Word ml_backend__ml_util__OutlineArgs_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 553 "ml_util.m"
                        MR_Word ml_backend__ml_util__ReturnLvals_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 3)));
#line 553 "ml_util.m"
                        MR_Word ml_backend__ml_util__OutlineArgsContainVar_71;
#line 552 "ml_util.m"
                        MR_String ml_backend__ml_util___Code_70 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 4)));
#line 552 "ml_util.m"
                        MR_Word ml_backend__ml_util___Lang_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 554 "ml_util.m"
                        {
#line 554 "ml_util.m"
                          ml_backend__ml_util__OutlineArgsContainVar_71 = ml_backend__ml_util__outline_args_contains_var_2_f_0(ml_backend__ml_util__OutlineArgs_68, ml_backend__ml_util__DataName_5);
                        }
#line 559 "ml_util.m"
#line 559 "ml_util.m"
                        switch (ml_backend__ml_util__OutlineArgsContainVar_71) {
#line 559 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 559 "ml_util.m"
                          case (MR_Integer) 0:
#line 561 "ml_util.m"
                            {
#line 561 "ml_util.m"
                              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__ReturnLvals_69, ml_backend__ml_util__DataName_5);
                            }
#line 559 "ml_util.m"
                            break;
#line 559 "ml_util.m"
                          case (MR_Integer) 1:
#line 558 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 559 "ml_util.m"
                            break;
#line 559 "ml_util.m"
                        }
#line 553 "ml_util.m"
                      }
#line 507 "ml_util.m"
                      break;
#line 507 "ml_util.m"
                  }
#line 507 "ml_util.m"
                  break;
#line 507 "ml_util.m"
              }
#line 472 "ml_util.m"
            }
#line 363 "ml_util.m"
            break;
#line 363 "ml_util.m"
        }
#line 363 "ml_util.m"
        break;
#line 363 "ml_util.m"
    }
#line 363 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 363 "ml_util.m"
  }
#line 359 "ml_util.m"
}

#line 349 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
#line 349 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 349 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_2)
#line 349 "ml_util.m"
{
#line 351 "ml_util.m"
  {
#line 351 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 351 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 351 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 351 "ml_util.m"
    else
#line 352 "ml_util.m"
      {
#line 352 "ml_util.m"
        MR_Word ml_backend__ml_util__Statement_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 352 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 356 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 357 "ml_util.m"
        {
#line 357 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_2);
        }
#line 352 "ml_util.m"
      }
#line 351 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 351 "ml_util.m"
  }
#line 349 "ml_util.m"
}

#line 336 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__statements_contains_var_2_f_0(
#line 336 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 336 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 336 "ml_util.m"
{
#line 338 "ml_util.m"
  while (MR_TRUE)
#line 338 "ml_util.m"
    {
#line 338 "ml_util.m"
      /* tailcall optimized into a loop */
#line 338 "ml_util.m"
      {
#line 338 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 338 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 338 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 338 "ml_util.m"
        else
#line 339 "ml_util.m"
          {
#line 339 "ml_util.m"
            MR_Word ml_backend__ml_util__Statement_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 339 "ml_util.m"
            MR_Word ml_backend__ml_util__Statements_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 339 "ml_util.m"
            MR_Word ml_backend__ml_util__StatementContainsVar_9;
#line 339 "ml_util.m"
            MR_Word ml_backend__ml_util__Stmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 356 "ml_util.m"
            MR_Word ml_backend__ml_util___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 357 "ml_util.m"
            {
#line 357 "ml_util.m"
              ml_backend__ml_util__StatementContainsVar_9 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_13, ml_backend__ml_util__HeadVar__2_2);
            }
#line 344 "ml_util.m"
#line 344 "ml_util.m"
            switch (ml_backend__ml_util__StatementContainsVar_9) {
#line 344 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 344 "ml_util.m"
              case (MR_Integer) 0:
#line 346 "ml_util.m"
                {
#line 346 "ml_util.m"
                  /* direct tailcall eliminated */
#line 346 "ml_util.m"
                  {
#line 346 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Statements_6;

#line 346 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 346 "ml_util.m"
                  }
#line 346 "ml_util.m"
                  continue;
#line 346 "ml_util.m"
                }
#line 344 "ml_util.m"
                break;
#line 344 "ml_util.m"
              case (MR_Integer) 1:
#line 343 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 344 "ml_util.m"
                break;
#line 344 "ml_util.m"
            }
#line 339 "ml_util.m"
          }
#line 338 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 338 "ml_util.m"
      }
#line 338 "ml_util.m"
      break;
#line 338 "ml_util.m"
    }
#line 336 "ml_util.m"
}

#line 317 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__default_contains_statement_2_p_0(
#line 317 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 317 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_2,
#line 317 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 317 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 317 "ml_util.m"
{
#line 2679 "ml_backend.ml_util.c"
  {
#line 2681 "ml_backend.ml_util.c"
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2683 "ml_backend.ml_util.c"
    MR_Word ml_backend__ml_util__Statement_5;

#line 2686 "ml_backend.ml_util.c"
    if (ml_backend__ml_util__succeeded)
#line 2688 "ml_backend.ml_util.c"
      {
#line 2690 "ml_backend.ml_util.c"
        ml_backend__ml_util__Statement_5 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__HeadVar__1_1), (MR_Integer) 1);
#line 270 "ml_util.m"
        *ml_backend__ml_util__SubStatement_2 = ml_backend__ml_util__Statement_5;
#line 270 "ml_util.m"
        {
#line 270 "ml_util.m"
          ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
        }
#line 271 "ml_util.m"
        {
#line 271 "ml_util.m"
          MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 272 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 273 "ml_util.m"
          {
#line 273 "ml_util.m"
            ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__SubStatement_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
          }
#line 271 "ml_util.m"
        }
#line 2713 "ml_backend.ml_util.c"
      }
#line 2715 "ml_backend.ml_util.c"
  }
#line 317 "ml_util.m"
}

#line 313 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_2(
#line 313 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 313 "ml_util.m"
{
#line 313 "ml_util.m"
  {
#line 313 "ml_util.m"
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 313 "ml_util.m"
    (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5 = ((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5);
#line 313 "ml_util.m"
    {
#line 313 "ml_util.m"
      ml_backend__ml_util__cases_contains_statement_2_p_0_1(ml_backend__ml_util__env_ptr);
    }
#line 313 "ml_util.m"
  }
#line 313 "ml_util.m"
}

#line 312 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_1(
#line 312 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 312 "ml_util.m"
{
#line 312 "ml_util.m"
  {
#line 312 "ml_util.m"
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 312 "ml_util.m"
    {
#line 314 "ml_util.m"
      MR_Word ml_backend__ml_util___FirstCond_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 0)));
#line 314 "ml_util.m"
      MR_Word ml_backend__ml_util___LaterConds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 1)));

#line 314 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 2)));
#line 270 "ml_util.m"
      *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4) = (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8;
#line 270 "ml_util.m"
      {
#line 270 "ml_util.m"
        ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr);
      }
#line 271 "ml_util.m"
      {
#line 271 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8, (MR_Integer) 0)));
#line 272 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8, (MR_Integer) 1)));

#line 273 "ml_util.m"
        {
#line 273 "ml_util.m"
          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_13, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr);
        }
#line 271 "ml_util.m"
      }
#line 312 "ml_util.m"
    }
#line 312 "ml_util.m"
  }
#line 312 "ml_util.m"
}

#line 309 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0(
#line 309 "ml_util.m"
  MR_Word ml_backend__ml_util__Cases_3,
#line 309 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 309 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 309 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 309 "ml_util.m"
{
#line 309 "ml_util.m"
  {
#line 309 "ml_util.m"
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s ml_backend__ml_util__env;

#line 309 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4 = ml_backend__ml_util__SubStatement_4;
#line 309 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont = ml_backend__ml_util__cont;
#line 309 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 312 "ml_util.m"
    {
#line 312 "ml_util.m"
      MR_bool ml_backend__ml_util__succeeded;

#line 313 "ml_util.m"
      {
#line 313 "ml_util.m"
        mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, &(ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5, ml_backend__ml_util__Cases_3, ml_backend__ml_util__cases_contains_statement_2_p_0_2, &ml_backend__ml_util__env);
      }
#line 312 "ml_util.m"
    }
#line 309 "ml_util.m"
  }
#line 309 "ml_util.m"
}

#line 263 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(
#line 263 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 263 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
#line 263 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 263 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 263 "ml_util.m"
{
#line 2847 "ml_backend.ml_util.c"
  {
#line 2849 "ml_backend.ml_util.c"
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2851 "ml_backend.ml_util.c"
    MR_Word ml_backend__ml_util__Statement_4;

#line 2854 "ml_backend.ml_util.c"
    if (ml_backend__ml_util__succeeded)
#line 2856 "ml_backend.ml_util.c"
      {
#line 2858 "ml_backend.ml_util.c"
        ml_backend__ml_util__Statement_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 270 "ml_util.m"
        *ml_backend__ml_util__HeadVar__2_2 = ml_backend__ml_util__Statement_4;
#line 270 "ml_util.m"
        {
#line 270 "ml_util.m"
          ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
        }
#line 271 "ml_util.m"
        {
#line 271 "ml_util.m"
          MR_Word ml_backend__ml_util__Stmt_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 0)));
#line 272 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 1)));

#line 273 "ml_util.m"
          {
#line 273 "ml_util.m"
            ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_10, ml_backend__ml_util__HeadVar__2_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
          }
#line 271 "ml_util.m"
        }
#line 2881 "ml_backend.ml_util.c"
      }
#line 2883 "ml_backend.ml_util.c"
  }
#line 263 "ml_util.m"
}

#line 260 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_2(
#line 260 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 260 "ml_util.m"
{
#line 260 "ml_util.m"
  {
#line 260 "ml_util.m"
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 260 "ml_util.m"
    (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5 = ((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5);
#line 260 "ml_util.m"
    {
#line 260 "ml_util.m"
      ml_backend__ml_util__statements_contains_statement_2_p_0_1(ml_backend__ml_util__env_ptr);
    }
#line 260 "ml_util.m"
  }
#line 260 "ml_util.m"
}

#line 259 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_1(
#line 259 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 259 "ml_util.m"
{
#line 259 "ml_util.m"
  {
#line 259 "ml_util.m"
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 270 "ml_util.m"
    {
#line 270 "ml_util.m"
      *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4) = (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5;
#line 270 "ml_util.m"
      {
#line 270 "ml_util.m"
        ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr);
      }
#line 270 "ml_util.m"
    }
#line 271 "ml_util.m"
    {
#line 271 "ml_util.m"
      MR_Word ml_backend__ml_util__Stmt_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5, (MR_Integer) 0)));
#line 272 "ml_util.m"
      MR_Word ml_backend__ml_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5, (MR_Integer) 1)));

#line 273 "ml_util.m"
      {
#line 273 "ml_util.m"
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_10, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr);
      }
#line 271 "ml_util.m"
    }
#line 259 "ml_util.m"
  }
#line 259 "ml_util.m"
}

#line 256 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0(
#line 256 "ml_util.m"
  MR_Word ml_backend__ml_util__Statements_3,
#line 256 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 256 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 256 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 256 "ml_util.m"
{
#line 256 "ml_util.m"
  {
#line 256 "ml_util.m"
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s ml_backend__ml_util__env;

#line 256 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4 = ml_backend__ml_util__SubStatement_4;
#line 256 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont = ml_backend__ml_util__cont;
#line 256 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 259 "ml_util.m"
    {
#line 259 "ml_util.m"
      MR_bool ml_backend__ml_util__succeeded;

#line 260 "ml_util.m"
      {
#line 260 "ml_util.m"
        mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, &(ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5, ml_backend__ml_util__Statements_3, ml_backend__ml_util__statements_contains_statement_2_p_0_2, &ml_backend__ml_util__env);
      }
#line 259 "ml_util.m"
    }
#line 256 "ml_util.m"
  }
#line 256 "ml_util.m"
}

#line 183 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__wrap_init_obj_1_f_0(
#line 183 "ml_util.m"
  MR_Word ml_backend__ml_util__Rval_3)
#line 183 "ml_util.m"
{
#line 970 "ml_util.m"
  {
#line 970 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 970 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;

#line 970 "ml_util.m"
    {
#line 970 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 970 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_3));
#line 970 "ml_util.m"
    }
#line 970 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 970 "ml_util.m"
  }
#line 183 "ml_util.m"
}

#line 180 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_reserved_address_2_f_0(
#line 180 "ml_util.m"
  MR_Word ml_backend__ml_util__ModuleInfo_4,
#line 180 "ml_util.m"
  MR_Word ml_backend__ml_util__ReservedAddress_5)
#line 180 "ml_util.m"
{
#line 965 "ml_util.m"
  {
#line 965 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 965 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 965 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;

#line 967 "ml_util.m"
    {
#line 967 "ml_util.m"
      ml_backend__ml_util__V_6_6 = ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(ml_backend__ml_util__ModuleInfo_4, ml_backend__ml_util__ReservedAddress_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
    }
#line 967 "ml_util.m"
    {
#line 967 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 967 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 967 "ml_util.m"
    }
#line 965 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 965 "ml_util.m"
  }
#line 180 "ml_util.m"
}

#line 178 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_boxed_int_1_f_0(
#line 178 "ml_util.m"
  MR_Integer ml_backend__ml_util__Int_3)
#line 178 "ml_util.m"
{
#line 962 "ml_util.m"
  {
#line 962 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 962 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 962 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 962 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 962 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;

#line 963 "ml_util.m"
    {
#line 963 "ml_util.m"
      ml_backend__ml_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 963 "ml_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__V_8_8, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
#line 963 "ml_util.m"
    }
#line 963 "ml_util.m"
    {
#line 963 "ml_util.m"
      ml_backend__ml_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 963 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 1) = ((MR_Box) (ml_backend__ml_util__V_8_8));
#line 963 "ml_util.m"
    }
#line 963 "ml_util.m"
    {
#line 963 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 963 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 963 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (&ml_backend__ml_util_scalar_common_3[2]));
#line 963 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 2) = ((MR_Box) (ml_backend__ml_util__V_7_7));
#line 963 "ml_util.m"
    }
#line 963 "ml_util.m"
    {
#line 963 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 963 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 963 "ml_util.m"
    }
#line 962 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 962 "ml_util.m"
  }
#line 178 "ml_util.m"
}

#line 176 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_bool_1_f_0(
#line 176 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1)
#line 176 "ml_util.m"
{
#line 959 "ml_util.m"
  {
#line 959 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 959 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;

#line 959 "ml_util.m"
#line 959 "ml_util.m"
    switch (ml_backend__ml_util__HeadVar__1_1) {
#line 959 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 959 "ml_util.m"
      case (MR_Integer) 0:
#line 959 "ml_util.m"
        {
#line 959 "ml_util.m"
          ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[0]);
#line 959 "ml_util.m"
        }
#line 959 "ml_util.m"
        break;
#line 959 "ml_util.m"
      case (MR_Integer) 1:
#line 960 "ml_util.m"
        {
#line 960 "ml_util.m"
          ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[1]);
#line 960 "ml_util.m"
        }
#line 959 "ml_util.m"
        break;
#line 959 "ml_util.m"
    }
#line 959 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 959 "ml_util.m"
  }
#line 176 "ml_util.m"
}

#line 174 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_int_1_f_0(
#line 174 "ml_util.m"
  MR_Integer ml_backend__ml_util__Int_3)
#line 174 "ml_util.m"
{
#line 954 "ml_util.m"
  {
#line 954 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 954 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 954 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 954 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 954 "ml_util.m"
    {
#line 954 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 954 "ml_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
#line 954 "ml_util.m"
    }
#line 954 "ml_util.m"
    {
#line 954 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 954 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 954 "ml_util.m"
    }
#line 954 "ml_util.m"
    {
#line 954 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 954 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 954 "ml_util.m"
    }
#line 954 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 954 "ml_util.m"
  }
#line 174 "ml_util.m"
}

#line 172 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_foreign_2_f_0(
#line 172 "ml_util.m"
  MR_Word ml_backend__ml_util__Lang_4,
#line 172 "ml_util.m"
  MR_String ml_backend__ml_util__String_5)
#line 172 "ml_util.m"
{
#line 956 "ml_util.m"
  {
#line 956 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 956 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 956 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;
#line 956 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;

#line 957 "ml_util.m"
    {
#line 957 "ml_util.m"
      ml_backend__ml_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 957 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 957 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 1) = ((MR_Box) (ml_backend__ml_util__Lang_4));
#line 957 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 2) = ((MR_Box) (ml_backend__ml_util__String_5));
#line 957 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 957 "ml_util.m"
    }
#line 957 "ml_util.m"
    {
#line 957 "ml_util.m"
      ml_backend__ml_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 957 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_6_6, 1) = ((MR_Box) (ml_backend__ml_util__V_7_7));
#line 957 "ml_util.m"
    }
#line 957 "ml_util.m"
    {
#line 957 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 957 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 957 "ml_util.m"
    }
#line 956 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 956 "ml_util.m"
  }
#line 172 "ml_util.m"
}

#line 170 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_string_1_f_0(
#line 170 "ml_util.m"
  MR_String ml_backend__ml_util__String_3)
#line 170 "ml_util.m"
{
#line 952 "ml_util.m"
  {
#line 952 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 952 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 952 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 952 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 952 "ml_util.m"
    {
#line 952 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 952 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 1) = ((MR_Box) (ml_backend__ml_util__String_3));
#line 952 "ml_util.m"
    }
#line 952 "ml_util.m"
    {
#line 952 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 952 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 952 "ml_util.m"
    }
#line 952 "ml_util.m"
    {
#line 952 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 952 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 952 "ml_util.m"
    }
#line 952 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 952 "ml_util.m"
  }
#line 170 "ml_util.m"
}

#line 168 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_null_pointer_1_f_0(
#line 168 "ml_util.m"
  MR_Word ml_backend__ml_util__Type_3)
#line 168 "ml_util.m"
{
#line 950 "ml_util.m"
  {
#line 950 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 950 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 950 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 950 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 950 "ml_util.m"
    {
#line 950 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 950 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 1) = ((MR_Box) (ml_backend__ml_util__Type_3));
#line 950 "ml_util.m"
    }
#line 950 "ml_util.m"
    {
#line 950 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 950 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 950 "ml_util.m"
    }
#line 950 "ml_util.m"
    {
#line 950 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 950 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 950 "ml_util.m"
    }
#line 950 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 950 "ml_util.m"
  }
#line 168 "ml_util.m"
}

#line 165 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_maybe_3_f_0(
#line 165 "ml_util.m"
  MR_Word ml_backend__ml_util__TypeInfo_for_T_10,
#line 165 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 165 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2,
#line 165 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__3_3)
#line 165 "ml_util.m"
{
#line 947 "ml_util.m"
  {
#line 947 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 947 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__4_4;

#line 947 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 950 "ml_util.m"
      {
#line 950 "ml_util.m"
        MR_Word ml_backend__ml_util__V_12_12;
#line 950 "ml_util.m"
        MR_Word ml_backend__ml_util__V_13_13;

#line 950 "ml_util.m"
        {
#line 950 "ml_util.m"
          ml_backend__ml_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 950 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_13_13, 1) = ((MR_Box) (ml_backend__ml_util__HeadVar__1_1));
#line 950 "ml_util.m"
        }
#line 950 "ml_util.m"
        {
#line 950 "ml_util.m"
          ml_backend__ml_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 950 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_12_12, 1) = ((MR_Box) (ml_backend__ml_util__V_13_13));
#line 950 "ml_util.m"
        }
#line 950 "ml_util.m"
        {
#line 950 "ml_util.m"
          ml_backend__ml_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 950 "ml_util.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__ml_util__V_12_12));
#line 950 "ml_util.m"
        }
#line 950 "ml_util.m"
      }
#line 947 "ml_util.m"
    else
#line 947 "ml_util.m"
      {
#line 947 "ml_util.m"
        MR_Box ml_backend__ml_util__X_7 = (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, (MR_Integer) 0));
#line 947 "ml_util.m"
        MR_Box MR_CALL (* ml_backend__ml_util__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 947 "ml_util.m"
        MR_Box ml_backend__ml_util__conv1_HeadVar__4_4;

#line 947 "ml_util.m"
        {
#line 947 "ml_util.m"
          ml_backend__ml_util__conv1_HeadVar__4_4 = ml_backend__ml_util__func_0(((MR_Box) ml_backend__ml_util__HeadVar__2_2), ml_backend__ml_util__X_7);
        }
#line 947 "ml_util.m"
        ml_backend__ml_util__HeadVar__4_4 = ((MR_Word) ml_backend__ml_util__conv1_HeadVar__4_4);
#line 947 "ml_util.m"
      }
#line 947 "ml_util.m"
    return ml_backend__ml_util__HeadVar__4_4;
#line 947 "ml_util.m"
  }
#line 165 "ml_util.m"
}

#line 163 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_array_2_f_0(
#line 163 "ml_util.m"
  MR_Word ml_backend__ml_util__TypeInfo_for_T_7,
#line 163 "ml_util.m"
  MR_Word ml_backend__ml_util__Conv_4,
#line 163 "ml_util.m"
  MR_Word ml_backend__ml_util__List_5)
#line 163 "ml_util.m"
{
#line 945 "ml_util.m"
  {
#line 945 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 945 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 945 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;

#line 945 "ml_util.m"
    {
#line 945 "ml_util.m"
      ml_backend__ml_util__V_6_6 = mercury__list__map_2_f_0(ml_backend__ml_util__TypeInfo_for_T_7, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_util__Conv_4, ml_backend__ml_util__List_5);
    }
#line 945 "ml_util.m"
    {
#line 945 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 945 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 945 "ml_util.m"
    }
#line 945 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 945 "ml_util.m"
  }
#line 163 "ml_util.m"
}

#line 161 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_builtin_const_1_f_0(
#line 161 "ml_util.m"
  MR_String ml_backend__ml_util__Name_3)
#line 161 "ml_util.m"
{
#line 935 "ml_util.m"
  {
#line 935 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 935 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 935 "ml_util.m"
    MR_Word ml_backend__ml_util__Rval_4;
#line 935 "ml_util.m"
    MR_Word ml_backend__ml_util__PrivateBuiltin_5;
#line 935 "ml_util.m"
    MR_Word ml_backend__ml_util__MLDS_Module_6;
#line 935 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 935 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 935 "ml_util.m"
    MR_Word ml_backend__ml_util__V_11_11;

#line 936 "ml_util.m"
    {
#line 936 "ml_util.m"
      ml_backend__ml_util__PrivateBuiltin_5 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 937 "ml_util.m"
    {
#line 937 "ml_util.m"
      ml_backend__ml_util__MLDS_Module_6 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_util__PrivateBuiltin_5);
    }
#line 943 "ml_util.m"
    {
#line 943 "ml_util.m"
      ml_backend__ml_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 943 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_11_11, 0) = ((MR_Box) (ml_backend__ml_util__Name_3));
#line 943 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "ml_util.m"
    }
#line 942 "ml_util.m"
    {
#line 942 "ml_util.m"
      ml_backend__ml_util__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 942 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 0) = ((MR_Box) (ml_backend__ml_util__MLDS_Module_6));
#line 942 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 1) = ((MR_Box) ((MR_Integer) 0));
#line 942 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 2) = ((MR_Box) (ml_backend__ml_util__V_11_11));
#line 942 "ml_util.m"
    }
#line 942 "ml_util.m"
    {
#line 942 "ml_util.m"
      ml_backend__ml_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_8_8, 0) = ((MR_Box) (ml_backend__ml_util__V_9_9));
#line 942 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 942 "ml_util.m"
    }
#line 942 "ml_util.m"
    {
#line 942 "ml_util.m"
      ml_backend__ml_util__Rval_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 942 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, 0) = ((MR_Box) (ml_backend__ml_util__V_8_8));
#line 942 "ml_util.m"
    }
#line 935 "ml_util.m"
    {
#line 935 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 935 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_4));
#line 935 "ml_util.m"
    }
#line 935 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 935 "ml_util.m"
  }
#line 161 "ml_util.m"
}

#line 153 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__lval_contains_var_2_f_0(
#line 153 "ml_util.m"
  MR_Word ml_backend__ml_util__Lval_4,
#line 153 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 153 "ml_util.m"
{
#line 915 "ml_util.m"
  {
#line 915 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 915 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 915 "ml_util.m"
#line 915 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Lval_4)) {
#line 915 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 915 "ml_util.m"
      case (MR_Integer) 0:
#line 915 "ml_util.m"
        {
#line 915 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
#line 915 "ml_util.m"
          MR_Word ml_backend__ml_util___MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 915 "ml_util.m"
          MR_Word ml_backend__ml_util___FieldId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 2)));
#line 915 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 3)));
#line 915 "ml_util.m"
          MR_Word ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 4)));

#line 916 "ml_util.m"
          {
#line 916 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_8, ml_backend__ml_util__DataName_5);
          }
#line 915 "ml_util.m"
        }
#line 915 "ml_util.m"
        break;
#line 915 "ml_util.m"
      case (MR_Integer) 1:
#line 918 "ml_util.m"
        {
#line 918 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 918 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));

#line 919 "ml_util.m"
          {
#line 919 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_19, ml_backend__ml_util__DataName_5);
          }
#line 918 "ml_util.m"
        }
#line 915 "ml_util.m"
        break;
#line 915 "ml_util.m"
      case (MR_Integer) 2:
#line 922 "ml_util.m"
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 915 "ml_util.m"
        break;
#line 915 "ml_util.m"
      case (MR_Integer) 3:
#line 924 "ml_util.m"
        {
#line 924 "ml_util.m"
          MR_Word ml_backend__ml_util__ModuleName_14;
#line 924 "ml_util.m"
          MR_Word ml_backend__ml_util__QualKind_15;
#line 924 "ml_util.m"
          MR_Word ml_backend__ml_util__Name_16;
#line 924 "ml_util.m"
          MR_Word ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 924 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
#line 926 "ml_util.m"
          MR_Word ml_backend__ml_util__V_18_18;
#line 926 "ml_util.m"
          MR_Word ml_backend__ml_util__V_22_22;
#line 926 "ml_util.m"
          MR_Word ml_backend__ml_util__V_23_23;
#line 926 "ml_util.m"
          MR_Word ml_backend__ml_util__V_24_24;

#line 924 "ml_util.m"
          ml_backend__ml_util__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 0)));
#line 924 "ml_util.m"
          ml_backend__ml_util__QualKind_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 1)));
#line 924 "ml_util.m"
          ml_backend__ml_util__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 2)));
#line 926 "ml_util.m"
          ml_backend__ml_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
#line 926 "ml_util.m"
          ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));
#line 926 "ml_util.m"
          ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
#line 926 "ml_util.m"
          {
#line 926 "ml_util.m"
            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_14, ml_backend__ml_util__V_22_22);
          }
#line 926 "ml_util.m"
          if (ml_backend__ml_util__succeeded)
#line 926 "ml_util.m"
            {
#line 926 "ml_util.m"
              ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_15 == ml_backend__ml_util__V_23_23);
#line 926 "ml_util.m"
              if (ml_backend__ml_util__succeeded)
#line 926 "ml_util.m"
                {
#line 926 "ml_util.m"
                  ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 926 "ml_util.m"
                  if (ml_backend__ml_util__succeeded)
#line 926 "ml_util.m"
                    {
#line 926 "ml_util.m"
                      ml_backend__ml_util__V_24_24 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_18_18), (MR_Integer) 1);
#line 926 "ml_util.m"
                      {
#line 926 "ml_util.m"
                        ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_util__Name_16, ml_backend__ml_util__V_24_24);
                      }
#line 926 "ml_util.m"
                    }
#line 926 "ml_util.m"
                }
#line 926 "ml_util.m"
            }
#line 926 "ml_util.m"
          if (ml_backend__ml_util__succeeded)
#line 927 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 926 "ml_util.m"
          else
#line 929 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 924 "ml_util.m"
        }
#line 915 "ml_util.m"
        break;
#line 915 "ml_util.m"
    }
#line 915 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 915 "ml_util.m"
  }
#line 153 "ml_util.m"
}

#line 151 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__lvals_contains_var_2_f_0(
#line 151 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 151 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 151 "ml_util.m"
{
#line 902 "ml_util.m"
  while (MR_TRUE)
#line 902 "ml_util.m"
    {
#line 902 "ml_util.m"
      /* tailcall optimized into a loop */
#line 902 "ml_util.m"
      {
#line 902 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 902 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 902 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 902 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 902 "ml_util.m"
        else
#line 903 "ml_util.m"
          {
#line 903 "ml_util.m"
            MR_Word ml_backend__ml_util__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 903 "ml_util.m"
            MR_Word ml_backend__ml_util__Lvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 903 "ml_util.m"
            MR_Word ml_backend__ml_util__LvalContainsVar_9;

#line 904 "ml_util.m"
            {
#line 904 "ml_util.m"
              ml_backend__ml_util__LvalContainsVar_9 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 908 "ml_util.m"
#line 908 "ml_util.m"
            switch (ml_backend__ml_util__LvalContainsVar_9) {
#line 908 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 908 "ml_util.m"
              case (MR_Integer) 0:
#line 910 "ml_util.m"
                {
#line 910 "ml_util.m"
                  /* direct tailcall eliminated */
#line 910 "ml_util.m"
                  {
#line 910 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Lvals_6;

#line 910 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 910 "ml_util.m"
                  }
#line 910 "ml_util.m"
                  continue;
#line 910 "ml_util.m"
                }
#line 908 "ml_util.m"
                break;
#line 908 "ml_util.m"
              case (MR_Integer) 1:
#line 907 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 908 "ml_util.m"
                break;
#line 908 "ml_util.m"
            }
#line 903 "ml_util.m"
          }
#line 902 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 902 "ml_util.m"
      }
#line 902 "ml_util.m"
      break;
#line 902 "ml_util.m"
    }
#line 151 "ml_util.m"
}

#line 149 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__rval_contains_var_2_f_0(
#line 149 "ml_util.m"
  MR_Word ml_backend__ml_util__Rval_4,
#line 149 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 149 "ml_util.m"
{
#line 843 "ml_util.m"
  while (MR_TRUE)
#line 843 "ml_util.m"
    {
#line 843 "ml_util.m"
      /* tailcall optimized into a loop */
#line 843 "ml_util.m"
      {
#line 843 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 843 "ml_util.m"
        MR_Word ml_backend__ml_util__ContainsVar_6;

#line 843 "ml_util.m"
#line 843 "ml_util.m"
        switch (MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) {
#line 843 "ml_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 843 "ml_util.m"
          case (MR_Integer) 0:
#line 893 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 843 "ml_util.m"
            break;
#line 843 "ml_util.m"
          case (MR_Integer) 1:
#line 843 "ml_util.m"
            {
#line 843 "ml_util.m"
              MR_Word ml_backend__ml_util__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

#line 844 "ml_util.m"
              {
#line 844 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_7, ml_backend__ml_util__DataName_5);
              }
#line 843 "ml_util.m"
            }
#line 843 "ml_util.m"
            break;
#line 843 "ml_util.m"
          case (MR_Integer) 2:
#line 846 "ml_util.m"
            {
#line 846 "ml_util.m"
              MR_Word ml_backend__ml_util__SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));
#line 846 "ml_util.m"
              MR_Integer ml_backend__ml_util___Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

#line 847 "ml_util.m"
              /* direct tailcall eliminated */
#line 847 "ml_util.m"
              {
#line 847 "ml_util.m"
                MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__SubRval_9;

#line 847 "ml_util.m"
                ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 847 "ml_util.m"
              }
#line 847 "ml_util.m"
              continue;
#line 846 "ml_util.m"
            }
#line 843 "ml_util.m"
            break;
#line 843 "ml_util.m"
          case (MR_Integer) 3:
#line 843 "ml_util.m"
#line 843 "ml_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) {
#line 843 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 843 "ml_util.m"
              case (MR_Integer) 0:
#line 849 "ml_util.m"
                {
#line 849 "ml_util.m"
                  MR_Word ml_backend__ml_util__Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 859 "ml_util.m"
#line 859 "ml_util.m"
                  switch (MR_tag((MR_Word) ml_backend__ml_util__Const_10)) {
#line 859 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 859 "ml_util.m"
                    case (MR_Integer) 0:
#line 873 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 859 "ml_util.m"
                      break;
#line 859 "ml_util.m"
                    case (MR_Integer) 1:
#line 851 "ml_util.m"
                      {
#line 851 "ml_util.m"
                        MR_Word ml_backend__ml_util__DataAddr_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Const_10), (MR_Integer) 1);
#line 851 "ml_util.m"
                        MR_Word ml_backend__ml_util__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataAddr_11, (MR_Integer) 0)));
#line 851 "ml_util.m"
                        MR_Word ml_backend__ml_util__RawDataName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataAddr_11, (MR_Integer) 1)));
#line 853 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
#line 853 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
#line 853 "ml_util.m"
                        MR_Word ml_backend__ml_util___QualKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));

#line 853 "ml_util.m"
                        {
#line 853 "ml_util.m"
                          ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_12, ml_backend__ml_util__V_40_40);
                        }
#line 853 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 853 "ml_util.m"
                          {
#line 853 "ml_util.m"
                            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__RawDataName_13, ml_backend__ml_util__V_41_41);
                          }
#line 853 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 855 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 853 "ml_util.m"
                        else
#line 857 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 851 "ml_util.m"
                      }
#line 859 "ml_util.m"
                      break;
#line 859 "ml_util.m"
                    case (MR_Integer) 2:
#line 873 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 859 "ml_util.m"
                      break;
#line 859 "ml_util.m"
                    case (MR_Integer) 3:
#line 873 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 859 "ml_util.m"
                      break;
#line 859 "ml_util.m"
                  }
#line 849 "ml_util.m"
                }
#line 843 "ml_util.m"
                break;
#line 843 "ml_util.m"
              case (MR_Integer) 1:
#line 876 "ml_util.m"
                {
#line 876 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 876 "ml_util.m"
                  MR_Word ml_backend__ml_util___Op_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 877 "ml_util.m"
                  /* direct tailcall eliminated */
#line 877 "ml_util.m"
                  {
#line 877 "ml_util.m"
                    MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__RvalA_29;

#line 877 "ml_util.m"
                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 877 "ml_util.m"
                  }
#line 877 "ml_util.m"
                  continue;
#line 876 "ml_util.m"
                }
#line 843 "ml_util.m"
                break;
#line 843 "ml_util.m"
              case (MR_Integer) 2:
#line 879 "ml_util.m"
                {
#line 879 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 3)));
#line 879 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalAContainsVar_31;
#line 879 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 879 "ml_util.m"
                  MR_Word ml_backend__ml_util___Op_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 880 "ml_util.m"
                  {
#line 880 "ml_util.m"
                    ml_backend__ml_util__RvalAContainsVar_31 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__RvalA_38, ml_backend__ml_util__DataName_5);
                  }
#line 884 "ml_util.m"
#line 884 "ml_util.m"
                  switch (ml_backend__ml_util__RvalAContainsVar_31) {
#line 884 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 884 "ml_util.m"
                    case (MR_Integer) 0:
#line 886 "ml_util.m"
                      {
#line 886 "ml_util.m"
                        /* direct tailcall eliminated */
#line 886 "ml_util.m"
                        {
#line 886 "ml_util.m"
                          MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__RvalB_30;

#line 886 "ml_util.m"
                          ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 886 "ml_util.m"
                        }
#line 886 "ml_util.m"
                        continue;
#line 886 "ml_util.m"
                      }
#line 884 "ml_util.m"
                      break;
#line 884 "ml_util.m"
                    case (MR_Integer) 1:
#line 883 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 884 "ml_util.m"
                      break;
#line 884 "ml_util.m"
                  }
#line 879 "ml_util.m"
                }
#line 843 "ml_util.m"
                break;
#line 843 "ml_util.m"
              case (MR_Integer) 3:
#line 889 "ml_util.m"
                {
#line 889 "ml_util.m"
                  MR_Word ml_backend__ml_util__Lval_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 890 "ml_util.m"
                  {
#line 890 "ml_util.m"
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_39, ml_backend__ml_util__DataName_5);
                  }
#line 889 "ml_util.m"
                }
#line 843 "ml_util.m"
                break;
#line 843 "ml_util.m"
              case (MR_Integer) 4:
#line 895 "ml_util.m"
                {
#line 895 "ml_util.m"
                  MR_Word ml_backend__ml_util__IndexRval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 895 "ml_util.m"
                  MR_Word ml_backend__ml_util___VectorCommon_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 896 "ml_util.m"
                  /* direct tailcall eliminated */
#line 896 "ml_util.m"
                  {
#line 896 "ml_util.m"
                    MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__IndexRval_34;

#line 896 "ml_util.m"
                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 896 "ml_util.m"
                  }
#line 896 "ml_util.m"
                  continue;
#line 895 "ml_util.m"
                }
#line 843 "ml_util.m"
                break;
#line 843 "ml_util.m"
              case (MR_Integer) 5:
#line 899 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 843 "ml_util.m"
                break;
#line 843 "ml_util.m"
            }
#line 843 "ml_util.m"
            break;
#line 843 "ml_util.m"
        }
#line 843 "ml_util.m"
        return ml_backend__ml_util__ContainsVar_6;
#line 843 "ml_util.m"
      }
#line 843 "ml_util.m"
      break;
#line 843 "ml_util.m"
    }
#line 149 "ml_util.m"
}

#line 147 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__maybe_rval_contains_var_2_f_0(
#line 147 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 147 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 147 "ml_util.m"
{
#line 837 "ml_util.m"
  {
#line 837 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 837 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 837 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 837 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 837 "ml_util.m"
    else
#line 838 "ml_util.m"
      {
#line 838 "ml_util.m"
        MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));

#line 839 "ml_util.m"
        {
#line 839 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
        }
#line 838 "ml_util.m"
      }
#line 837 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 837 "ml_util.m"
  }
#line 147 "ml_util.m"
}

#line 145 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__rvals_contains_var_2_f_0(
#line 145 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 145 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 145 "ml_util.m"
{
#line 826 "ml_util.m"
  while (MR_TRUE)
#line 826 "ml_util.m"
    {
#line 826 "ml_util.m"
      /* tailcall optimized into a loop */
#line 826 "ml_util.m"
      {
#line 826 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 826 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 826 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 826 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 826 "ml_util.m"
        else
#line 827 "ml_util.m"
          {
#line 827 "ml_util.m"
            MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 827 "ml_util.m"
            MR_Word ml_backend__ml_util__Rvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 827 "ml_util.m"
            MR_Word ml_backend__ml_util__RvalContainsVar_9;

#line 828 "ml_util.m"
            {
#line 828 "ml_util.m"
              ml_backend__ml_util__RvalContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 832 "ml_util.m"
#line 832 "ml_util.m"
            switch (ml_backend__ml_util__RvalContainsVar_9) {
#line 832 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 832 "ml_util.m"
              case (MR_Integer) 0:
#line 834 "ml_util.m"
                {
#line 834 "ml_util.m"
                  /* direct tailcall eliminated */
#line 834 "ml_util.m"
                  {
#line 834 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Rvals_6;

#line 834 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 834 "ml_util.m"
                  }
#line 834 "ml_util.m"
                  continue;
#line 834 "ml_util.m"
                }
#line 832 "ml_util.m"
                break;
#line 832 "ml_util.m"
              case (MR_Integer) 1:
#line 831 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 832 "ml_util.m"
                break;
#line 832 "ml_util.m"
            }
#line 827 "ml_util.m"
          }
#line 826 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 826 "ml_util.m"
      }
#line 826 "ml_util.m"
      break;
#line 826 "ml_util.m"
    }
#line 145 "ml_util.m"
}

#line 143 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__initializer_contains_var_2_f_0(
#line 143 "ml_util.m"
  MR_Word ml_backend__ml_util__Initializer_4,
#line 143 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 143 "ml_util.m"
{
#line 799 "ml_util.m"
  {
#line 799 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 799 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 799 "ml_util.m"
#line 799 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Initializer_4)) {
#line 799 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 799 "ml_util.m"
      case (MR_Integer) 0:
#line 800 "ml_util.m"
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 799 "ml_util.m"
        break;
#line 799 "ml_util.m"
      case (MR_Integer) 1:
#line 802 "ml_util.m"
        {
#line 802 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 803 "ml_util.m"
          {
#line 803 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_7, ml_backend__ml_util__DataName_5);
          }
#line 802 "ml_util.m"
        }
#line 799 "ml_util.m"
        break;
#line 799 "ml_util.m"
      case (MR_Integer) 2:
#line 805 "ml_util.m"
        {
#line 805 "ml_util.m"
          MR_Word ml_backend__ml_util__FieldInitializers_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 1)));
#line 805 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 806 "ml_util.m"
          {
#line 806 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__FieldInitializers_9, ml_backend__ml_util__DataName_5);
          }
#line 805 "ml_util.m"
        }
#line 799 "ml_util.m"
        break;
#line 799 "ml_util.m"
      case (MR_Integer) 3:
#line 808 "ml_util.m"
        {
#line 808 "ml_util.m"
          MR_Word ml_backend__ml_util__ElementInitializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 809 "ml_util.m"
          {
#line 809 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__ElementInitializers_10, ml_backend__ml_util__DataName_5);
          }
#line 808 "ml_util.m"
        }
#line 799 "ml_util.m"
        break;
#line 799 "ml_util.m"
    }
#line 799 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 799 "ml_util.m"
  }
#line 143 "ml_util.m"
}

#line 126 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__defn_contains_var_2_f_0(
#line 126 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_4,
#line 126 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 126 "ml_util.m"
{
#line 741 "ml_util.m"
  {
#line 741 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 741 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;
#line 741 "ml_util.m"
    MR_Word ml_backend__ml_util__DefnBody_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 3)));
#line 742 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 0)));
#line 742 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 1)));
#line 742 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 2)));

#line 743 "ml_util.m"
    {
#line 743 "ml_util.m"
      ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defn_body_contains_var_2_f_0(ml_backend__ml_util__DefnBody_10, ml_backend__ml_util__DataName_5);
    }
#line 741 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 741 "ml_util.m"
  }
#line 126 "ml_util.m"
}

#line 121 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__defns_contains_var_2_f_0(
#line 121 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 121 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 121 "ml_util.m"
{
#line 730 "ml_util.m"
  while (MR_TRUE)
#line 730 "ml_util.m"
    {
#line 730 "ml_util.m"
      /* tailcall optimized into a loop */
#line 730 "ml_util.m"
      {
#line 730 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 730 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 730 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 730 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 730 "ml_util.m"
        else
#line 731 "ml_util.m"
          {
#line 731 "ml_util.m"
            MR_Word ml_backend__ml_util__Defn_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 731 "ml_util.m"
            MR_Word ml_backend__ml_util__Defns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 731 "ml_util.m"
            MR_Word ml_backend__ml_util__DefnContainsVar_9;

#line 732 "ml_util.m"
            {
#line 732 "ml_util.m"
              ml_backend__ml_util__DefnContainsVar_9 = ml_backend__ml_util__defn_contains_var_2_f_0(ml_backend__ml_util__Defn_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 736 "ml_util.m"
#line 736 "ml_util.m"
            switch (ml_backend__ml_util__DefnContainsVar_9) {
#line 736 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 736 "ml_util.m"
              case (MR_Integer) 0:
#line 738 "ml_util.m"
                {
#line 738 "ml_util.m"
                  /* direct tailcall eliminated */
#line 738 "ml_util.m"
                  {
#line 738 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Defns_6;

#line 738 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 738 "ml_util.m"
                  }
#line 738 "ml_util.m"
                  continue;
#line 738 "ml_util.m"
                }
#line 736 "ml_util.m"
                break;
#line 736 "ml_util.m"
              case (MR_Integer) 1:
#line 735 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 736 "ml_util.m"
                break;
#line 736 "ml_util.m"
            }
#line 731 "ml_util.m"
          }
#line 730 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 730 "ml_util.m"
      }
#line 730 "ml_util.m"
      break;
#line 730 "ml_util.m"
    }
#line 121 "ml_util.m"
}

#line 116 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_public_1_p_0(
#line 116 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 116 "ml_util.m"
{
#line 716 "ml_util.m"
  {
#line 716 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 716 "ml_util.m"
    MR_Word ml_backend__ml_util__Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 716 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 717 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 717 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 717 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));

#line 718 "ml_util.m"
    {
#line 718 "ml_util.m"
      ml_backend__ml_util__V_7_7 = ml_backend__mlds__access_1_f_0(ml_backend__ml_util__Flags_5);
    }
#line 718 "ml_util.m"
    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_7_7 == (MR_Integer) 0);
#line 716 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 716 "ml_util.m"
  }
#line 116 "ml_util.m"
}

#line 111 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_commit_type_var_1_p_0(
#line 111 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 111 "ml_util.m"
{
#line 711 "ml_util.m"
  {
#line 711 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 711 "ml_util.m"
    MR_Word ml_backend__ml_util__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 711 "ml_util.m"
    MR_Word ml_backend__ml_util__Type_7;
#line 712 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 712 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 712 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 713 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 713 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;

#line 713 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_6)) == (MR_mktag((MR_Integer) 1)));
#line 713 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 713 "ml_util.m"
      {
#line 713 "ml_util.m"
        ml_backend__ml_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 0)));
#line 713 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 1)));
#line 713 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 2)));
#line 714 "ml_util.m"
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "ml_util.m"
      }
#line 711 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 711 "ml_util.m"
  }
#line 111 "ml_util.m"
}

#line 106 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_type_ctor_info_1_p_0(
#line 106 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 106 "ml_util.m"
{
#line 704 "ml_util.m"
  {
#line 704 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 704 "ml_util.m"
    MR_Word ml_backend__ml_util__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 704 "ml_util.m"
    MR_Word ml_backend__ml_util__Type_7;
#line 704 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiId_10;
#line 704 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiName_12;
#line 704 "ml_util.m"
    MR_Word ml_backend__ml_util__V_13_13;
#line 705 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 705 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 705 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 706 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 706 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 708 "ml_util.m"
    MR_Word ml_backend__ml_util__V_11_11;

#line 706 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_6)) == (MR_mktag((MR_Integer) 1)));
#line 706 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 706 "ml_util.m"
      {
#line 706 "ml_util.m"
        ml_backend__ml_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 0)));
#line 706 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 1)));
#line 706 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 2)));
#line 707 "ml_util.m"
        ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Type_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 707 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 707 "ml_util.m"
          {
#line 707 "ml_util.m"
            ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_7, (MR_Integer) 1)));
#line 707 "ml_util.m"
            ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 707 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 707 "ml_util.m"
              {
#line 707 "ml_util.m"
                ml_backend__ml_util__RttiId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_13_13, (MR_Integer) 0)));
#line 708 "ml_util.m"
                ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__RttiId_10)) == (MR_mktag((MR_Integer) 0)));
#line 708 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 708 "ml_util.m"
                  {
#line 708 "ml_util.m"
                    ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_10, (MR_Integer) 0)));
#line 708 "ml_util.m"
                    ml_backend__ml_util__RttiName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_10, (MR_Integer) 1)));
#line 709 "ml_util.m"
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__RttiName_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 708 "ml_util.m"
                  }
#line 707 "ml_util.m"
              }
#line 707 "ml_util.m"
          }
#line 706 "ml_util.m"
      }
#line 704 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 704 "ml_util.m"
  }
#line 106 "ml_util.m"
}

#line 101 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_function_1_p_0(
#line 101 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 101 "ml_util.m"
{
#line 700 "ml_util.m"
  {
#line 700 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 700 "ml_util.m"
    MR_Word ml_backend__ml_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 701 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 701 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 701 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 702 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 702 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_8_8;
#line 702 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 702 "ml_util.m"
    MR_Word ml_backend__ml_util__V_10_10;

#line 702 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_3)) == (MR_mktag((MR_Integer) 2)));
#line 702 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 702 "ml_util.m"
      {
#line 702 "ml_util.m"
        ml_backend__ml_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 702 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 702 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 2)));
#line 702 "ml_util.m"
        ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 3)));
#line 702 "ml_util.m"
      }
#line 700 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 700 "ml_util.m"
  }
#line 101 "ml_util.m"
}

#line 97 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_type_1_p_0(
#line 97 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 97 "ml_util.m"
{
#line 696 "ml_util.m"
  {
#line 696 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 696 "ml_util.m"
    MR_Word ml_backend__ml_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 697 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 697 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 697 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 698 "ml_util.m"
    MR_String ml_backend__ml_util__V_7_7;
#line 698 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_8_8;

#line 698 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_3)) == (MR_mktag((MR_Integer) 0)));
#line 698 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 698 "ml_util.m"
      {
#line 698 "ml_util.m"
        ml_backend__ml_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 698 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 698 "ml_util.m"
      }
#line 696 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 696 "ml_util.m"
  }
#line 97 "ml_util.m"
}

#line 689 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(
#line 689 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 689 "ml_util.m"
{
#line 689 "ml_util.m"
  {
#line 689 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 689 "ml_util.m"
    MR_builtin_longjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0, 1);
#line 689 "ml_util.m"
  }
#line 689 "ml_util.m"
}

#line 689 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(
#line 689 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 689 "ml_util.m"
{
#line 689 "ml_util.m"
  {
#line 689 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 689 "ml_util.m"
    {
#line 693 "ml_util.m"
      MR_Word ml_backend__ml_util__V_16_16;
#line 694 "ml_util.m"
      MR_Word ml_backend__ml_util__V_17_17;
#line 694 "ml_util.m"
      MR_Word ml_backend__ml_util__V_18_18;
#line 694 "ml_util.m"
      MR_String ml_backend__ml_util__V_19_19;

#line 693 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, (MR_Integer) 0)));
#line 693 "ml_util.m"
      ml_backend__ml_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, (MR_Integer) 1)));
#line 694 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 694 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 694 "ml_util.m"
        {
#line 694 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15, (MR_Integer) 1)));
#line 689 "ml_util.m"
          {
#line 694 "ml_util.m"
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 694 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 694 "ml_util.m"
              {
#line 694 "ml_util.m"
                {
#line 694 "ml_util.m"
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 1)));
#line 694 "ml_util.m"
                  ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 2)));
#line 694 "ml_util.m"
                  ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 3)));
#line 694 "ml_util.m"
                  ml_backend__ml_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 4)));
#line 694 "ml_util.m"
                }
#line 689 "ml_util.m"
                {
#line 694 "ml_util.m"
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22);
#line 694 "ml_util.m"
                  if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 694 "ml_util.m"
                    {
#line 694 "ml_util.m"
                      ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(ml_backend__ml_util__env_ptr);
                    }
#line 689 "ml_util.m"
                }
#line 694 "ml_util.m"
              }
#line 689 "ml_util.m"
          }
#line 694 "ml_util.m"
        }
#line 689 "ml_util.m"
    }
#line 689 "ml_util.m"
  }
#line 689 "ml_util.m"
}

#line 689 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(
#line 689 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 689 "ml_util.m"
{
#line 689 "ml_util.m"
  {
#line 689 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 689 "ml_util.m"
    if (MR_builtin_setjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0) == 0)
#line 689 "ml_util.m"
      {
#line 689 "ml_util.m"
        {
#line 689 "ml_util.m"
          MR_Word ml_backend__ml_util__Body_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 3)));
#line 689 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_11;
#line 689 "ml_util.m"
          MR_Word ml_backend__ml_util__V_20_20;
#line 690 "ml_util.m"
          MR_Word ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 0)));
#line 690 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 1)));
#line 690 "ml_util.m"
          MR_Word ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 2)));
#line 691 "ml_util.m"
          MR_Word ml_backend__ml_util__V_9_9;
#line 691 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10;
#line 691 "ml_util.m"
          MR_Word ml_backend__ml_util__V_12_12;
#line 691 "ml_util.m"
          MR_Word ml_backend__ml_util__V_13_13;

#line 691 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_8)) == (MR_mktag((MR_Integer) 2)));
#line 691 "ml_util.m"
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 691 "ml_util.m"
            {
#line 691 "ml_util.m"
              {
#line 691 "ml_util.m"
                ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 0)));
#line 691 "ml_util.m"
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 1)));
#line 691 "ml_util.m"
                ml_backend__ml_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 2)));
#line 691 "ml_util.m"
                ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 3)));
#line 691 "ml_util.m"
                ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 4)));
#line 691 "ml_util.m"
              }
#line 689 "ml_util.m"
              {
#line 691 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 691 "ml_util.m"
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 691 "ml_util.m"
                  {
#line 691 "ml_util.m"
                    ml_backend__ml_util__FunctionBody_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_20_20), (MR_Integer) 1);
#line 689 "ml_util.m"
                    {
#line 270 "ml_util.m"
                      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14 = ml_backend__ml_util__FunctionBody_11;
#line 270 "ml_util.m"
                      {
#line 270 "ml_util.m"
                        ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(ml_backend__ml_util__env_ptr);
                      }
#line 271 "ml_util.m"
                      {
#line 271 "ml_util.m"
                        MR_Word ml_backend__ml_util__Stmt_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 0)));
#line 272 "ml_util.m"
                        MR_Word ml_backend__ml_util___Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 1)));

#line 273 "ml_util.m"
                        {
#line 273 "ml_util.m"
                          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_26, &(ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2, ml_backend__ml_util__env_ptr);
                        }
#line 271 "ml_util.m"
                      }
#line 689 "ml_util.m"
                    }
#line 691 "ml_util.m"
                  }
#line 689 "ml_util.m"
              }
#line 691 "ml_util.m"
            }
#line 689 "ml_util.m"
        }
#line 689 "ml_util.m"
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = MR_FALSE;
#line 689 "ml_util.m"
      }
#line 689 "ml_util.m"
    else
#line 689 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = MR_TRUE;
#line 689 "ml_util.m"
  }
#line 689 "ml_util.m"
}

#line 92 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0(
#line 92 "ml_util.m"
  MR_Word ml_backend__ml_util__ForeignLang_3,
#line 92 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_4)
#line 92 "ml_util.m"
{
#line 92 "ml_util.m"
  {
#line 92 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s ml_backend__ml_util__env;

#line 92 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3 = ml_backend__ml_util__ForeignLang_3;
#line 92 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4 = ml_backend__ml_util__Defn_4;
#line 689 "ml_util.m"
    {
#line 689 "ml_util.m"
      ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(&ml_backend__ml_util__env);
    }
#line 689 "ml_util.m"
    return (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
#line 92 "ml_util.m"
  }
#line 92 "ml_util.m"
}

#line 677 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(
#line 677 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 677 "ml_util.m"
{
#line 677 "ml_util.m"
  {
#line 677 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 677 "ml_util.m"
    MR_builtin_longjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0, 1);
#line 677 "ml_util.m"
  }
#line 677 "ml_util.m"
}

#line 677 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(
#line 677 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 677 "ml_util.m"
{
#line 677 "ml_util.m"
  {
#line 677 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 677 "ml_util.m"
    {
#line 681 "ml_util.m"
      MR_Word ml_backend__ml_util__V_16_16;

#line 681 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, (MR_Integer) 0)));
#line 681 "ml_util.m"
      ml_backend__ml_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, (MR_Integer) 1)));
#line 683 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 683 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 683 "ml_util.m"
        {
#line 683 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15, (MR_Integer) 1)));
#line 677 "ml_util.m"
          {
#line 685 "ml_util.m"
            if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 683 "ml_util.m"
              {
#line 683 "ml_util.m"
                MR_Word ml_backend__ml_util__TargetLang_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 1)));
#line 683 "ml_util.m"
                MR_Word ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 2)));

#line 684 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = (ml_backend__ml_util__TargetLang_17 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3);
#line 684 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = !((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded);
#line 683 "ml_util.m"
              }
#line 685 "ml_util.m"
            else
#line 685 "ml_util.m"
            if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 686 "ml_util.m"
              (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_TRUE;
#line 685 "ml_util.m"
            else
#line 685 "ml_util.m"
              (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_FALSE;
#line 685 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 685 "ml_util.m"
              {
#line 685 "ml_util.m"
                ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(ml_backend__ml_util__env_ptr);
              }
#line 677 "ml_util.m"
          }
#line 683 "ml_util.m"
        }
#line 677 "ml_util.m"
    }
#line 677 "ml_util.m"
  }
#line 677 "ml_util.m"
}

#line 677 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(
#line 677 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 677 "ml_util.m"
{
#line 677 "ml_util.m"
  {
#line 677 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 677 "ml_util.m"
    if (MR_builtin_setjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0) == 0)
#line 677 "ml_util.m"
      {
#line 677 "ml_util.m"
        {
#line 677 "ml_util.m"
          MR_Word ml_backend__ml_util__Body_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 3)));
#line 677 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_11;
#line 677 "ml_util.m"
          MR_Word ml_backend__ml_util__V_23_23;
#line 678 "ml_util.m"
          MR_Word ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 0)));
#line 678 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 1)));
#line 678 "ml_util.m"
          MR_Word ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 2)));
#line 679 "ml_util.m"
          MR_Word ml_backend__ml_util__V_9_9;
#line 679 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10;
#line 679 "ml_util.m"
          MR_Word ml_backend__ml_util__V_12_12;
#line 679 "ml_util.m"
          MR_Word ml_backend__ml_util__V_13_13;

#line 679 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_8)) == (MR_mktag((MR_Integer) 2)));
#line 679 "ml_util.m"
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 679 "ml_util.m"
            {
#line 679 "ml_util.m"
              {
#line 679 "ml_util.m"
                ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 0)));
#line 679 "ml_util.m"
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 1)));
#line 679 "ml_util.m"
                ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 2)));
#line 679 "ml_util.m"
                ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 3)));
#line 679 "ml_util.m"
                ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 4)));
#line 679 "ml_util.m"
              }
#line 677 "ml_util.m"
              {
#line 679 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 679 "ml_util.m"
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 679 "ml_util.m"
                  {
#line 679 "ml_util.m"
                    ml_backend__ml_util__FunctionBody_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_23_23), (MR_Integer) 1);
#line 677 "ml_util.m"
                    {
#line 270 "ml_util.m"
                      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14 = ml_backend__ml_util__FunctionBody_11;
#line 270 "ml_util.m"
                      {
#line 270 "ml_util.m"
                        ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(ml_backend__ml_util__env_ptr);
                      }
#line 271 "ml_util.m"
                      {
#line 271 "ml_util.m"
                        MR_Word ml_backend__ml_util__Stmt_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 0)));
#line 272 "ml_util.m"
                        MR_Word ml_backend__ml_util___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 1)));

#line 273 "ml_util.m"
                        {
#line 273 "ml_util.m"
                          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_30, &(ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2, ml_backend__ml_util__env_ptr);
                        }
#line 271 "ml_util.m"
                      }
#line 677 "ml_util.m"
                    }
#line 679 "ml_util.m"
                  }
#line 677 "ml_util.m"
              }
#line 679 "ml_util.m"
            }
#line 677 "ml_util.m"
        }
#line 677 "ml_util.m"
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_FALSE;
#line 677 "ml_util.m"
      }
#line 677 "ml_util.m"
    else
#line 677 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_TRUE;
#line 677 "ml_util.m"
  }
#line 677 "ml_util.m"
}

#line 84 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0(
#line 84 "ml_util.m"
  MR_Word ml_backend__ml_util__NativeTargetLang_3,
#line 84 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_4)
#line 84 "ml_util.m"
{
#line 84 "ml_util.m"
  {
#line 84 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s ml_backend__ml_util__env;

#line 84 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3 = ml_backend__ml_util__NativeTargetLang_3;
#line 84 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4 = ml_backend__ml_util__Defn_4;
#line 677 "ml_util.m"
    {
#line 677 "ml_util.m"
      ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(&ml_backend__ml_util__env);
    }
#line 677 "ml_util.m"
    return (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
#line 84 "ml_util.m"
  }
#line 84 "ml_util.m"
}

#line 665 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
#line 665 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 665 "ml_util.m"
{
#line 665 "ml_util.m"
  {
#line 665 "ml_util.m"
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 665 "ml_util.m"
    *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12));
#line 665 "ml_util.m"
    {
#line 665 "ml_util.m"
      ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr);
    }
#line 665 "ml_util.m"
  }
#line 665 "ml_util.m"
}

#line 665 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
#line 665 "ml_util.m"
  MR_Box ml_backend__ml_util__closure_arg,
#line 665 "ml_util.m"
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
#line 665 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 665 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 665 "ml_util.m"
{
#line 665 "ml_util.m"
  {
#line 665 "ml_util.m"
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s ml_backend__ml_util__env;

#line 665 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1 = ml_backend__ml_util__wrapper_arg_1;
#line 665 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont = ml_backend__ml_util__cont;
#line 665 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 665 "ml_util.m"
    {
#line 665 "ml_util.m"
      MR_Box ml_backend__ml_util__closure = ml_backend__ml_util__closure_arg;

#line 665 "ml_util.m"
      {
#line 665 "ml_util.m"
        ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__665__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__closure, (MR_Integer) 3))), &(ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12, ml_backend__ml_util__has_foreign_languages_2_p_0_1, &ml_backend__ml_util__env);
      }
#line 665 "ml_util.m"
    }
#line 665 "ml_util.m"
  }
#line 665 "ml_util.m"
}

#line 66 "ml_util.m"
void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0(
#line 66 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 66 "ml_util.m"
  MR_Word * ml_backend__ml_util__Langs_4)
#line 66 "ml_util.m"
{
#line 664 "ml_util.m"
  {
#line 664 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 664 "ml_util.m"
    MR_Word ml_backend__ml_util__GetTargetCode_5;

#line 665 "ml_util.m"
    {
#line 665 "ml_util.m"
      ml_backend__ml_util__GetTargetCode_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 665 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 0) = ((MR_Box) (&ml_backend__ml_util_scalar_common_2[0]));
#line 665 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 1) = ((MR_Box) (ml_backend__ml_util__has_foreign_languages_2_p_0_2));
#line 665 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 665 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 3) = ((MR_Box) (ml_backend__ml_util__Statement_3));
#line 665 "ml_util.m"
    }
#line 670 "ml_util.m"
    {
#line 670 "ml_util.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ml_backend__ml_util__GetTargetCode_5, ml_backend__ml_util__Langs_4);
    }
#line 664 "ml_util.m"
  }
#line 66 "ml_util.m"
}

#line 64 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__statement_contains_var_2_f_0(
#line 64 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_4,
#line 64 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 64 "ml_util.m"
{
#line 355 "ml_util.m"
  {
#line 355 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 355 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;
#line 355 "ml_util.m"
    MR_Word ml_backend__ml_util__Stmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 0)));
#line 356 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 1)));

#line 357 "ml_util.m"
    {
#line 357 "ml_util.m"
      ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_7, ml_backend__ml_util__DataName_5);
    }
#line 355 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 355 "ml_util.m"
  }
#line 64 "ml_util.m"
}

#line 59 "ml_util.m"
void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0(
#line 59 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_3,
#line 59 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 59 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 59 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 59 "ml_util.m"
{
#line 277 "ml_util.m"
  while (MR_TRUE)
#line 277 "ml_util.m"
    {
#line 277 "ml_util.m"
      /* tailcall optimized into a loop */
#line 277 "ml_util.m"
      {
#line 277 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;

#line 277 "ml_util.m"
#line 277 "ml_util.m"
        switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) {
#line 277 "ml_util.m"
          case (MR_Integer) 0:
#line 277 "ml_util.m"
            {
#line 277 "ml_util.m"
              MR_Word ml_backend__ml_util__Statements_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
#line 277 "ml_util.m"
              MR_Word ml_backend__ml_util___Defns_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));

#line 278 "ml_util.m"
              {
#line 278 "ml_util.m"
                ml_backend__ml_util__statements_contains_statement_2_p_0(ml_backend__ml_util__Statements_6, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
              }
#line 277 "ml_util.m"
            }
#line 277 "ml_util.m"
            break;
#line 277 "ml_util.m"
          case (MR_Integer) 1:
#line 280 "ml_util.m"
            {
#line 280 "ml_util.m"
              MR_Word ml_backend__ml_util__Statement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 280 "ml_util.m"
              MR_Word ml_backend__ml_util___Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));
#line 280 "ml_util.m"
              MR_Word ml_backend__ml_util___Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

#line 270 "ml_util.m"
              *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Statement_9;
#line 270 "ml_util.m"
              {
#line 270 "ml_util.m"
                ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
              }
#line 271 "ml_util.m"
              {
#line 271 "ml_util.m"
                MR_Word ml_backend__ml_util__Stmt_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_9, (MR_Integer) 0)));
#line 272 "ml_util.m"
                MR_Word ml_backend__ml_util___Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_9, (MR_Integer) 1)));

#line 273 "ml_util.m"
                /* direct tailcall eliminated */
#line 273 "ml_util.m"
                {
#line 273 "ml_util.m"
                  MR_Word ml_backend__ml_util__Stmt__tmp_copy_3 = ml_backend__ml_util__Stmt_56;

#line 273 "ml_util.m"
                  ml_backend__ml_util__Stmt_3 = ml_backend__ml_util__Stmt__tmp_copy_3;
#line 273 "ml_util.m"
                }
#line 273 "ml_util.m"
                continue;
#line 271 "ml_util.m"
              }
#line 280 "ml_util.m"
            }
#line 277 "ml_util.m"
            break;
#line 277 "ml_util.m"
          case (MR_Integer) 2:
#line 283 "ml_util.m"
            {
#line 283 "ml_util.m"
              MR_Word ml_backend__ml_util__Then_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
#line 283 "ml_util.m"
              MR_Word ml_backend__ml_util__MaybeElse_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 283 "ml_util.m"
              MR_Word ml_backend__ml_util___Cond_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));

#line 270 "ml_util.m"
              *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Then_11;
#line 270 "ml_util.m"
              {
#line 270 "ml_util.m"
                ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
              }
#line 271 "ml_util.m"
              {
#line 271 "ml_util.m"
                MR_Word ml_backend__ml_util__Stmt_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_11, (MR_Integer) 0)));
#line 272 "ml_util.m"
                MR_Word ml_backend__ml_util___Context_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_11, (MR_Integer) 1)));

#line 273 "ml_util.m"
                {
#line 273 "ml_util.m"
                  ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_41, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                }
#line 271 "ml_util.m"
              }
#line 285 "ml_util.m"
              {
#line 285 "ml_util.m"
                ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(ml_backend__ml_util__MaybeElse_12, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
              }
#line 283 "ml_util.m"
            }
#line 277 "ml_util.m"
            break;
#line 277 "ml_util.m"
          case (MR_Integer) 3:
#line 277 "ml_util.m"
#line 277 "ml_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)))) {
#line 277 "ml_util.m"
              case (MR_Integer) 0:
#line 288 "ml_util.m"
                {
#line 288 "ml_util.m"
                  MR_Word ml_backend__ml_util__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 4)));
#line 288 "ml_util.m"
                  MR_Word ml_backend__ml_util__Default_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 5)));
#line 288 "ml_util.m"
                  MR_Word ml_backend__ml_util___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
#line 288 "ml_util.m"
                  MR_Word ml_backend__ml_util___Val_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 288 "ml_util.m"
                  MR_Word ml_backend__ml_util___Range_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));

#line 289 "ml_util.m"
                  {
#line 289 "ml_util.m"
                    ml_backend__ml_util__cases_contains_statement_2_p_0(ml_backend__ml_util__Cases_16, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                  }
#line 290 "ml_util.m"
                  {
#line 290 "ml_util.m"
                    ml_backend__ml_util__default_contains_statement_2_p_0(ml_backend__ml_util__Default_17, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                  }
#line 288 "ml_util.m"
                }
#line 277 "ml_util.m"
                break;
#line 277 "ml_util.m"
              case (MR_Integer) 6:
#line 293 "ml_util.m"
                {
#line 293 "ml_util.m"
                  MR_Word ml_backend__ml_util__Handler_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));
#line 293 "ml_util.m"
                  MR_Word ml_backend__ml_util__Statement_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 293 "ml_util.m"
                  MR_Word ml_backend__ml_util___Ref_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

#line 270 "ml_util.m"
                  *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Statement_31;
#line 270 "ml_util.m"
                  {
#line 270 "ml_util.m"
                    ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
                  }
#line 271 "ml_util.m"
                  {
#line 271 "ml_util.m"
                    MR_Word ml_backend__ml_util__Stmt_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_31, (MR_Integer) 0)));
#line 272 "ml_util.m"
                    MR_Word ml_backend__ml_util___Context_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_31, (MR_Integer) 1)));

#line 273 "ml_util.m"
                    {
#line 273 "ml_util.m"
                      ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_46, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                    }
#line 271 "ml_util.m"
                  }
#line 270 "ml_util.m"
                  *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Handler_19;
#line 270 "ml_util.m"
                  {
#line 270 "ml_util.m"
                    ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
                  }
#line 271 "ml_util.m"
                  {
#line 271 "ml_util.m"
                    MR_Word ml_backend__ml_util__Stmt_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Handler_19, (MR_Integer) 0)));
#line 272 "ml_util.m"
                    MR_Word ml_backend__ml_util___Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Handler_19, (MR_Integer) 1)));

#line 273 "ml_util.m"
                    /* direct tailcall eliminated */
#line 273 "ml_util.m"
                    {
#line 273 "ml_util.m"
                      MR_Word ml_backend__ml_util__Stmt__tmp_copy_3 = ml_backend__ml_util__Stmt_51;

#line 273 "ml_util.m"
                      ml_backend__ml_util__Stmt_3 = ml_backend__ml_util__Stmt__tmp_copy_3;
#line 273 "ml_util.m"
                    }
#line 273 "ml_util.m"
                    continue;
#line 271 "ml_util.m"
                  }
#line 293 "ml_util.m"
                }
#line 277 "ml_util.m"
                break;
#line 277 "ml_util.m"
            }
#line 277 "ml_util.m"
            break;
#line 277 "ml_util.m"
        }
#line 277 "ml_util.m"
      }
#line 277 "ml_util.m"
      break;
#line 277 "ml_util.m"
    }
#line 59 "ml_util.m"
}

#line 57 "ml_util.m"
void MR_CALL 
ml_backend__ml_util__statement_contains_statement_2_p_0(
#line 57 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_1,
#line 57 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
#line 57 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 57 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 57 "ml_util.m"
{
#line 270 "ml_util.m"
  {
#line 270 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;

#line 270 "ml_util.m"
    *ml_backend__ml_util__HeadVar__2_2 = ml_backend__ml_util__Statement_1;
#line 270 "ml_util.m"
    {
#line 270 "ml_util.m"
      ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
    }
#line 271 "ml_util.m"
    {
#line 271 "ml_util.m"
      MR_Word ml_backend__ml_util__Stmt_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_1, (MR_Integer) 0)));
#line 272 "ml_util.m"
      MR_Word ml_backend__ml_util___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_1, (MR_Integer) 1)));

#line 273 "ml_util.m"
      {
#line 273 "ml_util.m"
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_6, ml_backend__ml_util__HeadVar__2_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
      }
#line 271 "ml_util.m"
    }
#line 270 "ml_util.m"
  }
#line 57 "ml_util.m"
}

#line 47 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__call_is_recursive_2_p_0(
#line 47 "ml_util.m"
  MR_Word ml_backend__ml_util__Name_3,
#line 47 "ml_util.m"
  MR_Word ml_backend__ml_util__Call_4)
#line 47 "ml_util.m"
{
#line 223 "ml_util.m"
  {
#line 223 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Call_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__TypeInfo_33_33;
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__FuncRval_6;
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__CodeAddr_11;
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__QualifiedProcLabel_12;
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__MaybeSeqNum_14;
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__ProcLabel_16;
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__PredLabel_17;
#line 223 "ml_util.m"
    MR_Integer ml_backend__ml_util__ProcId_18;
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__ModuleName_19;
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__FuncName_20;
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__V_22_22;
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__V_23_23;
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__V_24_24;
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__V_27_27;
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__V_28_28;
#line 223 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_29_29;
#line 223 "ml_util.m"
    MR_Word ml_backend__ml_util__V_30_30;
#line 224 "ml_util.m"
    MR_Word ml_backend__ml_util___Signature_5;
#line 224 "ml_util.m"
    MR_Word ml_backend__ml_util___MaybeObject_7;
#line 224 "ml_util.m"
    MR_Word ml_backend__ml_util___CallArgs_8;
#line 224 "ml_util.m"
    MR_Word ml_backend__ml_util___Results_9;
#line 224 "ml_util.m"
    MR_Word ml_backend__ml_util___CallKind_10;
#line 243 "ml_util.m"
    MR_Word ml_backend__ml_util__V_21_21;

#line 224 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 224 "ml_util.m"
      {
#line 224 "ml_util.m"
        ml_backend__ml_util___Signature_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 1)));
#line 224 "ml_util.m"
        ml_backend__ml_util__FuncRval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 2)));
#line 224 "ml_util.m"
        ml_backend__ml_util___MaybeObject_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 3)));
#line 224 "ml_util.m"
        ml_backend__ml_util___CallArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 4)));
#line 224 "ml_util.m"
        ml_backend__ml_util___Results_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 5)));
#line 224 "ml_util.m"
        ml_backend__ml_util___CallKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 6)));
#line 228 "ml_util.m"
        ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__FuncRval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__FuncRval_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 228 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 228 "ml_util.m"
          {
#line 228 "ml_util.m"
            ml_backend__ml_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__FuncRval_6, (MR_Integer) 1)));
#line 228 "ml_util.m"
            ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 228 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 228 "ml_util.m"
              {
#line 228 "ml_util.m"
                ml_backend__ml_util__CodeAddr_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_22_22, (MR_Integer) 1)));
#line 232 "ml_util.m"
                if (((MR_tag((MR_Word) ml_backend__ml_util__CodeAddr_11)) == (MR_mktag((MR_Integer) 1))))
#line 233 "ml_util.m"
                  {
#line 233 "ml_util.m"
                    MR_Integer ml_backend__ml_util__SeqNum_15;
#line 233 "ml_util.m"
                    MR_Word ml_backend__ml_util___Sig_25;

#line 233 "ml_util.m"
                    ml_backend__ml_util__QualifiedProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 0)));
#line 233 "ml_util.m"
                    ml_backend__ml_util__SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 1)));
#line 233 "ml_util.m"
                    ml_backend__ml_util___Sig_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 2)));
#line 234 "ml_util.m"
                    {
#line 234 "ml_util.m"
                      ml_backend__ml_util__MaybeSeqNum_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 234 "ml_util.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_util__MaybeSeqNum_14, 0) = ((MR_Box) (ml_backend__ml_util__SeqNum_15));
#line 234 "ml_util.m"
                    }
#line 233 "ml_util.m"
                  }
#line 232 "ml_util.m"
                else
#line 230 "ml_util.m"
                  {
#line 230 "ml_util.m"
                    MR_Word ml_backend__ml_util___Sig_13;

#line 230 "ml_util.m"
                    ml_backend__ml_util__QualifiedProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 0)));
#line 230 "ml_util.m"
                    ml_backend__ml_util___Sig_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 1)));
#line 231 "ml_util.m"
                    ml_backend__ml_util__MaybeSeqNum_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 230 "ml_util.m"
                  }
#line 237 "ml_util.m"
                ml_backend__ml_util__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 0)));
#line 237 "ml_util.m"
                ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 1)));
#line 237 "ml_util.m"
                ml_backend__ml_util__ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 2)));
#line 237 "ml_util.m"
                ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_23_23 == (MR_Integer) 0);
#line 223 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 223 "ml_util.m"
                  {
#line 236 "ml_util.m"
                    ml_backend__ml_util__PredLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_16, (MR_Integer) 0)));
#line 236 "ml_util.m"
                    ml_backend__ml_util__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_16, (MR_Integer) 1)));
#line 240 "ml_util.m"
                    ml_backend__ml_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 240 "ml_util.m"
                    ml_backend__ml_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 240 "ml_util.m"
                    ml_backend__ml_util__FuncName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 2)));
#line 240 "ml_util.m"
                    {
#line 240 "ml_util.m"
                      ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_19, ml_backend__ml_util__V_27_27);
                    }
#line 223 "ml_util.m"
                    if (ml_backend__ml_util__succeeded)
#line 223 "ml_util.m"
                      {
#line 240 "ml_util.m"
                        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_24_24 == (MR_Integer) 0);
#line 223 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 223 "ml_util.m"
                          {
#line 243 "ml_util.m"
                            ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_20)) == (MR_mktag((MR_Integer) 2)));
#line 243 "ml_util.m"
                            if (ml_backend__ml_util__succeeded)
#line 243 "ml_util.m"
                              {
#line 243 "ml_util.m"
                                ml_backend__ml_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 0)));
#line 243 "ml_util.m"
                                ml_backend__ml_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 1)));
#line 243 "ml_util.m"
                                ml_backend__ml_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 2)));
#line 243 "ml_util.m"
                                ml_backend__ml_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 3)));
#line 243 "ml_util.m"
                                {
#line 243 "ml_util.m"
                                  ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0(ml_backend__ml_util__PredLabel_17, ml_backend__ml_util__V_28_28);
                                }
#line 223 "ml_util.m"
                                if (ml_backend__ml_util__succeeded)
#line 223 "ml_util.m"
                                  {
#line 243 "ml_util.m"
                                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__ProcId_18 == ml_backend__ml_util__V_29_29);
#line 223 "ml_util.m"
                                    if (ml_backend__ml_util__succeeded)
#line 223 "ml_util.m"
                                      {
#line 5877 "ml_backend.ml_util.c"
                                        ml_backend__ml_util__TypeInfo_33_33 = (MR_Word) &ml_backend__ml_util_scalar_common_1[0];
#line 243 "ml_util.m"
                                        {
#line 243 "ml_util.m"
                                          ml_backend__ml_util__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_util__TypeInfo_33_33, ((MR_Box) (ml_backend__ml_util__MaybeSeqNum_14)), ((MR_Box) (ml_backend__ml_util__V_30_30)));
                                        }
#line 223 "ml_util.m"
                                      }
#line 223 "ml_util.m"
                                  }
#line 243 "ml_util.m"
                              }
#line 223 "ml_util.m"
                          }
#line 223 "ml_util.m"
                      }
#line 223 "ml_util.m"
                  }
#line 228 "ml_util.m"
              }
#line 228 "ml_util.m"
          }
#line 224 "ml_util.m"
      }
#line 223 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 223 "ml_util.m"
  }
#line 47 "ml_util.m"
}

#line 42 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__can_optimize_tailcall_2_p_0(
#line 42 "ml_util.m"
  MR_Word ml_backend__ml_util__Name_3,
#line 42 "ml_util.m"
  MR_Word ml_backend__ml_util__Call_4)
#line 42 "ml_util.m"
{
#line 210 "ml_util.m"
  {
#line 210 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Call_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 210 "ml_util.m"
    MR_Word ml_backend__ml_util__MaybeObject_7;
#line 210 "ml_util.m"
    MR_Word ml_backend__ml_util__CallKind_10;
#line 211 "ml_util.m"
    MR_Word ml_backend__ml_util___Signature_5;
#line 211 "ml_util.m"
    MR_Word ml_backend__ml_util___FuncRval_6;
#line 211 "ml_util.m"
    MR_Word ml_backend__ml_util___CallArgs_8;
#line 211 "ml_util.m"
    MR_Word ml_backend__ml_util___Results_9;

#line 211 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 211 "ml_util.m"
      {
#line 211 "ml_util.m"
        ml_backend__ml_util___Signature_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 1)));
#line 211 "ml_util.m"
        ml_backend__ml_util___FuncRval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 2)));
#line 211 "ml_util.m"
        ml_backend__ml_util__MaybeObject_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 3)));
#line 211 "ml_util.m"
        ml_backend__ml_util___CallArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 4)));
#line 211 "ml_util.m"
        ml_backend__ml_util___Results_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 5)));
#line 211 "ml_util.m"
        ml_backend__ml_util__CallKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 6)));
#line 214 "ml_util.m"
#line 214 "ml_util.m"
        switch (ml_backend__ml_util__CallKind_10) {
#line 214 "ml_util.m"
          default:
#line 214 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_FALSE;
#line 214 "ml_util.m"
            break;
#line 214 "ml_util.m"
          case (MR_Integer) 0:
#line 214 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_TRUE;
#line 214 "ml_util.m"
            break;
#line 214 "ml_util.m"
          case (MR_Integer) 1:
#line 214 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_TRUE;
#line 214 "ml_util.m"
            break;
#line 214 "ml_util.m"
        }
#line 210 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 210 "ml_util.m"
          {
#line 219 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__MaybeObject_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 221 "ml_util.m"
              {
#line 221 "ml_util.m"
                ml_backend__ml_util__succeeded = ml_backend__ml_util__call_is_recursive_2_p_0(ml_backend__ml_util__Name_3, ml_backend__ml_util__Call_4);
              }
#line 210 "ml_util.m"
          }
#line 211 "ml_util.m"
      }
#line 210 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 210 "ml_util.m"
  }
#line 42 "ml_util.m"
}

#line 35 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defns_contain_main_1_p_0(
#line 35 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1)
#line 35 "ml_util.m"
{
#line 201 "ml_util.m"
  while (MR_TRUE)
#line 201 "ml_util.m"
    {
#line 201 "ml_util.m"
      /* tailcall optimized into a loop */
#line 201 "ml_util.m"
      {
#line 201 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 201 "ml_util.m"
        MR_Word ml_backend__ml_util__Defn_2;
#line 201 "ml_util.m"
        MR_Word ml_backend__ml_util__Defns_3;

#line 201 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 201 "ml_util.m"
          {
#line 201 "ml_util.m"
            ml_backend__ml_util__Defn_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 201 "ml_util.m"
            ml_backend__ml_util__Defns_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 203 "ml_util.m"
            {
#line 203 "ml_util.m"
              MR_Word ml_backend__ml_util__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 203 "ml_util.m"
              MR_Word ml_backend__ml_util__FuncName_8;
#line 203 "ml_util.m"
              MR_Word ml_backend__ml_util__V_15_15;
#line 203 "ml_util.m"
              MR_String ml_backend__ml_util__V_16_16;
#line 203 "ml_util.m"
              MR_Integer ml_backend__ml_util__V_17_17;
#line 203 "ml_util.m"
              MR_Word ml_backend__ml_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 203 "ml_util.m"
              MR_Word ml_backend__ml_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 203 "ml_util.m"
              MR_Word ml_backend__ml_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 204 "ml_util.m"
              MR_Integer ml_backend__ml_util__V_9_9;
#line 204 "ml_util.m"
              MR_Word ml_backend__ml_util__V_10_10;
#line 204 "ml_util.m"
              MR_Word ml_backend__ml_util__V_11_11;
#line 205 "ml_util.m"
              MR_Word ml_backend__ml_util__V_12_12;
#line 205 "ml_util.m"
              MR_Word ml_backend__ml_util__V_13_13;
#line 205 "ml_util.m"
              MR_Word ml_backend__ml_util__V_14_14;

#line 204 "ml_util.m"
              ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_4)) == (MR_mktag((MR_Integer) 2)));
#line 204 "ml_util.m"
              if (ml_backend__ml_util__succeeded)
#line 204 "ml_util.m"
                {
#line 204 "ml_util.m"
                  ml_backend__ml_util__FuncName_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 0)));
#line 204 "ml_util.m"
                  ml_backend__ml_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 1)));
#line 204 "ml_util.m"
                  ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 2)));
#line 204 "ml_util.m"
                  ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 3)));
#line 205 "ml_util.m"
                  ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_8)) == (MR_mktag((MR_Integer) 0)));
#line 205 "ml_util.m"
                  if (ml_backend__ml_util__succeeded)
#line 205 "ml_util.m"
                    {
#line 205 "ml_util.m"
                      ml_backend__ml_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 0)));
#line 205 "ml_util.m"
                      ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 1)));
#line 205 "ml_util.m"
                      ml_backend__ml_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 2)));
#line 205 "ml_util.m"
                      ml_backend__ml_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 3)));
#line 205 "ml_util.m"
                      ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 4)));
#line 205 "ml_util.m"
                      ml_backend__ml_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 5)));
#line 205 "ml_util.m"
                      ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_15_15 == (MR_Integer) 0);
#line 203 "ml_util.m"
                      if (ml_backend__ml_util__succeeded)
#line 203 "ml_util.m"
                        {
#line 205 "ml_util.m"
                          ml_backend__ml_util__succeeded = (strcmp(ml_backend__ml_util__V_16_16, (MR_String) "main") == 0);
#line 203 "ml_util.m"
                          if (ml_backend__ml_util__succeeded)
#line 205 "ml_util.m"
                            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_17_17 == (MR_Integer) 2);
#line 203 "ml_util.m"
                        }
#line 205 "ml_util.m"
                    }
#line 204 "ml_util.m"
                }
#line 203 "ml_util.m"
            }
#line 206 "ml_util.m"
            if (!(ml_backend__ml_util__succeeded))
#line 207 "ml_util.m"
              {
#line 207 "ml_util.m"
                /* direct tailcall eliminated */
#line 207 "ml_util.m"
                {
#line 207 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Defns_3;

#line 207 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 207 "ml_util.m"
                }
#line 207 "ml_util.m"
                continue;
#line 207 "ml_util.m"
              }
#line 201 "ml_util.m"
          }
#line 201 "ml_util.m"
        return ml_backend__ml_util__succeeded;
#line 201 "ml_util.m"
      }
#line 201 "ml_util.m"
      break;
#line 201 "ml_util.m"
    }
#line 35 "ml_util.m"
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
