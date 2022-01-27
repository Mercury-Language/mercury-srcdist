/*
** Automatically generated from `ml_util.m'
** by the Mercury compiler,
** version 2015-10-27
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



#line 651 "ml_util.m"
struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0_s {
#line 651 "ml_util.m"
  MR_Word * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__LambdaHeadVar__1_12;
#line 651 "ml_util.m"
  MR_Cont ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__cont;
#line 651 "ml_util.m"
  void * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__cont_env_ptr;
#line 651 "ml_util.m"
  MR_bool ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__succeeded;
#line 651 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__SubStatement_7;
#line 651 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__V_13_13;
#line 651 "ml_util.m"
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__V_14_14;
#line 651 "ml_util.m"
};

#line 295 "ml_util.m"
struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s {
#line 295 "ml_util.m"
  MR_Word * ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4;
#line 295 "ml_util.m"
  MR_Cont ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont;
#line 295 "ml_util.m"
  void * ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr;
#line 298 "ml_util.m"
  MR_Word ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5;
#line 298 "ml_util.m"
  MR_Word ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8;
#line 299 "ml_util.m"
  MR_Box ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5;
#line 295 "ml_util.m"
};

#line 242 "ml_util.m"
struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s {
#line 242 "ml_util.m"
  MR_Word * ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4;
#line 242 "ml_util.m"
  MR_Cont ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont;
#line 242 "ml_util.m"
  void * ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr;
#line 245 "ml_util.m"
  MR_Word ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5;
#line 246 "ml_util.m"
  MR_Box ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5;
#line 242 "ml_util.m"
};

#line 86 "ml_util.m"
struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s {
#line 86 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3;
#line 86 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4;
#line 675 "ml_util.m"
  MR_bool ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
#line 675 "ml_util.m"
  jmp_buf ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0;
#line 675 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14;
#line 675 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15;
#line 675 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21;
#line 675 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22;
#line 86 "ml_util.m"
};

#line 78 "ml_util.m"
struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s {
#line 78 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3;
#line 78 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4;
#line 663 "ml_util.m"
  MR_bool ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
#line 663 "ml_util.m"
  jmp_buf ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0;
#line 663 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14;
#line 663 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15;
#line 663 "ml_util.m"
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26;
#line 78 "ml_util.m"
};

#line 651 "ml_util.m"
struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s {
#line 651 "ml_util.m"
  MR_Box * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1;
#line 651 "ml_util.m"
  MR_Cont ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont;
#line 651 "ml_util.m"
  void * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr;
#line 651 "ml_util.m"
  MR_Word ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12;
#line 651 "ml_util.m"
};


#line 651 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_1(
#line 651 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 651 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0(
#line 651 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 651 "ml_util.m"
  MR_Word * ml_backend__ml_util__LambdaHeadVar__1_12,
#line 651 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 651 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 798 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
#line 798 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 798 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 756 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
#line 756 "ml_util.m"
  MR_Word ml_backend__ml_util__Body_4,
#line 756 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 731 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__defn_body_contains_var_2_f_0(
#line 731 "ml_util.m"
  MR_Word ml_backend__ml_util__DefnBody_4,
#line 731 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 620 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
#line 620 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 620 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 573 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
#line 573 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 573 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 476 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__default_contains_var_2_f_0(
#line 476 "ml_util.m"
  MR_Word ml_backend__ml_util__Default_4,
#line 476 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 462 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
#line 462 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 462 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 345 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__stmt_contains_var_2_f_0(
#line 345 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_4,
#line 345 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5);

#line 335 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
#line 335 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 335 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_2);

#line 322 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__statements_contains_var_2_f_0(
#line 322 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 322 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2);

#line 303 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__default_contains_statement_2_p_0(
#line 303 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 303 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_2,
#line 303 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 303 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 299 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_2(
#line 299 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 298 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_1(
#line 298 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 295 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0(
#line 295 "ml_util.m"
  MR_Word ml_backend__ml_util__Cases_3,
#line 295 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 295 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 295 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 249 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(
#line 249 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 249 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
#line 249 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 249 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 246 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_2(
#line 246 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 245 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_1(
#line 245 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 242 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0(
#line 242 "ml_util.m"
  MR_Word ml_backend__ml_util__Statements_3,
#line 242 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 242 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 242 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr);

#line 675 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(
#line 675 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 675 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(
#line 675 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 675 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(
#line 675 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 663 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(
#line 663 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 663 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(
#line 663 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 663 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(
#line 663 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 651 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
#line 651 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg);

#line 651 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
#line 651 "ml_util.m"
  MR_Box ml_backend__ml_util__closure_arg,
#line 651 "ml_util.m"
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
#line 651 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 651 "ml_util.m"
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



#line 651 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_1(
#line 651 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 651 "ml_util.m"
{
#line 651 "ml_util.m"
  {
#line 651 "ml_util.m"
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 651 "ml_util.m"
    {
#line 653 "ml_util.m"
      MR_Word ml_backend__ml_util__V_11_11;
#line 654 "ml_util.m"
      MR_Word ml_backend__ml_util__V_8_8;
#line 654 "ml_util.m"
      MR_Word ml_backend__ml_util__V_9_9;
#line 654 "ml_util.m"
      MR_String ml_backend__ml_util__V_10_10;

#line 653 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 0)));
#line 653 "ml_util.m"
      ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 1)));
#line 653 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__V_13_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__V_13_13, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 653 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__succeeded)
#line 653 "ml_util.m"
        {
#line 653 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__V_13_13, (MR_Integer) 1)));
#line 651 "ml_util.m"
          {
#line 654 "ml_util.m"
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 654 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__succeeded)
#line 654 "ml_util.m"
              {
#line 654 "ml_util.m"
                {
#line 654 "ml_util.m"
                  *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__LambdaHeadVar__1_12) = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__V_14_14, (MR_Integer) 1)));
#line 654 "ml_util.m"
                  ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__V_14_14, (MR_Integer) 2)));
#line 654 "ml_util.m"
                  ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__V_14_14, (MR_Integer) 3)));
#line 654 "ml_util.m"
                  ml_backend__ml_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__V_14_14, (MR_Integer) 4)));
#line 654 "ml_util.m"
                }
#line 654 "ml_util.m"
                {
#line 654 "ml_util.m"
                  ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__cont_env_ptr);
#line 654 "ml_util.m"
                  return;
                }
#line 654 "ml_util.m"
              }
#line 651 "ml_util.m"
          }
#line 653 "ml_util.m"
        }
#line 651 "ml_util.m"
    }
#line 651 "ml_util.m"
  }
#line 651 "ml_util.m"
}

#line 651 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0(
#line 651 "ml_util.m"
  MR_Word ml_backend__ml_util__Statement_3,
#line 651 "ml_util.m"
  MR_Word * ml_backend__ml_util__LambdaHeadVar__1_12,
#line 651 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 651 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 651 "ml_util.m"
{
#line 651 "ml_util.m"
  {
#line 651 "ml_util.m"
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0_s ml_backend__ml_util__env;

#line 651 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__LambdaHeadVar__1_12 = ml_backend__ml_util__LambdaHeadVar__1_12;
#line 651 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__cont = ml_backend__ml_util__cont;
#line 651 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 256 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__SubStatement_7 = ml_backend__ml_util__Statement_3;
#line 256 "ml_util.m"
    {
#line 256 "ml_util.m"
      ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_1(&ml_backend__ml_util__env);
    }
#line 257 "ml_util.m"
    {
#line 257 "ml_util.m"
      MR_Word ml_backend__ml_util__Stmt_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_3, (MR_Integer) 0)));
#line 258 "ml_util.m"
      MR_Word ml_backend__ml_util___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_3, (MR_Integer) 1)));

#line 259 "ml_util.m"
      {
#line 259 "ml_util.m"
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_20, &(ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_env_0__SubStatement_7, ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0_1, &ml_backend__ml_util__env);
      }
#line 257 "ml_util.m"
    }
#line 651 "ml_util.m"
  }
#line 651 "ml_util.m"
}

#line 798 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
#line 798 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 798 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 798 "ml_util.m"
{
#line 800 "ml_util.m"
  while (MR_TRUE)
#line 800 "ml_util.m"
    {
#line 800 "ml_util.m"
      /* tailcall optimized into a loop */
#line 800 "ml_util.m"
      {
#line 800 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 800 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 800 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 800 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 800 "ml_util.m"
        else
#line 802 "ml_util.m"
          {
#line 802 "ml_util.m"
            MR_Word ml_backend__ml_util__Initializer_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 802 "ml_util.m"
            MR_Word ml_backend__ml_util__Initializers_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 802 "ml_util.m"
            MR_Word ml_backend__ml_util__InitializerContainsVar_9;

#line 803 "ml_util.m"
            {
#line 803 "ml_util.m"
              ml_backend__ml_util__InitializerContainsVar_9 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 807 "ml_util.m"
#line 807 "ml_util.m"
            switch (ml_backend__ml_util__InitializerContainsVar_9) {
#line 807 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 807 "ml_util.m"
              case (MR_Integer) 0:
#line 809 "ml_util.m"
                {
#line 809 "ml_util.m"
                  /* direct tailcall eliminated */
#line 809 "ml_util.m"
                  {
#line 809 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Initializers_6;

#line 809 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 809 "ml_util.m"
                  }
#line 809 "ml_util.m"
                  continue;
#line 809 "ml_util.m"
                }
#line 807 "ml_util.m"
                break;
#line 807 "ml_util.m"
              case (MR_Integer) 1:
#line 806 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 807 "ml_util.m"
                break;
#line 807 "ml_util.m"
            }
#line 802 "ml_util.m"
          }
#line 800 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 800 "ml_util.m"
      }
#line 800 "ml_util.m"
      break;
#line 800 "ml_util.m"
    }
#line 798 "ml_util.m"
}

#line 756 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
#line 756 "ml_util.m"
  MR_Word ml_backend__ml_util__Body_4,
#line 756 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 756 "ml_util.m"
{
#line 760 "ml_util.m"
  {
#line 760 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 760 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 760 "ml_util.m"
    if ((ml_backend__ml_util__Body_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 761 "ml_util.m"
      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 760 "ml_util.m"
    else
#line 763 "ml_util.m"
      {
#line 763 "ml_util.m"
        MR_Word ml_backend__ml_util__Statement_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Body_4), (MR_Integer) 1);
#line 763 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 0)));
#line 342 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 1)));

#line 343 "ml_util.m"
        {
#line 343 "ml_util.m"
          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_5);
        }
#line 763 "ml_util.m"
      }
#line 760 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 760 "ml_util.m"
  }
#line 756 "ml_util.m"
}

#line 731 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__defn_body_contains_var_2_f_0(
#line 731 "ml_util.m"
  MR_Word ml_backend__ml_util__DefnBody_4,
#line 731 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 731 "ml_util.m"
{
#line 735 "ml_util.m"
  {
#line 735 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 735 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 735 "ml_util.m"
#line 735 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__DefnBody_4)) {
#line 735 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 735 "ml_util.m"
      case (MR_Integer) 0:
#line 743 "ml_util.m"
        {
#line 743 "ml_util.m"
          MR_Word ml_backend__ml_util__ClassDefn_15 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__DefnBody_4), (MR_Integer) 0);
#line 743 "ml_util.m"
          MR_Word ml_backend__ml_util__CtorDefns_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 5)));
#line 743 "ml_util.m"
          MR_Word ml_backend__ml_util__FieldDefns_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 6)));
#line 743 "ml_util.m"
          MR_Word ml_backend__ml_util__FieldDefnsContainVar_23;
#line 744 "ml_util.m"
          MR_Word ml_backend__ml_util___Kind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 0)));
#line 744 "ml_util.m"
          MR_Word ml_backend__ml_util___Imports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 1)));
#line 744 "ml_util.m"
          MR_Word ml_backend__ml_util___Inherits_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 2)));
#line 744 "ml_util.m"
          MR_Word ml_backend__ml_util___Implements_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 3)));
#line 744 "ml_util.m"
          MR_Word ml_backend__ml_util___TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_15, (MR_Integer) 4)));

#line 746 "ml_util.m"
          {
#line 746 "ml_util.m"
            ml_backend__ml_util__FieldDefnsContainVar_23 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__FieldDefns_22, ml_backend__ml_util__DataName_5);
          }
#line 750 "ml_util.m"
#line 750 "ml_util.m"
          switch (ml_backend__ml_util__FieldDefnsContainVar_23) {
#line 750 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 750 "ml_util.m"
            case (MR_Integer) 0:
#line 752 "ml_util.m"
              {
#line 752 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__CtorDefns_21, ml_backend__ml_util__DataName_5);
              }
#line 750 "ml_util.m"
              break;
#line 750 "ml_util.m"
            case (MR_Integer) 1:
#line 749 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 750 "ml_util.m"
              break;
#line 750 "ml_util.m"
          }
#line 743 "ml_util.m"
        }
#line 735 "ml_util.m"
        break;
#line 735 "ml_util.m"
      case (MR_Integer) 1:
#line 735 "ml_util.m"
        {
#line 735 "ml_util.m"
          MR_Word ml_backend__ml_util__Initializer_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 1)));
#line 735 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 0)));
#line 735 "ml_util.m"
          MR_Word ml_backend__ml_util___GCStatement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 2)));

#line 737 "ml_util.m"
          {
#line 737 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_8, ml_backend__ml_util__DataName_5);
          }
#line 735 "ml_util.m"
        }
#line 735 "ml_util.m"
        break;
#line 735 "ml_util.m"
      case (MR_Integer) 2:
#line 740 "ml_util.m"
        {
#line 740 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 2)));
#line 739 "ml_util.m"
          MR_Word ml_backend__ml_util___PredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 0)));
#line 739 "ml_util.m"
          MR_Word ml_backend__ml_util___Params_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 1)));
#line 739 "ml_util.m"
          MR_Word ml_backend__ml_util___Attrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 3)));
#line 739 "ml_util.m"
          MR_Word ml_backend__ml_util___EnvVarNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 4)));

#line 741 "ml_util.m"
          {
#line 741 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__function_body_contains_var_2_f_0(ml_backend__ml_util__FunctionBody_12, ml_backend__ml_util__DataName_5);
          }
#line 740 "ml_util.m"
        }
#line 735 "ml_util.m"
        break;
#line 735 "ml_util.m"
    }
#line 735 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 735 "ml_util.m"
  }
#line 731 "ml_util.m"
}

#line 620 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
#line 620 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 620 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 620 "ml_util.m"
{
#line 622 "ml_util.m"
  while (MR_TRUE)
#line 622 "ml_util.m"
    {
#line 622 "ml_util.m"
      /* tailcall optimized into a loop */
#line 622 "ml_util.m"
      {
#line 622 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 622 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 622 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 622 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 622 "ml_util.m"
        else
#line 624 "ml_util.m"
          {
#line 624 "ml_util.m"
            MR_Word ml_backend__ml_util__OutlineArg_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 624 "ml_util.m"
            MR_Word ml_backend__ml_util__OutlineArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));

#line 964 "ml_backend.ml_util.c"
#line 965 "ml_backend.ml_util.c"
            switch (MR_tag((MR_Word) ml_backend__ml_util__OutlineArg_5)) {
#line 967 "ml_backend.ml_util.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 969 "ml_backend.ml_util.c"
              case (MR_Integer) 0:
#line 631 "ml_util.m"
                {
#line 631 "ml_util.m"
                  /* direct tailcall eliminated */
#line 631 "ml_util.m"
                  {
#line 631 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

#line 631 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 631 "ml_util.m"
                  }
#line 631 "ml_util.m"
                  continue;
#line 631 "ml_util.m"
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
#line 638 "ml_util.m"
                  MR_Word ml_backend__ml_util___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 0)));
#line 638 "ml_util.m"
                  MR_String ml_backend__ml_util___Str_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 1)));

#line 639 "ml_util.m"
                  {
#line 639 "ml_util.m"
                    ml_backend__ml_util__OutlineArgContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_15, ml_backend__ml_util__HeadVar__2_2);
                  }
#line 629 "ml_util.m"
#line 629 "ml_util.m"
                  switch (ml_backend__ml_util__OutlineArgContainsVar_9) {
#line 629 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 629 "ml_util.m"
                    case (MR_Integer) 0:
#line 631 "ml_util.m"
                      {
#line 631 "ml_util.m"
                        /* direct tailcall eliminated */
#line 631 "ml_util.m"
                        {
#line 631 "ml_util.m"
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

#line 631 "ml_util.m"
                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 631 "ml_util.m"
                        }
#line 631 "ml_util.m"
                        continue;
#line 631 "ml_util.m"
                      }
#line 629 "ml_util.m"
                      break;
#line 629 "ml_util.m"
                    case (MR_Integer) 1:
#line 628 "ml_util.m"
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 629 "ml_util.m"
                      break;
#line 629 "ml_util.m"
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
#line 641 "ml_util.m"
                  MR_Word ml_backend__ml_util___Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 0)));
#line 641 "ml_util.m"
                  MR_String ml_backend__ml_util___Str_18 = ((MR_String) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__OutlineArg_5, (MR_Integer) 1)));

#line 642 "ml_util.m"
                  {
#line 642 "ml_util.m"
                    ml_backend__ml_util__OutlineArgContainsVar_21 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_16, ml_backend__ml_util__HeadVar__2_2);
                  }
