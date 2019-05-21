/*
** Automatically generated from `ml_util.m'
** by the Mercury compiler,
** version rotd-2017-08-05
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
#include "string.format.mih"
#include "string.parse_util.mih"



struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0_s {
  MR_Word * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__LambdaHeadVar__1_12;
  MR_Cont ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__cont;
  void * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__cont_env_ptr;
  MR_bool ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__SubStmt_7;
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13;
};

struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s {
  MR_Box * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont;
  void * ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr;
  MR_Word ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12;
};

struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s {
  MR_Word * ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4;
  MR_Cont ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont;
  void * ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr;
  MR_Word ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_59;
  MR_Box ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv0_Stmt_59;
  MR_Word ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_70;
  MR_Word ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_73;
  MR_Box ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv1_Case_70;
};


static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0(
  MR_Word ml_backend__ml_util__Stmt_3,
  MR_Word * ml_backend__ml_util__LambdaHeadVar__1_12,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr);

static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
  MR_Box ml_backend__ml_util__closure_arg,
  MR_Box * ml_backend__ml_util__wrapper_arg_1,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr);

static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_util__statements_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_util__atomic_stmt_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__AtomicStmt_4,
  MR_Word ml_backend__ml_util__SearchVarName_5);

static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2);

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


static /* final */ const MR_Box ml_backend__ml_util_scalar_common_1[1][5];

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_2[2][2];

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_3[4][1];




