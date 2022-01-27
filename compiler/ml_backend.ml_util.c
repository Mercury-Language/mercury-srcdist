/*
** Automatically generated from `ml_util.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
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



#line 598 "ml_util.m"
struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0_s {
#line 598 "ml_util.m"
  MR_Word * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__HeadVar__2_12;
#line 598 "ml_util.m"
  MR_Cont ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__cont;
#line 598 "ml_util.m"
  void * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__cont_env_ptr;
#line 598 "ml_util.m"
  MR_bool ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__succeeded;
#line 598 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__SubStatement_7;
#line 598 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__V_13_13;
#line 598 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__V_14_14;
#line 598 "ml_util.m"
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
#line 622 "ml_util.m"
  MR_bool ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
#line 622 "ml_util.m"
  jmp_buf ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0;
#line 622 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14;
#line 622 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15;
#line 622 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21;
#line 622 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22;
#line 86 "ml_util.m"
};

#line 78 "ml_util.m"
struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s {
#line 78 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3;
#line 78 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4;
#line 610 "ml_util.m"
  MR_bool ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
#line 610 "ml_util.m"
  jmp_buf ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0;
#line 610 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14;
#line 610 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15;
#line 610 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26;
#line 78 "ml_util.m"
};

#line 598 "ml_util.m"
struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s {
#line 598 "ml_util.m"
  MR_Box * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1;
#line 598 "ml_util.m"
  MR_Cont ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont;
#line 598 "ml_util.m"
  void * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr;
#line 598 "ml_util.m"
  MR_Word ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_HeadVar__2_12;
#line 598 "ml_util.m"
};


#line 598 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_1(
#line 598 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 598 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0(
#line 598 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 598 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_12,
#line 598 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 598 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 739 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
#line 739 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 739 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 697 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
#line 697 "ml_util.m"
  MR_Word ml_backend__ml_util__Body_4,
#line 697 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 675 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__defn_body_contains_var_2_f_0(
#line 675 "ml_util.m"
  MR_Word ml_backend__ml_util__DefnBody_4,
#line 675 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 570 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
#line 570 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 570 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 527 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
#line 527 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 527 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 440 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__default_contains_var_2_f_0(
#line 440 "ml_util.m"
  MR_Word ml_backend__ml_util__Default_4,
#line 440 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 429 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
#line 429 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 429 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 355 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__stmt_contains_var_2_f_0(
#line 355 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_4,
#line 355 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 345 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
#line 345 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 345 "ml_util.m"
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

#line 622 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(
#line 622 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 622 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(
#line 622 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 622 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(
#line 622 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 610 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(
#line 610 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 610 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(
#line 610 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 610 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(
#line 610 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 598 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
#line 598 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 598 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
#line 598 "ml_util.m"
  MR_Box ml_backend__ml_util__closure_arg,
#line 598 "ml_util.m"
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
#line 598 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 598 "ml_util.m"
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



#line 598 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_1(
#line 598 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 598 "ml_util.m"
{
#line 598 "ml_util.m"
  {
#line 598 "ml_util.m"
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 598 "ml_util.m"
    {
#line 600 "ml_util.m"
      MR_Word ml_backend__ml_util__V_11_11;
#line 601 "ml_util.m"
      MR_Word ml_backend__ml_util__V_8_8;
#line 601 "ml_util.m"
      MR_Word ml_backend__ml_util__V_9_9;
#line 601 "ml_util.m"
      MR_String ml_backend__ml_util__V_10_10;

#line 600 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 0)));
#line 600 "ml_util.m"
      ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 1)));
#line 600 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__V_13_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__V_13_13, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 600 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__succeeded)
#line 600 "ml_util.m"
        {
#line 600 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__V_13_13, (MR_Integer) 1)));
#line 598 "ml_util.m"
          {
#line 601 "ml_util.m"
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 601 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__succeeded)
#line 601 "ml_util.m"
              {
#line 601 "ml_util.m"
                {
#line 601 "ml_util.m"
                  *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__HeadVar__2_12) = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__V_14_14, (MR_Integer) 1)));
#line 601 "ml_util.m"
                  ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__V_14_14, (MR_Integer) 2)));
#line 601 "ml_util.m"
                  ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__V_14_14, (MR_Integer) 3)));
#line 601 "ml_util.m"
                  ml_backend__ml_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__V_14_14, (MR_Integer) 4)));
#line 601 "ml_util.m"
                }
#line 601 "ml_util.m"
                {
#line 601 "ml_util.m"
                  ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__cont_env_ptr);
#line 601 "ml_util.m"
                  return;
                }
#line 601 "ml_util.m"
              }
#line 598 "ml_util.m"
          }
#line 600 "ml_util.m"
        }
#line 598 "ml_util.m"
    }
#line 598 "ml_util.m"
  }
#line 598 "ml_util.m"
}

#line 598 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0(
#line 598 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 598 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_12,
#line 598 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 598 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 598 "ml_util.m"
{
#line 598 "ml_util.m"
  {
#line 598 "ml_util.m"
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0_s ml_backend__ml_util__env;

#line 598 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__HeadVar__2_12 = ml_backend__ml_util__HeadVar__2_12;
#line 598 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__cont = ml_backend__ml_util__cont;
#line 598 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 269 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__SubStatement_7 = ml_backend__ml_util__Statement_3;
#line 269 "ml_util.m"
    {
#line 269 "ml_util.m"
      ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_1(&ml_backend__ml_util__env);
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
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_20, &(ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_env_0__SubStatement_7, ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0_1, &ml_backend__ml_util__env);
      }
#line 270 "ml_util.m"
    }
#line 598 "ml_util.m"
  }
#line 598 "ml_util.m"
}

#line 739 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
#line 739 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 739 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 739 "ml_util.m"
{
#line 741 "ml_util.m"
  while (MR_TRUE)
#line 741 "ml_util.m"
    {
#line 741 "ml_util.m"
      /* tailcall optimized into a loop */
#line 741 "ml_util.m"
      {
#line 741 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 741 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 741 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 741 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 741 "ml_util.m"
        else
#line 743 "ml_util.m"
          {
#line 743 "ml_util.m"
            MR_Word ml_backend__ml_util__Initializer_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 743 "ml_util.m"
            MR_Word ml_backend__ml_util__Initializers_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 744 "ml_util.m"
            MR_Word ml_backend__ml_util__V_9_9;

#line 744 "ml_util.m"
            {
#line 744 "ml_util.m"
              ml_backend__ml_util__V_9_9 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 744 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_9_9 == (MR_Integer) 1);
#line 746 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 745 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 746 "ml_util.m"
            else
#line 747 "ml_util.m"
              {
#line 747 "ml_util.m"
                /* direct tailcall eliminated */
#line 747 "ml_util.m"
                {
#line 747 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Initializers_6;

#line 747 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 747 "ml_util.m"
                }
#line 747 "ml_util.m"
                continue;
#line 747 "ml_util.m"
              }
#line 743 "ml_util.m"
          }
#line 741 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 741 "ml_util.m"
      }
#line 741 "ml_util.m"
      break;
#line 741 "ml_util.m"
    }
#line 739 "ml_util.m"
}

#line 697 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
#line 697 "ml_util.m"
  MR_Word ml_backend__ml_util__Body_4,
#line 697 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 697 "ml_util.m"
{
#line 701 "ml_util.m"
  {
#line 701 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 701 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 701 "ml_util.m"
    if ((ml_backend__ml_util__Body_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "ml_util.m"
      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 701 "ml_util.m"
    else
#line 704 "ml_util.m"
      {
#line 704 "ml_util.m"
        MR_Word ml_backend__ml_util__Statement_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Body_4), (MR_Integer) 1);
#line 704 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 0)));
#line 352 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 1)));

#line 353 "ml_util.m"
        {
#line 353 "ml_util.m"
          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_5);
        }
#line 704 "ml_util.m"
      }
#line 701 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 701 "ml_util.m"
  }
#line 697 "ml_util.m"
}

#line 675 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__defn_body_contains_var_2_f_0(
#line 675 "ml_util.m"
  MR_Word ml_backend__ml_util__DefnBody_4,
#line 675 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 675 "ml_util.m"
{
#line 679 "ml_util.m"
  {
#line 679 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 679 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 679 "ml_util.m"
    if (((MR_tag((MR_Word) ml_backend__ml_util__DefnBody_4)) == (MR_mktag((MR_Integer) 0))))
#line 687 "ml_util.m"
      {
#line 687 "ml_util.m"
        MR_Word ml_backend__ml_util__ClassDefn_15 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__DefnBody_4), (MR_Integer) 0);
#line 687 "ml_util.m"
        MR_Word ml_backend__ml_util__CtorDefns_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 5)));
#line 687 "ml_util.m"
        MR_Word ml_backend__ml_util__FieldDefns_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 6)));
#line 688 "ml_util.m"
        MR_Word ml_backend__ml_util___Kind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 0)));
#line 688 "ml_util.m"
        MR_Word ml_backend__ml_util___Imports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 1)));
#line 688 "ml_util.m"
        MR_Word ml_backend__ml_util___Inherits_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 2)));
#line 688 "ml_util.m"
        MR_Word ml_backend__ml_util___Implements_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 3)));
#line 688 "ml_util.m"
        MR_Word ml_backend__ml_util___TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 4)));
#line 690 "ml_util.m"
        MR_Word ml_backend__ml_util__V_23_23;

#line 690 "ml_util.m"
        {
#line 690 "ml_util.m"
          ml_backend__ml_util__V_23_23 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__FieldDefns_22, ml_backend__ml_util__DataName_5);
        }
#line 690 "ml_util.m"
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_23_23 == (MR_Integer) 1);
#line 692 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 691 "ml_util.m"
          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 692 "ml_util.m"
        else
#line 693 "ml_util.m"
          {
#line 693 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__CtorDefns_21, ml_backend__ml_util__DataName_5);
          }
#line 687 "ml_util.m"
      }
#line 679 "ml_util.m"
    else
#line 679 "ml_util.m"
      if (((MR_tag((MR_Word) ml_backend__ml_util__DefnBody_4)) == (MR_mktag((MR_Integer) 1))))
#line 679 "ml_util.m"
        {
#line 679 "ml_util.m"
          MR_Word ml_backend__ml_util__Initializer_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 1)));
#line 679 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 0)));
#line 679 "ml_util.m"
          MR_Word ml_backend__ml_util___GCStatement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 2)));

#line 681 "ml_util.m"
          {
#line 681 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_8, ml_backend__ml_util__DataName_5);
          }
#line 679 "ml_util.m"
        }
#line 679 "ml_util.m"
      else
#line 684 "ml_util.m"
        {
#line 684 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 2)));
#line 683 "ml_util.m"
          MR_Word ml_backend__ml_util___PredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 0)));
#line 683 "ml_util.m"
          MR_Word ml_backend__ml_util___Params_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 1)));
#line 683 "ml_util.m"
          MR_Word ml_backend__ml_util___Attrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 3)));
#line 683 "ml_util.m"
          MR_Word ml_backend__ml_util___EnvVarNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 4)));

#line 685 "ml_util.m"
          {
#line 685 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__function_body_contains_var_2_f_0(ml_backend__ml_util__FunctionBody_12, ml_backend__ml_util__DataName_5);
          }
#line 684 "ml_util.m"
        }
#line 679 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 679 "ml_util.m"
  }
#line 675 "ml_util.m"
}

#line 570 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
#line 570 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 570 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 570 "ml_util.m"
{
#line 572 "ml_util.m"
  while (MR_TRUE)
#line 572 "ml_util.m"
    {
#line 572 "ml_util.m"
      /* tailcall optimized into a loop */
#line 572 "ml_util.m"
      {
#line 572 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 572 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 572 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 572 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 572 "ml_util.m"
        else
#line 574 "ml_util.m"
          {
#line 574 "ml_util.m"
            MR_Word ml_backend__ml_util__OutlineArg_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 574 "ml_util.m"
            MR_Word ml_backend__ml_util__OutlineArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));

#line 585 "ml_util.m"
            if (((MR_tag((MR_Word) ml_backend__ml_util__OutlineArg_5)) == (MR_mktag((MR_Integer) 1))))
#line 585 "ml_util.m"
              {
#line 585 "ml_util.m"
                MR_Word ml_backend__ml_util__V_9_9;
#line 585 "ml_util.m"
                MR_Word ml_backend__ml_util__Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 2)));