#line 629 "ml_util.m"
#line 629 "ml_util.m"
                  switch (ml_backend__ml_util__OutlineArgContainsVar_21) {
#line 629 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 629 "ml_util.m"
                    case (MR_Integer) 0:
#line 631 "ml_util.m"
                      {
#line 631 "ml_util.m"
                        /* direct tailcall eliminated */
#line 631 "ml_util.m"
                        {
#line 631 "ml_util.m"
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

#line 631 "ml_util.m"
                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 631 "ml_util.m"
                        }
#line 631 "ml_util.m"
                        continue;
#line 631 "ml_util.m"
                      }
#line 629 "ml_util.m"
                      break;
#line 629 "ml_util.m"
                    case (MR_Integer) 1:
#line 628 "ml_util.m"
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 629 "ml_util.m"
                      break;
#line 629 "ml_util.m"
                  }
#line 1098 "ml_backend.ml_util.c"
                }
#line 1100 "ml_backend.ml_util.c"
                break;
#line 1102 "ml_backend.ml_util.c"
            }
#line 624 "ml_util.m"
          }
#line 622 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 622 "ml_util.m"
      }
#line 622 "ml_util.m"
      break;
#line 622 "ml_util.m"
    }
#line 620 "ml_util.m"
}

#line 573 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
#line 573 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 573 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 573 "ml_util.m"
{
#line 576 "ml_util.m"
  while (MR_TRUE)
#line 576 "ml_util.m"
    {
#line 576 "ml_util.m"
      /* tailcall optimized into a loop */
#line 576 "ml_util.m"
      {
#line 576 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 576 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 576 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 576 "ml_util.m"
        else
#line 578 "ml_util.m"
          {
#line 578 "ml_util.m"
            MR_Word ml_backend__ml_util__TargetCode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 578 "ml_util.m"
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
#line 586 "ml_util.m"
                {
#line 586 "ml_util.m"
                  /* direct tailcall eliminated */
#line 586 "ml_util.m"
                  {
#line 586 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 586 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 586 "ml_util.m"
                  }
#line 586 "ml_util.m"
                  continue;
#line 586 "ml_util.m"
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

#line 603 "ml_util.m"
                  {
#line 603 "ml_util.m"
                    ml_backend__ml_util__TargetCodeContainsVar_30 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_18, ml_backend__ml_util__HeadVar__2_2);
                  }
#line 584 "ml_util.m"
#line 584 "ml_util.m"
                  switch (ml_backend__ml_util__TargetCodeContainsVar_30) {
#line 584 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 584 "ml_util.m"
                    case (MR_Integer) 0:
#line 586 "ml_util.m"
                      {
#line 586 "ml_util.m"
                        /* direct tailcall eliminated */
#line 586 "ml_util.m"
                        {
#line 586 "ml_util.m"
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 586 "ml_util.m"
                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 586 "ml_util.m"
                        }
#line 586 "ml_util.m"
                        continue;
#line 586 "ml_util.m"
                      }
#line 584 "ml_util.m"
                      break;
#line 584 "ml_util.m"
                    case (MR_Integer) 1:
#line 583 "ml_util.m"
                      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 584 "ml_util.m"
                      break;
#line 584 "ml_util.m"
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

#line 606 "ml_util.m"
                      {
#line 606 "ml_util.m"
                        ml_backend__ml_util__TargetCodeContainsVar_32 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_19, ml_backend__ml_util__HeadVar__2_2);
                      }
#line 584 "ml_util.m"
#line 584 "ml_util.m"
                      switch (ml_backend__ml_util__TargetCodeContainsVar_32) {
#line 584 "ml_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 584 "ml_util.m"
                        case (MR_Integer) 0:
#line 586 "ml_util.m"
                          {
#line 586 "ml_util.m"
                            /* direct tailcall eliminated */
#line 586 "ml_util.m"
                            {
#line 586 "ml_util.m"
                              MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 586 "ml_util.m"
                              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 586 "ml_util.m"
                            }
#line 586 "ml_util.m"
                            continue;
#line 586 "ml_util.m"
                          }
#line 584 "ml_util.m"
                          break;
#line 584 "ml_util.m"
                        case (MR_Integer) 1:
#line 583 "ml_util.m"
                          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 584 "ml_util.m"
                          break;
#line 584 "ml_util.m"
                      }
#line 1287 "ml_backend.ml_util.c"
                    }
#line 1289 "ml_backend.ml_util.c"
                    break;
#line 1291 "ml_backend.ml_util.c"
                  case (MR_Integer) 1:
#line 1293 "ml_backend.ml_util.c"
                  case (MR_Integer) 3:
#line 586 "ml_util.m"
                    {
#line 586 "ml_util.m"
                      /* direct tailcall eliminated */
#line 586 "ml_util.m"
                      {
#line 586 "ml_util.m"
                        MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 586 "ml_util.m"
                        ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 586 "ml_util.m"
                      }
#line 586 "ml_util.m"
                      continue;
#line 586 "ml_util.m"
                    }
#line 1312 "ml_backend.ml_util.c"
                    break;
#line 1314 "ml_backend.ml_util.c"
                  case (MR_Integer) 2:
#line 1316 "ml_backend.ml_util.c"
                    {
#line 1318 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__EntityName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
#line 611 "ml_util.m"
                      MR_Word ml_backend__ml_util__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_20, (MR_Integer) 0)));
#line 611 "ml_util.m"
                      MR_Word ml_backend__ml_util__QualKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_20, (MR_Integer) 1)));
#line 611 "ml_util.m"
                      MR_Word ml_backend__ml_util__UnqualDataName_23;
#line 611 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_20, (MR_Integer) 2)));
#line 611 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_25_25;
#line 611 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_26_26;
#line 611 "ml_util.m"
                      MR_Word ml_backend__ml_util__V_27_27;

#line 611 "ml_util.m"
                      ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 611 "ml_util.m"
                      if (ml_backend__ml_util__succeeded)
#line 611 "ml_util.m"
                        {
#line 611 "ml_util.m"
                          ml_backend__ml_util__UnqualDataName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__V_24_24, (MR_Integer) 0)));
#line 612 "ml_util.m"
                          ml_backend__ml_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 0)));
#line 612 "ml_util.m"
                          ml_backend__ml_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 612 "ml_util.m"
                          ml_backend__ml_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 2)));
#line 612 "ml_util.m"
                          {
#line 612 "ml_util.m"
                            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_21, ml_backend__ml_util__V_25_25);
                          }
#line 611 "ml_util.m"
                          if (ml_backend__ml_util__succeeded)
#line 611 "ml_util.m"
                            {
#line 612 "ml_util.m"
                              ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_22 == ml_backend__ml_util__V_26_26);
#line 611 "ml_util.m"
                              if (ml_backend__ml_util__succeeded)
#line 612 "ml_util.m"
                                {
#line 612 "ml_util.m"
                                  ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__UnqualDataName_23, ml_backend__ml_util__V_27_27);
                                }
#line 611 "ml_util.m"
                            }
#line 611 "ml_util.m"
                        }
#line 1371 "ml_backend.ml_util.c"
                      if (ml_backend__ml_util__succeeded)
#line 583 "ml_util.m"
                        ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 1375 "ml_backend.ml_util.c"
                      else
#line 586 "ml_util.m"
                        {
#line 586 "ml_util.m"
                          /* direct tailcall eliminated */
#line 586 "ml_util.m"
                          {
#line 586 "ml_util.m"
                            MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

#line 586 "ml_util.m"
                            ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 586 "ml_util.m"
                          }
#line 586 "ml_util.m"
                          continue;
#line 586 "ml_util.m"
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
#line 578 "ml_util.m"
          }
#line 576 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 576 "ml_util.m"
      }
#line 576 "ml_util.m"
      break;
#line 576 "ml_util.m"
    }
#line 573 "ml_util.m"
}

#line 476 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__default_contains_var_2_f_0(
#line 476 "ml_util.m"
  MR_Word ml_backend__ml_util__Default_4,
#line 476 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 476 "ml_util.m"
{
#line 482 "ml_util.m"
  {
#line 482 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 482 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 482 "ml_util.m"
#line 482 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Default_4)) {
#line 482 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 482 "ml_util.m"
      case (MR_Integer) 0:
#line 483 "ml_util.m"
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 482 "ml_util.m"
        break;
#line 482 "ml_util.m"
      case (MR_Integer) 1:
#line 485 "ml_util.m"
        {
#line 485 "ml_util.m"
          MR_Word ml_backend__ml_util__Statement_7 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Default_4), (MR_Integer) 1);
#line 485 "ml_util.m"
          MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 0)));
#line 342 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_7, (MR_Integer) 1)));

#line 343 "ml_util.m"
          {
#line 343 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_5);
          }
#line 485 "ml_util.m"
        }
#line 482 "ml_util.m"
        break;
#line 482 "ml_util.m"
    }
#line 482 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 482 "ml_util.m"
  }
#line 476 "ml_util.m"
}

#line 462 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
#line 462 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 462 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 462 "ml_util.m"
{
#line 464 "ml_util.m"
  while (MR_TRUE)
#line 464 "ml_util.m"
    {
#line 464 "ml_util.m"
      /* tailcall optimized into a loop */
#line 464 "ml_util.m"
      {
#line 464 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 464 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 464 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 464 "ml_util.m"
        else
#line 465 "ml_util.m"
          {
#line 465 "ml_util.m"
            MR_Word ml_backend__ml_util__Case_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 465 "ml_util.m"
            MR_Word ml_backend__ml_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 465 "ml_util.m"
            MR_Word ml_backend__ml_util__Statement_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 2)));
#line 465 "ml_util.m"
            MR_Word ml_backend__ml_util__StatementContainsVar_12;
#line 465 "ml_util.m"
            MR_Word ml_backend__ml_util__Stmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 0)));
#line 466 "ml_util.m"
            MR_Word ml_backend__ml_util___FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 0)));
#line 466 "ml_util.m"
            MR_Word ml_backend__ml_util___LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 1)));
#line 342 "ml_util.m"
            MR_Word ml_backend__ml_util___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 1)));

#line 343 "ml_util.m"
            {
#line 343 "ml_util.m"
              ml_backend__ml_util__StatementContainsVar_12 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_16, ml_backend__ml_util__HeadVar__2_2);
            }
#line 471 "ml_util.m"
#line 471 "ml_util.m"
            switch (ml_backend__ml_util__StatementContainsVar_12) {
#line 471 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 471 "ml_util.m"
              case (MR_Integer) 0:
#line 473 "ml_util.m"
                {
#line 473 "ml_util.m"
                  /* direct tailcall eliminated */
#line 473 "ml_util.m"
                  {
#line 473 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Cases_6;

#line 473 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 473 "ml_util.m"
                  }
#line 473 "ml_util.m"
                  continue;
#line 473 "ml_util.m"
                }
#line 471 "ml_util.m"
                break;
#line 471 "ml_util.m"
              case (MR_Integer) 1:
#line 470 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 471 "ml_util.m"
                break;
#line 471 "ml_util.m"
            }
#line 465 "ml_util.m"
          }
#line 464 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 464 "ml_util.m"
      }
#line 464 "ml_util.m"
      break;
#line 464 "ml_util.m"
    }
#line 462 "ml_util.m"
}

#line 345 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__stmt_contains_var_2_f_0(
#line 345 "ml_util.m"
  MR_Word ml_backend__ml_util__Stmt_4,
#line 345 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_5)
#line 345 "ml_util.m"
{
#line 349 "ml_util.m"
  {
#line 349 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 349 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 349 "ml_util.m"
#line 349 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) {
#line 349 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 349 "ml_util.m"
      case (MR_Integer) 0:
#line 349 "ml_util.m"
        {
#line 349 "ml_util.m"
          MR_Word ml_backend__ml_util__Defns_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
#line 349 "ml_util.m"
          MR_Word ml_backend__ml_util__Statements_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 349 "ml_util.m"
          MR_Word ml_backend__ml_util__DefnsContainVar_9;

#line 350 "ml_util.m"
          {
#line 350 "ml_util.m"
            ml_backend__ml_util__DefnsContainVar_9 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__Defns_7, ml_backend__ml_util__DataName_5);
          }
#line 354 "ml_util.m"
#line 354 "ml_util.m"
          switch (ml_backend__ml_util__DefnsContainVar_9) {
#line 354 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 354 "ml_util.m"
            case (MR_Integer) 0:
#line 356 "ml_util.m"
              {
#line 356 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statements_contains_var_2_f_0(ml_backend__ml_util__Statements_8, ml_backend__ml_util__DataName_5);
              }
#line 354 "ml_util.m"
              break;
#line 354 "ml_util.m"
            case (MR_Integer) 1:
#line 353 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 354 "ml_util.m"
              break;
#line 354 "ml_util.m"
          }
#line 349 "ml_util.m"
        }
#line 349 "ml_util.m"
        break;
#line 349 "ml_util.m"
      case (MR_Integer) 1:
#line 359 "ml_util.m"
        {
#line 359 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 359 "ml_util.m"
          MR_Word ml_backend__ml_util__Statement_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 359 "ml_util.m"
          MR_Word ml_backend__ml_util__RvalContainsVar_13;
#line 359 "ml_util.m"
          MR_Word ml_backend__ml_util___Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));

#line 360 "ml_util.m"
          {
#line 360 "ml_util.m"
            ml_backend__ml_util__RvalContainsVar_13 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_11, ml_backend__ml_util__DataName_5);
          }
#line 364 "ml_util.m"
#line 364 "ml_util.m"
          switch (ml_backend__ml_util__RvalContainsVar_13) {
#line 364 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 364 "ml_util.m"
            case (MR_Integer) 0:
#line 366 "ml_util.m"
              {
#line 366 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_12, ml_backend__ml_util__DataName_5);
              }
#line 364 "ml_util.m"
              break;
#line 364 "ml_util.m"
            case (MR_Integer) 1:
#line 363 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 364 "ml_util.m"
              break;
#line 364 "ml_util.m"
          }
#line 359 "ml_util.m"
        }
#line 349 "ml_util.m"
        break;
#line 349 "ml_util.m"
      case (MR_Integer) 2:
#line 369 "ml_util.m"
        {
#line 369 "ml_util.m"
          MR_Word ml_backend__ml_util__Cond_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
#line 369 "ml_util.m"
          MR_Word ml_backend__ml_util__Then_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 369 "ml_util.m"
          MR_Word ml_backend__ml_util__MaybeElse_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 369 "ml_util.m"
          MR_Word ml_backend__ml_util__CondContainsVar_17;

#line 370 "ml_util.m"
          {
#line 370 "ml_util.m"
            ml_backend__ml_util__CondContainsVar_17 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Cond_14, ml_backend__ml_util__DataName_5);
          }
#line 374 "ml_util.m"
#line 374 "ml_util.m"
          switch (ml_backend__ml_util__CondContainsVar_17) {
#line 374 "ml_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 374 "ml_util.m"
            case (MR_Integer) 0:
#line 375 "ml_util.m"
              {
#line 375 "ml_util.m"
                MR_Word ml_backend__ml_util__ThenContainsVar_18;
#line 375 "ml_util.m"
                MR_Word ml_backend__ml_util__Stmt_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_15, (MR_Integer) 0)));
#line 342 "ml_util.m"
                MR_Word ml_backend__ml_util___Context_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_15, (MR_Integer) 1)));

#line 343 "ml_util.m"
                {
#line 343 "ml_util.m"
                  ml_backend__ml_util__ThenContainsVar_18 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_94, ml_backend__ml_util__DataName_5);
                }
#line 380 "ml_util.m"
#line 380 "ml_util.m"
                switch (ml_backend__ml_util__ThenContainsVar_18) {
#line 380 "ml_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 380 "ml_util.m"
                  case (MR_Integer) 0:
#line 382 "ml_util.m"
                    {
#line 382 "ml_util.m"
                      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__maybe_statement_contains_var_2_f_0(ml_backend__ml_util__MaybeElse_16, ml_backend__ml_util__DataName_5);
                    }
#line 380 "ml_util.m"
                    break;
#line 380 "ml_util.m"
                  case (MR_Integer) 1:
#line 379 "ml_util.m"
                    ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 380 "ml_util.m"
                    break;
#line 380 "ml_util.m"
                }
#line 375 "ml_util.m"
              }
#line 374 "ml_util.m"
              break;
#line 374 "ml_util.m"
            case (MR_Integer) 1:
#line 373 "ml_util.m"
              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 374 "ml_util.m"
              break;
#line 374 "ml_util.m"
          }
#line 369 "ml_util.m"
        }
#line 349 "ml_util.m"
        break;
#line 349 "ml_util.m"
      case (MR_Integer) 3:
#line 349 "ml_util.m"
#line 349 "ml_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) {
#line 349 "ml_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 349 "ml_util.m"
          case (MR_Integer) 0:
#line 386 "ml_util.m"
            {
#line 386 "ml_util.m"
              MR_Word ml_backend__ml_util__Val_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 386 "ml_util.m"
              MR_Word ml_backend__ml_util__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
#line 386 "ml_util.m"
              MR_Word ml_backend__ml_util__Default_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
#line 386 "ml_util.m"
              MR_Word ml_backend__ml_util__ValContainsVar_24;
#line 386 "ml_util.m"
              MR_Word ml_backend__ml_util___Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 386 "ml_util.m"
              MR_Word ml_backend__ml_util___Range_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));

