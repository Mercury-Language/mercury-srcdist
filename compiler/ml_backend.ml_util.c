/*
** Automatically generated from `ml_util.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_unify_gen.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 596 "ml_util.m"
struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0_s {
#line 596 "ml_util.m"
  MR_Word * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__HeadVar__2_12;
#line 596 "ml_util.m"
  MR_Cont ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__cont;
#line 596 "ml_util.m"
  void * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__cont_env_ptr;
#line 596 "ml_util.m"
  MR_bool ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__succeeded;
#line 596 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__SubStatement_7;
#line 596 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__V_13_13;
#line 596 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__V_14_14;
#line 596 "ml_util.m"
};

#line 306 "ml_util.m"
struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s {
#line 306 "ml_util.m"
  MR_Word * ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4;
#line 306 "ml_util.m"
  MR_Cont ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont;
#line 306 "ml_util.m"
  void * ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr;
#line 309 "ml_util.m"
  MR_Word ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5;
#line 309 "ml_util.m"
  MR_Word ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8;
#line 310 "ml_util.m"
  MR_Box ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5;
#line 306 "ml_util.m"
};

#line 253 "ml_util.m"
struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s {
#line 253 "ml_util.m"
  MR_Word * ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4;
#line 253 "ml_util.m"
  MR_Cont ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont;
#line 253 "ml_util.m"
  void * ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr;
#line 256 "ml_util.m"
  MR_Word ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5;
#line 257 "ml_util.m"
  MR_Box ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5;
#line 253 "ml_util.m"
};

#line 86 "ml_util.m"
struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s {
#line 86 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3;
#line 86 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4;
#line 620 "ml_util.m"
  MR_bool ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
#line 620 "ml_util.m"
  jmp_buf ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0;
#line 620 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14;
#line 620 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15;
#line 620 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21;
#line 620 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22;
#line 86 "ml_util.m"
};

#line 78 "ml_util.m"
struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s {
#line 78 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3;
#line 78 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4;
#line 608 "ml_util.m"
  MR_bool ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
#line 608 "ml_util.m"
  jmp_buf ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0;
#line 608 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14;
#line 608 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15;
#line 608 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26;
#line 78 "ml_util.m"
};

#line 596 "ml_util.m"
struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s {
#line 596 "ml_util.m"
  MR_Box * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1;
#line 596 "ml_util.m"
  MR_Cont ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont;
#line 596 "ml_util.m"
  void * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr;
#line 596 "ml_util.m"
  MR_Word ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_HeadVar__2_12;
#line 596 "ml_util.m"
};


#line 596 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_1(
#line 596 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 596 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0(
#line 596 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 596 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_12,
#line 596 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 596 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 737 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
#line 737 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 737 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 695 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
#line 695 "ml_util.m"
  MR_Word ml_backend__ml_util__Body_4,
#line 695 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 673 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__defn_body_contains_var_2_f_0(
#line 673 "ml_util.m"
  MR_Word ml_backend__ml_util__DefnBody_4,
#line 673 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 568 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
#line 568 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 568 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 525 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
#line 525 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 525 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 438 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__default_contains_var_2_f_0(
#line 438 "ml_util.m"
  MR_Word ml_backend__ml_util__Default_4,
#line 438 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 427 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
#line 427 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 427 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 353 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__stmt_contains_var_2_f_0(
#line 353 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_4,
#line 353 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 343 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
#line 343 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 343 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_2);

#line 333 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__statements_contains_var_2_f_0(
#line 333 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 333 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 314 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__default_contains_statement_2_p_0(
#line 314 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 314 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_2,
#line 314 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 314 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 310 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_2(
#line 310 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 309 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_1(
#line 309 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 306 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0(
#line 306 "ml_util.m"
  MR_Word ml_backend__ml_util__Cases_3,
#line 306 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 306 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 306 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 260 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(
#line 260 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 260 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
#line 260 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 260 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 257 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_2(
#line 257 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 256 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_1(
#line 256 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 253 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0(
#line 253 "ml_util.m"
  MR_Word ml_backend__ml_util__Statements_3,
#line 253 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 253 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 253 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 620 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(
#line 620 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 620 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(
#line 620 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 620 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(
#line 620 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 608 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(
#line 608 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 608 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(
#line 608 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 608 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(
#line 608 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 596 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
#line 596 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 596 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
#line 596 "ml_util.m"
  MR_Box ml_backend__ml_util__closure_arg,
#line 596 "ml_util.m"
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
#line 596 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 596 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);


static /* final */ const MR_Box ml_backend__ml_util_scalar_common_1[3][2];

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_2[1][5];

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_3[7][1];




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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 596 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_1(
#line 596 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 596 "ml_util.m"
{
#line 596 "ml_util.m"
  {
#line 596 "ml_util.m"
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 596 "ml_util.m"
    {
#line 598 "ml_util.m"
      MR_Word ml_backend__ml_util__V_11_11;
#line 598 "ml_util.m"
      MR_Word ml_backend__ml_util__V_8_8;
#line 598 "ml_util.m"
      MR_Word ml_backend__ml_util__V_9_9;
#line 598 "ml_util.m"
      MR_String ml_backend__ml_util__V_10_10;

#line 598 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 0)));
#line 598 "ml_util.m"
      ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 1)));
#line 598 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__V_13_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__V_13_13, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 598 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__succeeded)
#line 598 "ml_util.m"
        {
#line 598 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__V_13_13, (MR_Integer) 1)));
#line 596 "ml_util.m"
          {
#line 598 "ml_util.m"
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 598 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__succeeded)
#line 598 "ml_util.m"
              {
#line 598 "ml_util.m"
                {
#line 598 "ml_util.m"
                  *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__HeadVar__2_12) = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__V_14_14, (MR_Integer) 1)));
#line 598 "ml_util.m"
                  ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__V_14_14, (MR_Integer) 2)));
#line 598 "ml_util.m"
                  ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__V_14_14, (MR_Integer) 3)));
#line 598 "ml_util.m"
                  ml_backend__ml_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__V_14_14, (MR_Integer) 4)));
#line 598 "ml_util.m"
                }
#line 598 "ml_util.m"
                {
#line 598 "ml_util.m"
                  ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__cont_env_ptr);
#line 598 "ml_util.m"
                  return;
                }
#line 598 "ml_util.m"
              }
#line 596 "ml_util.m"
          }
#line 598 "ml_util.m"
        }
#line 596 "ml_util.m"
    }
#line 596 "ml_util.m"
  }
#line 596 "ml_util.m"
}

#line 596 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0(
#line 596 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 596 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_12,
#line 596 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 596 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 596 "ml_util.m"
{
#line 596 "ml_util.m"
  {
#line 596 "ml_util.m"
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0_s ml_backend__ml_util__env;

#line 596 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__HeadVar__2_12 = ml_backend__ml_util__HeadVar__2_12;
#line 596 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__cont = ml_backend__ml_util__cont;
#line 596 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 267 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__SubStatement_7 = ml_backend__ml_util__Statement_3;
#line 267 "ml_util.m"
    {
#line 267 "ml_util.m"
      ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_1(&ml_backend__ml_util__env);
    }
#line 268 "ml_util.m"
    {
#line 268 "ml_util.m"
      MR_Word ml_backend__ml_util__Stmt_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_3, (MR_Integer) 0)));
#line 269 "ml_util.m"
      MR_Word ml_backend__ml_util___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_3, (MR_Integer) 1)));

#line 270 "ml_util.m"
      {
#line 270 "ml_util.m"
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_20, &(ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_env_0__SubStatement_7, ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0_1, &ml_backend__ml_util__env);
      }
#line 268 "ml_util.m"
    }
#line 596 "ml_util.m"
  }
#line 596 "ml_util.m"
}

#line 737 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
#line 737 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 737 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 737 "ml_util.m"
{
#line 739 "ml_util.m"
  while (MR_TRUE)
#line 739 "ml_util.m"
    {
#line 739 "ml_util.m"
      /* tailcall optimized into a loop */
#line 739 "ml_util.m"
      {
#line 739 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 739 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 739 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 739 "ml_util.m"
        else
#line 741 "ml_util.m"
          {
#line 741 "ml_util.m"
            MR_Word ml_backend__ml_util__Initializer_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 741 "ml_util.m"
            MR_Word ml_backend__ml_util__Initializers_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 742 "ml_util.m"
            MR_Word ml_backend__ml_util__V_9_9;

#line 742 "ml_util.m"
            {
#line 742 "ml_util.m"
              ml_backend__ml_util__V_9_9 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 742 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_9_9 == (MR_Integer) 1);
#line 744 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 743 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 744 "ml_util.m"
            else
#line 745 "ml_util.m"
              {
#line 745 "ml_util.m"
                /* direct tailcall eliminated */
#line 745 "ml_util.m"
                {
#line 745 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Initializers_6;

#line 745 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 745 "ml_util.m"
                }
#line 745 "ml_util.m"
                continue;
#line 745 "ml_util.m"
              }
#line 741 "ml_util.m"
          }
#line 739 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 739 "ml_util.m"
      }
#line 739 "ml_util.m"
      break;
#line 739 "ml_util.m"
    }
#line 737 "ml_util.m"
}

#line 695 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
#line 695 "ml_util.m"
  MR_Word ml_backend__ml_util__Body_4,
#line 695 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 695 "ml_util.m"
{
#line 699 "ml_util.m"
  {
#line 699 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 699 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 699 "ml_util.m"
    if ((ml_backend__ml_util__Body_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 700 "ml_util.m"
      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 699 "ml_util.m"
    else
#line 702 "ml_util.m"
      {
#line 702 "ml_util.m"
        MR_Word ml_backend__ml_util__Statement_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Body_4), (MR_Integer) 1);
#line 702 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 0)));
#line 350 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 1)));

#line 351 "ml_util.m"
        {
#line 351 "ml_util.m"
          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_5);
        }
#line 702 "ml_util.m"
      }
#line 699 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 699 "ml_util.m"
  }
#line 695 "ml_util.m"
}

#line 673 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__defn_body_contains_var_2_f_0(
#line 673 "ml_util.m"
  MR_Word ml_backend__ml_util__DefnBody_4,
#line 673 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 673 "ml_util.m"
{
#line 677 "ml_util.m"
  {
#line 677 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 677 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 677 "ml_util.m"
    if (((MR_tag((MR_Word) ml_backend__ml_util__DefnBody_4)) == (MR_mktag((MR_Integer) 0))))
#line 685 "ml_util.m"
      {
#line 685 "ml_util.m"
        MR_Word ml_backend__ml_util__ClassDefn_15 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__DefnBody_4), (MR_Integer) 0);
#line 685 "ml_util.m"
        MR_Word ml_backend__ml_util__CtorDefns_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 5)));
#line 685 "ml_util.m"
        MR_Word ml_backend__ml_util__FieldDefns_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 6)));
#line 686 "ml_util.m"
        MR_Word ml_backend__ml_util___Kind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 0)));
#line 686 "ml_util.m"
        MR_Word ml_backend__ml_util___Imports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 1)));
#line 686 "ml_util.m"
        MR_Word ml_backend__ml_util___Inherits_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 2)));
#line 686 "ml_util.m"
        MR_Word ml_backend__ml_util___Implements_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 3)));
#line 686 "ml_util.m"
        MR_Word ml_backend__ml_util___TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 4)));
#line 688 "ml_util.m"
        MR_Word ml_backend__ml_util__V_23_23;

#line 688 "ml_util.m"
        {
#line 688 "ml_util.m"
          ml_backend__ml_util__V_23_23 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__FieldDefns_22, ml_backend__ml_util__DataName_5);
        }
#line 688 "ml_util.m"
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_23_23 == (MR_Integer) 1);
#line 690 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 689 "ml_util.m"
          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 690 "ml_util.m"
        else
#line 691 "ml_util.m"
          {
#line 691 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__CtorDefns_21, ml_backend__ml_util__DataName_5);
          }
#line 685 "ml_util.m"
      }
#line 677 "ml_util.m"
    else
#line 677 "ml_util.m"
      if (((MR_tag((MR_Word) ml_backend__ml_util__DefnBody_4)) == (MR_mktag((MR_Integer) 1))))
#line 677 "ml_util.m"
        {
#line 677 "ml_util.m"
          MR_Word ml_backend__ml_util__Initializer_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 1)));
#line 677 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 0)));
#line 677 "ml_util.m"
          MR_Word ml_backend__ml_util___GCStatement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 2)));

#line 679 "ml_util.m"
          {
#line 679 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_8, ml_backend__ml_util__DataName_5);
          }
#line 677 "ml_util.m"
        }
#line 677 "ml_util.m"
      else
#line 682 "ml_util.m"
        {
#line 682 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 2)));
#line 681 "ml_util.m"
          MR_Word ml_backend__ml_util___PredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 0)));
#line 681 "ml_util.m"
          MR_Word ml_backend__ml_util___Params_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 1)));
#line 681 "ml_util.m"
          MR_Word ml_backend__ml_util___Attrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 3)));
#line 681 "ml_util.m"
          MR_Word ml_backend__ml_util___EnvVarNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 4)));

#line 683 "ml_util.m"
          {
#line 683 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__function_body_contains_var_2_f_0(ml_backend__ml_util__FunctionBody_12, ml_backend__ml_util__DataName_5);
          }
#line 682 "ml_util.m"
        }
#line 677 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 677 "ml_util.m"
  }
#line 673 "ml_util.m"
}

#line 568 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
#line 568 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 568 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 568 "ml_util.m"
{
#line 570 "ml_util.m"
  while (MR_TRUE)
#line 570 "ml_util.m"
    {
#line 570 "ml_util.m"
      /* tailcall optimized into a loop */
#line 570 "ml_util.m"
      {
#line 570 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 570 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 570 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 570 "ml_util.m"
        else
#line 572 "ml_util.m"
          {
#line 572 "ml_util.m"
            MR_Word ml_backend__ml_util__OutlineArg_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 572 "ml_util.m"
            MR_Word ml_backend__ml_util__OutlineArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));

#line 583 "ml_util.m"
            if (((MR_tag((MR_Word) ml_backend__ml_util__OutlineArg_5)) == (MR_mktag((MR_Integer) 1))))
#line 583 "ml_util.m"
              {
#line 583 "ml_util.m"
                MR_Word ml_backend__ml_util__V_9_9;
#line 583 "ml_util.m"
                MR_Word ml_backend__ml_util__Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 2)));
#line 583 "ml_util.m"
                MR_Word ml_backend__ml_util___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 0)));
#line 583 "ml_util.m"
                MR_String ml_backend__ml_util___Str_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 1)));

#line 584 "ml_util.m"
                {
#line 584 "ml_util.m"
                  ml_backend__ml_util__V_9_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_15, ml_backend__ml_util__HeadVar__2_2);
                }
#line 573 "ml_util.m"
                ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_9_9 == (MR_Integer) 1);
#line 583 "ml_util.m"
              }
#line 583 "ml_util.m"
            else
#line 583 "ml_util.m"
              if (((MR_tag((MR_Word) ml_backend__ml_util__OutlineArg_5)) == (MR_mktag((MR_Integer) 2))))
#line 586 "ml_util.m"
                {
#line 586 "ml_util.m"
                  MR_Word ml_backend__ml_util__Lval_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 2)));
#line 586 "ml_util.m"
                  MR_Word ml_backend__ml_util__V_22_22;
#line 586 "ml_util.m"
                  MR_Word ml_backend__ml_util___Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 0)));
#line 586 "ml_util.m"
                  MR_String ml_backend__ml_util___Str_18 = ((MR_String) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 1)));

#line 587 "ml_util.m"
                  {
#line 587 "ml_util.m"
                    ml_backend__ml_util__V_22_22 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_16, ml_backend__ml_util__HeadVar__2_2);
                  }
#line 573 "ml_util.m"
                  ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_22_22 == (MR_Integer) 1);
#line 586 "ml_util.m"
                }
#line 583 "ml_util.m"
              else
#line 583 "ml_util.m"
                ml_backend__ml_util__succeeded = MR_FALSE;
#line 575 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 574 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 575 "ml_util.m"
            else