#line 585 "ml_util.m"
                MR_Word ml_backend__ml_util___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 0)));
#line 585 "ml_util.m"
                MR_String ml_backend__ml_util___Str_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 1)));

#line 586 "ml_util.m"
                {
#line 586 "ml_util.m"
                  ml_backend__ml_util__V_9_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_15, ml_backend__ml_util__HeadVar__2_2);
                }
#line 575 "ml_util.m"
                ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_9_9 == (MR_Integer) 1);
#line 585 "ml_util.m"
              }
#line 585 "ml_util.m"
            else
#line 585 "ml_util.m"
              if (((MR_tag((MR_Word) ml_backend__ml_util__OutlineArg_5)) == (MR_mktag((MR_Integer) 2))))
#line 588 "ml_util.m"
                {
#line 588 "ml_util.m"
                  MR_Word ml_backend__ml_util__Lval_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 2)));
#line 588 "ml_util.m"
                  MR_Word ml_backend__ml_util__V_22_22;
#line 588 "ml_util.m"
                  MR_Word ml_backend__ml_util___Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 0)));
#line 588 "ml_util.m"
                  MR_String ml_backend__ml_util___Str_18 = ((MR_String) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 1)));

#line 589 "ml_util.m"
                  {
#line 589 "ml_util.m"
                    ml_backend__ml_util__V_22_22 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_16, ml_backend__ml_util__HeadVar__2_2);
                  }
#line 575 "ml_util.m"
                  ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_22_22 == (MR_Integer) 1);
#line 588 "ml_util.m"
                }
#line 585 "ml_util.m"
              else
#line 585 "ml_util.m"
                ml_backend__ml_util__succeeded = MR_FALSE;
#line 577 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 576 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 577 "ml_util.m"
            else
#line 578 "ml_util.m"
              {
#line 578 "ml_util.m"
                /* direct tailcall eliminated */
#line 578 "ml_util.m"
                {
#line 578 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

#line 578 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 578 "ml_util.m"
                }
#line 578 "ml_util.m"
                continue;
#line 578 "ml_util.m"
              }
#line 574 "ml_util.m"
          }
#line 572 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 572 "ml_util.m"
      }
#line 572 "ml_util.m"
      break;
#line 572 "ml_util.m"
    }
#line 570 "ml_util.m"
}

#line 527 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
#line 527 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 527 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 527 "ml_util.m"
{
#line 530 "ml_util.m"
  while (MR_TRUE)
#line 530 "ml_util.m"
    {
#line 530 "ml_util.m"
      /* tailcall optimized into a loop */
#line 530 "ml_util.m"
      {
#line 530 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 530 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 530 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 530 "ml_util.m"
        else
#line 532 "ml_util.m"
          {
#line 532 "ml_util.m"
            MR_Word ml_backend__ml_util__TargetCode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 532 "ml_util.m"
            MR_Word ml_backend__ml_util__TargetCodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));

#line 549 "ml_util.m"
            if (((MR_tag((MR_Word) ml_backend__ml_util__TargetCode_5)) == (MR_mktag((MR_Integer) 2))))
#line 552 "ml_util.m"
              {
#line 552 "ml_util.m"
                MR_Word ml_backend__ml_util__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)));
#line 552 "ml_util.m"
                MR_Word ml_backend__ml_util__V_35_35;

#line 553 "ml_util.m"
                {
#line 553 "ml_util.m"
                  ml_backend__ml_util__V_35_35 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_20, ml_backend__ml_util__HeadVar__2_2);
                }
#line 533 "ml_util.m"
                ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_35_35 == (MR_Integer) 1);
#line 552 "ml_util.m"
              }
#line 549 "ml_util.m"
            else
#line 549 "ml_util.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_util__TargetCode_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 558 "ml_util.m"
                {
#line 558 "ml_util.m"
                  MR_Word ml_backend__ml_util__EntityName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
#line 558 "ml_util.m"
                  MR_Word ml_backend__ml_util__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_22, (MR_Integer) 0)));
#line 558 "ml_util.m"
                  MR_Word ml_backend__ml_util__QualKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_22, (MR_Integer) 1)));
#line 558 "ml_util.m"
                  MR_Word ml_backend__ml_util__UnqualDataName_25;
#line 558 "ml_util.m"
                  MR_Word ml_backend__ml_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_22, (MR_Integer) 2)));
#line 558 "ml_util.m"
                  MR_Word ml_backend__ml_util__V_27_27;
#line 558 "ml_util.m"
                  MR_Word ml_backend__ml_util__V_28_28;
#line 558 "ml_util.m"
                  MR_Word ml_backend__ml_util__V_29_29;

#line 561 "ml_util.m"
                  ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 561 "ml_util.m"
                  if (ml_backend__ml_util__succeeded)
#line 561 "ml_util.m"
                    {
#line 561 "ml_util.m"
                      ml_backend__ml_util__UnqualDataName_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__V_26_26, (MR_Integer) 0)));
#line 562 "ml_util.m"
                      ml_backend__ml_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 0)));
#line 562 "ml_util.m"
                      ml_backend__ml_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 562 "ml_util.m"
                      ml_backend__ml_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 2)));
#line 562 "ml_util.m"
                      {
#line 562 "ml_util.m"
                        ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_23, ml_backend__ml_util__V_27_27);
                      }
#line 558 "ml_util.m"
                      if (ml_backend__ml_util__succeeded)
#line 558 "ml_util.m"
                        {
#line 562 "ml_util.m"
                          ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_24 == ml_backend__ml_util__V_28_28);
#line 558 "ml_util.m"
                          if (ml_backend__ml_util__succeeded)
#line 562 "ml_util.m"
                            {
#line 562 "ml_util.m"
                              ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__UnqualDataName_25, ml_backend__ml_util__V_29_29);
                            }
#line 558 "ml_util.m"
                        }
#line 561 "ml_util.m"
                    }
#line 558 "ml_util.m"
                }
#line 549 "ml_util.m"
              else
#line 549 "ml_util.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_util__TargetCode_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 555 "ml_util.m"
                  {
#line 555 "ml_util.m"
                    MR_Word ml_backend__ml_util__Lval_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
#line 555 "ml_util.m"
                    MR_Word ml_backend__ml_util__V_42_42;

#line 556 "ml_util.m"
                    {
#line 556 "ml_util.m"
                      ml_backend__ml_util__V_42_42 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_21, ml_backend__ml_util__HeadVar__2_2);
                    }
#line 533 "ml_util.m"
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_42_42 == (MR_Integer) 1);
#line 555 "ml_util.m"
                  }
#line 549 "ml_util.m"
                else
#line 549 "ml_util.m"
                  ml_backend__ml_util__succeeded = MR_FALSE;
#line 535 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 534 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 535 "ml_util.m"
            else
#line 536 "ml_util.m"
              {
#line 536 "ml_util.m"
                /* direct tailcall eliminated */
#line 536 "ml_util.m"
                {
#line 536 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 536 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 536 "ml_util.m"
                }
#line 536 "ml_util.m"
                continue;
#line 536 "ml_util.m"
              }
#line 532 "ml_util.m"
          }
#line 530 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 530 "ml_util.m"
      }
#line 530 "ml_util.m"
      break;
#line 530 "ml_util.m"
    }
#line 527 "ml_util.m"
}

#line 440 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__default_contains_var_2_f_0(
#line 440 "ml_util.m"
  MR_Word ml_backend__ml_util__Default_4,
#line 440 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 440 "ml_util.m"
{
#line 446 "ml_util.m"
  {
#line 446 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 446 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 446 "ml_util.m"
    if (((MR_tag((MR_Word) ml_backend__ml_util__Default_4)) == (MR_mktag((MR_Integer) 1))))
#line 449 "ml_util.m"
      {
#line 449 "ml_util.m"
        MR_Word ml_backend__ml_util__Statement_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Default_4), (MR_Integer) 1);
#line 449 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 0)));
#line 352 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 1)));

#line 353 "ml_util.m"
        {
#line 353 "ml_util.m"
          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_5);
        }
#line 449 "ml_util.m"
      }
#line 446 "ml_util.m"
    else
#line 447 "ml_util.m"
      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 446 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 446 "ml_util.m"
  }
#line 440 "ml_util.m"
}

#line 429 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
#line 429 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 429 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 429 "ml_util.m"
{
#line 431 "ml_util.m"
  while (MR_TRUE)
#line 431 "ml_util.m"
    {
#line 431 "ml_util.m"
      /* tailcall optimized into a loop */
#line 431 "ml_util.m"
      {
#line 431 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 431 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 431 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 431 "ml_util.m"
        else
#line 432 "ml_util.m"
          {
#line 432 "ml_util.m"
            MR_Word ml_backend__ml_util__Case_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 432 "ml_util.m"
            MR_Word ml_backend__ml_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 432 "ml_util.m"
            MR_Word ml_backend__ml_util__Statement_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 2)));
#line 433 "ml_util.m"
            MR_Word ml_backend__ml_util___FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 0)));
#line 433 "ml_util.m"
            MR_Word ml_backend__ml_util___LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 1)));
#line 434 "ml_util.m"
            MR_Word ml_backend__ml_util__V_12_12;
#line 434 "ml_util.m"
            MR_Word ml_backend__ml_util__Stmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 0)));
#line 352 "ml_util.m"
            MR_Word ml_backend__ml_util___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 1)));

#line 353 "ml_util.m"
            {
#line 353 "ml_util.m"
              ml_backend__ml_util__V_12_12 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_16, ml_backend__ml_util__HeadVar__2_2);
            }
#line 434 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_12_12 == (MR_Integer) 1);
#line 436 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 435 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 436 "ml_util.m"
            else
#line 437 "ml_util.m"
              {
#line 437 "ml_util.m"
                /* direct tailcall eliminated */
#line 437 "ml_util.m"
                {
#line 437 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Cases_6;

#line 437 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 437 "ml_util.m"
                }
#line 437 "ml_util.m"
                continue;
#line 437 "ml_util.m"
              }
#line 432 "ml_util.m"
          }
#line 431 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 431 "ml_util.m"
      }
#line 431 "ml_util.m"
      break;
#line 431 "ml_util.m"
    }
#line 429 "ml_util.m"
}

#line 355 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__stmt_contains_var_2_f_0(
#line 355 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_4,
#line 355 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 355 "ml_util.m"
{
#line 359 "ml_util.m"
  {
#line 359 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 359 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 359 "ml_util.m"
    if (((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 0))))
#line 359 "ml_util.m"
      {
#line 359 "ml_util.m"
        MR_Word ml_backend__ml_util__Defns_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
#line 359 "ml_util.m"
        MR_Word ml_backend__ml_util__Statements_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 360 "ml_util.m"
        MR_Word ml_backend__ml_util__V_43_43;

#line 360 "ml_util.m"
        {
#line 360 "ml_util.m"
          ml_backend__ml_util__V_43_43 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__Defns_7, ml_backend__ml_util__DataName_5);
        }
#line 360 "ml_util.m"
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_43_43 == (MR_Integer) 1);
#line 362 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 361 "ml_util.m"
          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 362 "ml_util.m"
        else
#line 363 "ml_util.m"
          {
#line 363 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statements_contains_var_2_f_0(ml_backend__ml_util__Statements_8, ml_backend__ml_util__DataName_5);
          }
#line 359 "ml_util.m"
      }
#line 359 "ml_util.m"
    else
#line 359 "ml_util.m"
      if (((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 2))))
#line 373 "ml_util.m"
        {
#line 373 "ml_util.m"
          MR_Word ml_backend__ml_util__Cond_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
#line 373 "ml_util.m"
          MR_Word ml_backend__ml_util__Then_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 373 "ml_util.m"
          MR_Word ml_backend__ml_util__MaybeElse_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 374 "ml_util.m"
          MR_Word ml_backend__ml_util__V_40_40;

#line 374 "ml_util.m"
          {
#line 374 "ml_util.m"
            ml_backend__ml_util__V_40_40 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Cond_12, ml_backend__ml_util__DataName_5);
          }
#line 374 "ml_util.m"
          ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_40_40 == (MR_Integer) 1);
#line 376 "ml_util.m"
          if (ml_backend__ml_util__succeeded)
#line 375 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 376 "ml_util.m"
          else