#line 387 "ml_util.m"
              {
#line 387 "ml_util.m"
                ml_backend__ml_util__ValContainsVar_24 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Val_20, ml_backend__ml_util__DataName_5);
              }
#line 391 "ml_util.m"
#line 391 "ml_util.m"
              switch (ml_backend__ml_util__ValContainsVar_24) {
#line 391 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 391 "ml_util.m"
                case (MR_Integer) 0:
#line 392 "ml_util.m"
                  {
#line 392 "ml_util.m"
                    MR_Word ml_backend__ml_util__CasesContainsVar_25;

#line 393 "ml_util.m"
                    {
#line 393 "ml_util.m"
                      ml_backend__ml_util__CasesContainsVar_25 = ml_backend__ml_util__cases_contains_var_2_f_0(ml_backend__ml_util__Cases_22, ml_backend__ml_util__DataName_5);
                    }
#line 397 "ml_util.m"
#line 397 "ml_util.m"
                    switch (ml_backend__ml_util__CasesContainsVar_25) {
#line 397 "ml_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 397 "ml_util.m"
                      case (MR_Integer) 0:
#line 399 "ml_util.m"
                        {
#line 399 "ml_util.m"
                          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__default_contains_var_2_f_0(ml_backend__ml_util__Default_23, ml_backend__ml_util__DataName_5);
                        }
#line 397 "ml_util.m"
                        break;
#line 397 "ml_util.m"
                      case (MR_Integer) 1:
#line 396 "ml_util.m"
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 397 "ml_util.m"
                        break;
#line 397 "ml_util.m"
                    }
#line 392 "ml_util.m"
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
#line 349 "ml_util.m"
            break;
#line 349 "ml_util.m"
          case (MR_Integer) 1:
#line 349 "ml_util.m"
          case (MR_Integer) 2:
#line 406 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 349 "ml_util.m"
            break;
#line 349 "ml_util.m"
          case (MR_Integer) 3:
#line 408 "ml_util.m"
            {
#line 408 "ml_util.m"
              MR_Word ml_backend__ml_util__Rval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 408 "ml_util.m"
              MR_Word ml_backend__ml_util___Labels_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));

#line 409 "ml_util.m"
              {
#line 409 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_44, ml_backend__ml_util__DataName_5);
              }
#line 408 "ml_util.m"
            }
#line 349 "ml_util.m"
            break;
#line 349 "ml_util.m"
          case (MR_Integer) 4:
#line 411 "ml_util.m"
            {
#line 411 "ml_util.m"
              MR_Word ml_backend__ml_util__Func_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 411 "ml_util.m"
              MR_Word ml_backend__ml_util__Obj_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
#line 411 "ml_util.m"
              MR_Word ml_backend__ml_util__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
#line 411 "ml_util.m"
              MR_Word ml_backend__ml_util__RetLvals_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
#line 411 "ml_util.m"
              MR_Word ml_backend__ml_util__FuncContainsVar_35;
#line 411 "ml_util.m"
              MR_Word ml_backend__ml_util___Sig_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
#line 411 "ml_util.m"
              MR_Word ml_backend__ml_util___TailCall_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 6)));

#line 412 "ml_util.m"
              {
#line 412 "ml_util.m"
                ml_backend__ml_util__FuncContainsVar_35 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Func_30, ml_backend__ml_util__DataName_5);
              }
#line 416 "ml_util.m"
#line 416 "ml_util.m"
              switch (ml_backend__ml_util__FuncContainsVar_35) {
#line 416 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 416 "ml_util.m"
                case (MR_Integer) 0:
#line 1897 "ml_backend.ml_util.c"
                  if ((ml_backend__ml_util__Obj_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1899 "ml_backend.ml_util.c"
                    {
#line 1901 "ml_backend.ml_util.c"
                      MR_Word ml_backend__ml_util__ArgsContainVar_37;

#line 424 "ml_util.m"
                      {
#line 424 "ml_util.m"
                        ml_backend__ml_util__ArgsContainVar_37 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_32, ml_backend__ml_util__DataName_5);
                      }
#line 428 "ml_util.m"
#line 428 "ml_util.m"
                      switch (ml_backend__ml_util__ArgsContainVar_37) {
#line 428 "ml_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 428 "ml_util.m"
                        case (MR_Integer) 0:
#line 430 "ml_util.m"
                          {
#line 430 "ml_util.m"
                            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_33, ml_backend__ml_util__DataName_5);
                          }
#line 428 "ml_util.m"
                          break;
#line 428 "ml_util.m"
                        case (MR_Integer) 1:
#line 427 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 428 "ml_util.m"
                          break;
#line 428 "ml_util.m"
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

#line 825 "ml_util.m"
                      {
#line 825 "ml_util.m"
                        ml_backend__ml_util__ObjContainsVar_98 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_89, ml_backend__ml_util__DataName_5);
                      }
#line 422 "ml_util.m"
#line 422 "ml_util.m"
                      switch (ml_backend__ml_util__ObjContainsVar_98) {
#line 422 "ml_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 422 "ml_util.m"
                        case (MR_Integer) 0:
#line 423 "ml_util.m"
                          {
#line 423 "ml_util.m"
                            MR_Word ml_backend__ml_util__ArgsContainVar_96;

#line 424 "ml_util.m"
                            {
#line 424 "ml_util.m"
                              ml_backend__ml_util__ArgsContainVar_96 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_32, ml_backend__ml_util__DataName_5);
                            }
#line 428 "ml_util.m"
#line 428 "ml_util.m"
                            switch (ml_backend__ml_util__ArgsContainVar_96) {
#line 428 "ml_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 428 "ml_util.m"
                              case (MR_Integer) 0:
#line 430 "ml_util.m"
                                {
#line 430 "ml_util.m"
                                  return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_33, ml_backend__ml_util__DataName_5);
                                }
#line 428 "ml_util.m"
                                break;
#line 428 "ml_util.m"
                              case (MR_Integer) 1:
#line 427 "ml_util.m"
                                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 428 "ml_util.m"
                                break;
#line 428 "ml_util.m"
                            }
#line 423 "ml_util.m"
                          }
#line 422 "ml_util.m"
                          break;
#line 422 "ml_util.m"
                        case (MR_Integer) 1:
#line 421 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 422 "ml_util.m"
                          break;
#line 422 "ml_util.m"
                      }
#line 1998 "ml_backend.ml_util.c"
                    }
#line 416 "ml_util.m"
                  break;
#line 416 "ml_util.m"
                case (MR_Integer) 1:
#line 415 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 416 "ml_util.m"
                  break;
#line 416 "ml_util.m"
              }
#line 411 "ml_util.m"
            }
#line 349 "ml_util.m"
            break;
#line 349 "ml_util.m"
          case (MR_Integer) 5:
#line 435 "ml_util.m"
            {
#line 435 "ml_util.m"
              MR_Word ml_backend__ml_util__Rvals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 436 "ml_util.m"
              {
#line 436 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Rvals_38, ml_backend__ml_util__DataName_5);
              }
#line 435 "ml_util.m"
            }
#line 349 "ml_util.m"
            break;
#line 349 "ml_util.m"
          case (MR_Integer) 6:
#line 441 "ml_util.m"
            {
#line 441 "ml_util.m"
              MR_Word ml_backend__ml_util__Handler_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
#line 441 "ml_util.m"
              MR_Word ml_backend__ml_util__RefContainsVar_41;
#line 441 "ml_util.m"
              MR_Word ml_backend__ml_util__Statement_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
#line 441 "ml_util.m"
              MR_Word ml_backend__ml_util__Ref_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 442 "ml_util.m"
              {
#line 442 "ml_util.m"
                ml_backend__ml_util__RefContainsVar_41 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Ref_46, ml_backend__ml_util__DataName_5);
              }
#line 446 "ml_util.m"
#line 446 "ml_util.m"
              switch (ml_backend__ml_util__RefContainsVar_41) {
#line 446 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 446 "ml_util.m"
                case (MR_Integer) 0:
#line 447 "ml_util.m"
                  {
#line 447 "ml_util.m"
                    MR_Word ml_backend__ml_util__StatementContainsVar_42;

#line 448 "ml_util.m"
                    {
#line 448 "ml_util.m"
                      ml_backend__ml_util__StatementContainsVar_42 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_45, ml_backend__ml_util__DataName_5);
                    }
#line 452 "ml_util.m"
#line 452 "ml_util.m"
                    switch (ml_backend__ml_util__StatementContainsVar_42) {
#line 452 "ml_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 452 "ml_util.m"
                      case (MR_Integer) 0:
#line 454 "ml_util.m"
                        {
#line 454 "ml_util.m"
                          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Handler_40, ml_backend__ml_util__DataName_5);
                        }
#line 452 "ml_util.m"
                        break;
#line 452 "ml_util.m"
                      case (MR_Integer) 1:
#line 451 "ml_util.m"
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 452 "ml_util.m"
                        break;
#line 452 "ml_util.m"
                    }
#line 447 "ml_util.m"
                  }
#line 446 "ml_util.m"
                  break;
#line 446 "ml_util.m"
                case (MR_Integer) 1:
#line 445 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 446 "ml_util.m"
                  break;
#line 446 "ml_util.m"
              }
#line 441 "ml_util.m"
            }
#line 349 "ml_util.m"
            break;
#line 349 "ml_util.m"
          case (MR_Integer) 7:
#line 438 "ml_util.m"
            {
#line 438 "ml_util.m"
              MR_Word ml_backend__ml_util__Ref_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 439 "ml_util.m"
              {
#line 439 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Ref_39, ml_backend__ml_util__DataName_5);
              }
#line 438 "ml_util.m"
            }
#line 349 "ml_util.m"
            break;
#line 349 "ml_util.m"
          case (MR_Integer) 8:
#line 458 "ml_util.m"
            {
#line 458 "ml_util.m"
              MR_Word ml_backend__ml_util__AtomicStmt_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

#line 493 "ml_util.m"
#line 493 "ml_util.m"
              switch (MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_43)) {
#line 493 "ml_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 493 "ml_util.m"
                case (MR_Integer) 0:
#line 524 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 493 "ml_util.m"
                  break;
#line 493 "ml_util.m"
                case (MR_Integer) 1:
#line 494 "ml_util.m"
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 493 "ml_util.m"
                  break;
#line 493 "ml_util.m"
                case (MR_Integer) 2:
#line 498 "ml_util.m"
                  {
#line 498 "ml_util.m"
                    MR_Word ml_backend__ml_util__Lval_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 0)));
#line 498 "ml_util.m"
                    MR_Word ml_backend__ml_util__Rval_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
#line 498 "ml_util.m"
                    MR_Word ml_backend__ml_util__LvalContainsVar_53;

#line 499 "ml_util.m"
                    {
#line 499 "ml_util.m"
                      ml_backend__ml_util__LvalContainsVar_53 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_51, ml_backend__ml_util__DataName_5);
                    }
#line 503 "ml_util.m"
#line 503 "ml_util.m"
                    switch (ml_backend__ml_util__LvalContainsVar_53) {
#line 503 "ml_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 503 "ml_util.m"
                      case (MR_Integer) 0:
#line 505 "ml_util.m"
                        {
#line 505 "ml_util.m"
                          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_52, ml_backend__ml_util__DataName_5);
                        }
#line 503 "ml_util.m"
                        break;
#line 503 "ml_util.m"
                      case (MR_Integer) 1:
#line 502 "ml_util.m"
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 503 "ml_util.m"
                        break;
#line 503 "ml_util.m"
                    }
#line 498 "ml_util.m"
                  }
#line 493 "ml_util.m"
                  break;
#line 493 "ml_util.m"
                case (MR_Integer) 3:
#line 493 "ml_util.m"
#line 493 "ml_util.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 0)))) {
#line 493 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 493 "ml_util.m"
                    case (MR_Integer) 0:
#line 498 "ml_util.m"
                      {
#line 498 "ml_util.m"
                        MR_Word ml_backend__ml_util__Lval_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
#line 498 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 498 "ml_util.m"
                        MR_Word ml_backend__ml_util__LvalContainsVar_79;

#line 499 "ml_util.m"
                        {
#line 499 "ml_util.m"
                          ml_backend__ml_util__LvalContainsVar_79 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_77, ml_backend__ml_util__DataName_5);
                        }
#line 503 "ml_util.m"
#line 503 "ml_util.m"
                        switch (ml_backend__ml_util__LvalContainsVar_79) {
#line 503 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 503 "ml_util.m"
                          case (MR_Integer) 0:
#line 505 "ml_util.m"
                            {
#line 505 "ml_util.m"
                              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_78, ml_backend__ml_util__DataName_5);
                            }
#line 503 "ml_util.m"
                            break;
#line 503 "ml_util.m"
                          case (MR_Integer) 1:
#line 502 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 503 "ml_util.m"
                            break;
#line 503 "ml_util.m"
                        }
#line 498 "ml_util.m"
                      }
#line 493 "ml_util.m"
                      break;
#line 493 "ml_util.m"
                    case (MR_Integer) 1:
#line 508 "ml_util.m"
                      {
#line 508 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 509 "ml_util.m"
                        {
#line 509 "ml_util.m"
                          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_72, ml_backend__ml_util__DataName_5);
                        }
#line 508 "ml_util.m"
                      }
#line 493 "ml_util.m"
                      break;
#line 493 "ml_util.m"
                    case (MR_Integer) 2:
#line 513 "ml_util.m"
                      {
#line 513 "ml_util.m"
                        MR_Word ml_backend__ml_util__Target_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
#line 513 "ml_util.m"
                        MR_Word ml_backend__ml_util__Args_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 7)));
#line 513 "ml_util.m"
                        MR_Word ml_backend__ml_util__TargetContainsVar_64;
#line 511 "ml_util.m"
                        MR_Word ml_backend__ml_util___MaybeTag_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 511 "ml_util.m"
                        MR_Word ml_backend__ml_util___ExplicitSecTag_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 3)));
#line 511 "ml_util.m"
                        MR_Word ml_backend__ml_util___Type_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 4)));
#line 511 "ml_util.m"
                        MR_Word ml_backend__ml_util___MaybeSize_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 5)));
#line 511 "ml_util.m"
                        MR_Word ml_backend__ml_util___MaybeCtorName_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 6)));
#line 511 "ml_util.m"
                        MR_Word ml_backend__ml_util___ArgTypes_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 8)));
#line 511 "ml_util.m"
                        MR_Word ml_backend__ml_util___MayUseAtomic_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 9)));
#line 511 "ml_util.m"
                        MR_Word ml_backend__ml_util___AllocId_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 10)));

#line 514 "ml_util.m"
                        {
#line 514 "ml_util.m"
                          ml_backend__ml_util__TargetContainsVar_64 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Target_54, ml_backend__ml_util__DataName_5);
                        }
#line 518 "ml_util.m"
#line 518 "ml_util.m"
                        switch (ml_backend__ml_util__TargetContainsVar_64) {
#line 518 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 518 "ml_util.m"
                          case (MR_Integer) 0:
#line 520 "ml_util.m"
                            {
#line 520 "ml_util.m"
                              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_60, ml_backend__ml_util__DataName_5);
                            }
#line 518 "ml_util.m"
                            break;
#line 518 "ml_util.m"
                          case (MR_Integer) 1:
#line 517 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 518 "ml_util.m"
                            break;
#line 518 "ml_util.m"
                        }
#line 513 "ml_util.m"
                      }
#line 493 "ml_util.m"
                      break;
#line 493 "ml_util.m"
                    case (MR_Integer) 3:
#line 526 "ml_util.m"
                      {
#line 526 "ml_util.m"
                        MR_Word ml_backend__ml_util__Lval_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 527 "ml_util.m"
                        {
#line 527 "ml_util.m"
                          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_73, ml_backend__ml_util__DataName_5);
                        }
#line 526 "ml_util.m"
                      }
#line 493 "ml_util.m"
                      break;
#line 493 "ml_util.m"
                    case (MR_Integer) 4:
#line 529 "ml_util.m"
                      {
#line 529 "ml_util.m"
                        MR_Word ml_backend__ml_util__Rval_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 530 "ml_util.m"
                        {
#line 530 "ml_util.m"
                          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_74, ml_backend__ml_util__DataName_5);
                        }
#line 529 "ml_util.m"
                      }
#line 493 "ml_util.m"
                      break;
#line 493 "ml_util.m"
                    case (MR_Integer) 5:
#line 532 "ml_util.m"
                      {
#line 532 "ml_util.m"
                        MR_Word ml_backend__ml_util__TrailOp_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 555 "ml_util.m"
#line 555 "ml_util.m"
                        switch (MR_tag((MR_Word) ml_backend__ml_util__TrailOp_65)) {
#line 555 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 555 "ml_util.m"
                          case (MR_Integer) 0:
#line 564 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 555 "ml_util.m"
                            break;
#line 555 "ml_util.m"
                          case (MR_Integer) 1:
#line 555 "ml_util.m"
                            {
#line 555 "ml_util.m"
                              MR_Word ml_backend__ml_util__Lval_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)));

#line 556 "ml_util.m"
                              {
#line 556 "ml_util.m"
                                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_83, ml_backend__ml_util__DataName_5);
                              }
#line 555 "ml_util.m"
                            }
#line 555 "ml_util.m"
                            break;
#line 555 "ml_util.m"
                          case (MR_Integer) 2:
#line 558 "ml_util.m"
                            {
#line 558 "ml_util.m"
                              MR_Word ml_backend__ml_util__Rval_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)));
#line 558 "ml_util.m"
                              MR_Word ml_backend__ml_util___Reason_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

#line 559 "ml_util.m"
                              {
#line 559 "ml_util.m"
                                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_84, ml_backend__ml_util__DataName_5);
                              }
#line 558 "ml_util.m"
                            }
#line 555 "ml_util.m"
                            break;
#line 555 "ml_util.m"
                          case (MR_Integer) 3:
#line 555 "ml_util.m"
#line 555 "ml_util.m"
                            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)))) {
#line 555 "ml_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 555 "ml_util.m"
                              case (MR_Integer) 0:
#line 566 "ml_util.m"
                                {
#line 566 "ml_util.m"
                                  MR_Word ml_backend__ml_util__Lval_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

#line 567 "ml_util.m"
                                  {
#line 567 "ml_util.m"
                                    return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_86, ml_backend__ml_util__DataName_5);
                                  }
#line 566 "ml_util.m"
                                }
#line 555 "ml_util.m"
                                break;
#line 555 "ml_util.m"
                              case (MR_Integer) 1:
#line 569 "ml_util.m"
                                {
#line 569 "ml_util.m"
                                  MR_Word ml_backend__ml_util__Rval_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

#line 570 "ml_util.m"
                                  {
#line 570 "ml_util.m"
                                    return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_87, ml_backend__ml_util__DataName_5);
                                  }
#line 569 "ml_util.m"
                                }
#line 555 "ml_util.m"
                                break;
#line 555 "ml_util.m"
                            }
#line 555 "ml_util.m"
                            break;
#line 555 "ml_util.m"
                        }
#line 532 "ml_util.m"
                      }
#line 493 "ml_util.m"
                      break;
#line 493 "ml_util.m"
                    case (MR_Integer) 6:
#line 535 "ml_util.m"
                      {
#line 535 "ml_util.m"
                        MR_Word ml_backend__ml_util__Components_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 535 "ml_util.m"
                        MR_Word ml_backend__ml_util___Lang_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 536 "ml_util.m"
                        {
#line 536 "ml_util.m"
                          return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__target_code_components_contains_var_2_f_0(ml_backend__ml_util__Components_67, ml_backend__ml_util__DataName_5);
                        }
#line 535 "ml_util.m"
                      }
#line 493 "ml_util.m"
                      break;
#line 493 "ml_util.m"
                    case (MR_Integer) 7:
#line 539 "ml_util.m"
                      {
#line 539 "ml_util.m"
                        MR_Word ml_backend__ml_util__OutlineArgs_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
#line 539 "ml_util.m"
                        MR_Word ml_backend__ml_util__ReturnLvals_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 3)));
#line 539 "ml_util.m"
                        MR_Word ml_backend__ml_util__OutlineArgsContainVar_71;
#line 538 "ml_util.m"
                        MR_String ml_backend__ml_util___Code_70 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 4)));
#line 538 "ml_util.m"
                        MR_Word ml_backend__ml_util___Lang_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

#line 540 "ml_util.m"
                        {
#line 540 "ml_util.m"
                          ml_backend__ml_util__OutlineArgsContainVar_71 = ml_backend__ml_util__outline_args_contains_var_2_f_0(ml_backend__ml_util__OutlineArgs_68, ml_backend__ml_util__DataName_5);
                        }
#line 545 "ml_util.m"
#line 545 "ml_util.m"
                        switch (ml_backend__ml_util__OutlineArgsContainVar_71) {
#line 545 "ml_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 545 "ml_util.m"
                          case (MR_Integer) 0:
#line 547 "ml_util.m"
                            {
#line 547 "ml_util.m"
                              return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__ReturnLvals_69, ml_backend__ml_util__DataName_5);
                            }
#line 545 "ml_util.m"
                            break;
#line 545 "ml_util.m"
                          case (MR_Integer) 1:
#line 544 "ml_util.m"
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 545 "ml_util.m"
                            break;
#line 545 "ml_util.m"
                        }
#line 539 "ml_util.m"
                      }
#line 493 "ml_util.m"
                      break;
#line 493 "ml_util.m"
                  }
#line 493 "ml_util.m"
                  break;
#line 493 "ml_util.m"
              }
#line 458 "ml_util.m"
            }
#line 349 "ml_util.m"
            break;
#line 349 "ml_util.m"
        }
#line 349 "ml_util.m"
        break;
#line 349 "ml_util.m"
    }
#line 349 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 349 "ml_util.m"
  }
#line 345 "ml_util.m"
}

#line 335 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
#line 335 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 335 "ml_util.m"
  MR_Word ml_backend__ml_util__DataName_2)
#line 335 "ml_util.m"
{
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
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 342 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 343 "ml_util.m"
        {
#line 343 "ml_util.m"
          return ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_2);
        }
#line 338 "ml_util.m"
      }
#line 337 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 337 "ml_util.m"
  }
#line 335 "ml_util.m"
}

#line 322 "ml_util.m"
static MR_Word MR_CALL 
ml_backend__ml_util__statements_contains_var_2_f_0(
#line 322 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 322 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2)
#line 322 "ml_util.m"
{
#line 324 "ml_util.m"
  while (MR_TRUE)
#line 324 "ml_util.m"
    {
#line 324 "ml_util.m"
      /* tailcall optimized into a loop */
#line 324 "ml_util.m"
      {
#line 324 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 324 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 324 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 324 "ml_util.m"
        else
#line 325 "ml_util.m"
          {
#line 325 "ml_util.m"
            MR_Word ml_backend__ml_util__Statement_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 325 "ml_util.m"
            MR_Word ml_backend__ml_util__Statements_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 325 "ml_util.m"
            MR_Word ml_backend__ml_util__StatementContainsVar_9;
#line 325 "ml_util.m"
            MR_Word ml_backend__ml_util__Stmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 342 "ml_util.m"
            MR_Word ml_backend__ml_util___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 343 "ml_util.m"
            {
#line 343 "ml_util.m"
              ml_backend__ml_util__StatementContainsVar_9 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_13, ml_backend__ml_util__HeadVar__2_2);
            }
#line 330 "ml_util.m"
#line 330 "ml_util.m"
            switch (ml_backend__ml_util__StatementContainsVar_9) {
#line 330 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 330 "ml_util.m"
              case (MR_Integer) 0:
#line 332 "ml_util.m"
                {
#line 332 "ml_util.m"
                  /* direct tailcall eliminated */
#line 332 "ml_util.m"
                  {
#line 332 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Statements_6;

#line 332 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 332 "ml_util.m"
                  }
#line 332 "ml_util.m"
                  continue;
#line 332 "ml_util.m"
                }
#line 330 "ml_util.m"
                break;
#line 330 "ml_util.m"
              case (MR_Integer) 1:
#line 329 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 330 "ml_util.m"
                break;
#line 330 "ml_util.m"
            }
#line 325 "ml_util.m"
          }
#line 324 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 324 "ml_util.m"
      }
#line 324 "ml_util.m"
      break;
#line 324 "ml_util.m"
    }
#line 322 "ml_util.m"
}

#line 303 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__default_contains_statement_2_p_0(
#line 303 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 303 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_2,
#line 303 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 303 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 303 "ml_util.m"
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
#line 256 "ml_util.m"
        *ml_backend__ml_util__SubStatement_2 = ml_backend__ml_util__Statement_5;
#line 256 "ml_util.m"
        {
#line 256 "ml_util.m"
          ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
        }
#line 257 "ml_util.m"
        {
#line 257 "ml_util.m"
          MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
#line 258 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

#line 259 "ml_util.m"
          {
#line 259 "ml_util.m"
            ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__SubStatement_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 259 "ml_util.m"
            return;
          }
#line 257 "ml_util.m"
        }
#line 2715 "ml_backend.ml_util.c"
      }
#line 2717 "ml_backend.ml_util.c"
  }
#line 303 "ml_util.m"
}

#line 299 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_2(
#line 299 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 299 "ml_util.m"
{
#line 299 "ml_util.m"
  {
#line 299 "ml_util.m"
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 299 "ml_util.m"
    (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5 = ((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5);
#line 299 "ml_util.m"
    {
#line 299 "ml_util.m"
      ml_backend__ml_util__cases_contains_statement_2_p_0_1(ml_backend__ml_util__env_ptr);
#line 299 "ml_util.m"
      return;
    }
#line 299 "ml_util.m"
  }
#line 299 "ml_util.m"
}

#line 298 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_1(
#line 298 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 298 "ml_util.m"
{
#line 298 "ml_util.m"
  {
#line 298 "ml_util.m"
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 298 "ml_util.m"
    {
#line 300 "ml_util.m"
      MR_Word ml_backend__ml_util___FirstCond_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 0)));
#line 300 "ml_util.m"
      MR_Word ml_backend__ml_util___LaterConds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 1)));

#line 300 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 2)));
#line 256 "ml_util.m"
      *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4) = (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8;
#line 256 "ml_util.m"
      {
#line 256 "ml_util.m"
        ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr);
      }
#line 257 "ml_util.m"
      {
#line 257 "ml_util.m"
        MR_Word ml_backend__ml_util__Stmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8, (MR_Integer) 0)));
#line 258 "ml_util.m"
        MR_Word ml_backend__ml_util___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8, (MR_Integer) 1)));

#line 259 "ml_util.m"
        {
#line 259 "ml_util.m"
          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_13, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr);
#line 259 "ml_util.m"
          return;
        }
#line 257 "ml_util.m"
      }
#line 298 "ml_util.m"
    }
#line 298 "ml_util.m"
  }
#line 298 "ml_util.m"
}

#line 295 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0(
#line 295 "ml_util.m"
  MR_Word ml_backend__ml_util__Cases_3,
#line 295 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 295 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 295 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 295 "ml_util.m"
{
#line 295 "ml_util.m"
  {
#line 295 "ml_util.m"
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s ml_backend__ml_util__env;

#line 295 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4 = ml_backend__ml_util__SubStatement_4;
#line 295 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont = ml_backend__ml_util__cont;
#line 295 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 298 "ml_util.m"
    {
#line 298 "ml_util.m"
      MR_bool ml_backend__ml_util__succeeded;

#line 299 "ml_util.m"
      {
#line 299 "ml_util.m"
        mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, &(ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5, ml_backend__ml_util__Cases_3, ml_backend__ml_util__cases_contains_statement_2_p_0_2, &ml_backend__ml_util__env);
      }
#line 298 "ml_util.m"
    }
#line 295 "ml_util.m"
  }
#line 295 "ml_util.m"
}

#line 249 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(
#line 249 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 249 "ml_util.m"
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
#line 249 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 249 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 249 "ml_util.m"
{
#line 2853 "ml_backend.ml_util.c"
  {
#line 2855 "ml_backend.ml_util.c"
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2857 "ml_backend.ml_util.c"
    MR_Word ml_backend__ml_util__Statement_4;

#line 2860 "ml_backend.ml_util.c"
    if (ml_backend__ml_util__succeeded)
#line 2862 "ml_backend.ml_util.c"
      {
#line 2864 "ml_backend.ml_util.c"
        ml_backend__ml_util__Statement_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 256 "ml_util.m"
        *ml_backend__ml_util__HeadVar__2_2 = ml_backend__ml_util__Statement_4;
#line 256 "ml_util.m"
        {
#line 256 "ml_util.m"
          ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
        }
#line 257 "ml_util.m"
        {
#line 257 "ml_util.m"
          MR_Word ml_backend__ml_util__Stmt_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 0)));
#line 258 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 1)));

#line 259 "ml_util.m"
          {
#line 259 "ml_util.m"
            ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_10, ml_backend__ml_util__HeadVar__2_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 259 "ml_util.m"
            return;
          }
#line 257 "ml_util.m"
        }
#line 2889 "ml_backend.ml_util.c"
      }
#line 2891 "ml_backend.ml_util.c"
  }
#line 249 "ml_util.m"
}

#line 246 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_2(
#line 246 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 246 "ml_util.m"
{
#line 246 "ml_util.m"
  {
#line 246 "ml_util.m"
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 246 "ml_util.m"
    (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5 = ((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5);
#line 246 "ml_util.m"
    {
#line 246 "ml_util.m"
      ml_backend__ml_util__statements_contains_statement_2_p_0_1(ml_backend__ml_util__env_ptr);
#line 246 "ml_util.m"
      return;
    }
#line 246 "ml_util.m"
  }
#line 246 "ml_util.m"
}

#line 245 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_1(
#line 245 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 245 "ml_util.m"
{
#line 245 "ml_util.m"
  {
#line 245 "ml_util.m"
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 256 "ml_util.m"
    {
#line 256 "ml_util.m"
      *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4) = (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5;
#line 256 "ml_util.m"
      {
#line 256 "ml_util.m"
        ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr);
      }
#line 256 "ml_util.m"
    }
#line 257 "ml_util.m"
    {
#line 257 "ml_util.m"
      MR_Word ml_backend__ml_util__Stmt_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5, (MR_Integer) 0)));
#line 258 "ml_util.m"
      MR_Word ml_backend__ml_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5, (MR_Integer) 1)));

#line 259 "ml_util.m"
      {
#line 259 "ml_util.m"
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_10, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr);
#line 259 "ml_util.m"
        return;
      }
#line 257 "ml_util.m"
    }
#line 245 "ml_util.m"
  }
#line 245 "ml_util.m"
}

#line 242 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0(
#line 242 "ml_util.m"
  MR_Word ml_backend__ml_util__Statements_3,
#line 242 "ml_util.m"
  MR_Word * ml_backend__ml_util__SubStatement_4,
#line 242 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 242 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 242 "ml_util.m"
{
#line 242 "ml_util.m"
  {
#line 242 "ml_util.m"
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s ml_backend__ml_util__env;

#line 242 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4 = ml_backend__ml_util__SubStatement_4;
#line 242 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont = ml_backend__ml_util__cont;
#line 242 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 245 "ml_util.m"
    {
#line 245 "ml_util.m"
      MR_bool ml_backend__ml_util__succeeded;

#line 246 "ml_util.m"
      {
#line 246 "ml_util.m"
        mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, &(ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5, ml_backend__ml_util__Statements_3, ml_backend__ml_util__statements_contains_statement_2_p_0_2, &ml_backend__ml_util__env);
      }
#line 245 "ml_util.m"
    }
#line 242 "ml_util.m"
  }
#line 242 "ml_util.m"
}

#line 177 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__wrap_init_obj_1_f_0(
#line 177 "ml_util.m"
  MR_Word ml_backend__ml_util__Rval_3)
#line 177 "ml_util.m"
{
#line 956 "ml_util.m"
  {
#line 956 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 956 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;

#line 956 "ml_util.m"
    {
#line 956 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 956 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_3));
#line 956 "ml_util.m"
    }
#line 956 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 956 "ml_util.m"
  }
#line 177 "ml_util.m"
}

#line 174 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_reserved_address_2_f_0(
#line 174 "ml_util.m"
  MR_Word ml_backend__ml_util__ModuleInfo_4,
#line 174 "ml_util.m"
  MR_Word ml_backend__ml_util__ReservedAddress_5)
#line 174 "ml_util.m"
{
#line 951 "ml_util.m"
  {
#line 951 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 951 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 951 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;

#line 953 "ml_util.m"
    {
#line 953 "ml_util.m"
      ml_backend__ml_util__V_6_6 = ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(ml_backend__ml_util__ModuleInfo_4, ml_backend__ml_util__ReservedAddress_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
    }
#line 953 "ml_util.m"
    {
#line 953 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 953 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 953 "ml_util.m"
    }
#line 951 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 951 "ml_util.m"
  }
#line 174 "ml_util.m"
}

#line 172 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_boxed_int_1_f_0(
#line 172 "ml_util.m"
  MR_Integer ml_backend__ml_util__Int_3)
#line 172 "ml_util.m"
{
#line 948 "ml_util.m"
  {
#line 948 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 948 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 948 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 948 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 948 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;

#line 949 "ml_util.m"
    {
#line 949 "ml_util.m"
      ml_backend__ml_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 949 "ml_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__V_8_8, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
#line 949 "ml_util.m"
    }
#line 949 "ml_util.m"
    {
#line 949 "ml_util.m"
      ml_backend__ml_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 949 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 1) = ((MR_Box) (ml_backend__ml_util__V_8_8));
#line 949 "ml_util.m"
    }
#line 949 "ml_util.m"
    {
#line 949 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 949 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 949 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (&ml_backend__ml_util_scalar_common_3[2]));
#line 949 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 2) = ((MR_Box) (ml_backend__ml_util__V_7_7));
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
#line 948 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 948 "ml_util.m"
  }
#line 172 "ml_util.m"
}

#line 170 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_bool_1_f_0(
#line 170 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1)
#line 170 "ml_util.m"
{
#line 945 "ml_util.m"
  {
#line 945 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 945 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;

#line 945 "ml_util.m"
#line 945 "ml_util.m"
    switch (ml_backend__ml_util__HeadVar__1_1) {
#line 945 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 945 "ml_util.m"
      case (MR_Integer) 0:
#line 945 "ml_util.m"
        {
#line 945 "ml_util.m"
          ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[0]);
#line 945 "ml_util.m"
        }
#line 945 "ml_util.m"
        break;
#line 945 "ml_util.m"
      case (MR_Integer) 1:
#line 946 "ml_util.m"
        {
#line 946 "ml_util.m"
          ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[1]);
#line 946 "ml_util.m"
        }
#line 945 "ml_util.m"
        break;
#line 945 "ml_util.m"
    }
