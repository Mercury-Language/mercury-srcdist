/*
** Automatically generated from `ml_util.m'
** by the Mercury compiler,
** version DEV
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



#line 662 "ml_util.m"
struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0_s {
#line 662 "ml_util.m"
  MR_Word * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__LambdaHeadVar__1_12;
#line 662 "ml_util.m"
  MR_Cont ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__cont;
#line 662 "ml_util.m"
  void * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__cont_env_ptr;
#line 662 "ml_util.m"
  MR_bool ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__succeeded;
#line 662 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__SubStatement_7;
#line 662 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__V_13_13;
#line 662 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__V_14_14;
#line 662 "ml_util.m"
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

#line 91 "ml_util.m"
struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s {
#line 91 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3;
#line 91 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4;
#line 686 "ml_util.m"
  MR_bool ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
#line 686 "ml_util.m"
  jmp_buf ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0;
#line 686 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14;
#line 686 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15;
#line 686 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21;
#line 686 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22;
#line 91 "ml_util.m"
};

#line 83 "ml_util.m"
struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s {
#line 83 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3;
#line 83 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4;
#line 674 "ml_util.m"
  MR_bool ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
#line 674 "ml_util.m"
  jmp_buf ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0;
#line 674 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14;
#line 674 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15;
#line 674 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26;
#line 83 "ml_util.m"
};

#line 662 "ml_util.m"
struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s {
#line 662 "ml_util.m"
  MR_Box * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1;
#line 662 "ml_util.m"
  MR_Cont ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont;
#line 662 "ml_util.m"
  void * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr;
#line 662 "ml_util.m"
  MR_Word ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12;
#line 662 "ml_util.m"
};


#line 662 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_1(
#line 662 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 662 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0(
#line 662 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 662 "ml_util.m"
  MR_Word * ml_backend__ml_util__LambdaHeadVar__1_12,
#line 662 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 662 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 809 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
#line 809 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 809 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 767 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
#line 767 "ml_util.m"
  MR_Word ml_backend__ml_util__Body_4,
#line 767 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 742 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__defn_body_contains_var_2_f_0(
#line 742 "ml_util.m"
  MR_Word ml_backend__ml_util__DefnBody_4,
#line 742 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 631 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
#line 631 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 631 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 584 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
#line 584 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 584 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 487 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__default_contains_var_2_f_0(
#line 487 "ml_util.m"
  MR_Word ml_backend__ml_util__Default_4,
#line 487 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 473 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
#line 473 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 473 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 356 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__stmt_contains_var_2_f_0(
#line 356 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_4,
#line 356 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 346 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
#line 346 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 346 "ml_util.m"
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

#line 686 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(
#line 686 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 686 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(
#line 686 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 686 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(
#line 686 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 674 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(
#line 674 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 674 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(
#line 674 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 674 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(
#line 674 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 662 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
#line 662 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 662 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
#line 662 "ml_util.m"
  MR_Box ml_backend__ml_util__closure_arg,
#line 662 "ml_util.m"
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
#line 662 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 662 "ml_util.m"
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



#line 662 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_1(
#line 662 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 662 "ml_util.m"
{
#line 662 "ml_util.m"
  {
#line 662 "ml_util.m"
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 662 "ml_util.m"
    {
#line 664 "ml_util.m"
      MR_Word ml_backend__ml_util__V_11_11;
#line 665 "ml_util.m"
      MR_Word ml_backend__ml_util__V_8_8;
#line 665 "ml_util.m"
      MR_Word ml_backend__ml_util__V_9_9;
#line 665 "ml_util.m"
      MR_String ml_backend__ml_util__V_10_10;

#line 664 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 0)));
#line 664 "ml_util.m"
      ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 1)));
#line 664 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__V_13_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__V_13_13, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 664 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__succeeded)
#line 664 "ml_util.m"
        {
#line 664 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__V_13_13, (MR_Integer) 1)));
#line 662 "ml_util.m"
          {
#line 665 "ml_util.m"
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 665 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__succeeded)
#line 665 "ml_util.m"
              {
#line 665 "ml_util.m"
                {
#line 665 "ml_util.m"
                  *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__LambdaHeadVar__1_12) = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__V_14_14, (MR_Integer) 1)));
#line 665 "ml_util.m"
                  ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__V_14_14, (MR_Integer) 2)));
#line 665 "ml_util.m"
                  ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__V_14_14, (MR_Integer) 3)));
#line 665 "ml_util.m"
                  ml_backend__ml_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__V_14_14, (MR_Integer) 4)));
#line 665 "ml_util.m"
                }
#line 665 "ml_util.m"
                {
#line 665 "ml_util.m"
                  ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__cont_env_ptr);
                }
#line 665 "ml_util.m"
              }
#line 662 "ml_util.m"
          }
#line 664 "ml_util.m"
        }
#line 662 "ml_util.m"
    }
#line 662 "ml_util.m"
  }
#line 662 "ml_util.m"
}

#line 662 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0(
#line 662 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 662 "ml_util.m"
  MR_Word * ml_backend__ml_util__LambdaHeadVar__1_12,
#line 662 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 662 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 662 "ml_util.m"
{
#line 662 "ml_util.m"
  {
#line 662 "ml_util.m"
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0_s ml_backend__ml_util__env;

#line 662 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__LambdaHeadVar__1_12 = ml_backend__ml_util__LambdaHeadVar__1_12;
#line 662 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__cont = ml_backend__ml_util__cont;
#line 662 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 267 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__SubStatement_7 = ml_backend__ml_util__Statement_3;
#line 267 "ml_util.m"
    {
#line 267 "ml_util.m"
      ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_1(&ml_backend__ml_util__env);
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
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_20, &(ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_env_0__SubStatement_7, ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0_1, &ml_backend__ml_util__env);
      }
#line 268 "ml_util.m"
    }
#line 662 "ml_util.m"
  }
#line 662 "ml_util.m"
}

#line 809 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
#line 809 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 809 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 809 "ml_util.m"
{
#line 811 "ml_util.m"
  while (MR_TRUE)
#line 811 "ml_util.m"
    {
#line 811 "ml_util.m"
      /* tailcall optimized into a loop */
#line 811 "ml_util.m"
      {
#line 811 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 811 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 811 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 811 "ml_util.m"
        else
#line 813 "ml_util.m"
          {
#line 813 "ml_util.m"
            MR_Word ml_backend__ml_util__Initializer_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 813 "ml_util.m"
            MR_Word ml_backend__ml_util__Initializers_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 813 "ml_util.m"
            MR_Word ml_backend__ml_util__InitializerContainsVar_9;

#line 814 "ml_util.m"
            {
#line 814 "ml_util.m"
              ml_backend__ml_util__InitializerContainsVar_9 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 818 "ml_util.m"
#line 818 "ml_util.m"
            switch (ml_backend__ml_util__InitializerContainsVar_9) {
#line 818 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 818 "ml_util.m"
              case (MR_Integer) 0:
#line 820 "ml_util.m"
                {
#line 820 "ml_util.m"
                  /* direct tailcall eliminated */
#line 820 "ml_util.m"
                  {
#line 820 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Initializers_6;

#line 820 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 820 "ml_util.m"
                  }
#line 820 "ml_util.m"
                  continue;
#line 820 "ml_util.m"
                }
#line 818 "ml_util.m"
                break;
#line 818 "ml_util.m"
              case (MR_Integer) 1:
#line 817 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 818 "ml_util.m"
                break;
#line 818 "ml_util.m"
            }
#line 813 "ml_util.m"
          }
#line 811 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 811 "ml_util.m"
      }
#line 811 "ml_util.m"
      break;
#line 811 "ml_util.m"
    }
#line 809 "ml_util.m"
}

#line 767 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
#line 767 "ml_util.m"
  MR_Word ml_backend__ml_util__Body_4,
#line 767 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 767 "ml_util.m"
{
#line 771 "ml_util.m"
  {
#line 771 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 771 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 771 "ml_util.m"
    if ((ml_backend__ml_util__Body_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "ml_util.m"
      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 771 "ml_util.m"
    else
#line 774 "ml_util.m"
      {
#line 774 "ml_util.m"
        MR_Word ml_backend__ml_util__Statement_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Body_4), (MR_Integer) 1);
#line 774 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 0)));
#line 353 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 1)));

#line 354 "ml_util.m"
        {
#line 354 "ml_util.m"
          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_5);
        }
#line 774 "ml_util.m"
      }
#line 771 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 771 "ml_util.m"
  }
#line 767 "ml_util.m"
}

#line 742 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__defn_body_contains_var_2_f_0(
#line 742 "ml_util.m"
  MR_Word ml_backend__ml_util__DefnBody_4,
#line 742 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 742 "ml_util.m"
{
#line 746 "ml_util.m"
  {
#line 746 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 746 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 746 "ml_util.m"
#line 746 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__DefnBody_4)) {
#line 746 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 746 "ml_util.m"
      case (MR_Integer) 0:
#line 754 "ml_util.m"
        {
#line 754 "ml_util.m"
          MR_Word ml_backend__ml_util__ClassDefn_15 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__DefnBody_4), (MR_Integer) 0);
#line 754 "ml_util.m"
          MR_Word ml_backend__ml_util__CtorDefns_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 5)));
#line 754 "ml_util.m"
          MR_Word ml_backend__ml_util__FieldDefns_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 6)));
#line 754 "ml_util.m"
          MR_Word ml_backend__ml_util__FieldDefnsContainVar_23;
#line 755 "ml_util.m"
          MR_Word ml_backend__ml_util___Kind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 0)));
#line 755 "ml_util.m"
          MR_Word ml_backend__ml_util___Imports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 1)));
#line 755 "ml_util.m"
          MR_Word ml_backend__ml_util___Inherits_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 2)));
#line 755 "ml_util.m"
          MR_Word ml_backend__ml_util___Implements_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 3)));
#line 755 "ml_util.m"
          MR_Word ml_backend__ml_util___TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 4)));

#line 757 "ml_util.m"
          {
#line 757 "ml_util.m"
            ml_backend__ml_util__FieldDefnsContainVar_23 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__FieldDefns_22, ml_backend__ml_util__DataName_5);
          }
#line 761 "ml_util.m"
#line 761 "ml_util.m"
          switch (ml_backend__ml_util__FieldDefnsContainVar_23) {
#line 761 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 761 "ml_util.m"
            case (MR_Integer) 0:
#line 763 "ml_util.m"
              {
#line 763 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__CtorDefns_21, ml_backend__ml_util__DataName_5);
              }
#line 761 "ml_util.m"
              break;
#line 761 "ml_util.m"
            case (MR_Integer) 1:
#line 760 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 761 "ml_util.m"
              break;
#line 761 "ml_util.m"
          }
#line 754 "ml_util.m"
        }
#line 746 "ml_util.m"
        break;
#line 746 "ml_util.m"
      case (MR_Integer) 1:
#line 746 "ml_util.m"
        {
#line 746 "ml_util.m"
          MR_Word ml_backend__ml_util__Initializer_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 1)));
#line 746 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 0)));
#line 746 "ml_util.m"
          MR_Word ml_backend__ml_util___GCStatement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 2)));

#line 748 "ml_util.m"
          {
#line 748 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_8, ml_backend__ml_util__DataName_5);
          }
#line 746 "ml_util.m"
        }
#line 746 "ml_util.m"
        break;
#line 746 "ml_util.m"
      case (MR_Integer) 2:
#line 751 "ml_util.m"
        {
#line 751 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 2)));
#line 750 "ml_util.m"
          MR_Word ml_backend__ml_util___PredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 0)));
#line 750 "ml_util.m"
          MR_Word ml_backend__ml_util___Params_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 1)));
#line 750 "ml_util.m"
          MR_Word ml_backend__ml_util___Attrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 3)));
#line 750 "ml_util.m"
          MR_Word ml_backend__ml_util___EnvVarNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 4)));

#line 752 "ml_util.m"
          {
#line 752 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__function_body_contains_var_2_f_0(ml_backend__ml_util__FunctionBody_12, ml_backend__ml_util__DataName_5);
          }
#line 751 "ml_util.m"
        }
#line 746 "ml_util.m"
        break;
#line 746 "ml_util.m"
    }
#line 746 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 746 "ml_util.m"
  }
#line 742 "ml_util.m"
}

#line 631 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
#line 631 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 631 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 631 "ml_util.m"
{
#line 633 "ml_util.m"
  while (MR_TRUE)
#line 633 "ml_util.m"
    {
#line 633 "ml_util.m"
      /* tailcall optimized into a loop */
#line 633 "ml_util.m"
      {
#line 633 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 633 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 633 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 633 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 633 "ml_util.m"
        else
#line 635 "ml_util.m"
          {
#line 635 "ml_util.m"
            MR_Word ml_backend__ml_util__OutlineArg_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 635 "ml_util.m"
            MR_Word ml_backend__ml_util__OutlineArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));

#line 962 "ml_backend.ml_util.c"
#line 963 "ml_backend.ml_util.c"
            switch (MR_tag((MR_Word) ml_backend__ml_util__OutlineArg_5)) {
#line 965 "ml_backend.ml_util.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 967 "ml_backend.ml_util.c"
              case (MR_Integer) 0:
#line 642 "ml_util.m"
                {
#line 642 "ml_util.m"
                  /* direct tailcall eliminated */
#line 642 "ml_util.m"
                  {
#line 642 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

#line 642 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 642 "ml_util.m"
                  }
#line 642 "ml_util.m"
                  continue;
#line 642 "ml_util.m"
                }
#line 986 "ml_backend.ml_util.c"
                break;
#line 988 "ml_backend.ml_util.c"
              case (MR_Integer) 1:
#line 990 "ml_backend.ml_util.c"
                {
#line 992 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__OutlineArgContainsVar_9;
#line 994 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 2)));
#line 649 "ml_util.m"
                  MR_Word ml_backend__ml_util___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 0)));
#line 649 "ml_util.m"
                  MR_String ml_backend__ml_util___Str_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 1)));

#line 650 "ml_util.m"
                  {
#line 650 "ml_util.m"
                    ml_backend__ml_util__OutlineArgContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_15, ml_backend__ml_util__HeadVar__2_2);
                  }
#line 640 "ml_util.m"
#line 640 "ml_util.m"
                  switch (ml_backend__ml_util__OutlineArgContainsVar_9) {
#line 640 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 640 "ml_util.m"
                    case (MR_Integer) 0:
#line 642 "ml_util.m"
                      {
#line 642 "ml_util.m"
                        /* direct tailcall eliminated */
#line 642 "ml_util.m"
                        {
#line 642 "ml_util.m"
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

#line 642 "ml_util.m"
                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 642 "ml_util.m"
                        }
#line 642 "ml_util.m"
                        continue;
#line 642 "ml_util.m"
                      }
#line 640 "ml_util.m"
                      break;
#line 640 "ml_util.m"
                    case (MR_Integer) 1:
#line 639 "ml_util.m"
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 640 "ml_util.m"
                      break;
#line 640 "ml_util.m"
                  }
#line 1040 "ml_backend.ml_util.c"
                }
#line 1042 "ml_backend.ml_util.c"
                break;
#line 1044 "ml_backend.ml_util.c"
              case (MR_Integer) 2:
#line 1046 "ml_backend.ml_util.c"
                {
#line 1048 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__Lval_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 2)));
#line 1050 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__OutlineArgContainsVar_21;
#line 652 "ml_util.m"
                  MR_Word ml_backend__ml_util___Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 0)));
#line 652 "ml_util.m"
                  MR_String ml_backend__ml_util___Str_18 = ((MR_String) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 1)));

#line 653 "ml_util.m"
                  {
#line 653 "ml_util.m"
                    ml_backend__ml_util__OutlineArgContainsVar_21 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_16, ml_backend__ml_util__HeadVar__2_2);
                  }