#line 378 "ml_util.m"
            {
#line 376 "ml_util.m"
              MR_Word ml_backend__ml_util__V_41_41;
#line 376 "ml_util.m"
              MR_Word ml_backend__ml_util__Stmt_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_13, (MR_Integer) 0)));
#line 352 "ml_util.m"
              MR_Word ml_backend__ml_util___Context_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_13, (MR_Integer) 1)));

#line 353 "ml_util.m"
              {
#line 353 "ml_util.m"
                ml_backend__ml_util__V_41_41 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_96, ml_backend__ml_util__DataName_5);
              }
#line 376 "ml_util.m"
              ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_41_41 == (MR_Integer) 1);
#line 378 "ml_util.m"
              if (ml_backend__ml_util__succeeded)
#line 377 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 378 "ml_util.m"
              else
#line 379 "ml_util.m"
                {
#line 379 "ml_util.m"
                  return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__maybe_statement_contains_var_2_f_0(ml_backend__ml_util__MaybeElse_14, ml_backend__ml_util__DataName_5);
                }
#line 378 "ml_util.m"
            }
#line 373 "ml_util.m"
        }
#line 359 "ml_util.m"
      else
#line 359 "ml_util.m"
        if (((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 1))))
#line 366 "ml_util.m"
          {
#line 366 "ml_util.m"
            MR_Word ml_backend__ml_util__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 366 "ml_util.m"
            MR_Word ml_backend__ml_util__Statement_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 366 "ml_util.m"
            MR_Word ml_backend__ml_util___Kind_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
#line 367 "ml_util.m"
            MR_Word ml_backend__ml_util__V_42_42;

#line 367 "ml_util.m"
            {
#line 367 "ml_util.m"
              ml_backend__ml_util__V_42_42 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_10, ml_backend__ml_util__DataName_5);
            }
#line 367 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_42_42 == (MR_Integer) 1);
#line 369 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 368 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 369 "ml_util.m"
            else
#line 370 "ml_util.m"
              {
#line 370 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_11, ml_backend__ml_util__DataName_5);
              }
#line 366 "ml_util.m"
          }
#line 359 "ml_util.m"
        else
#line 359 "ml_util.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 425 "ml_util.m"
            {
#line 425 "ml_util.m"
              MR_Word ml_backend__ml_util__AtomicStmt_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 457 "ml_util.m"
              if ((ml_backend__ml_util__AtomicStmt_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 482 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 457 "ml_util.m"
              else
#line 457 "ml_util.m"
                if (((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 2))))
#line 462 "ml_util.m"
                  {
#line 462 "ml_util.m"
                    MR_Word ml_backend__ml_util__Lval_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)));
#line 462 "ml_util.m"
                    MR_Word ml_backend__ml_util__Rval_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));
#line 463 "ml_util.m"
                    MR_Word ml_backend__ml_util__V_71_71;

#line 463 "ml_util.m"
                    {
#line 463 "ml_util.m"
                      ml_backend__ml_util__V_71_71 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_51, ml_backend__ml_util__DataName_5);
                    }
#line 463 "ml_util.m"
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_71_71 == (MR_Integer) 1);
#line 465 "ml_util.m"
                    if (ml_backend__ml_util__succeeded)
#line 464 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 465 "ml_util.m"
                    else
#line 466 "ml_util.m"
                      {
#line 466 "ml_util.m"
                        return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_52, ml_backend__ml_util__DataName_5);
                      }
#line 462 "ml_util.m"
                  }
#line 457 "ml_util.m"
                else
#line 457 "ml_util.m"
                  if (((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 1))))
#line 458 "ml_util.m"
                    ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 457 "ml_util.m"
                  else
#line 457 "ml_util.m"
                    if (((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 462 "ml_util.m"
                      {
#line 462 "ml_util.m"
                        MR_Word ml_backend__ml_util__Lval_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));
#line 462 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 2)));
#line 463 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_77_77;

#line 463 "ml_util.m"
                        {
#line 463 "ml_util.m"
                          ml_backend__ml_util__V_77_77 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_79, ml_backend__ml_util__DataName_5);
                        }
#line 463 "ml_util.m"
                        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_77_77 == (MR_Integer) 1);
#line 465 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 464 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 465 "ml_util.m"
                        else
#line 466 "ml_util.m"
                          {
#line 466 "ml_util.m"
                            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_80, ml_backend__ml_util__DataName_5);
                          }
#line 462 "ml_util.m"
                      }
#line 457 "ml_util.m"
                    else
#line 457 "ml_util.m"
                      if (((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 469 "ml_util.m"
                        {
#line 469 "ml_util.m"
                          MR_Word ml_backend__ml_util__Rval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));

#line 470 "ml_util.m"
                          {
#line 470 "ml_util.m"
                            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_72, ml_backend__ml_util__DataName_5);
                          }
#line 469 "ml_util.m"
                        }
#line 457 "ml_util.m"
                      else
#line 457 "ml_util.m"
                        if (((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 493 "ml_util.m"
                          {
#line 493 "ml_util.m"
                            MR_Word ml_backend__ml_util__Components_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 2)));
#line 493 "ml_util.m"
                            MR_Word ml_backend__ml_util___Lang_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));

#line 494 "ml_util.m"
                            {
#line 494 "ml_util.m"
                              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__target_code_components_contains_var_2_f_0(ml_backend__ml_util__Components_65, ml_backend__ml_util__DataName_5);
                            }
#line 493 "ml_util.m"
                          }
#line 457 "ml_util.m"
                        else
#line 457 "ml_util.m"
                          if (((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 484 "ml_util.m"
                            {
#line 484 "ml_util.m"
                              MR_Word ml_backend__ml_util__Lval_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));

#line 485 "ml_util.m"
                              {
#line 485 "ml_util.m"
                                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_73, ml_backend__ml_util__DataName_5);
                              }
#line 484 "ml_util.m"
                            }
#line 457 "ml_util.m"
                          else
#line 457 "ml_util.m"
                            if (((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 474 "ml_util.m"
                              {
#line 474 "ml_util.m"
                                MR_Word ml_backend__ml_util__Target_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));
#line 474 "ml_util.m"
                                MR_Word ml_backend__ml_util__Args_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 7)));
#line 472 "ml_util.m"
                                MR_Word ml_backend__ml_util___MaybeTag_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 2)));
#line 472 "ml_util.m"
                                MR_Word ml_backend__ml_util___ExplicitSecTag_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 3)));
#line 472 "ml_util.m"
                                MR_Word ml_backend__ml_util___Type_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 4)));
#line 472 "ml_util.m"
                                MR_Word ml_backend__ml_util___MaybeSize_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 5)));
#line 472 "ml_util.m"
                                MR_Word ml_backend__ml_util___MaybeCtorName_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 6)));
#line 472 "ml_util.m"
                                MR_Word ml_backend__ml_util___ArgTypes_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 8)));
#line 472 "ml_util.m"
                                MR_Word ml_backend__ml_util___MayUseAtomic_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 9)));
#line 472 "ml_util.m"
                                MR_Word ml_backend__ml_util___AllocId_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 10)));
#line 475 "ml_util.m"
                                MR_Word ml_backend__ml_util__V_70_70;

#line 475 "ml_util.m"
                                {
#line 475 "ml_util.m"
                                  ml_backend__ml_util__V_70_70 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Target_53, ml_backend__ml_util__DataName_5);
                                }
#line 475 "ml_util.m"
                                ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_70_70 == (MR_Integer) 1);
#line 477 "ml_util.m"
                                if (ml_backend__ml_util__succeeded)
#line 476 "ml_util.m"
                                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 477 "ml_util.m"
                                else
#line 478 "ml_util.m"
                                  {
#line 478 "ml_util.m"
                                    return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_59, ml_backend__ml_util__DataName_5);
                                  }
#line 474 "ml_util.m"
                              }
#line 457 "ml_util.m"
                            else
#line 457 "ml_util.m"
                              if (((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 497 "ml_util.m"
                                {
#line 497 "ml_util.m"
                                  MR_Word ml_backend__ml_util__OutlineArgs_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 2)));
#line 497 "ml_util.m"
                                  MR_Word ml_backend__ml_util__ReturnLvals_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 3)));
#line 496 "ml_util.m"
                                  MR_String ml_backend__ml_util___Code_68 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 4)));
#line 496 "ml_util.m"
                                  MR_Word ml_backend__ml_util___Lang_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));
#line 498 "ml_util.m"
                                  MR_Word ml_backend__ml_util__V_69_69;

#line 498 "ml_util.m"
                                  {
#line 498 "ml_util.m"
                                    ml_backend__ml_util__V_69_69 = ml_backend__ml_util__outline_args_contains_var_2_f_0(ml_backend__ml_util__OutlineArgs_66, ml_backend__ml_util__DataName_5);
                                  }
#line 498 "ml_util.m"
                                  ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_69_69 == (MR_Integer) 1);
#line 500 "ml_util.m"
                                  if (ml_backend__ml_util__succeeded)
#line 499 "ml_util.m"
                                    ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 500 "ml_util.m"
                                  else
#line 501 "ml_util.m"
                                    {
#line 501 "ml_util.m"
                                      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__ReturnLvals_67, ml_backend__ml_util__DataName_5);
                                    }
#line 497 "ml_util.m"
                                }
#line 457 "ml_util.m"
                              else
#line 457 "ml_util.m"
                                if (((((MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 487 "ml_util.m"
                                  {
#line 487 "ml_util.m"
                                    MR_Word ml_backend__ml_util__Rval_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));

#line 488 "ml_util.m"
                                    {
#line 488 "ml_util.m"
                                      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_74, ml_backend__ml_util__DataName_5);
                                    }
#line 487 "ml_util.m"
                                  }
#line 457 "ml_util.m"
                                else
#line 490 "ml_util.m"
                                  {
#line 490 "ml_util.m"
                                    MR_Word ml_backend__ml_util__TrailOp_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_32, (MR_Integer) 1)));

#line 509 "ml_util.m"
                                    if ((((ml_backend__ml_util__TrailOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || ((ml_backend__ml_util__TrailOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))))
#line 518 "ml_util.m"
                                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 509 "ml_util.m"
                                    else
#line 509 "ml_util.m"
                                      if (((MR_tag((MR_Word) ml_backend__ml_util__TrailOp_63)) == (MR_mktag((MR_Integer) 2))))
#line 512 "ml_util.m"
                                        {
#line 512 "ml_util.m"
                                          MR_Word ml_backend__ml_util__Rval_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_63, (MR_Integer) 0)));
#line 512 "ml_util.m"
                                          MR_Word ml_backend__ml_util___Reason_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_63, (MR_Integer) 1)));

#line 513 "ml_util.m"
                                          {
#line 513 "ml_util.m"
                                            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_86, ml_backend__ml_util__DataName_5);
                                          }
#line 512 "ml_util.m"
                                        }
#line 509 "ml_util.m"
                                      else
#line 509 "ml_util.m"
                                        if (((MR_tag((MR_Word) ml_backend__ml_util__TrailOp_63)) == (MR_mktag((MR_Integer) 1))))
#line 509 "ml_util.m"
                                          {
#line 509 "ml_util.m"
                                            MR_Word ml_backend__ml_util__Lval_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__TrailOp_63, (MR_Integer) 0)));

#line 510 "ml_util.m"
                                            {
#line 510 "ml_util.m"
                                              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_85, ml_backend__ml_util__DataName_5);
                                            }
#line 509 "ml_util.m"
                                          }
#line 509 "ml_util.m"
                                        else
#line 509 "ml_util.m"
                                          if (((((MR_tag((MR_Word) ml_backend__ml_util__TrailOp_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_63, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 520 "ml_util.m"
                                            {
#line 520 "ml_util.m"
                                              MR_Word ml_backend__ml_util__Lval_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_63, (MR_Integer) 1)));

#line 521 "ml_util.m"
                                              {
#line 521 "ml_util.m"
                                                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_88, ml_backend__ml_util__DataName_5);
                                              }
#line 520 "ml_util.m"
                                            }
#line 509 "ml_util.m"
                                          else
#line 523 "ml_util.m"
                                            {
#line 523 "ml_util.m"
                                              MR_Word ml_backend__ml_util__Rval_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_63, (MR_Integer) 1)));

#line 524 "ml_util.m"
                                              {
#line 524 "ml_util.m"
                                                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_89, ml_backend__ml_util__DataName_5);
                                              }
#line 523 "ml_util.m"
                                            }