static /* final */ const MR_Box ml_backend__ml_util_scalar_common_1[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_util_scalar_common_2[0])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_util_scalar_common_2[1])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    {
      MR_Word ml_backend__ml_util__Var_11;
      MR_Word ml_backend__ml_util__Var_8;
      MR_Word ml_backend__ml_util__Var_9;
      MR_String ml_backend__ml_util__Var_10;

      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__SubStmt_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__SubStmt_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__succeeded)
      {
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__SubStmt_7, (MR_Integer) 1)));
        ml_backend__ml_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__SubStmt_7, (MR_Integer) 2)));
        (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13, (MR_Integer) 0)))) == (MR_Integer) 7)));
        if ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__succeeded)
        {
          *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__LambdaHeadVar__1_12) = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13, (MR_Integer) 1)));
          ml_backend__ml_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13, (MR_Integer) 2)));
          ml_backend__ml_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13, (MR_Integer) 3)));
          ml_backend__ml_util__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13, (MR_Integer) 4)));
          ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__cont_env_ptr);
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0(
  MR_Word ml_backend__ml_util__Stmt_3,
  MR_Word * ml_backend__ml_util__LambdaHeadVar__1_12,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr)
{
  {
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0_s ml_backend__ml_util__env;

    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__LambdaHeadVar__1_12 = ml_backend__ml_util__LambdaHeadVar__1_12;
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__cont = ml_backend__ml_util__cont;
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__cont_env_ptr = ml_backend__ml_util__cont_env_ptr;
    (ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__SubStmt_7 = ml_backend__ml_util__Stmt_3;
    ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_1(&ml_backend__ml_util__env);
    ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_3, &(ml_backend__ml_util__env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__SubStmt_7, ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_1, &ml_backend__ml_util__env);
  }
}

MR_String MR_CALL 
ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(
  MR_Word ml_backend__ml_util__MaybeAux_3)
{
  {
    MR_String ml_backend__ml_util__Suffix_4;

    switch (MR_tag((MR_Word) ml_backend__ml_util__MaybeAux_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__ml_util__MaybeAux_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ml_backend__ml_util__Suffix_4 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            {
              MR_String ml_backend__ml_util__Var_30;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_util_scalar_common_3[3], (MR_Integer) 10000, &ml_backend__ml_util__Var_30);
              ml_backend__ml_util__Suffix_4 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__ml_util__Var_30);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ml_backend__ml_util__SeqNum_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__MaybeAux_3, (MR_Integer) 0)));
          MR_String ml_backend__ml_util__Var_22;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_util_scalar_common_3[3], ml_backend__ml_util__SeqNum_5, &ml_backend__ml_util__Var_22);
          ml_backend__ml_util__Suffix_4 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__ml_util__Var_22);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ml_backend__ml_util__Var_9;
          MR_Integer ml_backend__ml_util__SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__MaybeAux_3, (MR_Integer) 0)));
          MR_String ml_backend__ml_util__Var_38;

          ml_backend__ml_util__Var_9 = ((MR_Integer) 10001 + ml_backend__ml_util__SeqNum_21);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_util_scalar_common_3[3], ml_backend__ml_util__Var_9, &ml_backend__ml_util__Var_38);
          ml_backend__ml_util__Suffix_4 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__ml_util__Var_38);
        }
        break;
    }
    return ml_backend__ml_util__Suffix_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__get_mlds_stmt_context_1_f_0(
  MR_Word ml_backend__ml_util__Stmt_3)
{
  {
    MR_Word ml_backend__ml_util__Context_4;

    switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));

          ml_backend__ml_util__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));

          ml_backend__ml_util__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));

          ml_backend__ml_util__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));
              MR_Word ml_backend__ml_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 4)));
              MR_Word ml_backend__ml_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 5)));

              ml_backend__ml_util__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 6)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ml_backend__ml_util__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

              ml_backend__ml_util__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

              ml_backend__ml_util__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__ml_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));

              ml_backend__ml_util__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__ml_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));
              MR_Word ml_backend__ml_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 4)));
              MR_Word ml_backend__ml_util__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 5)));
              MR_Word ml_backend__ml_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 6)));

              ml_backend__ml_util__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 7)));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

              ml_backend__ml_util__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));

              ml_backend__ml_util__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 4)));
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ml_backend__ml_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

              ml_backend__ml_util__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__ml_util__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));

              ml_backend__ml_util__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
            }
            break;
        }
        break;
    }
    return ml_backend__ml_util__Context_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__wrap_init_obj_1_f_0(
  MR_Word ml_backend__ml_util__Rval_3)
{
  {
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
    MR_Word ml_backend__ml_util__HeadVar__3_3;
    MR_Word ml_backend__ml_util__Var_6;

    ml_backend__ml_util__Var_6 = mercury__list__map_2_f_0(ml_backend__ml_util__TypeInfo_for_T_7, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_util__Conv_4, ml_backend__ml_util__List_5);
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
    MR_Word ml_backend__ml_util__HeadVar__4_4;

    if ((ml_backend__ml_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ml_backend__ml_util__Var_12;
      MR_Word ml_backend__ml_util__Var_13;

      {
        ml_backend__ml_util__Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
        MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_13, 1) = ((MR_Box) (ml_backend__ml_util__HeadVar__1_1));
      }
      {
        ml_backend__ml_util__Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
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

      ml_backend__ml_util__conv1_HeadVar__4_4 = ml_backend__ml_util__func_0(((MR_Box) ml_backend__ml_util__HeadVar__2_2), ml_backend__ml_util__X_7);
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
    MR_Word ml_backend__ml_util__HeadVar__3_3;
    MR_Word ml_backend__ml_util__Var_6;

    ml_backend__ml_util__Var_6 = ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(ml_backend__ml_util__ModuleInfo_4, ml_backend__ml_util__ReservedAddress_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
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
    MR_Word ml_backend__ml_util__HeadVar__2_2;
    MR_Word ml_backend__ml_util__Var_4;
    MR_Word ml_backend__ml_util__Var_5;

    {
      ml_backend__ml_util__Var_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_5, 1) = ((MR_Box) (ml_backend__ml_util__Type_3));
    }
    {
      ml_backend__ml_util__Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
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
    MR_Word ml_backend__ml_util__HeadVar__3_3;
    MR_Word ml_backend__ml_util__Var_6;
    MR_Word ml_backend__ml_util__Var_7;

    {
      ml_backend__ml_util__Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 1) = ((MR_Box) (ml_backend__ml_util__Lang_4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 2) = ((MR_Box) (ml_backend__ml_util__String_5));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    {
      ml_backend__ml_util__Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
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
ml_backend__ml_util__gen_init_builtin_const_2_f_0(
  MR_Word ml_backend__ml_util__TargetPrefixes_4,
  MR_String ml_backend__ml_util__Name_5)
{
  {
    MR_Word ml_backend__ml_util__HeadVar__3_3;
    MR_Word ml_backend__ml_util__Rval_6;
    MR_Word ml_backend__ml_util__Var_7;

    {
      ml_backend__ml_util__Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 1) = ((MR_Box) (ml_backend__ml_util__TargetPrefixes_4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 2) = ((MR_Box) (ml_backend__ml_util__Name_5));
    }
    {
      ml_backend__ml_util__Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_6, 1) = ((MR_Box) (ml_backend__ml_util__Var_7));
    }
    {
      ml_backend__ml_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_util__Rval_6));
    }
    return ml_backend__ml_util__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_string_1_f_0(
  MR_String ml_backend__ml_util__String_3)
{
  {
    MR_Word ml_backend__ml_util__HeadVar__2_2;
    MR_Word ml_backend__ml_util__Var_4;
    MR_Word ml_backend__ml_util__Var_5;

    {
      ml_backend__ml_util__Var_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_5, 1) = ((MR_Box) (ml_backend__ml_util__String_3));
    }
    {
      ml_backend__ml_util__Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
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
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_7, 1) = ((MR_Box) (ml_backend__ml_util__Var_8));
    }
    {
      ml_backend__ml_util__Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_4, 1) = ((MR_Box) (&ml_backend__ml_util_scalar_common_3[2]));
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
    MR_Word ml_backend__ml_util__HeadVar__2_2;
    MR_Word ml_backend__ml_util__Var_4;
    MR_Word ml_backend__ml_util__Var_5;

    {
      ml_backend__ml_util__Var_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_util__Var_5, 0) = ((MR_Box) (ml_backend__ml_util__Int_3));
    }
    {
      ml_backend__ml_util__Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_util__Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
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
ml_backend__ml_util__maybe_rval_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  {
    MR_Word ml_backend__ml_util__HeadVar__3_3;

    if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));

      ml_backend__ml_util__HeadVar__3_3 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
    }
    return ml_backend__ml_util__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__function_defn_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__FuncDefn_4,
  MR_Word ml_backend__ml_util__SearchVarName_5)
{
  {
    MR_Word ml_backend__ml_util__ContainsVar_6;
    MR_Word ml_backend__ml_util__Body_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 5)));
    MR_Word ml_backend__ml_util___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_util___Ctxt_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_util___Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_util___PredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_util___Params_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 4)));
    MR_Word ml_backend__ml_util___Attrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 6)));
    MR_Word ml_backend__ml_util___EnvVarNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 7)));
    MR_Word ml_backend__ml_util___MaybeRequireTailrecInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_4, (MR_Integer) 8)));

    if ((ml_backend__ml_util__Body_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
    else
    {
      MR_Word ml_backend__ml_util__Stmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_12, (MR_Integer) 0)));

      ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Stmt_16, ml_backend__ml_util__SearchVarName_5);
    }
    return ml_backend__ml_util__ContainsVar_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__local_var_defn_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__LocalVarDefn_4,
  MR_Word ml_backend__ml_util__SearchVarName_5)
{
  {
    MR_Word ml_backend__ml_util__ContainsVar_6;
    MR_Word ml_backend__ml_util__Initializer_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__LocalVarDefn_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_util___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__LocalVarDefn_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_util___Ctxt_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__LocalVarDefn_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_util___Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__LocalVarDefn_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_util___GCStmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__LocalVarDefn_4, (MR_Integer) 4)));

    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_10, ml_backend__ml_util__SearchVarName_5);
    return ml_backend__ml_util__ContainsVar_6;
  }
}