#line 640 "ml_util.m"
#line 640 "ml_util.m"
                  switch (ml_backend__ml_util__OutlineArgContainsVar_21) {
#line 640 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 640 "ml_util.m"
                    case (MR_Integer) 0:
#line 642 "ml_util.m"
                      {
#line 642 "ml_util.m"
                        /* direct tailcall eliminated */
#line 642 "ml_util.m"
                        {
#line 642 "ml_util.m"
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

#line 642 "ml_util.m"
                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 642 "ml_util.m"
                        }
#line 642 "ml_util.m"
                        continue;
#line 642 "ml_util.m"
                      }
#line 640 "ml_util.m"
                      break;
#line 640 "ml_util.m"
                    case (MR_Integer) 1:
#line 639 "ml_util.m"
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 640 "ml_util.m"
                      break;
#line 640 "ml_util.m"
                  }
#line 1096 "ml_backend.ml_util.c"
                }
#line 1098 "ml_backend.ml_util.c"
                break;
#line 1100 "ml_backend.ml_util.c"
            }
#line 635 "ml_util.m"
          }
#line 633 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 633 "ml_util.m"
      }
#line 633 "ml_util.m"
      break;
#line 633 "ml_util.m"
    }
#line 631 "ml_util.m"
}

#line 584 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
#line 584 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 584 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 584 "ml_util.m"
{
#line 587 "ml_util.m"
  while (MR_TRUE)
#line 587 "ml_util.m"
    {
#line 587 "ml_util.m"
      /* tailcall optimized into a loop */
#line 587 "ml_util.m"
      {
#line 587 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 587 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 587 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 587 "ml_util.m"
        else
#line 589 "ml_util.m"
          {
#line 589 "ml_util.m"
            MR_Word ml_backend__ml_util__TargetCode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 589 "ml_util.m"
            MR_Word ml_backend__ml_util__TargetCodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1150 "ml_backend.ml_util.c"
#line 1151 "ml_backend.ml_util.c"
            switch (MR_tag((MR_Word) ml_backend__ml_util__TargetCode_5)) {
#line 1153 "ml_backend.ml_util.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1155 "ml_backend.ml_util.c"
              case (MR_Integer) 0:
#line 1157 "ml_backend.ml_util.c"
              case (MR_Integer) 1:
#line 597 "ml_util.m"
                {
#line 597 "ml_util.m"
                  /* direct tailcall eliminated */
#line 597 "ml_util.m"
                  {
#line 597 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 597 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 597 "ml_util.m"
                  }
#line 597 "ml_util.m"
                  continue;
#line 597 "ml_util.m"
                }
#line 1176 "ml_backend.ml_util.c"
                break;
#line 1178 "ml_backend.ml_util.c"
              case (MR_Integer) 2:
#line 1180 "ml_backend.ml_util.c"
                {
#line 1182 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)));
#line 1184 "ml_backend.ml_util.c"
                  MR_Word ml_backend__ml_util__TargetCodeContainsVar_30;

#line 614 "ml_util.m"
                  {
#line 614 "ml_util.m"
                    ml_backend__ml_util__TargetCodeContainsVar_30 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_18, ml_backend__ml_util__HeadVar__2_2);
                  }
#line 595 "ml_util.m"
#line 595 "ml_util.m"
                  switch (ml_backend__ml_util__TargetCodeContainsVar_30) {
#line 595 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 595 "ml_util.m"
                    case (MR_Integer) 0:
#line 597 "ml_util.m"
                      {
#line 597 "ml_util.m"
                        /* direct tailcall eliminated */
#line 597 "ml_util.m"
                        {
#line 597 "ml_util.m"
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 597 "ml_util.m"
                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 597 "ml_util.m"
                        }
#line 597 "ml_util.m"
                        continue;
#line 597 "ml_util.m"
                      }
#line 595 "ml_util.m"
                      break;
#line 595 "ml_util.m"
                    case (MR_Integer) 1:
#line 594 "ml_util.m"
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 595 "ml_util.m"
                      break;
#line 595 "ml_util.m"
                  }
#line 1226 "ml_backend.ml_util.c"
                }
#line 1228 "ml_backend.ml_util.c"
                break;
#line 1230 "ml_backend.ml_util.c"
              case (MR_Integer) 3:
#line 1232 "ml_backend.ml_util.c"
#line 1233 "ml_backend.ml_util.c"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)))) {
#line 1235 "ml_backend.ml_util.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1237 "ml_backend.ml_util.c"
                  case (MR_Integer) 0:
#line 1239 "ml_backend.ml_util.c"
                    {
#line 1241 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__Lval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
#line 1243 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__TargetCodeContainsVar_32;

#line 617 "ml_util.m"
                      {
#line 617 "ml_util.m"
                        ml_backend__ml_util__TargetCodeContainsVar_32 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_19, ml_backend__ml_util__HeadVar__2_2);
                      }
#line 595 "ml_util.m"
#line 595 "ml_util.m"
                      switch (ml_backend__ml_util__TargetCodeContainsVar_32) {
#line 595 "ml_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 595 "ml_util.m"
                        case (MR_Integer) 0:
#line 597 "ml_util.m"
                          {
#line 597 "ml_util.m"
                            /* direct tailcall eliminated */
#line 597 "ml_util.m"
                            {
#line 597 "ml_util.m"
                              MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 597 "ml_util.m"
                              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 597 "ml_util.m"
                            }
#line 597 "ml_util.m"
                            continue;
#line 597 "ml_util.m"
                          }
#line 595 "ml_util.m"
                          break;
#line 595 "ml_util.m"
                        case (MR_Integer) 1:
#line 594 "ml_util.m"
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 595 "ml_util.m"
                          break;
#line 595 "ml_util.m"
                      }
#line 1285 "ml_backend.ml_util.c"
                    }
#line 1287 "ml_backend.ml_util.c"
                    break;
#line 1289 "ml_backend.ml_util.c"
                  case (MR_Integer) 1:
#line 1291 "ml_backend.ml_util.c"
                  case (MR_Integer) 3:
#line 597 "ml_util.m"
                    {
#line 597 "ml_util.m"
                      /* direct tailcall eliminated */
#line 597 "ml_util.m"
                      {
#line 597 "ml_util.m"
                        MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 597 "ml_util.m"
                        ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 597 "ml_util.m"
                      }
#line 597 "ml_util.m"
                      continue;
#line 597 "ml_util.m"
                    }
#line 1310 "ml_backend.ml_util.c"
                    break;
#line 1312 "ml_backend.ml_util.c"
                  case (MR_Integer) 2:
#line 1314 "ml_backend.ml_util.c"
                    {
#line 1316 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__EntityName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
#line 622 "ml_util.m"
                      MR_Word ml_backend__ml_util__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_20, (MR_Integer) 0)));
#line 622 "ml_util.m"
                      MR_Word ml_backend__ml_util__QualKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_20, (MR_Integer) 1)));
#line 622 "ml_util.m"
                      MR_Word ml_backend__ml_util__UnqualDataName_23;
#line 622 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_20, (MR_Integer) 2)));
#line 622 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_25_25;
#line 622 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_26_26;
#line 622 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_27_27;

#line 622 "ml_util.m"
                      ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 622 "ml_util.m"
                      if (ml_backend__ml_util__succeeded)
#line 622 "ml_util.m"
                        {
#line 622 "ml_util.m"
                          ml_backend__ml_util__UnqualDataName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__V_24_24, (MR_Integer) 0)));
#line 623 "ml_util.m"
                          ml_backend__ml_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 0)));
#line 623 "ml_util.m"
                          ml_backend__ml_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 623 "ml_util.m"
                          ml_backend__ml_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 2)));
#line 623 "ml_util.m"
                          {
#line 623 "ml_util.m"
                            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_21, ml_backend__ml_util__V_25_25);
                          }
#line 622 "ml_util.m"
                          if (ml_backend__ml_util__succeeded)
#line 622 "ml_util.m"
                            {
#line 623 "ml_util.m"
                              ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_22 == ml_backend__ml_util__V_26_26);
#line 622 "ml_util.m"
                              if (ml_backend__ml_util__succeeded)
#line 623 "ml_util.m"
                                {
#line 623 "ml_util.m"
                                  ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__UnqualDataName_23, ml_backend__ml_util__V_27_27);
                                }
#line 622 "ml_util.m"
                            }
#line 622 "ml_util.m"
                        }
#line 1369 "ml_backend.ml_util.c"
                      if (ml_backend__ml_util__succeeded)
#line 594 "ml_util.m"
                        ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 1373 "ml_backend.ml_util.c"
                      else
#line 597 "ml_util.m"
                        {
#line 597 "ml_util.m"
                          /* direct tailcall eliminated */
#line 597 "ml_util.m"
                          {
#line 597 "ml_util.m"
                            MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 597 "ml_util.m"
                            ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 597 "ml_util.m"
                          }
#line 597 "ml_util.m"
                          continue;
#line 597 "ml_util.m"
                        }
#line 1392 "ml_backend.ml_util.c"
                    }
#line 1394 "ml_backend.ml_util.c"
                    break;
#line 1396 "ml_backend.ml_util.c"
                }
#line 1398 "ml_backend.ml_util.c"
                break;
#line 1400 "ml_backend.ml_util.c"
            }
#line 589 "ml_util.m"
          }
#line 587 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 587 "ml_util.m"
      }
#line 587 "ml_util.m"
      break;
#line 587 "ml_util.m"
    }
#line 584 "ml_util.m"
}

#line 487 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__default_contains_var_2_f_0(
#line 487 "ml_util.m"
  MR_Word ml_backend__ml_util__Default_4,
#line 487 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 487 "ml_util.m"
{
#line 493 "ml_util.m"
  {
#line 493 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 493 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 493 "ml_util.m"
#line 493 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Default_4)) {
#line 493 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 493 "ml_util.m"
      case (MR_Integer) 0:
#line 494 "ml_util.m"
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 493 "ml_util.m"
        break;
#line 493 "ml_util.m"
      case (MR_Integer) 1:
#line 496 "ml_util.m"
        {
#line 496 "ml_util.m"
          MR_Word ml_backend__ml_util__Statement_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Default_4), (MR_Integer) 1);
#line 496 "ml_util.m"
          MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 0)));
#line 353 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 1)));

#line 354 "ml_util.m"
          {
#line 354 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_5);
          }
#line 496 "ml_util.m"
        }
#line 493 "ml_util.m"
        break;
#line 493 "ml_util.m"
    }
#line 493 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 493 "ml_util.m"
  }
#line 487 "ml_util.m"
}

#line 473 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
#line 473 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 473 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 473 "ml_util.m"
{
#line 475 "ml_util.m"
  while (MR_TRUE)
#line 475 "ml_util.m"
    {
#line 475 "ml_util.m"
      /* tailcall optimized into a loop */
#line 475 "ml_util.m"
      {
#line 475 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 475 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 475 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 475 "ml_util.m"
        else
#line 476 "ml_util.m"
          {
#line 476 "ml_util.m"
            MR_Word ml_backend__ml_util__Case_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 476 "ml_util.m"
            MR_Word ml_backend__ml_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 476 "ml_util.m"
            MR_Word ml_backend__ml_util__Statement_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 2)));
#line 476 "ml_util.m"
            MR_Word ml_backend__ml_util__StatementContainsVar_12;
#line 476 "ml_util.m"
            MR_Word ml_backend__ml_util__Stmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 0)));
#line 477 "ml_util.m"
            MR_Word ml_backend__ml_util___FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 0)));
#line 477 "ml_util.m"
            MR_Word ml_backend__ml_util___LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 1)));
#line 353 "ml_util.m"
            MR_Word ml_backend__ml_util___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 1)));

#line 354 "ml_util.m"
            {
#line 354 "ml_util.m"
              ml_backend__ml_util__StatementContainsVar_12 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_16, ml_backend__ml_util__HeadVar__2_2);
            }
#line 482 "ml_util.m"
#line 482 "ml_util.m"
            switch (ml_backend__ml_util__StatementContainsVar_12) {
#line 482 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 482 "ml_util.m"
              case (MR_Integer) 0:
#line 484 "ml_util.m"
                {
#line 484 "ml_util.m"
                  /* direct tailcall eliminated */
#line 484 "ml_util.m"
                  {
#line 484 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Cases_6;

#line 484 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 484 "ml_util.m"
                  }
#line 484 "ml_util.m"
                  continue;
#line 484 "ml_util.m"
                }
#line 482 "ml_util.m"
                break;
#line 482 "ml_util.m"
              case (MR_Integer) 1:
#line 481 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 482 "ml_util.m"
                break;
#line 482 "ml_util.m"
            }
#line 476 "ml_util.m"
          }
#line 475 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 475 "ml_util.m"
      }
#line 475 "ml_util.m"
      break;
#line 475 "ml_util.m"
    }
#line 473 "ml_util.m"
}

#line 356 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__stmt_contains_var_2_f_0(
#line 356 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_4,
#line 356 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 356 "ml_util.m"
{
#line 360 "ml_util.m"
  {
#line 360 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 360 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 360 "ml_util.m"
#line 360 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) {
#line 360 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 360 "ml_util.m"
      case (MR_Integer) 0:
#line 360 "ml_util.m"
        {
#line 360 "ml_util.m"
          MR_Word ml_backend__ml_util__Defns_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
#line 360 "ml_util.m"
          MR_Word ml_backend__ml_util__Statements_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 360 "ml_util.m"
          MR_Word ml_backend__ml_util__DefnsContainVar_9;

#line 361 "ml_util.m"
          {
#line 361 "ml_util.m"
            ml_backend__ml_util__DefnsContainVar_9 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__Defns_7, ml_backend__ml_util__DataName_5);
          }
#line 365 "ml_util.m"
#line 365 "ml_util.m"
          switch (ml_backend__ml_util__DefnsContainVar_9) {
#line 365 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 365 "ml_util.m"
            case (MR_Integer) 0:
#line 367 "ml_util.m"
              {
#line 367 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statements_contains_var_2_f_0(ml_backend__ml_util__Statements_8, ml_backend__ml_util__DataName_5);
              }
#line 365 "ml_util.m"
              break;
#line 365 "ml_util.m"
            case (MR_Integer) 1:
#line 364 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 365 "ml_util.m"
              break;
#line 365 "ml_util.m"
          }
#line 360 "ml_util.m"
        }
#line 360 "ml_util.m"
        break;
#line 360 "ml_util.m"
      case (MR_Integer) 1:
#line 370 "ml_util.m"
        {
#line 370 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 370 "ml_util.m"
          MR_Word ml_backend__ml_util__Statement_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 370 "ml_util.m"
          MR_Word ml_backend__ml_util__RvalContainsVar_13;
#line 370 "ml_util.m"
          MR_Word ml_backend__ml_util___Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));

#line 371 "ml_util.m"
          {
#line 371 "ml_util.m"
            ml_backend__ml_util__RvalContainsVar_13 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_11, ml_backend__ml_util__DataName_5);
          }
#line 375 "ml_util.m"
#line 375 "ml_util.m"
          switch (ml_backend__ml_util__RvalContainsVar_13) {
#line 375 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 375 "ml_util.m"
            case (MR_Integer) 0:
#line 377 "ml_util.m"
              {
#line 377 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_12, ml_backend__ml_util__DataName_5);
              }
#line 375 "ml_util.m"
              break;
#line 375 "ml_util.m"
            case (MR_Integer) 1:
#line 374 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 375 "ml_util.m"
              break;
#line 375 "ml_util.m"
          }
#line 370 "ml_util.m"
        }
#line 360 "ml_util.m"
        break;
#line 360 "ml_util.m"
      case (MR_Integer) 2:
#line 380 "ml_util.m"
        {
#line 380 "ml_util.m"
          MR_Word ml_backend__ml_util__Cond_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
#line 380 "ml_util.m"
          MR_Word ml_backend__ml_util__Then_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 380 "ml_util.m"
          MR_Word ml_backend__ml_util__MaybeElse_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 380 "ml_util.m"
          MR_Word ml_backend__ml_util__CondContainsVar_17;

#line 381 "ml_util.m"
          {
#line 381 "ml_util.m"
            ml_backend__ml_util__CondContainsVar_17 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Cond_14, ml_backend__ml_util__DataName_5);
          }
#line 385 "ml_util.m"
#line 385 "ml_util.m"
          switch (ml_backend__ml_util__CondContainsVar_17) {
#line 385 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 385 "ml_util.m"
            case (MR_Integer) 0:
#line 386 "ml_util.m"
              {
#line 386 "ml_util.m"
                MR_Word ml_backend__ml_util__ThenContainsVar_18;
#line 386 "ml_util.m"
                MR_Word ml_backend__ml_util__Stmt_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_15, (MR_Integer) 0)));
#line 353 "ml_util.m"
                MR_Word ml_backend__ml_util___Context_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_15, (MR_Integer) 1)));

#line 354 "ml_util.m"
                {
#line 354 "ml_util.m"
                  ml_backend__ml_util__ThenContainsVar_18 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_94, ml_backend__ml_util__DataName_5);
                }
#line 391 "ml_util.m"
#line 391 "ml_util.m"
                switch (ml_backend__ml_util__ThenContainsVar_18) {
#line 391 "ml_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 391 "ml_util.m"
                  case (MR_Integer) 0:
#line 393 "ml_util.m"
                    {
#line 393 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__maybe_statement_contains_var_2_f_0(ml_backend__ml_util__MaybeElse_16, ml_backend__ml_util__DataName_5);
                    }
#line 391 "ml_util.m"
                    break;
#line 391 "ml_util.m"
                  case (MR_Integer) 1:
#line 390 "ml_util.m"
                    ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 391 "ml_util.m"
                    break;
#line 391 "ml_util.m"
                }
#line 386 "ml_util.m"
              }
#line 385 "ml_util.m"
              break;
#line 385 "ml_util.m"
            case (MR_Integer) 1:
#line 384 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 385 "ml_util.m"
              break;
#line 385 "ml_util.m"
          }
#line 380 "ml_util.m"
        }
#line 360 "ml_util.m"
        break;
#line 360 "ml_util.m"
      case (MR_Integer) 3:
#line 360 "ml_util.m"
#line 360 "ml_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) {
#line 360 "ml_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 360 "ml_util.m"
          case (MR_Integer) 0:
#line 397 "ml_util.m"
            {
#line 397 "ml_util.m"
              MR_Word ml_backend__ml_util__Val_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 397 "ml_util.m"
              MR_Word ml_backend__ml_util__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
#line 397 "ml_util.m"
              MR_Word ml_backend__ml_util__Default_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
#line 397 "ml_util.m"
              MR_Word ml_backend__ml_util__ValContainsVar_24;
#line 397 "ml_util.m"
              MR_Word ml_backend__ml_util___Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 397 "ml_util.m"
              MR_Word ml_backend__ml_util___Range_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));

#line 398 "ml_util.m"
              {
#line 398 "ml_util.m"
                ml_backend__ml_util__ValContainsVar_24 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Val_20, ml_backend__ml_util__DataName_5);
              }
#line 402 "ml_util.m"
#line 402 "ml_util.m"
              switch (ml_backend__ml_util__ValContainsVar_24) {
#line 402 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 402 "ml_util.m"
                case (MR_Integer) 0:
#line 403 "ml_util.m"
                  {
#line 403 "ml_util.m"
                    MR_Word ml_backend__ml_util__CasesContainsVar_25;

#line 404 "ml_util.m"
                    {
#line 404 "ml_util.m"
                      ml_backend__ml_util__CasesContainsVar_25 = ml_backend__ml_util__cases_contains_var_2_f_0(ml_backend__ml_util__Cases_22, ml_backend__ml_util__DataName_5);
                    }
#line 408 "ml_util.m"
#line 408 "ml_util.m"
                    switch (ml_backend__ml_util__CasesContainsVar_25) {
#line 408 "ml_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 408 "ml_util.m"
                      case (MR_Integer) 0:
#line 410 "ml_util.m"
                        {
#line 410 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__default_contains_var_2_f_0(ml_backend__ml_util__Default_23, ml_backend__ml_util__DataName_5);
                        }
#line 408 "ml_util.m"
                        break;
#line 408 "ml_util.m"
                      case (MR_Integer) 1:
#line 407 "ml_util.m"
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 408 "ml_util.m"
                        break;
#line 408 "ml_util.m"
                    }
#line 403 "ml_util.m"
                  }
#line 402 "ml_util.m"
                  break;
#line 402 "ml_util.m"
                case (MR_Integer) 1:
#line 401 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 402 "ml_util.m"
                  break;
#line 402 "ml_util.m"
              }
#line 397 "ml_util.m"
            }
#line 360 "ml_util.m"
            break;
#line 360 "ml_util.m"
          case (MR_Integer) 1:
#line 360 "ml_util.m"
          case (MR_Integer) 2:
#line 417 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 360 "ml_util.m"
            break;
#line 360 "ml_util.m"
          case (MR_Integer) 3:
#line 419 "ml_util.m"
            {
#line 419 "ml_util.m"
              MR_Word ml_backend__ml_util__Rval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 419 "ml_util.m"
              MR_Word ml_backend__ml_util___Labels_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));

#line 420 "ml_util.m"
              {
#line 420 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_44, ml_backend__ml_util__DataName_5);
              }
#line 419 "ml_util.m"
            }
#line 360 "ml_util.m"
            break;
#line 360 "ml_util.m"
          case (MR_Integer) 4:
#line 422 "ml_util.m"
            {
#line 422 "ml_util.m"
              MR_Word ml_backend__ml_util__Func_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 422 "ml_util.m"
              MR_Word ml_backend__ml_util__Obj_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
#line 422 "ml_util.m"
              MR_Word ml_backend__ml_util__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
#line 422 "ml_util.m"
              MR_Word ml_backend__ml_util__RetLvals_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
#line 422 "ml_util.m"
              MR_Word ml_backend__ml_util__FuncContainsVar_35;
#line 422 "ml_util.m"
              MR_Word ml_backend__ml_util___Sig_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 422 "ml_util.m"
              MR_Word ml_backend__ml_util___TailCall_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 6)));

#line 423 "ml_util.m"
              {
#line 423 "ml_util.m"
                ml_backend__ml_util__FuncContainsVar_35 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Func_30, ml_backend__ml_util__DataName_5);
              }
#line 427 "ml_util.m"
#line 427 "ml_util.m"
              switch (ml_backend__ml_util__FuncContainsVar_35) {
#line 427 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 427 "ml_util.m"
                case (MR_Integer) 0:
#line 1895 "ml_backend.ml_util.c"
                  if ((ml_backend__ml_util__Obj_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1897 "ml_backend.ml_util.c"
                    {
#line 1899 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__ArgsContainVar_37;

#line 435 "ml_util.m"
                      {
#line 435 "ml_util.m"
                        ml_backend__ml_util__ArgsContainVar_37 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_32, ml_backend__ml_util__DataName_5);
                      }
#line 439 "ml_util.m"
#line 439 "ml_util.m"
                      switch (ml_backend__ml_util__ArgsContainVar_37) {
#line 439 "ml_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 439 "ml_util.m"
                        case (MR_Integer) 0:
#line 441 "ml_util.m"
                          {
#line 441 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_33, ml_backend__ml_util__DataName_5);
                          }
#line 439 "ml_util.m"
                          break;
#line 439 "ml_util.m"
                        case (MR_Integer) 1:
#line 438 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 439 "ml_util.m"
                          break;
#line 439 "ml_util.m"
                      }
#line 1929 "ml_backend.ml_util.c"
                    }
#line 1931 "ml_backend.ml_util.c"
                  else
#line 1933 "ml_backend.ml_util.c"
                    {
#line 1935 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__Rval_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Obj_31, (MR_Integer) 0)));
#line 1937 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__ObjContainsVar_98;

#line 836 "ml_util.m"
                      {
#line 836 "ml_util.m"
                        ml_backend__ml_util__ObjContainsVar_98 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_89, ml_backend__ml_util__DataName_5);
                      }
#line 433 "ml_util.m"
#line 433 "ml_util.m"
                      switch (ml_backend__ml_util__ObjContainsVar_98) {
#line 433 "ml_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 433 "ml_util.m"
                        case (MR_Integer) 0:
#line 434 "ml_util.m"
                          {
#line 434 "ml_util.m"
                            MR_Word ml_backend__ml_util__ArgsContainVar_96;

#line 435 "ml_util.m"
                            {
#line 435 "ml_util.m"
                              ml_backend__ml_util__ArgsContainVar_96 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_32, ml_backend__ml_util__DataName_5);
                            }
#line 439 "ml_util.m"
#line 439 "ml_util.m"
                            switch (ml_backend__ml_util__ArgsContainVar_96) {
#line 439 "ml_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 439 "ml_util.m"
                              case (MR_Integer) 0:
#line 441 "ml_util.m"
                                {
#line 441 "ml_util.m"
                                  ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_33, ml_backend__ml_util__DataName_5);
                                }
#line 439 "ml_util.m"
                                break;
#line 439 "ml_util.m"
                              case (MR_Integer) 1:
#line 438 "ml_util.m"
                                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 439 "ml_util.m"
                                break;
#line 439 "ml_util.m"
                            }
#line 434 "ml_util.m"
                          }
#line 433 "ml_util.m"
                          break;
#line 433 "ml_util.m"
                        case (MR_Integer) 1:
#line 432 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 433 "ml_util.m"
                          break;
#line 433 "ml_util.m"
                      }
#line 1996 "ml_backend.ml_util.c"
                    }
#line 427 "ml_util.m"
                  break;
#line 427 "ml_util.m"
                case (MR_Integer) 1:
#line 426 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 427 "ml_util.m"
                  break;
#line 427 "ml_util.m"
              }
#line 422 "ml_util.m"
            }
#line 360 "ml_util.m"
            break;
#line 360 "ml_util.m"
          case (MR_Integer) 5:
#line 446 "ml_util.m"
            {
#line 446 "ml_util.m"
              MR_Word ml_backend__ml_util__Rvals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 447 "ml_util.m"
              {
#line 447 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Rvals_38, ml_backend__ml_util__DataName_5);
              }
#line 446 "ml_util.m"
            }
#line 360 "ml_util.m"
            break;
#line 360 "ml_util.m"
          case (MR_Integer) 6:
#line 452 "ml_util.m"
            {
#line 452 "ml_util.m"
              MR_Word ml_backend__ml_util__Handler_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
#line 452 "ml_util.m"
              MR_Word ml_backend__ml_util__RefContainsVar_41;
#line 452 "ml_util.m"
              MR_Word ml_backend__ml_util__Statement_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 452 "ml_util.m"
              MR_Word ml_backend__ml_util__Ref_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 453 "ml_util.m"
              {
#line 453 "ml_util.m"
                ml_backend__ml_util__RefContainsVar_41 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Ref_46, ml_backend__ml_util__DataName_5);
              }
#line 457 "ml_util.m"
#line 457 "ml_util.m"
              switch (ml_backend__ml_util__RefContainsVar_41) {
#line 457 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 457 "ml_util.m"
                case (MR_Integer) 0:
#line 458 "ml_util.m"
                  {
#line 458 "ml_util.m"
                    MR_Word ml_backend__ml_util__StatementContainsVar_42;

#line 459 "ml_util.m"
                    {
#line 459 "ml_util.m"
                      ml_backend__ml_util__StatementContainsVar_42 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_45, ml_backend__ml_util__DataName_5);
                    }
#line 463 "ml_util.m"
#line 463 "ml_util.m"
                    switch (ml_backend__ml_util__StatementContainsVar_42) {
#line 463 "ml_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 463 "ml_util.m"
                      case (MR_Integer) 0:
#line 465 "ml_util.m"
                        {
#line 465 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Handler_40, ml_backend__ml_util__DataName_5);
                        }
#line 463 "ml_util.m"
                        break;
#line 463 "ml_util.m"
                      case (MR_Integer) 1:
#line 462 "ml_util.m"
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 463 "ml_util.m"
                        break;
#line 463 "ml_util.m"
                    }
#line 458 "ml_util.m"
                  }
#line 457 "ml_util.m"
                  break;
#line 457 "ml_util.m"
                case (MR_Integer) 1:
#line 456 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 457 "ml_util.m"
                  break;
#line 457 "ml_util.m"
              }
#line 452 "ml_util.m"
            }
#line 360 "ml_util.m"
            break;
#line 360 "ml_util.m"
          case (MR_Integer) 7:
#line 449 "ml_util.m"
            {
#line 449 "ml_util.m"
              MR_Word ml_backend__ml_util__Ref_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 450 "ml_util.m"
              {
#line 450 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Ref_39, ml_backend__ml_util__DataName_5);
              }
#line 449 "ml_util.m"
            }
#line 360 "ml_util.m"
            break;
#line 360 "ml_util.m"
          case (MR_Integer) 8:
#line 469 "ml_util.m"
            {
#line 469 "ml_util.m"
              MR_Word ml_backend__ml_util__AtomicStmt_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 504 "ml_util.m"
#line 504 "ml_util.m"
              switch (MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_43)) {
#line 504 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 504 "ml_util.m"
                case (MR_Integer) 0:
#line 535 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 504 "ml_util.m"
                  break;
#line 504 "ml_util.m"
                case (MR_Integer) 1:
#line 505 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 504 "ml_util.m"
                  break;
#line 504 "ml_util.m"
                case (MR_Integer) 2:
#line 509 "ml_util.m"
                  {
#line 509 "ml_util.m"
                    MR_Word ml_backend__ml_util__Lval_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 0)));
#line 509 "ml_util.m"
                    MR_Word ml_backend__ml_util__Rval_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
#line 509 "ml_util.m"
                    MR_Word ml_backend__ml_util__LvalContainsVar_53;

#line 510 "ml_util.m"
                    {
#line 510 "ml_util.m"
                      ml_backend__ml_util__LvalContainsVar_53 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_51, ml_backend__ml_util__DataName_5);
                    }
#line 514 "ml_util.m"
#line 514 "ml_util.m"
                    switch (ml_backend__ml_util__LvalContainsVar_53) {
#line 514 "ml_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 514 "ml_util.m"
                      case (MR_Integer) 0:
#line 516 "ml_util.m"
                        {
#line 516 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_52, ml_backend__ml_util__DataName_5);
                        }
#line 514 "ml_util.m"
                        break;
#line 514 "ml_util.m"
                      case (MR_Integer) 1:
#line 513 "ml_util.m"
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 514 "ml_util.m"
                        break;
#line 514 "ml_util.m"
                    }
#line 509 "ml_util.m"
                  }
#line 504 "ml_util.m"
                  break;
#line 504 "ml_util.m"
                case (MR_Integer) 3:
#line 504 "ml_util.m"
#line 504 "ml_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 0)))) {
#line 504 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 504 "ml_util.m"
                    case (MR_Integer) 0:
#line 509 "ml_util.m"
                      {
#line 509 "ml_util.m"
                        MR_Word ml_backend__ml_util__Lval_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
#line 509 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 509 "ml_util.m"
                        MR_Word ml_backend__ml_util__LvalContainsVar_79;

#line 510 "ml_util.m"
                        {
#line 510 "ml_util.m"
                          ml_backend__ml_util__LvalContainsVar_79 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_77, ml_backend__ml_util__DataName_5);
                        }
