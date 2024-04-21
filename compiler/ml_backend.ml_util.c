/*
** Automatically generated from `ml_util.m'
** by the Mercury compiler,
** version rotd-2024-04-21
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
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


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0_s {
  MR_Word * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__LambdaHeadVar__1_12;
  MR_Cont ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__cont;
  void * ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__cont_env_ptr;
  MR_bool ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__SubStmt_7;
  MR_Word ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__Var_13;
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
  MR_Word ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_51;
  MR_Box ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv0_Stmt_51;
  MR_Word ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_60;
  MR_Word ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_63;
  MR_Box ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv1_Case_60;
};


static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0(
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
ml_backend__ml_util__typed_rvals_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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


static /* final */ const MR_Box ml_backend__ml_util_scalar_common_1[3][2];

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_2[3][1];

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_3[1][5];




static /* final */ const MR_Box ml_backend__ml_util_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__ml_util_scalar_common_1[0]))) },
  /* row   1 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__ml_util_scalar_common_1[1]))) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__ml_util_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_1(
  void * env_ptr_arg)
{
  struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0_s * env_ptr = (struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_11;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_String Var_10;
    MR_Unsigned packed_word_0;

    (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__SubStmt_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__SubStmt_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
    if ((env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__succeeded)
    {
      (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__Var_13 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__SubStmt_7, (MR_Integer) 1))));
      Var_11 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__SubStmt_7, (MR_Integer) 2))));
      (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__Var_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__Var_13, (MR_Integer) 0)))) == (MR_Integer) 7)));
      if ((env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__succeeded)
      {
        packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__Var_13, (MR_Integer) 1)));
        *((env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__LambdaHeadVar__1_12) = ((MR_Unsigned) ((MR_hl_field(3, (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__Var_13, (MR_Integer) 1))) & (MR_Integer) 3);
        Var_8 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__Var_13, (MR_Integer) 2))));
        Var_9 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__Var_13, (MR_Integer) 3))));
        Var_10 = ((MR_String) ((MR_hl_field(3, (env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__Var_13, (MR_Integer) 4))));
        ((env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__cont)((env_ptr)->ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0(
  MR_Word Stmt_3,
  MR_Word * LambdaHeadVar__1_12,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0_s env;

  (env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__LambdaHeadVar__1_12 = LambdaHeadVar__1_12;
  (env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__cont = cont;
  (env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  (env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__SubStmt_7 = Stmt_3;
  ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_1(&env);
  ml_backend__ml_util__stmt_contains_statement_2_p_0(Stmt_3, &(env).ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_env_0__SubStmt_7, ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0_1, &env);
}

MR_Word MR_CALL 
ml_backend__ml_util__mlds_target_high_level_data_1_f_0(
  MR_Word Target_3)
{
  MR_Word HighLevelData_4;

  switch (Target_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HighLevelData_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      HighLevelData_4 = (MR_Integer) 1;
      break;
  }
  return HighLevelData_4;
}

MR_String MR_CALL 
ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(
  MR_Word MaybeAux_3)
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

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_util_scalar_common_2[2]), (MR_Integer) 10000, &Var_30);
            Suffix_4 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_30);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer SeqNum_5 = ((MR_Integer) ((MR_hl_field(1, MaybeAux_3, (MR_Integer) 0))));
        MR_String Var_22;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_util_scalar_common_2[2]), SeqNum_5, &Var_22);
        Suffix_4 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_22);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Var_18;
        MR_Integer SeqNum_21 = ((MR_Integer) ((MR_hl_field(2, MaybeAux_3, (MR_Integer) 0))));
        MR_String Var_38;

        Var_18 = (MR_Integer) ((MR_Unsigned) 10001 + (MR_Unsigned) SeqNum_21);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_util_scalar_common_2[2]), Var_18, &Var_38);
        Suffix_4 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_38);
      }
      break;
  }
  return Suffix_4;
}

MR_Word MR_CALL 
ml_backend__ml_util__project_mlds_argument_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word LocalVarName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  return LocalVarName_3;
}

MR_Word MR_CALL 
ml_backend__ml_util__get_mlds_stmt_context_1_f_0(
  MR_Word Stmt_3)
{
  MR_Word Context_4;

  switch (MR_tag((MR_Word) Stmt_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Context_4 = ((MR_Word) ((MR_hl_field(0, Stmt_3, (MR_Integer) 3))));
      break;
    case (MR_Integer) 1:
      Context_4 = ((MR_Word) ((MR_hl_field(1, Stmt_3, (MR_Integer) 4))));
      break;
    case (MR_Integer) 2:
      Context_4 = ((MR_Word) ((MR_hl_field(2, Stmt_3, (MR_Integer) 3))));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Stmt_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Context_4 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 6))));
          break;
        case (MR_Integer) 1:
          Context_4 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 2))));
          break;
        case (MR_Integer) 2:
          Context_4 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 2))));
          break;
        case (MR_Integer) 3:
          Context_4 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 3))));
          break;
        case (MR_Integer) 4:
          Context_4 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 6))));
          break;
        case (MR_Integer) 5:
          Context_4 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 2))));
          break;
        case (MR_Integer) 6:
          Context_4 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 4))));
          break;
        case (MR_Integer) 7:
          Context_4 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 2))));
          break;
        case (MR_Integer) 8:
          Context_4 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 2))));
          break;
      }
      break;
  }
  return Context_4;
}

MR_Word MR_CALL 
ml_backend__ml_util__wrap_init_obj_1_f_0(
  MR_Word Rval_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Rval_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_array_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Conv_4,
  MR_Word List_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  Var_6 = mercury__list__map_2_f_0(TypeInfo_for_T_7, (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Conv_4, List_5);
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_maybe_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word HeadVar__4_4;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_11;
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_12, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, Var_12, 1) = ((MR_Box) (HeadVar__1_1));
    }
    {
      Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (Var_11));
    }
  }
  else
  {
    MR_Box X_7 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Box conv1_HeadVar__4_4;

    conv1_HeadVar__4_4 = func_0(((MR_Box) (HeadVar__2_2)), X_7);
    HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_null_pointer_1_f_0(
  MR_Word Type_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, Var_5, 1) = ((MR_Box) (Type_3));
  }
  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (Var_5));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_foreign_2_f_0(
  MR_Word Lang_4,
  MR_String String_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_7, 0) = ((MR_Box) ((MR_Unsigned) 14U));
    MR_hl_field(3, Var_7, 1) = (MR_Box) ((MR_Unsigned) (Lang_4));
    MR_hl_field(3, Var_7, 2) = ((MR_Box) (String_5));
    MR_hl_field(3, Var_7, 3) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_util_scalar_common_1[2])));
  }
  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_6, 1) = ((MR_Box) (Var_7));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_builtin_const_2_f_0(
  MR_Word TargetPrefixes_4,
  MR_String Name_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Rval_6;
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_7, 0) = ((MR_Box) ((MR_Unsigned) 15U));
    MR_hl_field(3, Var_7, 1) = ((MR_Box) (TargetPrefixes_4));
    MR_hl_field(3, Var_7, 2) = ((MR_Box) (Name_5));
  }
  {
    Rval_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Rval_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Rval_6, 1) = ((MR_Box) (Var_7));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Rval_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_string_1_f_0(
  MR_String String_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Var_5, 1) = ((MR_Box) (String_3));
  }
  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (Var_5));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_boxed_int_1_f_0(
  MR_Integer Int_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_7;
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_8, 0) = ((MR_Box) (Int_3));
  }
  {
    Var_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_7, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_7, 1) = ((MR_Box) (Var_8));
  }
  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_util_scalar_common_1[2])));
    MR_hl_field(3, Var_4, 2) = ((MR_Box) (Var_7));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_uint32_1_f_0(
  uint32_t Int_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_5, 1) = ((MR_Box) (MR_Word) (Int_3));
  }
  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (Var_5));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_int32_1_f_0(
  int32_t Int_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_5, 1) = ((MR_Box) (MR_Word) (Int_3));
  }
  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (Var_5));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_uint16_1_f_0(
  uint16_t Int_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_5, 1) = ((MR_Box) (MR_Word) (Int_3));
  }
  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (Var_5));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_int16_1_f_0(
  int16_t Int_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_5, 1) = ((MR_Box) (MR_Word) (Int_3));
  }
  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (Var_5));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_uint8_1_f_0(
  uint8_t Int_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_5, 1) = ((MR_Box) (MR_Word) (Int_3));
  }
  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (Var_5));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_int8_1_f_0(
  int8_t Int_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_5, 1) = ((MR_Box) (MR_Word) (Int_3));
  }
  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (Var_5));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_uint_1_f_0(
  MR_Unsigned Int_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_5, 1) = ((MR_Box) (Int_3));
  }
  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (Var_5));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_int_1_f_0(
  MR_Integer Int_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_5, 0) = ((MR_Box) (Int_3));
  }
  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (Var_5));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ml_backend__ml_util__gen_init_bool_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Word) (MR_mkword(1, &ml_backend__ml_util_scalar_common_2[0]));
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Word) (MR_mkword(1, &ml_backend__ml_util_scalar_common_2[1]));
      break;
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ml_backend__ml_util__maybe_rval_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Integer) 0;
  else
  {
    MR_Word Rval_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    HeadVar__3_3 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_5, HeadVar__2_2);
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
ml_backend__ml_util__function_defn_contains_var_2_f_0(
  MR_Word FuncDefn_4,
  MR_Word SearchVarName_5)
{
  MR_Word ContainsVar_6;
  MR_Word Body_12 = ((MR_Word) ((MR_hl_field(0, FuncDefn_4, (MR_Integer) 5))));

  if ((Body_12 == (MR_Word) ((MR_Unsigned) 0U)))
    ContainsVar_6 = (MR_Integer) 0;
  else
  {
    MR_Word Stmt_15 = ((MR_Word) ((MR_hl_field(1, Body_12, (MR_Integer) 0))));

    ContainsVar_6 = ml_backend__ml_util__statement_contains_var_2_f_0(Stmt_15, SearchVarName_5);
  }
  return ContainsVar_6;
}

MR_Word MR_CALL 
ml_backend__ml_util__local_var_defn_contains_var_2_f_0(
  MR_Word LocalVarDefn_4,
  MR_Word SearchVarName_5)
{
  MR_Word ContainsVar_6;
  MR_Word Initializer_10 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_4, (MR_Integer) 3))));

  ContainsVar_6 = ml_backend__ml_util__initializer_contains_var_2_f_0(Initializer_10, SearchVarName_5);
  return ContainsVar_6;
}

static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_1(
  void * env_ptr_arg)
{
  struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s * env_ptr = (struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12));
  ((env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont)((env_ptr)->ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0_s env;

  (env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont = cont;
  (env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__625__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), &(env).ml_backend__ml_util__has_foreign_languages_2_p_0_2_env_0__conv0_LambdaHeadVar__1_12, ml_backend__ml_util__has_foreign_languages_2_p_0_1, &env);
  }
}

void MR_CALL 
ml_backend__ml_util__has_foreign_languages_2_p_0(
  MR_Word Stmt_3,
  MR_Word * Langs_4)
{
  MR_Word GetTargetCode_5;

  {
    GetTargetCode_5 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GetTargetCode_5, 0) = ((MR_Box) (&ml_backend__ml_util_scalar_common_3[0]));
    MR_hl_field(0, GetTargetCode_5, 1) = ((MR_Box) (ml_backend__ml_util__has_foreign_languages_2_p_0_2));
    MR_hl_field(0, GetTargetCode_5, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, GetTargetCode_5, 3) = ((MR_Box) (Stmt_3));
  }
  mercury__solutions__solutions_2_p_1((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), GetTargetCode_5, Langs_4);
}

MR_Word MR_CALL 
ml_backend__ml_util__statement_contains_var_2_f_0(
  MR_Word Stmt_4,
  MR_Word SearchVarName_5)
{
  while (MR_TRUE)
  {
    MR_Word ContainsVar_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Stmt_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns_7 = ((MR_Word) ((MR_hl_field(0, Stmt_4, (MR_Integer) 0))));
          MR_Word FuncDefns_8 = ((MR_Word) ((MR_hl_field(0, Stmt_4, (MR_Integer) 1))));
          MR_Word SubStmts_9 = ((MR_Word) ((MR_hl_field(0, Stmt_4, (MR_Integer) 2))));
          MR_Word LocalVarDefnsContainVar_11;

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
          MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(1, Stmt_4, (MR_Integer) 1))));
          MR_Word BodyStmt_15 = ((MR_Word) ((MR_hl_field(1, Stmt_4, (MR_Integer) 2))));
          MR_Word RvalContainsVar_17;

          RvalContainsVar_17 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_14, SearchVarName_5);
          switch (RvalContainsVar_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_Stmt_4 = BodyStmt_15;

                // direct tailcall eliminated
                ;
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
          MR_Word Cond_18 = ((MR_Word) ((MR_hl_field(2, Stmt_4, (MR_Integer) 0))));
          MR_Word ThenStmt_19 = ((MR_Word) ((MR_hl_field(2, Stmt_4, (MR_Integer) 1))));
          MR_Word MaybeElseStmt_20 = ((MR_Word) ((MR_hl_field(2, Stmt_4, (MR_Integer) 2))));
          MR_Word CondContainsVar_21;

          CondContainsVar_21 = ml_backend__ml_util__rval_contains_var_2_f_0(Cond_18, SearchVarName_5);
          switch (CondContainsVar_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ThenContainsVar_22;

                ThenContainsVar_22 = ml_backend__ml_util__statement_contains_var_2_f_0(ThenStmt_19, SearchVarName_5);
                switch (ThenContainsVar_22) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    if ((MaybeElseStmt_20 == (MR_Word) ((MR_Unsigned) 0U)))
                      ContainsVar_6 = (MR_Integer) 0;
                    else
                    {
                      MR_Word Stmt_104 = ((MR_Word) ((MR_hl_field(1, MaybeElseStmt_20, (MR_Integer) 0))));
                      MR_Word next_value_of_Stmt_4 = Stmt_104;

                      // direct tailcall eliminated
                      ;
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
        switch (((MR_Integer) ((MR_hl_field(3, Stmt_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Val_24 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 2))));
              MR_Word Cases_26 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 4))));
              MR_Word Default_27 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 5))));
              MR_Word ValContainsVar_28;

              ValContainsVar_28 = ml_backend__ml_util__rval_contains_var_2_f_0(Val_24, SearchVarName_5);
              switch (ValContainsVar_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word CasesContainsVar_29;

                    CasesContainsVar_29 = ml_backend__ml_util__cases_contains_var_2_f_0(Cases_26, SearchVarName_5);
                    switch (CasesContainsVar_29) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_tag((MR_Word) Default_27)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ContainsVar_6 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word Stmt_107 = ((MR_Word) ((MR_hl_field(1, Default_27, (MR_Integer) 0))));
                              MR_Word next_value_of_Stmt_4 = Stmt_107;

                              // direct tailcall eliminated
                              ;
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
              MR_Word Rval_58 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 1))));

              ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_58, SearchVarName_5);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Func_34 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 2))));
              MR_Word Args_35 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 3))));
              MR_Word RetLvals_36 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 4))));
              MR_Word FuncContainsVar_38;

              FuncContainsVar_38 = ml_backend__ml_util__rval_contains_var_2_f_0(Func_34, SearchVarName_5);
              switch (FuncContainsVar_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ArgsContainVar_39;

                    ArgsContainVar_39 = ml_backend__ml_util__rvals_contains_var_2_f_0(Args_35, SearchVarName_5);
                    switch (ArgsContainVar_39) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(RetLvals_36, SearchVarName_5);
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
              MR_Word Rvals_40 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 1))));

              ContainsVar_6 = ml_backend__ml_util__rvals_contains_var_2_f_0(Rvals_40, SearchVarName_5);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word HandlerStmt_42 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 3))));
              MR_Word RefContainsVar_43;
              MR_Word BodyStmt_67 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 2))));
              MR_Word Ref_68 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 1))));

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
                          ;
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
              MR_Word Ref_41 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 1))));

              ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Ref_41, SearchVarName_5);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word AtomicStmt_45 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) AtomicStmt_45)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ContainsVar_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  ContainsVar_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Lval_71 = ((MR_Word) ((MR_hl_field(2, AtomicStmt_45, (MR_Integer) 0))));
                    MR_Word Rval_72 = ((MR_Word) ((MR_hl_field(2, AtomicStmt_45, (MR_Integer) 1))));
                    MR_Word LvalContainsVar_73;

                    LvalContainsVar_73 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_71, SearchVarName_5);
                    switch (LvalContainsVar_73) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_72, SearchVarName_5);
                        break;
                      case (MR_Integer) 1:
                        ContainsVar_6 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, AtomicStmt_45, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Lval_95 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_45, (MR_Integer) 1))));
                        MR_Word Rval_96 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_45, (MR_Integer) 2))));
                        MR_Word LvalContainsVar_97;

                        LvalContainsVar_97 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_95, SearchVarName_5);
                        switch (LvalContainsVar_97) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_96, SearchVarName_5);
                            break;
                          case (MR_Integer) 1:
                            ContainsVar_6 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Rval_91 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_45, (MR_Integer) 1))));

                        ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_91, SearchVarName_5);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Target_74 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_45, (MR_Integer) 1))));
                        MR_Word ArgRvalsTypes_80 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_45, (MR_Integer) 7))));
                        MR_Word TargetContainsVar_83;

                        TargetContainsVar_83 = ml_backend__ml_util__lval_contains_var_2_f_0(Target_74, SearchVarName_5);
                        switch (TargetContainsVar_83) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ContainsVar_6 = ml_backend__ml_util__typed_rvals_contains_var_2_f_0(ArgRvalsTypes_80, SearchVarName_5);
                            break;
                          case (MR_Integer) 1:
                            ContainsVar_6 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Lval_92 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_45, (MR_Integer) 1))));

                        ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_92, SearchVarName_5);
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Rval_93 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_45, (MR_Integer) 1))));

                        ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_93, SearchVarName_5);
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word TrailOp_84 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_45, (MR_Integer) 1))));

                        switch (MR_tag((MR_Word) TrailOp_84)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ContainsVar_6 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word Lval_98 = ((MR_Word) ((MR_hl_field(1, TrailOp_84, (MR_Integer) 0))));

                              ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_98, SearchVarName_5);
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word Rval_99 = ((MR_Word) ((MR_hl_field(2, TrailOp_84, (MR_Integer) 0))));

                              ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_99, SearchVarName_5);
                            }
                            break;
                          case (MR_Integer) 3:
                            switch (((MR_Integer) ((MR_hl_field(3, TrailOp_84, (MR_Integer) 0))))) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Word Lval_101 = ((MR_Word) ((MR_hl_field(3, TrailOp_84, (MR_Integer) 1))));

                                  ContainsVar_6 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_101, SearchVarName_5);
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Word Rval_102 = ((MR_Word) ((MR_hl_field(3, TrailOp_84, (MR_Integer) 1))));

                                  ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_102, SearchVarName_5);
                                }
                                break;
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Components_86 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_45, (MR_Integer) 2))));

                        ContainsVar_6 = ml_backend__ml_util__target_code_components_contains_var_2_f_0(Components_86, SearchVarName_5);
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word OutlineArgs_87 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_45, (MR_Integer) 2))));
                        MR_Word ReturnLvals_88 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_45, (MR_Integer) 3))));
                        MR_Word OutlineArgsContainVar_90;

                        OutlineArgsContainVar_90 = ml_backend__ml_util__outline_args_contains_var_2_f_0(OutlineArgs_87, SearchVarName_5);
                        switch (OutlineArgsContainVar_90) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ContainsVar_6 = ml_backend__ml_util__lvals_contains_var_2_f_0(ReturnLvals_88, SearchVarName_5);
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Case_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Stmt_11 = ((MR_Word) ((MR_hl_field(0, Case_5, (MR_Integer) 2))));
      MR_Word StmtContainsVar_12;

      StmtContainsVar_12 = ml_backend__ml_util__statement_contains_var_2_f_0(Stmt_11, HeadVar__2_2);
      switch (StmtContainsVar_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Cases_6;

            // direct tailcall eliminated
            ;
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Stmt_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Stmts_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word StmtContainsVar_9;

      StmtContainsVar_9 = ml_backend__ml_util__statement_contains_var_2_f_0(Stmt_5, HeadVar__2_2);
      switch (StmtContainsVar_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Stmts_6;

            // direct tailcall eliminated
            ;
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word FuncDefn_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word FuncDefns_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Body_15 = ((MR_Word) ((MR_hl_field(0, FuncDefn_5, (MR_Integer) 5))));

      if ((Body_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word next_value_of_HeadVar__1_1 = FuncDefns_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word FuncDefnContainsVar_9;
        MR_Word Stmt_18 = ((MR_Word) ((MR_hl_field(1, Body_15, (MR_Integer) 0))));

        FuncDefnContainsVar_9 = ml_backend__ml_util__statement_contains_var_2_f_0(Stmt_18, HeadVar__2_2);
        switch (FuncDefnContainsVar_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_HeadVar__1_1 = FuncDefns_6;

              // direct tailcall eliminated
              ;
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
ml_backend__ml_util__typed_rvals_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word TypedRval_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypedRvals_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Rval_9 = ((MR_Word) ((MR_hl_field(0, TypedRval_5, (MR_Integer) 0))));
      MR_Word RvalContainsVar_11;

      RvalContainsVar_11 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_9, HeadVar__2_2);
      switch (RvalContainsVar_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = TypedRvals_6;

            // direct tailcall eliminated
            ;
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
ml_backend__ml_util__outline_args_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word OutlineArg_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word OutlineArgs_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) OutlineArg_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = OutlineArgs_6;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OutlineArgContainsVar_9;
            MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(1, OutlineArg_5, (MR_Integer) 2))));

            OutlineArgContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_12, HeadVar__2_2);
            switch (OutlineArgContainsVar_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word next_value_of_HeadVar__1_1 = OutlineArgs_6;

                  // direct tailcall eliminated
                  ;
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
            MR_Word Lval_13 = ((MR_Word) ((MR_hl_field(2, OutlineArg_5, (MR_Integer) 2))));
            MR_Word OutlineArgContainsVar_16;

            OutlineArgContainsVar_16 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_13, HeadVar__2_2);
            switch (OutlineArgContainsVar_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word next_value_of_HeadVar__1_1 = OutlineArgs_6;

                  // direct tailcall eliminated
                  ;
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word TargetCode_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TargetCodes_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) TargetCode_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__1_1 = TargetCodes_6;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TargetCode_5, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(3, TargetCode_5, (MR_Integer) 1))));
                MR_Word TargetCodeContainsVar_18;

                TargetCodeContainsVar_18 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_16, HeadVar__2_2);
                switch (TargetCodeContainsVar_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = TargetCodes_6;

                      // direct tailcall eliminated
                      ;
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
                MR_Word Lval_17 = ((MR_Word) ((MR_hl_field(3, TargetCode_5, (MR_Integer) 1))));
                MR_Word TargetCodeContainsVar_19;

                TargetCodeContainsVar_19 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_17, HeadVar__2_2);
                switch (TargetCodeContainsVar_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = TargetCodes_6;

                      // direct tailcall eliminated
                      ;
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
                ;
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Lval_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Lvals_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word LvalContainsVar_9;

      LvalContainsVar_9 = ml_backend__ml_util__lval_contains_var_2_f_0(Lval_5, HeadVar__2_2);
      switch (LvalContainsVar_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Lvals_6;

            // direct tailcall eliminated
            ;
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Rval_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Rvals_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word RvalContainsVar_9;

      RvalContainsVar_9 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_5, HeadVar__2_2);
      switch (RvalContainsVar_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Rvals_6;

            // direct tailcall eliminated
            ;
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word LocalVarDefn_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word LocalVarDefns_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word LocalVarDefnContainsVar_9;
      MR_Word Initializer_13 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_5, (MR_Integer) 3))));

      LocalVarDefnContainsVar_9 = ml_backend__ml_util__initializer_contains_var_2_f_0(Initializer_13, HeadVar__2_2);
      switch (LocalVarDefnContainsVar_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = LocalVarDefns_6;

            // direct tailcall eliminated
            ;
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
  MR_Word ContainsVar_6;

  switch (MR_tag((MR_Word) Initializer_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ContainsVar_6 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_7 = ((MR_Word) ((MR_hl_field(1, Initializer_4, (MR_Integer) 0))));

        ContainsVar_6 = ml_backend__ml_util__rval_contains_var_2_f_0(Rval_7, SearchVarName_5);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FieldInitializers_9 = ((MR_Word) ((MR_hl_field(2, Initializer_4, (MR_Integer) 1))));

        ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(FieldInitializers_9, SearchVarName_5);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ElementInitializers_10 = ((MR_Word) ((MR_hl_field(3, Initializer_4, (MR_Integer) 0))));

        ContainsVar_6 = ml_backend__ml_util__initializers_contains_var_2_f_0(ElementInitializers_10, SearchVarName_5);
      }
      break;
  }
  return ContainsVar_6;
}

static MR_Word MR_CALL 
ml_backend__ml_util__initializers_contains_var_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Initializer_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Initializers_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InitializerContainsVar_9;

      InitializerContainsVar_9 = ml_backend__ml_util__initializer_contains_var_2_f_0(Initializer_5, HeadVar__2_2);
      switch (InitializerContainsVar_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Initializers_6;

            // direct tailcall eliminated
            ;
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
  MR_Word tscc_proc_2_input_1_Lval_4;
  MR_Word tscc_proc_2_input_2_SearchVarName_5;
  MR_Word tscc_output_1_ContainsVar_6;

  // The code for TSCC PROC 1: func ml_backend.ml_util.rval_contains_var/2-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: func ml_backend.ml_util.rval_contains_var/2-0
  ;
  // proc 2 in TSCC: func ml_backend.ml_util.lval_contains_var/2-0
  ;
  ;
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
          MR_Word Lval_7 = ((MR_Word) ((MR_hl_field(2, Rval_4, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Lval_4 = Lval_7;
          MR_Word next_value_of_tscc_proc_2_input_2_SearchVarName_5 = SearchVarName_5;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Lval_4 = next_value_of_tscc_proc_2_input_1_Lval_4;
          tscc_proc_2_input_2_SearchVarName_5 = next_value_of_tscc_proc_2_input_2_SearchVarName_5;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRval_9 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_9;
              MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_10 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Const_10)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  ContainsVar_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Const_10, (MR_Integer) 0))))) {
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
                    case (MR_Integer) 14:
                    case (MR_Integer) 15:
                    case (MR_Integer) 17:
                    case (MR_Integer) 18:
                    case (MR_Integer) 19:
                    case (MR_Integer) 20:
                      ContainsVar_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 16:
                      {
                        MR_Word RawVarName_11 = ((MR_Word) ((MR_hl_field(3, Const_10, (MR_Integer) 1))));

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
              MR_Word RvalA_42 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = RvalA_42;
              MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word RvalA_58 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = RvalA_58;
              MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word RvalA_57 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = RvalA_57;
              MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word RvalA_59 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = RvalA_59;
              MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word RvalB_44 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 3))));
              MR_Word RvalAContainsVar_45;
              MR_Word RvalA_53 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));

              RvalAContainsVar_45 = ml_backend__ml_util__rval_contains_var_2_f_0(RvalA_53, SearchVarName_5);
              switch (RvalAContainsVar_45) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = RvalB_44;
                    MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

                    // direct tailcall eliminated
                    ;
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
          case (MR_Integer) 7:
            {
              MR_Word Lval_55 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Lval_4 = Lval_55;
              MR_Word next_value_of_tscc_proc_2_input_2_SearchVarName_5 = SearchVarName_5;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Lval_4 = next_value_of_tscc_proc_2_input_1_Lval_4;
              tscc_proc_2_input_2_SearchVarName_5 = next_value_of_tscc_proc_2_input_2_SearchVarName_5;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word IndexRval_47 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = IndexRval_47;
              MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
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
          MR_Word Rval_8 = ((MR_Word) ((MR_hl_field(0, Lval_4, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_8;
          MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
          tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(1, Lval_4, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_18;
          MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
          tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        ContainsVar_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarName_16 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 1))));

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

MR_Word MR_CALL 
ml_backend__ml_util__lval_contains_var_2_f_0(
  MR_Word tscc_proc_2_input_1_Lval_4,
  MR_Word tscc_proc_2_input_2_SearchVarName_5)
{
  MR_Word tscc_proc_1_input_1_Rval_4;
  MR_Word tscc_proc_1_input_2_SearchVarName_5;
  MR_Word tscc_output_1_ContainsVar_6;

  // The code for TSCC PROC 2: func ml_backend.ml_util.lval_contains_var/2-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: func ml_backend.ml_util.rval_contains_var/2-0
  ;
  // proc 2 in TSCC: func ml_backend.ml_util.lval_contains_var/2-0
  ;
  ;
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
          MR_Word Lval_7 = ((MR_Word) ((MR_hl_field(2, Rval_4, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Lval_4 = Lval_7;
          MR_Word next_value_of_tscc_proc_2_input_2_SearchVarName_5 = SearchVarName_5;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Lval_4 = next_value_of_tscc_proc_2_input_1_Lval_4;
          tscc_proc_2_input_2_SearchVarName_5 = next_value_of_tscc_proc_2_input_2_SearchVarName_5;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRval_9 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_9;
              MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_10 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Const_10)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  ContainsVar_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Const_10, (MR_Integer) 0))))) {
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
                    case (MR_Integer) 14:
                    case (MR_Integer) 15:
                    case (MR_Integer) 17:
                    case (MR_Integer) 18:
                    case (MR_Integer) 19:
                    case (MR_Integer) 20:
                      ContainsVar_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 16:
                      {
                        MR_Word RawVarName_11 = ((MR_Word) ((MR_hl_field(3, Const_10, (MR_Integer) 1))));

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
              MR_Word RvalA_42 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = RvalA_42;
              MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word RvalA_58 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = RvalA_58;
              MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word RvalA_57 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = RvalA_57;
              MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word RvalA_59 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = RvalA_59;
              MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word RvalB_44 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 3))));
              MR_Word RvalAContainsVar_45;
              MR_Word RvalA_53 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));

              RvalAContainsVar_45 = ml_backend__ml_util__rval_contains_var_2_f_0(RvalA_53, SearchVarName_5);
              switch (RvalAContainsVar_45) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = RvalB_44;
                    MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

                    // direct tailcall eliminated
                    ;
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
          case (MR_Integer) 7:
            {
              MR_Word Lval_55 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Lval_4 = Lval_55;
              MR_Word next_value_of_tscc_proc_2_input_2_SearchVarName_5 = SearchVarName_5;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Lval_4 = next_value_of_tscc_proc_2_input_1_Lval_4;
              tscc_proc_2_input_2_SearchVarName_5 = next_value_of_tscc_proc_2_input_2_SearchVarName_5;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word IndexRval_47 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = IndexRval_47;
              MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
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
          MR_Word Rval_8 = ((MR_Word) ((MR_hl_field(0, Lval_4, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_8;
          MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
          tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(1, Lval_4, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_18;
          MR_Word next_value_of_tscc_proc_1_input_2_SearchVarName_5 = SearchVarName_5;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
          tscc_proc_1_input_2_SearchVarName_5 = next_value_of_tscc_proc_1_input_2_SearchVarName_5;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        ContainsVar_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarName_16 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 1))));

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

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_2(
  void * env_ptr_arg)
{
  struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_51 = ((MR_Word) ((env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv0_Stmt_51));
  ml_backend__ml_util__stmt_contains_statement_2_p_0_1(env_ptr);
}

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_1(
  void * env_ptr_arg)
{
  struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) (env_ptr_arg);

  ml_backend__ml_util__statement_is_or_contains_statement_2_p_0((env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_51, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_4(
  void * env_ptr_arg)
{
  struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_60 = ((MR_Word) ((env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv1_Case_60));
  ml_backend__ml_util__stmt_contains_statement_2_p_0_3(env_ptr);
}

static void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0_3(
  void * env_ptr_arg)
{
  struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s * env_ptr = (struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word _FirstCond_61 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_60, (MR_Integer) 0))));
    MR_Word _LaterConds_62 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_60, (MR_Integer) 1))));

    (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_63 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Case_60, (MR_Integer) 2))));
    ml_backend__ml_util__statement_is_or_contains_statement_2_p_0((env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__Stmt_63, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (env_ptr)->ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
  }
}

void MR_CALL 
ml_backend__ml_util__stmt_contains_statement_2_p_0(
  MR_Word Stmt_3,
  MR_Word * SubStmt_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0_s env;

  (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4 = SubStmt_4;
  (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont = cont;
  (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_non tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Stmt_3)) {
      case (MR_Integer) 0:
        {
          MR_Word Stmts_7 = ((MR_Word) ((MR_hl_field(0, Stmt_3, (MR_Integer) 2))));
          MR_Word _LocalVarDefns_5 = ((MR_Word) ((MR_hl_field(0, Stmt_3, (MR_Integer) 0))));
          MR_Word _FuncDefns_6 = ((MR_Word) ((MR_hl_field(0, Stmt_3, (MR_Integer) 1))));
          MR_Word _Context_8 = ((MR_Word) ((MR_hl_field(0, Stmt_3, (MR_Integer) 3))));

          mercury__list__member_2_p_1((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), &(env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv0_Stmt_51, Stmts_7, ml_backend__ml_util__stmt_contains_statement_2_p_0_2, &env);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word BodyStmt_11 = ((MR_Word) ((MR_hl_field(1, Stmt_3, (MR_Integer) 2))));
          MR_Word _Kind_9 = ((MR_Unsigned) ((MR_hl_field(1, Stmt_3, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word _Rval_10 = ((MR_Word) ((MR_hl_field(1, Stmt_3, (MR_Integer) 1))));
          MR_Word _LoopLocalVars_12 = ((MR_Word) ((MR_hl_field(1, Stmt_3, (MR_Integer) 3))));
          MR_Word _Context_33 = ((MR_Word) ((MR_hl_field(1, Stmt_3, (MR_Integer) 4))));
          MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(1, Stmt_3, (MR_Integer) 0)));

          *((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4) = BodyStmt_11;
          ((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
          {
            MR_Word next_value_of_Stmt_3 = BodyStmt_11;

            // direct tailcall eliminated
            ;
            Stmt_3 = next_value_of_Stmt_3;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ThenStmt_14 = ((MR_Word) ((MR_hl_field(2, Stmt_3, (MR_Integer) 1))));
          MR_Word MaybeElseStmt_15 = ((MR_Word) ((MR_hl_field(2, Stmt_3, (MR_Integer) 2))));
          MR_Word _Cond_13 = ((MR_Word) ((MR_hl_field(2, Stmt_3, (MR_Integer) 0))));
          MR_Word _Context_35 = ((MR_Word) ((MR_hl_field(2, Stmt_3, (MR_Integer) 3))));

          *((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4) = ThenStmt_14;
          ((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
          ml_backend__ml_util__stmt_contains_statement_2_p_0(ThenStmt_14, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
          {
            MR_Word Stmt_57;

            succeeded = (MaybeElseStmt_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Stmt_57 = ((MR_Word) ((MR_hl_field(1, MaybeElseStmt_15, (MR_Integer) 0))));
              ml_backend__ml_util__statement_is_or_contains_statement_2_p_0(Stmt_57, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Stmt_3, (MR_Integer) 0))))) {
          case (MR_Integer) 0:
            {
              MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 4))));
              MR_Word Default_20 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 5))));
              MR_Word _Type_16 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 1))));
              MR_Word _Val_17 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 2))));
              MR_Word _Range_18 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 3))));
              MR_Word _Context_37 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 6))));

              mercury__list__member_2_p_1((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), &(env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__conv1_Case_60, Cases_19, ml_backend__ml_util__stmt_contains_statement_2_p_0_4, &env);
              {
                MR_Word Stmt_67;

                succeeded = ((MR_tag((MR_Word) Default_20)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Stmt_67 = ((MR_Word) ((MR_hl_field(1, Default_20, (MR_Integer) 0))));
                  ml_backend__ml_util__statement_is_or_contains_statement_2_p_0(Stmt_67, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word HandlerStmt_22 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 3))));
              MR_Word BodyStmt_41 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 2))));
              MR_Word _Ref_21 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 1))));
              MR_Word _Context_39 = ((MR_Word) ((MR_hl_field(3, Stmt_3, (MR_Integer) 4))));

              *((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4) = BodyStmt_41;
              ((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
              ml_backend__ml_util__stmt_contains_statement_2_p_0(BodyStmt_41, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont, (env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
              *((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__SubStmt_4) = HandlerStmt_22;
              ((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont)((env).ml_backend__ml_util__stmt_contains_statement_2_p_0_env_0__cont_env_ptr);
              {
                MR_Word next_value_of_Stmt_3 = HandlerStmt_22;

                // direct tailcall eliminated
                ;
                Stmt_3 = next_value_of_Stmt_3;
                continue;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
ml_backend__ml_util__statement_is_or_contains_statement_2_p_0(
  MR_Word Stmt_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  *HeadVar__2_2 = Stmt_1;
  cont(cont_env_ptr);
  ml_backend__ml_util__stmt_contains_statement_2_p_0(Stmt_1, HeadVar__2_2, cont, cont_env_ptr);
}

MR_bool MR_CALL 
ml_backend__ml_util__code_address_is_for_this_function_3_p_0(
  MR_Word CodeAddr_4,
  MR_Word ModuleName_5,
  MR_Word FuncName_6)
{
  MR_bool succeeded;
  MR_Word QualFuncLabel_7 = ((MR_Word) ((MR_hl_field(0, CodeAddr_4, (MR_Integer) 0))));
  MR_Word FuncModuleName_9 = ((MR_Word) ((MR_hl_field(0, QualFuncLabel_7, (MR_Integer) 0))));
  MR_Word FuncLabel_10 = ((MR_Word) ((MR_hl_field(0, QualFuncLabel_7, (MR_Integer) 1))));
  MR_Word Var_12;
  MR_Word Var_13;

  succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(FuncModuleName_9, ModuleName_5);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) FuncName_6)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_12 = (MR_Word) ((MR_Word) (FuncName_6));
      Var_13 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
      succeeded = ml_backend__mlds____Unify____mlds_func_label_0_0(FuncLabel_10, Var_13);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
ml_backend__ml_util__func_defns_contain_main_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word FuncDefn_2;
    MR_Word FuncDefns_3;
    MR_Word FuncName_4;
    MR_Word PlainFuncName_12;
    MR_Word FuncLabel_13;
    MR_Word ProcLabel_15;
    MR_Word PredLabel_17;
    MR_Word Var_20;
    MR_String Var_21;
    MR_Word Var_22;
    MR_Integer Var_23;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      FuncDefn_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      FuncDefns_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      FuncName_4 = ((MR_Word) ((MR_hl_field(0, FuncDefn_2, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) FuncName_4)) == (MR_Integer) 0);
      if (succeeded)
      {
        PlainFuncName_12 = (MR_Word) ((MR_Word) (FuncName_4));
        FuncLabel_13 = ((MR_Word) ((MR_hl_field(0, PlainFuncName_12, (MR_Integer) 0))));
        ProcLabel_15 = ((MR_Word) ((MR_hl_field(0, FuncLabel_13, (MR_Integer) 0))));
        PredLabel_17 = ((MR_Word) ((MR_hl_field(0, ProcLabel_15, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) PredLabel_17)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_20 = ((MR_Unsigned) ((MR_hl_field(0, PredLabel_17, (MR_Integer) 0))) & (MR_Integer) 1);
          Var_21 = ((MR_String) ((MR_hl_field(0, PredLabel_17, (MR_Integer) 2))));
          Var_22 = ((MR_Word) ((MR_hl_field(0, PredLabel_17, (MR_Integer) 3))));
          succeeded = (Var_20 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (strcmp(Var_21, (MR_String) "main") == 0);
            if (succeeded)
            {
              Var_23 = (MR_Integer) (Var_22);
              succeeded = (Var_23 == (MR_Integer) 2);
            }
          }
        }
      }
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = FuncDefns_3;

        // direct tailcall eliminated
        ;
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