static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    *((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12));
    ((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont)((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr);
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

      ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__closure, (MR_Integer) 3))), &(ml_backend__ml_util__env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12, ml_backend__ml_util__has_foreign_languages_2_p_0_1, &ml_backend__ml_util__env);
    }
  }
}

void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0(
  MR_Word ml_backend__ml_util__Stmt_3,
  MR_Word * ml_backend__ml_util__Langs_4)
{
  {
    MR_Word ml_backend__ml_util__GetTargetCode_5;

    {
      ml_backend__ml_util__GetTargetCode_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 0) = ((MR_Box) (&ml_backend__ml_util_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 1) = ((MR_Box) (ml_backend__ml_util__has_foreign_languages_2_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_util__GetTargetCode_5, 3) = ((MR_Box) (ml_backend__ml_util__Stmt_3));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ml_backend__ml_util__GetTargetCode_5, ml_backend__ml_util__Langs_4);
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
      MR_Word ml_backend__ml_util__HeadVar__3_3;

      if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
      else
      {
        MR_Word ml_backend__ml_util__Case_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_util__Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 2)));
        MR_Word ml_backend__ml_util__StmtContainsVar_12;
        MR_Word ml_backend__ml_util___FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util___LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Case_5, (MR_Integer) 1)));

        ml_backend__ml_util__StmtContainsVar_12 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Stmt_11, ml_backend__ml_util__HeadVar__2_2);
        switch (ml_backend__ml_util__StmtContainsVar_12) {
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
      MR_Word ml_backend__ml_util__HeadVar__3_3;

      if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
      else
      {
        MR_Word ml_backend__ml_util__Stmt_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util__Stmts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_util__StmtContainsVar_9;

        ml_backend__ml_util__StmtContainsVar_9 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Stmt_5, ml_backend__ml_util__HeadVar__2_2);
        switch (ml_backend__ml_util__StmtContainsVar_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__Stmts_6;

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
ml_backend__ml_util__function_defns_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word ml_backend__ml_util__HeadVar__3_3;

      if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
      else
      {
        MR_Word ml_backend__ml_util__FuncDefn_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util__FuncDefns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_util__Body_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 5)));
        MR_Word ml_backend__ml_util___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util___Ctxt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 1)));
        MR_Word ml_backend__ml_util___Flags_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 2)));
        MR_Word ml_backend__ml_util___PredProcId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 3)));
        MR_Word ml_backend__ml_util___Params_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 4)));
        MR_Word ml_backend__ml_util___Attrs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 6)));
        MR_Word ml_backend__ml_util___EnvVarNames_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 7)));
        MR_Word ml_backend__ml_util___MaybeRequireTailrecInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_5, (MR_Integer) 8)));

        if ((ml_backend__ml_util__Body_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          /* direct tailcall eliminated */
          {
            MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__FuncDefns_6;

            ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
          }
          continue;
        }
        else
        {
          MR_Word ml_backend__ml_util__FuncDefnContainsVar_9;
          MR_Word ml_backend__ml_util__Stmt_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Body_18, (MR_Integer) 0)));

          ml_backend__ml_util__FuncDefnContainsVar_9 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__Stmt_22, ml_backend__ml_util__HeadVar__2_2);
          switch (ml_backend__ml_util__FuncDefnContainsVar_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__FuncDefns_6;

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
      }
      return ml_backend__ml_util__HeadVar__3_3;
    }
    break;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__statement_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Stmt_4,
  MR_Word ml_backend__ml_util__SearchVarName_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word ml_backend__ml_util__ContainsVar_6;

      switch (MR_tag((MR_Word) ml_backend__ml_util__Stmt_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_util__LocalVarDefns_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__FuncDefns_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util__SubStmts_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
            MR_Word ml_backend__ml_util__LocalVarDefnsContainVar_11;
            MR_Word ml_backend__ml_util___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));

            ml_backend__ml_util__LocalVarDefnsContainVar_11 = ml_backend__ml_util__local_var_defns_contains_var_2_f_0(ml_backend__ml_util__LocalVarDefns_7, ml_backend__ml_util__SearchVarName_5);
            switch (ml_backend__ml_util__LocalVarDefnsContainVar_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_util__FuncDefnsContainVar_12;

                  ml_backend__ml_util__FuncDefnsContainVar_12 = ml_backend__ml_util__function_defns_contains_var_2_f_0(ml_backend__ml_util__FuncDefns_8, ml_backend__ml_util__SearchVarName_5);
                  switch (ml_backend__ml_util__FuncDefnsContainVar_12) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__statements_contains_var_2_f_0(ml_backend__ml_util__SubStmts_9, ml_backend__ml_util__SearchVarName_5);
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
          {
            MR_Word ml_backend__ml_util__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util__BodyStmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
            MR_Word ml_backend__ml_util__RvalContainsVar_16;
            MR_Word ml_backend__ml_util___Kind_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util___Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));

            ml_backend__ml_util__RvalContainsVar_16 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_14, ml_backend__ml_util__SearchVarName_5);
            switch (ml_backend__ml_util__RvalContainsVar_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_Stmt_4 = ml_backend__ml_util__BodyStmt_15;

                    ml_backend__ml_util__Stmt_4 = ml_backend__ml_util__next_value_of_Stmt_4;
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
            MR_Word ml_backend__ml_util__Cond_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)));
            MR_Word ml_backend__ml_util__ThenStmt_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
            MR_Word ml_backend__ml_util__MaybeElseStmt_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
            MR_Word ml_backend__ml_util__CondContainsVar_20;
            MR_Word ml_backend__ml_util___Context_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));

            ml_backend__ml_util__CondContainsVar_20 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Cond_17, ml_backend__ml_util__SearchVarName_5);
            switch (ml_backend__ml_util__CondContainsVar_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_util__ThenContainsVar_21;

                  ml_backend__ml_util__ThenContainsVar_21 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__ThenStmt_18, ml_backend__ml_util__SearchVarName_5);
                  switch (ml_backend__ml_util__ThenContainsVar_21) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      if ((ml_backend__ml_util__MaybeElseStmt_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                      else
                      {
                        MR_Word ml_backend__ml_util__Stmt_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__MaybeElseStmt_19, (MR_Integer) 0)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_util__next_value_of_Stmt_4 = ml_backend__ml_util__Stmt_72;

                          ml_backend__ml_util__Stmt_4 = ml_backend__ml_util__next_value_of_Stmt_4;
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
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_util__Val_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
                MR_Word ml_backend__ml_util__Cases_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
                MR_Word ml_backend__ml_util__Default_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
                MR_Word ml_backend__ml_util__ValContainsVar_27;
                MR_Word ml_backend__ml_util___Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
                MR_Word ml_backend__ml_util___Range_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
                MR_Word ml_backend__ml_util___Context_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 6)));

                ml_backend__ml_util__ValContainsVar_27 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Val_23, ml_backend__ml_util__SearchVarName_5);
                switch (ml_backend__ml_util__ValContainsVar_27) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ml_backend__ml_util__CasesContainsVar_28;

                      ml_backend__ml_util__CasesContainsVar_28 = ml_backend__ml_util__cases_contains_var_2_f_0(ml_backend__ml_util__Cases_25, ml_backend__ml_util__SearchVarName_5);
                      switch (ml_backend__ml_util__CasesContainsVar_28) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_tag((MR_Word) ml_backend__ml_util__Default_26)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word ml_backend__ml_util__Stmt_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Default_26, (MR_Integer) 0)));

                                /* direct tailcall eliminated */
                                {
                                  MR_Word ml_backend__ml_util__next_value_of_Stmt_4 = ml_backend__ml_util__Stmt_78;

                                  ml_backend__ml_util__Stmt_4 = ml_backend__ml_util__next_value_of_Stmt_4;
                                }
                                continue;
                              }
                              break;
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
                MR_Word ml_backend__ml_util__Rval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
                MR_Word ml_backend__ml_util___Labels_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
                MR_Word ml_backend__ml_util___Context_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));

                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_58, ml_backend__ml_util__SearchVarName_5);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ml_backend__ml_util__Func_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
                MR_Word ml_backend__ml_util__Args_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
                MR_Word ml_backend__ml_util__RetLvals_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));
                MR_Word ml_backend__ml_util__FuncContainsVar_38;
                MR_Word ml_backend__ml_util___Sig_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
                MR_Word ml_backend__ml_util___TailCall_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 5)));
                MR_Word ml_backend__ml_util___Markers_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 6)));
                MR_Word ml_backend__ml_util___Context_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 7)));

                ml_backend__ml_util__FuncContainsVar_38 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Func_33, ml_backend__ml_util__SearchVarName_5);
                switch (ml_backend__ml_util__FuncContainsVar_38) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ml_backend__ml_util__ArgsContainVar_39;

                      ml_backend__ml_util__ArgsContainVar_39 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_34, ml_backend__ml_util__SearchVarName_5);
                      switch (ml_backend__ml_util__ArgsContainVar_39) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__RetLvals_35, ml_backend__ml_util__SearchVarName_5);
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
                MR_Word ml_backend__ml_util__Rvals_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
                MR_Word ml_backend__ml_util___Context_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));

                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Rvals_40, ml_backend__ml_util__SearchVarName_5);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ml_backend__ml_util__HandlerStmt_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 3)));
                MR_Word ml_backend__ml_util__RefContainsVar_43;
                MR_Word ml_backend__ml_util__BodyStmt_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));
                MR_Word ml_backend__ml_util__Ref_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
                MR_Word ml_backend__ml_util___Context_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 4)));

                ml_backend__ml_util__RefContainsVar_43 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Ref_68, ml_backend__ml_util__SearchVarName_5);
                switch (ml_backend__ml_util__RefContainsVar_43) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ml_backend__ml_util__StmtContainsVar_44;

                      ml_backend__ml_util__StmtContainsVar_44 = ml_backend__ml_util__statement_contains_var_2_f_0(ml_backend__ml_util__BodyStmt_67, ml_backend__ml_util__SearchVarName_5);
                      switch (ml_backend__ml_util__StmtContainsVar_44) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ml_backend__ml_util__next_value_of_Stmt_4 = ml_backend__ml_util__HandlerStmt_42;

                              ml_backend__ml_util__Stmt_4 = ml_backend__ml_util__next_value_of_Stmt_4;
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
                MR_Word ml_backend__ml_util__Ref_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
                MR_Word ml_backend__ml_util___Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));

                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Ref_41, ml_backend__ml_util__SearchVarName_5);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word ml_backend__ml_util__AtomicStmt_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 1)));
                MR_Word ml_backend__ml_util___Context_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_4, (MR_Integer) 2)));

                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__atomic_stmt_contains_var_2_f_0(ml_backend__ml_util__AtomicStmt_45, ml_backend__ml_util__SearchVarName_5);
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