#line 514 "ml_util.m"
#line 514 "ml_util.m"
                        switch (ml_backend__ml_util__LvalContainsVar_79) {
#line 514 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 514 "ml_util.m"
                          case (MR_Integer) 0:
#line 516 "ml_util.m"
                            {
#line 516 "ml_util.m"
                              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_78, ml_backend__ml_util__DataName_5);
                            }
#line 514 "ml_util.m"
                            break;
#line 514 "ml_util.m"
                          case (MR_Integer) 1:
#line 513 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 514 "ml_util.m"
                            break;
#line 514 "ml_util.m"
                        }
#line 509 "ml_util.m"
                      }
#line 504 "ml_util.m"
                      break;
#line 504 "ml_util.m"
                    case (MR_Integer) 1:
#line 519 "ml_util.m"
                      {
#line 519 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 520 "ml_util.m"
                        {
#line 520 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_72, ml_backend__ml_util__DataName_5);
                        }
#line 519 "ml_util.m"
                      }
#line 504 "ml_util.m"
                      break;
#line 504 "ml_util.m"
                    case (MR_Integer) 2:
#line 524 "ml_util.m"
                      {
#line 524 "ml_util.m"
                        MR_Word ml_backend__ml_util__Target_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
#line 524 "ml_util.m"
                        MR_Word ml_backend__ml_util__Args_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 7)));
#line 524 "ml_util.m"
                        MR_Word ml_backend__ml_util__TargetContainsVar_64;
#line 522 "ml_util.m"
                        MR_Word ml_backend__ml_util___MaybeTag_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 522 "ml_util.m"
                        MR_Word ml_backend__ml_util___ExplicitSecTag_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 3)));
#line 522 "ml_util.m"
                        MR_Word ml_backend__ml_util___Type_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 4)));
#line 522 "ml_util.m"
                        MR_Word ml_backend__ml_util___MaybeSize_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 5)));
#line 522 "ml_util.m"
                        MR_Word ml_backend__ml_util___MaybeCtorName_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 6)));
#line 522 "ml_util.m"
                        MR_Word ml_backend__ml_util___ArgTypes_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 8)));
#line 522 "ml_util.m"
                        MR_Word ml_backend__ml_util___MayUseAtomic_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 9)));
#line 522 "ml_util.m"
                        MR_Word ml_backend__ml_util___AllocId_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 10)));

#line 525 "ml_util.m"
                        {
#line 525 "ml_util.m"
                          ml_backend__ml_util__TargetContainsVar_64 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Target_54, ml_backend__ml_util__DataName_5);
                        }
#line 529 "ml_util.m"
#line 529 "ml_util.m"
                        switch (ml_backend__ml_util__TargetContainsVar_64) {
#line 529 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 529 "ml_util.m"
                          case (MR_Integer) 0:
#line 531 "ml_util.m"
                            {
#line 531 "ml_util.m"
                              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_60, ml_backend__ml_util__DataName_5);
                            }
#line 529 "ml_util.m"
                            break;
#line 529 "ml_util.m"
                          case (MR_Integer) 1:
#line 528 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 529 "ml_util.m"
                            break;
#line 529 "ml_util.m"
                        }
#line 524 "ml_util.m"
                      }
#line 504 "ml_util.m"
                      break;
#line 504 "ml_util.m"
                    case (MR_Integer) 3:
#line 537 "ml_util.m"
                      {
#line 537 "ml_util.m"
                        MR_Word ml_backend__ml_util__Lval_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 538 "ml_util.m"
                        {
#line 538 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_73, ml_backend__ml_util__DataName_5);
                        }
#line 537 "ml_util.m"
                      }
#line 504 "ml_util.m"
                      break;
#line 504 "ml_util.m"
                    case (MR_Integer) 4:
#line 540 "ml_util.m"
                      {
#line 540 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 541 "ml_util.m"
                        {
#line 541 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_74, ml_backend__ml_util__DataName_5);
                        }
#line 540 "ml_util.m"
                      }
#line 504 "ml_util.m"
                      break;
#line 504 "ml_util.m"
                    case (MR_Integer) 5:
#line 543 "ml_util.m"
                      {
#line 543 "ml_util.m"
                        MR_Word ml_backend__ml_util__TrailOp_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 566 "ml_util.m"
#line 566 "ml_util.m"
                        switch (MR_tag((MR_Word) ml_backend__ml_util__TrailOp_65)) {
#line 566 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 566 "ml_util.m"
                          case (MR_Integer) 0:
#line 575 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 566 "ml_util.m"
                            break;
#line 566 "ml_util.m"
                          case (MR_Integer) 1:
#line 566 "ml_util.m"
                            {
#line 566 "ml_util.m"
                              MR_Word ml_backend__ml_util__Lval_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)));

#line 567 "ml_util.m"
                              {
#line 567 "ml_util.m"
                                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_83, ml_backend__ml_util__DataName_5);
                              }
#line 566 "ml_util.m"
                            }
#line 566 "ml_util.m"
                            break;
#line 566 "ml_util.m"
                          case (MR_Integer) 2:
#line 569 "ml_util.m"
                            {
#line 569 "ml_util.m"
                              MR_Word ml_backend__ml_util__Rval_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)));
#line 569 "ml_util.m"
                              MR_Word ml_backend__ml_util___Reason_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

#line 570 "ml_util.m"
                              {
#line 570 "ml_util.m"
                                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_84, ml_backend__ml_util__DataName_5);
                              }
#line 569 "ml_util.m"
                            }
#line 566 "ml_util.m"
                            break;
#line 566 "ml_util.m"
                          case (MR_Integer) 3:
#line 566 "ml_util.m"
#line 566 "ml_util.m"
                            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)))) {
#line 566 "ml_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 566 "ml_util.m"
                              case (MR_Integer) 0:
#line 577 "ml_util.m"
                                {
#line 577 "ml_util.m"
                                  MR_Word ml_backend__ml_util__Lval_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

#line 578 "ml_util.m"
                                  {
#line 578 "ml_util.m"
                                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_86, ml_backend__ml_util__DataName_5);
                                  }
#line 577 "ml_util.m"
                                }
#line 566 "ml_util.m"
                                break;
#line 566 "ml_util.m"
                              case (MR_Integer) 1:
#line 580 "ml_util.m"
                                {
#line 580 "ml_util.m"
                                  MR_Word ml_backend__ml_util__Rval_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

#line 581 "ml_util.m"
                                  {
#line 581 "ml_util.m"
                                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_87, ml_backend__ml_util__DataName_5);
                                  }
#line 580 "ml_util.m"
                                }
#line 566 "ml_util.m"
                                break;
#line 566 "ml_util.m"
                            }
#line 566 "ml_util.m"
                            break;
#line 566 "ml_util.m"
                        }
#line 543 "ml_util.m"
                      }
#line 504 "ml_util.m"
                      break;
#line 504 "ml_util.m"
                    case (MR_Integer) 6:
#line 546 "ml_util.m"
                      {
#line 546 "ml_util.m"
                        MR_Word ml_backend__ml_util__Components_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 546 "ml_util.m"
                        MR_Word ml_backend__ml_util___Lang_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 547 "ml_util.m"
                        {
#line 547 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__target_code_components_contains_var_2_f_0(ml_backend__ml_util__Components_67, ml_backend__ml_util__DataName_5);
                        }
#line 546 "ml_util.m"
                      }
#line 504 "ml_util.m"
                      break;
#line 504 "ml_util.m"
                    case (MR_Integer) 7:
#line 550 "ml_util.m"
                      {
#line 550 "ml_util.m"
                        MR_Word ml_backend__ml_util__OutlineArgs_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 550 "ml_util.m"
                        MR_Word ml_backend__ml_util__ReturnLvals_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 3)));
#line 550 "ml_util.m"
                        MR_Word ml_backend__ml_util__OutlineArgsContainVar_71;
#line 549 "ml_util.m"
                        MR_String ml_backend__ml_util___Code_70 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 4)));
#line 549 "ml_util.m"
                        MR_Word ml_backend__ml_util___Lang_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 551 "ml_util.m"
                        {
#line 551 "ml_util.m"
                          ml_backend__ml_util__OutlineArgsContainVar_71 = ml_backend__ml_util__outline_args_contains_var_2_f_0(ml_backend__ml_util__OutlineArgs_68, ml_backend__ml_util__DataName_5);
                        }
#line 556 "ml_util.m"
#line 556 "ml_util.m"
                        switch (ml_backend__ml_util__OutlineArgsContainVar_71) {
#line 556 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 556 "ml_util.m"
                          case (MR_Integer) 0:
#line 558 "ml_util.m"
                            {
#line 558 "ml_util.m"
                              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__ReturnLvals_69, ml_backend__ml_util__DataName_5);
                            }
#line 556 "ml_util.m"
                            break;
#line 556 "ml_util.m"
                          case (MR_Integer) 1:
#line 555 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 556 "ml_util.m"
                            break;
#line 556 "ml_util.m"
                        }
#line 550 "ml_util.m"
                      }
#line 504 "ml_util.m"
                      break;
#line 504 "ml_util.m"
                  }
#line 504 "ml_util.m"
                  break;
#line 504 "ml_util.m"
              }
#line 469 "ml_util.m"
            }
#line 360 "ml_util.m"
            break;
#line 360 "ml_util.m"
        }
#line 360 "ml_util.m"
        break;
#line 360 "ml_util.m"
    }
#line 360 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 360 "ml_util.m"
  }
#line 356 "ml_util.m"
}

#line 346 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
#line 346 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 346 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_2)
#line 346 "ml_util.m"
{
#line 348 "ml_util.m"
  {
#line 348 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 348 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 348 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 348 "ml_util.m"
    else
#line 349 "ml_util.m"
      {
#line 349 "ml_util.m"
        MR_Word ml_backend__ml_util__Statement_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 349 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 353 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 354 "ml_util.m"
        {
#line 354 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_2);
        }
#line 349 "ml_util.m"
      }
#line 348 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 348 "ml_util.m"
  }
#line 346 "ml_util.m"
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
#line 336 "ml_util.m"
            MR_Word ml_backend__ml_util__StatementContainsVar_9;
#line 336 "ml_util.m"
            MR_Word ml_backend__ml_util__Stmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 353 "ml_util.m"
            MR_Word ml_backend__ml_util___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 354 "ml_util.m"
            {
#line 354 "ml_util.m"
              ml_backend__ml_util__StatementContainsVar_9 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_13, ml_backend__ml_util__HeadVar__2_2);
            }
#line 341 "ml_util.m"
#line 341 "ml_util.m"
            switch (ml_backend__ml_util__StatementContainsVar_9) {
#line 341 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 341 "ml_util.m"
              case (MR_Integer) 0:
#line 343 "ml_util.m"
                {
#line 343 "ml_util.m"
                  /* direct tailcall eliminated */
#line 343 "ml_util.m"
                  {
#line 343 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Statements_6;

#line 343 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 343 "ml_util.m"
                  }
#line 343 "ml_util.m"
                  continue;
#line 343 "ml_util.m"
                }
#line 341 "ml_util.m"
                break;
#line 341 "ml_util.m"
              case (MR_Integer) 1:
#line 340 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 341 "ml_util.m"
                break;
#line 341 "ml_util.m"
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
#line 2677 "ml_backend.ml_util.c"
  {
#line 2679 "ml_backend.ml_util.c"
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2681 "ml_backend.ml_util.c"
    MR_Word ml_backend__ml_util__Statement_5;

#line 2684 "ml_backend.ml_util.c"
    if (ml_backend__ml_util__succeeded)
#line 2686 "ml_backend.ml_util.c"
      {
#line 2688 "ml_backend.ml_util.c"
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
          }
#line 268 "ml_util.m"
        }
#line 2711 "ml_backend.ml_util.c"
      }
#line 2713 "ml_backend.ml_util.c"
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
#line 2845 "ml_backend.ml_util.c"
  {
#line 2847 "ml_backend.ml_util.c"
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2849 "ml_backend.ml_util.c"
    MR_Word ml_backend__ml_util__Statement_4;

#line 2852 "ml_backend.ml_util.c"
    if (ml_backend__ml_util__succeeded)
#line 2854 "ml_backend.ml_util.c"
      {
#line 2856 "ml_backend.ml_util.c"
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
          }
#line 268 "ml_util.m"
        }
#line 2879 "ml_backend.ml_util.c"
      }
#line 2881 "ml_backend.ml_util.c"
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

#line 182 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__wrap_init_obj_1_f_0(
#line 182 "ml_util.m"
  MR_Word ml_backend__ml_util__Rval_3)
#line 182 "ml_util.m"
{
#line 967 "ml_util.m"
  {
#line 967 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 967 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;

#line 967 "ml_util.m"
    {
#line 967 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 967 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_3));
#line 967 "ml_util.m"
    }
#line 967 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 967 "ml_util.m"
  }
#line 182 "ml_util.m"
}

#line 179 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_reserved_address_2_f_0(
#line 179 "ml_util.m"
  MR_Word ml_backend__ml_util__ModuleInfo_4,
#line 179 "ml_util.m"
  MR_Word ml_backend__ml_util__ReservedAddress_5)
#line 179 "ml_util.m"
{
#line 962 "ml_util.m"
  {
#line 962 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 962 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 962 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;

#line 964 "ml_util.m"
    {
#line 964 "ml_util.m"
      ml_backend__ml_util__V_6_6 = ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(ml_backend__ml_util__ModuleInfo_4, ml_backend__ml_util__ReservedAddress_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
    }
#line 964 "ml_util.m"
    {
#line 964 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 964 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 964 "ml_util.m"
    }
#line 962 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 962 "ml_util.m"
  }
#line 179 "ml_util.m"
}

#line 177 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_boxed_int_1_f_0(
#line 177 "ml_util.m"
  MR_Integer ml_backend__ml_util__Int_3)
#line 177 "ml_util.m"
{
#line 959 "ml_util.m"
  {
#line 959 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 959 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 959 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 959 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 959 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;

#line 960 "ml_util.m"
    {
#line 960 "ml_util.m"
      ml_backend__ml_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 960 "ml_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__V_8_8, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
#line 960 "ml_util.m"
    }
#line 960 "ml_util.m"
    {
#line 960 "ml_util.m"
      ml_backend__ml_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 960 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 1) = ((MR_Box) (ml_backend__ml_util__V_8_8));
#line 960 "ml_util.m"
    }
#line 960 "ml_util.m"
    {
#line 960 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 960 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 960 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (&ml_backend__ml_util_scalar_common_3[2]));
#line 960 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 2) = ((MR_Box) (ml_backend__ml_util__V_7_7));
#line 960 "ml_util.m"
    }
#line 960 "ml_util.m"
    {
#line 960 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 960 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 960 "ml_util.m"
    }
#line 959 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 959 "ml_util.m"
  }
#line 177 "ml_util.m"
}

#line 175 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_bool_1_f_0(
#line 175 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1)
#line 175 "ml_util.m"
{
#line 956 "ml_util.m"
  {
#line 956 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 956 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;

#line 956 "ml_util.m"
#line 956 "ml_util.m"
    switch (ml_backend__ml_util__HeadVar__1_1) {
#line 956 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 956 "ml_util.m"
      case (MR_Integer) 0:
#line 956 "ml_util.m"
        {
#line 956 "ml_util.m"
          ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[0]);
#line 956 "ml_util.m"
        }
#line 956 "ml_util.m"
        break;
#line 956 "ml_util.m"
      case (MR_Integer) 1:
#line 957 "ml_util.m"
        {
#line 957 "ml_util.m"
          ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[1]);
#line 957 "ml_util.m"
        }
#line 956 "ml_util.m"
        break;
#line 956 "ml_util.m"
    }