#line 576 "ml_util.m"
              {
#line 576 "ml_util.m"
                /* direct tailcall eliminated */
#line 576 "ml_util.m"
                {
#line 576 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

#line 576 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 576 "ml_util.m"
                }
#line 576 "ml_util.m"
                continue;
#line 576 "ml_util.m"
              }
#line 572 "ml_util.m"
          }
#line 570 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 570 "ml_util.m"
      }
#line 570 "ml_util.m"
      break;
#line 570 "ml_util.m"
    }
#line 568 "ml_util.m"
}

#line 525 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
#line 525 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 525 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 525 "ml_util.m"
{
#line 528 "ml_util.m"
  while (MR_TRUE)
#line 528 "ml_util.m"
    {
#line 528 "ml_util.m"
      /* tailcall optimized into a loop */
#line 528 "ml_util.m"
      {
#line 528 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 528 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 528 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 528 "ml_util.m"
        else
#line 530 "ml_util.m"
          {
#line 530 "ml_util.m"
            MR_Word ml_backend__ml_util__TargetCode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 530 "ml_util.m"
            MR_Word ml_backend__ml_util__TargetCodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));

#line 547 "ml_util.m"
            if (((MR_tag((MR_Word) ml_backend__ml_util__TargetCode_5)) == (MR_mktag((MR_Integer) 2))))
#line 550 "ml_util.m"
              {
#line 550 "ml_util.m"
                MR_Word ml_backend__ml_util__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)));
#line 550 "ml_util.m"
                MR_Word ml_backend__ml_util__V_35_35;

#line 551 "ml_util.m"
                {
#line 551 "ml_util.m"
                  ml_backend__ml_util__V_35_35 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_20, ml_backend__ml_util__HeadVar__2_2);
                }
#line 531 "ml_util.m"
                ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_35_35 == (MR_Integer) 1);
#line 550 "ml_util.m"
              }
#line 547 "ml_util.m"
            else
#line 547 "ml_util.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_util__TargetCode_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 556 "ml_util.m"
                {
#line 556 "ml_util.m"
                  MR_Word ml_backend__ml_util__EntityName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
#line 556 "ml_util.m"
                  MR_Word ml_backend__ml_util__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_22, (MR_Integer) 0)));
#line 556 "ml_util.m"
                  MR_Word ml_backend__ml_util__QualKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_22, (MR_Integer) 1)));
#line 556 "ml_util.m"
                  MR_Word ml_backend__ml_util__UnqualDataName_25;
#line 556 "ml_util.m"
                  MR_Word ml_backend__ml_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_22, (MR_Integer) 2)));
#line 556 "ml_util.m"
                  MR_Word ml_backend__ml_util__V_27_27;
#line 556 "ml_util.m"
                  MR_Word ml_backend__ml_util__V_28_28;
#line 556 "ml_util.m"
                  MR_Word ml_backend__ml_util__V_29_29;

#line 558 "ml_util.m"
                  ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 558 "ml_util.m"
                  if (ml_backend__ml_util__succeeded)
#line 558 "ml_util.m"
                    {
#line 558 "ml_util.m"
                      ml_backend__ml_util__UnqualDataName_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__V_26_26, (MR_Integer) 0)));
#line 560 "ml_util.m"
                      ml_backend__ml_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 0)));
#line 560 "ml_util.m"
                      ml_backend__ml_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 560 "ml_util.m"
                      ml_backend__ml_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 2)));
#line 560 "ml_util.m"
                      {
#line 560 "ml_util.m"
                        ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_23, ml_backend__ml_util__V_27_27);
                      }
#line 556 "ml_util.m"
                      if (ml_backend__ml_util__succeeded)
#line 556 "ml_util.m"
                        {
#line 560 "ml_util.m"
                          ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_24 == ml_backend__ml_util__V_28_28);
#line 556 "ml_util.m"
                          if (ml_backend__ml_util__succeeded)
#line 560 "ml_util.m"
                            {
#line 560 "ml_util.m"
                              ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__UnqualDataName_25, ml_backend__ml_util__V_29_29);
                            }
#line 556 "ml_util.m"
                        }
#line 558 "ml_util.m"
                    }
#line 556 "ml_util.m"
                }
#line 547 "ml_util.m"
              else
#line 547 "ml_util.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_util__TargetCode_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 553 "ml_util.m"
                  {
#line 553 "ml_util.m"
                    MR_Word ml_backend__ml_util__Lval_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
#line 553 "ml_util.m"
                    MR_Word ml_backend__ml_util__V_42_42;

#line 554 "ml_util.m"
                    {
#line 554 "ml_util.m"
                      ml_backend__ml_util__V_42_42 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_21, ml_backend__ml_util__HeadVar__2_2);
                    }
#line 531 "ml_util.m"
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_42_42 == (MR_Integer) 1);
#line 553 "ml_util.m"
                  }
#line 547 "ml_util.m"
                else
#line 547 "ml_util.m"
                  ml_backend__ml_util__succeeded = MR_FALSE;
#line 533 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 532 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 533 "ml_util.m"
            else
#line 534 "ml_util.m"
              {
#line 534 "ml_util.m"
                /* direct tailcall eliminated */
#line 534 "ml_util.m"
                {
#line 534 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 534 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 534 "ml_util.m"
                }
#line 534 "ml_util.m"
                continue;
#line 534 "ml_util.m"
              }
#line 530 "ml_util.m"
          }
#line 528 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 528 "ml_util.m"
      }
#line 528 "ml_util.m"
      break;
#line 528 "ml_util.m"
    }
#line 525 "ml_util.m"
}

#line 438 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__default_contains_var_2_f_0(
#line 438 "ml_util.m"
  MR_Word ml_backend__ml_util__Default_4,
#line 438 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 438 "ml_util.m"
{
#line 444 "ml_util.m"
  {
#line 444 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 444 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 444 "ml_util.m"
    if (((MR_tag((MR_Word) ml_backend__ml_util__Default_4)) == (MR_mktag((MR_Integer) 1))))
#line 447 "ml_util.m"
      {
#line 447 "ml_util.m"
        MR_Word ml_backend__ml_util__Statement_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Default_4), (MR_Integer) 1);
#line 447 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 0)));
#line 350 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 1)));

#line 351 "ml_util.m"
        {
#line 351 "ml_util.m"
          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_5);
        }
#line 447 "ml_util.m"
      }
#line 444 "ml_util.m"
    else
#line 445 "ml_util.m"
      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 444 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 444 "ml_util.m"
  }
#line 438 "ml_util.m"
}

#line 427 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
#line 427 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 427 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 427 "ml_util.m"
{
#line 429 "ml_util.m"
  while (MR_TRUE)
#line 429 "ml_util.m"
    {
#line 429 "ml_util.m"
      /* tailcall optimized into a loop */
#line 429 "ml_util.m"
      {
#line 429 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 429 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 429 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 429 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 429 "ml_util.m"
        else
#line 430 "ml_util.m"
          {
#line 430 "ml_util.m"
            MR_Word ml_backend__ml_util__Case_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 430 "ml_util.m"
            MR_Word ml_backend__ml_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 430 "ml_util.m"
            MR_Word ml_backend__ml_util__Statement_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 2)));
#line 431 "ml_util.m"
            MR_Word ml_backend__ml_util___FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 0)));
#line 431 "ml_util.m"
            MR_Word ml_backend__ml_util___LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 1)));
#line 432 "ml_util.m"
            MR_Word ml_backend__ml_util__V_12_12;
#line 432 "ml_util.m"
            MR_Word ml_backend__ml_util__Stmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 0)));
#line 350 "ml_util.m"
            MR_Word ml_backend__ml_util___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 1)));

#line 351 "ml_util.m"
            {
#line 351 "ml_util.m"
              ml_backend__ml_util__V_12_12 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_16, ml_backend__ml_util__HeadVar__2_2);
            }
#line 432 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_12_12 == (MR_Integer) 1);
#line 434 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 433 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 434 "ml_util.m"
            else
#line 435 "ml_util.m"
              {
#line 435 "ml_util.m"
                /* direct tailcall eliminated */
#line 435 "ml_util.m"
                {
#line 435 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Cases_6;

#line 435 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 435 "ml_util.m"
                }
#line 435 "ml_util.m"
                continue;
#line 435 "ml_util.m"
              }
#line 430 "ml_util.m"
          }
#line 429 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 429 "ml_util.m"
      }
#line 429 "ml_util.m"
      break;
#line 429 "ml_util.m"
    }
#line 427 "ml_util.m"
}

#line 353 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__stmt_contains_var_2_f_0(
#line 353 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_4,
#line 353 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 353 "ml_util.m"
{
#line 357 "ml_util.m"
  {
#line 357 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 357 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 357 "ml_util.m"
    if (((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 0))))
#line 357 "ml_util.m"
      {
#line 357 "ml_util.m"
        MR_Word ml_backend__ml_util__Defns_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
#line 357 "ml_util.m"
        MR_Word ml_backend__ml_util__Statements_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 358 "ml_util.m"
        MR_Word ml_backend__ml_util__V_43_43;

#line 358 "ml_util.m"
        {
#line 358 "ml_util.m"
          ml_backend__ml_util__V_43_43 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__Defns_7, ml_backend__ml_util__DataName_5);
        }
#line 358 "ml_util.m"
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_43_43 == (MR_Integer) 1);
#line 360 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 359 "ml_util.m"
          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 360 "ml_util.m"
        else
#line 361 "ml_util.m"
          {
#line 361 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statements_contains_var_2_f_0(ml_backend__ml_util__Statements_8, ml_backend__ml_util__DataName_5);
          }
#line 357 "ml_util.m"
      }
#line 357 "ml_util.m"
    else
#line 357 "ml_util.m"
      if (((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 2))))
#line 371 "ml_util.m"
        {
#line 371 "ml_util.m"
          MR_Word ml_backend__ml_util__Cond_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
#line 371 "ml_util.m"
          MR_Word ml_backend__ml_util__Then_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 371 "ml_util.m"
          MR_Word ml_backend__ml_util__MaybeElse_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 372 "ml_util.m"
          MR_Word ml_backend__ml_util__V_40_40;

#line 372 "ml_util.m"
          {
#line 372 "ml_util.m"
            ml_backend__ml_util__V_40_40 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Cond_12, ml_backend__ml_util__DataName_5);
          }
#line 372 "ml_util.m"
          ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_40_40 == (MR_Integer) 1);
#line 374 "ml_util.m"
          if (ml_backend__ml_util__succeeded)
#line 373 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 374 "ml_util.m"
          else
#line 376 "ml_util.m"
            {
#line 374 "ml_util.m"
              MR_Word ml_backend__ml_util__V_41_41;
#line 374 "ml_util.m"
              MR_Word ml_backend__ml_util__Stmt_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_13, (MR_Integer) 0)));
#line 350 "ml_util.m"
              MR_Word ml_backend__ml_util___Context_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_13, (MR_Integer) 1)));

#line 351 "ml_util.m"
              {
#line 351 "ml_util.m"
                ml_backend__ml_util__V_41_41 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_96, ml_backend__ml_util__DataName_5);
              }
#line 374 "ml_util.m"
              ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_41_41 == (MR_Integer) 1);
#line 376 "ml_util.m"
              if (ml_backend__ml_util__succeeded)
#line 375 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 376 "ml_util.m"
              else
#line 377 "ml_util.m"
                {
#line 377 "ml_util.m"
                  return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__maybe_statement_contains_var_2_f_0(ml_backend__ml_util__MaybeElse_14, ml_backend__ml_util__DataName_5);
                }
#line 376 "ml_util.m"
            }
#line 371 "ml_util.m"
        }
#line 357 "ml_util.m"
      else
#line 357 "ml_util.m"
        if (((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 1))))
#line 364 "ml_util.m"
          {
#line 364 "ml_util.m"
            MR_Word ml_backend__ml_util__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 364 "ml_util.m"
            MR_Word ml_backend__ml_util__Statement_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 364 "ml_util.m"
            MR_Word ml_backend__ml_util___Kind_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
#line 365 "ml_util.m"
            MR_Word ml_backend__ml_util__V_42_42;

#line 365 "ml_util.m"
            {
#line 365 "ml_util.m"
              ml_backend__ml_util__V_42_42 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_10, ml_backend__ml_util__DataName_5);
            }
#line 365 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_42_42 == (MR_Integer) 1);
#line 367 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 366 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 367 "ml_util.m"
            else
#line 368 "ml_util.m"
              {
#line 368 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_11, ml_backend__ml_util__DataName_5);
              }
#line 364 "ml_util.m"
          }
#line 357 "ml_util.m"
        else
#line 357 "ml_util.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 423 "ml_util.m"
            {
#line 423 "ml_util.m"
              MR_Word ml_backend__ml_util__AtomicStmt_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 455 "ml_util.m"
              if ((ml_backend__ml_util__AtomicStmt_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 455 "ml_util.m"
              else
#line 455 "ml_util.m"
                if (((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 2))))
#line 460 "ml_util.m"
                  {
#line 460 "ml_util.m"
                    MR_Word ml_backend__ml_util__Lval_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)));
#line 460 "ml_util.m"
                    MR_Word ml_backend__ml_util__Rval_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));
#line 461 "ml_util.m"
                    MR_Word ml_backend__ml_util__V_71_71;

#line 461 "ml_util.m"
                    {
#line 461 "ml_util.m"
                      ml_backend__ml_util__V_71_71 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_51, ml_backend__ml_util__DataName_5);
                    }
#line 461 "ml_util.m"
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_71_71 == (MR_Integer) 1);
#line 463 "ml_util.m"
                    if (ml_backend__ml_util__succeeded)
#line 462 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 463 "ml_util.m"
                    else
#line 464 "ml_util.m"
                      {
#line 464 "ml_util.m"
                        return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_52, ml_backend__ml_util__DataName_5);
                      }
#line 460 "ml_util.m"
                  }
#line 455 "ml_util.m"
                else
#line 455 "ml_util.m"
                  if (((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 1))))
#line 456 "ml_util.m"
                    ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 455 "ml_util.m"
                  else
#line 455 "ml_util.m"
                    if (((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 460 "ml_util.m"
                      {
#line 460 "ml_util.m"
                        MR_Word ml_backend__ml_util__Lval_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));
#line 460 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 2)));
#line 461 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_77_77;

#line 461 "ml_util.m"
                        {
#line 461 "ml_util.m"
                          ml_backend__ml_util__V_77_77 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_79, ml_backend__ml_util__DataName_5);
                        }
#line 461 "ml_util.m"
                        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_77_77 == (MR_Integer) 1);
#line 463 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 462 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 463 "ml_util.m"
                        else
#line 464 "ml_util.m"
                          {
#line 464 "ml_util.m"
                            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_80, ml_backend__ml_util__DataName_5);
                          }
#line 460 "ml_util.m"
                      }
#line 455 "ml_util.m"
                    else
#line 455 "ml_util.m"
                      if (((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 467 "ml_util.m"
                        {
#line 467 "ml_util.m"
                          MR_Word ml_backend__ml_util__Rval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));

#line 468 "ml_util.m"
                          {
#line 468 "ml_util.m"
                            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_72, ml_backend__ml_util__DataName_5);
                          }
#line 467 "ml_util.m"
                        }
#line 455 "ml_util.m"
                      else
#line 455 "ml_util.m"
                        if (((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 491 "ml_util.m"
                          {
#line 491 "ml_util.m"
                            MR_Word ml_backend__ml_util__Components_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 2)));
#line 491 "ml_util.m"
                            MR_Word ml_backend__ml_util___Lang_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));

#line 492 "ml_util.m"
                            {
#line 492 "ml_util.m"
                              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__target_code_components_contains_var_2_f_0(ml_backend__ml_util__Components_65, ml_backend__ml_util__DataName_5);
                            }
#line 491 "ml_util.m"
                          }
#line 455 "ml_util.m"
                        else
#line 455 "ml_util.m"
                          if (((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 482 "ml_util.m"
                            {
#line 482 "ml_util.m"
                              MR_Word ml_backend__ml_util__Lval_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));

#line 483 "ml_util.m"
                              {
#line 483 "ml_util.m"
                                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_73, ml_backend__ml_util__DataName_5);
                              }
#line 482 "ml_util.m"
                            }