#line 945 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 945 "ml_util.m"
  }
#line 170 "ml_util.m"
}

#line 168 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_int_1_f_0(
#line 168 "ml_util.m"
  MR_Integer ml_backend__ml_util__Int_3)
#line 168 "ml_util.m"
{
#line 940 "ml_util.m"
  {
#line 940 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 940 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 940 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 940 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 940 "ml_util.m"
    {
#line 940 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 940 "ml_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
#line 940 "ml_util.m"
    }
#line 940 "ml_util.m"
    {
#line 940 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 940 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 940 "ml_util.m"
    }
#line 940 "ml_util.m"
    {
#line 940 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 940 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 940 "ml_util.m"
    }
#line 940 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 940 "ml_util.m"
  }
#line 168 "ml_util.m"
}

#line 166 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_foreign_2_f_0(
#line 166 "ml_util.m"
  MR_Word ml_backend__ml_util__Lang_4,
#line 166 "ml_util.m"
  MR_String ml_backend__ml_util__String_5)
#line 166 "ml_util.m"
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
    MR_Word ml_backend__ml_util__V_7_7;

#line 943 "ml_util.m"
    {
#line 943 "ml_util.m"
      ml_backend__ml_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 943 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 943 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 1) = ((MR_Box) (ml_backend__ml_util__Lang_4));
#line 943 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 2) = ((MR_Box) (ml_backend__ml_util__String_5));
#line 943 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 943 "ml_util.m"
    }
#line 943 "ml_util.m"
    {
#line 943 "ml_util.m"
      ml_backend__ml_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 943 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_6_6, 1) = ((MR_Box) (ml_backend__ml_util__V_7_7));
#line 943 "ml_util.m"
    }
#line 943 "ml_util.m"
    {
#line 943 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 943 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 943 "ml_util.m"
    }
#line 942 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 942 "ml_util.m"
  }
#line 166 "ml_util.m"
}

#line 164 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_string_1_f_0(
#line 164 "ml_util.m"
  MR_String ml_backend__ml_util__String_3)
#line 164 "ml_util.m"
{
#line 938 "ml_util.m"
  {
#line 938 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 938 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 938 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 938 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 938 "ml_util.m"
    {
#line 938 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 938 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 1) = ((MR_Box) (ml_backend__ml_util__String_3));
#line 938 "ml_util.m"
    }
#line 938 "ml_util.m"
    {
#line 938 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 938 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 938 "ml_util.m"
    }
#line 938 "ml_util.m"
    {
#line 938 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 938 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 938 "ml_util.m"
    }
#line 938 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 938 "ml_util.m"
  }
#line 164 "ml_util.m"
}

#line 162 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_null_pointer_1_f_0(
#line 162 "ml_util.m"
  MR_Word ml_backend__ml_util__Type_3)
#line 162 "ml_util.m"
{
#line 936 "ml_util.m"
  {
#line 936 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 936 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 936 "ml_util.m"
    MR_Word ml_backend__ml_util__V_4_4;
#line 936 "ml_util.m"
    MR_Word ml_backend__ml_util__V_5_5;

#line 936 "ml_util.m"
    {
#line 936 "ml_util.m"
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 936 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 1) = ((MR_Box) (ml_backend__ml_util__Type_3));
#line 936 "ml_util.m"
    }
#line 936 "ml_util.m"
    {
#line 936 "ml_util.m"
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 936 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
#line 936 "ml_util.m"
    }
#line 936 "ml_util.m"
    {
#line 936 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 936 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
#line 936 "ml_util.m"
    }
#line 936 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 936 "ml_util.m"
  }
#line 162 "ml_util.m"
}

#line 159 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_maybe_3_f_0(
#line 159 "ml_util.m"
  MR_Word ml_backend__ml_util__TypeInfo_for_T_10,
#line 159 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__1_1,
#line 159 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__2_2,
#line 159 "ml_util.m"
  MR_Word ml_backend__ml_util__HeadVar__3_3)
#line 159 "ml_util.m"
{
#line 933 "ml_util.m"
  {
#line 933 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 933 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__4_4;

#line 933 "ml_util.m"
    if ((ml_backend__ml_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 936 "ml_util.m"
      {
#line 936 "ml_util.m"
        MR_Word ml_backend__ml_util__V_12_12;
#line 936 "ml_util.m"
        MR_Word ml_backend__ml_util__V_13_13;

#line 936 "ml_util.m"
        {
#line 936 "ml_util.m"
          ml_backend__ml_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 936 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_13_13, 1) = ((MR_Box) (ml_backend__ml_util__HeadVar__1_1));
#line 936 "ml_util.m"
        }
#line 936 "ml_util.m"
        {
#line 936 "ml_util.m"
          ml_backend__ml_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 936 "ml_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_12_12, 1) = ((MR_Box) (ml_backend__ml_util__V_13_13));
#line 936 "ml_util.m"
        }
#line 936 "ml_util.m"
        {
#line 936 "ml_util.m"
          ml_backend__ml_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 936 "ml_util.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__ml_util__V_12_12));
#line 936 "ml_util.m"
        }
#line 936 "ml_util.m"
      }
#line 933 "ml_util.m"
    else
#line 933 "ml_util.m"
      {
#line 933 "ml_util.m"
        MR_Box ml_backend__ml_util__X_7 = (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, (MR_Integer) 0));
#line 933 "ml_util.m"
        MR_Box MR_CALL (* ml_backend__ml_util__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
#line 933 "ml_util.m"
        MR_Box ml_backend__ml_util__conv1_HeadVar__4_4;

#line 933 "ml_util.m"
        {
#line 933 "ml_util.m"
          ml_backend__ml_util__conv1_HeadVar__4_4 = ml_backend__ml_util__func_0(((MR_Box) ml_backend__ml_util__HeadVar__2_2), ml_backend__ml_util__X_7);
        }
#line 933 "ml_util.m"
        ml_backend__ml_util__HeadVar__4_4 = ((MR_Word) ml_backend__ml_util__conv1_HeadVar__4_4);
#line 933 "ml_util.m"
      }
#line 933 "ml_util.m"
    return ml_backend__ml_util__HeadVar__4_4;
#line 933 "ml_util.m"
  }
#line 159 "ml_util.m"
}

#line 157 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_array_2_f_0(
#line 157 "ml_util.m"
  MR_Word ml_backend__ml_util__TypeInfo_for_T_7,
#line 157 "ml_util.m"
  MR_Word ml_backend__ml_util__Conv_4,
#line 157 "ml_util.m"
  MR_Word ml_backend__ml_util__List_5)
#line 157 "ml_util.m"
{
#line 931 "ml_util.m"
  {
#line 931 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 931 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__3_3;
#line 931 "ml_util.m"
    MR_Word ml_backend__ml_util__V_6_6;

#line 931 "ml_util.m"
    {
#line 931 "ml_util.m"
      ml_backend__ml_util__V_6_6 = mercury__list__map_2_f_0(ml_backend__ml_util__TypeInfo_for_T_7, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_util__Conv_4, ml_backend__ml_util__List_5);
    }
#line 931 "ml_util.m"
    {
#line 931 "ml_util.m"
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 931 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
#line 931 "ml_util.m"
    }
#line 931 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 931 "ml_util.m"
  }
#line 157 "ml_util.m"
}

#line 155 "ml_util.m"
MR_Word MR_CALL 
ml_backend__ml_util__gen_init_builtin_const_1_f_0(
#line 155 "ml_util.m"
  MR_String ml_backend__ml_util__Name_3)
#line 155 "ml_util.m"
{
#line 921 "ml_util.m"
  {
#line 921 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 921 "ml_util.m"
    MR_Word ml_backend__ml_util__HeadVar__2_2;
#line 921 "ml_util.m"
    MR_Word ml_backend__ml_util__Rval_4;
#line 921 "ml_util.m"
    MR_Word ml_backend__ml_util__PrivateBuiltin_5;
#line 921 "ml_util.m"
    MR_Word ml_backend__ml_util__MLDS_Module_6;
#line 921 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 921 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 921 "ml_util.m"
    MR_Word ml_backend__ml_util__V_11_11;

#line 922 "ml_util.m"
    {
#line 922 "ml_util.m"
      ml_backend__ml_util__PrivateBuiltin_5 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 923 "ml_util.m"
    {
#line 923 "ml_util.m"
      ml_backend__ml_util__MLDS_Module_6 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_util__PrivateBuiltin_5);
    }
#line 929 "ml_util.m"
    {
#line 929 "ml_util.m"
      ml_backend__ml_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 929 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_11_11, 0) = ((MR_Box) (ml_backend__ml_util__Name_3));
#line 929 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 929 "ml_util.m"
    }
#line 928 "ml_util.m"
    {
#line 928 "ml_util.m"
      ml_backend__ml_util__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 928 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 0) = ((MR_Box) (ml_backend__ml_util__MLDS_Module_6));
#line 928 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 1) = ((MR_Box) ((MR_Integer) 0));
#line 928 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 2) = ((MR_Box) (ml_backend__ml_util__V_11_11));
#line 928 "ml_util.m"
    }
#line 928 "ml_util.m"
    {
#line 928 "ml_util.m"
      ml_backend__ml_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 928 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_8_8, 0) = ((MR_Box) (ml_backend__ml_util__V_9_9));
#line 928 "ml_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 928 "ml_util.m"
    }
#line 928 "ml_util.m"
    {
#line 928 "ml_util.m"
      ml_backend__ml_util__Rval_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 928 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, 0) = ((MR_Box) (ml_backend__ml_util__V_8_8));
#line 928 "ml_util.m"
    }
#line 921 "ml_util.m"
    {
#line 921 "ml_util.m"
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 921 "ml_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_4));
#line 921 "ml_util.m"
    }
#line 921 "ml_util.m"
    return ml_backend__ml_util__HeadVar__2_2;
#line 921 "ml_util.m"
  }
#line 155 "ml_util.m"
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
#line 901 "ml_util.m"
  {
#line 901 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 901 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 901 "ml_util.m"
#line 901 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Lval_4)) {
#line 901 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 901 "ml_util.m"
      case (MR_Integer) 0:
#line 901 "ml_util.m"
        {
#line 901 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
#line 901 "ml_util.m"
          MR_Word ml_backend__ml_util___MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 901 "ml_util.m"
          MR_Word ml_backend__ml_util___FieldId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 2)));
#line 901 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 3)));
#line 901 "ml_util.m"
          MR_Word ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 4)));

#line 902 "ml_util.m"
          {
#line 902 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_8, ml_backend__ml_util__DataName_5);
          }
#line 901 "ml_util.m"
        }
#line 901 "ml_util.m"
        break;
#line 901 "ml_util.m"
      case (MR_Integer) 1:
#line 904 "ml_util.m"
        {
#line 904 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 904 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));

#line 905 "ml_util.m"
          {
#line 905 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_19, ml_backend__ml_util__DataName_5);
          }
#line 904 "ml_util.m"
        }
#line 901 "ml_util.m"
        break;
#line 901 "ml_util.m"
      case (MR_Integer) 2:
#line 908 "ml_util.m"
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 901 "ml_util.m"
        break;
#line 901 "ml_util.m"
      case (MR_Integer) 3:
#line 910 "ml_util.m"
        {
#line 910 "ml_util.m"
          MR_Word ml_backend__ml_util__ModuleName_14;
#line 910 "ml_util.m"
          MR_Word ml_backend__ml_util__QualKind_15;
#line 910 "ml_util.m"
          MR_Word ml_backend__ml_util__Name_16;
#line 910 "ml_util.m"
          MR_Word ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
#line 910 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
#line 912 "ml_util.m"
          MR_Word ml_backend__ml_util__V_18_18;
#line 912 "ml_util.m"
          MR_Word ml_backend__ml_util__V_22_22;
#line 912 "ml_util.m"
          MR_Word ml_backend__ml_util__V_23_23;
#line 912 "ml_util.m"
          MR_Word ml_backend__ml_util__V_24_24;

#line 910 "ml_util.m"
          ml_backend__ml_util__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 0)));
#line 910 "ml_util.m"
          ml_backend__ml_util__QualKind_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 1)));
#line 910 "ml_util.m"
          ml_backend__ml_util__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 2)));
#line 912 "ml_util.m"
          ml_backend__ml_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
#line 912 "ml_util.m"
          ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));
#line 912 "ml_util.m"
          ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
#line 912 "ml_util.m"
          {
#line 912 "ml_util.m"
            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_14, ml_backend__ml_util__V_22_22);
          }
#line 912 "ml_util.m"
          if (ml_backend__ml_util__succeeded)
#line 912 "ml_util.m"
            {
#line 912 "ml_util.m"
              ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_15 == ml_backend__ml_util__V_23_23);
#line 912 "ml_util.m"
              if (ml_backend__ml_util__succeeded)
#line 912 "ml_util.m"
                {
#line 912 "ml_util.m"
                  ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 912 "ml_util.m"
                  if (ml_backend__ml_util__succeeded)
#line 912 "ml_util.m"
                    {
#line 912 "ml_util.m"
                      ml_backend__ml_util__V_24_24 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_18_18), (MR_Integer) 1);
#line 912 "ml_util.m"
                      {
#line 912 "ml_util.m"
                        ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_util__Name_16, ml_backend__ml_util__V_24_24);
                      }
#line 912 "ml_util.m"
                    }
#line 912 "ml_util.m"
                }
#line 912 "ml_util.m"
            }
#line 914 "ml_util.m"
          if (ml_backend__ml_util__succeeded)
#line 913 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 914 "ml_util.m"
          else
#line 915 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 910 "ml_util.m"
        }
#line 901 "ml_util.m"
        break;
#line 901 "ml_util.m"
    }
#line 901 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 901 "ml_util.m"
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
#line 888 "ml_util.m"
  while (MR_TRUE)
#line 888 "ml_util.m"
    {
#line 888 "ml_util.m"
      /* tailcall optimized into a loop */
#line 888 "ml_util.m"
      {
#line 888 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 888 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 888 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 888 "ml_util.m"
        else
#line 889 "ml_util.m"
          {
#line 889 "ml_util.m"
            MR_Word ml_backend__ml_util__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 889 "ml_util.m"
            MR_Word ml_backend__ml_util__Lvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 889 "ml_util.m"
            MR_Word ml_backend__ml_util__LvalContainsVar_9;

#line 890 "ml_util.m"
            {
#line 890 "ml_util.m"
              ml_backend__ml_util__LvalContainsVar_9 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 894 "ml_util.m"
#line 894 "ml_util.m"
            switch (ml_backend__ml_util__LvalContainsVar_9) {
#line 894 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 894 "ml_util.m"
              case (MR_Integer) 0:
#line 896 "ml_util.m"
                {
#line 896 "ml_util.m"
                  /* direct tailcall eliminated */
#line 896 "ml_util.m"
                  {
#line 896 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Lvals_6;

#line 896 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 896 "ml_util.m"
                  }
#line 896 "ml_util.m"
                  continue;
#line 896 "ml_util.m"
                }
#line 894 "ml_util.m"
                break;
#line 894 "ml_util.m"
              case (MR_Integer) 1:
#line 893 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 894 "ml_util.m"
                break;
#line 894 "ml_util.m"
            }
#line 889 "ml_util.m"
          }
#line 888 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 888 "ml_util.m"
      }
#line 888 "ml_util.m"
      break;
#line 888 "ml_util.m"
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
#line 829 "ml_util.m"
  while (MR_TRUE)
#line 829 "ml_util.m"
    {
#line 829 "ml_util.m"
      /* tailcall optimized into a loop */
#line 829 "ml_util.m"
      {
#line 829 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 829 "ml_util.m"
        MR_Word ml_backend__ml_util__ContainsVar_6;

#line 829 "ml_util.m"
#line 829 "ml_util.m"
        switch (MR_tag((MR_Word) ml_backend__ml_util__Rval_4)) {
#line 829 "ml_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 829 "ml_util.m"
          case (MR_Integer) 0:
#line 879 "ml_util.m"
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 829 "ml_util.m"
            break;
#line 829 "ml_util.m"
          case (MR_Integer) 1:
#line 829 "ml_util.m"
            {
#line 829 "ml_util.m"
              MR_Word ml_backend__ml_util__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

#line 830 "ml_util.m"
              {
#line 830 "ml_util.m"
                return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_7, ml_backend__ml_util__DataName_5);
              }
#line 829 "ml_util.m"
            }
#line 829 "ml_util.m"
            break;
#line 829 "ml_util.m"
          case (MR_Integer) 2:
#line 832 "ml_util.m"
            {
#line 832 "ml_util.m"
              MR_Word ml_backend__ml_util__SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));
#line 832 "ml_util.m"
              MR_Integer ml_backend__ml_util___Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

#line 833 "ml_util.m"
              /* direct tailcall eliminated */
#line 833 "ml_util.m"
              {
#line 833 "ml_util.m"
                MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__SubRval_9;

#line 833 "ml_util.m"
                ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 833 "ml_util.m"
              }
#line 833 "ml_util.m"
              continue;
#line 832 "ml_util.m"
            }
#line 829 "ml_util.m"
            break;
#line 829 "ml_util.m"
          case (MR_Integer) 3:
#line 829 "ml_util.m"
#line 829 "ml_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) {
#line 829 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 829 "ml_util.m"
              case (MR_Integer) 0:
#line 835 "ml_util.m"
                {
#line 835 "ml_util.m"
                  MR_Word ml_backend__ml_util__Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 845 "ml_util.m"
#line 845 "ml_util.m"
                  switch (MR_tag((MR_Word) ml_backend__ml_util__Const_10)) {
#line 845 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 845 "ml_util.m"
                    case (MR_Integer) 0:
#line 859 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 845 "ml_util.m"
                      break;
#line 845 "ml_util.m"
                    case (MR_Integer) 1:
#line 837 "ml_util.m"
                      {
#line 837 "ml_util.m"
                        MR_Word ml_backend__ml_util__DataAddr_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__Const_10), (MR_Integer) 1);
#line 837 "ml_util.m"
                        MR_Word ml_backend__ml_util__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataAddr_11, (MR_Integer) 0)));
