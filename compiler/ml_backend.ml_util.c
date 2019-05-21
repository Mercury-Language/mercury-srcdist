/*
** Automatically generated from `ml_util.m'
** by the Mercury compiler,
** version rotd-2017-10-11
** configured for x86_64-pc-linux-gnu.
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


// :- module ml_backend.ml_util.
// :- implementation.

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
#include "hlds.mark_tail_calls.mih"
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
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0(
  MR_Word Stmt_3,
  MR_Word * LambdaHeadVar__1_12,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_util__statements_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_util__atomic_stmt_contains_var_2_f_0(
  MR_Word AtomicStmt_4,
  MR_Word SearchVarName_5);

static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_3(
  void * env_ptr_arg);


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
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0_s * env_ptr = (struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_11;
      MR_Word Var_8;
      MR_Word Var_9;
      MR_String Var_10;

      (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__SubStmt_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__SubStmt_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if ((env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__succeeded)
      {
        (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__SubStmt_7, (MR_Integer) 1)));
        Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__SubStmt_7, (MR_Integer) 2)));
        (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13, (MR_Integer) 0)))) == (MR_Integer) 7)));
        if ((env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__succeeded)
        {
          *((env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__LambdaHeadVar__1_12) = ((MR_Word) (MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13, (MR_Integer) 1)));
          Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13, (MR_Integer) 2)));
          Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13, (MR_Integer) 3)));
          Var_10 = ((MR_String) (MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__Var_13, (MR_Integer) 4)));
          ((env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__cont)((env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__cont_env_ptr);
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0(
  MR_Word Stmt_3,
  MR_Word * LambdaHeadVar__1_12,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0_s env;

    (env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__LambdaHeadVar__1_12 = LambdaHeadVar__1_12;
    (env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__cont = cont;
    (env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
    (env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__SubStmt_7 = Stmt_3;
    ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_1(&env);
    ml_backend__ml_util__stmt_contains_statement_2_p_0(Stmt_3, &(env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_env_0__SubStmt_7, ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0_1, &env);
  }
}

MR_String MR_CALL 
ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(
  MR_Word MaybeAux_3)
{
  {
    MR_String Suffix_4;

    switch (MR_tag((MR_Word) MaybeAux_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(MaybeAux_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Suffix_4 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_30;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_util_scalar_common_3[3], (MR_Integer) 10000, &Var_30);
              Suffix_4 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_30);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer SeqNum_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeAux_3, (MR_Integer) 0)));
          MR_String Var_22;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_util_scalar_common_3[3], SeqNum_5, &Var_22);
          Suffix_4 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_22);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_9;
          MR_Integer SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), MaybeAux_3, (MR_Integer) 0)));
          MR_String Var_38;

          Var_9 = ((MR_Integer) 10001 + SeqNum_21);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_util_scalar_common_3[3], Var_9, &Var_38);
          Suffix_4 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_38);
        }
        break;
    }
    return Suffix_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__get_mlds_stmt_context_1_f_0(
  MR_Word Stmt_3)
{
  {
    MR_Word Context_4;

    switch (MR_tag((MR_Word) Stmt_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_3, (MR_Integer) 0)));
          MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_3, (MR_Integer) 1)));
          MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_3, (MR_Integer) 2)));

          Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_3, (MR_Integer) 3)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_3, (MR_Integer) 0)));
          MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_3, (MR_Integer) 1)));
          MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_3, (MR_Integer) 2)));

          Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_3, (MR_Integer) 3)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_3, (MR_Integer) 0)));
          MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_3, (MR_Integer) 1)));
          MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_3, (MR_Integer) 2)));

          Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_3, (MR_Integer) 3)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 1)));
              MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 2)));
              MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 3)));
              MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 4)));
              MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 5)));

              Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 6)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_19 = ((MR_String) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 1)));

              Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 1)));

              Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 1)));
              MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 2)));

              Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 1)));
              MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 2)));
              MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 3)));
              MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 4)));
              MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 5)));
              MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 6)));

              Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 7)));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 1)));

              Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 1)));
              MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 2)));
              MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 3)));

              Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 4)));
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 1)));

              Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 1)));

              Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 2)));
            }
            break;
        }
        break;
    }
    return Context_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__wrap_init_obj_1_f_0(
  MR_Word Rval_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Rval_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_array_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Conv_4,
  MR_Word List_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    Var_6 = mercury__list__map_2_f_0(TypeInfo_for_T_7, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, Conv_4, List_5);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_maybe_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word HeadVar__4_4;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_12;
      MR_Word Var_13;

      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
        MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (HeadVar__1_1));
      }
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_12, 1) = ((MR_Box) (Var_13));
      }
      {
        HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (Var_12));
      }
    }
    else
    {
      MR_Box X_7 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Box conv1_HeadVar__4_4;

      conv1_HeadVar__4_4 = func_0(((MR_Box) HeadVar__2_2), X_7);
      HeadVar__4_4 = ((MR_Word) conv1_HeadVar__4_4);
    }
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_reserved_address_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word ReservedAddress_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    Var_6 = ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(ModuleInfo_4, ReservedAddress_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_null_pointer_1_f_0(
  MR_Word Type_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_5;

    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
      MR_hl_field(MR_mktag(3), Var_5, 1) = ((MR_Box) (Type_3));
    }
    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (Var_5));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_foreign_2_f_0(
  MR_Word Lang_4,
  MR_String String_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), Var_7, 1) = ((MR_Box) (Lang_4));
      MR_hl_field(MR_mktag(3), Var_7, 2) = ((MR_Box) (String_5));
      MR_hl_field(MR_mktag(3), Var_7, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (Var_7));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_builtin_const_2_f_0(
  MR_Word TargetPrefixes_4,
  MR_String Name_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Rval_6;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), Var_7, 1) = ((MR_Box) (TargetPrefixes_4));
      MR_hl_field(MR_mktag(3), Var_7, 2) = ((MR_Box) (Name_5));
    }
    {
      Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Rval_6, 1) = ((MR_Box) (Var_7));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Rval_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_string_1_f_0(
  MR_String String_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_5;

    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
      MR_hl_field(MR_mktag(3), Var_5, 1) = ((MR_Box) (String_3));
    }
    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (Var_5));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_boxed_int_1_f_0(
  MR_Integer Int_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_7;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_8, 0) = ((MR_Box) (Int_3));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_7, 1) = ((MR_Box) (Var_8));
    }
    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (&ml_backend__ml_util_scalar_common_3[2]));
      MR_hl_field(MR_mktag(3), Var_4, 2) = ((MR_Box) (Var_7));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_int_1_f_0(
  MR_Integer Int_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_5;

    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_5, 0) = ((MR_Box) (Int_3));
    }
    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (Var_5));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_bool_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[0]);
        }
        break;
      case (MR_Integer) 1:
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_util_scalar_common_3[1]);
        }
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__maybe_rval_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      HeadVar__3_3 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_5, HeadVar__2_2);
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__function_defn_contains_var_2_f_0(
  MR_Word FuncDefn_4,
  MR_Word SearchVarName_5)
{
  {
    MR_Word ContainsVar_6;
    MR_Word Body_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 5)));
    MR_Word _Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 0)));
    MR_Word _Ctxt_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 1)));
    MR_Word _Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 2)));
    MR_Word _PredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 3)));
    MR_Word _Params_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 4)));
    MR_Word _Attrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 6)));
    MR_Word _EnvVarNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 7)));
    MR_Word _MaybeRequireTailrecInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 8)));

    if ((Body_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ContainsVar_6 = (MR_Integer) 0;
    else
    {
      MR_Word Stmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_12, (MR_Integer) 0)));

      ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(Stmt_16, SearchVarName_5);
    }
    return ContainsVar_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__local_var_defn_contains_var_2_f_0(
  MR_Word LocalVarDefn_4,
  MR_Word SearchVarName_5)
{
  {
    MR_Word ContainsVar_6;
    MR_Word Initializer_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_4, (MR_Integer) 3)));
    MR_Word _Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_4, (MR_Integer) 0)));
    MR_Word _Ctxt_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_4, (MR_Integer) 1)));
    MR_Word _Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_4, (MR_Integer) 2)));
    MR_Word _GCStmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_4, (MR_Integer) 4)));

    ContainsVar_6 = ml_backend__ml_util__initializer_contains_var_2_f_0(Initializer_10, SearchVarName_5);
    return ContainsVar_6;
  }
}

static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s * env_ptr = (struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s *) env_ptr_arg;

    *((env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12));
    ((env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont)((env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s env;

    (env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont = cont;
    (env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__609__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &(env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12, ml_backend__ml_util__has_foreign_languages_2_p_0_1, &env);
    }
  }
}

void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0(
  MR_Word Stmt_3,
  MR_Word * Langs_4)
{
  {
    MR_Word GetTargetCode_5;

    {
      GetTargetCode_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GetTargetCode_5, 0) = ((MR_Box) (&ml_backend__ml_util_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), GetTargetCode_5, 1) = ((MR_Box) (ml_backend__ml_util__has_foreign_languages_2_p_0_2));
      MR_hl_field(MR_mktag(0), GetTargetCode_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), GetTargetCode_5, 3) = ((MR_Box) (Stmt_3));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, GetTargetCode_5, Langs_4);
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__statement_contains_var_2_f_0(
  MR_Word Stmt_4,
  MR_Word SearchVarName_5)
{
  while (MR_TRUE)
  {
    MR_Word ContainsVar_6;

    // setup for tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Stmt_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 0)));
          MR_Word FuncDefns_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 1)));
          MR_Word SubStmts_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 2)));
          MR_Word LocalVarDefnsContainVar_11;
          MR_Word _Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 3)));

          LocalVarDefnsContainVar_11 = ml_backend__ml_util__local_var_defns_contains_var_2_f_0(LocalVarDefns_7, SearchVarName_5);
          switch (LocalVarDefnsContainVar_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word FuncDefnsContainVar_12;

                FuncDefnsContainVar_12 = ml_backend__ml_util__function_defns_contains_var_2_f_0(FuncDefns_8, SearchVarName_5);
                switch (FuncDefnsContainVar_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ContainsVar_6 = ml_backend__ml_util__statements_contains_var_2_f_0(SubStmts_9, SearchVarName_5);
                    break;
                  case (MR_Integer) 1:
                    ContainsVar_6 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              ContainsVar_6 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 1)));
          MR_Word BodyStmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 2)));
          MR_Word RvalContainsVar_16;
          MR_Word _Kind_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 0)));
          MR_Word _Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 3)));

          RvalContainsVar_16 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_14, SearchVarName_5);
          switch (RvalContainsVar_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_Stmt_4 = BodyStmt_15;

                // direct tailcall eliminated
                Stmt_4 = next_value_of_Stmt_4;
                continue;
              }
              break;
            case (MR_Integer) 1:
              ContainsVar_6 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Cond_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 0)));
          MR_Word ThenStmt_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 1)));
          MR_Word MaybeElseStmt_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 2)));
          MR_Word CondContainsVar_20;
          MR_Word _Context_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 3)));

          CondContainsVar_20 = ml_backend__ml_util__rval_contains_var_2_f_0(Cond_17, SearchVarName_5);
          switch (CondContainsVar_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ThenContainsVar_21;

                ThenContainsVar_21 = ml_backend__ml_util__statement_contains_var_2_f_0(ThenStmt_18, SearchVarName_5);
                switch (ThenContainsVar_21) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    if ((MaybeElseStmt_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      ContainsVar_6 = (MR_Integer) 0;
                    else
                    {
                      MR_Word Stmt_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeElseStmt_19, (MR_Integer) 0)));
                      MR_Word next_value_of_Stmt_4 = Stmt_72;

                      // direct tailcall eliminated
                      Stmt_4 = next_value_of_Stmt_4;
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    ContainsVar_6 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              ContainsVar_6 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Val_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));
              MR_Word Cases_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 4)));
              MR_Word Default_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 5)));
              MR_Word ValContainsVar_27;
              MR_Word _Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
              MR_Word _Range_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3)));
              MR_Word _Context_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 6)));

              ValContainsVar_27 = ml_backend__ml_util__rval_contains_var_2_f_0(Val_23, SearchVarName_5);
              switch (ValContainsVar_27) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word CasesContainsVar_28;

                    CasesContainsVar_28 = ml_backend__ml_util__cases_contains_var_2_f_0(Cases_25, SearchVarName_5);
                    switch (CasesContainsVar_28) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_tag((MR_Word) Default_26)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ContainsVar_6 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word Stmt_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), Default_26, (MR_Integer) 0)));
                              MR_Word next_value_of_Stmt_4 = Stmt_78;

                              // direct tailcall eliminated
                              Stmt_4 = next_value_of_Stmt_4;
                              continue;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        ContainsVar_6 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            ContainsVar_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            {
              MR_Word Rval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
              MR_Word _Labels_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));
              MR_Word _Context_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3)));

              ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_58, SearchVarName_5);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Func_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));
              MR_Word Args_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3)));
              MR_Word RetLvals_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 4)));
              MR_Word FuncContainsVar_38;
              MR_Word _Sig_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
              MR_Word _TailCall_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 5)));
              MR_Word _Markers_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 6)));
              MR_Word _Context_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 7)));

              FuncContainsVar_38 = ml_backend__ml_util__rval_contains_var_2_f_0(Func_33, SearchVarName_5);
              switch (FuncContainsVar_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ArgsContainVar_39;

                    ArgsContainVar_39 = ml_backend__ml_util__rvals_contains_var_2_f_0(Args_34, SearchVarName_5);
                    switch (ArgsContainVar_39) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(RetLvals_35, SearchVarName_5);
                        break;
                      case (MR_Integer) 1:
                        ContainsVar_6 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rvals_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
              MR_Word _Context_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));

              ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(Rvals_40, SearchVarName_5);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word HandlerStmt_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3)));
              MR_Word RefContainsVar_43;
              MR_Word BodyStmt_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));
              MR_Word Ref_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
              MR_Word _Context_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 4)));

              RefContainsVar_43 = ml_backend__ml_util__lval_contains_var_2_f_0(Ref_68, SearchVarName_5);
              switch (RefContainsVar_43) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word StmtContainsVar_44;

                    StmtContainsVar_44 = ml_backend__ml_util__statement_contains_var_2_f_0(BodyStmt_67, SearchVarName_5);
                    switch (StmtContainsVar_44) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word next_value_of_Stmt_4 = HandlerStmt_42;

                          // direct tailcall eliminated
                          Stmt_4 = next_value_of_Stmt_4;
                          continue;
                        }
                        break;
                      case (MR_Integer) 1:
                        ContainsVar_6 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Ref_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
              MR_Word _Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));

              ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Ref_41, SearchVarName_5);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word AtomicStmt_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
              MR_Word _Context_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));

              ContainsVar_6 = ml_backend__ml_util__atomic_stmt_contains_var_2_f_0(AtomicStmt_45, SearchVarName_5);
            }
            break;
        }
        break;
    }
    return ContainsVar_6;
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_util__cases_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Case_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Stmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_5, (MR_Integer) 2)));
      MR_Word StmtContainsVar_12;
      MR_Word _FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_5, (MR_Integer) 0)));
      MR_Word _LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_5, (MR_Integer) 1)));

      StmtContainsVar_12 = ml_backend__ml_util__statement_contains_var_2_f_0(Stmt_11, HeadVar__2_2);
      switch (StmtContainsVar_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Cases_6;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_util__statements_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Stmt_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Stmts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word StmtContainsVar_9;

      StmtContainsVar_9 = ml_backend__ml_util__statement_contains_var_2_f_0(Stmt_5, HeadVar__2_2);
      switch (StmtContainsVar_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Stmts_6;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__function_defns_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word FuncDefn_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word FuncDefns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Body_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_5, (MR_Integer) 5)));
      MR_Word _Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_5, (MR_Integer) 0)));
      MR_Word _Ctxt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_5, (MR_Integer) 1)));
      MR_Word _Flags_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_5, (MR_Integer) 2)));
      MR_Word _PredProcId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_5, (MR_Integer) 3)));
      MR_Word _Params_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_5, (MR_Integer) 4)));
      MR_Word _Attrs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_5, (MR_Integer) 6)));
      MR_Word _EnvVarNames_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_5, (MR_Integer) 7)));
      MR_Word _MaybeRequireTailrecInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_5, (MR_Integer) 8)));

      if ((Body_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word next_value_of_HeadVar__1_1 = FuncDefns_6;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word FuncDefnContainsVar_9;
        MR_Word Stmt_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_18, (MR_Integer) 0)));

        FuncDefnContainsVar_9 = ml_backend__ml_util__statement_contains_var_2_f_0(Stmt_22, HeadVar__2_2);
        switch (FuncDefnContainsVar_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_HeadVar__1_1 = FuncDefns_6;

              // direct tailcall eliminated
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
          case (MR_Integer) 1:
            HeadVar__3_3 = (MR_Integer) 1;
            break;
        }
      }
    }
    return HeadVar__3_3;
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_util__atomic_stmt_contains_var_2_f_0(
  MR_Word AtomicStmt_4,
  MR_Word SearchVarName_5)
{
  {
    MR_Word ContainsVar_6;

    switch (MR_tag((MR_Word) AtomicStmt_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ContainsVar_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ContainsVar_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), AtomicStmt_4, (MR_Integer) 0)));
          MR_Word Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), AtomicStmt_4, (MR_Integer) 1)));
          MR_Word LvalContainsVar_10;

          LvalContainsVar_10 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_8, SearchVarName_5);
          switch (LvalContainsVar_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_9, SearchVarName_5);
              break;
            case (MR_Integer) 1:
              ContainsVar_6 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Lval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 1)));
              MR_Word Rval_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 2)));
              MR_Word LvalContainsVar_36;

              LvalContainsVar_36 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_34, SearchVarName_5);
              switch (LvalContainsVar_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_35, SearchVarName_5);
                  break;
                case (MR_Integer) 1:
                  ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Rval_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 1)));

              ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_29, SearchVarName_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 1)));
              MR_Word Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 7)));
              MR_Word TargetContainsVar_21;
              MR_Word _MaybeTag_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 2)));
              MR_Word _ExplicitSecTag_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 3)));
              MR_Word _Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 4)));
              MR_Word _MaybeSize_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 5)));
              MR_Word _MaybeCtorName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 6)));
              MR_Word _ArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 8)));
              MR_Word _MayUseAtomic_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 9)));
              MR_Word _AllocId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 10)));

              TargetContainsVar_21 = ml_backend__ml_util__lval_contains_var_2_f_0(Target_11, SearchVarName_5);
              switch (TargetContainsVar_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(Args_17, SearchVarName_5);
                  break;
                case (MR_Integer) 1:
                  ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Lval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 1)));

              ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_30, SearchVarName_5);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 1)));

              ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_31, SearchVarName_5);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word TrailOp_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) TrailOp_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ContainsVar_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Lval_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), TrailOp_22, (MR_Integer) 0)));

                    ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_40, SearchVarName_5);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Rval_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), TrailOp_22, (MR_Integer) 0)));
                    MR_Word _Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), TrailOp_22, (MR_Integer) 1)));

                    ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_41, SearchVarName_5);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TrailOp_22, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Lval_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), TrailOp_22, (MR_Integer) 1)));

                        ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_43, SearchVarName_5);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Rval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), TrailOp_22, (MR_Integer) 1)));

                        ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_44, SearchVarName_5);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Components_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 2)));
              MR_Word _Lang_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 1)));

              ContainsVar_6 = ml_backend__ml_util__target_code_components_contains_var_2_f_0(Components_24, SearchVarName_5);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word OutlineArgs_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 2)));
              MR_Word ReturnLvals_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 3)));
              MR_Word OutlineArgsContainVar_28;
              MR_String _Code_27 = ((MR_String) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 4)));
              MR_Word _Lang_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_4, (MR_Integer) 1)));

              OutlineArgsContainVar_28 = ml_backend__ml_util__outline_args_contains_var_2_f_0(OutlineArgs_25, SearchVarName_5);
              switch (OutlineArgsContainVar_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ReturnLvals_26, SearchVarName_5);
                  break;
                case (MR_Integer) 1:
                  ContainsVar_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
        }
        break;
    }
    return ContainsVar_6;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_util__outline_args_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word OutlineArg_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word OutlineArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) OutlineArg_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = OutlineArgs_6;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OutlineArgContainsVar_9;
            MR_Word Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), OutlineArg_5, (MR_Integer) 2)));
            MR_Word _Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), OutlineArg_5, (MR_Integer) 0)));
            MR_String _Str_14 = ((MR_String) (MR_hl_field(MR_mktag(1), OutlineArg_5, (MR_Integer) 1)));

            OutlineArgContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_15, HeadVar__2_2);
            switch (OutlineArgContainsVar_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word next_value_of_HeadVar__1_1 = OutlineArgs_6;

                  // direct tailcall eliminated
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                HeadVar__3_3 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), OutlineArg_5, (MR_Integer) 2)));
            MR_Word OutlineArgContainsVar_21;
            MR_Word _Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), OutlineArg_5, (MR_Integer) 0)));
            MR_String _Str_18 = ((MR_String) (MR_hl_field(MR_mktag(2), OutlineArg_5, (MR_Integer) 1)));

            OutlineArgContainsVar_21 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_16, HeadVar__2_2);
            switch (OutlineArgContainsVar_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word next_value_of_HeadVar__1_1 = OutlineArgs_6;

                  // direct tailcall eliminated
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                HeadVar__3_3 = (MR_Integer) 1;
                break;
            }
          }
          break;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_util__target_code_components_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word TargetCode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word TargetCodes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) TargetCode_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = TargetCodes_6;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__1_1 = TargetCodes_6;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TargetCode_5, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), TargetCode_5, (MR_Integer) 1)));
                MR_Word TargetCodeContainsVar_21;

                TargetCodeContainsVar_21 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_19, HeadVar__2_2);
                switch (TargetCodeContainsVar_21) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = TargetCodes_6;

                      // direct tailcall eliminated
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    HeadVar__3_3 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Lval_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), TargetCode_5, (MR_Integer) 1)));
                MR_Word TargetCodeContainsVar_22;

                TargetCodeContainsVar_22 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_20, HeadVar__2_2);
                switch (TargetCodeContainsVar_22) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = TargetCodes_6;

                      // direct tailcall eliminated
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    HeadVar__3_3 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                MR_Word next_value_of_HeadVar__1_1 = TargetCodes_6;

                // direct tailcall eliminated
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
              break;
          }
          break;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__lvals_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Lvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word LvalContainsVar_9;

      LvalContainsVar_9 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_5, HeadVar__2_2);
      switch (LvalContainsVar_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Lvals_6;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__rvals_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Rvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word RvalContainsVar_9;

      RvalContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_5, HeadVar__2_2);
      switch (RvalContainsVar_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Rvals_6;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__local_var_defns_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word LocalVarDefn_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word LocalVarDefns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word LocalVarDefnContainsVar_9;
      MR_Word Initializer_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_5, (MR_Integer) 3)));
      MR_Word _Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_5, (MR_Integer) 0)));
      MR_Word _Ctxt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_5, (MR_Integer) 1)));
      MR_Word _Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_5, (MR_Integer) 2)));
      MR_Word _GCStmt_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_5, (MR_Integer) 4)));

      LocalVarDefnContainsVar_9 = ml_backend__ml_util__initializer_contains_var_2_f_0(Initializer_16, HeadVar__2_2);
      switch (LocalVarDefnContainsVar_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = LocalVarDefns_6;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__initializer_contains_var_2_f_0(
  MR_Word Initializer_4,
  MR_Word SearchVarName_5)
{
  {
    MR_Word ContainsVar_6;

    switch (MR_tag((MR_Word) Initializer_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ContainsVar_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Initializer_4, (MR_Integer) 0)));

          ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_7, SearchVarName_5);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FieldInitializers_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), Initializer_4, (MR_Integer) 1)));
          MR_Word _Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), Initializer_4, (MR_Integer) 0)));

          ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(FieldInitializers_9, SearchVarName_5);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ElementInitializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Initializer_4, (MR_Integer) 0)));

          ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ElementInitializers_10, SearchVarName_5);
        }
        break;
    }
    return ContainsVar_6;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Initializer_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Initializers_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word InitializerContainsVar_9;

      InitializerContainsVar_9 = ml_backend__ml_util__initializer_contains_var_2_f_0(Initializer_5, HeadVar__2_2);
      switch (InitializerContainsVar_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Initializers_6;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__rval_contains_var_2_f_0(
  MR_Word tscc_proc_1_input_1_Rval_4,
  MR_Word tscc_proc_1_input_2_SearchVarName_5)
{
  {
    MR_Word tscc_proc_2_input_1_Lval_4;
    MR_Word tscc_proc_2_input_2_SearchVarName_5;
    MR_Word tscc_output_1_ContainsVar_6;

    // The code for TSCC PROC 1: func ml_backend.ml_util.rval_contains_var/2-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: func ml_backend.ml_util.rval_contains_var/2-0
    // proc 2 in TSCC: func ml_backend.ml_util.lval_contains_var/2-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Rval_4 = tscc_proc_1_input_1_Rval_4;
      MR_Word SearchVarName_5 = tscc_proc_1_input_2_SearchVarName_5;
      MR_Word ContainsVar_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          ContainsVar_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_4, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_2_input_1_Lval_4 = Lval_7;
            MR_Word next_value_of_tscc_proc_2_input_2_SearchVarName_5 = SearchVarName_5;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Lval_4 = next_value_of_tscc_proc_2_input_1_Lval_4;
            tscc_proc_2_input_2_SearchVarName_5 = next_value_of_tscc_proc_2_input_2_SearchVarName_5;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
                MR_Integer _Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_9;
                MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

                // direct tailcall eliminated
                tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
                tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) Const_10)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ContainsVar_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    ContainsVar_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    ContainsVar_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_10, (MR_Integer) 0)))) {
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
                        ContainsVar_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 14:
                        {
                          MR_Word RawVarName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_10, (MR_Integer) 1)));

                          succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(SearchVarName_5, RawVarName_11);
                          if (succeeded)
                            ContainsVar_6 = (MR_Integer) 1;
                          else
                            ContainsVar_6 = (MR_Integer) 0;
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word RvalA_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
                MR_Word _Op_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = RvalA_40;
                MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

                // direct tailcall eliminated
                tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
                tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word RvalB_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 3)));
                MR_Word RvalAContainsVar_42;
                MR_Word RvalA_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
                MR_Word _Op_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));

                RvalAContainsVar_42 = ml_backend__ml_util__rval_contains_var_2_f_0(RvalA_49, SearchVarName_5);
                switch (RvalAContainsVar_42) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = RvalB_41;
                      MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

                      // direct tailcall eliminated
                      tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
                      tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 1:
                    ContainsVar_6 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Lval_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Lval_4 = Lval_50;
                MR_Word next_value_of_tscc_proc_2_input_2_SearchVarName_5 = SearchVarName_5;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Lval_4 = next_value_of_tscc_proc_2_input_1_Lval_4;
                tscc_proc_2_input_2_SearchVarName_5 = next_value_of_tscc_proc_2_input_2_SearchVarName_5;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word IndexRval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
                MR_Word _VectorCommon_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = IndexRval_44;
                MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

                // direct tailcall eliminated
                tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
                tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              ContainsVar_6 = (MR_Integer) 0;
              break;
          }
          break;
      }
      tscc_output_1_ContainsVar_6 = ContainsVar_6;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Lval_4 = tscc_proc_2_input_1_Lval_4;
      MR_Word SearchVarName_5 = tscc_proc_2_input_2_SearchVarName_5;
      MR_Word ContainsVar_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 1)));
            MR_Word _MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 0)));
            MR_Word _FieldId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 2)));
            MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 3)));
            MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 4)));
            MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_8;
            MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
            tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 0)));
            MR_Word _Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 1)));
            MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_17;
            MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
            tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          ContainsVar_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word VarName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1)));
                MR_Word _Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 2)));

                succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(VarName_16, SearchVarName_5);
                if (succeeded)
                  ContainsVar_6 = (MR_Integer) 1;
                else
                  ContainsVar_6 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              ContainsVar_6 = (MR_Integer) 0;
              break;
          }
          break;
      }
      tscc_output_1_ContainsVar_6 = ContainsVar_6;
      goto tscc_end;
    }
  tscc_end:;
    return tscc_output_1_ContainsVar_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_util__lval_contains_var_2_f_0(
  MR_Word tscc_proc_2_input_1_Lval_4,
  MR_Word tscc_proc_2_input_2_SearchVarName_5)
{
  {
    MR_Word tscc_proc_1_input_1_Rval_4;
    MR_Word tscc_proc_1_input_2_SearchVarName_5;
    MR_Word tscc_output_1_ContainsVar_6;

    // The code for TSCC PROC 2: func ml_backend.ml_util.lval_contains_var/2-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: func ml_backend.ml_util.rval_contains_var/2-0
    // proc 2 in TSCC: func ml_backend.ml_util.lval_contains_var/2-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Rval_4 = tscc_proc_1_input_1_Rval_4;
      MR_Word SearchVarName_5 = tscc_proc_1_input_2_SearchVarName_5;
      MR_Word ContainsVar_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          ContainsVar_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_4, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_2_input_1_Lval_4 = Lval_7;
            MR_Word next_value_of_tscc_proc_2_input_2_SearchVarName_5 = SearchVarName_5;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Lval_4 = next_value_of_tscc_proc_2_input_1_Lval_4;
            tscc_proc_2_input_2_SearchVarName_5 = next_value_of_tscc_proc_2_input_2_SearchVarName_5;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
                MR_Integer _Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_9;
                MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

                // direct tailcall eliminated
                tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
                tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) Const_10)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ContainsVar_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    ContainsVar_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    ContainsVar_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_10, (MR_Integer) 0)))) {
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
                        ContainsVar_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 14:
                        {
                          MR_Word RawVarName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_10, (MR_Integer) 1)));

                          succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(SearchVarName_5, RawVarName_11);
                          if (succeeded)
                            ContainsVar_6 = (MR_Integer) 1;
                          else
                            ContainsVar_6 = (MR_Integer) 0;
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word RvalA_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
                MR_Word _Op_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = RvalA_40;
                MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

                // direct tailcall eliminated
                tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
                tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word RvalB_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 3)));
                MR_Word RvalAContainsVar_42;
                MR_Word RvalA_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
                MR_Word _Op_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));

                RvalAContainsVar_42 = ml_backend__ml_util__rval_contains_var_2_f_0(RvalA_49, SearchVarName_5);
                switch (RvalAContainsVar_42) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = RvalB_41;
                      MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

                      // direct tailcall eliminated
                      tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
                      tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 1:
                    ContainsVar_6 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Lval_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Lval_4 = Lval_50;
                MR_Word next_value_of_tscc_proc_2_input_2_SearchVarName_5 = SearchVarName_5;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Lval_4 = next_value_of_tscc_proc_2_input_1_Lval_4;
                tscc_proc_2_input_2_SearchVarName_5 = next_value_of_tscc_proc_2_input_2_SearchVarName_5;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word IndexRval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
                MR_Word _VectorCommon_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = IndexRval_44;
                MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

                // direct tailcall eliminated
                tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
                tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              ContainsVar_6 = (MR_Integer) 0;
              break;
          }
          break;
      }
      tscc_output_1_ContainsVar_6 = ContainsVar_6;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Lval_4 = tscc_proc_2_input_1_Lval_4;
      MR_Word SearchVarName_5 = tscc_proc_2_input_2_SearchVarName_5;
      MR_Word ContainsVar_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 1)));
            MR_Word _MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 0)));
            MR_Word _FieldId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 2)));
            MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 3)));
            MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_4, (MR_Integer) 4)));
            MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_8;
            MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
            tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 0)));
            MR_Word _Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 1)));
            MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_17;
            MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
            tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          ContainsVar_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word VarName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1)));
                MR_Word _Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 2)));

                succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(VarName_16, SearchVarName_5);
                if (succeeded)
                  ContainsVar_6 = (MR_Integer) 1;
                else
                  ContainsVar_6 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              ContainsVar_6 = (MR_Integer) 0;
              break;
          }
          break;
      }
      tscc_output_1_ContainsVar_6 = ContainsVar_6;
      goto tscc_end;
    }
  tscc_end:;
    return tscc_output_1_ContainsVar_6;
  }
}

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_59 = ((MR_Word) (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv0_Stmt_59);
    ml_backend__ml_util__stmt_contains_statement_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) env_ptr_arg;

    ml_backend__ml_util__statement_is_or_contains_statement_2_p_0((env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_59, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_4(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_70 = ((MR_Word) (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv1_Case_70);
    ml_backend__ml_util__stmt_contains_statement_2_p_0_3(env_ptr);
  }
}

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word _FirstCond_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_70, (MR_Integer) 0)));
      MR_Word _LaterConds_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_70, (MR_Integer) 1)));

      (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_70, (MR_Integer) 2)));
      ml_backend__ml_util__statement_is_or_contains_statement_2_p_0((env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_73, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0(
  MR_Word Stmt_3,
  MR_Word * SubStmt_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s env;

    (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4 = SubStmt_4;
    (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont = cont;
    (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Stmt_3)) {
        case (MR_Integer) 0:
          {
            MR_Word Stmts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_3, (MR_Integer) 2)));
            MR_Word _LocalVarDefns_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_3, (MR_Integer) 0)));
            MR_Word _FuncDefns_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_3, (MR_Integer) 1)));
            MR_Word _Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_3, (MR_Integer) 3)));

            mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, &(env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv0_Stmt_59, Stmts_7, ml_backend__ml_util__stmt_contains_statement_2_p_0_2, &env);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word BodyStmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_3, (MR_Integer) 2)));
            MR_Word _Kind_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_3, (MR_Integer) 0)));
            MR_Word _Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_3, (MR_Integer) 1)));
            MR_Word _Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_3, (MR_Integer) 3)));

            *((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4) = BodyStmt_11;
            ((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
            ml_backend__ml_util__stmt_contains_statement_2_p_0(BodyStmt_11, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ThenStmt_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_3, (MR_Integer) 1)));
            MR_Word MaybeElseStmt_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_3, (MR_Integer) 2)));
            MR_Word _Cond_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_3, (MR_Integer) 0)));
            MR_Word _Context_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_3, (MR_Integer) 3)));

            *((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4) = ThenStmt_13;
            ((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
            ml_backend__ml_util__stmt_contains_statement_2_p_0(ThenStmt_13, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
            {
              MR_Word Stmt_65;

              succeeded = ((MR_tag((MR_Word) MaybeElseStmt_14)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Stmt_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeElseStmt_14, (MR_Integer) 0)));
                ml_backend__ml_util__statement_is_or_contains_statement_2_p_0(Stmt_65, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 0)))) {
            case (MR_Integer) 0:
              {
                MR_Word Cases_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 4)));
                MR_Word Default_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 5)));
                MR_Word _Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 1)));
                MR_Word _Val_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 2)));
                MR_Word _Range_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 3)));
                MR_Word _Context_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 6)));

                mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, &(env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv1_Case_70, Cases_18, ml_backend__ml_util__stmt_contains_statement_2_p_0_4, &env);
                {
                  MR_Word Stmt_77;

                  succeeded = ((MR_tag((MR_Word) Default_19)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Stmt_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), Default_19, (MR_Integer) 0)));
                    ml_backend__ml_util__statement_is_or_contains_statement_2_p_0(Stmt_77, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                  }
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word HandlerStmt_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 3)));
                MR_Word BodyStmt_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 2)));
                MR_Word _Ref_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 1)));
                MR_Word _Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_3, (MR_Integer) 4)));

                *((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4) = BodyStmt_41;
                ((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                ml_backend__ml_util__stmt_contains_statement_2_p_0(BodyStmt_41, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                *((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4) = HandlerStmt_21;
                ((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                ml_backend__ml_util__stmt_contains_statement_2_p_0(HandlerStmt_21, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
              }
              break;
          }
          break;
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_util__statement_is_or_contains_statement_2_p_0(
  MR_Word Stmt_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    *HeadVar__2_2 = Stmt_1;
    cont(cont_env_ptr);
    ml_backend__ml_util__stmt_contains_statement_2_p_0(Stmt_1, HeadVar__2_2, cont, cont_env_ptr);
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__code_address_is_for_this_function_3_p_0(
  MR_Word CodeAddr_4,
  MR_Word ModuleName_5,
  MR_Word FuncName_6)
{
  {
    MR_bool succeeded;
    MR_Word QualFuncLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), CodeAddr_4, (MR_Integer) 0)));
    MR_Word FuncModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFuncLabel_7, (MR_Integer) 0)));
    MR_Word FuncLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFuncLabel_7, (MR_Integer) 1)));
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word _Signature_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), CodeAddr_4, (MR_Integer) 1)));
    MR_Word _PredId_11;

    succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(FuncModuleName_9, ModuleName_5);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) FuncName_6)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_12 = (MR_Word) MR_body(((MR_Word) FuncName_6), (MR_Integer) 0);
        Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0)));
        _PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1)));
        succeeded = ml_backend__mlds____Unify____mlds_func_label_0_0(FuncLabel_10, Var_13);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_util__func_defns_contain_main_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word FuncDefn_2;
    MR_Word FuncDefns_3;
    MR_Word FuncName_4;
    MR_Word PlainFuncName_13;
    MR_Word FuncLabel_14;
    MR_Word ProcLabel_16;
    MR_Word PredLabel_18;
    MR_Word Var_23;
    MR_String Var_24;
    MR_Integer Var_25;
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_15;
    MR_Word _MaybeSeqNum_17;
    MR_Integer _ProcId_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    // setup for tailcalls optimized into a loop
    if (succeeded)
    {
      FuncDefn_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      FuncDefns_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      FuncName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 0)));
      Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 1)));
      Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 2)));
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 3)));
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 4)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 5)));
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 6)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 7)));
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 8)));
      succeeded = ((MR_tag((MR_Word) FuncName_4)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        PlainFuncName_13 = (MR_Word) MR_body(((MR_Word) FuncName_4), (MR_Integer) 0);
        FuncLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), PlainFuncName_13, (MR_Integer) 0)));
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), PlainFuncName_13, (MR_Integer) 1)));
        ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncLabel_14, (MR_Integer) 0)));
        _MaybeSeqNum_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncLabel_14, (MR_Integer) 1)));
        PredLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLabel_16, (MR_Integer) 0)));
        _ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLabel_16, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) PredLabel_18)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredLabel_18, (MR_Integer) 0)));
          Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredLabel_18, (MR_Integer) 1)));
          Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), PredLabel_18, (MR_Integer) 2)));
          Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredLabel_18, (MR_Integer) 3)));
          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredLabel_18, (MR_Integer) 4)));
          Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredLabel_18, (MR_Integer) 5)));
          succeeded = (Var_23 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (strcmp(Var_24, (MR_String) "main") == 0);
            if (succeeded)
              succeeded = (Var_25 == (MR_Integer) 2);
          }
        }
      }
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = FuncDefns_3;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
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

// :- end_module ml_backend.ml_util.