#line 956 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 956 "ml_util.m"
  }
#line 175 "ml_util.m"
}

#line 173 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_int_1_f_0(
#line 173 "ml_util.m"
  MR_Integer ml_backend__ml_util__Int_3)
#line 173 "ml_util.m"
{
#line 951 "ml_util.m"
  {
#line 951 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 951 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 951 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 951 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 951 "ml_util.m"
    {
#line 951 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 951 "ml_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
#line 951 "ml_util.m"
    }
#line 951 "ml_util.m"
    {
#line 951 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 951 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 951 "ml_util.m"
    }
#line 951 "ml_util.m"
    {
#line 951 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 951 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 951 "ml_util.m"
    }
#line 951 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 951 "ml_util.m"
  }
#line 173 "ml_util.m"
}

#line 171 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_foreign_2_f_0(
#line 171 "ml_util.m"
  MR_Word ml_backend__ml_util__Lang_4,
#line 171 "ml_util.m"
  MR_String ml_backend__ml_util__String_5)
#line 171 "ml_util.m"
{
#line 953 "ml_util.m"
  {
#line 953 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 953 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 953 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;
#line 953 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;

#line 954 "ml_util.m"
    {
#line 954 "ml_util.m"
      ml_backend__ml_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 954 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 954 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 1) = ((MR_Box) (ml_backend__ml_util__Lang_4));
#line 954 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 2) = ((MR_Box) (ml_backend__ml_util__String_5));
#line 954 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 954 "ml_util.m"
    }
#line 954 "ml_util.m"
    {
#line 954 "ml_util.m"
      ml_backend__ml_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 954 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_6_6, 1) = ((MR_Box) (ml_backend__ml_util__V_7_7));
#line 954 "ml_util.m"
    }
#line 954 "ml_util.m"
    {
#line 954 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 954 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 954 "ml_util.m"
    }
#line 953 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 953 "ml_util.m"
  }
#line 171 "ml_util.m"
}

#line 169 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_string_1_f_0(
#line 169 "ml_util.m"
  MR_String ml_backend__ml_util__String_3)
#line 169 "ml_util.m"
{
#line 949 "ml_util.m"
  {
#line 949 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 949 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 949 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 949 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 949 "ml_util.m"
    {
#line 949 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 949 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 1) = ((MR_Box) (ml_backend__ml_util__String_3));
#line 949 "ml_util.m"
    }
#line 949 "ml_util.m"
    {
#line 949 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 949 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 949 "ml_util.m"
    }
#line 949 "ml_util.m"
    {
#line 949 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 949 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 949 "ml_util.m"
    }
#line 949 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 949 "ml_util.m"
  }
#line 169 "ml_util.m"
}

#line 167 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_null_pointer_1_f_0(
#line 167 "ml_util.m"
  MR_Word ml_backend__ml_util__Type_3)
#line 167 "ml_util.m"
{
#line 947 "ml_util.m"
  {
#line 947 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 947 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 947 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 947 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 947 "ml_util.m"
    {
#line 947 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 947 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 1) = ((MR_Box) (ml_backend__ml_util__Type_3));
#line 947 "ml_util.m"
    }
#line 947 "ml_util.m"
    {
#line 947 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 947 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 947 "ml_util.m"
    }
#line 947 "ml_util.m"
    {
#line 947 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 947 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 947 "ml_util.m"
    }
#line 947 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 947 "ml_util.m"
  }
#line 167 "ml_util.m"
}

#line 164 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_maybe_3_f_0(
#line 164 "ml_util.m"
  MR_Word ml_backend__ml_util__TypeInfo_for_T_10,
#line 164 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 164 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2,
#line 164 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__3_3)
#line 164 "ml_util.m"
{
#line 944 "ml_util.m"
  {
#line 944 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 944 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__4_4;

#line 944 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 947 "ml_util.m"
      {
#line 947 "ml_util.m"
        MR_Word ml_backend__ml_util__V_12_12;
#line 947 "ml_util.m"
        MR_Word ml_backend__ml_util__V_13_13;

#line 947 "ml_util.m"
        {
#line 947 "ml_util.m"
          ml_backend__ml_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 947 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_13_13, 1) = ((MR_Box) (ml_backend__ml_util__HeadVar__1_1));
#line 947 "ml_util.m"
        }
#line 947 "ml_util.m"
        {
#line 947 "ml_util.m"
          ml_backend__ml_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 947 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_12_12, 1) = ((MR_Box) (ml_backend__ml_util__V_13_13));
#line 947 "ml_util.m"
        }
#line 947 "ml_util.m"
        {
#line 947 "ml_util.m"
          ml_backend__ml_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 947 "ml_util.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__ml_util__V_12_12));
#line 947 "ml_util.m"
        }
#line 947 "ml_util.m"
      }
#line 944 "ml_util.m"
    else
#line 944 "ml_util.m"
      {
#line 944 "ml_util.m"
        MR_Box ml_backend__ml_util__X_7 = (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, (MR_Integer) 0));
#line 944 "ml_util.m"
        MR_Box MR_CALL (* ml_backend__ml_util__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 944 "ml_util.m"
        MR_Box ml_backend__ml_util__conv1_HeadVar__4_4;

#line 944 "ml_util.m"
        {
#line 944 "ml_util.m"
          ml_backend__ml_util__conv1_HeadVar__4_4 = ml_backend__ml_util__func_0(((MR_Box) ml_backend__ml_util__HeadVar__2_2), ml_backend__ml_util__X_7);
        }
#line 944 "ml_util.m"
        ml_backend__ml_util__HeadVar__4_4 = ((MR_Word) ml_backend__ml_util__conv1_HeadVar__4_4);
#line 944 "ml_util.m"
      }
#line 944 "ml_util.m"
    return ml_backend__ml_util__HeadVar__4_4;
#line 944 "ml_util.m"
  }
#line 164 "ml_util.m"
}

#line 162 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_array_2_f_0(
#line 162 "ml_util.m"
  MR_Word ml_backend__ml_util__TypeInfo_for_T_7,
#line 162 "ml_util.m"
  MR_Word ml_backend__ml_util__Conv_4,
#line 162 "ml_util.m"
  MR_Word ml_backend__ml_util__List_5)
#line 162 "ml_util.m"
{
#line 942 "ml_util.m"
  {
#line 942 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 942 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 942 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;

#line 942 "ml_util.m"
    {
#line 942 "ml_util.m"
      ml_backend__ml_util__V_6_6 = mercury__list__map_2_f_0(ml_backend__ml_util__TypeInfo_for_T_7, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_util__Conv_4, ml_backend__ml_util__List_5);
    }
#line 942 "ml_util.m"
    {
#line 942 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 942 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 942 "ml_util.m"
    }
#line 942 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 942 "ml_util.m"
  }
#line 162 "ml_util.m"
}

#line 160 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_builtin_const_1_f_0(
#line 160 "ml_util.m"
  MR_String ml_backend__ml_util__Name_3)
#line 160 "ml_util.m"
{
#line 932 "ml_util.m"
  {
#line 932 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 932 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 932 "ml_util.m"
    MR_Word ml_backend__ml_util__Rval_4;
#line 932 "ml_util.m"
    MR_Word ml_backend__ml_util__PrivateBuiltin_5;
#line 932 "ml_util.m"
    MR_Word ml_backend__ml_util__MLDS_Module_6;
#line 932 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 932 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 932 "ml_util.m"
    MR_Word ml_backend__ml_util__V_11_11;

#line 933 "ml_util.m"
    {
#line 933 "ml_util.m"
      ml_backend__ml_util__PrivateBuiltin_5 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 934 "ml_util.m"
    {
#line 934 "ml_util.m"
      ml_backend__ml_util__MLDS_Module_6 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_util__PrivateBuiltin_5);
    }
#line 940 "ml_util.m"
    {
#line 940 "ml_util.m"
      ml_backend__ml_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 940 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_11_11, 0) = ((MR_Box) (ml_backend__ml_util__Name_3));
#line 940 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 940 "ml_util.m"
    }
#line 939 "ml_util.m"
    {
#line 939 "ml_util.m"
      ml_backend__ml_util__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 0) = ((MR_Box) (ml_backend__ml_util__MLDS_Module_6));
#line 939 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 1) = ((MR_Box) ((MR_Integer) 0));
#line 939 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 2) = ((MR_Box) (ml_backend__ml_util__V_11_11));
#line 939 "ml_util.m"
    }
#line 939 "ml_util.m"
    {
#line 939 "ml_util.m"
      ml_backend__ml_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_8_8, 0) = ((MR_Box) (ml_backend__ml_util__V_9_9));
#line 939 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 939 "ml_util.m"
    }
#line 939 "ml_util.m"
    {
#line 939 "ml_util.m"
      ml_backend__ml_util__Rval_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, 0) = ((MR_Box) (ml_backend__ml_util__V_8_8));
#line 939 "ml_util.m"
    }
#line 932 "ml_util.m"
    {
#line 932 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 932 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_4));
#line 932 "ml_util.m"
    }
#line 932 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 932 "ml_util.m"
  }
#line 160 "ml_util.m"
}

#line 152 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__lval_contains_var_2_f_0(
#line 152 "ml_util.m"
  MR_Word ml_backend__ml_util__Lval_4,
#line 152 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 152 "ml_util.m"
{
#line 912 "ml_util.m"
  {
#line 912 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 912 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 912 "ml_util.m"
#line 912 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Lval_4)) {
#line 912 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 912 "ml_util.m"
      case (MR_Integer) 0:
#line 912 "ml_util.m"
        {
#line 912 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
#line 912 "ml_util.m"
          MR_Word ml_backend__ml_util___MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 912 "ml_util.m"
          MR_Word ml_backend__ml_util___FieldId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 2)));
#line 912 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 3)));
#line 912 "ml_util.m"
          MR_Word ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 4)));

#line 913 "ml_util.m"
          {
#line 913 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_8, ml_backend__ml_util__DataName_5);
          }
#line 912 "ml_util.m"
        }
#line 912 "ml_util.m"
        break;
#line 912 "ml_util.m"
      case (MR_Integer) 1:
#line 915 "ml_util.m"
        {
#line 915 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 915 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));

#line 916 "ml_util.m"
          {
#line 916 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_19, ml_backend__ml_util__DataName_5);
          }
#line 915 "ml_util.m"
        }
#line 912 "ml_util.m"
        break;
#line 912 "ml_util.m"
      case (MR_Integer) 2:
#line 919 "ml_util.m"
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 912 "ml_util.m"
        break;
#line 912 "ml_util.m"
      case (MR_Integer) 3:
#line 921 "ml_util.m"
        {
#line 921 "ml_util.m"
          MR_Word ml_backend__ml_util__ModuleName_14;
#line 921 "ml_util.m"
          MR_Word ml_backend__ml_util__QualKind_15;
#line 921 "ml_util.m"
          MR_Word ml_backend__ml_util__Name_16;
#line 921 "ml_util.m"
          MR_Word ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 921 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
#line 923 "ml_util.m"
          MR_Word ml_backend__ml_util__V_18_18;
#line 923 "ml_util.m"
          MR_Word ml_backend__ml_util__V_22_22;
#line 923 "ml_util.m"
          MR_Word ml_backend__ml_util__V_23_23;
#line 923 "ml_util.m"
          MR_Word ml_backend__ml_util__V_24_24;

#line 921 "ml_util.m"
          ml_backend__ml_util__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 0)));
#line 921 "ml_util.m"
          ml_backend__ml_util__QualKind_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 1)));
#line 921 "ml_util.m"
          ml_backend__ml_util__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 2)));
#line 923 "ml_util.m"
          ml_backend__ml_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
#line 923 "ml_util.m"
          ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));
#line 923 "ml_util.m"
          ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
#line 923 "ml_util.m"
          {
#line 923 "ml_util.m"
            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_14, ml_backend__ml_util__V_22_22);
          }
#line 923 "ml_util.m"
          if (ml_backend__ml_util__succeeded)
#line 923 "ml_util.m"
            {
#line 923 "ml_util.m"
              ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_15 == ml_backend__ml_util__V_23_23);
#line 923 "ml_util.m"
              if (ml_backend__ml_util__succeeded)
#line 923 "ml_util.m"
                {
#line 923 "ml_util.m"
                  ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 923 "ml_util.m"
                  if (ml_backend__ml_util__succeeded)
#line 923 "ml_util.m"
                    {
#line 923 "ml_util.m"
                      ml_backend__ml_util__V_24_24 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_18_18), (MR_Integer) 1);
#line 923 "ml_util.m"
                      {
#line 923 "ml_util.m"
                        ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_util__Name_16, ml_backend__ml_util__V_24_24);
                      }
#line 923 "ml_util.m"
                    }
#line 923 "ml_util.m"
                }
#line 923 "ml_util.m"
            }
#line 925 "ml_util.m"
          if (ml_backend__ml_util__succeeded)
#line 924 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 925 "ml_util.m"
          else
#line 926 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 921 "ml_util.m"
        }
#line 912 "ml_util.m"
        break;
#line 912 "ml_util.m"
    }
#line 912 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 912 "ml_util.m"
  }
#line 152 "ml_util.m"
}

#line 150 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__lvals_contains_var_2_f_0(
#line 150 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 150 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 150 "ml_util.m"
{
#line 899 "ml_util.m"
  while (MR_TRUE)
#line 899 "ml_util.m"
    {
#line 899 "ml_util.m"
      /* tailcall optimized into a loop */
#line 899 "ml_util.m"
      {
#line 899 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 899 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 899 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 899 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 899 "ml_util.m"
        else
#line 900 "ml_util.m"
          {
#line 900 "ml_util.m"
            MR_Word ml_backend__ml_util__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 900 "ml_util.m"
            MR_Word ml_backend__ml_util__Lvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 900 "ml_util.m"
            MR_Word ml_backend__ml_util__LvalContainsVar_9;

#line 901 "ml_util.m"
            {
#line 901 "ml_util.m"
              ml_backend__ml_util__LvalContainsVar_9 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 905 "ml_util.m"
#line 905 "ml_util.m"
            switch (ml_backend__ml_util__LvalContainsVar_9) {
#line 905 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 905 "ml_util.m"
              case (MR_Integer) 0:
#line 907 "ml_util.m"
                {
#line 907 "ml_util.m"
                  /* direct tailcall eliminated */
#line 907 "ml_util.m"
                  {
#line 907 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Lvals_6;

#line 907 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 907 "ml_util.m"
                  }
#line 907 "ml_util.m"
                  continue;
#line 907 "ml_util.m"
                }
#line 905 "ml_util.m"
                break;
#line 905 "ml_util.m"
              case (MR_Integer) 1:
#line 904 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 905 "ml_util.m"
                break;
#line 905 "ml_util.m"
            }
#line 900 "ml_util.m"
          }
#line 899 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 899 "ml_util.m"
      }
#line 899 "ml_util.m"
      break;
#line 899 "ml_util.m"
    }
#line 150 "ml_util.m"
}

#line 148 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__rval_contains_var_2_f_0(
#line 148 "ml_util.m"
  MR_Word ml_backend__ml_util__Rval_4,
#line 148 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 148 "ml_util.m"
{
#line 840 "ml_util.m"
  while (MR_TRUE)
#line 840 "ml_util.m"
    {
#line 840 "ml_util.m"
      /* tailcall optimized into a loop */
#line 840 "ml_util.m"
      {
#line 840 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 840 "ml_util.m"
        MR_Word ml_backend__ml_util__ContainsVar_6;

#line 840 "ml_util.m"
#line 840 "ml_util.m"
        switch (MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) {
#line 840 "ml_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 840 "ml_util.m"
          case (MR_Integer) 0:
#line 890 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 840 "ml_util.m"
            break;
#line 840 "ml_util.m"
          case (MR_Integer) 1:
#line 840 "ml_util.m"
            {
#line 840 "ml_util.m"
              MR_Word ml_backend__ml_util__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

#line 841 "ml_util.m"
              {
#line 841 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_7, ml_backend__ml_util__DataName_5);
              }
#line 840 "ml_util.m"
            }
#line 840 "ml_util.m"
            break;
#line 840 "ml_util.m"
          case (MR_Integer) 2:
#line 843 "ml_util.m"
            {
#line 843 "ml_util.m"
              MR_Word ml_backend__ml_util__SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));
#line 843 "ml_util.m"
              MR_Integer ml_backend__ml_util___Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

#line 844 "ml_util.m"
              /* direct tailcall eliminated */
#line 844 "ml_util.m"
              {
#line 844 "ml_util.m"
                MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__SubRval_9;

#line 844 "ml_util.m"
                ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 844 "ml_util.m"
              }
#line 844 "ml_util.m"
              continue;
#line 843 "ml_util.m"
            }
#line 840 "ml_util.m"
            break;
#line 840 "ml_util.m"
          case (MR_Integer) 3:
#line 840 "ml_util.m"
#line 840 "ml_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) {
#line 840 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 840 "ml_util.m"
              case (MR_Integer) 0:
#line 846 "ml_util.m"
                {
#line 846 "ml_util.m"
                  MR_Word ml_backend__ml_util__Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 856 "ml_util.m"
#line 856 "ml_util.m"
                  switch (MR_tag((MR_Word) ml_backend__ml_util__Const_10)) {
#line 856 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 856 "ml_util.m"
                    case (MR_Integer) 0:
#line 870 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 856 "ml_util.m"
                      break;
#line 856 "ml_util.m"
                    case (MR_Integer) 1:
#line 848 "ml_util.m"
                      {
#line 848 "ml_util.m"
                        MR_Word ml_backend__ml_util__DataAddr_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Const_10), (MR_Integer) 1);
#line 848 "ml_util.m"
                        MR_Word ml_backend__ml_util__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataAddr_11, (MR_Integer) 0)));
#line 848 "ml_util.m"
                        MR_Word ml_backend__ml_util__RawDataName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataAddr_11, (MR_Integer) 1)));