#line 490 "ml_util.m"
                                  }
#line 425 "ml_util.m"
            }
#line 359 "ml_util.m"
          else
#line 359 "ml_util.m"
            if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 399 "ml_util.m"
              {
#line 399 "ml_util.m"
                MR_Word ml_backend__ml_util__Func_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 399 "ml_util.m"
                MR_Word ml_backend__ml_util__Obj_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
#line 399 "ml_util.m"
                MR_Word ml_backend__ml_util__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
#line 399 "ml_util.m"
                MR_Word ml_backend__ml_util__RetLvals_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
#line 399 "ml_util.m"
                MR_Word ml_backend__ml_util___Sig_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 399 "ml_util.m"
                MR_Word ml_backend__ml_util___TailCall_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 6)));
#line 400 "ml_util.m"
                MR_Word ml_backend__ml_util__V_35_35;

#line 400 "ml_util.m"
                {
#line 400 "ml_util.m"
                  ml_backend__ml_util__V_35_35 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Func_24, ml_backend__ml_util__DataName_5);
                }
#line 400 "ml_util.m"
                ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_35_35 == (MR_Integer) 1);
#line 402 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 401 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 402 "ml_util.m"
                else
#line 404 "ml_util.m"
                  {
#line 1841 "ml_backend.ml_util.c"
                    MR_Word ml_backend__ml_util__Rval_91;
#line 1843 "ml_backend.ml_util.c"
                    MR_Word ml_backend__ml_util__V_99_99;

#line 1846 "ml_backend.ml_util.c"
                    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Obj_25)) == (MR_mktag((MR_Integer) 1)));
#line 1848 "ml_backend.ml_util.c"
                    if (ml_backend__ml_util__succeeded)
#line 1850 "ml_backend.ml_util.c"
                      {
#line 1852 "ml_backend.ml_util.c"
                        ml_backend__ml_util__Rval_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Obj_25, (MR_Integer) 0)));
#line 760 "ml_util.m"
                        {
#line 760 "ml_util.m"
                          ml_backend__ml_util__V_99_99 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_91, ml_backend__ml_util__DataName_5);
                        }
#line 402 "ml_util.m"
                        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_99_99 == (MR_Integer) 1);
#line 1861 "ml_backend.ml_util.c"
                      }
#line 404 "ml_util.m"
                    if (ml_backend__ml_util__succeeded)
#line 403 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 404 "ml_util.m"
                    else
#line 406 "ml_util.m"
                      {
#line 404 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_37_37;

#line 404 "ml_util.m"
                        {
#line 404 "ml_util.m"
                          ml_backend__ml_util__V_37_37 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_26, ml_backend__ml_util__DataName_5);
                        }
#line 404 "ml_util.m"
                        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_37_37 == (MR_Integer) 1);
#line 406 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 405 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 406 "ml_util.m"
                        else
#line 407 "ml_util.m"
                          {
#line 407 "ml_util.m"
                            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_27, ml_backend__ml_util__DataName_5);
                          }
#line 406 "ml_util.m"
                      }
#line 404 "ml_util.m"
                  }
#line 399 "ml_util.m"
              }
#line 359 "ml_util.m"
            else
#line 359 "ml_util.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 396 "ml_util.m"
                {
#line 396 "ml_util.m"
                  MR_Word ml_backend__ml_util__Rval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 396 "ml_util.m"
                  MR_Word ml_backend__ml_util___Labels_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));

#line 397 "ml_util.m"
                  {
#line 397 "ml_util.m"
                    return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_44, ml_backend__ml_util__DataName_5);
                  }
#line 396 "ml_util.m"
                }
#line 359 "ml_util.m"
              else
#line 359 "ml_util.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 413 "ml_util.m"
                  {
#line 413 "ml_util.m"
                    MR_Word ml_backend__ml_util__Ref_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 414 "ml_util.m"
                    {
#line 414 "ml_util.m"
                      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Ref_30, ml_backend__ml_util__DataName_5);
                    }
#line 413 "ml_util.m"
                  }
#line 359 "ml_util.m"
                else
#line 359 "ml_util.m"
                  if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 410 "ml_util.m"
                    {
#line 410 "ml_util.m"
                      MR_Word ml_backend__ml_util__Rvals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 411 "ml_util.m"
                      {
#line 411 "ml_util.m"
                        return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Rvals_29, ml_backend__ml_util__DataName_5);
                      }
#line 410 "ml_util.m"
                    }
#line 359 "ml_util.m"
                  else
#line 359 "ml_util.m"
                    if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 382 "ml_util.m"
                      {
#line 382 "ml_util.m"
                        MR_Word ml_backend__ml_util__Val_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 382 "ml_util.m"
                        MR_Word ml_backend__ml_util__Cases_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
#line 382 "ml_util.m"
                        MR_Word ml_backend__ml_util__Default_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
#line 382 "ml_util.m"
                        MR_Word ml_backend__ml_util___Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 382 "ml_util.m"
                        MR_Word ml_backend__ml_util___Range_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
#line 383 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_38_38;

#line 383 "ml_util.m"
                        {
#line 383 "ml_util.m"
                          ml_backend__ml_util__V_38_38 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Val_16, ml_backend__ml_util__DataName_5);
                        }
#line 383 "ml_util.m"
                        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_38_38 == (MR_Integer) 1);
#line 385 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 384 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 385 "ml_util.m"
                        else
#line 387 "ml_util.m"
                          {
#line 385 "ml_util.m"
                            MR_Word ml_backend__ml_util__V_39_39;

#line 385 "ml_util.m"
                            {
#line 385 "ml_util.m"
                              ml_backend__ml_util__V_39_39 = ml_backend__ml_util__cases_contains_var_2_f_0(ml_backend__ml_util__Cases_18, ml_backend__ml_util__DataName_5);
                            }
#line 385 "ml_util.m"
                            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_39_39 == (MR_Integer) 1);
#line 387 "ml_util.m"
                            if (ml_backend__ml_util__succeeded)
#line 386 "ml_util.m"
                              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 387 "ml_util.m"
                            else
#line 388 "ml_util.m"
                              {
#line 388 "ml_util.m"
                                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__default_contains_var_2_f_0(ml_backend__ml_util__Default_19, ml_backend__ml_util__DataName_5);
                              }
#line 387 "ml_util.m"
                          }
#line 382 "ml_util.m"
                      }
#line 359 "ml_util.m"
                    else
#line 359 "ml_util.m"
                      if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 416 "ml_util.m"
                        {
#line 416 "ml_util.m"
                          MR_Word ml_backend__ml_util__Handler_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
#line 416 "ml_util.m"
                          MR_Word ml_backend__ml_util__Statement_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 416 "ml_util.m"
                          MR_Word ml_backend__ml_util__Ref_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 417 "ml_util.m"
                          MR_Word ml_backend__ml_util__V_33_33;

#line 417 "ml_util.m"
                          {
#line 417 "ml_util.m"
                            ml_backend__ml_util__V_33_33 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Ref_46, ml_backend__ml_util__DataName_5);
                          }
#line 417 "ml_util.m"
                          ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_33_33 == (MR_Integer) 1);
#line 419 "ml_util.m"
                          if (ml_backend__ml_util__succeeded)
#line 418 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 419 "ml_util.m"
                          else
#line 421 "ml_util.m"
                            {
#line 419 "ml_util.m"
                              MR_Word ml_backend__ml_util__V_34_34;

#line 419 "ml_util.m"
                              {
#line 419 "ml_util.m"
                                ml_backend__ml_util__V_34_34 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_45, ml_backend__ml_util__DataName_5);
                              }
#line 419 "ml_util.m"
                              ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_34_34 == (MR_Integer) 1);
#line 421 "ml_util.m"
                              if (ml_backend__ml_util__succeeded)
#line 420 "ml_util.m"
                                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 421 "ml_util.m"
                              else
#line 422 "ml_util.m"
                                {
#line 422 "ml_util.m"
                                  return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Handler_31, ml_backend__ml_util__DataName_5);
                                }
#line 421 "ml_util.m"
                            }
#line 416 "ml_util.m"
                        }
#line 359 "ml_util.m"
                      else
#line 394 "ml_util.m"
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 359 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 359 "ml_util.m"
  }
#line 355 "ml_util.m"
}

#line 345 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
#line 345 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 345 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_2)
#line 345 "ml_util.m"
{
#line 347 "ml_util.m"
  {
#line 347 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 347 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 347 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 347 "ml_util.m"
    else
#line 348 "ml_util.m"
      {
#line 348 "ml_util.m"
        MR_Word ml_backend__ml_util__Statement_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 348 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 352 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 353 "ml_util.m"
        {
#line 353 "ml_util.m"
          return ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_2);
        }
#line 348 "ml_util.m"
      }
#line 347 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 347 "ml_util.m"
  }
#line 345 "ml_util.m"
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
#line 339 "ml_util.m"
            MR_Word ml_backend__ml_util__V_9_9;
#line 339 "ml_util.m"
            MR_Word ml_backend__ml_util__Stmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 352 "ml_util.m"
            MR_Word ml_backend__ml_util___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 353 "ml_util.m"
            {
#line 353 "ml_util.m"
              ml_backend__ml_util__V_9_9 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_13, ml_backend__ml_util__HeadVar__2_2);
            }
#line 339 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_9_9 == (MR_Integer) 1);
#line 341 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 340 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 341 "ml_util.m"
            else