static MR_Word MR_CALL 
ml_backend__ml_util__atomic_stmt_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__AtomicStmt_4,
  MR_Word ml_backend__ml_util__SearchVarName_5)
{
  {
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

          ml_backend__ml_util__LvalContainsVar_10 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_8, ml_backend__ml_util__SearchVarName_5);
          switch (ml_backend__ml_util__LvalContainsVar_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_9, ml_backend__ml_util__SearchVarName_5);
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

              ml_backend__ml_util__LvalContainsVar_36 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_34, ml_backend__ml_util__SearchVarName_5);
              switch (ml_backend__ml_util__LvalContainsVar_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_35, ml_backend__ml_util__SearchVarName_5);
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

              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_29, ml_backend__ml_util__SearchVarName_5);
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

              ml_backend__ml_util__TargetContainsVar_21 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Target_11, ml_backend__ml_util__SearchVarName_5);
              switch (ml_backend__ml_util__TargetContainsVar_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(ml_backend__ml_util__Args_17, ml_backend__ml_util__SearchVarName_5);
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

              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_30, ml_backend__ml_util__SearchVarName_5);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__ml_util__Rval_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 1)));

              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_31, ml_backend__ml_util__SearchVarName_5);
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

                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_40, ml_backend__ml_util__SearchVarName_5);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ml_backend__ml_util__Rval_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_22, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_util___Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__TrailOp_22, (MR_Integer) 1)));

                    ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_41, ml_backend__ml_util__SearchVarName_5);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_22, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_util__Lval_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_22, (MR_Integer) 1)));

                        ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_43, ml_backend__ml_util__SearchVarName_5);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ml_backend__ml_util__Rval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TrailOp_22, (MR_Integer) 1)));

                        ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_44, ml_backend__ml_util__SearchVarName_5);
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

              ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__target_code_components_contains_var_2_f_0(ml_backend__ml_util__Components_24, ml_backend__ml_util__SearchVarName_5);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ml_backend__ml_util__OutlineArgs_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util__ReturnLvals_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 3)));
              MR_Word ml_backend__ml_util__OutlineArgsContainVar_28;
              MR_String ml_backend__ml_util___Code_27 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 4)));
              MR_Word ml_backend__ml_util___Lang_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__AtomicStmt_4, (MR_Integer) 1)));

              ml_backend__ml_util__OutlineArgsContainVar_28 = ml_backend__ml_util__outline_args_contains_var_2_f_0(ml_backend__ml_util__OutlineArgs_25, ml_backend__ml_util__SearchVarName_5);
              switch (ml_backend__ml_util__OutlineArgsContainVar_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ml_backend__ml_util__ReturnLvals_26, ml_backend__ml_util__SearchVarName_5);
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
ml_backend__ml_util__outline_args_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
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

              ml_backend__ml_util__OutlineArgContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_15, ml_backend__ml_util__HeadVar__2_2);
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

              ml_backend__ml_util__OutlineArgContainsVar_21 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_16, ml_backend__ml_util__HeadVar__2_2);
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
          case (MR_Integer) 2:
            {
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__TargetCodes_6;

                ml_backend__ml_util__HeadVar__1_1 = ml_backend__ml_util__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_util__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__TargetCodeContainsVar_21;

                  ml_backend__ml_util__TargetCodeContainsVar_21 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_19, ml_backend__ml_util__HeadVar__2_2);
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
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_util__Lval_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__TargetCode_5, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util__TargetCodeContainsVar_22;

                  ml_backend__ml_util__TargetCodeContainsVar_22 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_20, ml_backend__ml_util__HeadVar__2_2);
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