#line 455 "ml_util.m"
                          else
#line 455 "ml_util.m"
                            if (((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 472 "ml_util.m"
                              {
#line 472 "ml_util.m"
                                MR_Word ml_backend__ml_util__Target_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));
#line 472 "ml_util.m"
                                MR_Word ml_backend__ml_util__Args_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 7)));
#line 470 "ml_util.m"
                                MR_Word ml_backend__ml_util___MaybeTag_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 2)));
#line 470 "ml_util.m"
                                MR_Word ml_backend__ml_util___ExplicitSecTag_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 3)));
#line 470 "ml_util.m"
                                MR_Word ml_backend__ml_util___Type_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 4)));
#line 470 "ml_util.m"
                                MR_Word ml_backend__ml_util___MaybeSize_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 5)));
#line 470 "ml_util.m"
                                MR_Word ml_backend__ml_util___MaybeCtorName_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 6)));
#line 470 "ml_util.m"
                                MR_Word ml_backend__ml_util___ArgTypes_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 8)));
#line 470 "ml_util.m"
                                MR_Word ml_backend__ml_util___MayUseAtomic_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 9)));
#line 470 "ml_util.m"
                                MR_Word ml_backend__ml_util___AllocId_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 10)));
#line 473 "ml_util.m"
                                MR_Word ml_backend__ml_util__V_70_70;

#line 473 "ml_util.m"
                                {
#line 473 "ml_util.m"
                                  ml_backend__ml_util__V_70_70 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Target_53, ml_backend__ml_util__DataName_5);
                                }
#line 473 "ml_util.m"
                                ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_70_70 == (MR_Integer) 1);
#line 475 "ml_util.m"
                                if (ml_backend__ml_util__succeeded)
#line 474 "ml_util.m"
                                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 475 "ml_util.m"
                                else
#line 476 "ml_util.m"
                                  {
#line 476 "ml_util.m"
                                    return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_59, ml_backend__ml_util__DataName_5);
                                  }
#line 472 "ml_util.m"
                              }
#line 455 "ml_util.m"
                            else
#line 455 "ml_util.m"
                              if (((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 495 "ml_util.m"
                                {
#line 495 "ml_util.m"
                                  MR_Word ml_backend__ml_util__OutlineArgs_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 2)));
#line 495 "ml_util.m"
                                  MR_Word ml_backend__ml_util__ReturnLvals_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 3)));
#line 494 "ml_util.m"
                                  MR_String ml_backend__ml_util___Code_68 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 4)));
#line 494 "ml_util.m"
                                  MR_Word ml_backend__ml_util___Lang_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));
#line 496 "ml_util.m"
                                  MR_Word ml_backend__ml_util__V_69_69;

#line 496 "ml_util.m"
                                  {
#line 496 "ml_util.m"
                                    ml_backend__ml_util__V_69_69 = ml_backend__ml_util__outline_args_contains_var_2_f_0(ml_backend__ml_util__OutlineArgs_66, ml_backend__ml_util__DataName_5);
                                  }
#line 496 "ml_util.m"
                                  ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_69_69 == (MR_Integer) 1);
#line 498 "ml_util.m"
                                  if (ml_backend__ml_util__succeeded)
#line 497 "ml_util.m"
                                    ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 498 "ml_util.m"
                                  else
#line 499 "ml_util.m"
                                    {
#line 499 "ml_util.m"
                                      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__ReturnLvals_67, ml_backend__ml_util__DataName_5);
                                    }
#line 495 "ml_util.m"
                                }
#line 455 "ml_util.m"
                              else
#line 455 "ml_util.m"
                                if (((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 485 "ml_util.m"
                                  {
#line 485 "ml_util.m"
                                    MR_Word ml_backend__ml_util__Rval_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));

#line 486 "ml_util.m"
                                    {
#line 486 "ml_util.m"
                                      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_74, ml_backend__ml_util__DataName_5);
                                    }
#line 485 "ml_util.m"
                                  }
#line 455 "ml_util.m"
                                else
#line 488 "ml_util.m"
                                  {
#line 488 "ml_util.m"
                                    MR_Word ml_backend__ml_util__TrailOp_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));

#line 507 "ml_util.m"
                                    if ((((ml_backend__ml_util__TrailOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || ((ml_backend__ml_util__TrailOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 516 "ml_util.m"
                                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 507 "ml_util.m"
                                    else
#line 507 "ml_util.m"
                                      if (((MR_tag((MR_Word) ml_backend__ml_util__TrailOp_63)) == (MR_mktag((MR_Integer) 2))))
#line 510 "ml_util.m"
                                        {
#line 510 "ml_util.m"
                                          MR_Word ml_backend__ml_util__Rval_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_63, (MR_Integer) 0)));
#line 510 "ml_util.m"
                                          MR_Word ml_backend__ml_util___Reason_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_63, (MR_Integer) 1)));

#line 511 "ml_util.m"
                                          {
#line 511 "ml_util.m"
                                            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_86, ml_backend__ml_util__DataName_5);
                                          }
#line 510 "ml_util.m"
                                        }
#line 507 "ml_util.m"
                                      else
#line 507 "ml_util.m"
                                        if (((MR_tag((MR_Word) ml_backend__ml_util__TrailOp_63)) == (MR_mktag((MR_Integer) 1))))
#line 507 "ml_util.m"
                                          {
#line 507 "ml_util.m"
                                            MR_Word ml_backend__ml_util__Lval_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__TrailOp_63, (MR_Integer) 0)));

#line 508 "ml_util.m"
                                            {
#line 508 "ml_util.m"
                                              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_85, ml_backend__ml_util__DataName_5);
                                            }
#line 507 "ml_util.m"
                                          }
#line 507 "ml_util.m"
                                        else
#line 507 "ml_util.m"
                                          if (((((MR_tag((MR_Word) ml_backend__ml_util__TrailOp_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_63, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 518 "ml_util.m"
                                            {
#line 518 "ml_util.m"
                                              MR_Word ml_backend__ml_util__Lval_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_63, (MR_Integer) 1)));

#line 519 "ml_util.m"
                                              {
#line 519 "ml_util.m"
                                                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_88, ml_backend__ml_util__DataName_5);
                                              }
#line 518 "ml_util.m"
                                            }
#line 507 "ml_util.m"
                                          else
#line 521 "ml_util.m"
                                            {
#line 521 "ml_util.m"
                                              MR_Word ml_backend__ml_util__Rval_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_63, (MR_Integer) 1)));

#line 522 "ml_util.m"
                                              {
#line 522 "ml_util.m"
                                                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_89, ml_backend__ml_util__DataName_5);
                                              }
#line 521 "ml_util.m"
                                            }
#line 488 "ml_util.m"
                                  }
#line 423 "ml_util.m"
            }
#line 357 "ml_util.m"
          else
#line 357 "ml_util.m"
            if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 397 "ml_util.m"
              {
#line 397 "ml_util.m"
                MR_Word ml_backend__ml_util__Func_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 397 "ml_util.m"
                MR_Word ml_backend__ml_util__Obj_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
#line 397 "ml_util.m"
                MR_Word ml_backend__ml_util__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
#line 397 "ml_util.m"
                MR_Word ml_backend__ml_util__RetLvals_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
#line 397 "ml_util.m"
                MR_Word ml_backend__ml_util___Sig_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 397 "ml_util.m"
                MR_Word ml_backend__ml_util___TailCall_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 6)));
#line 398 "ml_util.m"
                MR_Word ml_backend__ml_util__V_35_35;

#line 398 "ml_util.m"
                {
#line 398 "ml_util.m"
                  ml_backend__ml_util__V_35_35 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Func_24, ml_backend__ml_util__DataName_5);
                }
#line 398 "ml_util.m"
                ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_35_35 == (MR_Integer) 1);
#line 400 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 399 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 400 "ml_util.m"
                else
#line 402 "ml_util.m"
                  {
#line 1838 "ml_backend.ml_util.c"
                    MR_Word ml_backend__ml_util__Rval_91;
#line 1840 "ml_backend.ml_util.c"
                    MR_Word ml_backend__ml_util__V_99_99;

#line 1843 "ml_backend.ml_util.c"
                    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Obj_25)) == (MR_mktag((MR_Integer) 1)));
#line 1845 "ml_backend.ml_util.c"
                    if (ml_backend__ml_util__succeeded)
#line 1847 "ml_backend.ml_util.c"
                      {
#line 1849 "ml_backend.ml_util.c"
                        ml_backend__ml_util__Rval_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Obj_25, (MR_Integer) 0)));
#line 757 "ml_util.m"
                        {
#line 757 "ml_util.m"
                          ml_backend__ml_util__V_99_99 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_91, ml_backend__ml_util__DataName_5);
                        }
#line 400 "ml_util.m"
                        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_99_99 == (MR_Integer) 1);
#line 1858 "ml_backend.ml_util.c"
                      }
#line 402 "ml_util.m"
                    if (ml_backend__ml_util__succeeded)
#line 401 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 402 "ml_util.m"
                    else
#line 404 "ml_util.m"
                      {
#line 402 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_37_37;

#line 402 "ml_util.m"
                        {
#line 402 "ml_util.m"
                          ml_backend__ml_util__V_37_37 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_26, ml_backend__ml_util__DataName_5);
                        }
#line 402 "ml_util.m"
                        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_37_37 == (MR_Integer) 1);
#line 404 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 403 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 404 "ml_util.m"
                        else
#line 405 "ml_util.m"
                          {
#line 405 "ml_util.m"
                            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_27, ml_backend__ml_util__DataName_5);
                          }
#line 404 "ml_util.m"
                      }
#line 402 "ml_util.m"
                  }
#line 397 "ml_util.m"
              }
#line 357 "ml_util.m"
            else
#line 357 "ml_util.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 394 "ml_util.m"
                {
#line 394 "ml_util.m"
                  MR_Word ml_backend__ml_util__Rval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 394 "ml_util.m"
                  MR_Word ml_backend__ml_util___Labels_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));

#line 395 "ml_util.m"
                  {
#line 395 "ml_util.m"
                    return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_44, ml_backend__ml_util__DataName_5);
                  }
#line 394 "ml_util.m"
                }
#line 357 "ml_util.m"
              else
#line 357 "ml_util.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 411 "ml_util.m"
                  {
#line 411 "ml_util.m"
                    MR_Word ml_backend__ml_util__Ref_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 412 "ml_util.m"
                    {
#line 412 "ml_util.m"
                      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Ref_30, ml_backend__ml_util__DataName_5);
                    }
#line 411 "ml_util.m"
                  }
#line 357 "ml_util.m"
                else
#line 357 "ml_util.m"
                  if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 408 "ml_util.m"
                    {
#line 408 "ml_util.m"
                      MR_Word ml_backend__ml_util__Rvals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 409 "ml_util.m"
                      {
#line 409 "ml_util.m"
                        return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Rvals_29, ml_backend__ml_util__DataName_5);
                      }
#line 408 "ml_util.m"
                    }
#line 357 "ml_util.m"
                  else
#line 357 "ml_util.m"
                    if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 380 "ml_util.m"
                      {
#line 380 "ml_util.m"
                        MR_Word ml_backend__ml_util__Val_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 380 "ml_util.m"
                        MR_Word ml_backend__ml_util__Cases_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
#line 380 "ml_util.m"
                        MR_Word ml_backend__ml_util__Default_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
#line 380 "ml_util.m"
                        MR_Word ml_backend__ml_util___Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 380 "ml_util.m"
                        MR_Word ml_backend__ml_util___Range_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
#line 381 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_38_38;

#line 381 "ml_util.m"
                        {
#line 381 "ml_util.m"
                          ml_backend__ml_util__V_38_38 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Val_16, ml_backend__ml_util__DataName_5);
                        }
#line 381 "ml_util.m"
                        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_38_38 == (MR_Integer) 1);
#line 383 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 382 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 383 "ml_util.m"
                        else
#line 385 "ml_util.m"
                          {
#line 383 "ml_util.m"
                            MR_Word ml_backend__ml_util__V_39_39;

#line 383 "ml_util.m"
                            {
#line 383 "ml_util.m"
                              ml_backend__ml_util__V_39_39 = ml_backend__ml_util__cases_contains_var_2_f_0(ml_backend__ml_util__Cases_18, ml_backend__ml_util__DataName_5);
                            }
#line 383 "ml_util.m"
                            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_39_39 == (MR_Integer) 1);
#line 385 "ml_util.m"
                            if (ml_backend__ml_util__succeeded)
#line 384 "ml_util.m"
                              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 385 "ml_util.m"
                            else
#line 386 "ml_util.m"
                              {
#line 386 "ml_util.m"
                                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__default_contains_var_2_f_0(ml_backend__ml_util__Default_19, ml_backend__ml_util__DataName_5);
                              }
#line 385 "ml_util.m"
                          }
#line 380 "ml_util.m"
                      }
#line 357 "ml_util.m"
                    else
#line 357 "ml_util.m"
                      if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 414 "ml_util.m"
                        {
#line 414 "ml_util.m"
                          MR_Word ml_backend__ml_util__Handler_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
#line 414 "ml_util.m"
                          MR_Word ml_backend__ml_util__Statement_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 414 "ml_util.m"
                          MR_Word ml_backend__ml_util__Ref_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 415 "ml_util.m"
                          MR_Word ml_backend__ml_util__V_33_33;

#line 415 "ml_util.m"
                          {
#line 415 "ml_util.m"
                            ml_backend__ml_util__V_33_33 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Ref_46, ml_backend__ml_util__DataName_5);
                          }
#line 415 "ml_util.m"
                          ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_33_33 == (MR_Integer) 1);
#line 417 "ml_util.m"
                          if (ml_backend__ml_util__succeeded)
#line 416 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 417 "ml_util.m"
                          else
#line 419 "ml_util.m"
                            {
#line 417 "ml_util.m"
                              MR_Word ml_backend__ml_util__V_34_34;

#line 417 "ml_util.m"
                              {
#line 417 "ml_util.m"
                                ml_backend__ml_util__V_34_34 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_45, ml_backend__ml_util__DataName_5);
                              }
#line 417 "ml_util.m"
                              ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_34_34 == (MR_Integer) 1);
#line 419 "ml_util.m"
                              if (ml_backend__ml_util__succeeded)
#line 418 "ml_util.m"
                                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 419 "ml_util.m"
                              else
#line 420 "ml_util.m"
                                {
#line 420 "ml_util.m"
                                  return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Handler_31, ml_backend__ml_util__DataName_5);
                                }
#line 419 "ml_util.m"
                            }
#line 414 "ml_util.m"
                        }
#line 357 "ml_util.m"
                      else
#line 392 "ml_util.m"
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 357 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 357 "ml_util.m"
  }
#line 353 "ml_util.m"
}

#line 343 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
#line 343 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 343 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_2)
#line 343 "ml_util.m"
{
#line 345 "ml_util.m"
  {
#line 345 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 345 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 345 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 345 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 345 "ml_util.m"
    else
#line 346 "ml_util.m"
      {
#line 346 "ml_util.m"
        MR_Word ml_backend__ml_util__Statement_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 346 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 350 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 351 "ml_util.m"
        {
#line 351 "ml_util.m"
          return ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_2);
        }
#line 346 "ml_util.m"
      }
#line 345 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 345 "ml_util.m"
  }
#line 343 "ml_util.m"
}