#line 837 "ml_util.m"
                        MR_Word ml_backend__ml_util__RawDataName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataAddr_11, (MR_Integer) 1)));
#line 839 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
#line 839 "ml_util.m"
                        MR_Word ml_backend__ml_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
#line 839 "ml_util.m"
                        MR_Word ml_backend__ml_util___QualKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));

#line 839 "ml_util.m"
                        {
#line 839 "ml_util.m"
                          ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_12, ml_backend__ml_util__V_40_40);
                        }
#line 839 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 839 "ml_util.m"
                          {
#line 839 "ml_util.m"
                            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__RawDataName_13, ml_backend__ml_util__V_41_41);
                          }
#line 842 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 841 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 842 "ml_util.m"
                        else
#line 843 "ml_util.m"
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 837 "ml_util.m"
                      }
#line 845 "ml_util.m"
                      break;
#line 845 "ml_util.m"
                    case (MR_Integer) 2:
#line 859 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 845 "ml_util.m"
                      break;
#line 845 "ml_util.m"
                    case (MR_Integer) 3:
#line 859 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 845 "ml_util.m"
                      break;
#line 845 "ml_util.m"
                  }
#line 835 "ml_util.m"
                }
#line 829 "ml_util.m"
                break;
#line 829 "ml_util.m"
              case (MR_Integer) 1:
#line 862 "ml_util.m"
                {
#line 862 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 862 "ml_util.m"
                  MR_Word ml_backend__ml_util___Op_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 863 "ml_util.m"
                  /* direct tailcall eliminated */
#line 863 "ml_util.m"
                  {
#line 863 "ml_util.m"
                    MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__RvalA_29;

#line 863 "ml_util.m"
                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 863 "ml_util.m"
                  }
#line 863 "ml_util.m"
                  continue;
#line 862 "ml_util.m"
                }
#line 829 "ml_util.m"
                break;
#line 829 "ml_util.m"
              case (MR_Integer) 2:
#line 865 "ml_util.m"
                {
#line 865 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 3)));
#line 865 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalAContainsVar_31;
#line 865 "ml_util.m"
                  MR_Word ml_backend__ml_util__RvalA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 865 "ml_util.m"
                  MR_Word ml_backend__ml_util___Op_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 866 "ml_util.m"
                  {
#line 866 "ml_util.m"
                    ml_backend__ml_util__RvalAContainsVar_31 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__RvalA_38, ml_backend__ml_util__DataName_5);
                  }
#line 870 "ml_util.m"
#line 870 "ml_util.m"
                  switch (ml_backend__ml_util__RvalAContainsVar_31) {
#line 870 "ml_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 870 "ml_util.m"
                    case (MR_Integer) 0:
#line 872 "ml_util.m"
                      {
#line 872 "ml_util.m"
                        /* direct tailcall eliminated */
#line 872 "ml_util.m"
                        {
#line 872 "ml_util.m"
                          MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__RvalB_30;

#line 872 "ml_util.m"
                          ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 872 "ml_util.m"
                        }
#line 872 "ml_util.m"
                        continue;
#line 872 "ml_util.m"
                      }
#line 870 "ml_util.m"
                      break;
#line 870 "ml_util.m"
                    case (MR_Integer) 1:
#line 869 "ml_util.m"
                      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
#line 870 "ml_util.m"
                      break;
#line 870 "ml_util.m"
                  }
#line 865 "ml_util.m"
                }
#line 829 "ml_util.m"
                break;
#line 829 "ml_util.m"
              case (MR_Integer) 3:
#line 875 "ml_util.m"
                {
#line 875 "ml_util.m"
                  MR_Word ml_backend__ml_util__Lval_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 876 "ml_util.m"
                  {
#line 876 "ml_util.m"
                    return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_39, ml_backend__ml_util__DataName_5);
                  }
#line 875 "ml_util.m"
                }
#line 829 "ml_util.m"
                break;
#line 829 "ml_util.m"
              case (MR_Integer) 4:
#line 881 "ml_util.m"
                {
#line 881 "ml_util.m"
                  MR_Word ml_backend__ml_util__IndexRval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
#line 881 "ml_util.m"
                  MR_Word ml_backend__ml_util___VectorCommon_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

#line 882 "ml_util.m"
                  /* direct tailcall eliminated */
#line 882 "ml_util.m"
                  {
#line 882 "ml_util.m"
                    MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__IndexRval_34;

#line 882 "ml_util.m"
                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
#line 882 "ml_util.m"
                  }
#line 882 "ml_util.m"
                  continue;
#line 881 "ml_util.m"
                }
#line 829 "ml_util.m"
                break;
#line 829 "ml_util.m"
              case (MR_Integer) 5:
#line 885 "ml_util.m"
                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 829 "ml_util.m"
                break;
#line 829 "ml_util.m"
            }
#line 829 "ml_util.m"
            break;
#line 829 "ml_util.m"
        }
#line 829 "ml_util.m"
        return ml_backend__ml_util__ContainsVar_6;
#line 829 "ml_util.m"
      }
#line 829 "ml_util.m"
      break;
#line 829 "ml_util.m"
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

#line 825 "ml_util.m"
        {
#line 825 "ml_util.m"
          return ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
        }
#line 824 "ml_util.m"
      }
#line 823 "ml_util.m"
    return ml_backend__ml_util__HeadVar__3_3;
#line 823 "ml_util.m"
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
#line 812 "ml_util.m"
  while (MR_TRUE)
#line 812 "ml_util.m"
    {
#line 812 "ml_util.m"
      /* tailcall optimized into a loop */
#line 812 "ml_util.m"
      {
#line 812 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 812 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 812 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 812 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 812 "ml_util.m"
        else
#line 813 "ml_util.m"
          {
#line 813 "ml_util.m"
            MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 813 "ml_util.m"
            MR_Word ml_backend__ml_util__Rvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 813 "ml_util.m"
            MR_Word ml_backend__ml_util__RvalContainsVar_9;

#line 814 "ml_util.m"
            {
#line 814 "ml_util.m"
              ml_backend__ml_util__RvalContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 818 "ml_util.m"
#line 818 "ml_util.m"
            switch (ml_backend__ml_util__RvalContainsVar_9) {
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
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Rvals_6;

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
#line 812 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 812 "ml_util.m"
      }
#line 812 "ml_util.m"
      break;
#line 812 "ml_util.m"
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
#line 785 "ml_util.m"
  {
#line 785 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 785 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;

#line 785 "ml_util.m"
#line 785 "ml_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_util__Initializer_4)) {
#line 785 "ml_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 785 "ml_util.m"
      case (MR_Integer) 0:
#line 786 "ml_util.m"
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
#line 785 "ml_util.m"
        break;
#line 785 "ml_util.m"
      case (MR_Integer) 1:
#line 788 "ml_util.m"
        {
#line 788 "ml_util.m"
          MR_Word ml_backend__ml_util__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 789 "ml_util.m"
          {
#line 789 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_7, ml_backend__ml_util__DataName_5);
          }
#line 788 "ml_util.m"
        }
#line 785 "ml_util.m"
        break;
#line 785 "ml_util.m"
      case (MR_Integer) 2:
#line 791 "ml_util.m"
        {
#line 791 "ml_util.m"
          MR_Word ml_backend__ml_util__FieldInitializers_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 1)));
#line 791 "ml_util.m"
          MR_Word ml_backend__ml_util___Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 792 "ml_util.m"
          {
#line 792 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__FieldInitializers_9, ml_backend__ml_util__DataName_5);
          }
#line 791 "ml_util.m"
        }
#line 785 "ml_util.m"
        break;
#line 785 "ml_util.m"
      case (MR_Integer) 3:
#line 794 "ml_util.m"
        {
#line 794 "ml_util.m"
          MR_Word ml_backend__ml_util__ElementInitializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

#line 795 "ml_util.m"
          {
#line 795 "ml_util.m"
            return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__ElementInitializers_10, ml_backend__ml_util__DataName_5);
          }
#line 794 "ml_util.m"
        }
#line 785 "ml_util.m"
        break;
#line 785 "ml_util.m"
    }
#line 785 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 785 "ml_util.m"
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
#line 727 "ml_util.m"
  {
#line 727 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 727 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;
#line 727 "ml_util.m"
    MR_Word ml_backend__ml_util__DefnBody_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 3)));
#line 728 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 0)));
#line 728 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 1)));
#line 728 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 2)));

#line 729 "ml_util.m"
    {
#line 729 "ml_util.m"
      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defn_body_contains_var_2_f_0(ml_backend__ml_util__DefnBody_10, ml_backend__ml_util__DataName_5);
    }
#line 727 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 727 "ml_util.m"
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
#line 716 "ml_util.m"
  while (MR_TRUE)
#line 716 "ml_util.m"
    {
#line 716 "ml_util.m"
      /* tailcall optimized into a loop */
#line 716 "ml_util.m"
      {
#line 716 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;
#line 716 "ml_util.m"
        MR_Word ml_backend__ml_util__HeadVar__3_3;

#line 716 "ml_util.m"
        if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 716 "ml_util.m"
          ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
#line 716 "ml_util.m"
        else
#line 717 "ml_util.m"
          {
#line 717 "ml_util.m"
            MR_Word ml_backend__ml_util__Defn_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 717 "ml_util.m"
            MR_Word ml_backend__ml_util__Defns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 717 "ml_util.m"
            MR_Word ml_backend__ml_util__DefnContainsVar_9;

#line 718 "ml_util.m"
            {
#line 718 "ml_util.m"
              ml_backend__ml_util__DefnContainsVar_9 = ml_backend__ml_util__defn_contains_var_2_f_0(ml_backend__ml_util__Defn_5, ml_backend__ml_util__HeadVar__2_2);
            }
#line 722 "ml_util.m"
#line 722 "ml_util.m"
            switch (ml_backend__ml_util__DefnContainsVar_9) {
#line 722 "ml_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 722 "ml_util.m"
              case (MR_Integer) 0:
#line 724 "ml_util.m"
                {
#line 724 "ml_util.m"
                  /* direct tailcall eliminated */
#line 724 "ml_util.m"
                  {
#line 724 "ml_util.m"
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Defns_6;

#line 724 "ml_util.m"
                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 724 "ml_util.m"
                  }
#line 724 "ml_util.m"
                  continue;
#line 724 "ml_util.m"
                }
#line 722 "ml_util.m"
                break;
#line 722 "ml_util.m"
              case (MR_Integer) 1:
#line 721 "ml_util.m"
                ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
#line 722 "ml_util.m"
                break;
#line 722 "ml_util.m"
            }
#line 717 "ml_util.m"
          }
#line 716 "ml_util.m"
        return ml_backend__ml_util__HeadVar__3_3;
#line 716 "ml_util.m"
      }
#line 716 "ml_util.m"
      break;
#line 716 "ml_util.m"
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
#line 702 "ml_util.m"
  {
#line 702 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 702 "ml_util.m"
    MR_Word ml_backend__ml_util__Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 702 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 703 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 703 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 703 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));

#line 704 "ml_util.m"
    {
#line 704 "ml_util.m"
      ml_backend__ml_util__V_7_7 = ml_backend__mlds__access_1_f_0(ml_backend__ml_util__Flags_5);
    }
#line 704 "ml_util.m"
    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_7_7 == (MR_Integer) 0);
#line 702 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 702 "ml_util.m"
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
#line 697 "ml_util.m"
  {
#line 697 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 697 "ml_util.m"
    MR_Word ml_backend__ml_util__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 697 "ml_util.m"
    MR_Word ml_backend__ml_util__Type_7;
#line 698 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 698 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 698 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 699 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 699 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;

#line 699 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_6)) == (MR_mktag((MR_Integer) 1)));
#line 699 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 699 "ml_util.m"
      {
#line 699 "ml_util.m"
        ml_backend__ml_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 0)));
#line 699 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 1)));
#line 699 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 2)));
#line 700 "ml_util.m"
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "ml_util.m"
      }
#line 697 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 697 "ml_util.m"
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
#line 690 "ml_util.m"
  {
#line 690 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 690 "ml_util.m"
    MR_Word ml_backend__ml_util__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 690 "ml_util.m"
    MR_Word ml_backend__ml_util__Type_7;
#line 690 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiId_10;
#line 690 "ml_util.m"
    MR_Word ml_backend__ml_util__RttiName_12;
#line 690 "ml_util.m"
    MR_Word ml_backend__ml_util__V_13_13;
#line 691 "ml_util.m"
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 691 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 691 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 692 "ml_util.m"
    MR_Word ml_backend__ml_util__V_8_8;
#line 692 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 694 "ml_util.m"
    MR_Word ml_backend__ml_util__V_11_11;

#line 692 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_6)) == (MR_mktag((MR_Integer) 1)));
#line 692 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 692 "ml_util.m"
      {
#line 692 "ml_util.m"
        ml_backend__ml_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 0)));
#line 692 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 1)));
#line 692 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 2)));
#line 693 "ml_util.m"
        ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Type_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 693 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 693 "ml_util.m"
          {
#line 693 "ml_util.m"
            ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_7, (MR_Integer) 1)));
#line 693 "ml_util.m"
            ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 693 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 693 "ml_util.m"
              {
#line 693 "ml_util.m"
                ml_backend__ml_util__RttiId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_13_13, (MR_Integer) 0)));
#line 694 "ml_util.m"
                ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__RttiId_10)) == (MR_mktag((MR_Integer) 0)));
#line 694 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 694 "ml_util.m"
                  {
#line 694 "ml_util.m"
                    ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_10, (MR_Integer) 0)));
#line 694 "ml_util.m"
                    ml_backend__ml_util__RttiName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_10, (MR_Integer) 1)));
#line 695 "ml_util.m"
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__RttiName_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 694 "ml_util.m"
                  }
#line 693 "ml_util.m"
              }
#line 693 "ml_util.m"
          }
#line 692 "ml_util.m"
      }
#line 690 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 690 "ml_util.m"
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
#line 686 "ml_util.m"
  {
#line 686 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 686 "ml_util.m"
    MR_Word ml_backend__ml_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 687 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 687 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 687 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 688 "ml_util.m"
    MR_Word ml_backend__ml_util__V_7_7;
#line 688 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_8_8;
#line 688 "ml_util.m"
    MR_Word ml_backend__ml_util__V_9_9;
#line 688 "ml_util.m"
    MR_Word ml_backend__ml_util__V_10_10;

#line 688 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_3)) == (MR_mktag((MR_Integer) 2)));
#line 688 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 688 "ml_util.m"
      {
#line 688 "ml_util.m"
        ml_backend__ml_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 688 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 688 "ml_util.m"
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 2)));
#line 688 "ml_util.m"
        ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 3)));
#line 688 "ml_util.m"
      }
#line 686 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 686 "ml_util.m"
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
#line 682 "ml_util.m"
  {
#line 682 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 682 "ml_util.m"
    MR_Word ml_backend__ml_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 683 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 683 "ml_util.m"
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 683 "ml_util.m"
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 684 "ml_util.m"
    MR_String ml_backend__ml_util__V_7_7;
#line 684 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_8_8;

#line 684 "ml_util.m"
    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_3)) == (MR_mktag((MR_Integer) 0)));
#line 684 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 684 "ml_util.m"
      {
#line 684 "ml_util.m"
        ml_backend__ml_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 684 "ml_util.m"
        ml_backend__ml_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 684 "ml_util.m"
      }
#line 682 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 682 "ml_util.m"
  }
#line 91 "ml_util.m"
}

#line 675 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(
#line 675 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 675 "ml_util.m"
{
#line 675 "ml_util.m"
  {
#line 675 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 675 "ml_util.m"
    MR_builtin_longjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0, 1);
#line 675 "ml_util.m"
  }
#line 675 "ml_util.m"
}

#line 675 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(
#line 675 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 675 "ml_util.m"
{
#line 675 "ml_util.m"
  {
#line 675 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 675 "ml_util.m"
    {
#line 679 "ml_util.m"
      MR_Word ml_backend__ml_util__V_16_16;
#line 680 "ml_util.m"
      MR_Word ml_backend__ml_util__V_17_17;
#line 680 "ml_util.m"
      MR_Word ml_backend__ml_util__V_18_18;
#line 680 "ml_util.m"
      MR_String ml_backend__ml_util__V_19_19;

#line 679 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, (MR_Integer) 0)));
#line 679 "ml_util.m"
      ml_backend__ml_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, (MR_Integer) 1)));
