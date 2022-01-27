/*
** Automatically generated from `ml_util.m'
** by the Mercury compiler,
** version rotd-2017-01-16
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
#include "libs.compiler_util.mih"
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



struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0_s {
  MR_Word * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__LambdaHeadVar__1_12;
  MR_Cont ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__cont;
  void * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__cont_env_ptr;
  MR_bool ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__SubStatement_7;
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__V_13_13;
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__V_14_14;
};

struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s {
  MR_Word * ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4;
  MR_Cont ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont;
  void * ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr;
  MR_Word ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5;
  MR_Word ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8;
  MR_Box ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5;
};

struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s {
  MR_Word * ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4;
  MR_Cont ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont;
  void * ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr;
  MR_Word ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5;
  MR_Box ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5;
};

struct ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0_s {
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3;
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4;
  MR_bool ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded;
  jmp_buf ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_15;
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_16;
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22;
  MR_Word ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_23_23;
};

struct ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0_s {
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3;
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4;
  MR_bool ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded;
  jmp_buf ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_15;
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_16;
  MR_Word ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_27_27;
};

struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s {
  MR_Box * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont;
  void * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr;
  MR_Word ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12;
};


static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0(
  MR_Word ml_backend__ml_util__Statement_3,
  MR_Word * ml_backend__ml_util__LambdaHeadVar__1_12,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr);

static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_util__function_body_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Body_4,
  MR_Word ml_backend__ml_util__DataName_5);

static MR_Word MR_CALL 
ml_backend__ml_util__defn_body_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__DefnBody_4,
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
ml_backend__ml_util__default_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Default_4,
  MR_Word ml_backend__ml_util__DataName_5);

static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_util__stmt_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Stmt_4,
  MR_Word ml_backend__ml_util__DataName_5);

static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__DataName_2);

static MR_Word MR_CALL 
ml_backend__ml_util__statements_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_util__default_contains_statement_2_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word * ml_backend__ml_util__SubStatement_2,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr);

static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_2(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0(
  MR_Word ml_backend__ml_util__Cases_3,
  MR_Word * ml_backend__ml_util__SubStatement_4,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr);

static void MR_CALL 
ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr);

static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_2(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0(
  MR_Word ml_backend__ml_util__Statements_3,
  MR_Word * ml_backend__ml_util__SubStatement_4,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr);

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



static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    {
      MR_Word ml_backend__ml_util__V_11_11;
      MR_Word ml_backend__ml_util__V_8_8;
      MR_Word ml_backend__ml_util__V_9_9;
      MR_String ml_backend__ml_util__V_10_10;

      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 0)));
      ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__SubStatement_7, (MR_Integer) 1)));
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__V_13_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__V_13_13, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__succeeded)
        {
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__V_13_13, (MR_Integer) 1)));
          {
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 7)));
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__succeeded)
              {
                {
                  *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__LambdaHeadVar__1_12) = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__V_14_14, (MR_Integer) 1)));
                  ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__V_14_14, (MR_Integer) 2)));
                  ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__V_14_14, (MR_Integer) 3)));
                  ml_backend__ml_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__V_14_14, (MR_Integer) 4)));
                }
                {
                  ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__cont_env_ptr);
                }
              }
          }
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0(
  MR_Word ml_backend__ml_util__Statement_3,
  MR_Word * ml_backend__ml_util__LambdaHeadVar__1_12,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr)
{
  {
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0_s ml_backend__ml_util__env;

    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__LambdaHeadVar__1_12 = ml_backend__ml_util__LambdaHeadVar__1_12;
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__cont = ml_backend__ml_util__cont;
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__SubStatement_7 = ml_backend__ml_util__Statement_3;
    {
      ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_1(&ml_backend__ml_util__env);
    }
    {
      MR_Word ml_backend__ml_util__Stmt_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_util___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_3, (MR_Integer) 1)));

      {
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_20, &(ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_env_0__SubStatement_7, ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0_1, &ml_backend__ml_util__env);
      }
    }
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
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Initializers_6;

                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
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

        {
          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_5);
        }
      }
    return ml_backend__ml_util__ContainsVar_6;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_util__defn_body_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__DefnBody_4,
  MR_Word ml_backend__ml_util__DataName_5)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__ContainsVar_6;

    switch (MR_tag((MR_Word) ml_backend__ml_util__DefnBody_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_util__ClassDefn_16 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__DefnBody_4), (MR_Integer) 0);
          MR_Word ml_backend__ml_util__CtorDefns_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_16, (MR_Integer) 5)));
          MR_Word ml_backend__ml_util__FieldDefns_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_16, (MR_Integer) 6)));
          MR_Word ml_backend__ml_util__FieldDefnsContainVar_24;
          MR_Word ml_backend__ml_util___Kind_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_16, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___Imports_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_16, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util___Inherits_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_16, (MR_Integer) 2)));
          MR_Word ml_backend__ml_util___Implements_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_16, (MR_Integer) 3)));
          MR_Word ml_backend__ml_util___TypeParams_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ClassDefn_16, (MR_Integer) 4)));

          {
            ml_backend__ml_util__FieldDefnsContainVar_24 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__FieldDefns_23, ml_backend__ml_util__DataName_5);
          }
          switch (ml_backend__ml_util__FieldDefnsContainVar_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__CtorDefns_22, ml_backend__ml_util__DataName_5);
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
          MR_Word ml_backend__ml_util__Initializer_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util___Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___GCStatement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__DefnBody_4, (MR_Integer) 2)));

          {
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_8, ml_backend__ml_util__DataName_5);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_util__FunctionBody_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 2)));
          MR_Word ml_backend__ml_util___PredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___Params_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util___Attrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 3)));
          MR_Word ml_backend__ml_util___EnvVarNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 4)));
          MR_Word ml_backend__ml_util___MaybeRequireTailrecInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__DefnBody_4, (MR_Integer) 5)));

          {
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__function_body_contains_var_2_f_0(ml_backend__ml_util__FunctionBody_12, ml_backend__ml_util__DataName_5);
          }
        }
        break;
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
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
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
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
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
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__OutlineArgs_6;

                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
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
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_util__Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_util__TargetCodeContainsVar_30;

                  {
                    ml_backend__ml_util__TargetCodeContainsVar_30 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_18, ml_backend__ml_util__HeadVar__2_2);
                  }
                  switch (ml_backend__ml_util__TargetCodeContainsVar_30) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

                          ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
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
                      MR_Word ml_backend__ml_util__Lval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util__TargetCodeContainsVar_32;

                      {
                        ml_backend__ml_util__TargetCodeContainsVar_32 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_19, ml_backend__ml_util__HeadVar__2_2);
                      }
                      switch (ml_backend__ml_util__TargetCodeContainsVar_32) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

                              ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
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
                  case (MR_Integer) 3:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

                        ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ml_backend__ml_util__EntityName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_20, (MR_Integer) 0)));
                      MR_Word ml_backend__ml_util__QualKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_20, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_util__UnqualDataName_23;
                      MR_Word ml_backend__ml_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__EntityName_20, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_util__V_25_25;
                      MR_Word ml_backend__ml_util__V_26_26;
                      MR_Word ml_backend__ml_util__V_27_27;

                      ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
                      if (ml_backend__ml_util__succeeded)
                        {
                          ml_backend__ml_util__UnqualDataName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__V_24_24, (MR_Integer) 0)));
                          ml_backend__ml_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 0)));
                          ml_backend__ml_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 1)));
                          ml_backend__ml_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__HeadVar__2_2, (MR_Integer) 2)));
                          {
                            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_21, ml_backend__ml_util__V_25_25);
                          }
                          if (ml_backend__ml_util__succeeded)
                            {
                              ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_22 == ml_backend__ml_util__V_26_26);
                              if (ml_backend__ml_util__succeeded)
                                {
                                  ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__UnqualDataName_23, ml_backend__ml_util__V_27_27);
                                }
                            }
                        }
                      if (ml_backend__ml_util__succeeded)
                        ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 1;
                      else
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__TargetCodes_6;

                            ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
                          }
                          continue;
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
ml_backend__ml_util__default_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Default_4,
  MR_Word ml_backend__ml_util__DataName_5)
{
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

          {
            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_5);
          }
        }
        break;
    }
    return ml_backend__ml_util__ContainsVar_6;
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
            MR_Word ml_backend__ml_util__StatementContainsVar_12;
            MR_Word ml_backend__ml_util__Stmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util___FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util___LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_11, (MR_Integer) 1)));

            {
              ml_backend__ml_util__StatementContainsVar_12 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_16, ml_backend__ml_util__HeadVar__2_2);
            }
            switch (ml_backend__ml_util__StatementContainsVar_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Cases_6;

                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
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
ml_backend__ml_util__stmt_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Stmt_4,
  MR_Word ml_backend__ml_util__DataName_5)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__ContainsVar_6;

    switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_util__Defns_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util__Statements_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util__DefnsContainVar_9;

          {
            ml_backend__ml_util__DefnsContainVar_9 = ml_backend__ml_util__defns_contains_var_2_f_0(ml_backend__ml_util__Defns_7, ml_backend__ml_util__DataName_5);
          }
          switch (ml_backend__ml_util__DefnsContainVar_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statements_contains_var_2_f_0(ml_backend__ml_util__Statements_8, ml_backend__ml_util__DataName_5);
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
          MR_Word ml_backend__ml_util__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util__Statement_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
          MR_Word ml_backend__ml_util__RvalContainsVar_13;
          MR_Word ml_backend__ml_util___Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));

          {
            ml_backend__ml_util__RvalContainsVar_13 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_11, ml_backend__ml_util__DataName_5);
          }
          switch (ml_backend__ml_util__RvalContainsVar_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_12, ml_backend__ml_util__DataName_5);
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
          MR_Word ml_backend__ml_util__Cond_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util__Then_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util__MaybeElse_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
          MR_Word ml_backend__ml_util__CondContainsVar_17;

          {
            ml_backend__ml_util__CondContainsVar_17 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Cond_14, ml_backend__ml_util__DataName_5);
          }
          switch (ml_backend__ml_util__CondContainsVar_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_util__ThenContainsVar_18;
                MR_Word ml_backend__ml_util__Stmt_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_15, (MR_Integer) 0)));
                MR_Word ml_backend__ml_util___Context_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_15, (MR_Integer) 1)));

                {
                  ml_backend__ml_util__ThenContainsVar_18 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_94, ml_backend__ml_util__DataName_5);
                }
                switch (ml_backend__ml_util__ThenContainsVar_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__maybe_statement_contains_var_2_f_0(ml_backend__ml_util__MaybeElse_16, ml_backend__ml_util__DataName_5);
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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_util__Val_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
              MR_Word ml_backend__ml_util__Default_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
              MR_Word ml_backend__ml_util__ValContainsVar_24;
              MR_Word ml_backend__ml_util___Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util___Range_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));

              {
                ml_backend__ml_util__ValContainsVar_24 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Val_20, ml_backend__ml_util__DataName_5);
              }
              switch (ml_backend__ml_util__ValContainsVar_24) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_util__CasesContainsVar_25;

                    {
                      ml_backend__ml_util__CasesContainsVar_25 = ml_backend__ml_util__cases_contains_var_2_f_0(ml_backend__ml_util__Cases_22, ml_backend__ml_util__DataName_5);
                    }
                    switch (ml_backend__ml_util__CasesContainsVar_25) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__default_contains_var_2_f_0(ml_backend__ml_util__Default_23, ml_backend__ml_util__DataName_5);
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
              MR_Word ml_backend__ml_util__Rval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util___Labels_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));

              {
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_44, ml_backend__ml_util__DataName_5);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__ml_util__Func_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__Obj_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
              MR_Word ml_backend__ml_util__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
              MR_Word ml_backend__ml_util__RetLvals_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
              MR_Word ml_backend__ml_util__FuncContainsVar_35;
              MR_Word ml_backend__ml_util___Sig_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util___TailCall_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 6)));

              {
                ml_backend__ml_util__FuncContainsVar_35 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Func_30, ml_backend__ml_util__DataName_5);
              }
              switch (ml_backend__ml_util__FuncContainsVar_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  if ((ml_backend__ml_util__Obj_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word ml_backend__ml_util__ArgsContainVar_37;

                      {
                        ml_backend__ml_util__ArgsContainVar_37 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_32, ml_backend__ml_util__DataName_5);
                      }
                      switch (ml_backend__ml_util__ArgsContainVar_37) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_33, ml_backend__ml_util__DataName_5);
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                          break;
                      }
                    }
                  else
                    {
                      MR_Word ml_backend__ml_util__Rval_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Obj_31, (MR_Integer) 0)));
                      MR_Word ml_backend__ml_util__ObjContainsVar_98;

                      {
                        ml_backend__ml_util__ObjContainsVar_98 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_89, ml_backend__ml_util__DataName_5);
                      }
                      switch (ml_backend__ml_util__ObjContainsVar_98) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ml_backend__ml_util__ArgsContainVar_96;

                            {
                              ml_backend__ml_util__ArgsContainVar_96 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_32, ml_backend__ml_util__DataName_5);
                            }
                            switch (ml_backend__ml_util__ArgsContainVar_96) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_33, ml_backend__ml_util__DataName_5);
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
              MR_Word ml_backend__ml_util__Rvals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

              {
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Rvals_38, ml_backend__ml_util__DataName_5);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_util__Handler_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
              MR_Word ml_backend__ml_util__RefContainsVar_41;
              MR_Word ml_backend__ml_util__Statement_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__Ref_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

              {
                ml_backend__ml_util__RefContainsVar_41 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Ref_46, ml_backend__ml_util__DataName_5);
              }
              switch (ml_backend__ml_util__RefContainsVar_41) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_util__StatementContainsVar_42;

                    {
                      ml_backend__ml_util__StatementContainsVar_42 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Statement_45, ml_backend__ml_util__DataName_5);
                    }
                    switch (ml_backend__ml_util__StatementContainsVar_42) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Handler_40, ml_backend__ml_util__DataName_5);
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
              MR_Word ml_backend__ml_util__Ref_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

              {
                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Ref_39, ml_backend__ml_util__DataName_5);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__ml_util__AtomicStmt_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ml_backend__ml_util__AtomicStmt_43)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ml_backend__ml_util__Lval_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_util__Rval_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_util__LvalContainsVar_53;

                    {
                      ml_backend__ml_util__LvalContainsVar_53 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_51, ml_backend__ml_util__DataName_5);
                    }
                    switch (ml_backend__ml_util__LvalContainsVar_53) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_52, ml_backend__ml_util__DataName_5);
                        }
                        break;
                      case (MR_Integer) 1:
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__Lval_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
                        MR_Word ml_backend__ml_util__Rval_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_util__LvalContainsVar_79;

                        {
                          ml_backend__ml_util__LvalContainsVar_79 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_77, ml_backend__ml_util__DataName_5);
                        }
                        switch (ml_backend__ml_util__LvalContainsVar_79) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_78, ml_backend__ml_util__DataName_5);
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
                        MR_Word ml_backend__ml_util__Rval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_72, ml_backend__ml_util__DataName_5);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ml_backend__ml_util__Target_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));
                        MR_Word ml_backend__ml_util__Args_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 7)));
                        MR_Word ml_backend__ml_util__TargetContainsVar_64;
                        MR_Word ml_backend__ml_util___MaybeTag_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_util___ExplicitSecTag_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 3)));
                        MR_Word ml_backend__ml_util___Type_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 4)));
                        MR_Word ml_backend__ml_util___MaybeSize_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 5)));
                        MR_Word ml_backend__ml_util___MaybeCtorName_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 6)));
                        MR_Word ml_backend__ml_util___ArgTypes_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 8)));
                        MR_Word ml_backend__ml_util___MayUseAtomic_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 9)));
                        MR_Word ml_backend__ml_util___AllocId_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 10)));

                        {
                          ml_backend__ml_util__TargetContainsVar_64 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Target_54, ml_backend__ml_util__DataName_5);
                        }
                        switch (ml_backend__ml_util__TargetContainsVar_64) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_60, ml_backend__ml_util__DataName_5);
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
                        MR_Word ml_backend__ml_util__Lval_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_73, ml_backend__ml_util__DataName_5);
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ml_backend__ml_util__Rval_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_74, ml_backend__ml_util__DataName_5);
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word ml_backend__ml_util__TrailOp_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

                        switch (MR_tag((MR_Word) ml_backend__ml_util__TrailOp_65)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word ml_backend__ml_util__Lval_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)));

                              {
                                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_83, ml_backend__ml_util__DataName_5);
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word ml_backend__ml_util__Rval_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)));
                              MR_Word ml_backend__ml_util___Reason_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

                              {
                                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_84, ml_backend__ml_util__DataName_5);
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 0)))) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Word ml_backend__ml_util__Lval_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

                                  {
                                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_86, ml_backend__ml_util__DataName_5);
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Word ml_backend__ml_util__Rval_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_65, (MR_Integer) 1)));

                                  {
                                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_87, ml_backend__ml_util__DataName_5);
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
                        MR_Word ml_backend__ml_util__Components_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_util___Lang_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__target_code_components_contains_var_2_f_0(ml_backend__ml_util__Components_67, ml_backend__ml_util__DataName_5);
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word ml_backend__ml_util__OutlineArgs_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_util__ReturnLvals_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 3)));
                        MR_Word ml_backend__ml_util__OutlineArgsContainVar_71;
                        MR_String ml_backend__ml_util___Code_70 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 4)));
                        MR_Word ml_backend__ml_util___Lang_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_43, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__OutlineArgsContainVar_71 = ml_backend__ml_util__outline_args_contains_var_2_f_0(ml_backend__ml_util__OutlineArgs_68, ml_backend__ml_util__DataName_5);
                        }
                        switch (ml_backend__ml_util__OutlineArgsContainVar_71) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__ReturnLvals_69, ml_backend__ml_util__DataName_5);
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
            }
            break;
        }
        break;
    }
    return ml_backend__ml_util__ContainsVar_6;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_util__maybe_statement_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__DataName_2)
{
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

        {
          ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__DataName_2);
        }
      }
    return ml_backend__ml_util__HeadVar__3_3;
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
            MR_Word ml_backend__ml_util__StatementContainsVar_9;
            MR_Word ml_backend__ml_util__Stmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

            {
              ml_backend__ml_util__StatementContainsVar_9 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_13, ml_backend__ml_util__HeadVar__2_2);
            }
            switch (ml_backend__ml_util__StatementContainsVar_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Statements_6;

                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
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

static void MR_CALL 
ml_backend__ml_util__default_contains_statement_2_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word * ml_backend__ml_util__SubStatement_2,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr)
{
  {
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ml_backend__ml_util__Statement_5;

    if (ml_backend__ml_util__succeeded)
      {
        ml_backend__ml_util__Statement_5 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__HeadVar__1_1), (MR_Integer) 1);
        *ml_backend__ml_util__SubStatement_2 = ml_backend__ml_util__Statement_5;
        {
          ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
        }
        {
          MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_5, (MR_Integer) 1)));

          {
            ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__SubStatement_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
          }
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_2(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5 = ((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5);
    {
      ml_backend__ml_util__cases_contains_statement_2_p_0_1(ml_backend__ml_util__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    {
      MR_Word ml_backend__ml_util___FirstCond_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 0)));
      MR_Word ml_backend__ml_util___LaterConds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 1)));

      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Case_5, (MR_Integer) 2)));
      *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4) = (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8;
      {
        ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr);
      }
      {
        MR_Word ml_backend__ml_util__Stmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__Statement_8, (MR_Integer) 1)));

        {
          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_13, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr);
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__cases_contains_statement_2_p_0(
  MR_Word ml_backend__ml_util__Cases_3,
  MR_Word * ml_backend__ml_util__SubStatement_4,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr)
{
  {
    struct ml_backend__ml_util__cases_contains_statement_2_p_0_env_0_s ml_backend__ml_util__env;

    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__SubStatement_4 = ml_backend__ml_util__SubStatement_4;
    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont = ml_backend__ml_util__cont;
    (ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
    {
      MR_bool ml_backend__ml_util__succeeded;

      {
        mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, &(ml_backend__ml_util__env).ml_backend__ml_util__cases_contains_statement_2_p_0_env_0__conv0_Case_5, ml_backend__ml_util__Cases_3, ml_backend__ml_util__cases_contains_statement_2_p_0_2, &ml_backend__ml_util__env);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr)
{
  {
    MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ml_backend__ml_util__Statement_4;

    if (ml_backend__ml_util__succeeded)
      {
        ml_backend__ml_util__Statement_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
        *ml_backend__ml_util__HeadVar__2_2 = ml_backend__ml_util__Statement_4;
        {
          ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
        }
        {
          MR_Word ml_backend__ml_util__Stmt_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 1)));

          {
            ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_10, ml_backend__ml_util__HeadVar__2_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
          }
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_2(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5 = ((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5);
    {
      ml_backend__ml_util__statements_contains_statement_2_p_0_1(ml_backend__ml_util__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    {
      *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4) = (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5;
      {
        ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr);
      }
    }
    {
      MR_Word ml_backend__ml_util__Stmt_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5, (MR_Integer) 0)));
      MR_Word ml_backend__ml_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__Statement_5, (MR_Integer) 1)));

      {
        ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_10, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__statements_contains_statement_2_p_0(
  MR_Word ml_backend__ml_util__Statements_3,
  MR_Word * ml_backend__ml_util__SubStatement_4,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr)
{
  {
    struct ml_backend__ml_util__statements_contains_statement_2_p_0_env_0_s ml_backend__ml_util__env;

    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__SubStatement_4 = ml_backend__ml_util__SubStatement_4;
    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont = ml_backend__ml_util__cont;
    (ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
    {
      MR_bool ml_backend__ml_util__succeeded;

      {
        mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, &(ml_backend__ml_util__env).ml_backend__ml_util__statements_contains_statement_2_p_0_env_0__conv0_Statement_5, ml_backend__ml_util__Statements_3, ml_backend__ml_util__statements_contains_statement_2_p_0_2, &ml_backend__ml_util__env);
      }
    }
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
ml_backend__ml_util__gen_init_reserved_address_2_f_0(
  MR_Word ml_backend__ml_util__ModuleInfo_4,
  MR_Word ml_backend__ml_util__ReservedAddress_5)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__3_3;
    MR_Word ml_backend__ml_util__V_6_6;

    {
      ml_backend__ml_util__V_6_6 = ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(ml_backend__ml_util__ModuleInfo_4, ml_backend__ml_util__ReservedAddress_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
    }
    {
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
    }
    return ml_backend__ml_util__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_boxed_int_1_f_0(
  MR_Integer ml_backend__ml_util__Int_3)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__2_2;
    MR_Word ml_backend__ml_util__V_4_4;
    MR_Word ml_backend__ml_util__V_7_7;
    MR_Word ml_backend__ml_util__V_8_8;

    {
      ml_backend__ml_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__V_8_8, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
    }
    {
      ml_backend__ml_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 1) = ((MR_Box) (ml_backend__ml_util__V_8_8));
    }
    {
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (&ml_backend__ml_util_scalar_common_3[2]));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 2) = ((MR_Box) (ml_backend__ml_util__V_7_7));
    }
    {
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
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
          ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[0]);
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[1]);
        }
        break;
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
    MR_Word ml_backend__ml_util__V_4_4;
    MR_Word ml_backend__ml_util__V_5_5;

    {
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
    }
    {
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
    }
    {
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
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
    MR_Word ml_backend__ml_util__V_6_6;
    MR_Word ml_backend__ml_util__V_7_7;

    {
      ml_backend__ml_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 1) = ((MR_Box) (ml_backend__ml_util__Lang_4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 2) = ((MR_Box) (ml_backend__ml_util__String_5));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_7_7, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    {
      ml_backend__ml_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_6_6, 1) = ((MR_Box) (ml_backend__ml_util__V_7_7));
    }
    {
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
    }
    return ml_backend__ml_util__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_string_1_f_0(
  MR_String ml_backend__ml_util__String_3)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__2_2;
    MR_Word ml_backend__ml_util__V_4_4;
    MR_Word ml_backend__ml_util__V_5_5;

    {
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 1) = ((MR_Box) (ml_backend__ml_util__String_3));
    }
    {
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
    }
    {
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
    }
    return ml_backend__ml_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_null_pointer_1_f_0(
  MR_Word ml_backend__ml_util__Type_3)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__2_2;
    MR_Word ml_backend__ml_util__V_4_4;
    MR_Word ml_backend__ml_util__V_5_5;

    {
      ml_backend__ml_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_5_5, 1) = ((MR_Box) (ml_backend__ml_util__Type_3));
    }
    {
      ml_backend__ml_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_4_4, 1) = ((MR_Box) (ml_backend__ml_util__V_5_5));
    }
    {
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__V_4_4));
    }
    return ml_backend__ml_util__HeadVar__2_2;
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
        MR_Word ml_backend__ml_util__V_12_12;
        MR_Word ml_backend__ml_util__V_13_13;

        {
          ml_backend__ml_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_13_13, 1) = ((MR_Box) (ml_backend__ml_util__HeadVar__1_1));
        }
        {
          ml_backend__ml_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_12_12, 1) = ((MR_Box) (ml_backend__ml_util__V_13_13));
        }
        {
          ml_backend__ml_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__ml_util__V_12_12));
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
ml_backend__ml_util__gen_init_array_2_f_0(
  MR_Word ml_backend__ml_util__TypeInfo_for_T_7,
  MR_Word ml_backend__ml_util__Conv_4,
  MR_Word ml_backend__ml_util__List_5)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__HeadVar__3_3;
    MR_Word ml_backend__ml_util__V_6_6;

    {
      ml_backend__ml_util__V_6_6 = mercury__list__map_2_f_0(ml_backend__ml_util__TypeInfo_for_T_7, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_util__Conv_4, ml_backend__ml_util__List_5);
    }
    {
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__V_6_6));
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
    MR_Word ml_backend__ml_util__V_8_8;
    MR_Word ml_backend__ml_util__V_9_9;
    MR_Word ml_backend__ml_util__V_11_11;

    {
      ml_backend__ml_util__PrivateBuiltin_5 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      ml_backend__ml_util__MLDS_Module_6 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_util__PrivateBuiltin_5);
    }
    {
      ml_backend__ml_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_11_11, 0) = ((MR_Box) (ml_backend__ml_util__Name_3));
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_util__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 0) = ((MR_Box) (ml_backend__ml_util__MLDS_Module_6));
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_9_9, 2) = ((MR_Box) (ml_backend__ml_util__V_11_11));
    }
    {
      ml_backend__ml_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_8_8, 0) = ((MR_Box) (ml_backend__ml_util__V_9_9));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    {
      ml_backend__ml_util__Rval_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__Rval_4, 0) = ((MR_Box) (ml_backend__ml_util__V_8_8));
    }
    {
      ml_backend__ml_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_util__Rval_4));
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
          MR_Word ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 3)));
          MR_Word ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Lval_4, (MR_Integer) 4)));

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
          MR_Word ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util__V_18_18;
          MR_Word ml_backend__ml_util__V_22_22;
          MR_Word ml_backend__ml_util__V_23_23;
          MR_Word ml_backend__ml_util__V_24_24;

          ml_backend__ml_util__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 0)));
          ml_backend__ml_util__QualKind_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 1)));
          ml_backend__ml_util__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_17_17, (MR_Integer) 2)));
          ml_backend__ml_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
          ml_backend__ml_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));
          ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
          {
            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_14, ml_backend__ml_util__V_22_22);
          }
          if (ml_backend__ml_util__succeeded)
            {
              ml_backend__ml_util__succeeded = (ml_backend__ml_util__QualKind_15 == ml_backend__ml_util__V_23_23);
              if (ml_backend__ml_util__succeeded)
                {
                  ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                  if (ml_backend__ml_util__succeeded)
                    {
                      ml_backend__ml_util__V_24_24 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_18_18), (MR_Integer) 1);
                      {
                        ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_util__Name_16, ml_backend__ml_util__V_24_24);
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
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Lvals_6;

                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
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
                MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__SubRval_9;

                ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
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
                        MR_Word ml_backend__ml_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_util___QualKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__DataName_5, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_12, ml_backend__ml_util__V_41_41);
                        }
                        if (ml_backend__ml_util__succeeded)
                          {
                            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_data_name_0_0(ml_backend__ml_util__RawDataName_13, ml_backend__ml_util__V_42_42);
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
                    MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__RvalA_30;

                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
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
                          MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__RvalB_31;

                          ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
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
                    MR_Word ml_backend__ml_util__Rval__tmp_copy_4 = ml_backend__ml_util__IndexRval_35;

                    ml_backend__ml_util__Rval_4 = ml_backend__ml_util__Rval__tmp_copy_4;
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
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Rvals_6;

                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
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
ml_backend__ml_util__defn_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Defn_4,
  MR_Word ml_backend__ml_util__DataName_5)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__ContainsVar_6;
    MR_Word ml_backend__ml_util__DefnBody_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_util___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_util___Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_4, (MR_Integer) 2)));

    {
      ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__defn_body_contains_var_2_f_0(ml_backend__ml_util__DefnBody_10, ml_backend__ml_util__DataName_5);
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
                    MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Defns_6;

                    ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
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
ml_backend__ml_util__defn_is_public_1_p_0(
  MR_Word ml_backend__ml_util__Defn_2)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
    MR_Word ml_backend__ml_util__V_7_7;
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));

    {
      ml_backend__ml_util__V_7_7 = ml_backend__mlds__access_1_f_0(ml_backend__ml_util__Flags_5);
    }
    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_7_7 == (MR_Integer) 0);
    return ml_backend__ml_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__defn_is_commit_type_var_1_p_0(
  MR_Word ml_backend__ml_util__Defn_2)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
    MR_Word ml_backend__ml_util__Type_7;
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
    MR_Word ml_backend__ml_util__V_8_8;
    MR_Word ml_backend__ml_util__V_9_9;

    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_6)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__ml_util__succeeded)
      {
        ml_backend__ml_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 0)));
        ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 1)));
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 2)));
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    return ml_backend__ml_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__defn_is_type_ctor_info_1_p_0(
  MR_Word ml_backend__ml_util__Defn_2)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
    MR_Word ml_backend__ml_util__Type_7;
    MR_Word ml_backend__ml_util__RttiId_10;
    MR_Word ml_backend__ml_util__RttiName_12;
    MR_Word ml_backend__ml_util__V_13_13;
    MR_Word ml_backend__ml_util___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
    MR_Word ml_backend__ml_util__V_8_8;
    MR_Word ml_backend__ml_util__V_9_9;
    MR_Word ml_backend__ml_util__V_11_11;

    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_6)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__ml_util__succeeded)
      {
        ml_backend__ml_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 0)));
        ml_backend__ml_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 1)));
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_6, (MR_Integer) 2)));
        ml_backend__ml_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_util__Type_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
        if (ml_backend__ml_util__succeeded)
          {
            ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Type_7, (MR_Integer) 1)));
            ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
            if (ml_backend__ml_util__succeeded)
              {
                ml_backend__ml_util__RttiId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__V_13_13, (MR_Integer) 0)));
                ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__RttiId_10)) == (MR_mktag((MR_Integer) 0)));
                if (ml_backend__ml_util__succeeded)
                  {
                    ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_10, (MR_Integer) 0)));
                    ml_backend__ml_util__RttiName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__RttiId_10, (MR_Integer) 1)));
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__RttiName_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
                  }
              }
          }
      }
    return ml_backend__ml_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__defn_is_function_1_p_0(
  MR_Word ml_backend__ml_util__Defn_2)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
    MR_Word ml_backend__ml_util__V_7_7;
    MR_Integer ml_backend__ml_util__V_8_8;
    MR_Word ml_backend__ml_util__V_9_9;
    MR_Word ml_backend__ml_util__V_10_10;

    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_3)) == (MR_mktag((MR_Integer) 2)));
    if (ml_backend__ml_util__succeeded)
      {
        ml_backend__ml_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
        ml_backend__ml_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
        ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 2)));
        ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_3, (MR_Integer) 3)));
      }
    return ml_backend__ml_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__defn_is_type_1_p_0(
  MR_Word ml_backend__ml_util__Defn_2)
{
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
    MR_Word ml_backend__ml_util___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
    MR_Word ml_backend__ml_util___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
    MR_Word ml_backend__ml_util___Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
    MR_String ml_backend__ml_util__V_7_7;
    MR_Integer ml_backend__ml_util__V_8_8;

    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_3)) == (MR_mktag((MR_Integer) 0)));
    if (ml_backend__ml_util__succeeded)
      {
        ml_backend__ml_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 0)));
        ml_backend__ml_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Name_3, (MR_Integer) 1)));
      }
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
      MR_Word ml_backend__ml_util__V_17_17;
      MR_Word ml_backend__ml_util__V_18_18;
      MR_Word ml_backend__ml_util__V_19_19;
      MR_String ml_backend__ml_util__V_20_20;

      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_15, (MR_Integer) 0)));
      ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_15, (MR_Integer) 1)));
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_16, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
        {
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Stmt_16, (MR_Integer) 1)));
          {
            (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 7)));
            if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
              {
                {
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22, (MR_Integer) 1)));
                  ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22, (MR_Integer) 2)));
                  ml_backend__ml_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22, (MR_Integer) 3)));
                  ml_backend__ml_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_22_22, (MR_Integer) 4)));
                }
                {
                  (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__ForeignLang_3 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__V_23_23);
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
          MR_Word ml_backend__ml_util__Body_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 3)));
          MR_Word ml_backend__ml_util__FunctionBody_11;
          MR_Word ml_backend__ml_util__V_21_21;
          MR_Word ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Defn_4, (MR_Integer) 2)));
          MR_Word ml_backend__ml_util__V_9_9;
          MR_Word ml_backend__ml_util__V_10_10;
          MR_Word ml_backend__ml_util__V_12_12;
          MR_Word ml_backend__ml_util__V_13_13;
          MR_Word ml_backend__ml_util__V_14_14;

          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_8)) == (MR_mktag((MR_Integer) 2)));
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
            {
              {
                ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 0)));
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 1)));
                ml_backend__ml_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 2)));
                ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 3)));
                ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 4)));
                ml_backend__ml_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 5)));
              }
              {
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__succeeded)
                  {
                    ml_backend__ml_util__FunctionBody_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_21_21), (MR_Integer) 1);
                    {
                      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_15 = ml_backend__ml_util__FunctionBody_11;
                      {
                        ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2(ml_backend__ml_util__env_ptr);
                      }
                      {
                        MR_Word ml_backend__ml_util__Stmt_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_util___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_27, &(ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_env_0__Statement_15, ml_backend__ml_util__defn_contains_outline_foreign_proc_2_p_0_2, ml_backend__ml_util__env_ptr);
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
      MR_Word ml_backend__ml_util__V_17_17;

      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_15, (MR_Integer) 0)));
      ml_backend__ml_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_15, (MR_Integer) 1)));
      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_16, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
        {
          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Stmt_16, (MR_Integer) 1)));
          {
            if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 6))))
              {
                MR_Word ml_backend__ml_util__TargetLang_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_27_27, (MR_Integer) 1)));
                MR_Word ml_backend__ml_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_27_27, (MR_Integer) 2)));

                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = (ml_backend__ml_util__TargetLang_18 == (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__NativeTargetLang_3);
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = !((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded);
              }
            else
            if (((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 7))))
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
          MR_Word ml_backend__ml_util__Body_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 3)));
          MR_Word ml_backend__ml_util__FunctionBody_11;
          MR_Word ml_backend__ml_util__V_24_24;
          MR_Word ml_backend__ml_util___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util___Flags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Defn_4, (MR_Integer) 2)));
          MR_Word ml_backend__ml_util__V_9_9;
          MR_Word ml_backend__ml_util__V_10_10;
          MR_Word ml_backend__ml_util__V_12_12;
          MR_Word ml_backend__ml_util__V_13_13;
          MR_Word ml_backend__ml_util__V_14_14;

          (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Body_8)) == (MR_mktag((MR_Integer) 2)));
          if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
            {
              {
                ml_backend__ml_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 0)));
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 1)));
                ml_backend__ml_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 2)));
                ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 3)));
                ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 4)));
                ml_backend__ml_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Body_8, (MR_Integer) 5)));
              }
              {
                (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
                if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__succeeded)
                  {
                    ml_backend__ml_util__FunctionBody_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__V_24_24), (MR_Integer) 1);
                    {
                      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_15 = ml_backend__ml_util__FunctionBody_11;
                      {
                        ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2(ml_backend__ml_util__env_ptr);
                      }
                      {
                        MR_Word ml_backend__ml_util__Stmt_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 0)));
                        MR_Word ml_backend__ml_util___Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FunctionBody_11, (MR_Integer) 1)));

                        {
                          ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_31, &(ml_backend__ml_util__env_ptr)->ml_backend__ml_util__defn_contains_foreign_code_2_p_0_env_0__Statement_15, ml_backend__ml_util__defn_contains_foreign_code_2_p_0_2, ml_backend__ml_util__env_ptr);
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
        ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__646__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__closure, (MR_Integer) 3))), &(ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12, ml_backend__ml_util__has_foreign_languages_2_p_0_1, &ml_backend__ml_util__env);
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
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 0) = ((MR_Box) (&ml_backend__ml_util_scalar_common_2[0]));
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
  {
    MR_bool ml_backend__ml_util__succeeded;
    MR_Word ml_backend__ml_util__ContainsVar_6;
    MR_Word ml_backend__ml_util__Stmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_4, (MR_Integer) 1)));

    {
      ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__stmt_contains_var_2_f_0(ml_backend__ml_util__Stmt_7, ml_backend__ml_util__DataName_5);
    }
    return ml_backend__ml_util__ContainsVar_6;
  }
}

void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0(
  MR_Word ml_backend__ml_util__Stmt_3,
  MR_Word * ml_backend__ml_util__SubStatement_4,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr)
{
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
                ml_backend__ml_util__statements_contains_statement_2_p_0(ml_backend__ml_util__Statements_6, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_util__Statement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util___Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));
              MR_Word ml_backend__ml_util___Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

              *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Statement_9;
              {
                ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
              }
              {
                MR_Word ml_backend__ml_util__Stmt_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_9, (MR_Integer) 0)));
                MR_Word ml_backend__ml_util___Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_9, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_util__Stmt__tmp_copy_3 = ml_backend__ml_util__Stmt_56;

                  ml_backend__ml_util__Stmt_3 = ml_backend__ml_util__Stmt__tmp_copy_3;
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

              *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Then_11;
              {
                ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
              }
              {
                MR_Word ml_backend__ml_util__Stmt_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_11, (MR_Integer) 0)));
                MR_Word ml_backend__ml_util___Context_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Then_11, (MR_Integer) 1)));

                {
                  ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_41, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                }
              }
              {
                ml_backend__ml_util__maybe_statement_contains_statement_2_p_0(ml_backend__ml_util__MaybeElse_12, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
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
                    ml_backend__ml_util__cases_contains_statement_2_p_0(ml_backend__ml_util__Cases_16, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                  }
                  {
                    ml_backend__ml_util__default_contains_statement_2_p_0(ml_backend__ml_util__Default_17, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ml_backend__ml_util__Handler_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_util__Statement_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util___Ref_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

                  *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Statement_31;
                  {
                    ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
                  }
                  {
                    MR_Word ml_backend__ml_util__Stmt_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_31, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_util___Context_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Statement_31, (MR_Integer) 1)));

                    {
                      ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_46, ml_backend__ml_util__SubStatement_4, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
                    }
                  }
                  *ml_backend__ml_util__SubStatement_4 = ml_backend__ml_util__Handler_19;
                  {
                    ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
                  }
                  {
                    MR_Word ml_backend__ml_util__Stmt_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Handler_19, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_util___Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Handler_19, (MR_Integer) 1)));

                    /* direct tailcall eliminated */
                    {
                      MR_Word ml_backend__ml_util__Stmt__tmp_copy_3 = ml_backend__ml_util__Stmt_51;

                      ml_backend__ml_util__Stmt_3 = ml_backend__ml_util__Stmt__tmp_copy_3;
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
    MR_Word ml_backend__ml_util__TypeInfo_24_24;
    MR_Word ml_backend__ml_util__QualifiedProcLabel_7;
    MR_Word ml_backend__ml_util__MaybeSeqNum_9;
    MR_Word ml_backend__ml_util__ProcLabel_11;
    MR_Word ml_backend__ml_util__PredLabel_12;
    MR_Integer ml_backend__ml_util__ProcId_13;
    MR_Word ml_backend__ml_util__V_15_15;
    MR_Word ml_backend__ml_util__V_18_18;
    MR_Word ml_backend__ml_util__V_19_19;
    MR_Integer ml_backend__ml_util__V_20_20;
    MR_Word ml_backend__ml_util__V_21_21;
    MR_Word ml_backend__ml_util__V_14_14;

    if (((MR_tag((MR_Word) ml_backend__ml_util__CodeAddr_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Integer ml_backend__ml_util__SeqNum_10;
        MR_Word ml_backend__ml_util___Sig_16;

        ml_backend__ml_util__QualifiedProcLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_4, (MR_Integer) 0)));
        ml_backend__ml_util__SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_4, (MR_Integer) 1)));
        ml_backend__ml_util___Sig_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__CodeAddr_4, (MR_Integer) 2)));
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
    ml_backend__ml_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_7, (MR_Integer) 0)));
    ml_backend__ml_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_7, (MR_Integer) 1)));
    ml_backend__ml_util__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualifiedProcLabel_7, (MR_Integer) 2)));
    {
      ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_5, ml_backend__ml_util__V_18_18);
    }
    if (ml_backend__ml_util__succeeded)
      {
        ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_15_15 == (MR_Integer) 0);
        if (ml_backend__ml_util__succeeded)
          {
            ml_backend__ml_util__PredLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_11, (MR_Integer) 0)));
            ml_backend__ml_util__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_11, (MR_Integer) 1)));
            ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_6)) == (MR_mktag((MR_Integer) 2)));
            if (ml_backend__ml_util__succeeded)
              {
                ml_backend__ml_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_6, (MR_Integer) 0)));
                ml_backend__ml_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_6, (MR_Integer) 1)));
                ml_backend__ml_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_6, (MR_Integer) 2)));
                ml_backend__ml_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__FuncName_6, (MR_Integer) 3)));
                {
                  ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0(ml_backend__ml_util__PredLabel_12, ml_backend__ml_util__V_19_19);
                }
                if (ml_backend__ml_util__succeeded)
                  {
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__ProcId_13 == ml_backend__ml_util__V_20_20);
                    if (ml_backend__ml_util__succeeded)
                      {
                        ml_backend__ml_util__TypeInfo_24_24 = (MR_Word) &ml_backend__ml_util_scalar_common_1[0];
                        {
                          ml_backend__ml_util__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_util__TypeInfo_24_24, ((MR_Box) (ml_backend__ml_util__MaybeSeqNum_9)), ((MR_Box) (ml_backend__ml_util__V_21_21)));
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
        MR_Word ml_backend__ml_util__Name_4;
        MR_Word ml_backend__ml_util__FuncName_8;
        MR_Word ml_backend__ml_util__V_15_15;
        MR_String ml_backend__ml_util__V_16_16;
        MR_Integer ml_backend__ml_util__V_17_17;
        MR_Word ml_backend__ml_util__V_5_5;
        MR_Word ml_backend__ml_util__V_6_6;
        MR_Word ml_backend__ml_util__V_7_7;
        MR_Integer ml_backend__ml_util__V_9_9;
        MR_Word ml_backend__ml_util__V_10_10;
        MR_Word ml_backend__ml_util__V_11_11;
        MR_Word ml_backend__ml_util__V_12_12;
        MR_Word ml_backend__ml_util__V_13_13;
        MR_Word ml_backend__ml_util__V_14_14;

        if (ml_backend__ml_util__succeeded)
          {
            ml_backend__ml_util__Defn_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
            ml_backend__ml_util__Defns_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
            ml_backend__ml_util__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 0)));
            ml_backend__ml_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 1)));
            ml_backend__ml_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 2)));
            ml_backend__ml_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Defn_2, (MR_Integer) 3)));
            ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Name_4)) == (MR_mktag((MR_Integer) 2)));
            if (ml_backend__ml_util__succeeded)
              {
                ml_backend__ml_util__FuncName_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 0)));
                ml_backend__ml_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 1)));
                ml_backend__ml_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 2)));
                ml_backend__ml_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Name_4, (MR_Integer) 3)));
                ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_8)) == (MR_mktag((MR_Integer) 0)));
                if (ml_backend__ml_util__succeeded)
                  {
                    ml_backend__ml_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 0)));
                    ml_backend__ml_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 1)));
                    ml_backend__ml_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 2)));
                    ml_backend__ml_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 3)));
                    ml_backend__ml_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 4)));
                    ml_backend__ml_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncName_8, (MR_Integer) 5)));
                    ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_15_15 == (MR_Integer) 0);
                    if (ml_backend__ml_util__succeeded)
                      {
                        ml_backend__ml_util__succeeded = (strcmp(ml_backend__ml_util__V_16_16, (MR_String) "main") == 0);
                        if (ml_backend__ml_util__succeeded)
                          ml_backend__ml_util__succeeded = (ml_backend__ml_util__V_17_17 == (MR_Integer) 2);
                      }
                  }
              }
            if (ml_backend__ml_util__succeeded)
              ml_backend__ml_util__succeeded = MR_TRUE;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_util__HeadVar__1__tmp_copy_1 = ml_backend__ml_util__Defns_3;

                  ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__HeadVar__1__tmp_copy_1;
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