#line 333 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__statements_contains_var_2_f_0(
#line 333 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 333 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 333 "ml_util.m"
{
#line 335 "ml_util.m"
  while (MR_TRUE)
#line 335 "ml_util.m"
    {
#line 335 "ml_util.m"
      /* tailcall optimized into a loop */
#line 335 "ml_util.m"
      {
#line 335 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 335 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 335 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 335 "ml_util.m"
        else
#line 336 "ml_util.m"
          {
#line 336 "ml_util.m"
            MR_Word ml_backend__ml_util__Statement_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 336 "ml_util.m"
            MR_Word ml_backend__ml_util__Statements_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 337 "ml_util.m"
            MR_Word ml_backend__ml_util__V_9_9;
#line 337 "ml_util.m"
            MR_Word ml_backend__ml_util__Stmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 350 "ml_util.m"
            MR_Word ml_backend__ml_util___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 351 "ml_util.m"
            {
#line 351 "ml_util.m"
              ml_backend__ml_util__V_9_9 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_13, ml_backend__ml_util__HeadVar__2_2);
            }
#line 337 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_9_9 == (MR_Integer) 1);
#line 339 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 338 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 339 "ml_util.m"
            else
#line 340 "ml_util.m"
              {
#line 340 "ml_util.m"
                /* direct tailcall eliminated */
#line 340 "ml_util.m"
                {
#line 340 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Statements_6;

#line 340 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 340 "ml_util.m"
                }
#line 340 "ml_util.m"
                continue;
#line 340 "ml_util.m"
              }
#line 336 "ml_util.m"
          }
#line 335 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 335 "ml_util.m"
      }
#line 335 "ml_util.m"
      break;
#line 335 "ml_util.m"
    }
#line 333 "ml_util.m"
}

#line 314 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__default_contains_statement_2_p_0(
#line 314 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 314 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_2,
#line 314 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 314 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 314 "ml_util.m"
{
#line 2212 "ml_backend.ml_util.c"
  {
#line 2214 "ml_backend.ml_util.c"
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2216 "ml_backend.ml_util.c"
    MR_Word ml_backend__ml_util__Statement_5;

#line 2219 "ml_backend.ml_util.c"
    if (ml_backend__ml_util__succeeded)
#line 2221 "ml_backend.ml_util.c"
      {
#line 2223 "ml_backend.ml_util.c"
        ml_backend__ml_util__Statement_5 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__HeadVar__1_1), (MR_Integer) 1);
#line 267 "ml_util.m"
        *ml_backend__ml_util__SubStatement_2 = ml_backend__ml_util__Statement_5;
#line 267 "ml_util.m"
        {
#line 267 "ml_util.m"
          ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
        }
#line 268 "ml_util.m"
        {
#line 268 "ml_util.m"
          MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 269 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 270 "ml_util.m"
          {
#line 270 "ml_util.m"
            ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__SubStatement_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 270 "ml_util.m"
            return;
          }
#line 268 "ml_util.m"
        }
#line 2248 "ml_backend.ml_util.c"
      }
#line 2250 "ml_backend.ml_util.c"
  }
#line 314 "ml_util.m"
}

#line 310 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_2(
#line 310 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 310 "ml_util.m"
{
#line 310 "ml_util.m"
  {
#line 310 "ml_util.m"
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 310 "ml_util.m"
    (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5 = ((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5);
#line 310 "ml_util.m"
    {
#line 310 "ml_util.m"
      ml_backend__ml_util__cases_contains_statement_2_p_0_1(ml_backend__ml_util__env_ptr);
#line 310 "ml_util.m"
      return;
    }
#line 310 "ml_util.m"
  }
#line 310 "ml_util.m"
}

#line 309 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_1(
#line 309 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 309 "ml_util.m"
{
#line 309 "ml_util.m"
  {
#line 309 "ml_util.m"
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 309 "ml_util.m"
    {
#line 311 "ml_util.m"
      MR_Word ml_backend__ml_util___FirstCond_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 0)));
#line 311 "ml_util.m"
      MR_Word ml_backend__ml_util___LaterConds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 1)));

#line 311 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 2)));
#line 267 "ml_util.m"
      *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4) = (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8;
#line 267 "ml_util.m"
      {
#line 267 "ml_util.m"
        ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr);
      }
#line 268 "ml_util.m"
      {
#line 268 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8, (MR_Integer) 0)));
#line 269 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8, (MR_Integer) 1)));

#line 270 "ml_util.m"
        {
#line 270 "ml_util.m"
          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_13, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr);
#line 270 "ml_util.m"
          return;
        }
#line 268 "ml_util.m"
      }
#line 309 "ml_util.m"
    }
#line 309 "ml_util.m"
  }
#line 309 "ml_util.m"
}

#line 306 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0(
#line 306 "ml_util.m"
  MR_Word ml_backend__ml_util__Cases_3,
#line 306 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 306 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 306 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 306 "ml_util.m"
{
#line 306 "ml_util.m"
  {
#line 306 "ml_util.m"
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s ml_backend__ml_util__env;

#line 306 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4 = ml_backend__ml_util__SubStatement_4;
#line 306 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont = ml_backend__ml_util__cont;
#line 306 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 309 "ml_util.m"
    {
#line 309 "ml_util.m"
      MR_bool ml_backend__ml_util__succeeded;

#line 310 "ml_util.m"
      {
#line 310 "ml_util.m"
        mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, &(ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5, ml_backend__ml_util__Cases_3, ml_backend__ml_util__cases_contains_statement_2_p_0_2, &ml_backend__ml_util__env);
      }
#line 309 "ml_util.m"
    }
#line 306 "ml_util.m"
  }
#line 306 "ml_util.m"
}

#line 260 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(
#line 260 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 260 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
#line 260 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 260 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 260 "ml_util.m"
{
#line 2386 "ml_backend.ml_util.c"
  {
#line 2388 "ml_backend.ml_util.c"
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2390 "ml_backend.ml_util.c"
    MR_Word ml_backend__ml_util__Statement_4;

#line 2393 "ml_backend.ml_util.c"
    if (ml_backend__ml_util__succeeded)
#line 2395 "ml_backend.ml_util.c"
      {
#line 2397 "ml_backend.ml_util.c"
        ml_backend__ml_util__Statement_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 267 "ml_util.m"
        *ml_backend__ml_util__HeadVar__2_2 = ml_backend__ml_util__Statement_4;
#line 267 "ml_util.m"
        {
#line 267 "ml_util.m"
          ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
        }
#line 268 "ml_util.m"
        {
#line 268 "ml_util.m"
          MR_Word ml_backend__ml_util__Stmt_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 0)));
#line 269 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 1)));

#line 270 "ml_util.m"
          {
#line 270 "ml_util.m"
            ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_10, ml_backend__ml_util__HeadVar__2_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 270 "ml_util.m"
            return;
          }
#line 268 "ml_util.m"
        }
#line 2422 "ml_backend.ml_util.c"
      }
#line 2424 "ml_backend.ml_util.c"
  }
#line 260 "ml_util.m"
}

#line 257 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_2(
#line 257 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 257 "ml_util.m"
{
#line 257 "ml_util.m"
  {
#line 257 "ml_util.m"
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 257 "ml_util.m"
    (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5 = ((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5);
#line 257 "ml_util.m"
    {
#line 257 "ml_util.m"
      ml_backend__ml_util__statements_contains_statement_2_p_0_1(ml_backend__ml_util__env_ptr);
#line 257 "ml_util.m"
      return;
    }
#line 257 "ml_util.m"
  }
#line 257 "ml_util.m"
}

#line 256 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_1(
#line 256 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 256 "ml_util.m"
{
#line 256 "ml_util.m"
  {
#line 256 "ml_util.m"
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 267 "ml_util.m"
    {
#line 267 "ml_util.m"
      *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4) = (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5;
#line 267 "ml_util.m"
      {
#line 267 "ml_util.m"
        ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr);
      }
#line 267 "ml_util.m"
    }
#line 268 "ml_util.m"
    {
#line 268 "ml_util.m"
      MR_Word ml_backend__ml_util__Stmt_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5, (MR_Integer) 0)));
#line 269 "ml_util.m"
      MR_Word ml_backend__ml_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5, (MR_Integer) 1)));

#line 270 "ml_util.m"
      {
#line 270 "ml_util.m"
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_10, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr);
#line 270 "ml_util.m"
        return;
      }
#line 268 "ml_util.m"
    }
#line 256 "ml_util.m"
  }
#line 256 "ml_util.m"
}

#line 253 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0(
#line 253 "ml_util.m"
  MR_Word ml_backend__ml_util__Statements_3,
#line 253 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 253 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 253 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 253 "ml_util.m"
{
#line 253 "ml_util.m"
  {
#line 253 "ml_util.m"
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s ml_backend__ml_util__env;

#line 253 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4 = ml_backend__ml_util__SubStatement_4;
#line 253 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont = ml_backend__ml_util__cont;
#line 253 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 256 "ml_util.m"
    {
#line 256 "ml_util.m"
      MR_bool ml_backend__ml_util__succeeded;

#line 257 "ml_util.m"
      {
#line 257 "ml_util.m"
        mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, &(ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5, ml_backend__ml_util__Statements_3, ml_backend__ml_util__statements_contains_statement_2_p_0_2, &ml_backend__ml_util__env);
      }
#line 256 "ml_util.m"
    }
#line 253 "ml_util.m"
  }
#line 253 "ml_util.m"
}

#line 188 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__wrap_init_obj_1_f_0(
#line 188 "ml_util.m"
  MR_Word ml_backend__ml_util__Rval_3)
#line 188 "ml_util.m"
{
#line 924 "ml_util.m"
  {
#line 924 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 924 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;

#line 924 "ml_util.m"
    {
#line 924 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 924 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_3));
#line 924 "ml_util.m"
    }
#line 924 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 924 "ml_util.m"
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
#line 919 "ml_util.m"
  {
#line 919 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 919 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 919 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;

#line 921 "ml_util.m"
    {
#line 921 "ml_util.m"
      ml_backend__ml_util__V_6_6 = ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(ml_backend__ml_util__ModuleInfo_4, ml_backend__ml_util__ReservedAddress_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
    }
#line 919 "ml_util.m"
    {
#line 919 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 919 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 919 "ml_util.m"
    }
#line 919 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 919 "ml_util.m"
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
#line 916 "ml_util.m"
  {
#line 916 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 916 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 916 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 916 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 916 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;

#line 917 "ml_util.m"
    {
#line 917 "ml_util.m"
      ml_backend__ml_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 917 "ml_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__V_8_8, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
#line 917 "ml_util.m"
    }
#line 917 "ml_util.m"
    {
#line 917 "ml_util.m"
      ml_backend__ml_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 917 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 1) = ((MR_Box) (ml_backend__ml_util__V_8_8));
#line 917 "ml_util.m"
    }
#line 917 "ml_util.m"
    {
#line 917 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 917 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 917 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (&ml_backend__ml_util_scalar_common_3[6]));
#line 917 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 2) = ((MR_Box) (ml_backend__ml_util__V_7_7));
#line 917 "ml_util.m"
    }
#line 916 "ml_util.m"
    {
#line 916 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 916 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 916 "ml_util.m"
    }
#line 916 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 916 "ml_util.m"
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
#line 913 "ml_util.m"
  {
#line 913 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 913 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;

#line 913 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__1_1 == (MR_Integer) 0))
#line 913 "ml_util.m"
      {
#line 913 "ml_util.m"
        ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[4]);
#line 913 "ml_util.m"
      }
#line 913 "ml_util.m"
    else
#line 914 "ml_util.m"
      {
#line 914 "ml_util.m"
        ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[5]);
#line 914 "ml_util.m"
      }
#line 913 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 913 "ml_util.m"
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
#line 908 "ml_util.m"
  {
#line 908 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 908 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 908 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 908 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 908 "ml_util.m"
    {
#line 908 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 908 "ml_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
#line 908 "ml_util.m"
    }
#line 908 "ml_util.m"
    {
#line 908 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 908 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 908 "ml_util.m"
    }
#line 908 "ml_util.m"
    {
#line 908 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 908 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 908 "ml_util.m"
    }
#line 908 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 908 "ml_util.m"
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
#line 910 "ml_util.m"
  {
#line 910 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 910 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 910 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;
#line 910 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;

#line 911 "ml_util.m"
    {
#line 911 "ml_util.m"
      ml_backend__ml_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 911 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 911 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 1) = ((MR_Box) (ml_backend__ml_util__Lang_4));
#line 911 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 2) = ((MR_Box) (ml_backend__ml_util__String_5));
#line 911 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 911 "ml_util.m"
    }
#line 911 "ml_util.m"
    {
#line 911 "ml_util.m"
      ml_backend__ml_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 911 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_6_6, 1) = ((MR_Box) (ml_backend__ml_util__V_7_7));
#line 911 "ml_util.m"
    }
#line 910 "ml_util.m"
    {
#line 910 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 910 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 910 "ml_util.m"
    }
#line 910 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 910 "ml_util.m"
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
#line 906 "ml_util.m"
  {
#line 906 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 906 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 906 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 906 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 906 "ml_util.m"
    {
#line 906 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 906 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 1) = ((MR_Box) (ml_backend__ml_util__String_3));
#line 906 "ml_util.m"
    }
#line 906 "ml_util.m"
    {
#line 906 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 906 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 906 "ml_util.m"
    }
#line 906 "ml_util.m"
    {
#line 906 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 906 "ml_util.m"
    }
#line 906 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 906 "ml_util.m"
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
#line 904 "ml_util.m"
  {
#line 904 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 904 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 904 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 904 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 904 "ml_util.m"
    {
#line 904 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 904 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 1) = ((MR_Box) (ml_backend__ml_util__Type_3));
#line 904 "ml_util.m"
    }
#line 904 "ml_util.m"
    {
#line 904 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 904 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 904 "ml_util.m"
    }
#line 904 "ml_util.m"
    {
#line 904 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 904 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 904 "ml_util.m"
    }
#line 904 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 904 "ml_util.m"
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
#line 901 "ml_util.m"
  {
#line 901 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 901 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__4_4;

#line 901 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "ml_util.m"
      {
#line 904 "ml_util.m"
        MR_Word ml_backend__ml_util__V_12_12;
#line 904 "ml_util.m"
        MR_Word ml_backend__ml_util__V_13_13;

#line 904 "ml_util.m"
        {
#line 904 "ml_util.m"
          ml_backend__ml_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 904 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_13_13, 1) = ((MR_Box) (ml_backend__ml_util__HeadVar__1_1));
#line 904 "ml_util.m"
        }
#line 904 "ml_util.m"
        {
#line 904 "ml_util.m"
          ml_backend__ml_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 904 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_12_12, 1) = ((MR_Box) (ml_backend__ml_util__V_13_13));
#line 904 "ml_util.m"
        }
#line 904 "ml_util.m"
        {
#line 904 "ml_util.m"
          ml_backend__ml_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 904 "ml_util.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__ml_util__V_12_12));
#line 904 "ml_util.m"
        }
#line 904 "ml_util.m"
      }
#line 901 "ml_util.m"
    else
#line 901 "ml_util.m"
      {
#line 901 "ml_util.m"
        MR_Box ml_backend__ml_util__X_7 = (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, (MR_Integer) 0));
#line 901 "ml_util.m"
        MR_Box MR_CALL (* ml_backend__ml_util__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 901 "ml_util.m"
        MR_Box ml_backend__ml_util__conv1_HeadVar__4_4;

#line 901 "ml_util.m"
        {
#line 901 "ml_util.m"
          ml_backend__ml_util__conv1_HeadVar__4_4 = ml_backend__ml_util__func_0(((MR_Box) ml_backend__ml_util__HeadVar__2_2), ml_backend__ml_util__X_7);
        }
#line 901 "ml_util.m"
        ml_backend__ml_util__HeadVar__4_4 = ((MR_Word) ml_backend__ml_util__conv1_HeadVar__4_4);
#line 901 "ml_util.m"
      }
#line 901 "ml_util.m"
    return ml_backend__ml_util__HeadVar__4_4;
#line 901 "ml_util.m"
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
#line 899 "ml_util.m"
  {
#line 899 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 899 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 899 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;

#line 899 "ml_util.m"
    {
#line 899 "ml_util.m"
      ml_backend__ml_util__V_6_6 = mercury__list__map_2_f_0(ml_backend__ml_util__TypeInfo_for_T_7, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_util__Conv_4, ml_backend__ml_util__List_5);
    }
#line 899 "ml_util.m"
    {
#line 899 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 899 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 899 "ml_util.m"
    }
#line 899 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 899 "ml_util.m"
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
#line 889 "ml_util.m"
  {
#line 889 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 889 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 889 "ml_util.m"
    MR_Word ml_backend__ml_util__Rval_4;
#line 889 "ml_util.m"
    MR_Word ml_backend__ml_util__PrivateBuiltin_5;
#line 889 "ml_util.m"
    MR_Word ml_backend__ml_util__MLDS_Module_6;
#line 889 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 889 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 889 "ml_util.m"
    MR_Word ml_backend__ml_util__V_11_11;

#line 890 "ml_util.m"
    {
#line 890 "ml_util.m"
      ml_backend__ml_util__PrivateBuiltin_5 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 891 "ml_util.m"
    {
#line 891 "ml_util.m"
      ml_backend__ml_util__MLDS_Module_6 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_util__PrivateBuiltin_5);
    }
#line 896 "ml_util.m"
    {
#line 896 "ml_util.m"
      ml_backend__ml_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 896 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_11_11, 0) = ((MR_Box) (ml_backend__ml_util__Name_3));
#line 896 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 896 "ml_util.m"
    }
#line 896 "ml_util.m"
    {
#line 896 "ml_util.m"
      ml_backend__ml_util__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 896 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 0) = ((MR_Box) (ml_backend__ml_util__MLDS_Module_6));
#line 896 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 1) = ((MR_Box) ((MR_Integer) 0));
#line 896 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 2) = ((MR_Box) (ml_backend__ml_util__V_11_11));
#line 896 "ml_util.m"
    }
#line 896 "ml_util.m"
    {
#line 896 "ml_util.m"
      ml_backend__ml_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_8_8, 0) = ((MR_Box) (ml_backend__ml_util__V_9_9));
#line 896 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 896 "ml_util.m"
    }
#line 896 "ml_util.m"
    {
#line 896 "ml_util.m"
      ml_backend__ml_util__Rval_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 896 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, 0) = ((MR_Box) (ml_backend__ml_util__V_8_8));
#line 896 "ml_util.m"
    }
#line 889 "ml_util.m"
    {
#line 889 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 889 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_4));
#line 889 "ml_util.m"
    }
#line 889 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 889 "ml_util.m"
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
#line 853 "ml_util.m"
  {
#line 853 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded = (ml_backend__ml_util__HeadVar__1_1 == (MR_Integer) 1);
#line 853 "ml_util.m"
    MR_Word ml_backend__ml_util__TypeName_3;
#line 853 "ml_util.m"
    MR_Word ml_backend__ml_util__Builtin_5;
#line 853 "ml_util.m"
    MR_Word ml_backend__ml_util__PrivateBuiltin_6;
#line 853 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiImplementation_7;
#line 853 "ml_util.m"
    MR_Word ml_backend__ml_util__Univ_8;
#line 853 "ml_util.m"
    MR_Word ml_backend__ml_util__MutVar_9;
#line 853 "ml_util.m"
    MR_Word ml_backend__ml_util__TypeDesc_10;
#line 853 "ml_util.m"
    MR_String ml_backend__ml_util__V_12_12;
#line 853 "ml_util.m"
    MR_String ml_backend__ml_util__V_13_13;
#line 853 "ml_util.m"
    MR_String ml_backend__ml_util__V_14_14;
#line 853 "ml_util.m"
    MR_String ml_backend__ml_util__V_15_15;
#line 853 "ml_util.m"
    MR_String ml_backend__ml_util__V_43_43;
#line 853 "ml_util.m"
    MR_Word ml_backend__ml_util__V_44_44;
#line 853 "ml_util.m"
    MR_Integer ml_backend__ml_util___Arity_4;

#line 853 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 853 "ml_util.m"
      {
#line 853 "ml_util.m"
        ml_backend__ml_util__TypeName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 0)));
#line 853 "ml_util.m"
        ml_backend__ml_util___Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 854 "ml_util.m"
        {
#line 854 "ml_util.m"
          ml_backend__ml_util__Builtin_5 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
        }
#line 855 "ml_util.m"
        {
#line 855 "ml_util.m"
          ml_backend__ml_util__PrivateBuiltin_6 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
        }
#line 856 "ml_util.m"
        ml_backend__ml_util__V_12_12 = (MR_String) "rtti_implementation";
#line 857 "ml_util.m"
        ml_backend__ml_util__V_13_13 = (MR_String) "univ";
#line 858 "ml_util.m"
        ml_backend__ml_util__V_14_14 = (MR_String) "mutvar";
#line 859 "ml_util.m"
        ml_backend__ml_util__V_15_15 = (MR_String) "type_desc";
#line 860 "ml_util.m"
        ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__TypeName_3)) == (MR_mktag((MR_Integer) 1)));