#line 850 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
#line 850 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
#line 850 "ml_util.m"
                        MR_Word ml_backend__ml_util___QualKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));

#line 850 "ml_util.m"
                        {
#line 850 "ml_util.m"
                          ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_12, ml_backend__ml_util__V_40_40);
                        }
#line 850 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 850 "ml_util.m"
                          {
#line 850 "ml_util.m"
                            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__RawDataName_13, ml_backend__ml_util__V_41_41);
                          }
#line 853 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 852 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 853 "ml_util.m"
                        else
#line 854 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 848 "ml_util.m"
                      }
#line 856 "ml_util.m"
                      break;
#line 856 "ml_util.m"
                    case (MR_Integer) 2:
#line 870 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 856 "ml_util.m"
                      break;
#line 856 "ml_util.m"
                    case (MR_Integer) 3:
#line 870 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 856 "ml_util.m"
                      break;
#line 856 "ml_util.m"
                  }
#line 846 "ml_util.m"
                }
#line 840 "ml_util.m"
                break;
#line 840 "ml_util.m"
              case (MR_Integer) 1:
#line 873 "ml_util.m"
                {
#line 873 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 873 "ml_util.m"
                  MR_Word ml_backend__ml_util___Op_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 874 "ml_util.m"
                  /* direct tailcall eliminated */
#line 874 "ml_util.m"
                  {
#line 874 "ml_util.m"
                    MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__RvalA_29;

#line 874 "ml_util.m"
                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 874 "ml_util.m"
                  }
#line 874 "ml_util.m"
                  continue;
#line 873 "ml_util.m"
                }
#line 840 "ml_util.m"
                break;
#line 840 "ml_util.m"
              case (MR_Integer) 2:
#line 876 "ml_util.m"
                {
#line 876 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 3)));
#line 876 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalAContainsVar_31;
#line 876 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 876 "ml_util.m"
                  MR_Word ml_backend__ml_util___Op_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 877 "ml_util.m"
                  {
#line 877 "ml_util.m"
                    ml_backend__ml_util__RvalAContainsVar_31 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__RvalA_38, ml_backend__ml_util__DataName_5);
                  }
#line 881 "ml_util.m"
#line 881 "ml_util.m"
                  switch (ml_backend__ml_util__RvalAContainsVar_31) {
#line 881 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 881 "ml_util.m"
                    case (MR_Integer) 0:
#line 883 "ml_util.m"
                      {
#line 883 "ml_util.m"
                        /* direct tailcall eliminated */
#line 883 "ml_util.m"
                        {
#line 883 "ml_util.m"
                          MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__RvalB_30;

#line 883 "ml_util.m"
                          ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 883 "ml_util.m"
                        }
#line 883 "ml_util.m"
                        continue;
#line 883 "ml_util.m"
                      }
#line 881 "ml_util.m"
                      break;
#line 881 "ml_util.m"
                    case (MR_Integer) 1:
#line 880 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 881 "ml_util.m"
                      break;
#line 881 "ml_util.m"
                  }
#line 876 "ml_util.m"
                }
#line 840 "ml_util.m"
                break;
#line 840 "ml_util.m"
              case (MR_Integer) 3:
#line 886 "ml_util.m"
                {
#line 886 "ml_util.m"
                  MR_Word ml_backend__ml_util__Lval_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 887 "ml_util.m"
                  {
#line 887 "ml_util.m"
                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_39, ml_backend__ml_util__DataName_5);
                  }
#line 886 "ml_util.m"
                }
#line 840 "ml_util.m"
                break;
#line 840 "ml_util.m"
              case (MR_Integer) 4:
#line 892 "ml_util.m"
                {
#line 892 "ml_util.m"
                  MR_Word ml_backend__ml_util__IndexRval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 892 "ml_util.m"
                  MR_Word ml_backend__ml_util___VectorCommon_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 893 "ml_util.m"
                  /* direct tailcall eliminated */
#line 893 "ml_util.m"
                  {
#line 893 "ml_util.m"
                    MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__IndexRval_34;

#line 893 "ml_util.m"
                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 893 "ml_util.m"
                  }
#line 893 "ml_util.m"
                  continue;
#line 892 "ml_util.m"
                }
#line 840 "ml_util.m"
                break;
#line 840 "ml_util.m"
              case (MR_Integer) 5:
#line 896 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 840 "ml_util.m"
                break;
#line 840 "ml_util.m"
            }
#line 840 "ml_util.m"
            break;
#line 840 "ml_util.m"
        }
#line 840 "ml_util.m"
        return ml_backend__ml_util__ContainsVar_6;
#line 840 "ml_util.m"
      }
#line 840 "ml_util.m"
      break;
#line 840 "ml_util.m"
    }
#line 148 "ml_util.m"
}

#line 146 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__maybe_rval_contains_var_2_f_0(
#line 146 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 146 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 146 "ml_util.m"
{
#line 834 "ml_util.m"
  {
#line 834 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 834 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 834 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 834 "ml_util.m"
    else
#line 835 "ml_util.m"
      {
#line 835 "ml_util.m"
        MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));

#line 836 "ml_util.m"
        {
#line 836 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
        }
#line 835 "ml_util.m"
      }
#line 834 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 834 "ml_util.m"
  }
#line 146 "ml_util.m"
}

#line 144 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__rvals_contains_var_2_f_0(
#line 144 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 144 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 144 "ml_util.m"
{
#line 823 "ml_util.m"
  while (MR_TRUE)
#line 823 "ml_util.m"
    {
#line 823 "ml_util.m"
      /* tailcall optimized into a loop */
#line 823 "ml_util.m"
      {
#line 823 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 823 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 823 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 823 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 823 "ml_util.m"
        else
#line 824 "ml_util.m"
          {
#line 824 "ml_util.m"
            MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 824 "ml_util.m"
            MR_Word ml_backend__ml_util__Rvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 824 "ml_util.m"
            MR_Word ml_backend__ml_util__RvalContainsVar_9;

#line 825 "ml_util.m"
            {
#line 825 "ml_util.m"
              ml_backend__ml_util__RvalContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 829 "ml_util.m"
#line 829 "ml_util.m"
            switch (ml_backend__ml_util__RvalContainsVar_9) {
#line 829 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 829 "ml_util.m"
              case (MR_Integer) 0:
#line 831 "ml_util.m"
                {
#line 831 "ml_util.m"
                  /* direct tailcall eliminated */
#line 831 "ml_util.m"
                  {
#line 831 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Rvals_6;

#line 831 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 831 "ml_util.m"
                  }
#line 831 "ml_util.m"
                  continue;
#line 831 "ml_util.m"
                }
#line 829 "ml_util.m"
                break;
#line 829 "ml_util.m"
              case (MR_Integer) 1:
#line 828 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 829 "ml_util.m"
                break;
#line 829 "ml_util.m"
            }
#line 824 "ml_util.m"
          }
#line 823 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 823 "ml_util.m"
      }
#line 823 "ml_util.m"
      break;
#line 823 "ml_util.m"
    }
#line 144 "ml_util.m"
}

#line 142 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__initializer_contains_var_2_f_0(
#line 142 "ml_util.m"
  MR_Word ml_backend__ml_util__Initializer_4,
#line 142 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 142 "ml_util.m"
{
#line 796 "ml_util.m"
  {
#line 796 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 796 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 796 "ml_util.m"
#line 796 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Initializer_4)) {
#line 796 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 796 "ml_util.m"
      case (MR_Integer) 0:
#line 797 "ml_util.m"
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 796 "ml_util.m"
        break;
#line 796 "ml_util.m"
      case (MR_Integer) 1:
#line 799 "ml_util.m"
        {
#line 799 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 800 "ml_util.m"
          {
#line 800 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_7, ml_backend__ml_util__DataName_5);
          }
#line 799 "ml_util.m"
        }
#line 796 "ml_util.m"
        break;
#line 796 "ml_util.m"
      case (MR_Integer) 2:
#line 802 "ml_util.m"
        {
#line 802 "ml_util.m"
          MR_Word ml_backend__ml_util__FieldInitializers_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 1)));
#line 802 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 803 "ml_util.m"
          {
#line 803 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__FieldInitializers_9, ml_backend__ml_util__DataName_5);
          }
#line 802 "ml_util.m"
        }
#line 796 "ml_util.m"
        break;
#line 796 "ml_util.m"
      case (MR_Integer) 3:
#line 805 "ml_util.m"
        {
#line 805 "ml_util.m"
          MR_Word ml_backend__ml_util__ElementInitializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 806 "ml_util.m"
          {
#line 806 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__ElementInitializers_10, ml_backend__ml_util__DataName_5);
          }
#line 805 "ml_util.m"
        }
#line 796 "ml_util.m"
        break;
#line 796 "ml_util.m"
    }
#line 796 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 796 "ml_util.m"
  }
#line 142 "ml_util.m"
}

#line 125 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__defn_contains_var_2_f_0(
#line 125 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_4,
#line 125 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 125 "ml_util.m"
{
#line 738 "ml_util.m"
  {
#line 738 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 738 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;
#line 738 "ml_util.m"
    MR_Word ml_backend__ml_util__DefnBody_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 3)));
#line 739 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 0)));
#line 739 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 1)));
#line 739 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 2)));

#line 740 "ml_util.m"
    {
#line 740 "ml_util.m"
      ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defn_body_contains_var_2_f_0(ml_backend__ml_util__DefnBody_10, ml_backend__ml_util__DataName_5);
    }
#line 738 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 738 "ml_util.m"
  }
#line 125 "ml_util.m"
}

#line 120 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__defns_contains_var_2_f_0(
#line 120 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 120 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 120 "ml_util.m"
{
#line 727 "ml_util.m"
  while (MR_TRUE)
#line 727 "ml_util.m"
    {
#line 727 "ml_util.m"
      /* tailcall optimized into a loop */
#line 727 "ml_util.m"
      {
#line 727 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 727 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 727 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 727 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 727 "ml_util.m"
        else
#line 728 "ml_util.m"
          {
#line 728 "ml_util.m"
            MR_Word ml_backend__ml_util__Defn_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 728 "ml_util.m"
            MR_Word ml_backend__ml_util__Defns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 728 "ml_util.m"
            MR_Word ml_backend__ml_util__DefnContainsVar_9;

#line 729 "ml_util.m"
            {
#line 729 "ml_util.m"
              ml_backend__ml_util__DefnContainsVar_9 = ml_backend__ml_util__defn_contains_var_2_f_0(ml_backend__ml_util__Defn_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 733 "ml_util.m"
#line 733 "ml_util.m"
            switch (ml_backend__ml_util__DefnContainsVar_9) {
#line 733 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 733 "ml_util.m"
              case (MR_Integer) 0:
#line 735 "ml_util.m"
                {
#line 735 "ml_util.m"
                  /* direct tailcall eliminated */
#line 735 "ml_util.m"
                  {
#line 735 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Defns_6;

#line 735 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 735 "ml_util.m"
                  }
#line 735 "ml_util.m"
                  continue;
#line 735 "ml_util.m"
                }
#line 733 "ml_util.m"
                break;
#line 733 "ml_util.m"
              case (MR_Integer) 1:
#line 732 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 733 "ml_util.m"
                break;
#line 733 "ml_util.m"
            }
#line 728 "ml_util.m"
          }
#line 727 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 727 "ml_util.m"
      }
#line 727 "ml_util.m"
      break;
#line 727 "ml_util.m"
    }
#line 120 "ml_util.m"
}

#line 115 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_public_1_p_0(
#line 115 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 115 "ml_util.m"
{
#line 713 "ml_util.m"
  {
#line 713 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 713 "ml_util.m"
    MR_Word ml_backend__ml_util__Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 713 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 714 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 714 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 714 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));

#line 715 "ml_util.m"
    {
#line 715 "ml_util.m"
      ml_backend__ml_util__V_7_7 = ml_backend__mlds__access_1_f_0(ml_backend__ml_util__Flags_5);
    }
#line 715 "ml_util.m"
    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_7_7 == (MR_Integer) 0);
#line 713 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 713 "ml_util.m"
  }
#line 115 "ml_util.m"
}

#line 110 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_commit_type_var_1_p_0(
#line 110 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 110 "ml_util.m"
{
#line 708 "ml_util.m"
  {
#line 708 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 708 "ml_util.m"
    MR_Word ml_backend__ml_util__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 708 "ml_util.m"
    MR_Word ml_backend__ml_util__Type_7;
#line 709 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 709 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 709 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 710 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 710 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;

#line 710 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_6)) == (MR_mktag((MR_Integer) 1)));
#line 710 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 710 "ml_util.m"
      {
#line 710 "ml_util.m"
        ml_backend__ml_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 0)));
#line 710 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 1)));
#line 710 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 2)));
#line 711 "ml_util.m"
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "ml_util.m"
      }
#line 708 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 708 "ml_util.m"
  }
#line 110 "ml_util.m"
}

#line 105 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_type_ctor_info_1_p_0(
#line 105 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 105 "ml_util.m"
{
#line 701 "ml_util.m"
  {
#line 701 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 701 "ml_util.m"
    MR_Word ml_backend__ml_util__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 701 "ml_util.m"
    MR_Word ml_backend__ml_util__Type_7;
#line 701 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiId_10;
#line 701 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiName_12;
#line 701 "ml_util.m"
    MR_Word ml_backend__ml_util__V_13_13;
#line 702 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 702 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 702 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 703 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 703 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 705 "ml_util.m"
    MR_Word ml_backend__ml_util__V_11_11;

#line 703 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_6)) == (MR_mktag((MR_Integer) 1)));
#line 703 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 703 "ml_util.m"
      {
#line 703 "ml_util.m"
        ml_backend__ml_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 0)));