#line 342 "ml_util.m"
              {
#line 342 "ml_util.m"
                /* direct tailcall eliminated */
#line 342 "ml_util.m"
                {
#line 342 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Statements_6;

#line 342 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 342 "ml_util.m"
                }
#line 342 "ml_util.m"
                continue;
#line 342 "ml_util.m"
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
#line 2215 "ml_backend.ml_util.c"
  {
#line 2217 "ml_backend.ml_util.c"
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2219 "ml_backend.ml_util.c"
    MR_Word ml_backend__ml_util__Statement_5;

#line 2222 "ml_backend.ml_util.c"
    if (ml_backend__ml_util__succeeded)
#line 2224 "ml_backend.ml_util.c"
      {
#line 2226 "ml_backend.ml_util.c"
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
#line 2251 "ml_backend.ml_util.c"
      }
#line 2253 "ml_backend.ml_util.c"
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
#line 2389 "ml_backend.ml_util.c"
  {
#line 2391 "ml_backend.ml_util.c"
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2393 "ml_backend.ml_util.c"
    MR_Word ml_backend__ml_util__Statement_4;

#line 2396 "ml_backend.ml_util.c"
    if (ml_backend__ml_util__succeeded)
#line 2398 "ml_backend.ml_util.c"
      {
#line 2400 "ml_backend.ml_util.c"
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
#line 2425 "ml_backend.ml_util.c"
      }
#line 2427 "ml_backend.ml_util.c"
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
#line 926 "ml_util.m"
  {
#line 926 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 926 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;

#line 926 "ml_util.m"
    {
#line 926 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 926 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_3));
#line 926 "ml_util.m"
    }
#line 926 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 926 "ml_util.m"
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
#line 921 "ml_util.m"
  {
#line 921 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 921 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 921 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;

#line 923 "ml_util.m"
    {
#line 923 "ml_util.m"
      ml_backend__ml_util__V_6_6 = ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(ml_backend__ml_util__ModuleInfo_4, ml_backend__ml_util__ReservedAddress_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
    }
#line 923 "ml_util.m"
    {
#line 923 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 923 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 923 "ml_util.m"
    }
#line 921 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 921 "ml_util.m"
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
#line 918 "ml_util.m"
  {
#line 918 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 918 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 918 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 918 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 918 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;

#line 919 "ml_util.m"
    {
#line 919 "ml_util.m"
      ml_backend__ml_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 919 "ml_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__V_8_8, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
#line 919 "ml_util.m"
    }
#line 919 "ml_util.m"
    {
#line 919 "ml_util.m"
      ml_backend__ml_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 919 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 1) = ((MR_Box) (ml_backend__ml_util__V_8_8));
#line 919 "ml_util.m"
    }
#line 919 "ml_util.m"
    {
#line 919 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 919 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 919 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (&ml_backend__ml_util_scalar_common_3[6]));
#line 919 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 2) = ((MR_Box) (ml_backend__ml_util__V_7_7));
#line 919 "ml_util.m"
    }
#line 919 "ml_util.m"
    {
#line 919 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 919 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 919 "ml_util.m"
    }
#line 918 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 918 "ml_util.m"
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
#line 915 "ml_util.m"
  {
#line 915 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 915 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;

#line 915 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__1_1 == (MR_Integer) 0))
#line 915 "ml_util.m"
      {
#line 915 "ml_util.m"
        ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[4]);
#line 915 "ml_util.m"
      }
#line 915 "ml_util.m"
    else
#line 916 "ml_util.m"
      {
#line 916 "ml_util.m"
        ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[5]);
#line 916 "ml_util.m"
      }
#line 915 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 915 "ml_util.m"
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
#line 910 "ml_util.m"
  {
#line 910 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 910 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 910 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 910 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 910 "ml_util.m"
    {
#line 910 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 910 "ml_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
#line 910 "ml_util.m"
    }
#line 910 "ml_util.m"
    {
#line 910 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 910 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 910 "ml_util.m"
    }
#line 910 "ml_util.m"
    {
#line 910 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 910 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 910 "ml_util.m"
    }
#line 910 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 910 "ml_util.m"
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
#line 912 "ml_util.m"
  {
#line 912 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 912 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 912 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;
#line 912 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;

#line 913 "ml_util.m"
    {
#line 913 "ml_util.m"
      ml_backend__ml_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 913 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 913 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 1) = ((MR_Box) (ml_backend__ml_util__Lang_4));
#line 913 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 2) = ((MR_Box) (ml_backend__ml_util__String_5));
#line 913 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 913 "ml_util.m"
    }
#line 913 "ml_util.m"
    {
#line 913 "ml_util.m"
      ml_backend__ml_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 913 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_6_6, 1) = ((MR_Box) (ml_backend__ml_util__V_7_7));
#line 913 "ml_util.m"
    }
#line 913 "ml_util.m"
    {
#line 913 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 913 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 913 "ml_util.m"
    }
#line 912 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 912 "ml_util.m"
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
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 908 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 1) = ((MR_Box) (ml_backend__ml_util__String_3));
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
#line 175 "ml_util.m"
}

#line 173 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_null_pointer_1_f_0(
#line 173 "ml_util.m"
  MR_Word ml_backend__ml_util__Type_3)
#line 173 "ml_util.m"
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
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 906 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 1) = ((MR_Box) (ml_backend__ml_util__Type_3));
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
#line 903 "ml_util.m"
  {
#line 903 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 903 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__4_4;

#line 903 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 906 "ml_util.m"
      {
#line 906 "ml_util.m"
        MR_Word ml_backend__ml_util__V_12_12;
#line 906 "ml_util.m"
        MR_Word ml_backend__ml_util__V_13_13;

#line 906 "ml_util.m"
        {
#line 906 "ml_util.m"
          ml_backend__ml_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 906 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_13_13, 1) = ((MR_Box) (ml_backend__ml_util__HeadVar__1_1));
#line 906 "ml_util.m"
        }
#line 906 "ml_util.m"
        {
#line 906 "ml_util.m"
          ml_backend__ml_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 906 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_12_12, 1) = ((MR_Box) (ml_backend__ml_util__V_13_13));
#line 906 "ml_util.m"
        }
#line 906 "ml_util.m"
        {
#line 906 "ml_util.m"
          ml_backend__ml_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "ml_util.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__ml_util__V_12_12));
#line 906 "ml_util.m"
        }
#line 906 "ml_util.m"
      }
#line 903 "ml_util.m"
    else
#line 903 "ml_util.m"
      {
#line 903 "ml_util.m"
        MR_Box ml_backend__ml_util__X_7 = (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, (MR_Integer) 0));
#line 903 "ml_util.m"
        MR_Box MR_CALL (* ml_backend__ml_util__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 903 "ml_util.m"
        MR_Box ml_backend__ml_util__conv1_HeadVar__4_4;

#line 903 "ml_util.m"
        {
#line 903 "ml_util.m"
          ml_backend__ml_util__conv1_HeadVar__4_4 = ml_backend__ml_util__func_0(((MR_Box) ml_backend__ml_util__HeadVar__2_2), ml_backend__ml_util__X_7);
        }
#line 903 "ml_util.m"
        ml_backend__ml_util__HeadVar__4_4 = ((MR_Word) ml_backend__ml_util__conv1_HeadVar__4_4);
#line 903 "ml_util.m"
      }
#line 903 "ml_util.m"
    return ml_backend__ml_util__HeadVar__4_4;
#line 903 "ml_util.m"
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
#line 901 "ml_util.m"
  {
#line 901 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 901 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 901 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;

#line 901 "ml_util.m"
    {
#line 901 "ml_util.m"
      ml_backend__ml_util__V_6_6 = mercury__list__map_2_f_0(ml_backend__ml_util__TypeInfo_for_T_7, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_util__Conv_4, ml_backend__ml_util__List_5);
    }
#line 901 "ml_util.m"
    {
#line 901 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 901 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 901 "ml_util.m"
    }
#line 901 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 901 "ml_util.m"
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
#line 891 "ml_util.m"
  {
#line 891 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 891 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 891 "ml_util.m"
    MR_Word ml_backend__ml_util__Rval_4;
#line 891 "ml_util.m"
    MR_Word ml_backend__ml_util__PrivateBuiltin_5;
#line 891 "ml_util.m"
    MR_Word ml_backend__ml_util__MLDS_Module_6;
#line 891 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 891 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 891 "ml_util.m"
    MR_Word ml_backend__ml_util__V_11_11;

#line 892 "ml_util.m"
    {
#line 892 "ml_util.m"
      ml_backend__ml_util__PrivateBuiltin_5 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 893 "ml_util.m"
    {
#line 893 "ml_util.m"
      ml_backend__ml_util__MLDS_Module_6 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_util__PrivateBuiltin_5);
    }
#line 899 "ml_util.m"
    {
#line 899 "ml_util.m"
      ml_backend__ml_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 899 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_11_11, 0) = ((MR_Box) (ml_backend__ml_util__Name_3));
#line 899 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 899 "ml_util.m"
    }
#line 898 "ml_util.m"
    {
#line 898 "ml_util.m"
      ml_backend__ml_util__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 898 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 0) = ((MR_Box) (ml_backend__ml_util__MLDS_Module_6));
#line 898 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 1) = ((MR_Box) ((MR_Integer) 0));
#line 898 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 2) = ((MR_Box) (ml_backend__ml_util__V_11_11));
#line 898 "ml_util.m"
    }
#line 898 "ml_util.m"
    {
#line 898 "ml_util.m"
      ml_backend__ml_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_8_8, 0) = ((MR_Box) (ml_backend__ml_util__V_9_9));
#line 898 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 898 "ml_util.m"
    }
#line 898 "ml_util.m"
    {
#line 898 "ml_util.m"
      ml_backend__ml_util__Rval_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 898 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, 0) = ((MR_Box) (ml_backend__ml_util__V_8_8));
#line 898 "ml_util.m"
    }
#line 891 "ml_util.m"
    {
#line 891 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 891 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_4));
#line 891 "ml_util.m"
    }
#line 891 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 891 "ml_util.m"
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
#line 855 "ml_util.m"
  {
#line 855 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded = (ml_backend__ml_util__HeadVar__1_1 == (MR_Integer) 1);
#line 855 "ml_util.m"
    MR_Word ml_backend__ml_util__TypeName_3;
#line 855 "ml_util.m"
    MR_Word ml_backend__ml_util__Builtin_5;
#line 855 "ml_util.m"
    MR_Word ml_backend__ml_util__PrivateBuiltin_6;
#line 855 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiImplementation_7;
#line 855 "ml_util.m"
    MR_Word ml_backend__ml_util__Univ_8;
#line 855 "ml_util.m"
    MR_Word ml_backend__ml_util__MutVar_9;
#line 855 "ml_util.m"
    MR_Word ml_backend__ml_util__TypeDesc_10;
#line 855 "ml_util.m"
    MR_String ml_backend__ml_util__V_12_12;
#line 855 "ml_util.m"
    MR_String ml_backend__ml_util__V_13_13;
#line 855 "ml_util.m"
    MR_String ml_backend__ml_util__V_14_14;
#line 855 "ml_util.m"
    MR_String ml_backend__ml_util__V_15_15;
#line 855 "ml_util.m"
    MR_String ml_backend__ml_util__V_43_43;
#line 855 "ml_util.m"
    MR_Word ml_backend__ml_util__V_44_44;
#line 855 "ml_util.m"
    MR_Integer ml_backend__ml_util___Arity_4;

#line 855 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 855 "ml_util.m"
      {
#line 855 "ml_util.m"
        ml_backend__ml_util__TypeName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 0)));
#line 855 "ml_util.m"
        ml_backend__ml_util___Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 856 "ml_util.m"
        {
#line 856 "ml_util.m"
          ml_backend__ml_util__Builtin_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
#line 857 "ml_util.m"
        {
#line 857 "ml_util.m"
          ml_backend__ml_util__PrivateBuiltin_6 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
#line 858 "ml_util.m"
        ml_backend__ml_util__V_12_12 = (MR_String) "rtti_implementation";
#line 859 "ml_util.m"
        ml_backend__ml_util__V_13_13 = (MR_String) "univ";
#line 860 "ml_util.m"
        ml_backend__ml_util__V_14_14 = (MR_String) "mutvar";
#line 861 "ml_util.m"
        ml_backend__ml_util__V_15_15 = (MR_String) "type_desc";
#line 862 "ml_util.m"
        ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__TypeName_3)) == (MR_mktag((MR_Integer) 1)));
#line 862 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 862 "ml_util.m"
          {
#line 862 "ml_util.m"
            ml_backend__ml_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__TypeName_3, (MR_Integer) 0)));
#line 862 "ml_util.m"
            ml_backend__ml_util__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__TypeName_3, (MR_Integer) 1)));
#line 858 "ml_util.m"
            ml_backend__ml_util__RttiImplementation_7 = (MR_Word) &ml_backend__ml_util_scalar_common_3[0];
#line 859 "ml_util.m"
            ml_backend__ml_util__Univ_8 = (MR_Word) &ml_backend__ml_util_scalar_common_3[1];
#line 860 "ml_util.m"
            ml_backend__ml_util__MutVar_9 = (MR_Word) &ml_backend__ml_util_scalar_common_3[2];
#line 861 "ml_util.m"
            ml_backend__ml_util__TypeDesc_10 = (MR_Word) &ml_backend__ml_util_scalar_common_3[3];
#line 863 "ml_util.m"
            if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "ref") == 0))
#line 877 "ml_util.m"
              {
#line 877 "ml_util.m"
                ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
              }
#line 863 "ml_util.m"
            else
#line 863 "ml_util.m"
              if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "univ") == 0))
#line 885 "ml_util.m"
                {
#line 885 "ml_util.m"
                  ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__Univ_8, ml_backend__ml_util__V_44_44);
                }
#line 863 "ml_util.m"
              else
#line 863 "ml_util.m"
                if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "mutvar") == 0))
#line 886 "ml_util.m"
                  {
#line 886 "ml_util.m"
                    ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__MutVar_9, ml_backend__ml_util__V_44_44);
                  }
#line 863 "ml_util.m"
                else
#line 863 "ml_util.m"
                  if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "c_pointer") == 0))
#line 879 "ml_util.m"
                    {
#line 879 "ml_util.m"
                      ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__Builtin_5, ml_backend__ml_util__V_44_44);
                    }
#line 863 "ml_util.m"
                  else
#line 863 "ml_util.m"
                    if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "type_desc") == 0))
#line 872 "ml_util.m"
                      {
#line 872 "ml_util.m"
                        ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__TypeDesc_10, ml_backend__ml_util__V_44_44);
                      }
#line 863 "ml_util.m"
                    else
#line 863 "ml_util.m"
                      if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "type_info") == 0))
#line 865 "ml_util.m"
                        {
#line 865 "ml_util.m"
                          ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                        }
#line 863 "ml_util.m"
                      else
#line 863 "ml_util.m"
                        if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "heap_pointer") == 0))
#line 878 "ml_util.m"
                          {
#line 878 "ml_util.m"
                            ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                          }
#line 863 "ml_util.m"
                        else
#line 863 "ml_util.m"
                          if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "type_ctor_desc") == 0))
#line 874 "ml_util.m"
                            {
#line 874 "ml_util.m"
                              ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__TypeDesc_10, ml_backend__ml_util__V_44_44);
                            }