#line 860 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 860 "ml_util.m"
          {
#line 860 "ml_util.m"
            ml_backend__ml_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__TypeName_3, (MR_Integer) 0)));
#line 860 "ml_util.m"
            ml_backend__ml_util__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__TypeName_3, (MR_Integer) 1)));
#line 856 "ml_util.m"
            ml_backend__ml_util__RttiImplementation_7 = (MR_Word) &ml_backend__ml_util_scalar_common_3[0];
#line 857 "ml_util.m"
            ml_backend__ml_util__Univ_8 = (MR_Word) &ml_backend__ml_util_scalar_common_3[1];
#line 858 "ml_util.m"
            ml_backend__ml_util__MutVar_9 = (MR_Word) &ml_backend__ml_util_scalar_common_3[2];
#line 859 "ml_util.m"
            ml_backend__ml_util__TypeDesc_10 = (MR_Word) &ml_backend__ml_util_scalar_common_3[3];
#line 861 "ml_util.m"
            if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "ref") == 0))
#line 875 "ml_util.m"
              {
#line 875 "ml_util.m"
                ml_backend__ml_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
              }
#line 861 "ml_util.m"
            else
#line 861 "ml_util.m"
              if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "univ") == 0))
#line 883 "ml_util.m"
                {
#line 883 "ml_util.m"
                  ml_backend__ml_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_util__Univ_8, ml_backend__ml_util__V_44_44);
                }
#line 861 "ml_util.m"
              else
#line 861 "ml_util.m"
                if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "mutvar") == 0))
#line 884 "ml_util.m"
                  {
#line 884 "ml_util.m"
                    ml_backend__ml_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_util__MutVar_9, ml_backend__ml_util__V_44_44);
                  }
#line 861 "ml_util.m"
                else
#line 861 "ml_util.m"
                  if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "c_pointer") == 0))
#line 877 "ml_util.m"
                    {
#line 877 "ml_util.m"
                      ml_backend__ml_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_util__Builtin_5, ml_backend__ml_util__V_44_44);
                    }
#line 861 "ml_util.m"
                  else
#line 861 "ml_util.m"
                    if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "type_desc") == 0))
#line 870 "ml_util.m"
                      {
#line 870 "ml_util.m"
                        ml_backend__ml_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_util__TypeDesc_10, ml_backend__ml_util__V_44_44);
                      }
#line 861 "ml_util.m"
                    else
#line 861 "ml_util.m"
                      if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "type_info") == 0))
#line 863 "ml_util.m"
                        {
#line 863 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                        }
#line 861 "ml_util.m"
                      else
#line 861 "ml_util.m"
                        if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "heap_pointer") == 0))
#line 876 "ml_util.m"
                          {
#line 876 "ml_util.m"
                            ml_backend__ml_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                          }
#line 861 "ml_util.m"
                        else
#line 861 "ml_util.m"
                          if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "type_ctor_desc") == 0))
#line 872 "ml_util.m"
                            {
#line 872 "ml_util.m"
                              ml_backend__ml_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_util__TypeDesc_10, ml_backend__ml_util__V_44_44);
                            }
#line 861 "ml_util.m"
                          else
#line 861 "ml_util.m"
                            if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "type_ctor_info") == 0))
#line 861 "ml_util.m"
                              {
#line 861 "ml_util.m"
                                ml_backend__ml_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                              }
#line 861 "ml_util.m"
                            else
#line 861 "ml_util.m"
                              if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "typeclass_info") == 0))
#line 862 "ml_util.m"
                                {
#line 862 "ml_util.m"
                                  ml_backend__ml_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                                }
#line 861 "ml_util.m"
                              else
#line 861 "ml_util.m"
                                if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "pseudo_type_desc") == 0))
#line 871 "ml_util.m"
                                  {
#line 871 "ml_util.m"
                                    ml_backend__ml_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_util__TypeDesc_10, ml_backend__ml_util__V_44_44);
                                  }
#line 861 "ml_util.m"
                                else
#line 861 "ml_util.m"
                                  if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "comparison_result") == 0))
#line 882 "ml_util.m"
                                    {
#line 882 "ml_util.m"
                                      ml_backend__ml_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_util__Builtin_5, ml_backend__ml_util__V_44_44);
                                    }
#line 861 "ml_util.m"
                                  else
#line 861 "ml_util.m"
                                    if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "base_typeclass_info") == 0))
#line 860 "ml_util.m"
                                      {
#line 860 "ml_util.m"
                                        ml_backend__ml_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                                      }
#line 861 "ml_util.m"
                                    else
#line 861 "ml_util.m"
                                      ml_backend__ml_util__succeeded = MR_FALSE;
#line 861 "ml_util.m"
            if (!(ml_backend__ml_util__succeeded))
#line 868 "ml_util.m"
              {
#line 868 "ml_util.m"
                return ml_backend__ml_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ml_backend__ml_util__RttiImplementation_7, ml_backend__ml_util__V_44_44);
              }
#line 860 "ml_util.m"
          }
#line 853 "ml_util.m"
      }
#line 853 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 853 "ml_util.m"
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
#line 848 "ml_util.m"
  {
#line 848 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 848 "ml_util.m"
    MR_Word ml_backend__ml_util__TypeCtor_5;

#line 849 "ml_util.m"
    {
#line 849 "ml_util.m"
      ml_backend__ml_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ml_backend__ml_util__Type_4, &ml_backend__ml_util__TypeCtor_5);
    }
#line 848 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 850 "ml_util.m"
      {
#line 850 "ml_util.m"
        return ml_backend__ml_util__succeeded = ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_p_0(ml_backend__ml_util__Target_3, ml_backend__ml_util__TypeCtor_5);
      }
#line 848 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 848 "ml_util.m"
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
#line 828 "ml_util.m"
  {
#line 828 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 828 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 828 "ml_util.m"
    if (((MR_tag((MR_Word) ml_backend__ml_util__Lval_4)) == (MR_mktag((MR_Integer) 0))))
#line 828 "ml_util.m"
      {
#line 828 "ml_util.m"
        MR_Word ml_backend__ml_util__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
#line 828 "ml_util.m"
        MR_Word ml_backend__ml_util___MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 828 "ml_util.m"
        MR_Word ml_backend__ml_util___FieldId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 2)));
#line 828 "ml_util.m"
        MR_Word ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 3)));
#line 828 "ml_util.m"
        MR_Word ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 4)));

#line 829 "ml_util.m"
        {
#line 829 "ml_util.m"
          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_8, ml_backend__ml_util__DataName_5);
        }
#line 828 "ml_util.m"
      }
#line 828 "ml_util.m"
    else
#line 828 "ml_util.m"
      if (((MR_tag((MR_Word) ml_backend__ml_util__Lval_4)) == (MR_mktag((MR_Integer) 2))))
#line 835 "ml_util.m"
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 828 "ml_util.m"
      else
#line 828 "ml_util.m"
        if (((MR_tag((MR_Word) ml_backend__ml_util__Lval_4)) == (MR_mktag((MR_Integer) 1))))
#line 831 "ml_util.m"
          {
#line 831 "ml_util.m"
            MR_Word ml_backend__ml_util__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 831 "ml_util.m"
            MR_Word ml_backend__ml_util___Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));

#line 832 "ml_util.m"
            {
#line 832 "ml_util.m"
              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_19, ml_backend__ml_util__DataName_5);
            }
#line 831 "ml_util.m"
          }
#line 828 "ml_util.m"
        else
#line 837 "ml_util.m"
          {
#line 837 "ml_util.m"
            MR_Word ml_backend__ml_util__ModuleName_14;
#line 837 "ml_util.m"
            MR_Word ml_backend__ml_util__QualKind_15;
#line 837 "ml_util.m"
            MR_Word ml_backend__ml_util__Name_16;
#line 837 "ml_util.m"
            MR_Word ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 837 "ml_util.m"
            MR_Word ml_backend__ml_util___Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
#line 839 "ml_util.m"
            MR_Word ml_backend__ml_util__V_18_18;
#line 839 "ml_util.m"
            MR_Word ml_backend__ml_util__V_22_22;
#line 839 "ml_util.m"
            MR_Word ml_backend__ml_util__V_23_23;
#line 839 "ml_util.m"
            MR_Word ml_backend__ml_util__V_24_24;

#line 837 "ml_util.m"
            ml_backend__ml_util__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 0)));
#line 837 "ml_util.m"
            ml_backend__ml_util__QualKind_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 1)));
#line 837 "ml_util.m"
            ml_backend__ml_util__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 2)));
#line 839 "ml_util.m"
            ml_backend__ml_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
#line 839 "ml_util.m"
            ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));
#line 839 "ml_util.m"
            ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
#line 839 "ml_util.m"
            {
#line 839 "ml_util.m"
              ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_14, ml_backend__ml_util__V_22_22);
            }
#line 839 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 839 "ml_util.m"
              {
#line 839 "ml_util.m"
                ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_15 == ml_backend__ml_util__V_23_23);
#line 839 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 839 "ml_util.m"
                  {
#line 839 "ml_util.m"
                    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 839 "ml_util.m"
                    if (ml_backend__ml_util__succeeded)
#line 839 "ml_util.m"
                      {
#line 839 "ml_util.m"
                        ml_backend__ml_util__V_24_24 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_18_18), (MR_Integer) 1);
#line 839 "ml_util.m"
                        {
#line 839 "ml_util.m"
                          ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_util__Name_16, ml_backend__ml_util__V_24_24);
                        }
#line 839 "ml_util.m"
                      }
#line 839 "ml_util.m"
                  }
#line 839 "ml_util.m"
              }
#line 841 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 840 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 841 "ml_util.m"
            else
#line 842 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 837 "ml_util.m"
          }
#line 828 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 828 "ml_util.m"
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
#line 818 "ml_util.m"
  while (MR_TRUE)
#line 818 "ml_util.m"
    {
#line 818 "ml_util.m"
      /* tailcall optimized into a loop */
#line 818 "ml_util.m"
      {
#line 818 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 818 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 818 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 818 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 818 "ml_util.m"
        else
#line 819 "ml_util.m"
          {
#line 819 "ml_util.m"
            MR_Word ml_backend__ml_util__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 819 "ml_util.m"
            MR_Word ml_backend__ml_util__Lvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 820 "ml_util.m"
            MR_Word ml_backend__ml_util__V_9_9;

#line 820 "ml_util.m"
            {
#line 820 "ml_util.m"
              ml_backend__ml_util__V_9_9 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 820 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_9_9 == (MR_Integer) 1);
#line 822 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 821 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 822 "ml_util.m"
            else
#line 823 "ml_util.m"
              {
#line 823 "ml_util.m"
                /* direct tailcall eliminated */
#line 823 "ml_util.m"
                {
#line 823 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Lvals_6;

#line 823 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 823 "ml_util.m"
                }
#line 823 "ml_util.m"
                continue;
#line 823 "ml_util.m"
              }
#line 819 "ml_util.m"
          }
#line 818 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 818 "ml_util.m"
      }
#line 818 "ml_util.m"
      break;
#line 818 "ml_util.m"
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
#line 762 "ml_util.m"
  while (MR_TRUE)
#line 762 "ml_util.m"
    {
#line 762 "ml_util.m"
      /* tailcall optimized into a loop */
#line 762 "ml_util.m"
      {
#line 762 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 762 "ml_util.m"
        MR_Word ml_backend__ml_util__ContainsVar_6;

#line 762 "ml_util.m"
        if (((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 1))))
#line 762 "ml_util.m"
          {
#line 762 "ml_util.m"
            MR_Word ml_backend__ml_util__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

#line 763 "ml_util.m"
            {
#line 763 "ml_util.m"
              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_7, ml_backend__ml_util__DataName_5);
            }
#line 762 "ml_util.m"
          }
#line 762 "ml_util.m"
        else
#line 762 "ml_util.m"
          if (((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 2))))