#line 703 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 1)));
#line 703 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 2)));
#line 704 "ml_util.m"
        ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Type_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 704 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 704 "ml_util.m"
          {
#line 704 "ml_util.m"
            ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_7, (MR_Integer) 1)));
#line 704 "ml_util.m"
            ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 704 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 704 "ml_util.m"
              {
#line 704 "ml_util.m"
                ml_backend__ml_util__RttiId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_13_13, (MR_Integer) 0)));
#line 705 "ml_util.m"
                ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__RttiId_10)) == (MR_mktag((MR_Integer) 0)));
#line 705 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 705 "ml_util.m"
                  {
#line 705 "ml_util.m"
                    ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_10, (MR_Integer) 0)));
#line 705 "ml_util.m"
                    ml_backend__ml_util__RttiName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_10, (MR_Integer) 1)));
#line 706 "ml_util.m"
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__RttiName_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 705 "ml_util.m"
                  }
#line 704 "ml_util.m"
              }
#line 704 "ml_util.m"
          }
#line 703 "ml_util.m"
      }
#line 701 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 701 "ml_util.m"
  }
#line 105 "ml_util.m"
}

#line 100 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_function_1_p_0(
#line 100 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 100 "ml_util.m"
{
#line 697 "ml_util.m"
  {
#line 697 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 697 "ml_util.m"
    MR_Word ml_backend__ml_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 698 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 698 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 698 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 699 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 699 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_8_8;
#line 699 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 699 "ml_util.m"
    MR_Word ml_backend__ml_util__V_10_10;

#line 699 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_3)) == (MR_mktag((MR_Integer) 2)));
#line 699 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 699 "ml_util.m"
      {
#line 699 "ml_util.m"
        ml_backend__ml_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 699 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 699 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 2)));
#line 699 "ml_util.m"
        ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 3)));
#line 699 "ml_util.m"
      }
#line 697 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 697 "ml_util.m"
  }
#line 100 "ml_util.m"
}

#line 96 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_is_type_1_p_0(
#line 96 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_2)
#line 96 "ml_util.m"
{
#line 693 "ml_util.m"
  {
#line 693 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 693 "ml_util.m"
    MR_Word ml_backend__ml_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 694 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 694 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 694 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 695 "ml_util.m"
    MR_String ml_backend__ml_util__V_7_7;
#line 695 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_8_8;

#line 695 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_3)) == (MR_mktag((MR_Integer) 0)));
#line 695 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 695 "ml_util.m"
      {
#line 695 "ml_util.m"
        ml_backend__ml_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 695 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 695 "ml_util.m"
      }
#line 693 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 693 "ml_util.m"
  }
#line 96 "ml_util.m"
}

#line 686 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(
#line 686 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 686 "ml_util.m"
{
#line 686 "ml_util.m"
  {
#line 686 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 686 "ml_util.m"
    MR_builtin_longjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0, 1);
#line 686 "ml_util.m"
  }
#line 686 "ml_util.m"
}

#line 686 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(
#line 686 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 686 "ml_util.m"
{
#line 686 "ml_util.m"
  {
#line 686 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 686 "ml_util.m"
    {
#line 690 "ml_util.m"
      MR_Word ml_backend__ml_util__V_16_16;
#line 691 "ml_util.m"
      MR_Word ml_backend__ml_util__V_17_17;
#line 691 "ml_util.m"
      MR_Word ml_backend__ml_util__V_18_18;
#line 691 "ml_util.m"
      MR_String ml_backend__ml_util__V_19_19;

#line 690 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, (MR_Integer) 0)));
#line 690 "ml_util.m"
      ml_backend__ml_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, (MR_Integer) 1)));
#line 691 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 691 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 691 "ml_util.m"
        {
#line 691 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15, (MR_Integer) 1)));
#line 686 "ml_util.m"
          {
#line 691 "ml_util.m"
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 691 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 691 "ml_util.m"
              {
#line 691 "ml_util.m"
                {
#line 691 "ml_util.m"
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 1)));
#line 691 "ml_util.m"
                  ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 2)));
#line 691 "ml_util.m"
                  ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 3)));
#line 691 "ml_util.m"
                  ml_backend__ml_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 4)));
#line 691 "ml_util.m"
                }
#line 686 "ml_util.m"
                {
#line 691 "ml_util.m"
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22);
#line 691 "ml_util.m"
                  if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 691 "ml_util.m"
                    {
#line 691 "ml_util.m"
                      ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(ml_backend__ml_util__env_ptr);
                    }
#line 686 "ml_util.m"
                }
#line 691 "ml_util.m"
              }
#line 686 "ml_util.m"
          }
#line 691 "ml_util.m"
        }
#line 686 "ml_util.m"
    }
#line 686 "ml_util.m"
  }
#line 686 "ml_util.m"
}

#line 686 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(
#line 686 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 686 "ml_util.m"
{
#line 686 "ml_util.m"
  {
#line 686 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 686 "ml_util.m"
    if (MR_builtin_setjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0) == 0)
#line 686 "ml_util.m"
      {
#line 686 "ml_util.m"
        {
#line 686 "ml_util.m"
          MR_Word ml_backend__ml_util__Body_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 3)));
#line 686 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_11;
#line 686 "ml_util.m"
          MR_Word ml_backend__ml_util__V_20_20;
#line 687 "ml_util.m"
          MR_Word ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 0)));
#line 687 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 1)));
#line 687 "ml_util.m"
          MR_Word ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 2)));
#line 688 "ml_util.m"
          MR_Word ml_backend__ml_util__V_9_9;
#line 688 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10;
#line 688 "ml_util.m"
          MR_Word ml_backend__ml_util__V_12_12;
#line 688 "ml_util.m"
          MR_Word ml_backend__ml_util__V_13_13;

#line 688 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_8)) == (MR_mktag((MR_Integer) 2)));
#line 688 "ml_util.m"
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 688 "ml_util.m"
            {
#line 688 "ml_util.m"
              {
#line 688 "ml_util.m"
                ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 0)));
#line 688 "ml_util.m"
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 1)));
#line 688 "ml_util.m"
                ml_backend__ml_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 2)));
#line 688 "ml_util.m"
                ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 3)));
#line 688 "ml_util.m"
                ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 4)));
#line 688 "ml_util.m"
              }
#line 686 "ml_util.m"
              {
#line 688 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 688 "ml_util.m"
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 688 "ml_util.m"
                  {
#line 688 "ml_util.m"
                    ml_backend__ml_util__FunctionBody_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_20_20), (MR_Integer) 1);
#line 686 "ml_util.m"
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
#line 686 "ml_util.m"
                    }
#line 688 "ml_util.m"
                  }
#line 686 "ml_util.m"
              }
#line 688 "ml_util.m"
            }
#line 686 "ml_util.m"
        }
#line 686 "ml_util.m"
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = MR_FALSE;
#line 686 "ml_util.m"
      }
#line 686 "ml_util.m"
    else
#line 686 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = MR_TRUE;
#line 686 "ml_util.m"
  }
#line 686 "ml_util.m"
}

#line 91 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0(
#line 91 "ml_util.m"
  MR_Word ml_backend__ml_util__ForeignLang_3,
#line 91 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_4)
#line 91 "ml_util.m"
{
#line 91 "ml_util.m"
  {
#line 91 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s ml_backend__ml_util__env;

#line 91 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3 = ml_backend__ml_util__ForeignLang_3;
#line 91 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4 = ml_backend__ml_util__Defn_4;
#line 686 "ml_util.m"
    {
#line 686 "ml_util.m"
      ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(&ml_backend__ml_util__env);
    }
#line 686 "ml_util.m"
    return (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
#line 91 "ml_util.m"
  }
#line 91 "ml_util.m"
}

#line 674 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(
#line 674 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 674 "ml_util.m"
{
#line 674 "ml_util.m"
  {
#line 674 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 674 "ml_util.m"
    MR_builtin_longjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0, 1);
#line 674 "ml_util.m"
  }
#line 674 "ml_util.m"
}

#line 674 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(
#line 674 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 674 "ml_util.m"
{
#line 674 "ml_util.m"
  {
#line 674 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 674 "ml_util.m"
    {
#line 678 "ml_util.m"
      MR_Word ml_backend__ml_util__V_16_16;

#line 678 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, (MR_Integer) 0)));
#line 678 "ml_util.m"
      ml_backend__ml_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, (MR_Integer) 1)));
#line 680 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 680 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 680 "ml_util.m"
        {
#line 680 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15, (MR_Integer) 1)));
#line 674 "ml_util.m"
          {
#line 682 "ml_util.m"
            if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 680 "ml_util.m"
              {
#line 680 "ml_util.m"
                MR_Word ml_backend__ml_util__TargetLang_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 1)));
#line 680 "ml_util.m"
                MR_Word ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 2)));

#line 681 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = (ml_backend__ml_util__TargetLang_17 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3);
#line 681 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = !((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded);
#line 680 "ml_util.m"
              }
#line 682 "ml_util.m"
            else
#line 682 "ml_util.m"
            if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 683 "ml_util.m"
              (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_TRUE;
#line 682 "ml_util.m"
            else
#line 682 "ml_util.m"
              (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_FALSE;
#line 682 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 682 "ml_util.m"
              {
#line 682 "ml_util.m"
                ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(ml_backend__ml_util__env_ptr);
              }
#line 674 "ml_util.m"
          }
#line 680 "ml_util.m"
        }
#line 674 "ml_util.m"
    }
#line 674 "ml_util.m"
  }
#line 674 "ml_util.m"
}

#line 674 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(
#line 674 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 674 "ml_util.m"
{
#line 674 "ml_util.m"
  {
#line 674 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 674 "ml_util.m"
    if (MR_builtin_setjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0) == 0)
#line 674 "ml_util.m"
      {
#line 674 "ml_util.m"
        {
#line 674 "ml_util.m"
          MR_Word ml_backend__ml_util__Body_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 3)));
#line 674 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_11;
#line 674 "ml_util.m"
          MR_Word ml_backend__ml_util__V_23_23;
#line 675 "ml_util.m"
          MR_Word ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 0)));
#line 675 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 1)));
#line 675 "ml_util.m"
          MR_Word ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 2)));
#line 676 "ml_util.m"
          MR_Word ml_backend__ml_util__V_9_9;
#line 676 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10;
#line 676 "ml_util.m"
          MR_Word ml_backend__ml_util__V_12_12;
#line 676 "ml_util.m"
          MR_Word ml_backend__ml_util__V_13_13;

#line 676 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_8)) == (MR_mktag((MR_Integer) 2)));
#line 676 "ml_util.m"
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 676 "ml_util.m"
            {
#line 676 "ml_util.m"
              {
#line 676 "ml_util.m"
                ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 0)));
#line 676 "ml_util.m"
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 1)));
#line 676 "ml_util.m"
                ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 2)));
#line 676 "ml_util.m"
                ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 3)));
#line 676 "ml_util.m"
                ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 4)));
#line 676 "ml_util.m"
              }
#line 674 "ml_util.m"
              {
#line 676 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 676 "ml_util.m"
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 676 "ml_util.m"
                  {
#line 676 "ml_util.m"
                    ml_backend__ml_util__FunctionBody_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_23_23), (MR_Integer) 1);
#line 674 "ml_util.m"
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
#line 674 "ml_util.m"
                    }
#line 676 "ml_util.m"
                  }
#line 674 "ml_util.m"
              }
#line 676 "ml_util.m"
            }
#line 674 "ml_util.m"
        }
#line 674 "ml_util.m"
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_FALSE;
#line 674 "ml_util.m"
      }
#line 674 "ml_util.m"
    else
#line 674 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_TRUE;
#line 674 "ml_util.m"
  }
#line 674 "ml_util.m"
}

#line 83 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0(
#line 83 "ml_util.m"
  MR_Word ml_backend__ml_util__NativeTargetLang_3,
#line 83 "ml_util.m"
  MR_Word ml_backend__ml_util__Defn_4)
#line 83 "ml_util.m"
{
#line 83 "ml_util.m"
  {
#line 83 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s ml_backend__ml_util__env;

#line 83 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3 = ml_backend__ml_util__NativeTargetLang_3;
#line 83 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4 = ml_backend__ml_util__Defn_4;
#line 674 "ml_util.m"
    {
#line 674 "ml_util.m"
      ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(&ml_backend__ml_util__env);
    }
#line 674 "ml_util.m"
    return (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
#line 83 "ml_util.m"
  }
#line 83 "ml_util.m"
}

#line 662 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
#line 662 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 662 "ml_util.m"
{
#line 662 "ml_util.m"
  {
#line 662 "ml_util.m"
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 662 "ml_util.m"
    *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12));
#line 662 "ml_util.m"
    {
#line 662 "ml_util.m"
      ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr);
    }
#line 662 "ml_util.m"
  }
#line 662 "ml_util.m"
}

#line 662 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
#line 662 "ml_util.m"
  MR_Box ml_backend__ml_util__closure_arg,
#line 662 "ml_util.m"
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
#line 662 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 662 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 662 "ml_util.m"
{
#line 662 "ml_util.m"
  {
#line 662 "ml_util.m"
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s ml_backend__ml_util__env;

#line 662 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1 = ml_backend__ml_util__wrapper_arg_1;
#line 662 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont = ml_backend__ml_util__cont;
#line 662 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 662 "ml_util.m"
    {
#line 662 "ml_util.m"
      MR_Box ml_backend__ml_util__closure = ml_backend__ml_util__closure_arg;

#line 662 "ml_util.m"
      {
#line 662 "ml_util.m"
        ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__662__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__closure, (MR_Integer) 3))), &(ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12, ml_backend__ml_util__has_foreign_languages_2_p_0_1, &ml_backend__ml_util__env);
      }
#line 662 "ml_util.m"
    }
#line 662 "ml_util.m"
  }
#line 662 "ml_util.m"
}

#line 65 "ml_util.m"
void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0(
#line 65 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 65 "ml_util.m"
  MR_Word * ml_backend__ml_util__Langs_4)
#line 65 "ml_util.m"
{
#line 661 "ml_util.m"
  {
#line 661 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 661 "ml_util.m"
    MR_Word ml_backend__ml_util__GetTargetCode_5;

#line 662 "ml_util.m"
    {
#line 662 "ml_util.m"
      ml_backend__ml_util__GetTargetCode_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 662 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 0) = ((MR_Box) (&ml_backend__ml_util_scalar_common_2[0]));
#line 662 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 1) = ((MR_Box) (ml_backend__ml_util__has_foreign_languages_2_p_0_2));
#line 662 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 662 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 3) = ((MR_Box) (ml_backend__ml_util__Statement_3));
#line 662 "ml_util.m"
    }
#line 667 "ml_util.m"
    {
#line 667 "ml_util.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ml_backend__ml_util__GetTargetCode_5, ml_backend__ml_util__Langs_4);
    }
#line 661 "ml_util.m"
  }
#line 65 "ml_util.m"
}

#line 63 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__statement_contains_var_2_f_0(
#line 63 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_4,
#line 63 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 63 "ml_util.m"
{
#line 352 "ml_util.m"
  {
#line 352 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 352 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;
#line 352 "ml_util.m"
    MR_Word ml_backend__ml_util__Stmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 0)));
#line 353 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 1)));

#line 354 "ml_util.m"
    {
#line 354 "ml_util.m"
      ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_7, ml_backend__ml_util__DataName_5);
    }
#line 352 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 352 "ml_util.m"
  }
#line 63 "ml_util.m"
}

#line 58 "ml_util.m"
void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0(
#line 58 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_3,
#line 58 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 58 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 58 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 58 "ml_util.m"
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
#line 274 "ml_util.m"
        switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) {
#line 274 "ml_util.m"
          case (MR_Integer) 0:
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
              }