#line 863 "ml_util.m"
                          else
#line 863 "ml_util.m"
                            if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "type_ctor_info") == 0))
#line 863 "ml_util.m"
                              {
#line 863 "ml_util.m"
                                ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                              }
#line 863 "ml_util.m"
                            else
#line 863 "ml_util.m"
                              if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "typeclass_info") == 0))
#line 864 "ml_util.m"
                                {
#line 864 "ml_util.m"
                                  ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                                }
#line 863 "ml_util.m"
                              else
#line 863 "ml_util.m"
                                if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "pseudo_type_desc") == 0))
#line 873 "ml_util.m"
                                  {
#line 873 "ml_util.m"
                                    ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__TypeDesc_10, ml_backend__ml_util__V_44_44);
                                  }
#line 863 "ml_util.m"
                                else
#line 863 "ml_util.m"
                                  if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "comparison_result") == 0))
#line 884 "ml_util.m"
                                    {
#line 884 "ml_util.m"
                                      ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__Builtin_5, ml_backend__ml_util__V_44_44);
                                    }
#line 863 "ml_util.m"
                                  else
#line 863 "ml_util.m"
                                    if ((strcmp(ml_backend__ml_util__V_43_43, (MR_String) "base_typeclass_info") == 0))
#line 862 "ml_util.m"
                                      {
#line 862 "ml_util.m"
                                        ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__PrivateBuiltin_6, ml_backend__ml_util__V_44_44);
                                      }
#line 863 "ml_util.m"
                                    else
#line 863 "ml_util.m"
                                      ml_backend__ml_util__succeeded = MR_FALSE;
#line 863 "ml_util.m"
            if (!(ml_backend__ml_util__succeeded))
#line 870 "ml_util.m"
              {
#line 870 "ml_util.m"
                return ml_backend__ml_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_util__RttiImplementation_7, ml_backend__ml_util__V_44_44);
              }
#line 862 "ml_util.m"
          }
#line 855 "ml_util.m"
      }
#line 855 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 855 "ml_util.m"
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
#line 850 "ml_util.m"
  {
#line 850 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 850 "ml_util.m"
    MR_Word ml_backend__ml_util__TypeCtor_5;

#line 851 "ml_util.m"
    {
#line 851 "ml_util.m"
      ml_backend__ml_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ml_backend__ml_util__Type_4, &ml_backend__ml_util__TypeCtor_5);
    }
#line 850 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 852 "ml_util.m"
      {
#line 852 "ml_util.m"
        return ml_backend__ml_util__succeeded = ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_p_0(ml_backend__ml_util__Target_3, ml_backend__ml_util__TypeCtor_5);
      }
#line 850 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 850 "ml_util.m"
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
#line 830 "ml_util.m"
  {
#line 830 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 830 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 830 "ml_util.m"
    if (((MR_tag((MR_Word) ml_backend__ml_util__Lval_4)) == (MR_mktag((MR_Integer) 0))))
#line 830 "ml_util.m"
      {
#line 830 "ml_util.m"
        MR_Word ml_backend__ml_util__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
#line 830 "ml_util.m"
        MR_Word ml_backend__ml_util___MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 830 "ml_util.m"
        MR_Word ml_backend__ml_util___FieldId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 2)));
#line 830 "ml_util.m"
        MR_Word ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 3)));
#line 830 "ml_util.m"
        MR_Word ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 4)));

#line 831 "ml_util.m"
        {
#line 831 "ml_util.m"
          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_8, ml_backend__ml_util__DataName_5);
        }
#line 830 "ml_util.m"
      }
#line 830 "ml_util.m"
    else
#line 830 "ml_util.m"
      if (((MR_tag((MR_Word) ml_backend__ml_util__Lval_4)) == (MR_mktag((MR_Integer) 2))))
#line 837 "ml_util.m"
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 830 "ml_util.m"
      else
#line 830 "ml_util.m"
        if (((MR_tag((MR_Word) ml_backend__ml_util__Lval_4)) == (MR_mktag((MR_Integer) 1))))
#line 833 "ml_util.m"
          {
#line 833 "ml_util.m"
            MR_Word ml_backend__ml_util__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 833 "ml_util.m"
            MR_Word ml_backend__ml_util___Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));

#line 834 "ml_util.m"
            {
#line 834 "ml_util.m"
              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_19, ml_backend__ml_util__DataName_5);
            }
#line 833 "ml_util.m"
          }
#line 830 "ml_util.m"
        else
#line 839 "ml_util.m"
          {
#line 839 "ml_util.m"
            MR_Word ml_backend__ml_util__ModuleName_14;
#line 839 "ml_util.m"
            MR_Word ml_backend__ml_util__QualKind_15;
#line 839 "ml_util.m"
            MR_Word ml_backend__ml_util__Name_16;
#line 839 "ml_util.m"
            MR_Word ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 839 "ml_util.m"
            MR_Word ml_backend__ml_util___Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
#line 841 "ml_util.m"
            MR_Word ml_backend__ml_util__V_18_18;
#line 841 "ml_util.m"
            MR_Word ml_backend__ml_util__V_22_22;
#line 841 "ml_util.m"
            MR_Word ml_backend__ml_util__V_23_23;
#line 841 "ml_util.m"
            MR_Word ml_backend__ml_util__V_24_24;

#line 839 "ml_util.m"
            ml_backend__ml_util__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 0)));
#line 839 "ml_util.m"
            ml_backend__ml_util__QualKind_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 1)));
#line 839 "ml_util.m"
            ml_backend__ml_util__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 2)));
#line 841 "ml_util.m"
            ml_backend__ml_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
#line 841 "ml_util.m"
            ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));
#line 841 "ml_util.m"
            ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
#line 841 "ml_util.m"
            {
#line 841 "ml_util.m"
              ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_14, ml_backend__ml_util__V_22_22);
            }
#line 841 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 841 "ml_util.m"
              {
#line 841 "ml_util.m"
                ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_15 == ml_backend__ml_util__V_23_23);
#line 841 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 841 "ml_util.m"
                  {
#line 841 "ml_util.m"
                    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 841 "ml_util.m"
                    if (ml_backend__ml_util__succeeded)
#line 841 "ml_util.m"
                      {
#line 841 "ml_util.m"
                        ml_backend__ml_util__V_24_24 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_18_18), (MR_Integer) 1);
#line 841 "ml_util.m"
                        {
#line 841 "ml_util.m"
                          ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_util__Name_16, ml_backend__ml_util__V_24_24);
                        }
#line 841 "ml_util.m"
                      }
#line 841 "ml_util.m"
                  }
#line 841 "ml_util.m"
              }
#line 843 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 842 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 843 "ml_util.m"
            else
#line 844 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 839 "ml_util.m"
          }
#line 830 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 830 "ml_util.m"
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
#line 820 "ml_util.m"
  while (MR_TRUE)
#line 820 "ml_util.m"
    {
#line 820 "ml_util.m"
      /* tailcall optimized into a loop */
#line 820 "ml_util.m"
      {
#line 820 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 820 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 820 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 820 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 820 "ml_util.m"
        else
#line 821 "ml_util.m"
          {
#line 821 "ml_util.m"
            MR_Word ml_backend__ml_util__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 821 "ml_util.m"
            MR_Word ml_backend__ml_util__Lvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 822 "ml_util.m"
            MR_Word ml_backend__ml_util__V_9_9;

#line 822 "ml_util.m"
            {
#line 822 "ml_util.m"
              ml_backend__ml_util__V_9_9 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 822 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_9_9 == (MR_Integer) 1);
#line 824 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 823 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 824 "ml_util.m"
            else
#line 825 "ml_util.m"
              {
#line 825 "ml_util.m"
                /* direct tailcall eliminated */
#line 825 "ml_util.m"
                {
#line 825 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Lvals_6;

#line 825 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 825 "ml_util.m"
                }
#line 825 "ml_util.m"
                continue;
#line 825 "ml_util.m"
              }
#line 821 "ml_util.m"
          }
#line 820 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 820 "ml_util.m"
      }
#line 820 "ml_util.m"
      break;
#line 820 "ml_util.m"
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
#line 764 "ml_util.m"
  while (MR_TRUE)
#line 764 "ml_util.m"
    {
#line 764 "ml_util.m"
      /* tailcall optimized into a loop */
#line 764 "ml_util.m"
      {
#line 764 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 764 "ml_util.m"
        MR_Word ml_backend__ml_util__ContainsVar_6;

#line 764 "ml_util.m"
        if (((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 1))))
#line 764 "ml_util.m"
          {
#line 764 "ml_util.m"
            MR_Word ml_backend__ml_util__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

#line 765 "ml_util.m"
            {
#line 765 "ml_util.m"
              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_7, ml_backend__ml_util__DataName_5);
            }
#line 764 "ml_util.m"
          }
#line 764 "ml_util.m"
        else
#line 764 "ml_util.m"
          if (((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 2))))
#line 767 "ml_util.m"
            {
#line 767 "ml_util.m"
              MR_Word ml_backend__ml_util__SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));
#line 767 "ml_util.m"
              MR_Integer ml_backend__ml_util___Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

#line 768 "ml_util.m"
              /* direct tailcall eliminated */
#line 768 "ml_util.m"
              {
#line 768 "ml_util.m"
                MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__SubRval_9;

#line 768 "ml_util.m"
                ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 768 "ml_util.m"
              }
#line 768 "ml_util.m"
              continue;
#line 767 "ml_util.m"
            }
#line 764 "ml_util.m"
          else
#line 764 "ml_util.m"
            if (((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 0))))
#line 811 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 764 "ml_util.m"
            else
#line 764 "ml_util.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 800 "ml_util.m"
                {
#line 800 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 3)));
#line 800 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 800 "ml_util.m"
                  MR_Word ml_backend__ml_util___Op_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));
#line 801 "ml_util.m"
                  MR_Word ml_backend__ml_util__V_35_35;

#line 801 "ml_util.m"
                  {
#line 801 "ml_util.m"
                    ml_backend__ml_util__V_35_35 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__RvalA_38, ml_backend__ml_util__DataName_5);
                  }
#line 801 "ml_util.m"
                  ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_35_35 == (MR_Integer) 1);
#line 803 "ml_util.m"
                  if (ml_backend__ml_util__succeeded)
#line 802 "ml_util.m"
                    ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 803 "ml_util.m"
                  else
#line 804 "ml_util.m"
                    {
#line 804 "ml_util.m"
                      /* direct tailcall eliminated */
#line 804 "ml_util.m"
                      {
#line 804 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__RvalB_30;

#line 804 "ml_util.m"
                        ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 804 "ml_util.m"
                      }
#line 804 "ml_util.m"
                      continue;
#line 804 "ml_util.m"
                    }
#line 800 "ml_util.m"
                }
#line 764 "ml_util.m"
              else
#line 764 "ml_util.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 770 "ml_util.m"
                  {
#line 770 "ml_util.m"
                    MR_Word ml_backend__ml_util__Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 780 "ml_util.m"
                    if (((MR_tag((MR_Word) ml_backend__ml_util__Const_10)) == (MR_mktag((MR_Integer) 1))))
#line 772 "ml_util.m"
                      {
#line 772 "ml_util.m"
                        MR_Word ml_backend__ml_util__DataAddr_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Const_10), (MR_Integer) 1);
#line 772 "ml_util.m"
                        MR_Word ml_backend__ml_util__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataAddr_11, (MR_Integer) 0)));
#line 772 "ml_util.m"
                        MR_Word ml_backend__ml_util__RawDataName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataAddr_11, (MR_Integer) 1)));
#line 774 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
#line 774 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
#line 774 "ml_util.m"
                        MR_Word ml_backend__ml_util___QualKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));

#line 774 "ml_util.m"
                        {
#line 774 "ml_util.m"
                          ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_12, ml_backend__ml_util__V_40_40);
                        }
#line 774 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 774 "ml_util.m"
                          {
#line 774 "ml_util.m"
                            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__RawDataName_13, ml_backend__ml_util__V_41_41);
                          }
#line 777 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 776 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 777 "ml_util.m"
                        else
#line 778 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 772 "ml_util.m"
                      }
#line 780 "ml_util.m"
                    else
#line 794 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 770 "ml_util.m"
                  }
#line 764 "ml_util.m"
                else