#line 765 "ml_util.m"
            {
#line 765 "ml_util.m"
              MR_Word ml_backend__ml_util__SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));
#line 765 "ml_util.m"
              MR_Integer ml_backend__ml_util___Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

#line 766 "ml_util.m"
              /* direct tailcall eliminated */
#line 766 "ml_util.m"
              {
#line 766 "ml_util.m"
                MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__SubRval_9;

#line 766 "ml_util.m"
                ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 766 "ml_util.m"
              }
#line 766 "ml_util.m"
              continue;
#line 765 "ml_util.m"
            }
#line 762 "ml_util.m"
          else
#line 762 "ml_util.m"
            if (((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 0))))
#line 809 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 762 "ml_util.m"
            else
#line 762 "ml_util.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 798 "ml_util.m"
                {
#line 798 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 3)));
#line 798 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 798 "ml_util.m"
                  MR_Word ml_backend__ml_util___Op_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));
#line 799 "ml_util.m"
                  MR_Word ml_backend__ml_util__V_35_35;

#line 799 "ml_util.m"
                  {
#line 799 "ml_util.m"
                    ml_backend__ml_util__V_35_35 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__RvalA_38, ml_backend__ml_util__DataName_5);
                  }
#line 799 "ml_util.m"
                  ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_35_35 == (MR_Integer) 1);
#line 801 "ml_util.m"
                  if (ml_backend__ml_util__succeeded)
#line 800 "ml_util.m"
                    ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 801 "ml_util.m"
                  else
#line 802 "ml_util.m"
                    {
#line 802 "ml_util.m"
                      /* direct tailcall eliminated */
#line 802 "ml_util.m"
                      {
#line 802 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__RvalB_30;

#line 802 "ml_util.m"
                        ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 802 "ml_util.m"
                      }
#line 802 "ml_util.m"
                      continue;
#line 802 "ml_util.m"
                    }
#line 798 "ml_util.m"
                }
#line 762 "ml_util.m"
              else
#line 762 "ml_util.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 768 "ml_util.m"
                  {
#line 768 "ml_util.m"
                    MR_Word ml_backend__ml_util__Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 778 "ml_util.m"
                    if (((MR_tag((MR_Word) ml_backend__ml_util__Const_10)) == (MR_mktag((MR_Integer) 1))))
#line 770 "ml_util.m"
                      {
#line 770 "ml_util.m"
                        MR_Word ml_backend__ml_util__DataAddr_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Const_10), (MR_Integer) 1);
#line 770 "ml_util.m"
                        MR_Word ml_backend__ml_util__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataAddr_11, (MR_Integer) 0)));
#line 770 "ml_util.m"
                        MR_Word ml_backend__ml_util__RawDataName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataAddr_11, (MR_Integer) 1)));
#line 772 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
#line 772 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
#line 772 "ml_util.m"
                        MR_Word ml_backend__ml_util___QualKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));

#line 772 "ml_util.m"
                        {
#line 772 "ml_util.m"
                          ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_12, ml_backend__ml_util__V_40_40);
                        }
#line 772 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 772 "ml_util.m"
                          {
#line 772 "ml_util.m"
                            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__RawDataName_13, ml_backend__ml_util__V_41_41);
                          }
#line 775 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 774 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 775 "ml_util.m"
                        else
#line 776 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 770 "ml_util.m"
                      }
#line 778 "ml_util.m"
                    else
#line 792 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 768 "ml_util.m"
                  }
#line 762 "ml_util.m"
                else
#line 762 "ml_util.m"
                  if (((((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 805 "ml_util.m"
                    {
#line 805 "ml_util.m"
                      MR_Word ml_backend__ml_util__Lval_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 806 "ml_util.m"
                      {
#line 806 "ml_util.m"
                        return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_39, ml_backend__ml_util__DataName_5);
                      }
#line 805 "ml_util.m"
                    }
#line 762 "ml_util.m"
                  else
#line 762 "ml_util.m"
                    if (((((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 815 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 762 "ml_util.m"
                    else
#line 762 "ml_util.m"
                      if (((((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 795 "ml_util.m"
                        {
#line 795 "ml_util.m"
                          MR_Word ml_backend__ml_util__RvalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 795 "ml_util.m"
                          MR_Word ml_backend__ml_util___Op_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 796 "ml_util.m"
                          /* direct tailcall eliminated */
#line 796 "ml_util.m"
                          {
#line 796 "ml_util.m"
                            MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__RvalA_29;

#line 796 "ml_util.m"
                            ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 796 "ml_util.m"
                          }
#line 796 "ml_util.m"
                          continue;
#line 795 "ml_util.m"
                        }
#line 762 "ml_util.m"
                      else
#line 811 "ml_util.m"
                        {
#line 811 "ml_util.m"
                          MR_Word ml_backend__ml_util__IndexRval_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 811 "ml_util.m"
                          MR_Word ml_backend__ml_util___VectorCommon_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 812 "ml_util.m"
                          /* direct tailcall eliminated */
#line 812 "ml_util.m"
                          {
#line 812 "ml_util.m"
                            MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__IndexRval_33;

#line 812 "ml_util.m"
                            ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 812 "ml_util.m"
                          }
#line 812 "ml_util.m"
                          continue;
#line 811 "ml_util.m"
                        }
#line 762 "ml_util.m"
        return ml_backend__ml_util__ContainsVar_6;
#line 762 "ml_util.m"
      }
#line 762 "ml_util.m"
      break;
#line 762 "ml_util.m"
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
#line 756 "ml_util.m"
  {
#line 756 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 756 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 756 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 756 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 756 "ml_util.m"
    else
#line 757 "ml_util.m"
      {
#line 757 "ml_util.m"
        MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));

#line 757 "ml_util.m"
        {
#line 757 "ml_util.m"
          return ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
        }
#line 757 "ml_util.m"
      }
#line 756 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 756 "ml_util.m"
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
#line 748 "ml_util.m"
  while (MR_TRUE)
#line 748 "ml_util.m"
    {
#line 748 "ml_util.m"
      /* tailcall optimized into a loop */
#line 748 "ml_util.m"
      {
#line 748 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 748 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 748 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 748 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 748 "ml_util.m"
        else
#line 749 "ml_util.m"
          {
#line 749 "ml_util.m"
            MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 749 "ml_util.m"
            MR_Word ml_backend__ml_util__Rvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 750 "ml_util.m"
            MR_Word ml_backend__ml_util__V_9_9;

#line 750 "ml_util.m"
            {
#line 750 "ml_util.m"
              ml_backend__ml_util__V_9_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 750 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_9_9 == (MR_Integer) 1);
#line 752 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 751 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 752 "ml_util.m"
            else
#line 753 "ml_util.m"
              {
#line 753 "ml_util.m"
                /* direct tailcall eliminated */
#line 753 "ml_util.m"
                {
#line 753 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Rvals_6;

#line 753 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 753 "ml_util.m"
                }
#line 753 "ml_util.m"
                continue;
#line 753 "ml_util.m"
              }
#line 749 "ml_util.m"
          }
#line 748 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 748 "ml_util.m"
      }
#line 748 "ml_util.m"
      break;
#line 748 "ml_util.m"
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
#line 724 "ml_util.m"
  {
#line 724 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 724 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 724 "ml_util.m"
    if ((ml_backend__ml_util__Initializer_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 725 "ml_util.m"
      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 724 "ml_util.m"
    else
#line 724 "ml_util.m"
      if (((MR_tag((MR_Word) ml_backend__ml_util__Initializer_4)) == (MR_mktag((MR_Integer) 3))))
#line 733 "ml_util.m"
        {
#line 733 "ml_util.m"
          MR_Word ml_backend__ml_util__ElementInitializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 734 "ml_util.m"
          {
#line 734 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__ElementInitializers_10, ml_backend__ml_util__DataName_5);
          }
#line 733 "ml_util.m"
        }
#line 724 "ml_util.m"
      else
#line 724 "ml_util.m"
        if (((MR_tag((MR_Word) ml_backend__ml_util__Initializer_4)) == (MR_mktag((MR_Integer) 1))))
#line 727 "ml_util.m"
          {
#line 727 "ml_util.m"
            MR_Word ml_backend__ml_util__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 728 "ml_util.m"
            {
#line 728 "ml_util.m"
              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_7, ml_backend__ml_util__DataName_5);
            }
#line 727 "ml_util.m"
          }
#line 724 "ml_util.m"
        else
#line 730 "ml_util.m"
          {
#line 730 "ml_util.m"
            MR_Word ml_backend__ml_util__FieldInitializers_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 1)));
#line 730 "ml_util.m"
            MR_Word ml_backend__ml_util___Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 731 "ml_util.m"
            {
#line 731 "ml_util.m"
              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__FieldInitializers_9, ml_backend__ml_util__DataName_5);
            }
#line 730 "ml_util.m"
          }
#line 724 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 724 "ml_util.m"
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
#line 669 "ml_util.m"
  {
#line 669 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 669 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;
#line 669 "ml_util.m"
    MR_Word ml_backend__ml_util__DefnBody_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 3)));
#line 670 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 0)));
#line 670 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 1)));
#line 670 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 2)));

#line 671 "ml_util.m"
    {
#line 671 "ml_util.m"
      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defn_body_contains_var_2_f_0(ml_backend__ml_util__DefnBody_10, ml_backend__ml_util__DataName_5);
    }
#line 669 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 669 "ml_util.m"
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
#line 661 "ml_util.m"
  while (MR_TRUE)
#line 661 "ml_util.m"
    {
#line 661 "ml_util.m"
      /* tailcall optimized into a loop */
#line 661 "ml_util.m"
      {
#line 661 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 661 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 661 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 661 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 661 "ml_util.m"
        else
#line 662 "ml_util.m"
          {
#line 662 "ml_util.m"
            MR_Word ml_backend__ml_util__Defn_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 662 "ml_util.m"
            MR_Word ml_backend__ml_util__Defns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 663 "ml_util.m"
            MR_Word ml_backend__ml_util__V_9_9;

#line 663 "ml_util.m"
            {
#line 663 "ml_util.m"
              ml_backend__ml_util__V_9_9 = ml_backend__ml_util__defn_contains_var_2_f_0(ml_backend__ml_util__Defn_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 663 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_9_9 == (MR_Integer) 1);
#line 665 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 664 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 665 "ml_util.m"
            else
#line 666 "ml_util.m"
              {
#line 666 "ml_util.m"
                /* direct tailcall eliminated */
#line 666 "ml_util.m"
                {
#line 666 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Defns_6;

#line 666 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 666 "ml_util.m"
                }
#line 666 "ml_util.m"
                continue;
#line 666 "ml_util.m"
              }
#line 662 "ml_util.m"
          }
#line 661 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 661 "ml_util.m"
      }
#line 661 "ml_util.m"
      break;
#line 661 "ml_util.m"
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
#line 647 "ml_util.m"
  {
#line 647 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 647 "ml_util.m"
    MR_Word ml_backend__ml_util__Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 647 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 648 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 648 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 648 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));

#line 649 "ml_util.m"
    {
#line 649 "ml_util.m"
      ml_backend__ml_util__V_7_7 = ml_backend__mlds__access_1_f_0(ml_backend__ml_util__Flags_5);
    }
#line 649 "ml_util.m"
    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_7_7 == (MR_Integer) 0);
#line 647 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 647 "ml_util.m"
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
#line 642 "ml_util.m"
  {
#line 642 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 642 "ml_util.m"
    MR_Word ml_backend__ml_util__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 642 "ml_util.m"
    MR_Word ml_backend__ml_util__Type_7;
#line 643 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 643 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 643 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 644 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 644 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;

#line 644 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_6)) == (MR_mktag((MR_Integer) 1)));
#line 644 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 644 "ml_util.m"
      {
#line 644 "ml_util.m"
        ml_backend__ml_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 0)));
#line 644 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 1)));
#line 644 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 2)));
#line 645 "ml_util.m"
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "ml_util.m"
      }
#line 642 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 642 "ml_util.m"
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
#line 635 "ml_util.m"
  {
#line 635 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 635 "ml_util.m"
    MR_Word ml_backend__ml_util__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 635 "ml_util.m"
    MR_Word ml_backend__ml_util__Type_7;
#line 635 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiId_10;
#line 635 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiName_12;
#line 635 "ml_util.m"
    MR_Word ml_backend__ml_util__V_13_13;
#line 636 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 636 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 636 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 637 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 637 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 639 "ml_util.m"
    MR_Word ml_backend__ml_util__V_11_11;

#line 637 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_6)) == (MR_mktag((MR_Integer) 1)));
#line 637 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 637 "ml_util.m"
      {
#line 637 "ml_util.m"
        ml_backend__ml_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 0)));
#line 637 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 1)));
#line 637 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 2)));
#line 638 "ml_util.m"
        ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Type_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 638 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 638 "ml_util.m"
          {
#line 638 "ml_util.m"
            ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_7, (MR_Integer) 1)));
#line 638 "ml_util.m"
            ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 638 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 638 "ml_util.m"
              {
#line 638 "ml_util.m"
                ml_backend__ml_util__RttiId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_13_13, (MR_Integer) 0)));
#line 639 "ml_util.m"
                ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__RttiId_10)) == (MR_mktag((MR_Integer) 0)));
#line 639 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 639 "ml_util.m"
                  {
#line 639 "ml_util.m"
                    ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_10, (MR_Integer) 0)));
#line 639 "ml_util.m"
                    ml_backend__ml_util__RttiName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_10, (MR_Integer) 1)));
#line 640 "ml_util.m"
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__RttiName_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 639 "ml_util.m"
                  }
#line 638 "ml_util.m"
              }
#line 638 "ml_util.m"
          }
#line 637 "ml_util.m"
      }
#line 635 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 635 "ml_util.m"
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
#line 631 "ml_util.m"
  {
#line 631 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 631 "ml_util.m"
    MR_Word ml_backend__ml_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 632 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 632 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 632 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 633 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 633 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_8_8;
#line 633 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 633 "ml_util.m"
    MR_Word ml_backend__ml_util__V_10_10;

#line 633 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_3)) == (MR_mktag((MR_Integer) 2)));
#line 633 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 633 "ml_util.m"
      {
#line 633 "ml_util.m"
        ml_backend__ml_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 633 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 633 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 2)));
#line 633 "ml_util.m"
        ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 3)));
#line 633 "ml_util.m"
      }
#line 631 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 631 "ml_util.m"
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
#line 627 "ml_util.m"
  {
#line 627 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 627 "ml_util.m"
    MR_Word ml_backend__ml_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 628 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 628 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 628 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 629 "ml_util.m"
    MR_String ml_backend__ml_util__V_7_7;
#line 629 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_8_8;

#line 629 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_3)) == (MR_mktag((MR_Integer) 0)));
#line 629 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 629 "ml_util.m"
      {
#line 629 "ml_util.m"
        ml_backend__ml_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 629 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 629 "ml_util.m"
      }
#line 627 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 627 "ml_util.m"
  }
#line 91 "ml_util.m"
}

#line 620 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(
#line 620 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 620 "ml_util.m"
{
#line 620 "ml_util.m"
  {
#line 620 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 620 "ml_util.m"
    MR_builtin_longjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0, 1);
#line 620 "ml_util.m"
  }
#line 620 "ml_util.m"
}

#line 620 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(
#line 620 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 620 "ml_util.m"
{
#line 620 "ml_util.m"
  {
#line 620 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 620 "ml_util.m"
    {
#line 624 "ml_util.m"
      MR_Word ml_backend__ml_util__V_16_16;
#line 625 "ml_util.m"
      MR_Word ml_backend__ml_util__V_17_17;
#line 625 "ml_util.m"
      MR_Word ml_backend__ml_util__V_18_18;
#line 625 "ml_util.m"
      MR_String ml_backend__ml_util__V_19_19;

#line 624 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, (MR_Integer) 0)));
#line 624 "ml_util.m"
      ml_backend__ml_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, (MR_Integer) 1)));