#line 680 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 680 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 680 "ml_util.m"
        {
#line 680 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_15, (MR_Integer) 1)));
#line 675 "ml_util.m"
          {
#line 680 "ml_util.m"
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 680 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 680 "ml_util.m"
              {
#line 680 "ml_util.m"
                {
#line 680 "ml_util.m"
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 1)));
#line 680 "ml_util.m"
                  ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 2)));
#line 680 "ml_util.m"
                  ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 3)));
#line 680 "ml_util.m"
                  ml_backend__ml_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_21_21, (MR_Integer) 4)));
#line 680 "ml_util.m"
                }
#line 675 "ml_util.m"
                {
#line 680 "ml_util.m"
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22);
#line 680 "ml_util.m"
                  if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 680 "ml_util.m"
                    {
#line 680 "ml_util.m"
                      ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_1(ml_backend__ml_util__env_ptr);
#line 680 "ml_util.m"
                      return;
                    }
#line 675 "ml_util.m"
                }
#line 680 "ml_util.m"
              }
#line 675 "ml_util.m"
          }
#line 680 "ml_util.m"
        }
#line 675 "ml_util.m"
    }
#line 675 "ml_util.m"
  }
#line 675 "ml_util.m"
}

#line 675 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(
#line 675 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 675 "ml_util.m"
{
#line 675 "ml_util.m"
  {
#line 675 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 675 "ml_util.m"
    if (MR_builtin_setjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0) == 0)
#line 675 "ml_util.m"
      {
#line 675 "ml_util.m"
        {
#line 675 "ml_util.m"
          MR_Word ml_backend__ml_util__Body_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 3)));
#line 675 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_11;
#line 675 "ml_util.m"
          MR_Word ml_backend__ml_util__V_20_20;
#line 676 "ml_util.m"
          MR_Word ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 0)));
#line 676 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 1)));
#line 676 "ml_util.m"
          MR_Word ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 2)));
#line 677 "ml_util.m"
          MR_Word ml_backend__ml_util__V_9_9;
#line 677 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10;
#line 677 "ml_util.m"
          MR_Word ml_backend__ml_util__V_12_12;
#line 677 "ml_util.m"
          MR_Word ml_backend__ml_util__V_13_13;

#line 677 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_8)) == (MR_mktag((MR_Integer) 2)));
#line 677 "ml_util.m"
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 677 "ml_util.m"
            {
#line 677 "ml_util.m"
              {
#line 677 "ml_util.m"
                ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 0)));
#line 677 "ml_util.m"
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 1)));
#line 677 "ml_util.m"
                ml_backend__ml_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 2)));
#line 677 "ml_util.m"
                ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 3)));
#line 677 "ml_util.m"
                ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 4)));
#line 677 "ml_util.m"
              }
#line 675 "ml_util.m"
              {
#line 677 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 677 "ml_util.m"
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
#line 677 "ml_util.m"
                  {
#line 677 "ml_util.m"
                    ml_backend__ml_util__FunctionBody_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_20_20), (MR_Integer) 1);
#line 675 "ml_util.m"
                    {
#line 256 "ml_util.m"
                      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14 = ml_backend__ml_util__FunctionBody_11;
#line 256 "ml_util.m"
                      {
#line 256 "ml_util.m"
                        ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(ml_backend__ml_util__env_ptr);
                      }
#line 257 "ml_util.m"
                      {
#line 257 "ml_util.m"
                        MR_Word ml_backend__ml_util__Stmt_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 0)));
#line 258 "ml_util.m"
                        MR_Word ml_backend__ml_util___Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 1)));

#line 259 "ml_util.m"
                        {
#line 259 "ml_util.m"
                          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_26, &(ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_14, ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2, ml_backend__ml_util__env_ptr);
                        }
#line 257 "ml_util.m"
                      }
#line 675 "ml_util.m"
                    }
#line 677 "ml_util.m"
                  }
#line 675 "ml_util.m"
              }
#line 677 "ml_util.m"
            }
#line 675 "ml_util.m"
        }
#line 675 "ml_util.m"
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = MR_FALSE;
#line 675 "ml_util.m"
      }
#line 675 "ml_util.m"
    else
#line 675 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = MR_TRUE;
#line 675 "ml_util.m"
  }
#line 675 "ml_util.m"
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
#line 675 "ml_util.m"
    {
#line 675 "ml_util.m"
      ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_3(&ml_backend__ml_util__env);
    }
#line 675 "ml_util.m"
    return (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
#line 86 "ml_util.m"
  }
#line 86 "ml_util.m"
}

#line 663 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(
#line 663 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 663 "ml_util.m"
{
#line 663 "ml_util.m"
  {
#line 663 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 663 "ml_util.m"
    MR_builtin_longjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0, 1);
#line 663 "ml_util.m"
  }
#line 663 "ml_util.m"
}

#line 663 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(
#line 663 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 663 "ml_util.m"
{
#line 663 "ml_util.m"
  {
#line 663 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 663 "ml_util.m"
    {
#line 667 "ml_util.m"
      MR_Word ml_backend__ml_util__V_16_16;

#line 667 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, (MR_Integer) 0)));
#line 667 "ml_util.m"
      ml_backend__ml_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, (MR_Integer) 1)));
#line 669 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 669 "ml_util.m"
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 669 "ml_util.m"
        {
#line 669 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_15, (MR_Integer) 1)));
#line 663 "ml_util.m"
          {
#line 671 "ml_util.m"
            if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 669 "ml_util.m"
              {
#line 669 "ml_util.m"
                MR_Word ml_backend__ml_util__TargetLang_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 1)));
#line 669 "ml_util.m"
                MR_Word ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 2)));

#line 670 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = (ml_backend__ml_util__TargetLang_17 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3);
#line 670 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = !((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded);
#line 669 "ml_util.m"
              }
#line 671 "ml_util.m"
            else
#line 671 "ml_util.m"
            if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 672 "ml_util.m"
              (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_TRUE;
#line 671 "ml_util.m"
            else
#line 671 "ml_util.m"
              (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_FALSE;
#line 671 "ml_util.m"
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 671 "ml_util.m"
              {
#line 671 "ml_util.m"
                ml_backend__ml_util__defn_contains_foreign_code_2_p_0_1(ml_backend__ml_util__env_ptr);
#line 671 "ml_util.m"
                return;
              }
#line 663 "ml_util.m"
          }
#line 669 "ml_util.m"
        }
#line 663 "ml_util.m"
    }
#line 663 "ml_util.m"
  }
#line 663 "ml_util.m"
}

#line 663 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(
#line 663 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 663 "ml_util.m"
{
#line 663 "ml_util.m"
  {
#line 663 "ml_util.m"
    struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 663 "ml_util.m"
    if (MR_builtin_setjmp((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0) == 0)
#line 663 "ml_util.m"
      {
#line 663 "ml_util.m"
        {
#line 663 "ml_util.m"
          MR_Word ml_backend__ml_util__Body_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 3)));
#line 663 "ml_util.m"
          MR_Word ml_backend__ml_util__FunctionBody_11;
#line 663 "ml_util.m"
          MR_Word ml_backend__ml_util__V_23_23;
#line 664 "ml_util.m"
          MR_Word ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 0)));
#line 664 "ml_util.m"
          MR_Word ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 1)));
#line 664 "ml_util.m"
          MR_Word ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 2)));
#line 665 "ml_util.m"
          MR_Word ml_backend__ml_util__V_9_9;
#line 665 "ml_util.m"
          MR_Word ml_backend__ml_util__V_10_10;
#line 665 "ml_util.m"
          MR_Word ml_backend__ml_util__V_12_12;
#line 665 "ml_util.m"
          MR_Word ml_backend__ml_util__V_13_13;

#line 665 "ml_util.m"
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_8)) == (MR_mktag((MR_Integer) 2)));
#line 665 "ml_util.m"
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 665 "ml_util.m"
            {
#line 665 "ml_util.m"
              {
#line 665 "ml_util.m"
                ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 0)));
#line 665 "ml_util.m"
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 1)));
#line 665 "ml_util.m"
                ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 2)));
#line 665 "ml_util.m"
                ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 3)));
#line 665 "ml_util.m"
                ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 4)));
#line 665 "ml_util.m"
              }
#line 663 "ml_util.m"
              {
#line 665 "ml_util.m"
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 665 "ml_util.m"
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
#line 665 "ml_util.m"
                  {
#line 665 "ml_util.m"
                    ml_backend__ml_util__FunctionBody_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_23_23), (MR_Integer) 1);
#line 663 "ml_util.m"
                    {
#line 256 "ml_util.m"
                      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14 = ml_backend__ml_util__FunctionBody_11;
#line 256 "ml_util.m"
                      {
#line 256 "ml_util.m"
                        ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(ml_backend__ml_util__env_ptr);
                      }
#line 257 "ml_util.m"
                      {
#line 257 "ml_util.m"
                        MR_Word ml_backend__ml_util__Stmt_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 0)));
#line 258 "ml_util.m"
                        MR_Word ml_backend__ml_util___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 1)));

#line 259 "ml_util.m"
                        {
#line 259 "ml_util.m"
                          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_30, &(ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_14, ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2, ml_backend__ml_util__env_ptr);
                        }
#line 257 "ml_util.m"
                      }
#line 663 "ml_util.m"
                    }
#line 665 "ml_util.m"
                  }
#line 663 "ml_util.m"
              }
#line 665 "ml_util.m"
            }
#line 663 "ml_util.m"
        }
#line 663 "ml_util.m"
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_FALSE;
#line 663 "ml_util.m"
      }
#line 663 "ml_util.m"
    else
#line 663 "ml_util.m"
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = MR_TRUE;
#line 663 "ml_util.m"
  }
#line 663 "ml_util.m"
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
#line 663 "ml_util.m"
    {
#line 663 "ml_util.m"
      ml_backend__ml_util__defn_contains_foreign_code_2_p_0_3(&ml_backend__ml_util__env);
    }
#line 663 "ml_util.m"
    return (ml_backend__ml_util__env).ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
#line 78 "ml_util.m"
  }
#line 78 "ml_util.m"
}

#line 651 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
#line 651 "ml_util.m"
  void * ml_backend__ml_util__env_ptr_arg)
#line 651 "ml_util.m"
{
#line 651 "ml_util.m"
  {
#line 651 "ml_util.m"
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s *) ml_backend__ml_util__env_ptr_arg;

#line 651 "ml_util.m"
    *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12));
#line 651 "ml_util.m"
    {
#line 651 "ml_util.m"
      ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr);
#line 651 "ml_util.m"
      return;
    }
#line 651 "ml_util.m"
  }
#line 651 "ml_util.m"
}

#line 651 "ml_util.m"
static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
#line 651 "ml_util.m"
  MR_Box ml_backend__ml_util__closure_arg,
#line 651 "ml_util.m"
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
#line 651 "ml_util.m"
  MR_Cont ml_backend__ml_util__cont,
#line 651 "ml_util.m"
  void * ml_backend__ml_util__cont_env_ptr)
#line 651 "ml_util.m"
{
#line 651 "ml_util.m"
  {
#line 651 "ml_util.m"
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s ml_backend__ml_util__env;

#line 651 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1 = ml_backend__ml_util__wrapper_arg_1;
#line 651 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont = ml_backend__ml_util__cont;
#line 651 "ml_util.m"
    (ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
#line 651 "ml_util.m"
    {
#line 651 "ml_util.m"
      MR_Box ml_backend__ml_util__closure = ml_backend__ml_util__closure_arg;

#line 651 "ml_util.m"
      {
#line 651 "ml_util.m"
        ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__651__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__closure, (MR_Integer) 3))), &(ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12, ml_backend__ml_util__has_foreign_languages_2_p_0_1, &ml_backend__ml_util__env);
      }
#line 651 "ml_util.m"
    }
#line 651 "ml_util.m"
  }
#line 651 "ml_util.m"
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
#line 650 "ml_util.m"
  {
#line 650 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 650 "ml_util.m"
    MR_Word ml_backend__ml_util__GetTargetCode_5;

#line 651 "ml_util.m"
    {
#line 651 "ml_util.m"
      ml_backend__ml_util__GetTargetCode_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 651 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 0) = ((MR_Box) (&ml_backend__ml_util_scalar_common_2[0]));
#line 651 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 1) = ((MR_Box) (ml_backend__ml_util__has_foreign_languages_2_p_0_2));
#line 651 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 651 "ml_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 3) = ((MR_Box) (ml_backend__ml_util__Statement_3));
#line 651 "ml_util.m"
    }
#line 656 "ml_util.m"
    {
#line 656 "ml_util.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ml_backend__ml_util__GetTargetCode_5, ml_backend__ml_util__Langs_4);
#line 656 "ml_util.m"
      return;
    }
#line 650 "ml_util.m"
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
#line 341 "ml_util.m"
  {
#line 341 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;
#line 341 "ml_util.m"
    MR_Word ml_backend__ml_util__ContainsVar_6;
#line 341 "ml_util.m"
    MR_Word ml_backend__ml_util__Stmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 0)));
#line 342 "ml_util.m"
    MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 1)));

#line 343 "ml_util.m"
    {
#line 343 "ml_util.m"
      return ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_7, ml_backend__ml_util__DataName_5);
    }
#line 341 "ml_util.m"
    return ml_backend__ml_util__ContainsVar_6;
#line 341 "ml_util.m"
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
#line 263 "ml_util.m"
  while (MR_TRUE)
#line 263 "ml_util.m"
    {
#line 263 "ml_util.m"
      /* tailcall optimized into a loop */
#line 263 "ml_util.m"
      {
#line 263 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded;

#line 263 "ml_util.m"
#line 263 "ml_util.m"
        switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) {
#line 263 "ml_util.m"
          case (MR_Integer) 0:
#line 263 "ml_util.m"
            {
#line 263 "ml_util.m"
              MR_Word ml_backend__ml_util__Statements_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
#line 263 "ml_util.m"
              MR_Word ml_backend__ml_util___Defns_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));

#line 264 "ml_util.m"
              {
#line 264 "ml_util.m"
                ml_backend__ml_util__statements_contains_statement_2_p_0(ml_backend__ml_util__Statements_6, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 264 "ml_util.m"
                return;
              }
#line 263 "ml_util.m"
            }
#line 263 "ml_util.m"
            break;
#line 263 "ml_util.m"
          case (MR_Integer) 1:
#line 266 "ml_util.m"
            {
#line 266 "ml_util.m"
              MR_Word ml_backend__ml_util__Statement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 266 "ml_util.m"
              MR_Word ml_backend__ml_util___Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));
#line 266 "ml_util.m"
              MR_Word ml_backend__ml_util___Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

#line 256 "ml_util.m"
              *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Statement_9;
#line 256 "ml_util.m"
              {
#line 256 "ml_util.m"
                ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
              }
#line 257 "ml_util.m"
              {
#line 257 "ml_util.m"
                MR_Word ml_backend__ml_util__Stmt_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_9, (MR_Integer) 0)));
#line 258 "ml_util.m"
                MR_Word ml_backend__ml_util___Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_9, (MR_Integer) 1)));

#line 259 "ml_util.m"
                /* direct tailcall eliminated */
#line 259 "ml_util.m"
                {
#line 259 "ml_util.m"
                  MR_Word ml_backend__ml_util__Stmt__tmp_copy_3 = ml_backend__ml_util__Stmt_56;

#line 259 "ml_util.m"
                  ml_backend__ml_util__Stmt_3 = ml_backend__ml_util__Stmt__tmp_copy_3;
#line 259 "ml_util.m"
                }
#line 259 "ml_util.m"
                continue;
#line 257 "ml_util.m"
              }
#line 266 "ml_util.m"
            }
#line 263 "ml_util.m"
            break;
#line 263 "ml_util.m"
          case (MR_Integer) 2:
#line 269 "ml_util.m"
            {
#line 269 "ml_util.m"
              MR_Word ml_backend__ml_util__Then_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
#line 269 "ml_util.m"
              MR_Word ml_backend__ml_util__MaybeElse_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 269 "ml_util.m"
              MR_Word ml_backend__ml_util___Cond_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));

#line 256 "ml_util.m"
              *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Then_11;
#line 256 "ml_util.m"
              {
#line 256 "ml_util.m"
                ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
              }
#line 257 "ml_util.m"
              {
#line 257 "ml_util.m"
                MR_Word ml_backend__ml_util__Stmt_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_11, (MR_Integer) 0)));
#line 258 "ml_util.m"
                MR_Word ml_backend__ml_util___Context_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_11, (MR_Integer) 1)));

#line 259 "ml_util.m"
                {
#line 259 "ml_util.m"
                  ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_41, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                }
#line 257 "ml_util.m"
              }
#line 271 "ml_util.m"
              {
#line 271 "ml_util.m"
                ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(ml_backend__ml_util__MaybeElse_12, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 271 "ml_util.m"
                return;
              }
#line 269 "ml_util.m"
            }
#line 263 "ml_util.m"
            break;
#line 263 "ml_util.m"
          case (MR_Integer) 3:
#line 263 "ml_util.m"
#line 263 "ml_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)))) {
#line 263 "ml_util.m"
              case (MR_Integer) 0:
#line 274 "ml_util.m"
                {
#line 274 "ml_util.m"
                  MR_Word ml_backend__ml_util__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 4)));
#line 274 "ml_util.m"
                  MR_Word ml_backend__ml_util__Default_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 5)));