#line 274 "ml_util.m"
            }
#line 274 "ml_util.m"
            break;
#line 274 "ml_util.m"
          case (MR_Integer) 1:
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
            break;
#line 274 "ml_util.m"
          case (MR_Integer) 2:
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
              }
#line 280 "ml_util.m"
            }
#line 274 "ml_util.m"
            break;
#line 274 "ml_util.m"
          case (MR_Integer) 3:
#line 274 "ml_util.m"
#line 274 "ml_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)))) {
#line 274 "ml_util.m"
              case (MR_Integer) 0:
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
                  }
#line 285 "ml_util.m"
                }
#line 274 "ml_util.m"
                break;
#line 274 "ml_util.m"
              case (MR_Integer) 6:
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
                break;
#line 274 "ml_util.m"
            }
#line 274 "ml_util.m"
            break;
#line 274 "ml_util.m"
        }
#line 274 "ml_util.m"
      }
#line 274 "ml_util.m"
      break;
#line 274 "ml_util.m"
    }
#line 58 "ml_util.m"
}

#line 56 "ml_util.m"
void MR_CALL 
ml_backend__ml_util__statement_contains_statement_2_p_0(
#line 56 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_1,
#line 56 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
#line 56 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 56 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 56 "ml_util.m"
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
      }
#line 268 "ml_util.m"
    }
#line 267 "ml_util.m"
  }
#line 56 "ml_util.m"
}

#line 46 "ml_util.m"
MR_bool MR_CALL 
ml_backend__ml_util__call_is_recursive_2_p_0(
#line 46 "ml_util.m"
  MR_Word ml_backend__ml_util__Name_3,
#line 46 "ml_util.m"
  MR_Word ml_backend__ml_util__Call_4)
#line 46 "ml_util.m"
{
#line 220 "ml_util.m"
  {
#line 220 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Call_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__TypeInfo_33_33;
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__FuncRval_6;
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__CodeAddr_11;
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__QualifiedProcLabel_12;
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__MaybeSeqNum_14;
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__ProcLabel_16;
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__PredLabel_17;
#line 220 "ml_util.m"
    MR_Integer ml_backend__ml_util__ProcId_18;
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__ModuleName_19;
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__FuncName_20;
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__V_22_22;
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__V_23_23;
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__V_24_24;
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__V_27_27;
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__V_28_28;
#line 220 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_29_29;
#line 220 "ml_util.m"
    MR_Word ml_backend__ml_util__V_30_30;
#line 221 "ml_util.m"
    MR_Word ml_backend__ml_util___Signature_5;
#line 221 "ml_util.m"
    MR_Word ml_backend__ml_util___MaybeObject_7;
#line 221 "ml_util.m"
    MR_Word ml_backend__ml_util___CallArgs_8;
#line 221 "ml_util.m"
    MR_Word ml_backend__ml_util___Results_9;
#line 221 "ml_util.m"
    MR_Word ml_backend__ml_util___CallKind_10;
#line 240 "ml_util.m"
    MR_Word ml_backend__ml_util__V_21_21;

#line 221 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 221 "ml_util.m"
      {
#line 221 "ml_util.m"
        ml_backend__ml_util___Signature_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 1)));
#line 221 "ml_util.m"
        ml_backend__ml_util__FuncRval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 2)));
#line 221 "ml_util.m"
        ml_backend__ml_util___MaybeObject_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 3)));
#line 221 "ml_util.m"
        ml_backend__ml_util___CallArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 4)));
#line 221 "ml_util.m"
        ml_backend__ml_util___Results_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 5)));
#line 221 "ml_util.m"
        ml_backend__ml_util___CallKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 6)));
#line 225 "ml_util.m"
        ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__FuncRval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__FuncRval_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 225 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 225 "ml_util.m"
          {
#line 225 "ml_util.m"
            ml_backend__ml_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__FuncRval_6, (MR_Integer) 1)));
#line 225 "ml_util.m"
            ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 225 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 225 "ml_util.m"
              {
#line 225 "ml_util.m"
                ml_backend__ml_util__CodeAddr_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_22_22, (MR_Integer) 1)));
#line 229 "ml_util.m"
                if (((MR_tag((MR_Word) ml_backend__ml_util__CodeAddr_11)) == (MR_mktag((MR_Integer) 1))))
#line 230 "ml_util.m"
                  {
#line 230 "ml_util.m"
                    MR_Integer ml_backend__ml_util__SeqNum_15;
#line 230 "ml_util.m"
                    MR_Word ml_backend__ml_util___Sig_25;

#line 230 "ml_util.m"
                    ml_backend__ml_util__QualifiedProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 0)));
#line 230 "ml_util.m"
                    ml_backend__ml_util__SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 1)));
#line 230 "ml_util.m"
                    ml_backend__ml_util___Sig_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 2)));
#line 231 "ml_util.m"
                    {
#line 231 "ml_util.m"
                      ml_backend__ml_util__MaybeSeqNum_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 231 "ml_util.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_util__MaybeSeqNum_14, 0) = ((MR_Box) (ml_backend__ml_util__SeqNum_15));
#line 231 "ml_util.m"
                    }
#line 230 "ml_util.m"
                  }
#line 229 "ml_util.m"
                else
#line 227 "ml_util.m"
                  {
#line 227 "ml_util.m"
                    MR_Word ml_backend__ml_util___Sig_13;

#line 227 "ml_util.m"
                    ml_backend__ml_util__QualifiedProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 0)));
#line 227 "ml_util.m"
                    ml_backend__ml_util___Sig_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 1)));
#line 228 "ml_util.m"
                    ml_backend__ml_util__MaybeSeqNum_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 227 "ml_util.m"
                  }
#line 234 "ml_util.m"
                ml_backend__ml_util__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 0)));
#line 234 "ml_util.m"
                ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 1)));
#line 234 "ml_util.m"
                ml_backend__ml_util__ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 2)));
#line 234 "ml_util.m"
                ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_23_23 == (MR_Integer) 0);
#line 220 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 220 "ml_util.m"
                  {
#line 233 "ml_util.m"
                    ml_backend__ml_util__PredLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_16, (MR_Integer) 0)));
#line 233 "ml_util.m"
                    ml_backend__ml_util__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_16, (MR_Integer) 1)));
#line 237 "ml_util.m"
                    ml_backend__ml_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 237 "ml_util.m"
                    ml_backend__ml_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 237 "ml_util.m"
                    ml_backend__ml_util__FuncName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 2)));
#line 237 "ml_util.m"
                    {
#line 237 "ml_util.m"
                      ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_19, ml_backend__ml_util__V_27_27);
                    }
#line 220 "ml_util.m"
                    if (ml_backend__ml_util__succeeded)
#line 220 "ml_util.m"
                      {
#line 237 "ml_util.m"
                        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_24_24 == (MR_Integer) 0);
#line 220 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 220 "ml_util.m"
                          {
#line 240 "ml_util.m"
                            ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_20)) == (MR_mktag((MR_Integer) 2)));
#line 240 "ml_util.m"
                            if (ml_backend__ml_util__succeeded)
#line 240 "ml_util.m"
                              {
#line 240 "ml_util.m"
                                ml_backend__ml_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 0)));
#line 240 "ml_util.m"
                                ml_backend__ml_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 1)));
#line 240 "ml_util.m"
                                ml_backend__ml_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 2)));
#line 240 "ml_util.m"
                                ml_backend__ml_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 3)));
#line 240 "ml_util.m"
                                {
#line 240 "ml_util.m"
                                  ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0(ml_backend__ml_util__PredLabel_17, ml_backend__ml_util__V_28_28);
                                }
#line 220 "ml_util.m"
                                if (ml_backend__ml_util__succeeded)
#line 220 "ml_util.m"
                                  {
#line 240 "ml_util.m"
                                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__ProcId_18 == ml_backend__ml_util__V_29_29);
#line 220 "ml_util.m"
                                    if (ml_backend__ml_util__succeeded)
#line 220 "ml_util.m"
                                      {
#line 5875 "ml_backend.ml_util.c"
                                        ml_backend__ml_util__TypeInfo_33_33 = (MR_Word) &ml_backend__ml_util_scalar_common_1[0];
#line 240 "ml_util.m"
                                        {
#line 240 "ml_util.m"
                                          ml_backend__ml_util__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_util__TypeInfo_33_33, ((MR_Box) (ml_backend__ml_util__MaybeSeqNum_14)), ((MR_Box) (ml_backend__ml_util__V_30_30)));
                                        }
#line 220 "ml_util.m"
                                      }
#line 220 "ml_util.m"
                                  }
#line 240 "ml_util.m"
                              }
#line 220 "ml_util.m"
                          }
#line 220 "ml_util.m"
                      }
#line 220 "ml_util.m"
                  }
#line 225 "ml_util.m"
              }
#line 225 "ml_util.m"
          }
#line 221 "ml_util.m"
      }
#line 220 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 220 "ml_util.m"
  }
#line 46 "ml_util.m"
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
#line 207 "ml_util.m"
  {
#line 207 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Call_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 207 "ml_util.m"
    MR_Word ml_backend__ml_util__MaybeObject_7;
#line 207 "ml_util.m"
    MR_Word ml_backend__ml_util__CallKind_10;
#line 208 "ml_util.m"
    MR_Word ml_backend__ml_util___Signature_5;
#line 208 "ml_util.m"
    MR_Word ml_backend__ml_util___FuncRval_6;
#line 208 "ml_util.m"
    MR_Word ml_backend__ml_util___CallArgs_8;
#line 208 "ml_util.m"
    MR_Word ml_backend__ml_util___Results_9;

#line 208 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 208 "ml_util.m"
      {
#line 208 "ml_util.m"
        ml_backend__ml_util___Signature_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 1)));
#line 208 "ml_util.m"
        ml_backend__ml_util___FuncRval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 2)));
#line 208 "ml_util.m"
        ml_backend__ml_util__MaybeObject_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 3)));
#line 208 "ml_util.m"
        ml_backend__ml_util___CallArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 4)));
#line 208 "ml_util.m"
        ml_backend__ml_util___Results_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 5)));
#line 208 "ml_util.m"
        ml_backend__ml_util__CallKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 6)));
#line 211 "ml_util.m"
#line 211 "ml_util.m"
        switch (ml_backend__ml_util__CallKind_10) {
#line 211 "ml_util.m"
          default:
#line 211 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_FALSE;
#line 211 "ml_util.m"
            break;
#line 211 "ml_util.m"
          case (MR_Integer) 0:
#line 211 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_TRUE;
#line 211 "ml_util.m"
            break;
#line 211 "ml_util.m"
          case (MR_Integer) 1:
#line 211 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_TRUE;
#line 211 "ml_util.m"
            break;
#line 211 "ml_util.m"
        }
#line 207 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 207 "ml_util.m"
          {
#line 216 "ml_util.m"
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__MaybeObject_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 218 "ml_util.m"
              {
#line 218 "ml_util.m"
                ml_backend__ml_util__succeeded = ml_backend__ml_util__call_is_recursive_2_p_0(ml_backend__ml_util__Name_3, ml_backend__ml_util__Call_4);
              }
#line 207 "ml_util.m"
          }
#line 208 "ml_util.m"
      }
#line 207 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 207 "ml_util.m"
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
#line 198 "ml_util.m"
  while (MR_TRUE)
#line 198 "ml_util.m"
    {
#line 198 "ml_util.m"
      /* tailcall optimized into a loop */
#line 198 "ml_util.m"
      {
#line 198 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 198 "ml_util.m"
        MR_Word ml_backend__ml_util__Defn_2;
#line 198 "ml_util.m"
        MR_Word ml_backend__ml_util__Defns_3;

#line 198 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 198 "ml_util.m"
          {
#line 198 "ml_util.m"
            ml_backend__ml_util__Defn_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 198 "ml_util.m"
            ml_backend__ml_util__Defns_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 200 "ml_util.m"
            {
#line 200 "ml_util.m"
              MR_Word ml_backend__ml_util__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 200 "ml_util.m"
              MR_Word ml_backend__ml_util__FuncName_8;
#line 200 "ml_util.m"
              MR_Word ml_backend__ml_util__V_15_15;
#line 200 "ml_util.m"
              MR_String ml_backend__ml_util__V_16_16;
#line 200 "ml_util.m"
              MR_Integer ml_backend__ml_util__V_17_17;
#line 200 "ml_util.m"
              MR_Word ml_backend__ml_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 200 "ml_util.m"
              MR_Word ml_backend__ml_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 200 "ml_util.m"
              MR_Word ml_backend__ml_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 201 "ml_util.m"
              MR_Integer ml_backend__ml_util__V_9_9;
#line 201 "ml_util.m"
              MR_Word ml_backend__ml_util__V_10_10;
#line 201 "ml_util.m"
              MR_Word ml_backend__ml_util__V_11_11;
#line 202 "ml_util.m"
              MR_Word ml_backend__ml_util__V_12_12;
#line 202 "ml_util.m"
              MR_Word ml_backend__ml_util__V_13_13;
#line 202 "ml_util.m"
              MR_Word ml_backend__ml_util__V_14_14;

#line 201 "ml_util.m"
              ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_4)) == (MR_mktag((MR_Integer) 2)));
#line 201 "ml_util.m"
              if (ml_backend__ml_util__succeeded)
#line 201 "ml_util.m"
                {
#line 201 "ml_util.m"
                  ml_backend__ml_util__FuncName_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 0)));
#line 201 "ml_util.m"
                  ml_backend__ml_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 1)));
#line 201 "ml_util.m"
                  ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 2)));
#line 201 "ml_util.m"
                  ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 3)));
#line 202 "ml_util.m"
                  ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_8)) == (MR_mktag((MR_Integer) 0)));
#line 202 "ml_util.m"
                  if (ml_backend__ml_util__succeeded)
#line 202 "ml_util.m"
                    {
#line 202 "ml_util.m"
                      ml_backend__ml_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 0)));
#line 202 "ml_util.m"
                      ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 1)));
#line 202 "ml_util.m"
                      ml_backend__ml_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 2)));
#line 202 "ml_util.m"
                      ml_backend__ml_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 3)));
#line 202 "ml_util.m"
                      ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 4)));
#line 202 "ml_util.m"
                      ml_backend__ml_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 5)));
#line 202 "ml_util.m"
                      ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_15_15 == (MR_Integer) 0);
#line 200 "ml_util.m"
                      if (ml_backend__ml_util__succeeded)
#line 200 "ml_util.m"
                        {
#line 202 "ml_util.m"
                          ml_backend__ml_util__succeeded = (strcmp(ml_backend__ml_util__V_16_16, (MR_String) "main") == 0);
#line 200 "ml_util.m"
                          if (ml_backend__ml_util__succeeded)
#line 202 "ml_util.m"
                            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_17_17 == (MR_Integer) 2);
#line 200 "ml_util.m"
                        }
#line 202 "ml_util.m"
                    }
#line 201 "ml_util.m"
                }
#line 200 "ml_util.m"
            }
#line 203 "ml_util.m"
            if (!(ml_backend__ml_util__succeeded))
#line 204 "ml_util.m"
              {
#line 204 "ml_util.m"
                /* direct tailcall eliminated */
#line 204 "ml_util.m"
                {
#line 204 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Defns_3;

#line 204 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 204 "ml_util.m"
                }
#line 204 "ml_util.m"
                continue;
#line 204 "ml_util.m"
              }
#line 198 "ml_util.m"
          }
#line 198 "ml_util.m"
        return ml_backend__ml_util__succeeded;
#line 198 "ml_util.m"
      }
#line 198 "ml_util.m"
      break;
#line 198 "ml_util.m"
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