MR_Word MR_CALL 
ml_backend__ml_util__lvals_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word ml_backend__ml_util__HeadVar__3_3;

      if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
      else
      {
        MR_Word ml_backend__ml_util__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util__Lvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_util__LvalContainsVar_9;

        ml_backend__ml_util__LvalContainsVar_9 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_5, ml_backend__ml_util__HeadVar__2_2);
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
ml_backend__ml_util__rvals_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word ml_backend__ml_util__HeadVar__3_3;

      if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
      else
      {
        MR_Word ml_backend__ml_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util__Rvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_util__RvalContainsVar_9;

        ml_backend__ml_util__RvalContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_5, ml_backend__ml_util__HeadVar__2_2);
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
ml_backend__ml_util__local_var_defns_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word ml_backend__ml_util__HeadVar__3_3;

      if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
      else
      {
        MR_Word ml_backend__ml_util__LocalVarDefn_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util__LocalVarDefns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_util__LocalVarDefnContainsVar_9;
        MR_Word ml_backend__ml_util__Initializer_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__LocalVarDefn_5, (MR_Integer) 3)));
        MR_Word ml_backend__ml_util___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__LocalVarDefn_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util___Ctxt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__LocalVarDefn_5, (MR_Integer) 1)));
        MR_Word ml_backend__ml_util___Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__LocalVarDefn_5, (MR_Integer) 2)));
        MR_Word ml_backend__ml_util___GCStmt_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__LocalVarDefn_5, (MR_Integer) 4)));

        ml_backend__ml_util__LocalVarDefnContainsVar_9 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_16, ml_backend__ml_util__HeadVar__2_2);
        switch (ml_backend__ml_util__LocalVarDefnContainsVar_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__LocalVarDefns_6;

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
ml_backend__ml_util__initializers_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1,
  MR_Word ml_backend__ml_util__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word ml_backend__ml_util__HeadVar__3_3;

      if ((ml_backend__ml_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_util__HeadVar__3_3 = (MR_Integer) 0;
      else
      {
        MR_Word ml_backend__ml_util__Initializer_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_util__Initializers_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_util__InitializerContainsVar_9;

        ml_backend__ml_util__InitializerContainsVar_9 = ml_backend__ml_util__initializer_contains_var_2_f_0(ml_backend__ml_util__Initializer_5, ml_backend__ml_util__HeadVar__2_2);
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

MR_Word MR_CALL 
ml_backend__ml_util__initializer_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Initializer_4,
  MR_Word ml_backend__ml_util__SearchVarName_5)
{
  {
    MR_Word ml_backend__ml_util__ContainsVar_6;

    switch (MR_tag((MR_Word) ml_backend__ml_util__Initializer_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_util__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_7, ml_backend__ml_util__SearchVarName_5);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_util__FieldInitializers_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 1)));
          MR_Word ml_backend__ml_util___Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__FieldInitializers_9, ml_backend__ml_util__SearchVarName_5);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__ml_util__ElementInitializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Initializer_4, (MR_Integer) 0)));

          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ml_backend__ml_util__ElementInitializers_10, ml_backend__ml_util__SearchVarName_5);
        }
        break;
    }
    return ml_backend__ml_util__ContainsVar_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__lval_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Lval_4,
  MR_Word ml_backend__ml_util__SearchVarName_5)
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

          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_8, ml_backend__ml_util__SearchVarName_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_util__Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 0)));
          MR_Word ml_backend__ml_util___Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));

          ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__Rval_17, ml_backend__ml_util__SearchVarName_5);
        }
        break;
      case (MR_Integer) 2:
        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_util__VarName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util___Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Lval_4, (MR_Integer) 2)));

              ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____qual_local_var_name_0_0(ml_backend__ml_util__VarName_16, ml_backend__ml_util__SearchVarName_5);
              if (ml_backend__ml_util__succeeded)
                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
              else
                ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return ml_backend__ml_util__ContainsVar_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__rval_contains_var_2_f_0(
  MR_Word ml_backend__ml_util__Rval_4,
  MR_Word ml_backend__ml_util__SearchVarName_5)
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
        case (MR_Integer) 1:
          ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ml_backend__ml_util__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Rval_4, (MR_Integer) 0)));

            ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_7, ml_backend__ml_util__SearchVarName_5);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_util__SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
                MR_Integer ml_backend__ml_util___Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_util__next_value_of_Rval_4 = ml_backend__ml_util__SubRval_9;

                  ml_backend__ml_util__Rval_4 = ml_backend__ml_util__next_value_of_Rval_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_util__Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ml_backend__ml_util__Const_10)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Const_10, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                      case (MR_Integer) 8:
                      case (MR_Integer) 9:
                      case (MR_Integer) 10:
                      case (MR_Integer) 11:
                      case (MR_Integer) 12:
                      case (MR_Integer) 13:
                      case (MR_Integer) 15:
                      case (MR_Integer) 16:
                      case (MR_Integer) 17:
                      case (MR_Integer) 18:
                        ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 14:
                        {
                          MR_Word ml_backend__ml_util__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Const_10, (MR_Integer) 1)));
                          MR_Word ml_backend__ml_util__RawVarName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Const_10, (MR_Integer) 2)));
                          MR_Word ml_backend__ml_util__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__SearchVarName_5, (MR_Integer) 0)));
                          MR_Word ml_backend__ml_util__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__SearchVarName_5, (MR_Integer) 2)));
                          MR_Word ml_backend__ml_util___QualKind_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__SearchVarName_5, (MR_Integer) 1)));

                          ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__ModuleName_11, ml_backend__ml_util__Var_54);
                          if (ml_backend__ml_util__succeeded)
                            ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(ml_backend__ml_util__RawVarName_12, ml_backend__ml_util__Var_55);
                          if (ml_backend__ml_util__succeeded)
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 1;
                          else
                            ml_backend__ml_util__ContainsVar_6 = (MR_Integer) 0;
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ml_backend__ml_util__RvalA_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
                MR_Word ml_backend__ml_util___Op_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_util__next_value_of_Rval_4 = ml_backend__ml_util__RvalA_42;

                  ml_backend__ml_util__Rval_4 = ml_backend__ml_util__next_value_of_Rval_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ml_backend__ml_util__RvalB_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 3)));
                MR_Word ml_backend__ml_util__RvalAContainsVar_44;
                MR_Word ml_backend__ml_util__RvalA_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
                MR_Word ml_backend__ml_util___Op_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                ml_backend__ml_util__RvalAContainsVar_44 = ml_backend__ml_util__rval_contains_var_2_f_0(ml_backend__ml_util__RvalA_51, ml_backend__ml_util__SearchVarName_5);
                switch (ml_backend__ml_util__RvalAContainsVar_44) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ml_backend__ml_util__next_value_of_Rval_4 = ml_backend__ml_util__RvalB_43;

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
            case (MR_Integer) 4:
              {
                MR_Word ml_backend__ml_util__Lval_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                ml_backend__ml_util__ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(ml_backend__ml_util__Lval_52, ml_backend__ml_util__SearchVarName_5);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ml_backend__ml_util__IndexRval_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 2)));
                MR_Word ml_backend__ml_util___VectorCommon_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Rval_4, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_util__next_value_of_Rval_4 = ml_backend__ml_util__IndexRval_46;

                  ml_backend__ml_util__Rval_4 = ml_backend__ml_util__next_value_of_Rval_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 6:
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

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_2(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_59 = ((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv0_Stmt_59);
    ml_backend__ml_util__stmt_contains_statement_2_p_0_1(ml_backend__ml_util__env_ptr);
  }
}

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_1(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    ml_backend__ml_util__statement_is_or_contains_statement_2_p_0((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_59, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_4(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_70 = ((MR_Word) (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv1_Case_70);
    ml_backend__ml_util__stmt_contains_statement_2_p_0_3(ml_backend__ml_util__env_ptr);
  }
}

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_3(
  void * ml_backend__ml_util__env_ptr_arg)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * ml_backend__ml_util__env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) ml_backend__ml_util__env_ptr_arg;

    {
      MR_Word ml_backend__ml_util___FirstCond_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_70, (MR_Integer) 0)));
      MR_Word ml_backend__ml_util___LaterConds_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_70, (MR_Integer) 1)));

      (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_70, (MR_Integer) 2)));
      ml_backend__ml_util__statement_is_or_contains_statement_2_p_0((ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_73, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0(
  MR_Word ml_backend__ml_util__Stmt_3,
  MR_Word * ml_backend__ml_util__SubStmt_4,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s ml_backend__ml_util__env;

    (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4 = ml_backend__ml_util__SubStmt_4;
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
              MR_Word ml_backend__ml_util__Stmts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util___LocalVarDefns_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));
              MR_Word ml_backend__ml_util___FuncDefns_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));

              mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, &(ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv0_Stmt_59, ml_backend__ml_util__Stmts_7, ml_backend__ml_util__stmt_contains_statement_2_p_0_2, &ml_backend__ml_util__env);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_util__BodyStmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util___Kind_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));
              MR_Word ml_backend__ml_util___Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util___Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));

              *((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4) = ml_backend__ml_util__BodyStmt_11;
              ((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_util__next_value_of_Stmt_3 = ml_backend__ml_util__BodyStmt_11;

                ml_backend__ml_util__Stmt_3 = ml_backend__ml_util__next_value_of_Stmt_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_util__ThenStmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
              MR_Word ml_backend__ml_util__MaybeElseStmt_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
              MR_Word ml_backend__ml_util___Cond_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)));
              MR_Word ml_backend__ml_util___Context_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));

              *((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4) = ml_backend__ml_util__ThenStmt_13;
              ((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
              ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__ThenStmt_13, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
              {
                MR_Word ml_backend__ml_util__Stmt_65;

                ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__MaybeElseStmt_14)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_util__succeeded)
                {
                  ml_backend__ml_util__Stmt_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__MaybeElseStmt_14, (MR_Integer) 0)));
                  ml_backend__ml_util__statement_is_or_contains_statement_2_p_0(ml_backend__ml_util__Stmt_65, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                }
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 0)))) {
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_util__Cases_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_util__Default_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 5)));
                  MR_Word ml_backend__ml_util___Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util___Val_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util___Range_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_util___Context_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 6)));

                  mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, &(ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv1_Case_70, ml_backend__ml_util__Cases_18, ml_backend__ml_util__stmt_contains_statement_2_p_0_4, &ml_backend__ml_util__env);
                  {
                    MR_Word ml_backend__ml_util__Stmt_77;

                    ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__Default_19)) == (MR_mktag((MR_Integer) 1)));
                    if (ml_backend__ml_util__succeeded)
                    {
                      ml_backend__ml_util__Stmt_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__Default_19, (MR_Integer) 0)));
                      ml_backend__ml_util__statement_is_or_contains_statement_2_p_0(ml_backend__ml_util__Stmt_77, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                    }
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ml_backend__ml_util__HandlerStmt_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_util__BodyStmt_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_util___Ref_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_util___Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_util__Stmt_3, (MR_Integer) 4)));

                  *((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4) = ml_backend__ml_util__BodyStmt_41;
                  ((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                  ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__BodyStmt_41, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                  *((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4) = ml_backend__ml_util__HandlerStmt_21;
                  ((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((ml_backend__ml_util__env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_util__next_value_of_Stmt_3 = ml_backend__ml_util__HandlerStmt_21;

                    ml_backend__ml_util__Stmt_3 = ml_backend__ml_util__next_value_of_Stmt_3;
                  }
                  continue;
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
ml_backend__ml_util__statement_is_or_contains_statement_2_p_0(
  MR_Word ml_backend__ml_util__Stmt_1,
  MR_Word * ml_backend__ml_util__HeadVar__2_2,
  MR_Cont ml_backend__ml_util__cont,
  void * ml_backend__ml_util__cont_env_ptr)
{
  {
    *ml_backend__ml_util__HeadVar__2_2 = ml_backend__ml_util__Stmt_1;
    ml_backend__ml_util__cont(ml_backend__ml_util__cont_env_ptr);
    ml_backend__ml_util__stmt_contains_statement_2_p_0(ml_backend__ml_util__Stmt_1, ml_backend__ml_util__HeadVar__2_2, ml_backend__ml_util__cont, ml_backend__ml_util__cont_env_ptr);
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
    MR_Word ml_backend__ml_util__QualFuncLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__CodeAddr_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_util__FuncModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualFuncLabel_7, (MR_Integer) 0)));
    MR_Word ml_backend__ml_util__FuncLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__QualFuncLabel_7, (MR_Integer) 1)));
    MR_Word ml_backend__ml_util__Var_12;
    MR_Word ml_backend__ml_util__Var_13;
    MR_Word ml_backend__ml_util___Signature_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__CodeAddr_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_util___PredId_11;

    ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_util__FuncModuleName_9, ml_backend__ml_util__ModuleName_5);
    if (ml_backend__ml_util__succeeded)
    {
      ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_6)) == (MR_mktag((MR_Integer) 0)));
      if (ml_backend__ml_util__succeeded)
      {
        ml_backend__ml_util__Var_12 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__FuncName_6), (MR_Integer) 0);
        ml_backend__ml_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_12, (MR_Integer) 0)));
        ml_backend__ml_util___PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__Var_12, (MR_Integer) 1)));
        ml_backend__ml_util__succeeded = ml_backend__mlds____Unify____mlds_func_label_0_0(ml_backend__ml_util__FuncLabel_10, ml_backend__ml_util__Var_13);
      }
    }
    return ml_backend__ml_util__succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__func_defns_contain_main_1_p_0(
  MR_Word ml_backend__ml_util__HeadVar__1_1)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word ml_backend__ml_util__FuncDefn_2;
      MR_Word ml_backend__ml_util__FuncDefns_3;
      MR_Word ml_backend__ml_util__FuncName_4;
      MR_Word ml_backend__ml_util__PlainFuncName_13;
      MR_Word ml_backend__ml_util__FuncLabel_14;
      MR_Word ml_backend__ml_util__ProcLabel_16;
      MR_Word ml_backend__ml_util__PredLabel_18;
      MR_Word ml_backend__ml_util__Var_23;
      MR_String ml_backend__ml_util__Var_24;
      MR_Integer ml_backend__ml_util__Var_25;
      MR_Word ml_backend__ml_util__Var_5;
      MR_Word ml_backend__ml_util__Var_6;
      MR_Word ml_backend__ml_util__Var_7;
      MR_Word ml_backend__ml_util__Var_8;
      MR_Word ml_backend__ml_util__Var_9;
      MR_Word ml_backend__ml_util__Var_10;
      MR_Word ml_backend__ml_util__Var_11;
      MR_Word ml_backend__ml_util__Var_12;
      MR_Word ml_backend__ml_util__Var_15;
      MR_Word ml_backend__ml_util___MaybeSeqNum_17;
      MR_Integer ml_backend__ml_util___ProcId_19;
      MR_Word ml_backend__ml_util__Var_20;
      MR_Word ml_backend__ml_util__Var_21;
      MR_Word ml_backend__ml_util__Var_22;

      if (ml_backend__ml_util__succeeded)
      {
        ml_backend__ml_util__FuncDefn_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 0)));
        ml_backend__ml_util__FuncDefns_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_util__HeadVar__1_1, (MR_Integer) 1)));
        ml_backend__ml_util__FuncName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_2, (MR_Integer) 0)));
        ml_backend__ml_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_2, (MR_Integer) 1)));
        ml_backend__ml_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_2, (MR_Integer) 2)));
        ml_backend__ml_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_2, (MR_Integer) 3)));
        ml_backend__ml_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_2, (MR_Integer) 4)));
        ml_backend__ml_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_2, (MR_Integer) 5)));
        ml_backend__ml_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_2, (MR_Integer) 6)));
        ml_backend__ml_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_2, (MR_Integer) 7)));
        ml_backend__ml_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncDefn_2, (MR_Integer) 8)));
        ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__FuncName_4)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__ml_util__succeeded)
        {
          ml_backend__ml_util__PlainFuncName_13 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_util__FuncName_4), (MR_Integer) 0);
          ml_backend__ml_util__FuncLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PlainFuncName_13, (MR_Integer) 0)));
          ml_backend__ml_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PlainFuncName_13, (MR_Integer) 1)));
          ml_backend__ml_util__ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncLabel_14, (MR_Integer) 0)));
          ml_backend__ml_util___MaybeSeqNum_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__FuncLabel_14, (MR_Integer) 1)));
          ml_backend__ml_util__PredLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_16, (MR_Integer) 0)));
          ml_backend__ml_util___ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__ProcLabel_16, (MR_Integer) 1)));
          ml_backend__ml_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_util__PredLabel_18)) == (MR_mktag((MR_Integer) 0)));
          if (ml_backend__ml_util__succeeded)
          {
            ml_backend__ml_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PredLabel_18, (MR_Integer) 0)));
            ml_backend__ml_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PredLabel_18, (MR_Integer) 1)));
            ml_backend__ml_util__Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PredLabel_18, (MR_Integer) 2)));
            ml_backend__ml_util__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PredLabel_18, (MR_Integer) 3)));
            ml_backend__ml_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PredLabel_18, (MR_Integer) 4)));
            ml_backend__ml_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_util__PredLabel_18, (MR_Integer) 5)));
            ml_backend__ml_util__succeeded = (ml_backend__ml_util__Var_23 == (MR_Integer) 0);
            if (ml_backend__ml_util__succeeded)
            {
              ml_backend__ml_util__succeeded = (strcmp(ml_backend__ml_util__Var_24, (MR_String) "main") == 0);
              if (ml_backend__ml_util__succeeded)
                ml_backend__ml_util__succeeded = (ml_backend__ml_util__Var_25 == (MR_Integer) 2);
            }
          }
        }
        if (ml_backend__ml_util__succeeded)
          ml_backend__ml_util__succeeded = MR_TRUE;
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Word ml_backend__ml_util__next_value_of_HeadVar__1_1 = ml_backend__ml_util__FuncDefns_3;

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