#line 625 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 625 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 625 "ml_util.m"
        {
#line 625 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15, (MR_Integer) 1)));
#line 620 "ml_util.m"
          {
#line 625 "ml_util.m"
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 625 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 625 "ml_util.m"
              {
#line 625 "ml_util.m"
                {
#line 625 "ml_util.m"
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 1)));
#line 625 "ml_util.m"
                  ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 2)));
#line 625 "ml_util.m"
                  ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 3)));
#line 625 "ml_util.m"
                  ml_backend__ml_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 4)));
#line 625 "ml_util.m"
                }
#line 620 "ml_util.m"
                {
#line 625 "ml_util.m"
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22);
#line 625 "ml_util.m"
                  if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 625 "ml_util.m"
                    {
#line 625 "ml_util.m"
                      ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(ml_backend__ml_util__env_ptr);
#line 625 "ml_util.m"
                      return;
                    }
#line 620 "ml_util.m"
                }
#line 625 "ml_util.m"
              }
#line 620 "ml_util.m"
          }
#line 625 "ml_util.m"
        }
#line 620 "ml_util.m"
    }
#line 620 "ml_util.m"
  }
#line 620 "ml_util.m"
}

#line 620 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(
#line 620 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 620 "ml_util.m"
{
#line 620 "ml_util.m"
  {
#line 620 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 620 "ml_util.m"
    if (MR_builtin_setjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0) == 0)
#line 620 "ml_util.m"
      {
#line 620 "ml_util.m"
        {
#line 620 "ml_util.m"
          MR_Word ml_backend__ml_util__Body_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 3)));
#line 620 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_11;
#line 620 "ml_util.m"
          MR_Word ml_backend__ml_util__V_20_20;
#line 621 "ml_util.m"
          MR_Word ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 0)));
#line 621 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 1)));
#line 621 "ml_util.m"
          MR_Word ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 2)));
#line 622 "ml_util.m"
          MR_Word ml_backend__ml_util__V_9_9;
#line 622 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10;
#line 622 "ml_util.m"
          MR_Word ml_backend__ml_util__V_12_12;
#line 622 "ml_util.m"
          MR_Word ml_backend__ml_util__V_13_13;

#line 622 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_8)) == (MR_mktag((MR_Integer) 2)));
#line 622 "ml_util.m"
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 622 "ml_util.m"
            {
#line 622 "ml_util.m"
              {
#line 622 "ml_util.m"
                ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 0)));
#line 622 "ml_util.m"
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 1)));
#line 622 "ml_util.m"
                ml_backend__ml_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 2)));
#line 622 "ml_util.m"
                ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 3)));
#line 622 "ml_util.m"
                ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 4)));
#line 622 "ml_util.m"
              }
#line 620 "ml_util.m"
              {
#line 622 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 622 "ml_util.m"
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 622 "ml_util.m"
                  {
#line 622 "ml_util.m"
                    ml_backend__ml_util__FunctionBody_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_20_20), (MR_Integer) 1);
#line 620 "ml_util.m"
                    {
#line 267 "ml_util.m"
                      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14 = ml_backend__ml_util__FunctionBody_11;
#line 267 "ml_util.m"
                      {
#line 267 "ml_util.m"
                        ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(ml_backend__ml_util__env_ptr);
                      }
#line 268 "ml_util.m"
                      {
#line 268 "ml_util.m"
                        MR_Word ml_backend__ml_util__Stmt_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 0)));
#line 269 "ml_util.m"
                        MR_Word ml_backend__ml_util___Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 1)));

#line 270 "ml_util.m"
                        {
#line 270 "ml_util.m"
                          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_26, &(ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2, ml_backend__ml_util__env_ptr);
                        }
#line 268 "ml_util.m"
                      }
#line 620 "ml_util.m"
                    }
#line 622 "ml_util.m"
                  }
#line 620 "ml_util.m"
              }
#line 622 "ml_util.m"
            }
#line 620 "ml_util.m"
        }
#line 620 "ml_util.m"
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = MR_FALSE;
#line 620 "ml_util.m"
      }
#line 620 "ml_util.m"
    else
#line 620 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = MR_TRUE;
#line 620 "ml_util.m"
  }
#line 620 "ml_util.m"
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
#line 620 "ml_util.m"
    {
#line 620 "ml_util.m"
      ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(&ml_backend__ml_util__env);
    }
#line 620 "ml_util.m"
    return (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
#line 86 "ml_util.m"
  }
#line 86 "ml_util.m"
}

#line 608 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(
#line 608 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 608 "ml_util.m"
{
#line 608 "ml_util.m"
  {
#line 608 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 608 "ml_util.m"
    MR_builtin_longjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0, 1);
#line 608 "ml_util.m"
  }
#line 608 "ml_util.m"
}

#line 608 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(
#line 608 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 608 "ml_util.m"
{
#line 608 "ml_util.m"
  {
#line 608 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 608 "ml_util.m"
    {
#line 612 "ml_util.m"
      MR_Word ml_backend__ml_util__V_16_16;

#line 612 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, (MR_Integer) 0)));
#line 612 "ml_util.m"
      ml_backend__ml_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, (MR_Integer) 1)));
#line 614 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 614 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 614 "ml_util.m"
        {
#line 614 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15, (MR_Integer) 1)));
#line 608 "ml_util.m"
          {
#line 616 "ml_util.m"
            if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 614 "ml_util.m"
              {
#line 614 "ml_util.m"
                MR_Word ml_backend__ml_util__TargetLang_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 1)));
#line 614 "ml_util.m"
                MR_Word ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 2)));

#line 615 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = (ml_backend__ml_util__TargetLang_17 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3);
#line 615 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = !((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded);
#line 614 "ml_util.m"
              }
#line 616 "ml_util.m"
            else
#line 616 "ml_util.m"
              if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 617 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_TRUE;
#line 616 "ml_util.m"
              else
#line 616 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_FALSE;
#line 616 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 616 "ml_util.m"
              {
#line 616 "ml_util.m"
                ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(ml_backend__ml_util__env_ptr);
#line 616 "ml_util.m"
                return;
              }
#line 608 "ml_util.m"
          }
#line 614 "ml_util.m"
        }
#line 608 "ml_util.m"
    }
#line 608 "ml_util.m"
  }
#line 608 "ml_util.m"
}

#line 608 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(
#line 608 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 608 "ml_util.m"
{
#line 608 "ml_util.m"
  {
#line 608 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 608 "ml_util.m"
    if (MR_builtin_setjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0) == 0)
#line 608 "ml_util.m"
      {
#line 608 "ml_util.m"
        {
#line 608 "ml_util.m"
          MR_Word ml_backend__ml_util__Body_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 3)));
#line 608 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_11;
#line 608 "ml_util.m"
          MR_Word ml_backend__ml_util__V_23_23;
#line 609 "ml_util.m"
          MR_Word ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 0)));
#line 609 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 1)));
#line 609 "ml_util.m"
          MR_Word ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 2)));
#line 610 "ml_util.m"
          MR_Word ml_backend__ml_util__V_9_9;
#line 610 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10;
#line 610 "ml_util.m"
          MR_Word ml_backend__ml_util__V_12_12;
#line 610 "ml_util.m"
          MR_Word ml_backend__ml_util__V_13_13;

#line 610 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_8)) == (MR_mktag((MR_Integer) 2)));
#line 610 "ml_util.m"
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 610 "ml_util.m"
            {
#line 610 "ml_util.m"
              {
#line 610 "ml_util.m"
                ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 0)));
#line 610 "ml_util.m"
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 1)));
#line 610 "ml_util.m"
                ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 2)));
#line 610 "ml_util.m"
                ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 3)));
#line 610 "ml_util.m"
                ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 4)));
#line 610 "ml_util.m"
              }
#line 608 "ml_util.m"
              {
#line 610 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 610 "ml_util.m"
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 610 "ml_util.m"
                  {
#line 610 "ml_util.m"
                    ml_backend__ml_util__FunctionBody_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_23_23), (MR_Integer) 1);
#line 608 "ml_util.m"
                    {
#line 267 "ml_util.m"
                      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14 = ml_backend__ml_util__FunctionBody_11;
#line 267 "ml_util.m"
                      {
#line 267 "ml_util.m"
                        ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(ml_backend__ml_util__env_ptr);
                      }
#line 268 "ml_util.m"
                      {
#line 268 "ml_util.m"
                        MR_Word ml_backend__ml_util__Stmt_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 0)));
#line 269 "ml_util.m"
                        MR_Word ml_backend__ml_util___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 1)));

#line 270 "ml_util.m"
                        {
#line 270 "ml_util.m"
                          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_30, &(ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2, ml_backend__ml_util__env_ptr);
                        }
#line 268 "ml_util.m"
                      }
#line 608 "ml_util.m"
                    }
#line 610 "ml_util.m"
                  }
#line 608 "ml_util.m"
              }
#line 610 "ml_util.m"
            }
#line 608 "ml_util.m"
        }
#line 608 "ml_util.m"
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_FALSE;
#line 608 "ml_util.m"
      }
#line 608 "ml_util.m"
    else
#line 608 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_TRUE;
#line 608 "ml_util.m"
  }
#line 608 "ml_util.m"
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
#line 608 "ml_util.m"
    {
#line 608 "ml_util.m"
      ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(&ml_backend__ml_util__env);
    }
#line 608 "ml_util.m"
    return (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
#line 78 "ml_util.m"
  }
#line 78 "ml_util.m"
}

#line 596 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
#line 596 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 596 "ml_util.m"
{
#line 596 "ml_util.m"
  {
#line 596 "ml_util.m"
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 596 "ml_util.m"
    *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_HeadVar__2_12));
#line 596 "ml_util.m"
    {
#line 596 "ml_util.m"
      ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr);
#line 596 "ml_util.m"
      return;
    }
#line 596 "ml_util.m"
  }
#line 596 "ml_util.m"
}

#line 596 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
#line 596 "ml_util.m"
  MR_Box ml_backend__ml_util__closure_arg,
#line 596 "ml_util.m"
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
#line 596 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 596 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 596 "ml_util.m"
{
#line 596 "ml_util.m"
  {
#line 596 "ml_util.m"
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s ml_backend__ml_util__env;

#line 596 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1 = ml_backend__ml_util__wrapper_arg_1;
#line 596 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont = ml_backend__ml_util__cont;
#line 596 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 596 "ml_util.m"
    {
#line 596 "ml_util.m"
      MR_Box ml_backend__ml_util__closure = ml_backend__ml_util__closure_arg;

#line 596 "ml_util.m"
      {
#line 596 "ml_util.m"
        ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__closure, (MR_Integer) 3))), &(ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_HeadVar__2_12, ml_backend__ml_util__has_foreign_languages_2_p_0_1, &ml_backend__ml_util__env);
      }
#line 596 "ml_util.m"
    }
#line 596 "ml_util.m"
  }
#line 596 "ml_util.m"
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
#line 595 "ml_util.m"
  {
#line 595 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 595 "ml_util.m"
    MR_Word ml_backend__ml_util__GetTargetCode_5;

#line 596 "ml_util.m"
    {
#line 596 "ml_util.m"
      ml_backend__ml_util__GetTargetCode_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 596 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 0) = ((MR_Box) (&ml_backend__ml_util_scalar_common_2[0]));
#line 596 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 1) = ((MR_Box) (ml_backend__ml_util__has_foreign_languages_2_p_0_2));
#line 596 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 596 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 3) = ((MR_Box) (ml_backend__ml_util__Statement_3));
#line 596 "ml_util.m"
    }
#line 601 "ml_util.m"
    {
#line 601 "ml_util.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ml_backend__ml_util__GetTargetCode_5, ml_backend__ml_util__Langs_4);
#line 601 "ml_util.m"
      return;
    }
#line 595 "ml_util.m"
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
#line 349 "ml_util.m"
  {
#line 349 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 349 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;
#line 349 "ml_util.m"
    MR_Word ml_backend__ml_util__Stmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 0)));
#line 350 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 1)));

#line 351 "ml_util.m"
    {
#line 351 "ml_util.m"
      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_7, ml_backend__ml_util__DataName_5);
    }
#line 349 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 349 "ml_util.m"
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
#line 274 "ml_util.m"
  while (MR_TRUE)
#line 274 "ml_util.m"
    {
#line 274 "ml_util.m"
      /* tailcall optimized into a loop */
#line 274 "ml_util.m"
      {
#line 274 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;

#line 274 "ml_util.m"
        if (((MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) == (MR_mktag((MR_Integer) 0))))
#line 274 "ml_util.m"
          {
#line 274 "ml_util.m"
            MR_Word ml_backend__ml_util__Statements_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
#line 274 "ml_util.m"
            MR_Word ml_backend__ml_util___Defns_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));

#line 275 "ml_util.m"
            {
#line 275 "ml_util.m"
              ml_backend__ml_util__statements_contains_statement_2_p_0(ml_backend__ml_util__Statements_6, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 275 "ml_util.m"
              return;
            }
#line 274 "ml_util.m"
          }
#line 274 "ml_util.m"
        else
#line 274 "ml_util.m"
          if (((MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) == (MR_mktag((MR_Integer) 2))))
#line 280 "ml_util.m"
            {
#line 280 "ml_util.m"
              MR_Word ml_backend__ml_util__Then_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
#line 280 "ml_util.m"
              MR_Word ml_backend__ml_util__MaybeElse_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 280 "ml_util.m"
              MR_Word ml_backend__ml_util___Cond_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));

#line 267 "ml_util.m"
              *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Then_11;
#line 267 "ml_util.m"
              {
#line 267 "ml_util.m"
                ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
              }
#line 268 "ml_util.m"
              {
#line 268 "ml_util.m"
                MR_Word ml_backend__ml_util__Stmt_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_11, (MR_Integer) 0)));
#line 269 "ml_util.m"
                MR_Word ml_backend__ml_util___Context_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_11, (MR_Integer) 1)));

#line 270 "ml_util.m"
                {
#line 270 "ml_util.m"
                  ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_41, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                }
#line 268 "ml_util.m"
              }
#line 282 "ml_util.m"
              {
#line 282 "ml_util.m"
                ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(ml_backend__ml_util__MaybeElse_12, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 282 "ml_util.m"
                return;
              }
#line 280 "ml_util.m"
            }
#line 274 "ml_util.m"
          else
#line 274 "ml_util.m"
            if (((MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) == (MR_mktag((MR_Integer) 1))))
#line 277 "ml_util.m"
              {
#line 277 "ml_util.m"
                MR_Word ml_backend__ml_util__Statement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 277 "ml_util.m"
                MR_Word ml_backend__ml_util___Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));
#line 277 "ml_util.m"
                MR_Word ml_backend__ml_util___Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

#line 267 "ml_util.m"
                *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Statement_9;
#line 267 "ml_util.m"
                {
#line 267 "ml_util.m"
                  ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
                }
#line 268 "ml_util.m"
                {
#line 268 "ml_util.m"
                  MR_Word ml_backend__ml_util__Stmt_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_9, (MR_Integer) 0)));
#line 269 "ml_util.m"
                  MR_Word ml_backend__ml_util___Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_9, (MR_Integer) 1)));

#line 270 "ml_util.m"
                  /* direct tailcall eliminated */
#line 270 "ml_util.m"
                  {
#line 270 "ml_util.m"
                    MR_Word ml_backend__ml_util__Stmt__tmp_copy_3 = ml_backend__ml_util__Stmt_56;

#line 270 "ml_util.m"
                    ml_backend__ml_util__Stmt_3 = ml_backend__ml_util__Stmt__tmp_copy_3;
#line 270 "ml_util.m"
                  }
#line 270 "ml_util.m"
                  continue;
#line 268 "ml_util.m"
                }
#line 277 "ml_util.m"
              }
#line 274 "ml_util.m"
            else
#line 274 "ml_util.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 285 "ml_util.m"
                {
#line 285 "ml_util.m"
                  MR_Word ml_backend__ml_util__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 4)));
#line 285 "ml_util.m"
                  MR_Word ml_backend__ml_util__Default_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 5)));
#line 285 "ml_util.m"
                  MR_Word ml_backend__ml_util___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
#line 285 "ml_util.m"
                  MR_Word ml_backend__ml_util___Val_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 285 "ml_util.m"
                  MR_Word ml_backend__ml_util___Range_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));