#line 274 "ml_util.m"
                  MR_Word ml_backend__ml_util___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
#line 274 "ml_util.m"
                  MR_Word ml_backend__ml_util___Val_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 274 "ml_util.m"
                  MR_Word ml_backend__ml_util___Range_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));

#line 275 "ml_util.m"
                  {
#line 275 "ml_util.m"
                    ml_backend__ml_util__cases_contains_statement_2_p_0(ml_backend__ml_util__Cases_16, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                  }
#line 276 "ml_util.m"
                  {
#line 276 "ml_util.m"
                    ml_backend__ml_util__default_contains_statement_2_p_0(ml_backend__ml_util__Default_17, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 276 "ml_util.m"
                    return;
                  }
#line 274 "ml_util.m"
                }
#line 263 "ml_util.m"
                break;
#line 263 "ml_util.m"
              case (MR_Integer) 6:
#line 279 "ml_util.m"
                {
#line 279 "ml_util.m"
                  MR_Word ml_backend__ml_util__Handler_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));
#line 279 "ml_util.m"
                  MR_Word ml_backend__ml_util__Statement_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
#line 279 "ml_util.m"
                  MR_Word ml_backend__ml_util___Ref_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

#line 256 "ml_util.m"
                  *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Statement_31;
#line 256 "ml_util.m"
                  {
#line 256 "ml_util.m"
                    ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
                  }
#line 257 "ml_util.m"
                  {
#line 257 "ml_util.m"
                    MR_Word ml_backend__ml_util__Stmt_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_31, (MR_Integer) 0)));
#line 258 "ml_util.m"
                    MR_Word ml_backend__ml_util___Context_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_31, (MR_Integer) 1)));

#line 259 "ml_util.m"
                    {
#line 259 "ml_util.m"
                      ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_46, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                    }
#line 257 "ml_util.m"
                  }
#line 256 "ml_util.m"
                  *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Handler_19;
#line 256 "ml_util.m"
                  {
#line 256 "ml_util.m"
                    ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
                  }
#line 257 "ml_util.m"
                  {
#line 257 "ml_util.m"
                    MR_Word ml_backend__ml_util__Stmt_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Handler_19, (MR_Integer) 0)));
#line 258 "ml_util.m"
                    MR_Word ml_backend__ml_util___Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Handler_19, (MR_Integer) 1)));

#line 259 "ml_util.m"
                    /* direct tailcall eliminated */
#line 259 "ml_util.m"
                    {
#line 259 "ml_util.m"
                      MR_Word ml_backend__ml_util__Stmt__tmp_copy_3 = ml_backend__ml_util__Stmt_51;

#line 259 "ml_util.m"
                      ml_backend__ml_util__Stmt_3 = ml_backend__ml_util__Stmt__tmp_copy_3;
#line 259 "ml_util.m"
                    }
#line 259 "ml_util.m"
                    continue;
#line 257 "ml_util.m"
                  }
#line 279 "ml_util.m"
                }
#line 263 "ml_util.m"
                break;
#line 263 "ml_util.m"
            }
#line 263 "ml_util.m"
            break;
#line 263 "ml_util.m"
        }
#line 263 "ml_util.m"
      }
#line 263 "ml_util.m"
      break;
#line 263 "ml_util.m"
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
#line 256 "ml_util.m"
  {
#line 256 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded;

#line 256 "ml_util.m"
    *ml_backend__ml_util__HeadVar__2_2 = ml_backend__ml_util__Statement_1;
#line 256 "ml_util.m"
    {
#line 256 "ml_util.m"
      ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
    }
#line 257 "ml_util.m"
    {
#line 257 "ml_util.m"
      MR_Word ml_backend__ml_util__Stmt_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_1, (MR_Integer) 0)));
#line 258 "ml_util.m"
      MR_Word ml_backend__ml_util___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_1, (MR_Integer) 1)));

#line 259 "ml_util.m"
      {
#line 259 "ml_util.m"
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_6, ml_backend__ml_util__HeadVar__2_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
#line 259 "ml_util.m"
        return;
      }
#line 257 "ml_util.m"
    }
#line 256 "ml_util.m"
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
#line 202 "ml_util.m"
  {
#line 202 "ml_util.m"
    MR_bool ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Call_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__TypeInfo_33_33;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__FuncRval_6;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__MaybeObject_7;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__CallKind_10;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__CodeAddr_11;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__QualifiedProcLabel_12;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__MaybeSeqNum_14;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__ProcLabel_16;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__PredLabel_17;
#line 202 "ml_util.m"
    MR_Integer ml_backend__ml_util__ProcId_18;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__ModuleName_19;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__FuncName_20;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__V_22_22;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__V_23_23;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__V_24_24;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__V_27_27;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__V_28_28;
#line 202 "ml_util.m"
    MR_Integer ml_backend__ml_util__V_29_29;
#line 202 "ml_util.m"
    MR_Word ml_backend__ml_util__V_30_30;
#line 203 "ml_util.m"
    MR_Word ml_backend__ml_util___Signature_5;
#line 203 "ml_util.m"
    MR_Word ml_backend__ml_util___CallArgs_8;
#line 203 "ml_util.m"
    MR_Word ml_backend__ml_util___Results_9;
#line 224 "ml_util.m"
    MR_Word ml_backend__ml_util__V_21_21;

#line 203 "ml_util.m"
    if (ml_backend__ml_util__succeeded)
#line 203 "ml_util.m"
      {
#line 203 "ml_util.m"
        ml_backend__ml_util___Signature_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 1)));
#line 203 "ml_util.m"
        ml_backend__ml_util__FuncRval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 2)));
#line 203 "ml_util.m"
        ml_backend__ml_util__MaybeObject_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 3)));
#line 203 "ml_util.m"
        ml_backend__ml_util___CallArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 4)));
#line 203 "ml_util.m"
        ml_backend__ml_util___Results_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 5)));
#line 203 "ml_util.m"
        ml_backend__ml_util__CallKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Call_4, (MR_Integer) 6)));
#line 206 "ml_util.m"
#line 206 "ml_util.m"
        switch (ml_backend__ml_util__CallKind_10) {
#line 206 "ml_util.m"
          default:
#line 206 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_FALSE;
#line 206 "ml_util.m"
            break;
#line 206 "ml_util.m"
          case (MR_Integer) 0:
#line 206 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_TRUE;
#line 206 "ml_util.m"
            break;
#line 206 "ml_util.m"
          case (MR_Integer) 1:
#line 206 "ml_util.m"
            ml_backend__ml_util__succeeded = MR_TRUE;
#line 206 "ml_util.m"
            break;
#line 206 "ml_util.m"
        }
#line 202 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 202 "ml_util.m"
          {
#line 209 "ml_util.m"
            ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__FuncRval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__FuncRval_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 209 "ml_util.m"
            if (ml_backend__ml_util__succeeded)
#line 209 "ml_util.m"
              {
#line 209 "ml_util.m"
                ml_backend__ml_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__FuncRval_6, (MR_Integer) 1)));
#line 209 "ml_util.m"
                ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 209 "ml_util.m"
                if (ml_backend__ml_util__succeeded)
#line 209 "ml_util.m"
                  {
#line 209 "ml_util.m"
                    ml_backend__ml_util__CodeAddr_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_22_22, (MR_Integer) 1)));
#line 213 "ml_util.m"
                    if (((MR_tag((MR_Word) ml_backend__ml_util__CodeAddr_11)) == (MR_mktag((MR_Integer) 1))))
#line 214 "ml_util.m"
                      {
#line 214 "ml_util.m"
                        MR_Integer ml_backend__ml_util__SeqNum_15;
#line 214 "ml_util.m"
                        MR_Word ml_backend__ml_util___Sig_25;

#line 214 "ml_util.m"
                        ml_backend__ml_util__QualifiedProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 0)));
#line 214 "ml_util.m"
                        ml_backend__ml_util__SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 1)));
#line 214 "ml_util.m"
                        ml_backend__ml_util___Sig_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 2)));
#line 215 "ml_util.m"
                        {
#line 215 "ml_util.m"
                          ml_backend__ml_util__MaybeSeqNum_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 215 "ml_util.m"
                          MR_hl_field(MR_mktag(1), ml_backend__ml_util__MaybeSeqNum_14, 0) = ((MR_Box) (ml_backend__ml_util__SeqNum_15));
#line 215 "ml_util.m"
                        }
#line 214 "ml_util.m"
                      }
#line 213 "ml_util.m"
                    else
#line 211 "ml_util.m"
                      {
#line 211 "ml_util.m"
                        MR_Word ml_backend__ml_util___Sig_13;

#line 211 "ml_util.m"
                        ml_backend__ml_util__QualifiedProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 0)));
#line 211 "ml_util.m"
                        ml_backend__ml_util___Sig_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__CodeAddr_11, (MR_Integer) 1)));
#line 212 "ml_util.m"
                        ml_backend__ml_util__MaybeSeqNum_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 211 "ml_util.m"
                      }
#line 218 "ml_util.m"
                    ml_backend__ml_util__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 0)));
#line 218 "ml_util.m"
                    ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 1)));
#line 218 "ml_util.m"
                    ml_backend__ml_util__ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_12, (MR_Integer) 2)));
#line 218 "ml_util.m"
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_23_23 == (MR_Integer) 0);
#line 202 "ml_util.m"
                    if (ml_backend__ml_util__succeeded)
#line 202 "ml_util.m"
                      {
#line 217 "ml_util.m"
                        ml_backend__ml_util__PredLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_16, (MR_Integer) 0)));
#line 217 "ml_util.m"
                        ml_backend__ml_util__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_16, (MR_Integer) 1)));
#line 221 "ml_util.m"
                        ml_backend__ml_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
#line 221 "ml_util.m"
                        ml_backend__ml_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
#line 221 "ml_util.m"
                        ml_backend__ml_util__FuncName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 2)));
#line 221 "ml_util.m"
                        {
#line 221 "ml_util.m"
                          ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_19, ml_backend__ml_util__V_27_27);
                        }
#line 202 "ml_util.m"
                        if (ml_backend__ml_util__succeeded)
#line 202 "ml_util.m"
                          {
#line 221 "ml_util.m"
                            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_24_24 == (MR_Integer) 0);
#line 202 "ml_util.m"
                            if (ml_backend__ml_util__succeeded)
#line 202 "ml_util.m"
                              {
#line 224 "ml_util.m"
                                ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_20)) == (MR_mktag((MR_Integer) 2)));
#line 224 "ml_util.m"
                                if (ml_backend__ml_util__succeeded)
#line 224 "ml_util.m"
                                  {
#line 224 "ml_util.m"
                                    ml_backend__ml_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 0)));
#line 224 "ml_util.m"
                                    ml_backend__ml_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 1)));
#line 224 "ml_util.m"
                                    ml_backend__ml_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 2)));
#line 224 "ml_util.m"
                                    ml_backend__ml_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_20, (MR_Integer) 3)));
#line 224 "ml_util.m"
                                    {
#line 224 "ml_util.m"
                                      ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0(ml_backend__ml_util__PredLabel_17, ml_backend__ml_util__V_28_28);
                                    }
#line 202 "ml_util.m"
                                    if (ml_backend__ml_util__succeeded)
#line 202 "ml_util.m"
                                      {
#line 224 "ml_util.m"
                                        ml_backend__ml_util__succeeded = (ml_backend__ml_util__ProcId_18 == ml_backend__ml_util__V_29_29);
#line 202 "ml_util.m"
                                        if (ml_backend__ml_util__succeeded)
#line 202 "ml_util.m"
                                          {
#line 5932 "ml_backend.ml_util.c"
                                            ml_backend__ml_util__TypeInfo_33_33 = (MR_Word) &ml_backend__ml_util_scalar_common_1[0];
#line 224 "ml_util.m"
                                            {
#line 224 "ml_util.m"
                                              ml_backend__ml_util__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_util__TypeInfo_33_33, ((MR_Box) (ml_backend__ml_util__MaybeSeqNum_14)), ((MR_Box) (ml_backend__ml_util__V_30_30)));
                                            }
#line 202 "ml_util.m"
                                            if (ml_backend__ml_util__succeeded)
#line 229 "ml_util.m"
                                              ml_backend__ml_util__succeeded = (ml_backend__ml_util__MaybeObject_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "ml_util.m"
                                          }
#line 202 "ml_util.m"
                                      }
#line 224 "ml_util.m"
                                  }
#line 202 "ml_util.m"
                              }
#line 202 "ml_util.m"
                          }
#line 202 "ml_util.m"
                      }
#line 209 "ml_util.m"
                  }
#line 209 "ml_util.m"
              }
#line 202 "ml_util.m"
          }
#line 203 "ml_util.m"
      }
#line 202 "ml_util.m"
    return ml_backend__ml_util__succeeded;
#line 202 "ml_util.m"
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
#line 193 "ml_util.m"
  while (MR_TRUE)
#line 193 "ml_util.m"
    {
#line 193 "ml_util.m"
      /* tailcall optimized into a loop */
#line 193 "ml_util.m"
      {
#line 193 "ml_util.m"
        MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 193 "ml_util.m"
        MR_Word ml_backend__ml_util__Defn_2;
#line 193 "ml_util.m"
        MR_Word ml_backend__ml_util__Defns_3;

#line 193 "ml_util.m"
        if (ml_backend__ml_util__succeeded)
#line 193 "ml_util.m"
          {
#line 193 "ml_util.m"
            ml_backend__ml_util__Defn_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
#line 193 "ml_util.m"
            ml_backend__ml_util__Defns_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
#line 195 "ml_util.m"
            {
#line 195 "ml_util.m"
              MR_Word ml_backend__ml_util__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
#line 195 "ml_util.m"
              MR_Word ml_backend__ml_util__FuncName_8;
#line 195 "ml_util.m"
              MR_Word ml_backend__ml_util__V_15_15;
#line 195 "ml_util.m"
              MR_String ml_backend__ml_util__V_16_16;
#line 195 "ml_util.m"
              MR_Integer ml_backend__ml_util__V_17_17;
#line 195 "ml_util.m"
              MR_Word ml_backend__ml_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
#line 195 "ml_util.m"
              MR_Word ml_backend__ml_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
#line 195 "ml_util.m"
              MR_Word ml_backend__ml_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
#line 196 "ml_util.m"
              MR_Integer ml_backend__ml_util__V_9_9;
#line 196 "ml_util.m"
              MR_Word ml_backend__ml_util__V_10_10;
#line 196 "ml_util.m"
              MR_Word ml_backend__ml_util__V_11_11;
#line 197 "ml_util.m"
              MR_Word ml_backend__ml_util__V_12_12;
#line 197 "ml_util.m"
              MR_Word ml_backend__ml_util__V_13_13;
#line 197 "ml_util.m"
              MR_Word ml_backend__ml_util__V_14_14;

#line 196 "ml_util.m"
              ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_4)) == (MR_mktag((MR_Integer) 2)));
#line 196 "ml_util.m"
              if (ml_backend__ml_util__succeeded)
#line 196 "ml_util.m"
                {
#line 196 "ml_util.m"
                  ml_backend__ml_util__FuncName_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 0)));
#line 196 "ml_util.m"
                  ml_backend__ml_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 1)));
#line 196 "ml_util.m"
                  ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 2)));
#line 196 "ml_util.m"
                  ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 3)));
#line 197 "ml_util.m"
                  ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_8)) == (MR_mktag((MR_Integer) 0)));
#line 197 "ml_util.m"
                  if (ml_backend__ml_util__succeeded)
#line 197 "ml_util.m"
                    {
#line 197 "ml_util.m"
                      ml_backend__ml_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 0)));
#line 197 "ml_util.m"
                      ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 1)));
#line 197 "ml_util.m"
                      ml_backend__ml_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 2)));
#line 197 "ml_util.m"
                      ml_backend__ml_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 3)));
#line 197 "ml_util.m"
                      ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 4)));
#line 197 "ml_util.m"
                      ml_backend__ml_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 5)));
#line 197 "ml_util.m"
                      ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_15_15 == (MR_Integer) 0);
#line 195 "ml_util.m"
                      if (ml_backend__ml_util__succeeded)
#line 195 "ml_util.m"
                        {
#line 197 "ml_util.m"
                          ml_backend__ml_util__succeeded = (strcmp(ml_backend__ml_util__V_16_16, (MR_String) "main") == 0);
#line 195 "ml_util.m"
                          if (ml_backend__ml_util__succeeded)
#line 197 "ml_util.m"
                            ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_17_17 == (MR_Integer) 2);
#line 195 "ml_util.m"
                        }
#line 197 "ml_util.m"
                    }
#line 196 "ml_util.m"
                }
#line 195 "ml_util.m"
            }
#line 198 "ml_util.m"
            if (!(ml_backend__ml_util__succeeded))
#line 199 "ml_util.m"
              {
#line 199 "ml_util.m"
                /* direct tailcall eliminated */
#line 199 "ml_util.m"
                {
#line 199 "ml_util.m"
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Defns_3;

#line 199 "ml_util.m"
                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
#line 199 "ml_util.m"
                }
#line 199 "ml_util.m"
                continue;
#line 199 "ml_util.m"
              }
#line 193 "ml_util.m"
          }
#line 193 "ml_util.m"
        return ml_backend__ml_util__succeeded;
#line 193 "ml_util.m"
      }
#line 193 "ml_util.m"
      break;
#line 193 "ml_util.m"
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