#line 764 "ml_util.m"
                  if (((((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 807 "ml_util.m"
                    {
#line 807 "ml_util.m"
                      MR_Word ml_backend__ml_util__Lval_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 808 "ml_util.m"
                      {
#line 808 "ml_util.m"
                        return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_39, ml_backend__ml_util__DataName_5);
                      }
#line 807 "ml_util.m"
                    }
#line 764 "ml_util.m"
                  else
#line 764 "ml_util.m"
                    if (((((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 817 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 764 "ml_util.m"
                    else
#line 764 "ml_util.m"
                      if (((((MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 797 "ml_util.m"
                        {
#line 797 "ml_util.m"
                          MR_Word ml_backend__ml_util__RvalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 797 "ml_util.m"
                          MR_Word ml_backend__ml_util___Op_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 798 "ml_util.m"
                          /* direct tailcall eliminated */
#line 798 "ml_util.m"
                          {
#line 798 "ml_util.m"
                            MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__RvalA_29;

#line 798 "ml_util.m"
                            ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 798 "ml_util.m"
                          }
#line 798 "ml_util.m"
                          continue;
#line 797 "ml_util.m"
                        }
#line 764 "ml_util.m"
                      else
#line 813 "ml_util.m"
                        {
#line 813 "ml_util.m"
                          MR_Word ml_backend__ml_util__IndexRval_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 813 "ml_util.m"
                          MR_Word ml_backend__ml_util___VectorCommon_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 814 "ml_util.m"
                          /* direct tailcall eliminated */
#line 814 "ml_util.m"
                          {
#line 814 "ml_util.m"
                            MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__IndexRval_33;

#line 814 "ml_util.m"
                            ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 814 "ml_util.m"
                          }
#line 814 "ml_util.m"
                          continue;
#line 813 "ml_util.m"
                        }
#line 764 "ml_util.m"
        return ml_backend__ml_util__ContainsVar_6;
#line 764 "ml_util.m"
      }
#line 764 "ml_util.m"
      break;
#line 764 "ml_util.m"
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
#line 758 "ml_util.m"
  {
#line 758 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 758 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 758 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 758 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 758 "ml_util.m"
    else
#line 759 "ml_util.m"
      {
#line 759 "ml_util.m"
        MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));

#line 760 "ml_util.m"
        {
#line 760 "ml_util.m"
          return ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
        }
#line 759 "ml_util.m"
      }
#line 758 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 758 "ml_util.m"
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
#line 750 "ml_util.m"
  while (MR_TRUE)
#line 750 "ml_util.m"
    {
#line 750 "ml_util.m"
      /* tailcall optimized into a loop */
#line 750 "ml_util.m"
      {
#line 750 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 750 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 750 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 750 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 750 "ml_util.m"
        else
#line 751 "ml_util.m"
          {
#line 751 "ml_util.m"
            MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 751 "ml_util.m"
            MR_Word ml_backend__ml_util__Rvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 752 "ml_util.m"
            MR_Word ml_backend__ml_util__V_9_9;

#line 752 "ml_util.m"
            {
#line 752 "ml_util.m"
              ml_backend__ml_util__V_9_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 752 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_9_9 == (MR_Integer) 1);
#line 754 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 753 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 754 "ml_util.m"
            else
#line 755 "ml_util.m"
              {
#line 755 "ml_util.m"
                /* direct tailcall eliminated */
#line 755 "ml_util.m"
                {
#line 755 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Rvals_6;

#line 755 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 755 "ml_util.m"
                }
#line 755 "ml_util.m"
                continue;
#line 755 "ml_util.m"
              }
#line 751 "ml_util.m"
          }
#line 750 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 750 "ml_util.m"
      }
#line 750 "ml_util.m"
      break;
#line 750 "ml_util.m"
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
#line 726 "ml_util.m"
  {
#line 726 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 726 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 726 "ml_util.m"
    if ((ml_backend__ml_util__Initializer_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 727 "ml_util.m"
      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 726 "ml_util.m"
    else
#line 726 "ml_util.m"
      if (((MR_tag((MR_Word) ml_backend__ml_util__Initializer_4)) == (MR_mktag((MR_Integer) 3))))
#line 735 "ml_util.m"
        {
#line 735 "ml_util.m"
          MR_Word ml_backend__ml_util__ElementInitializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 736 "ml_util.m"
          {
#line 736 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__ElementInitializers_10, ml_backend__ml_util__DataName_5);
          }
#line 735 "ml_util.m"
        }
#line 726 "ml_util.m"
      else
#line 726 "ml_util.m"
        if (((MR_tag((MR_Word) ml_backend__ml_util__Initializer_4)) == (MR_mktag((MR_Integer) 1))))
#line 729 "ml_util.m"
          {
#line 729 "ml_util.m"
            MR_Word ml_backend__ml_util__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 730 "ml_util.m"
            {
#line 730 "ml_util.m"
              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_7, ml_backend__ml_util__DataName_5);
            }
#line 729 "ml_util.m"
          }
#line 726 "ml_util.m"
        else
#line 732 "ml_util.m"
          {
#line 732 "ml_util.m"
            MR_Word ml_backend__ml_util__FieldInitializers_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 1)));
#line 732 "ml_util.m"
            MR_Word ml_backend__ml_util___Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 733 "ml_util.m"
            {
#line 733 "ml_util.m"
              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__FieldInitializers_9, ml_backend__ml_util__DataName_5);
            }
#line 732 "ml_util.m"
          }
#line 726 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 726 "ml_util.m"
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
#line 671 "ml_util.m"
  {
#line 671 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 671 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;
#line 671 "ml_util.m"
    MR_Word ml_backend__ml_util__DefnBody_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 3)));
#line 672 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 0)));
#line 672 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 1)));
#line 672 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 2)));

#line 673 "ml_util.m"
    {
#line 673 "ml_util.m"
      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defn_body_contains_var_2_f_0(ml_backend__ml_util__DefnBody_10, ml_backend__ml_util__DataName_5);
    }
#line 671 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 671 "ml_util.m"
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
#line 663 "ml_util.m"
  while (MR_TRUE)
#line 663 "ml_util.m"
    {
#line 663 "ml_util.m"
      /* tailcall optimized into a loop */
#line 663 "ml_util.m"
      {
#line 663 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 663 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 663 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 663 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 663 "ml_util.m"
        else
#line 664 "ml_util.m"
          {
#line 664 "ml_util.m"
            MR_Word ml_backend__ml_util__Defn_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 664 "ml_util.m"
            MR_Word ml_backend__ml_util__Defns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 665 "ml_util.m"
            MR_Word ml_backend__ml_util__V_9_9;

#line 665 "ml_util.m"
            {
#line 665 "ml_util.m"
              ml_backend__ml_util__V_9_9 = ml_backend__ml_util__defn_contains_var_2_f_0(ml_backend__ml_util__Defn_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 665 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_9_9 == (MR_Integer) 1);
#line 667 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 666 "ml_util.m"
              ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 667 "ml_util.m"
            else
#line 668 "ml_util.m"
              {
#line 668 "ml_util.m"
                /* direct tailcall eliminated */
#line 668 "ml_util.m"
                {
#line 668 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Defns_6;

#line 668 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 668 "ml_util.m"
                }
#line 668 "ml_util.m"
                continue;
#line 668 "ml_util.m"
              }
#line 664 "ml_util.m"
          }
#line 663 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 663 "ml_util.m"
      }
#line 663 "ml_util.m"
      break;
#line 663 "ml_util.m"
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
#line 649 "ml_util.m"
  {
#line 649 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 649 "ml_util.m"
    MR_Word ml_backend__ml_util__Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 649 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 650 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 650 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 650 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));

#line 651 "ml_util.m"
    {
#line 651 "ml_util.m"
      ml_backend__ml_util__V_7_7 = ml_backend__mlds__access_1_f_0(ml_backend__ml_util__Flags_5);
    }
#line 651 "ml_util.m"
    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_7_7 == (MR_Integer) 0);
#line 649 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 649 "ml_util.m"
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
#line 644 "ml_util.m"
  {
#line 644 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 644 "ml_util.m"
    MR_Word ml_backend__ml_util__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 644 "ml_util.m"
    MR_Word ml_backend__ml_util__Type_7;
#line 645 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 645 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 645 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 646 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 646 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;

#line 646 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_6)) == (MR_mktag((MR_Integer) 1)));
#line 646 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 646 "ml_util.m"
      {
#line 646 "ml_util.m"
        ml_backend__ml_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 0)));
#line 646 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 1)));
#line 646 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 2)));
#line 647 "ml_util.m"
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 646 "ml_util.m"
      }
#line 644 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 644 "ml_util.m"
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
#line 637 "ml_util.m"
  {
#line 637 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 637 "ml_util.m"
    MR_Word ml_backend__ml_util__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 637 "ml_util.m"
    MR_Word ml_backend__ml_util__Type_7;
#line 637 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiId_10;
#line 637 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiName_12;
#line 637 "ml_util.m"
    MR_Word ml_backend__ml_util__V_13_13;
#line 638 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 638 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 638 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 639 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 639 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 641 "ml_util.m"
    MR_Word ml_backend__ml_util__V_11_11;

#line 639 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_6)) == (MR_mktag((MR_Integer) 1)));
#line 639 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 639 "ml_util.m"
      {
#line 639 "ml_util.m"
        ml_backend__ml_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 0)));
#line 639 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 1)));
#line 639 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 2)));
#line 640 "ml_util.m"
        ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Type_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 640 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 640 "ml_util.m"
          {
#line 640 "ml_util.m"
            ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_7, (MR_Integer) 1)));
#line 640 "ml_util.m"
            ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 640 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 640 "ml_util.m"
              {
#line 640 "ml_util.m"
                ml_backend__ml_util__RttiId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_13_13, (MR_Integer) 0)));
#line 641 "ml_util.m"
                ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__RttiId_10)) == (MR_mktag((MR_Integer) 0)));
#line 641 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 641 "ml_util.m"
                  {
#line 641 "ml_util.m"
                    ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_10, (MR_Integer) 0)));
#line 641 "ml_util.m"
                    ml_backend__ml_util__RttiName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_10, (MR_Integer) 1)));
#line 642 "ml_util.m"
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__RttiName_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 641 "ml_util.m"
                  }
#line 640 "ml_util.m"
              }
#line 640 "ml_util.m"
          }
#line 639 "ml_util.m"
      }
#line 637 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 637 "ml_util.m"
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
#line 633 "ml_util.m"
  {
#line 633 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 633 "ml_util.m"
    MR_Word ml_backend__ml_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 634 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 634 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 634 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 635 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 635 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_8_8;
#line 635 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 635 "ml_util.m"
    MR_Word ml_backend__ml_util__V_10_10;

#line 635 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_3)) == (MR_mktag((MR_Integer) 2)));
#line 635 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 635 "ml_util.m"
      {
#line 635 "ml_util.m"
        ml_backend__ml_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 635 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 635 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 2)));
#line 635 "ml_util.m"
        ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 3)));
#line 635 "ml_util.m"
      }
#line 633 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 633 "ml_util.m"
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
#line 629 "ml_util.m"
  {
#line 629 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 629 "ml_util.m"
    MR_Word ml_backend__ml_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 630 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 630 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 630 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 631 "ml_util.m"
    MR_String ml_backend__ml_util__V_7_7;
#line 631 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_8_8;

#line 631 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_3)) == (MR_mktag((MR_Integer) 0)));
#line 631 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 631 "ml_util.m"
      {
#line 631 "ml_util.m"
        ml_backend__ml_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 631 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 631 "ml_util.m"
      }
#line 629 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 629 "ml_util.m"
  }
#line 91 "ml_util.m"
}

#line 622 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(
#line 622 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 622 "ml_util.m"
{
#line 622 "ml_util.m"
  {
#line 622 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 622 "ml_util.m"
    MR_builtin_longjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0, 1);
#line 622 "ml_util.m"
  }
#line 622 "ml_util.m"
}

#line 622 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(
#line 622 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 622 "ml_util.m"
{
#line 622 "ml_util.m"
  {
#line 622 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 622 "ml_util.m"
    {
#line 626 "ml_util.m"
      MR_Word ml_backend__ml_util__V_16_16;
#line 627 "ml_util.m"
      MR_Word ml_backend__ml_util__V_17_17;
#line 627 "ml_util.m"
      MR_Word ml_backend__ml_util__V_18_18;
#line 627 "ml_util.m"
      MR_String ml_backend__ml_util__V_19_19;

#line 626 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, (MR_Integer) 0)));
#line 626 "ml_util.m"
      ml_backend__ml_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, (MR_Integer) 1)));