#line 286 "ml_util.m"
                  {
#line 286 "ml_util.m"
                    ml_backend__ml_util__cases_contains_statement_2_p_0(ml_backend__ml_util__Cases_16, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                  }
#line 287 "ml_util.m"
                  {
#line 287 "ml_util.m"
                    ml_backend__ml_util__default_contains_statement_2_p_0(ml_backend__ml_util__Default_17, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 287 "ml_util.m"
                    return;
                  }
#line 285 "ml_util.m"
                }
#line 274 "ml_util.m"
              else
#line 274 "ml_util.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 290 "ml_util.m"
                  {
#line 290 "ml_util.m"
                    MR_Word ml_backend__ml_util__Handler_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));
#line 290 "ml_util.m"
                    MR_Word ml_backend__ml_util__Statement_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 290 "ml_util.m"
                    MR_Word ml_backend__ml_util___Ref_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

#line 267 "ml_util.m"
                    *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Statement_31;
#line 267 "ml_util.m"
                    {
#line 267 "ml_util.m"
                      ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
                    }
#line 268 "ml_util.m"
                    {
#line 268 "ml_util.m"
                      MR_Word ml_backend__ml_util__Stmt_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_31, (MR_Integer) 0)));
#line 269 "ml_util.m"
                      MR_Word ml_backend__ml_util___Context_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_31, (MR_Integer) 1)));

#line 270 "ml_util.m"
                      {
#line 270 "ml_util.m"
                        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_46, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                      }
#line 268 "ml_util.m"
                    }
#line 267 "ml_util.m"
                    *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Handler_19;
#line 267 "ml_util.m"
                    {
#line 267 "ml_util.m"
                      ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
                    }
#line 268 "ml_util.m"
                    {
#line 268 "ml_util.m"
                      MR_Word ml_backend__ml_util__Stmt_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Handler_19, (MR_Integer) 0)));
#line 269 "ml_util.m"
                      MR_Word ml_backend__ml_util___Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Handler_19, (MR_Integer) 1)));

#line 270 "ml_util.m"
                      /* direct tailcall eliminated */
#line 270 "ml_util.m"
                      {
#line 270 "ml_util.m"
                        MR_Word ml_backend__ml_util__Stmt__tmp_copy_3 = ml_backend__ml_util__Stmt_51;

#line 270 "ml_util.m"
                        ml_backend__ml_util__Stmt_3 = ml_backend__ml_util__Stmt__tmp_copy_3;
#line 270 "ml_util.m"
                      }
#line 270 "ml_util.m"
                      continue;
#line 268 "ml_util.m"
                    }
#line 290 "ml_util.m"
                  }
#line 274 "ml_util.m"
                else
#line 274 "ml_util.m"
                  {
#line 274 "ml_util.m"
                  }
#line 274 "ml_util.m"
      }
#line 274 "ml_util.m"
      break;
#line 274 "ml_util.m"
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
#line 267 "ml_util.m"
  {
#line 267 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;

#line 267 "ml_util.m"
    *ml_backend__ml_util__HeadVar__2_2 = ml_backend__ml_util__Statement_1;
#line 267 "ml_util.m"
    {
#line 267 "ml_util.m"
      ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
    }
#line 268 "ml_util.m"
    {
#line 268 "ml_util.m"
      MR_Word ml_backend__ml_util__Stmt_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_1, (MR_Integer) 0)));
#line 269 "ml_util.m"
      MR_Word ml_backend__ml_util___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_1, (MR_Integer) 1)));

#line 270 "ml_util.m"
      {
#line 270 "ml_util.m"
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_6, ml_backend__ml_util__HeadVar__2_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 270 "ml_util.m"
        return;
      }
#line 268 "ml_util.m"
    }
#line 267 "ml_util.m"
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
#line 213 "ml_util.m"
  {
#line 213 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Call_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__TypeInfo_34_34;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__FuncRval_6;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__MaybeObject_7;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__CallKind_10;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__CodeAddr_11;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__QualifiedProcLabel_12;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__MaybeSeqNum_14;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__ProcLabel_16;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__PredLabel_17;
#line 213 "ml_util.m"
    MR_Integer ml_backend__ml_util__ProcId_18;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__ModuleName_19;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__FuncName_20;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__V_22_22;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__V_23_23;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__V_24_24;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__V_27_27;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__V_28_28;
#line 213 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_29_29;
#line 213 "ml_util.m"
    MR_Word ml_backend__ml_util__V_30_30;
#line 214 "ml_util.m"
    MR_Word ml_backend__ml_util___Signature_5;
#line 214 "ml_util.m"
    MR_Word ml_backend__ml_util___CallArgs_8;
#line 214 "ml_util.m"
    MR_Word ml_backend__ml_util___Results_9;
#line 235 "ml_util.m"
    MR_Word ml_backend__ml_util__V_21_21;

#line 214 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 214 "ml_util.m"
      {
#line 214 "ml_util.m"
        ml_backend__ml_util___Signature_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 1)));
#line 214 "ml_util.m"
        ml_backend__ml_util__FuncRval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 2)));
#line 214 "ml_util.m"
        ml_backend__ml_util__MaybeObject_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 3)));
#line 214 "ml_util.m"
        ml_backend__ml_util___CallArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 4)));
#line 214 "ml_util.m"
        ml_backend__ml_util___Results_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 5)));
#line 214 "ml_util.m"
        ml_backend__ml_util__CallKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 6)));
#line 217 "ml_util.m"
        if ((ml_backend__ml_util__CallKind_10 == (MR_Integer) 0))
#line 217 "ml_util.m"
          ml_backend__ml_util__succeeded = MR_TRUE;
#line 217 "ml_util.m"
        else
#line 217 "ml_util.m"
          if ((ml_backend__ml_util__CallKind_10 == (MR_Integer) 1))
#line 217 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_TRUE;
#line 217 "ml_util.m"
          else
#line 217 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_FALSE;
#line 213 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 213 "ml_util.m"
          {
#line 220 "ml_util.m"
            ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__FuncRval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__FuncRval_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 220 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 220 "ml_util.m"
              {
#line 220 "ml_util.m"
                ml_backend__ml_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__FuncRval_6, (MR_Integer) 1)));
#line 220 "ml_util.m"
                ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 220 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 220 "ml_util.m"
                  {
#line 220 "ml_util.m"
                    ml_backend__ml_util__CodeAddr_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_22_22, (MR_Integer) 1)));
#line 224 "ml_util.m"
                    if (((MR_tag((MR_Word) ml_backend__ml_util__CodeAddr_11)) == (MR_mktag((MR_Integer) 1))))
#line 225 "ml_util.m"
                      {
#line 225 "ml_util.m"
                        MR_Integer ml_backend__ml_util__SeqNum_15;
#line 225 "ml_util.m"
                        MR_Word ml_backend__ml_util___Sig_25;

#line 225 "ml_util.m"
                        ml_backend__ml_util__QualifiedProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 0)));
#line 225 "ml_util.m"
                        ml_backend__ml_util__SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 1)));
#line 225 "ml_util.m"
                        ml_backend__ml_util___Sig_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 2)));
#line 226 "ml_util.m"
                        {
#line 226 "ml_util.m"
                          ml_backend__ml_util__MaybeSeqNum_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 226 "ml_util.m"
                          MR_hl_field(MR_mktag(1), ml_backend__ml_util__MaybeSeqNum_14, 0) = ((MR_Box) (ml_backend__ml_util__SeqNum_15));
#line 226 "ml_util.m"
                        }
#line 225 "ml_util.m"
                      }
#line 224 "ml_util.m"
                    else
#line 222 "ml_util.m"
                      {
#line 222 "ml_util.m"
                        MR_Word ml_backend__ml_util___Sig_13;

#line 222 "ml_util.m"
                        ml_backend__ml_util__QualifiedProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 0)));
#line 222 "ml_util.m"
                        ml_backend__ml_util___Sig_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 1)));
#line 223 "ml_util.m"
                        ml_backend__ml_util__MaybeSeqNum_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 222 "ml_util.m"
                      }
#line 229 "ml_util.m"
                    ml_backend__ml_util__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 0)));
#line 229 "ml_util.m"
                    ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 1)));
#line 229 "ml_util.m"
                    ml_backend__ml_util__ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 2)));
#line 229 "ml_util.m"
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_23_23 == (MR_Integer) 0);
#line 213 "ml_util.m"
                    if (ml_backend__ml_util__succeeded)
#line 213 "ml_util.m"
                      {
#line 228 "ml_util.m"
                        ml_backend__ml_util__PredLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_16, (MR_Integer) 0)));
#line 228 "ml_util.m"
                        ml_backend__ml_util__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_16, (MR_Integer) 1)));
#line 232 "ml_util.m"
                        ml_backend__ml_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 232 "ml_util.m"
                        ml_backend__ml_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 232 "ml_util.m"
                        ml_backend__ml_util__FuncName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 2)));
#line 232 "ml_util.m"
                        {
#line 232 "ml_util.m"
                          ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_19, ml_backend__ml_util__V_27_27);
                        }
#line 213 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 213 "ml_util.m"
                          {
#line 232 "ml_util.m"
                            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_24_24 == (MR_Integer) 0);
#line 213 "ml_util.m"
                            if (ml_backend__ml_util__succeeded)
#line 213 "ml_util.m"
                              {
#line 235 "ml_util.m"
                                ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_20)) == (MR_mktag((MR_Integer) 2)));
#line 235 "ml_util.m"
                                if (ml_backend__ml_util__succeeded)
#line 235 "ml_util.m"
                                  {
#line 235 "ml_util.m"
                                    ml_backend__ml_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 0)));
#line 235 "ml_util.m"
                                    ml_backend__ml_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 1)));
#line 235 "ml_util.m"
                                    ml_backend__ml_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 2)));
#line 235 "ml_util.m"
                                    ml_backend__ml_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 3)));
#line 235 "ml_util.m"
                                    {
#line 235 "ml_util.m"
                                      ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0(ml_backend__ml_util__PredLabel_17, ml_backend__ml_util__V_28_28);
                                    }
#line 213 "ml_util.m"
                                    if (ml_backend__ml_util__succeeded)
#line 213 "ml_util.m"
                                      {
#line 235 "ml_util.m"
                                        ml_backend__ml_util__succeeded = (ml_backend__ml_util__ProcId_18 == ml_backend__ml_util__V_29_29);
#line 213 "ml_util.m"
                                        if (ml_backend__ml_util__succeeded)
#line 213 "ml_util.m"
                                          {
#line 5590 "ml_backend.ml_util.c"
                                            ml_backend__ml_util__TypeInfo_34_34 = (MR_Word) &ml_backend__ml_util_scalar_common_1[0];
#line 235 "ml_util.m"
                                            {
#line 235 "ml_util.m"
                                              ml_backend__ml_util__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_util__TypeInfo_34_34, ((MR_Box) (ml_backend__ml_util__MaybeSeqNum_14)), ((MR_Box) (ml_backend__ml_util__V_30_30)));
                                            }
#line 213 "ml_util.m"
                                            if (ml_backend__ml_util__succeeded)
#line 240 "ml_util.m"
                                              ml_backend__ml_util__succeeded = (ml_backend__ml_util__MaybeObject_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "ml_util.m"
                                          }
#line 213 "ml_util.m"
                                      }
#line 235 "ml_util.m"
                                  }
#line 213 "ml_util.m"
                              }
#line 213 "ml_util.m"
                          }
#line 213 "ml_util.m"
                      }
#line 220 "ml_util.m"
                  }
#line 220 "ml_util.m"
              }
#line 213 "ml_util.m"
          }
#line 214 "ml_util.m"
      }
#line 213 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 213 "ml_util.m"
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
#line 204 "ml_util.m"
  while (MR_TRUE)
#line 204 "ml_util.m"
    {
#line 204 "ml_util.m"
      /* tailcall optimized into a loop */
#line 204 "ml_util.m"
      {
#line 204 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 204 "ml_util.m"
        MR_Word ml_backend__ml_util__Defn_2;
#line 204 "ml_util.m"
        MR_Word ml_backend__ml_util__Defns_3;

#line 204 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 204 "ml_util.m"
          {
#line 204 "ml_util.m"
            ml_backend__ml_util__Defn_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 204 "ml_util.m"
            ml_backend__ml_util__Defns_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 206 "ml_util.m"
            {
#line 206 "ml_util.m"
              MR_Word ml_backend__ml_util__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 206 "ml_util.m"
              MR_Word ml_backend__ml_util__FuncName_8;
#line 206 "ml_util.m"
              MR_Word ml_backend__ml_util__V_15_15;
#line 206 "ml_util.m"
              MR_String ml_backend__ml_util__V_16_16;
#line 206 "ml_util.m"
              MR_Integer ml_backend__ml_util__V_17_17;
#line 206 "ml_util.m"
              MR_Word ml_backend__ml_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 206 "ml_util.m"
              MR_Word ml_backend__ml_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 206 "ml_util.m"
              MR_Word ml_backend__ml_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 207 "ml_util.m"
              MR_Integer ml_backend__ml_util__V_9_9;
#line 207 "ml_util.m"
              MR_Word ml_backend__ml_util__V_10_10;
#line 207 "ml_util.m"
              MR_Word ml_backend__ml_util__V_11_11;
#line 208 "ml_util.m"
              MR_Word ml_backend__ml_util__V_12_12;
#line 208 "ml_util.m"
              MR_Word ml_backend__ml_util__V_13_13;
#line 208 "ml_util.m"
              MR_Word ml_backend__ml_util__V_14_14;

#line 207 "ml_util.m"
              ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_4)) == (MR_mktag((MR_Integer) 2)));
#line 207 "ml_util.m"
              if (ml_backend__ml_util__succeeded)
#line 207 "ml_util.m"
                {
#line 207 "ml_util.m"
                  ml_backend__ml_util__FuncName_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 0)));
#line 207 "ml_util.m"
                  ml_backend__ml_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 1)));
#line 207 "ml_util.m"
                  ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 2)));
#line 207 "ml_util.m"
                  ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 3)));
#line 208 "ml_util.m"
                  ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_8)) == (MR_mktag((MR_Integer) 0)));
#line 208 "ml_util.m"
                  if (ml_backend__ml_util__succeeded)
#line 208 "ml_util.m"
                    {
#line 208 "ml_util.m"
                      ml_backend__ml_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 0)));
#line 208 "ml_util.m"
                      ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 1)));
#line 208 "ml_util.m"
                      ml_backend__ml_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 2)));
#line 208 "ml_util.m"
                      ml_backend__ml_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 3)));
#line 208 "ml_util.m"
                      ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 4)));
#line 208 "ml_util.m"
                      ml_backend__ml_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 5)));
#line 208 "ml_util.m"
                      ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_15_15 == (MR_Integer) 0);
#line 206 "ml_util.m"
                      if (ml_backend__ml_util__succeeded)
#line 206 "ml_util.m"
                        {
#line 208 "ml_util.m"
                          ml_backend__ml_util__succeeded = (strcmp(ml_backend__ml_util__V_16_16, (MR_String) "main") == 0);
#line 206 "ml_util.m"
                          if (ml_backend__ml_util__succeeded)
#line 208 "ml_util.m"
                            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_17_17 == (MR_Integer) 2);
#line 206 "ml_util.m"
                        }
#line 208 "ml_util.m"
                    }
#line 207 "ml_util.m"
                }
#line 206 "ml_util.m"
            }
#line 209 "ml_util.m"
            if (!(ml_backend__ml_util__succeeded))
#line 210 "ml_util.m"
              {
#line 210 "ml_util.m"
                /* direct tailcall eliminated */
#line 210 "ml_util.m"
                {
#line 210 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Defns_3;

#line 210 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 210 "ml_util.m"
                }
#line 210 "ml_util.m"
                continue;
#line 210 "ml_util.m"
              }
#line 204 "ml_util.m"
          }
#line 204 "ml_util.m"
        return ml_backend__ml_util__succeeded;
#line 204 "ml_util.m"
      }
#line 204 "ml_util.m"
      break;
#line 204 "ml_util.m"
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