#line 627 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 627 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 627 "ml_util.m"
        {
#line 627 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15, (MR_Integer) 1)));
#line 622 "ml_util.m"
          {
#line 627 "ml_util.m"
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 627 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 627 "ml_util.m"
              {
#line 627 "ml_util.m"
                {
#line 627 "ml_util.m"
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 1)));
#line 627 "ml_util.m"
                  ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 2)));
#line 627 "ml_util.m"
                  ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 3)));
#line 627 "ml_util.m"
                  ml_backend__ml_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 4)));
#line 627 "ml_util.m"
                }
#line 622 "ml_util.m"
                {
#line 627 "ml_util.m"
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22);
#line 627 "ml_util.m"
                  if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 627 "ml_util.m"
                    {
#line 627 "ml_util.m"
                      ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(ml_backend__ml_util__env_ptr);
#line 627 "ml_util.m"
                      return;
                    }
#line 622 "ml_util.m"
                }
#line 627 "ml_util.m"
              }
#line 622 "ml_util.m"
          }
#line 627 "ml_util.m"
        }
#line 622 "ml_util.m"
    }
#line 622 "ml_util.m"
  }
#line 622 "ml_util.m"
}

#line 622 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(
#line 622 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 622 "ml_util.m"
{
#line 622 "ml_util.m"
  {
#line 622 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 622 "ml_util.m"
    if (MR_builtin_setjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0) == 0)
#line 622 "ml_util.m"
      {
#line 622 "ml_util.m"
        {
#line 622 "ml_util.m"
          MR_Word ml_backend__ml_util__Body_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 3)));
#line 622 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_11;
#line 622 "ml_util.m"
          MR_Word ml_backend__ml_util__V_20_20;
#line 623 "ml_util.m"
          MR_Word ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 0)));
#line 623 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 1)));
#line 623 "ml_util.m"
          MR_Word ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 2)));
#line 624 "ml_util.m"
          MR_Word ml_backend__ml_util__V_9_9;
#line 624 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10;
#line 624 "ml_util.m"
          MR_Word ml_backend__ml_util__V_12_12;
#line 624 "ml_util.m"
          MR_Word ml_backend__ml_util__V_13_13;

#line 624 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_8)) == (MR_mktag((MR_Integer) 2)));
#line 624 "ml_util.m"
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 624 "ml_util.m"
            {
#line 624 "ml_util.m"
              {
#line 624 "ml_util.m"
                ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 0)));
#line 624 "ml_util.m"
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 1)));
#line 624 "ml_util.m"
                ml_backend__ml_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 2)));
#line 624 "ml_util.m"
                ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 3)));
#line 624 "ml_util.m"
                ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 4)));
#line 624 "ml_util.m"
              }
#line 622 "ml_util.m"
              {
#line 624 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 624 "ml_util.m"
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 624 "ml_util.m"
                  {
#line 624 "ml_util.m"
                    ml_backend__ml_util__FunctionBody_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_20_20), (MR_Integer) 1);
#line 622 "ml_util.m"
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
#line 622 "ml_util.m"
                    }
#line 624 "ml_util.m"
                  }
#line 622 "ml_util.m"
              }
#line 624 "ml_util.m"
            }
#line 622 "ml_util.m"
        }
#line 622 "ml_util.m"
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = MR_FALSE;
#line 622 "ml_util.m"
      }
#line 622 "ml_util.m"
    else
#line 622 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = MR_TRUE;
#line 622 "ml_util.m"
  }
#line 622 "ml_util.m"
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
#line 622 "ml_util.m"
    {
#line 622 "ml_util.m"
      ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(&ml_backend__ml_util__env);
    }
#line 622 "ml_util.m"
    return (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
#line 86 "ml_util.m"
  }
#line 86 "ml_util.m"
}

#line 610 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(
#line 610 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 610 "ml_util.m"
{
#line 610 "ml_util.m"
  {
#line 610 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 610 "ml_util.m"
    MR_builtin_longjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0, 1);
#line 610 "ml_util.m"
  }
#line 610 "ml_util.m"
}

#line 610 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(
#line 610 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 610 "ml_util.m"
{
#line 610 "ml_util.m"
  {
#line 610 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 610 "ml_util.m"
    {
#line 614 "ml_util.m"
      MR_Word ml_backend__ml_util__V_16_16;

#line 614 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, (MR_Integer) 0)));
#line 614 "ml_util.m"
      ml_backend__ml_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, (MR_Integer) 1)));
#line 616 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 616 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 616 "ml_util.m"
        {
#line 616 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15, (MR_Integer) 1)));
#line 610 "ml_util.m"
          {
#line 618 "ml_util.m"
            if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 616 "ml_util.m"
              {
#line 616 "ml_util.m"
                MR_Word ml_backend__ml_util__TargetLang_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 1)));
#line 616 "ml_util.m"
                MR_Word ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 2)));

#line 617 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = (ml_backend__ml_util__TargetLang_17 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3);
#line 617 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = !((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded);
#line 616 "ml_util.m"
              }
#line 618 "ml_util.m"
            else
#line 618 "ml_util.m"
              if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 619 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_TRUE;
#line 618 "ml_util.m"
              else
#line 618 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_FALSE;
#line 618 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 618 "ml_util.m"
              {
#line 618 "ml_util.m"
                ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(ml_backend__ml_util__env_ptr);
#line 618 "ml_util.m"
                return;
              }
#line 610 "ml_util.m"
          }
#line 616 "ml_util.m"
        }
#line 610 "ml_util.m"
    }
#line 610 "ml_util.m"
  }
#line 610 "ml_util.m"
}

#line 610 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(
#line 610 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 610 "ml_util.m"
{
#line 610 "ml_util.m"
  {
#line 610 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 610 "ml_util.m"
    if (MR_builtin_setjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0) == 0)
#line 610 "ml_util.m"
      {
#line 610 "ml_util.m"
        {
#line 610 "ml_util.m"
          MR_Word ml_backend__ml_util__Body_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 3)));
#line 610 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_11;
#line 610 "ml_util.m"
          MR_Word ml_backend__ml_util__V_23_23;
#line 611 "ml_util.m"
          MR_Word ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 0)));
#line 611 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 1)));
#line 611 "ml_util.m"
          MR_Word ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 2)));
#line 612 "ml_util.m"
          MR_Word ml_backend__ml_util__V_9_9;
#line 612 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10;
#line 612 "ml_util.m"
          MR_Word ml_backend__ml_util__V_12_12;
#line 612 "ml_util.m"
          MR_Word ml_backend__ml_util__V_13_13;

#line 612 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_8)) == (MR_mktag((MR_Integer) 2)));
#line 612 "ml_util.m"
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 612 "ml_util.m"
            {
#line 612 "ml_util.m"
              {
#line 612 "ml_util.m"
                ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 0)));
#line 612 "ml_util.m"
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 1)));
#line 612 "ml_util.m"
                ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 2)));
#line 612 "ml_util.m"
                ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 3)));
#line 612 "ml_util.m"
                ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 4)));
#line 612 "ml_util.m"
              }
#line 610 "ml_util.m"
              {
#line 612 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 612 "ml_util.m"
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 612 "ml_util.m"
                  {
#line 612 "ml_util.m"
                    ml_backend__ml_util__FunctionBody_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_23_23), (MR_Integer) 1);
#line 610 "ml_util.m"
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
#line 610 "ml_util.m"
                    }
#line 612 "ml_util.m"
                  }
#line 610 "ml_util.m"
              }
#line 612 "ml_util.m"
            }
#line 610 "ml_util.m"
        }
#line 610 "ml_util.m"
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_FALSE;
#line 610 "ml_util.m"
      }
#line 610 "ml_util.m"
    else
#line 610 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_TRUE;
#line 610 "ml_util.m"
  }
#line 610 "ml_util.m"
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
#line 610 "ml_util.m"
    {
#line 610 "ml_util.m"
      ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(&ml_backend__ml_util__env);
    }
#line 610 "ml_util.m"
    return (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
#line 78 "ml_util.m"
  }
#line 78 "ml_util.m"
}

#line 598 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
#line 598 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 598 "ml_util.m"
{
#line 598 "ml_util.m"
  {
#line 598 "ml_util.m"
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 598 "ml_util.m"
    *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_HeadVar__2_12));
#line 598 "ml_util.m"
    {
#line 598 "ml_util.m"
      ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr);
#line 598 "ml_util.m"
      return;
    }
#line 598 "ml_util.m"
  }
#line 598 "ml_util.m"
}

#line 598 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
#line 598 "ml_util.m"
  MR_Box ml_backend__ml_util__closure_arg,
#line 598 "ml_util.m"
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
#line 598 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 598 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 598 "ml_util.m"
{
#line 598 "ml_util.m"
  {
#line 598 "ml_util.m"
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s ml_backend__ml_util__env;

#line 598 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1 = ml_backend__ml_util__wrapper_arg_1;
#line 598 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont = ml_backend__ml_util__cont;
#line 598 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 598 "ml_util.m"
    {
#line 598 "ml_util.m"
      MR_Box ml_backend__ml_util__closure = ml_backend__ml_util__closure_arg;

#line 598 "ml_util.m"
      {
#line 598 "ml_util.m"
        ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__598__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__closure, (MR_Integer) 3))), &(ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_HeadVar__2_12, ml_backend__ml_util__has_foreign_languages_2_p_0_1, &ml_backend__ml_util__env);
      }
#line 598 "ml_util.m"
    }
#line 598 "ml_util.m"
  }
#line 598 "ml_util.m"
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
#line 597 "ml_util.m"
  {
#line 597 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 597 "ml_util.m"
    MR_Word ml_backend__ml_util__GetTargetCode_5;

#line 598 "ml_util.m"
    {
#line 598 "ml_util.m"
      ml_backend__ml_util__GetTargetCode_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 598 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 0) = ((MR_Box) (&ml_backend__ml_util_scalar_common_2[0]));
#line 598 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 1) = ((MR_Box) (ml_backend__ml_util__has_foreign_languages_2_p_0_2));
#line 598 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 598 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 3) = ((MR_Box) (ml_backend__ml_util__Statement_3));
#line 598 "ml_util.m"
    }
#line 603 "ml_util.m"
    {
#line 603 "ml_util.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ml_backend__ml_util__GetTargetCode_5, ml_backend__ml_util__Langs_4);
#line 603 "ml_util.m"
      return;
    }
#line 597 "ml_util.m"
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
#line 351 "ml_util.m"
  {
#line 351 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 351 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;
#line 351 "ml_util.m"
    MR_Word ml_backend__ml_util__Stmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 0)));
#line 352 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 1)));

#line 353 "ml_util.m"
    {
#line 353 "ml_util.m"
      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_7, ml_backend__ml_util__DataName_5);
    }
#line 351 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 351 "ml_util.m"
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
        if (((MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) == (MR_mktag((MR_Integer) 0))))
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
        else
#line 276 "ml_util.m"
          if (((MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) == (MR_mktag((MR_Integer) 2))))
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
          else
#line 276 "ml_util.m"
            if (((MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) == (MR_mktag((MR_Integer) 1))))
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
            else
#line 276 "ml_util.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
              else
#line 276 "ml_util.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
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
                else
#line 276 "ml_util.m"
                  {
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
    MR_Word ml_backend__ml_util__TypeInfo_34_34;
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
        if ((ml_backend__ml_util__CallKind_10 == (MR_Integer) 0))
#line 219 "ml_util.m"
          ml_backend__ml_util__succeeded = MR_TRUE;
#line 219 "ml_util.m"
        else
#line 219 "ml_util.m"
          if ((ml_backend__ml_util__CallKind_10 == (MR_Integer) 1))
#line 219 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_TRUE;
#line 219 "ml_util.m"
          else
#line 219 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_FALSE;
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
#line 5593 "ml_backend.ml_util.c"
                                            ml_backend__ml_util__TypeInfo_34_34 = (MR_Word) &ml_backend__ml_util_scalar_common_1[0];
#line 237 "ml_util.m"
                                            {
#line 237 "ml_util.m"
                                              ml_backend__ml_util__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_util__TypeInfo_34_34, ((MR_Box) (ml_backend__ml_util__MaybeSeqNum_14)), ((MR_Box) (ml_backend__ml_util__V_30_30)));
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
