/*
** Automatically generated from `mlds_to_cs_data.m'
** by the Mercury compiler,
** version rotd-2018-07-31
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


// :- module ml_backend.mlds_to_cs_data.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_data__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_data.mih"


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
#include "backend_libs.c_util.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_name.mih"
#include "ml_backend.mlds_to_cs_type.mih"
#include "ml_backend.mlds_to_cs_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.java_names.mih"
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




static MR_bool MR_CALL 
ml_backend__mlds_to_cs_data__IntroducedFrom__pred__output_rval_const_for_csharp__737__1_2_p_0(
  MR_Word Lang_11,
  MR_Word HeadVar__2_66);

static void MR_CALL 
ml_backend__mlds_to_cs_data__IntroducedFrom__pred__output_initializer_body_list_for_csharp__999__1_4_p_0(
  MR_Word Info_5,
  MR_Word LambdaHeadVar__1_14);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_body_list_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_4_p_0(
  MR_Word tscc_proc_3_input_1_Info_5,
  MR_Word tscc_proc_3_input_2_Rval_6);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_cast_rval_for_csharp_5_p_0(
  MR_Word tscc_proc_4_input_1_Info_6,
  MR_Word tscc_proc_4_input_2_Type_7,
  MR_Word tscc_proc_4_input_3_Expr_8);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_4_p_0(
  MR_Word tscc_proc_5_input_1_Info_5,
  MR_Word tscc_proc_5_input_2_Const_6);

static void MR_CALL 
ml_backend__mlds_to_cs_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_111_120_101_100_95_114_118_97_108_95_102_111_114_95_99_115_104_97_114_112_95_95_91_50_93_95_48_5_p_0(
  MR_Word tscc_proc_6_input_1_Info_6,
  MR_Word tscc_proc_6_input_2_Expr_8);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_binop_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Op_8,
  MR_Word X_9,
  MR_Word Y_10);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_unop_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word UnaryOp_7,
  MR_Word Expr_8);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word Expr_8);

static MR_String MR_CALL 
ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(
  MR_Word Info_4,
  MR_Word Type_5);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_3_p_0(
  uint64_t U64_4);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_int64_const_for_csharp_3_p_0(
  int64_t I64_4);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_uint32_const_for_csharp_3_p_0(
  uint32_t U32_4);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_int32_const_for_csharp_3_p_0(
  int32_t I32_4);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_uint16_const_for_csharp_3_p_0(
  uint16_t U16_4);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_int16_const_for_csharp_3_p_0(
  int16_t I16_4);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_3_p_0(
  uint8_t U8_4);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_int8_const_for_csharp_3_p_0(
  int8_t I8_4);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_uint_const_for_csharp_3_p_0(
  MR_Unsigned U_4);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_int_const_for_csharp_3_p_0(
  MR_Integer N_4);

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(
  MR_Word Op_4);


static /* final */ const MR_Box ml_backend__mlds_to_cs_data_scalar_common_1[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_cs_data_scalar_common_3[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_data_scalar_common_4[1][7];


/* sealed */ struct ml_backend__mlds_to_cs_data__vector_common_type_2_0_s {
  const MR_String ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct ml_backend__mlds_to_cs_data__vector_common_type_2_0_s ml_backend__mlds_to_cs_data_vector_common_2[20];



static /* final */ const MR_Box ml_backend__mlds_to_cs_data_scalar_common_1[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 1)) | (MR_Unsigned) ((MR_Integer) 0)))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_data_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_data_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct ml_backend__mlds_to_cs_data__vector_common_type_2_0_s ml_backend__mlds_to_cs_data_vector_common_2[20] = {
  /* row 0 */   {     (MR_String) "0" },
  /* row 1 */   {     (MR_String) "0U" },
  /* row 2 */   {     (MR_String) "0" },
  /* row 3 */   {     (MR_String) "0" },
  /* row 4 */   {     (MR_String) "0" },
  /* row 5 */   {     (MR_String) "0" },
  /* row 6 */   {     (MR_String) "0" },
  /* row 7 */   {     (MR_String) "0U" },
  /* row 8 */   {     (MR_String) "0L" },
  /* row 9 */   {     (MR_String) "0UL" },
  /* row 10 */   {     (MR_String) "0" },
  /* row 11 */   {     (MR_String) "0U" },
  /* row 12 */   {     (MR_String) "0" },
  /* row 13 */   {     (MR_String) "0" },
  /* row 14 */   {     (MR_String) "0" },
  /* row 15 */   {     (MR_String) "0" },
  /* row 16 */   {     (MR_String) "0" },
  /* row 17 */   {     (MR_String) "0U" },
  /* row 18 */   {     (MR_String) "0L" },
  /* row 19 */   {     (MR_String) "0UL" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static MR_bool MR_CALL 
ml_backend__mlds_to_cs_data__IntroducedFrom__pred__output_rval_const_for_csharp__737__1_2_p_0(
  MR_Word Lang_11,
  MR_Word HeadVar__2_66)
{
  {
    MR_bool succeeded = (Lang_11 == HeadVar__2_66);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__IntroducedFrom__pred__output_initializer_body_list_for_csharp__999__1_4_p_0(
  MR_Word Info_5,
  MR_Word LambdaHeadVar__1_14)
{
  {
    ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_5_p_0(Info_5, LambdaHeadVar__1_14, (MR_Word) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_body_list_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_data__IntroducedFrom__pred__output_initializer_body_list_for_csharp__999__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_body_list_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word Inits_6)
{
  {
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_initializer_body_list_for_csharp_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_5));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Inits_6, (MR_String) ",\n\t\t", Var_12);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word OutputAux_8,
  MR_Word Type_9,
  MR_Word Initializer_10)
{
  switch (MR_tag((MR_Word) Initializer_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) OutputAux_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OutputAux_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Var_24;

                mercury__io__write_string_3_p_0((MR_String) " = ");
                switch (MR_tag((MR_Word) Type_9)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Type_9)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                      case (MR_Integer) 8:
                      case (MR_Integer) 9:
                        Var_24 = (MR_String) "null";
                        break;
                      case (MR_Integer) 1:
                        Var_24 = (MR_String) "false";
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 4:
                        Var_24 = (MR_String) "0";
                        break;
                      case (MR_Integer) 3:
                        Var_24 = (MR_String) "0U";
                        break;
                      case (MR_Integer) 5:
                        Var_24 = (MR_String) "\'\\u0000\'";
                        break;
                      case (MR_Integer) 10:
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs_data.get_default_initializer_for_csharp\'/2", (MR_String) "variable has unknown_type");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    Var_24 = (MR_String) "null";
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word CtorCat_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 3))));

                          switch (MR_tag((MR_Word) CtorCat_37)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              switch (MR_unmkbody(CtorCat_37)) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  Var_24 = (MR_String) "null";
                                  break;
                                case (MR_Integer) 1:
                                  Var_24 = (MR_String) "null";
                                  break;
                                case (MR_Integer) 2:
                                  {
                                    MR_String TypeString_41;
                                    MR_String Var_66;
                                    MR_Word Var_42;

                                    ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_7, Type_9, &TypeString_41, &Var_42);
                                    Var_66 = mercury__string__f_43_43_2_f_0(TypeString_41, (MR_String) ")");
                                    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_66);
                                  }
                                  break;
                                case (MR_Integer) 3:
                                  Var_24 = (MR_String) "null";
                                  break;
                                case (MR_Integer) 4:
                                  Var_24 = (MR_String) "null";
                                  break;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_37, (MR_Integer) 0))));

                                switch (MR_tag((MR_Word) Var_91)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    switch (MR_unmkbody(Var_91)) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 0:
                                        Var_24 = (MR_String) "0";
                                        break;
                                      case (MR_Integer) 1:
                                        Var_24 = (MR_String) "\'\\u0000\'";
                                        break;
                                      case (MR_Integer) 2:
                                        Var_24 = (MR_String) "null";
                                        break;
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_91, (MR_Integer) 0))));

                                      Var_24 = ((&ml_backend__mlds_to_cs_data_vector_common_2[10 + Var_92]))->ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;
                                    }
                                    break;
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                MR_String TypeString_41;
                                MR_String Var_66;
                                MR_Word Var_42;

                                ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_7, Type_9, &TypeString_41, &Var_42);
                                Var_66 = mercury__string__f_43_43_2_f_0(TypeString_41, (MR_String) ")");
                                Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_66);
                              }
                              break;
                            case (MR_Integer) 3:
                              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_37, (MR_Integer) 0)))) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  Var_24 = (MR_String) "null";
                                  break;
                                case (MR_Integer) 1:
                                  {
                                    MR_String TypeString_41;
                                    MR_String Var_66;
                                    MR_Word Var_42;

                                    ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_7, Type_9, &TypeString_41, &Var_42);
                                    Var_66 = mercury__string__f_43_43_2_f_0(TypeString_41, (MR_String) ")");
                                    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_66);
                                  }
                                  break;
                              }
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                      case (MR_Integer) 8:
                        Var_24 = (MR_String) "null";
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ForeignType_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))));

                          switch (MR_tag((MR_Word) ForeignType_52)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                            case (MR_Integer) 1:
                            case (MR_Integer) 3:
                              {
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs_data.get_default_initializer_for_csharp\'/2", (MR_String) "wrong foreign language type");
                                  return;
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                MR_String CsharpType_53;
                                MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ForeignType_52, (MR_Integer) 0))));
                                MR_String Var_63;

                                CsharpType_53 = (MR_String) (Var_61);
                                Var_63 = mercury__string__f_43_43_2_f_0(CsharpType_53, (MR_String) ")");
                                Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_63);
                              }
                              break;
                          }
                        }
                        break;
                    }
                    break;
                }
                mercury__io__write_string_3_p_0(Var_24);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        mercury__io__write_string_3_p_0((MR_String) " = ");
        switch (MR_tag((MR_Word) OutputAux_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OutputAux_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                {
                  MR_Word Var_30;

                  {
                    Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Type_9));
                  }
                  ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_5_p_0(Info_7, Initializer_10, Var_30);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_28;

                  {
                    Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Type_9));
                  }
                  ml_backend__mlds_to_cs_data__output_initializer_alloc_only_for_csharp_5_p_0(Info_7, Initializer_10, Var_28);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_30;

              {
                Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Type_9));
              }
              ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_5_p_0(Info_7, Initializer_10, Var_30);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_data__IntroducedFrom__pred__output_initializer_body_list_for_csharp__999__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_data__IntroducedFrom__pred__output_initializer_body_list_for_csharp__999__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Initializer_7,
  MR_Word MaybeType_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Initializer_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_initializer_body_for_csharp\'/5", (MR_String) "no_initializer");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer_7, (MR_Integer) 0))));

          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Rval_10);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word StructType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 0))));
          MR_Word FieldInits_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 1))));
          MR_Word IsArray_13;
          MR_String Var_31;
          MR_Char Var_34;
          MR_Word Var_66;

          mercury__io__write_string_3_p_0((MR_String) "new ");
          ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_6, StructType_11);
          IsArray_13 = ml_backend__mlds_to_cs_type__type_is_array_for_csharp_1_f_0(StructType_11);
          succeeded = (IsArray_13 == (MR_Integer) 0);
          if (succeeded)
            Var_31 = (MR_String) " {";
          else
            Var_31 = (MR_String) "(";
          mercury__io__write_string_3_p_0(Var_31);
          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Info_6));
          }
          mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), FieldInits_12, (MR_String) ",\n\t\t", Var_66);
          succeeded = (IsArray_13 == (MR_Integer) 0);
          if (succeeded)
            Var_34 = (MR_Char) 125;
          else
            Var_34 = (MR_Char) 41;
          mercury__io__write_char_3_p_0(Var_34);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ElementInits_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Initializer_7, (MR_Integer) 0))));
          MR_Word Var_46;

          mercury__io__write_string_3_p_0((MR_String) "new ");
          if ((MaybeType_8 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__io__write_string_3_p_0((MR_String) "/* XXX init_array */ object[]");
          }
          else
          {
            MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0))));

            ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_6, Type_15);
          }
          mercury__io__write_string_3_p_0((MR_String) " {\n\t\t");
          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Info_6));
          }
          mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ElementInits_14, (MR_String) ",\n\t\t", Var_46);
          mercury__io__write_string_3_p_0((MR_String) "}");
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_initializer_alloc_only_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Initializer_7,
  MR_Word MaybeType_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Initializer_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_initializer_alloc_only_for_csharp\'/5", (MR_String) "no_initializer");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_initializer_alloc_only_for_csharp\'/5", (MR_String) "init_obj");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word StructType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 0))));
          MR_Word FieldInits_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 1))));
          MR_Word CtorCat_15;
          MR_Word Var_41;

          mercury__io__write_string_3_p_0((MR_String) "new ");
          succeeded = ((((MR_tag((MR_Word) StructType_11)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), StructType_11, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            CtorCat_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StructType_11, (MR_Integer) 3))));
            Var_41 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(CtorCat_15);
            succeeded = (Var_41 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            MR_Integer Size_16;
            MR_String Var_63;

            Size_16 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), FieldInits_12);
            mercury__io__write_string_3_p_0((MR_String) "object[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), Size_16, &Var_63);
            mercury__io__write_string_3_p_0(Var_63);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          else
          {
            ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_6, StructType_11);
            mercury__io__write_string_3_p_0((MR_String) "()");
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ElementInits_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Initializer_7, (MR_Integer) 0))));
          MR_Integer Size_54;

          Size_54 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ElementInits_17);
          mercury__io__write_string_3_p_0((MR_String) "new ");
          if ((MaybeType_8 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_74;

            mercury__io__write_string_3_p_0((MR_String) "/* XXX init_array */ object[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), Size_54, &Var_74);
            mercury__io__write_string_3_p_0(Var_74);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          else
          {
            MR_Word Type_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0))));
            MR_String String_19;
            MR_Word ArrayDims_20;
            MR_Word Heads_21;
            MR_Integer Var_59;
            MR_Box conv0_Var_59;

            ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_6, Type_18, &String_19, &ArrayDims_20);
            mercury__io__write_string_3_p_0(String_19);
            succeeded = mercury__list__split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_20, &Heads_21, &conv0_Var_59);
            if (succeeded)
            {
              Var_59 = ((MR_Integer) (conv0_Var_59));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              succeeded = ((MR_Integer) 0 == Var_59);
            if (succeeded)
            {
              MR_Word Var_33;
              MR_Word Var_35;

              {
                Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Size_54));
                MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Heads_21, Var_35);
              ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_33);
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_initializer_alloc_only_for_csharp\'/5", (MR_String) "missing array dimension");
                return;
              }
            }
          }
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_call_rval_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1)));
    MR_Word CodeAddr_9;
    MR_Word Const_8;

    if (succeeded)
    {
      Const_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Const_8)) == (MR_Integer) 1);
      if (succeeded)
        CodeAddr_9 = (MR_Word) (MR_body((MR_Word) (Const_8), (MR_Integer) 1));
    }
    if (succeeded)
    {
      ml_backend__mlds_to_cs_data__mlds_output_code_addr_for_csharp_5_p_0(Info_5, CodeAddr_9, (MR_Integer) 1);
    }
    else
    {
      if (((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 2))
      {
        MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_34)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_34)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_data__mlds_output_code_addr_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word CodeAddr_7,
  MR_Word IsCall_8)
{
  {
    MR_Word QualFuncLabel_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_7, (MR_Integer) 0))));
    MR_Word Signature_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_7, (MR_Integer) 1))));
    MR_Word ArgTypes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_11, (MR_Integer) 0))));
    MR_Word RetTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_11, (MR_Integer) 1))));
    MR_Word ModuleName_15;
    MR_Word FuncLabel_16;
    MR_Word ProcLabel_17;
    MR_Word MaybeAux_18;
    MR_String MaybeAuxSuffix_19;

    switch (IsCall_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String TypeString_14;

          TypeString_14 = ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0(Info_6, ArgTypes_12, RetTypes_13);
          mercury__io__write_string_3_p_0((MR_String) "(");
          mercury__io__write_string_3_p_0(TypeString_14);
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    ModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_10, (MR_Integer) 0))));
    FuncLabel_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_10, (MR_Integer) 1))));
    ProcLabel_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_16, (MR_Integer) 0))));
    MaybeAux_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_16, (MR_Integer) 1))));
    MaybeAuxSuffix_19 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_18);
    ml_backend__mlds_to_cs_name__output_qual_name_prefix_cs_4_p_0(ModuleName_15, (MR_Integer) 0);
    ml_backend__mlds_to_cs_name__mlds_output_proc_label_4_p_0(MaybeAuxSuffix_19, ProcLabel_17);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_cs_data__IntroducedFrom__pred__output_rval_const_for_csharp__737__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_lval_for_csharp_4_p_0(
  MR_Word tscc_proc_1_input_1_Info_5,
  MR_Word tscc_proc_1_input_2_Lval_6)
{
  {
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Expr_8;
    MR_Word tscc_proc_5_input_1_Info_5;
    MR_Word tscc_proc_5_input_2_Const_6;
    MR_Word tscc_proc_6_input_1_Info_6;
    MR_Word tscc_proc_6_input_2_Expr_8;

    // The code for TSCC PROC 1: pred ml_backend.mlds_to_cs_data.output_lval_for_csharp/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_cs_data.output_lval_for_csharp/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_for_csharp/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_cs_data.output_bracketed_rval_for_csharp/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_cs_data.output_cast_rval_for_csharp/5-0
    ;
    // proc 5 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_const_for_csharp/4-0
    ;
    // proc 6 in TSCC: pred ml_backend.mlds_to_cs_data.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/5-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
            MR_Word FieldType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

            if (((MR_tag((MR_Word) FieldId_11)) == (MR_Integer) 1))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 0))));
              MR_Word CtorType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 1))));
              MR_Word FieldVarName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2))));

              succeeded = (FieldVarName_22 == (MR_Word) ((MR_Unsigned) 4U));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 2))
                {
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0))));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                  }
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              ml_backend__mlds_to_cs_name__output_field_var_name_for_csharp_3_p_0(FieldVarName_22);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_11, (MR_Integer) 0))));

              if ((FieldType_12 == (MR_Word) ((MR_Unsigned) 24U)))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_12)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 0);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_lval_for_csharp\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((object[]) ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_27 = (MR_String) (GlobalVarRef_26);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_3_p_0(LocalVarName_28);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_name__output_maybe_qualified_global_var_name_for_csharp_4_p_0(Info_5, QualGlobalVarName_30);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_5 = tscc_proc_2_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/4", (MR_String) "ml_scalar_common");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_21 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 0))));
            MR_Integer TypeNum_24;
            MR_Integer RowNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 3))));
            MR_Word ModuleSymName_26;
            MR_String MangledModuleName_27;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 2))));
            MR_String Var_114;
            MR_String Var_124;

            TypeNum_24 = (MR_Integer) (Var_49);
            ModuleSymName_26 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
            MangledModuleName_27 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_27);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_24, &Var_114);
            mercury__io__write_string_3_p_0(Var_114);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), RowNum_25, &Var_124);
            mercury__io__write_string_3_p_0(Var_124);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/4", (MR_String) "tags not supported in C#");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_5_input_1_Info_5 = Info_5;
                MR_Word next_value_of_tscc_proc_5_input_2_Const_6 = Const_11;

                // direct tailcall eliminated
                ;
                tscc_proc_5_input_1_Info_5 = next_value_of_tscc_proc_5_input_1_Info_5;
                tscc_proc_5_input_2_Const_6 = next_value_of_tscc_proc_5_input_2_Const_6;
                goto top_of_proc_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word Var_67;
                MR_Word Var_88;

                succeeded = ((((MR_tag((MR_Word) Type_79)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 1))));
                  Var_88 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_67, Var_88);
                }
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "builtin.comparison_result_object[(int) ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, SubRval_80);
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_6_input_1_Info_6 = Info_5;
                  MR_Word next_value_of_tscc_proc_6_input_2_Expr_8 = SubRval_80;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_6_input_1_Info_6 = next_value_of_tscc_proc_6_input_1_Info_6;
                  tscc_proc_6_input_2_Expr_8 = next_value_of_tscc_proc_6_input_2_Expr_8;
                  goto top_of_proc_6;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_5_p_0(Info_5, Type_81, SubRval_82);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs_data__output_unop_for_csharp_5_p_0(Info_5, Unop_16, SubRval_83);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Op_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_cs_data__output_binop_for_csharp_6_p_0(Info_5, Op_17, SubRvalA_18, SubRvalB_19);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Info_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "out ");
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_84;
                tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 3))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 2))));
                MR_Integer TypeNum_87 = (MR_Integer) (Var_38);
                MR_String Var_92;
                MR_String Var_102;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_87, &Var_92);
                mercury__io__write_string_3_p_0(Var_92);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), StartRowNum_31, &Var_102);
                mercury__io__write_string_3_p_0(Var_102);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, RowRval_29);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
              {
                mercury__io__write_string_3_p_0((MR_String) "this");
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 2))
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
        tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
        goto top_of_proc_2;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Info_6 = tscc_proc_4_input_1_Info_6;
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) ((MR_Unsigned) 36U));
      MR_Integer N_10;
      MR_Word Var_15;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 2);
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_15, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Integer Var_48;

        ml_backend__mlds_to_cs_util__maybe_output_comment_for_csharp_4_p_0(Info_6, (MR_String) "cast");
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_48 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_48);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) ((MR_Unsigned) 32U)))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0))) == (MR_Integer) 0))))
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));
          MR_Word Var_27;

          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          ml_backend__mlds_to_cs_util__maybe_output_comment_for_csharp_4_p_0(Info_6, (MR_String) "cast");
          mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_45;

          succeeded = ml_backend__mlds_to_cs_type__csharp_builtin_type_2_p_0(Type_7, &Var_45);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_45) == 0);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
        }
      }
      goto tscc_end;
    }
  top_of_proc_5:;
    {
      MR_Word Info_5 = tscc_proc_5_input_1_Info_5;
      MR_Word Const_6 = tscc_proc_5_input_2_Const_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Const_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Const_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "true");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "false");
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CodeAddr_18 = (MR_Word) (MR_body((MR_Word) (Const_6), (MR_Integer) 1));
            MR_String Name_19;
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
            MR_Box conv0_Name_19;

            mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, ((MR_Box) (CodeAddr_18)), &conv0_Name_19);
            Name_19 = ((MR_String) (conv0_Name_19));
            mercury__io__write_string_3_p_0(Name_19);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

            ml_backend__mlds_to_cs_data__output_int_const_for_csharp_3_p_0(N_8);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned U_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_data__output_uint_const_for_csharp_3_p_0(U_9);
              }
              break;
            case (MR_Integer) 1:
              {
                int8_t N_95 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int8_const_for_csharp_3_p_0(N_95);
              }
              break;
            case (MR_Integer) 2:
              {
                uint8_t N_96 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_3_p_0(N_96);
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t N_97 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int16_const_for_csharp_3_p_0(N_97);
              }
              break;
            case (MR_Integer) 4:
              {
                uint16_t N_98 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint16_const_for_csharp_3_p_0(N_98);
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t N_99 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int32_const_for_csharp_3_p_0(N_99);
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t N_100 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint32_const_for_csharp_3_p_0(N_100);
              }
              break;
            case (MR_Integer) 7:
              {
                int64_t N_101 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int64_const_for_csharp_3_p_0(N_101);
              }
              break;
            case (MR_Integer) 8:
              {
                uint64_t N_102 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_3_p_0(N_102);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word EnumType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Var_73;
                MR_Word Var_75;
                MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8;

                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (N_104));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_75));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                next_value_of_tscc_proc_4_input_2_Type_7 = EnumType_10;
                next_value_of_tscc_proc_4_input_3_Expr_8 = Var_73;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer N_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "( ");
                ml_backend__mlds_to_cs_data__output_int_const_for_csharp_3_p_0(N_103);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Float FloatVal_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_14);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2((MR_Integer) 2, String_15);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word String_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 2, String_105);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Lang_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String Value_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 3))));
                MR_Word Var_63;

                {
                  Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Lang_11));
                  MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
                }
                mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/4", (MR_String) "language other than C#.");
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_5, Type_13);
                mercury__io__write_string_3_p_0((MR_String) ") ");
                mercury__io__write_string_3_p_0(Value_12);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word TargetPrefixes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String NamedConst_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), TargetPrefixes_16, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0(Var_47);
                mercury__io__write_string_3_p_0(NamedConst_17);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word VarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String VarNameStr_21;

                ml_backend__mlds_to_cs_name__local_var_name_to_string_for_csharp_2_p_0(VarName_20, &VarNameStr_21);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(VarNameStr_21);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_23;
                MR_Word Var_39;
                MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String VarNameStr_107;

                Var_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
                MangledModuleName_23 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_39);
                mercury__io__write_string_3_p_0(MangledModuleName_23);
                mercury__io__write_string_3_p_0((MR_String) ".");
                ml_backend__mlds_to_cs_name__global_var_name_to_string_for_csharp_2_p_0(VarName_106, &VarNameStr_107);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(VarNameStr_107);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word RttiId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String RttiAddrName_25;
                MR_Word Var_34;
                MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_109;

                Var_34 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
                MangledModuleName_109 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_34);
                mercury__io__write_string_3_p_0(MangledModuleName_109);
                mercury__io__write_string_3_p_0((MR_String) ".");
                backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_24, &RttiAddrName_25);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(RttiAddrName_25);
              }
              break;
            case (MR_Integer) 19:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/4", (MR_String) "NYI: mlconst_data_addr_tabling");
                  return;
                }
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Initializer_28;
                MR_Word Type_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                Initializer_28 = ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(Info_5, Type_110);
                mercury__io__write_string_3_p_0(Initializer_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_6:;
    {
      MR_Word Info_6 = tscc_proc_6_input_1_Info_6;
      MR_Word Expr_8 = tscc_proc_6_input_2_Expr_8;
      MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
      tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
      goto top_of_proc_2;
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(
  MR_Word tscc_proc_2_input_1_Info_5,
  MR_Word tscc_proc_2_input_2_Rval_6)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Expr_8;
    MR_Word tscc_proc_5_input_1_Info_5;
    MR_Word tscc_proc_5_input_2_Const_6;
    MR_Word tscc_proc_6_input_1_Info_6;
    MR_Word tscc_proc_6_input_2_Expr_8;

    // The code for TSCC PROC 2: pred ml_backend.mlds_to_cs_data.output_rval_for_csharp/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_cs_data.output_lval_for_csharp/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_for_csharp/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_cs_data.output_bracketed_rval_for_csharp/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_cs_data.output_cast_rval_for_csharp/5-0
    ;
    // proc 5 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_const_for_csharp/4-0
    ;
    // proc 6 in TSCC: pred ml_backend.mlds_to_cs_data.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/5-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
            MR_Word FieldType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

            if (((MR_tag((MR_Word) FieldId_11)) == (MR_Integer) 1))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 0))));
              MR_Word CtorType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 1))));
              MR_Word FieldVarName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2))));

              succeeded = (FieldVarName_22 == (MR_Word) ((MR_Unsigned) 4U));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 2))
                {
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0))));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                  }
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              ml_backend__mlds_to_cs_name__output_field_var_name_for_csharp_3_p_0(FieldVarName_22);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_11, (MR_Integer) 0))));

              if ((FieldType_12 == (MR_Word) ((MR_Unsigned) 24U)))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_12)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 0);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_lval_for_csharp\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((object[]) ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_27 = (MR_String) (GlobalVarRef_26);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_3_p_0(LocalVarName_28);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_name__output_maybe_qualified_global_var_name_for_csharp_4_p_0(Info_5, QualGlobalVarName_30);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_5 = tscc_proc_2_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/4", (MR_String) "ml_scalar_common");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_21 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 0))));
            MR_Integer TypeNum_24;
            MR_Integer RowNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 3))));
            MR_Word ModuleSymName_26;
            MR_String MangledModuleName_27;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 2))));
            MR_String Var_114;
            MR_String Var_124;

            TypeNum_24 = (MR_Integer) (Var_49);
            ModuleSymName_26 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
            MangledModuleName_27 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_27);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_24, &Var_114);
            mercury__io__write_string_3_p_0(Var_114);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), RowNum_25, &Var_124);
            mercury__io__write_string_3_p_0(Var_124);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/4", (MR_String) "tags not supported in C#");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_5_input_1_Info_5 = Info_5;
                MR_Word next_value_of_tscc_proc_5_input_2_Const_6 = Const_11;

                // direct tailcall eliminated
                ;
                tscc_proc_5_input_1_Info_5 = next_value_of_tscc_proc_5_input_1_Info_5;
                tscc_proc_5_input_2_Const_6 = next_value_of_tscc_proc_5_input_2_Const_6;
                goto top_of_proc_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word Var_67;
                MR_Word Var_88;

                succeeded = ((((MR_tag((MR_Word) Type_79)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 1))));
                  Var_88 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_67, Var_88);
                }
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "builtin.comparison_result_object[(int) ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, SubRval_80);
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_6_input_1_Info_6 = Info_5;
                  MR_Word next_value_of_tscc_proc_6_input_2_Expr_8 = SubRval_80;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_6_input_1_Info_6 = next_value_of_tscc_proc_6_input_1_Info_6;
                  tscc_proc_6_input_2_Expr_8 = next_value_of_tscc_proc_6_input_2_Expr_8;
                  goto top_of_proc_6;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_5_p_0(Info_5, Type_81, SubRval_82);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs_data__output_unop_for_csharp_5_p_0(Info_5, Unop_16, SubRval_83);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Op_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_cs_data__output_binop_for_csharp_6_p_0(Info_5, Op_17, SubRvalA_18, SubRvalB_19);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Info_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "out ");
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_84;
                tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 3))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 2))));
                MR_Integer TypeNum_87 = (MR_Integer) (Var_38);
                MR_String Var_92;
                MR_String Var_102;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_87, &Var_92);
                mercury__io__write_string_3_p_0(Var_92);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), StartRowNum_31, &Var_102);
                mercury__io__write_string_3_p_0(Var_102);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, RowRval_29);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
              {
                mercury__io__write_string_3_p_0((MR_String) "this");
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 2))
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
        tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
        goto top_of_proc_2;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Info_6 = tscc_proc_4_input_1_Info_6;
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) ((MR_Unsigned) 36U));
      MR_Integer N_10;
      MR_Word Var_15;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 2);
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_15, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Integer Var_48;

        ml_backend__mlds_to_cs_util__maybe_output_comment_for_csharp_4_p_0(Info_6, (MR_String) "cast");
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_48 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_48);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) ((MR_Unsigned) 32U)))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0))) == (MR_Integer) 0))))
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));
          MR_Word Var_27;

          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          ml_backend__mlds_to_cs_util__maybe_output_comment_for_csharp_4_p_0(Info_6, (MR_String) "cast");
          mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_45;

          succeeded = ml_backend__mlds_to_cs_type__csharp_builtin_type_2_p_0(Type_7, &Var_45);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_45) == 0);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
        }
      }
      goto tscc_end;
    }
  top_of_proc_5:;
    {
      MR_Word Info_5 = tscc_proc_5_input_1_Info_5;
      MR_Word Const_6 = tscc_proc_5_input_2_Const_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Const_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Const_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "true");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "false");
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CodeAddr_18 = (MR_Word) (MR_body((MR_Word) (Const_6), (MR_Integer) 1));
            MR_String Name_19;
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
            MR_Box conv0_Name_19;

            mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, ((MR_Box) (CodeAddr_18)), &conv0_Name_19);
            Name_19 = ((MR_String) (conv0_Name_19));
            mercury__io__write_string_3_p_0(Name_19);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

            ml_backend__mlds_to_cs_data__output_int_const_for_csharp_3_p_0(N_8);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned U_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_data__output_uint_const_for_csharp_3_p_0(U_9);
              }
              break;
            case (MR_Integer) 1:
              {
                int8_t N_95 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int8_const_for_csharp_3_p_0(N_95);
              }
              break;
            case (MR_Integer) 2:
              {
                uint8_t N_96 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_3_p_0(N_96);
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t N_97 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int16_const_for_csharp_3_p_0(N_97);
              }
              break;
            case (MR_Integer) 4:
              {
                uint16_t N_98 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint16_const_for_csharp_3_p_0(N_98);
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t N_99 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int32_const_for_csharp_3_p_0(N_99);
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t N_100 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint32_const_for_csharp_3_p_0(N_100);
              }
              break;
            case (MR_Integer) 7:
              {
                int64_t N_101 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int64_const_for_csharp_3_p_0(N_101);
              }
              break;
            case (MR_Integer) 8:
              {
                uint64_t N_102 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_3_p_0(N_102);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word EnumType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Var_73;
                MR_Word Var_75;
                MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8;

                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (N_104));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_75));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                next_value_of_tscc_proc_4_input_2_Type_7 = EnumType_10;
                next_value_of_tscc_proc_4_input_3_Expr_8 = Var_73;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer N_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "( ");
                ml_backend__mlds_to_cs_data__output_int_const_for_csharp_3_p_0(N_103);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Float FloatVal_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_14);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2((MR_Integer) 2, String_15);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word String_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 2, String_105);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Lang_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String Value_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 3))));
                MR_Word Var_63;

                {
                  Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Lang_11));
                  MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
                }
                mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/4", (MR_String) "language other than C#.");
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_5, Type_13);
                mercury__io__write_string_3_p_0((MR_String) ") ");
                mercury__io__write_string_3_p_0(Value_12);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word TargetPrefixes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String NamedConst_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), TargetPrefixes_16, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0(Var_47);
                mercury__io__write_string_3_p_0(NamedConst_17);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word VarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String VarNameStr_21;

                ml_backend__mlds_to_cs_name__local_var_name_to_string_for_csharp_2_p_0(VarName_20, &VarNameStr_21);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(VarNameStr_21);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_23;
                MR_Word Var_39;
                MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String VarNameStr_107;

                Var_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
                MangledModuleName_23 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_39);
                mercury__io__write_string_3_p_0(MangledModuleName_23);
                mercury__io__write_string_3_p_0((MR_String) ".");
                ml_backend__mlds_to_cs_name__global_var_name_to_string_for_csharp_2_p_0(VarName_106, &VarNameStr_107);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(VarNameStr_107);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word RttiId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String RttiAddrName_25;
                MR_Word Var_34;
                MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_109;

                Var_34 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
                MangledModuleName_109 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_34);
                mercury__io__write_string_3_p_0(MangledModuleName_109);
                mercury__io__write_string_3_p_0((MR_String) ".");
                backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_24, &RttiAddrName_25);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(RttiAddrName_25);
              }
              break;
            case (MR_Integer) 19:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/4", (MR_String) "NYI: mlconst_data_addr_tabling");
                  return;
                }
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Initializer_28;
                MR_Word Type_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                Initializer_28 = ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(Info_5, Type_110);
                mercury__io__write_string_3_p_0(Initializer_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_6:;
    {
      MR_Word Info_6 = tscc_proc_6_input_1_Info_6;
      MR_Word Expr_8 = tscc_proc_6_input_2_Expr_8;
      MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
      tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
      goto top_of_proc_2;
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_4_p_0(
  MR_Word tscc_proc_3_input_1_Info_5,
  MR_Word tscc_proc_3_input_2_Rval_6)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Expr_8;
    MR_Word tscc_proc_5_input_1_Info_5;
    MR_Word tscc_proc_5_input_2_Const_6;
    MR_Word tscc_proc_6_input_1_Info_6;
    MR_Word tscc_proc_6_input_2_Expr_8;

    // The code for TSCC PROC 3: pred ml_backend.mlds_to_cs_data.output_bracketed_rval_for_csharp/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_cs_data.output_lval_for_csharp/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_for_csharp/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_cs_data.output_bracketed_rval_for_csharp/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_cs_data.output_cast_rval_for_csharp/5-0
    ;
    // proc 5 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_const_for_csharp/4-0
    ;
    // proc 6 in TSCC: pred ml_backend.mlds_to_cs_data.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/5-0
    ;
    ;
    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
            MR_Word FieldType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

            if (((MR_tag((MR_Word) FieldId_11)) == (MR_Integer) 1))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 0))));
              MR_Word CtorType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 1))));
              MR_Word FieldVarName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2))));

              succeeded = (FieldVarName_22 == (MR_Word) ((MR_Unsigned) 4U));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 2))
                {
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0))));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                  }
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              ml_backend__mlds_to_cs_name__output_field_var_name_for_csharp_3_p_0(FieldVarName_22);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_11, (MR_Integer) 0))));

              if ((FieldType_12 == (MR_Word) ((MR_Unsigned) 24U)))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_12)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 0);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_lval_for_csharp\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((object[]) ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_27 = (MR_String) (GlobalVarRef_26);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_3_p_0(LocalVarName_28);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_name__output_maybe_qualified_global_var_name_for_csharp_4_p_0(Info_5, QualGlobalVarName_30);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_5 = tscc_proc_2_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/4", (MR_String) "ml_scalar_common");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_21 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 0))));
            MR_Integer TypeNum_24;
            MR_Integer RowNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 3))));
            MR_Word ModuleSymName_26;
            MR_String MangledModuleName_27;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 2))));
            MR_String Var_114;
            MR_String Var_124;

            TypeNum_24 = (MR_Integer) (Var_49);
            ModuleSymName_26 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
            MangledModuleName_27 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_27);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_24, &Var_114);
            mercury__io__write_string_3_p_0(Var_114);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), RowNum_25, &Var_124);
            mercury__io__write_string_3_p_0(Var_124);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/4", (MR_String) "tags not supported in C#");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_5_input_1_Info_5 = Info_5;
                MR_Word next_value_of_tscc_proc_5_input_2_Const_6 = Const_11;

                // direct tailcall eliminated
                ;
                tscc_proc_5_input_1_Info_5 = next_value_of_tscc_proc_5_input_1_Info_5;
                tscc_proc_5_input_2_Const_6 = next_value_of_tscc_proc_5_input_2_Const_6;
                goto top_of_proc_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word Var_67;
                MR_Word Var_88;

                succeeded = ((((MR_tag((MR_Word) Type_79)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 1))));
                  Var_88 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_67, Var_88);
                }
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "builtin.comparison_result_object[(int) ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, SubRval_80);
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_6_input_1_Info_6 = Info_5;
                  MR_Word next_value_of_tscc_proc_6_input_2_Expr_8 = SubRval_80;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_6_input_1_Info_6 = next_value_of_tscc_proc_6_input_1_Info_6;
                  tscc_proc_6_input_2_Expr_8 = next_value_of_tscc_proc_6_input_2_Expr_8;
                  goto top_of_proc_6;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_5_p_0(Info_5, Type_81, SubRval_82);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs_data__output_unop_for_csharp_5_p_0(Info_5, Unop_16, SubRval_83);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Op_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_cs_data__output_binop_for_csharp_6_p_0(Info_5, Op_17, SubRvalA_18, SubRvalB_19);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Info_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "out ");
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_84;
                tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 3))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 2))));
                MR_Integer TypeNum_87 = (MR_Integer) (Var_38);
                MR_String Var_92;
                MR_String Var_102;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_87, &Var_92);
                mercury__io__write_string_3_p_0(Var_92);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), StartRowNum_31, &Var_102);
                mercury__io__write_string_3_p_0(Var_102);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, RowRval_29);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
              {
                mercury__io__write_string_3_p_0((MR_String) "this");
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 2))
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
        tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
        goto top_of_proc_2;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Info_6 = tscc_proc_4_input_1_Info_6;
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) ((MR_Unsigned) 36U));
      MR_Integer N_10;
      MR_Word Var_15;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 2);
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_15, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Integer Var_48;

        ml_backend__mlds_to_cs_util__maybe_output_comment_for_csharp_4_p_0(Info_6, (MR_String) "cast");
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_48 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_48);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) ((MR_Unsigned) 32U)))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0))) == (MR_Integer) 0))))
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));
          MR_Word Var_27;

          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          ml_backend__mlds_to_cs_util__maybe_output_comment_for_csharp_4_p_0(Info_6, (MR_String) "cast");
          mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_45;

          succeeded = ml_backend__mlds_to_cs_type__csharp_builtin_type_2_p_0(Type_7, &Var_45);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_45) == 0);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
        }
      }
      goto tscc_end;
    }
  top_of_proc_5:;
    {
      MR_Word Info_5 = tscc_proc_5_input_1_Info_5;
      MR_Word Const_6 = tscc_proc_5_input_2_Const_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Const_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Const_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "true");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "false");
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CodeAddr_18 = (MR_Word) (MR_body((MR_Word) (Const_6), (MR_Integer) 1));
            MR_String Name_19;
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
            MR_Box conv0_Name_19;

            mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, ((MR_Box) (CodeAddr_18)), &conv0_Name_19);
            Name_19 = ((MR_String) (conv0_Name_19));
            mercury__io__write_string_3_p_0(Name_19);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

            ml_backend__mlds_to_cs_data__output_int_const_for_csharp_3_p_0(N_8);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned U_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_data__output_uint_const_for_csharp_3_p_0(U_9);
              }
              break;
            case (MR_Integer) 1:
              {
                int8_t N_95 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int8_const_for_csharp_3_p_0(N_95);
              }
              break;
            case (MR_Integer) 2:
              {
                uint8_t N_96 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_3_p_0(N_96);
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t N_97 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int16_const_for_csharp_3_p_0(N_97);
              }
              break;
            case (MR_Integer) 4:
              {
                uint16_t N_98 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint16_const_for_csharp_3_p_0(N_98);
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t N_99 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int32_const_for_csharp_3_p_0(N_99);
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t N_100 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint32_const_for_csharp_3_p_0(N_100);
              }
              break;
            case (MR_Integer) 7:
              {
                int64_t N_101 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int64_const_for_csharp_3_p_0(N_101);
              }
              break;
            case (MR_Integer) 8:
              {
                uint64_t N_102 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_3_p_0(N_102);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word EnumType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Var_73;
                MR_Word Var_75;
                MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8;

                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (N_104));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_75));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                next_value_of_tscc_proc_4_input_2_Type_7 = EnumType_10;
                next_value_of_tscc_proc_4_input_3_Expr_8 = Var_73;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer N_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "( ");
                ml_backend__mlds_to_cs_data__output_int_const_for_csharp_3_p_0(N_103);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Float FloatVal_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_14);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2((MR_Integer) 2, String_15);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word String_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 2, String_105);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Lang_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String Value_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 3))));
                MR_Word Var_63;

                {
                  Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Lang_11));
                  MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
                }
                mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/4", (MR_String) "language other than C#.");
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_5, Type_13);
                mercury__io__write_string_3_p_0((MR_String) ") ");
                mercury__io__write_string_3_p_0(Value_12);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word TargetPrefixes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String NamedConst_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), TargetPrefixes_16, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0(Var_47);
                mercury__io__write_string_3_p_0(NamedConst_17);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word VarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String VarNameStr_21;

                ml_backend__mlds_to_cs_name__local_var_name_to_string_for_csharp_2_p_0(VarName_20, &VarNameStr_21);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(VarNameStr_21);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_23;
                MR_Word Var_39;
                MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String VarNameStr_107;

                Var_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
                MangledModuleName_23 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_39);
                mercury__io__write_string_3_p_0(MangledModuleName_23);
                mercury__io__write_string_3_p_0((MR_String) ".");
                ml_backend__mlds_to_cs_name__global_var_name_to_string_for_csharp_2_p_0(VarName_106, &VarNameStr_107);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(VarNameStr_107);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word RttiId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String RttiAddrName_25;
                MR_Word Var_34;
                MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_109;

                Var_34 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
                MangledModuleName_109 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_34);
                mercury__io__write_string_3_p_0(MangledModuleName_109);
                mercury__io__write_string_3_p_0((MR_String) ".");
                backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_24, &RttiAddrName_25);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(RttiAddrName_25);
              }
              break;
            case (MR_Integer) 19:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/4", (MR_String) "NYI: mlconst_data_addr_tabling");
                  return;
                }
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Initializer_28;
                MR_Word Type_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                Initializer_28 = ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(Info_5, Type_110);
                mercury__io__write_string_3_p_0(Initializer_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_6:;
    {
      MR_Word Info_6 = tscc_proc_6_input_1_Info_6;
      MR_Word Expr_8 = tscc_proc_6_input_2_Expr_8;
      MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
      tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
      goto top_of_proc_2;
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_cast_rval_for_csharp_5_p_0(
  MR_Word tscc_proc_4_input_1_Info_6,
  MR_Word tscc_proc_4_input_2_Type_7,
  MR_Word tscc_proc_4_input_3_Expr_8)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_5_input_1_Info_5;
    MR_Word tscc_proc_5_input_2_Const_6;
    MR_Word tscc_proc_6_input_1_Info_6;
    MR_Word tscc_proc_6_input_2_Expr_8;

    // The code for TSCC PROC 4: pred ml_backend.mlds_to_cs_data.output_cast_rval_for_csharp/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_cs_data.output_lval_for_csharp/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_for_csharp/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_cs_data.output_bracketed_rval_for_csharp/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_cs_data.output_cast_rval_for_csharp/5-0
    ;
    // proc 5 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_const_for_csharp/4-0
    ;
    // proc 6 in TSCC: pred ml_backend.mlds_to_cs_data.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/5-0
    ;
    ;
    goto top_of_proc_4;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
            MR_Word FieldType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

            if (((MR_tag((MR_Word) FieldId_11)) == (MR_Integer) 1))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 0))));
              MR_Word CtorType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 1))));
              MR_Word FieldVarName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2))));

              succeeded = (FieldVarName_22 == (MR_Word) ((MR_Unsigned) 4U));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 2))
                {
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0))));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                  }
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              ml_backend__mlds_to_cs_name__output_field_var_name_for_csharp_3_p_0(FieldVarName_22);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_11, (MR_Integer) 0))));

              if ((FieldType_12 == (MR_Word) ((MR_Unsigned) 24U)))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_12)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 0);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_lval_for_csharp\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((object[]) ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_27 = (MR_String) (GlobalVarRef_26);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_3_p_0(LocalVarName_28);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_name__output_maybe_qualified_global_var_name_for_csharp_4_p_0(Info_5, QualGlobalVarName_30);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_5 = tscc_proc_2_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/4", (MR_String) "ml_scalar_common");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_21 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 0))));
            MR_Integer TypeNum_24;
            MR_Integer RowNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 3))));
            MR_Word ModuleSymName_26;
            MR_String MangledModuleName_27;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 2))));
            MR_String Var_114;
            MR_String Var_124;

            TypeNum_24 = (MR_Integer) (Var_49);
            ModuleSymName_26 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
            MangledModuleName_27 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_27);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_24, &Var_114);
            mercury__io__write_string_3_p_0(Var_114);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), RowNum_25, &Var_124);
            mercury__io__write_string_3_p_0(Var_124);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/4", (MR_String) "tags not supported in C#");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_5_input_1_Info_5 = Info_5;
                MR_Word next_value_of_tscc_proc_5_input_2_Const_6 = Const_11;

                // direct tailcall eliminated
                ;
                tscc_proc_5_input_1_Info_5 = next_value_of_tscc_proc_5_input_1_Info_5;
                tscc_proc_5_input_2_Const_6 = next_value_of_tscc_proc_5_input_2_Const_6;
                goto top_of_proc_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word Var_67;
                MR_Word Var_88;

                succeeded = ((((MR_tag((MR_Word) Type_79)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 1))));
                  Var_88 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_67, Var_88);
                }
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "builtin.comparison_result_object[(int) ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, SubRval_80);
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_6_input_1_Info_6 = Info_5;
                  MR_Word next_value_of_tscc_proc_6_input_2_Expr_8 = SubRval_80;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_6_input_1_Info_6 = next_value_of_tscc_proc_6_input_1_Info_6;
                  tscc_proc_6_input_2_Expr_8 = next_value_of_tscc_proc_6_input_2_Expr_8;
                  goto top_of_proc_6;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_5_p_0(Info_5, Type_81, SubRval_82);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs_data__output_unop_for_csharp_5_p_0(Info_5, Unop_16, SubRval_83);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Op_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_cs_data__output_binop_for_csharp_6_p_0(Info_5, Op_17, SubRvalA_18, SubRvalB_19);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Info_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "out ");
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_84;
                tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 3))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 2))));
                MR_Integer TypeNum_87 = (MR_Integer) (Var_38);
                MR_String Var_92;
                MR_String Var_102;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_87, &Var_92);
                mercury__io__write_string_3_p_0(Var_92);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), StartRowNum_31, &Var_102);
                mercury__io__write_string_3_p_0(Var_102);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, RowRval_29);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
              {
                mercury__io__write_string_3_p_0((MR_String) "this");
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 2))
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
        tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
        goto top_of_proc_2;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Info_6 = tscc_proc_4_input_1_Info_6;
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) ((MR_Unsigned) 36U));
      MR_Integer N_10;
      MR_Word Var_15;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 2);
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_15, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Integer Var_48;

        ml_backend__mlds_to_cs_util__maybe_output_comment_for_csharp_4_p_0(Info_6, (MR_String) "cast");
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_48 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_48);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) ((MR_Unsigned) 32U)))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0))) == (MR_Integer) 0))))
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));
          MR_Word Var_27;

          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          ml_backend__mlds_to_cs_util__maybe_output_comment_for_csharp_4_p_0(Info_6, (MR_String) "cast");
          mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_45;

          succeeded = ml_backend__mlds_to_cs_type__csharp_builtin_type_2_p_0(Type_7, &Var_45);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_45) == 0);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
        }
      }
      goto tscc_end;
    }
  top_of_proc_5:;
    {
      MR_Word Info_5 = tscc_proc_5_input_1_Info_5;
      MR_Word Const_6 = tscc_proc_5_input_2_Const_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Const_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Const_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "true");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "false");
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CodeAddr_18 = (MR_Word) (MR_body((MR_Word) (Const_6), (MR_Integer) 1));
            MR_String Name_19;
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
            MR_Box conv0_Name_19;

            mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, ((MR_Box) (CodeAddr_18)), &conv0_Name_19);
            Name_19 = ((MR_String) (conv0_Name_19));
            mercury__io__write_string_3_p_0(Name_19);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

            ml_backend__mlds_to_cs_data__output_int_const_for_csharp_3_p_0(N_8);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned U_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_data__output_uint_const_for_csharp_3_p_0(U_9);
              }
              break;
            case (MR_Integer) 1:
              {
                int8_t N_95 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int8_const_for_csharp_3_p_0(N_95);
              }
              break;
            case (MR_Integer) 2:
              {
                uint8_t N_96 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_3_p_0(N_96);
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t N_97 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int16_const_for_csharp_3_p_0(N_97);
              }
              break;
            case (MR_Integer) 4:
              {
                uint16_t N_98 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint16_const_for_csharp_3_p_0(N_98);
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t N_99 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int32_const_for_csharp_3_p_0(N_99);
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t N_100 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint32_const_for_csharp_3_p_0(N_100);
              }
              break;
            case (MR_Integer) 7:
              {
                int64_t N_101 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int64_const_for_csharp_3_p_0(N_101);
              }
              break;
            case (MR_Integer) 8:
              {
                uint64_t N_102 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_3_p_0(N_102);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word EnumType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Var_73;
                MR_Word Var_75;
                MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8;

                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (N_104));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_75));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                next_value_of_tscc_proc_4_input_2_Type_7 = EnumType_10;
                next_value_of_tscc_proc_4_input_3_Expr_8 = Var_73;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer N_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "( ");
                ml_backend__mlds_to_cs_data__output_int_const_for_csharp_3_p_0(N_103);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Float FloatVal_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_14);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2((MR_Integer) 2, String_15);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word String_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 2, String_105);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Lang_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String Value_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 3))));
                MR_Word Var_63;

                {
                  Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Lang_11));
                  MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
                }
                mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/4", (MR_String) "language other than C#.");
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_5, Type_13);
                mercury__io__write_string_3_p_0((MR_String) ") ");
                mercury__io__write_string_3_p_0(Value_12);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word TargetPrefixes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String NamedConst_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), TargetPrefixes_16, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0(Var_47);
                mercury__io__write_string_3_p_0(NamedConst_17);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word VarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String VarNameStr_21;

                ml_backend__mlds_to_cs_name__local_var_name_to_string_for_csharp_2_p_0(VarName_20, &VarNameStr_21);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(VarNameStr_21);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_23;
                MR_Word Var_39;
                MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String VarNameStr_107;

                Var_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
                MangledModuleName_23 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_39);
                mercury__io__write_string_3_p_0(MangledModuleName_23);
                mercury__io__write_string_3_p_0((MR_String) ".");
                ml_backend__mlds_to_cs_name__global_var_name_to_string_for_csharp_2_p_0(VarName_106, &VarNameStr_107);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(VarNameStr_107);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word RttiId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String RttiAddrName_25;
                MR_Word Var_34;
                MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_109;

                Var_34 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
                MangledModuleName_109 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_34);
                mercury__io__write_string_3_p_0(MangledModuleName_109);
                mercury__io__write_string_3_p_0((MR_String) ".");
                backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_24, &RttiAddrName_25);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(RttiAddrName_25);
              }
              break;
            case (MR_Integer) 19:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/4", (MR_String) "NYI: mlconst_data_addr_tabling");
                  return;
                }
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Initializer_28;
                MR_Word Type_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                Initializer_28 = ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(Info_5, Type_110);
                mercury__io__write_string_3_p_0(Initializer_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_6:;
    {
      MR_Word Info_6 = tscc_proc_6_input_1_Info_6;
      MR_Word Expr_8 = tscc_proc_6_input_2_Expr_8;
      MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
      tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
      goto top_of_proc_2;
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_4_p_0(
  MR_Word tscc_proc_5_input_1_Info_5,
  MR_Word tscc_proc_5_input_2_Const_6)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Expr_8;
    MR_Word tscc_proc_6_input_1_Info_6;
    MR_Word tscc_proc_6_input_2_Expr_8;

    // The code for TSCC PROC 5: pred ml_backend.mlds_to_cs_data.output_rval_const_for_csharp/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_cs_data.output_lval_for_csharp/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_for_csharp/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_cs_data.output_bracketed_rval_for_csharp/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_cs_data.output_cast_rval_for_csharp/5-0
    ;
    // proc 5 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_const_for_csharp/4-0
    ;
    // proc 6 in TSCC: pred ml_backend.mlds_to_cs_data.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/5-0
    ;
    ;
    goto top_of_proc_5;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
            MR_Word FieldType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

            if (((MR_tag((MR_Word) FieldId_11)) == (MR_Integer) 1))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 0))));
              MR_Word CtorType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 1))));
              MR_Word FieldVarName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2))));

              succeeded = (FieldVarName_22 == (MR_Word) ((MR_Unsigned) 4U));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 2))
                {
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0))));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                  }
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              ml_backend__mlds_to_cs_name__output_field_var_name_for_csharp_3_p_0(FieldVarName_22);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_11, (MR_Integer) 0))));

              if ((FieldType_12 == (MR_Word) ((MR_Unsigned) 24U)))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_12)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 0);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_lval_for_csharp\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((object[]) ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_27 = (MR_String) (GlobalVarRef_26);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_3_p_0(LocalVarName_28);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_name__output_maybe_qualified_global_var_name_for_csharp_4_p_0(Info_5, QualGlobalVarName_30);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_5 = tscc_proc_2_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/4", (MR_String) "ml_scalar_common");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_21 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 0))));
            MR_Integer TypeNum_24;
            MR_Integer RowNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 3))));
            MR_Word ModuleSymName_26;
            MR_String MangledModuleName_27;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 2))));
            MR_String Var_114;
            MR_String Var_124;

            TypeNum_24 = (MR_Integer) (Var_49);
            ModuleSymName_26 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
            MangledModuleName_27 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_27);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_24, &Var_114);
            mercury__io__write_string_3_p_0(Var_114);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), RowNum_25, &Var_124);
            mercury__io__write_string_3_p_0(Var_124);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/4", (MR_String) "tags not supported in C#");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_5_input_1_Info_5 = Info_5;
                MR_Word next_value_of_tscc_proc_5_input_2_Const_6 = Const_11;

                // direct tailcall eliminated
                ;
                tscc_proc_5_input_1_Info_5 = next_value_of_tscc_proc_5_input_1_Info_5;
                tscc_proc_5_input_2_Const_6 = next_value_of_tscc_proc_5_input_2_Const_6;
                goto top_of_proc_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word Var_67;
                MR_Word Var_88;

                succeeded = ((((MR_tag((MR_Word) Type_79)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 1))));
                  Var_88 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_67, Var_88);
                }
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "builtin.comparison_result_object[(int) ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, SubRval_80);
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_6_input_1_Info_6 = Info_5;
                  MR_Word next_value_of_tscc_proc_6_input_2_Expr_8 = SubRval_80;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_6_input_1_Info_6 = next_value_of_tscc_proc_6_input_1_Info_6;
                  tscc_proc_6_input_2_Expr_8 = next_value_of_tscc_proc_6_input_2_Expr_8;
                  goto top_of_proc_6;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_5_p_0(Info_5, Type_81, SubRval_82);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs_data__output_unop_for_csharp_5_p_0(Info_5, Unop_16, SubRval_83);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Op_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_cs_data__output_binop_for_csharp_6_p_0(Info_5, Op_17, SubRvalA_18, SubRvalB_19);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Info_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "out ");
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_84;
                tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 3))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 2))));
                MR_Integer TypeNum_87 = (MR_Integer) (Var_38);
                MR_String Var_92;
                MR_String Var_102;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_87, &Var_92);
                mercury__io__write_string_3_p_0(Var_92);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), StartRowNum_31, &Var_102);
                mercury__io__write_string_3_p_0(Var_102);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, RowRval_29);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
              {
                mercury__io__write_string_3_p_0((MR_String) "this");
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 2))
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
        tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
        goto top_of_proc_2;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Info_6 = tscc_proc_4_input_1_Info_6;
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) ((MR_Unsigned) 36U));
      MR_Integer N_10;
      MR_Word Var_15;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 2);
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_15, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Integer Var_48;

        ml_backend__mlds_to_cs_util__maybe_output_comment_for_csharp_4_p_0(Info_6, (MR_String) "cast");
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_48 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_48);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) ((MR_Unsigned) 32U)))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0))) == (MR_Integer) 0))))
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));
          MR_Word Var_27;

          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          ml_backend__mlds_to_cs_util__maybe_output_comment_for_csharp_4_p_0(Info_6, (MR_String) "cast");
          mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_45;

          succeeded = ml_backend__mlds_to_cs_type__csharp_builtin_type_2_p_0(Type_7, &Var_45);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_45) == 0);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
        }
      }
      goto tscc_end;
    }
  top_of_proc_5:;
    {
      MR_Word Info_5 = tscc_proc_5_input_1_Info_5;
      MR_Word Const_6 = tscc_proc_5_input_2_Const_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Const_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Const_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "true");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "false");
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CodeAddr_18 = (MR_Word) (MR_body((MR_Word) (Const_6), (MR_Integer) 1));
            MR_String Name_19;
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
            MR_Box conv0_Name_19;

            mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, ((MR_Box) (CodeAddr_18)), &conv0_Name_19);
            Name_19 = ((MR_String) (conv0_Name_19));
            mercury__io__write_string_3_p_0(Name_19);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

            ml_backend__mlds_to_cs_data__output_int_const_for_csharp_3_p_0(N_8);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned U_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_data__output_uint_const_for_csharp_3_p_0(U_9);
              }
              break;
            case (MR_Integer) 1:
              {
                int8_t N_95 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int8_const_for_csharp_3_p_0(N_95);
              }
              break;
            case (MR_Integer) 2:
              {
                uint8_t N_96 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_3_p_0(N_96);
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t N_97 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int16_const_for_csharp_3_p_0(N_97);
              }
              break;
            case (MR_Integer) 4:
              {
                uint16_t N_98 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint16_const_for_csharp_3_p_0(N_98);
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t N_99 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int32_const_for_csharp_3_p_0(N_99);
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t N_100 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint32_const_for_csharp_3_p_0(N_100);
              }
              break;
            case (MR_Integer) 7:
              {
                int64_t N_101 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int64_const_for_csharp_3_p_0(N_101);
              }
              break;
            case (MR_Integer) 8:
              {
                uint64_t N_102 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_3_p_0(N_102);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word EnumType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Var_73;
                MR_Word Var_75;
                MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8;

                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (N_104));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_75));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                next_value_of_tscc_proc_4_input_2_Type_7 = EnumType_10;
                next_value_of_tscc_proc_4_input_3_Expr_8 = Var_73;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer N_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "( ");
                ml_backend__mlds_to_cs_data__output_int_const_for_csharp_3_p_0(N_103);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Float FloatVal_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_14);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2((MR_Integer) 2, String_15);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word String_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 2, String_105);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Lang_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String Value_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 3))));
                MR_Word Var_63;

                {
                  Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Lang_11));
                  MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
                }
                mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/4", (MR_String) "language other than C#.");
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_5, Type_13);
                mercury__io__write_string_3_p_0((MR_String) ") ");
                mercury__io__write_string_3_p_0(Value_12);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word TargetPrefixes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String NamedConst_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), TargetPrefixes_16, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0(Var_47);
                mercury__io__write_string_3_p_0(NamedConst_17);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word VarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String VarNameStr_21;

                ml_backend__mlds_to_cs_name__local_var_name_to_string_for_csharp_2_p_0(VarName_20, &VarNameStr_21);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(VarNameStr_21);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_23;
                MR_Word Var_39;
                MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String VarNameStr_107;

                Var_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
                MangledModuleName_23 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_39);
                mercury__io__write_string_3_p_0(MangledModuleName_23);
                mercury__io__write_string_3_p_0((MR_String) ".");
                ml_backend__mlds_to_cs_name__global_var_name_to_string_for_csharp_2_p_0(VarName_106, &VarNameStr_107);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(VarNameStr_107);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word RttiId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String RttiAddrName_25;
                MR_Word Var_34;
                MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_109;

                Var_34 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
                MangledModuleName_109 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_34);
                mercury__io__write_string_3_p_0(MangledModuleName_109);
                mercury__io__write_string_3_p_0((MR_String) ".");
                backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_24, &RttiAddrName_25);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(RttiAddrName_25);
              }
              break;
            case (MR_Integer) 19:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/4", (MR_String) "NYI: mlconst_data_addr_tabling");
                  return;
                }
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Initializer_28;
                MR_Word Type_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                Initializer_28 = ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(Info_5, Type_110);
                mercury__io__write_string_3_p_0(Initializer_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_6:;
    {
      MR_Word Info_6 = tscc_proc_6_input_1_Info_6;
      MR_Word Expr_8 = tscc_proc_6_input_2_Expr_8;
      MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
      tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
      goto top_of_proc_2;
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_111_120_101_100_95_114_118_97_108_95_102_111_114_95_99_115_104_97_114_112_95_95_91_50_93_95_48_5_p_0(
  MR_Word tscc_proc_6_input_1_Info_6,
  MR_Word tscc_proc_6_input_2_Expr_8)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Expr_8;
    MR_Word tscc_proc_5_input_1_Info_5;
    MR_Word tscc_proc_5_input_2_Const_6;

    // The code for TSCC PROC 6: pred ml_backend.mlds_to_cs_data.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_cs_data.output_lval_for_csharp/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_for_csharp/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_cs_data.output_bracketed_rval_for_csharp/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_cs_data.output_cast_rval_for_csharp/5-0
    ;
    // proc 5 in TSCC: pred ml_backend.mlds_to_cs_data.output_rval_const_for_csharp/4-0
    ;
    // proc 6 in TSCC: pred ml_backend.mlds_to_cs_data.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/5-0
    ;
    ;
    goto top_of_proc_6;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
            MR_Word FieldType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

            if (((MR_tag((MR_Word) FieldId_11)) == (MR_Integer) 1))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 0))));
              MR_Word CtorType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 1))));
              MR_Word FieldVarName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2))));

              succeeded = (FieldVarName_22 == (MR_Word) ((MR_Unsigned) 4U));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 2))
                {
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0))));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                  }
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              ml_backend__mlds_to_cs_name__output_field_var_name_for_csharp_3_p_0(FieldVarName_22);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_11, (MR_Integer) 0))));

              if ((FieldType_12 == (MR_Word) ((MR_Unsigned) 24U)))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_12)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 0);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_lval_for_csharp\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((object[]) ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_27 = (MR_String) (GlobalVarRef_26);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_3_p_0(LocalVarName_28);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_name__output_maybe_qualified_global_var_name_for_csharp_4_p_0(Info_5, QualGlobalVarName_30);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_5 = tscc_proc_2_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/4", (MR_String) "ml_scalar_common");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_21 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 0))));
            MR_Integer TypeNum_24;
            MR_Integer RowNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 3))));
            MR_Word ModuleSymName_26;
            MR_String MangledModuleName_27;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 2))));
            MR_String Var_114;
            MR_String Var_124;

            TypeNum_24 = (MR_Integer) (Var_49);
            ModuleSymName_26 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
            MangledModuleName_27 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_27);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_24, &Var_114);
            mercury__io__write_string_3_p_0(Var_114);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), RowNum_25, &Var_124);
            mercury__io__write_string_3_p_0(Var_124);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_for_csharp\'/4", (MR_String) "tags not supported in C#");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_5_input_1_Info_5 = Info_5;
                MR_Word next_value_of_tscc_proc_5_input_2_Const_6 = Const_11;

                // direct tailcall eliminated
                ;
                tscc_proc_5_input_1_Info_5 = next_value_of_tscc_proc_5_input_1_Info_5;
                tscc_proc_5_input_2_Const_6 = next_value_of_tscc_proc_5_input_2_Const_6;
                goto top_of_proc_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word Var_67;
                MR_Word Var_88;

                succeeded = ((((MR_tag((MR_Word) Type_79)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 1))));
                  Var_88 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_67, Var_88);
                }
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "builtin.comparison_result_object[(int) ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, SubRval_80);
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_6_input_1_Info_6 = Info_5;
                  MR_Word next_value_of_tscc_proc_6_input_2_Expr_8 = SubRval_80;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_6_input_1_Info_6 = next_value_of_tscc_proc_6_input_1_Info_6;
                  tscc_proc_6_input_2_Expr_8 = next_value_of_tscc_proc_6_input_2_Expr_8;
                  goto top_of_proc_6;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_5_p_0(Info_5, Type_81, SubRval_82);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs_data__output_unop_for_csharp_5_p_0(Info_5, Unop_16, SubRval_83);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Op_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_cs_data__output_binop_for_csharp_6_p_0(Info_5, Op_17, SubRvalA_18, SubRvalB_19);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Info_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "out ");
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_84;
                tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 3))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 2))));
                MR_Integer TypeNum_87 = (MR_Integer) (Var_38);
                MR_String Var_92;
                MR_String Var_102;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), TypeNum_87, &Var_92);
                mercury__io__write_string_3_p_0(Var_92);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), StartRowNum_31, &Var_102);
                mercury__io__write_string_3_p_0(Var_102);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, RowRval_29);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
              {
                mercury__io__write_string_3_p_0((MR_String) "this");
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 2))
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
        tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
        goto top_of_proc_2;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Info_6 = tscc_proc_4_input_1_Info_6;
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) ((MR_Unsigned) 36U));
      MR_Integer N_10;
      MR_Word Var_15;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 2);
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_15, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Integer Var_48;

        ml_backend__mlds_to_cs_util__maybe_output_comment_for_csharp_4_p_0(Info_6, (MR_String) "cast");
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_48 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_48);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) ((MR_Unsigned) 32U)))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0))) == (MR_Integer) 0))))
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));
          MR_Word Var_27;

          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          ml_backend__mlds_to_cs_util__maybe_output_comment_for_csharp_4_p_0(Info_6, (MR_String) "cast");
          mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_45;

          succeeded = ml_backend__mlds_to_cs_type__csharp_builtin_type_2_p_0(Type_7, &Var_45);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_45) == 0);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
        }
      }
      goto tscc_end;
    }
  top_of_proc_5:;
    {
      MR_Word Info_5 = tscc_proc_5_input_1_Info_5;
      MR_Word Const_6 = tscc_proc_5_input_2_Const_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Const_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Const_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "true");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "false");
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CodeAddr_18 = (MR_Word) (MR_body((MR_Word) (Const_6), (MR_Integer) 1));
            MR_String Name_19;
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
            MR_Box conv0_Name_19;

            mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, ((MR_Box) (CodeAddr_18)), &conv0_Name_19);
            Name_19 = ((MR_String) (conv0_Name_19));
            mercury__io__write_string_3_p_0(Name_19);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

            ml_backend__mlds_to_cs_data__output_int_const_for_csharp_3_p_0(N_8);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned U_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_data__output_uint_const_for_csharp_3_p_0(U_9);
              }
              break;
            case (MR_Integer) 1:
              {
                int8_t N_95 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int8_const_for_csharp_3_p_0(N_95);
              }
              break;
            case (MR_Integer) 2:
              {
                uint8_t N_96 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_3_p_0(N_96);
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t N_97 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int16_const_for_csharp_3_p_0(N_97);
              }
              break;
            case (MR_Integer) 4:
              {
                uint16_t N_98 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint16_const_for_csharp_3_p_0(N_98);
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t N_99 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int32_const_for_csharp_3_p_0(N_99);
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t N_100 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint32_const_for_csharp_3_p_0(N_100);
              }
              break;
            case (MR_Integer) 7:
              {
                int64_t N_101 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_int64_const_for_csharp_3_p_0(N_101);
              }
              break;
            case (MR_Integer) 8:
              {
                uint64_t N_102 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_3_p_0(N_102);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word EnumType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Var_73;
                MR_Word Var_75;
                MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8;

                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (N_104));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_75));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                next_value_of_tscc_proc_4_input_2_Type_7 = EnumType_10;
                next_value_of_tscc_proc_4_input_3_Expr_8 = Var_73;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer N_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "( ");
                ml_backend__mlds_to_cs_data__output_int_const_for_csharp_3_p_0(N_103);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Float FloatVal_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_14);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2((MR_Integer) 2, String_15);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word String_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 2, String_105);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Lang_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String Value_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 3))));
                MR_Word Var_63;

                {
                  Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_data_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__mlds_to_cs_data__output_rval_const_for_csharp_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Lang_11));
                  MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
                }
                mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/4", (MR_String) "language other than C#.");
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_5, Type_13);
                mercury__io__write_string_3_p_0((MR_String) ") ");
                mercury__io__write_string_3_p_0(Value_12);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word TargetPrefixes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String NamedConst_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), TargetPrefixes_16, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0(Var_47);
                mercury__io__write_string_3_p_0(NamedConst_17);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word VarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String VarNameStr_21;

                ml_backend__mlds_to_cs_name__local_var_name_to_string_for_csharp_2_p_0(VarName_20, &VarNameStr_21);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(VarNameStr_21);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_23;
                MR_Word Var_39;
                MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String VarNameStr_107;

                Var_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
                MangledModuleName_23 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_39);
                mercury__io__write_string_3_p_0(MangledModuleName_23);
                mercury__io__write_string_3_p_0((MR_String) ".");
                ml_backend__mlds_to_cs_name__global_var_name_to_string_for_csharp_2_p_0(VarName_106, &VarNameStr_107);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(VarNameStr_107);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word RttiId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String RttiAddrName_25;
                MR_Word Var_34;
                MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_109;

                Var_34 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
                MangledModuleName_109 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_34);
                mercury__io__write_string_3_p_0(MangledModuleName_109);
                mercury__io__write_string_3_p_0((MR_String) ".");
                backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_24, &RttiAddrName_25);
                ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(RttiAddrName_25);
              }
              break;
            case (MR_Integer) 19:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_rval_const_for_csharp\'/4", (MR_String) "NYI: mlconst_data_addr_tabling");
                  return;
                }
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Initializer_28;
                MR_Word Type_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                Initializer_28 = ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(Info_5, Type_110);
                mercury__io__write_string_3_p_0(Initializer_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_6:;
    {
      MR_Word Info_6 = tscc_proc_6_input_1_Info_6;
      MR_Word Expr_8 = tscc_proc_6_input_2_Expr_8;
      MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Expr_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
      tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
      goto top_of_proc_2;
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_binop_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Op_8,
  MR_Word X_9,
  MR_Word Y_10)
{
  switch (MR_tag((MR_Word) Op_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Op_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ".Equals(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            mercury__io__write_string_3_p_0((MR_String) "!=");
            mercury__io__write_string_3_p_0((MR_String) " 0)");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            mercury__io__write_string_3_p_0((MR_String) "<");
            mercury__io__write_string_3_p_0((MR_String) " 0)");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            mercury__io__write_string_3_p_0((MR_String) ">");
            mercury__io__write_string_3_p_0((MR_String) " 0)");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            mercury__io__write_string_3_p_0((MR_String) "<=");
            mercury__io__write_string_3_p_0((MR_String) " 0)");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            mercury__io__write_string_3_p_0((MR_String) ">=");
            mercury__io__write_string_3_p_0((MR_String) " 0)");
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) "))");
          }
          break;
        case (MR_Integer) 11:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 13:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 14:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 15:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 16:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 17:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 18:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 19:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 20:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 21:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 22:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 23:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 24:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 25:
          {
            mercury__io__write_string_3_p_0((MR_String) "System.Object.ReferenceEquals(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 26:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 27:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_1925 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Op_8, (MR_Integer) 0))));

        switch (Var_1925) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_3_p_0((MR_String) "(short)(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_3_p_0((MR_String) "(byte)(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_1929 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Op_8, (MR_Integer) 0))));

        switch (Var_1929) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_3_p_0((MR_String) "(short)(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_3_p_0((MR_String) "(byte)(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_1928 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1928) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_1926 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1926) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_1927 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1927) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_1930 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1930) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_1931 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1931) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_1922 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1922) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Var_1923 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1923) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)((byte)");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " (byte)");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Var_1924 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1924) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 10:
          {
            ml_backend__mlds_to_cs_data__output_bracketed_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) "[");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 11:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 13:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 14:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 15:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_unop_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word UnaryOp_7,
  MR_Word Expr_8)
{
  switch (MR_tag((MR_Word) UnaryOp_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UnaryOp_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* tag */  0");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* strip_tag */ ");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* mkbody */ ");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* unmkbody */ ");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__io__write_string_3_p_0((MR_String) "!");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash2_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash3_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash4_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash5_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash6_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 15:
        case (MR_Integer) 16:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_unop_for_csharp\'/5", (MR_String) "invalid unary operator");
              return;
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnaryOp_7, (MR_Integer) 0))));

        switch (Var_156) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_3_p_0((MR_String) "(short)");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "(sbyte)");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "(ushort)");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_3_p_0((MR_String) "(byte)");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_unboxed_rval_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word Expr_8)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "((");
    ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_6, Type_7);
    mercury__io__write_string_3_p_0((MR_String) ") ");
    ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs_data__get_default_initializer_for_csharp_2_f_0(
  MR_Word Info_4,
  MR_Word Type_5)
{
  {
    MR_String Initializer_6;

    switch (MR_tag((MR_Word) Type_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Type_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
            Initializer_6 = (MR_String) "null";
            break;
          case (MR_Integer) 1:
            Initializer_6 = (MR_String) "false";
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 4:
            Initializer_6 = (MR_String) "0";
            break;
          case (MR_Integer) 3:
            Initializer_6 = (MR_String) "0U";
            break;
          case (MR_Integer) 5:
            Initializer_6 = (MR_String) "\'\\u0000\'";
            break;
          case (MR_Integer) 10:
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs_data.get_default_initializer_for_csharp\'/2", (MR_String) "variable has unknown_type");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Initializer_6 = (MR_String) "null";
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CtorCat_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 3))));

              switch (MR_tag((MR_Word) CtorCat_9)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(CtorCat_9)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Initializer_6 = (MR_String) "null";
                      break;
                    case (MR_Integer) 1:
                      Initializer_6 = (MR_String) "null";
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String TypeString_13;
                        MR_String Var_38;
                        MR_Word Var_14;

                        ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_4, Type_5, &TypeString_13, &Var_14);
                        Var_38 = mercury__string__f_43_43_2_f_0(TypeString_13, (MR_String) ")");
                        Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_38);
                      }
                      break;
                    case (MR_Integer) 3:
                      Initializer_6 = (MR_String) "null";
                      break;
                    case (MR_Integer) 4:
                      Initializer_6 = (MR_String) "null";
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_9, (MR_Integer) 0))));

                    switch (MR_tag((MR_Word) Var_63)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(Var_63)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            Initializer_6 = (MR_String) "0";
                            break;
                          case (MR_Integer) 1:
                            Initializer_6 = (MR_String) "\'\\u0000\'";
                            break;
                          case (MR_Integer) 2:
                            Initializer_6 = (MR_String) "null";
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 0))));

                          Initializer_6 = ((&ml_backend__mlds_to_cs_data_vector_common_2[0 + Var_64]))->ml_backend__mlds_to_cs_data__vector_common_type_2_0__vct_2_f_0;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String TypeString_13;
                    MR_String Var_38;
                    MR_Word Var_14;

                    ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_4, Type_5, &TypeString_13, &Var_14);
                    Var_38 = mercury__string__f_43_43_2_f_0(TypeString_13, (MR_String) ")");
                    Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_38);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_9, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Initializer_6 = (MR_String) "null";
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String TypeString_13;
                        MR_String Var_38;
                        MR_Word Var_14;

                        ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_4, Type_5, &TypeString_13, &Var_14);
                        Var_38 = mercury__string__f_43_43_2_f_0(TypeString_13, (MR_String) ")");
                        Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_38);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            Initializer_6 = (MR_String) "null";
            break;
          case (MR_Integer) 3:
            {
              MR_Word ForeignType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ForeignType_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 3:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs_data.get_default_initializer_for_csharp\'/2", (MR_String) "wrong foreign language type");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String CsharpType_25;
                    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ForeignType_24, (MR_Integer) 0))));
                    MR_String Var_35;

                    CsharpType_25 = (MR_String) (Var_33);
                    Var_35 = mercury__string__f_43_43_2_f_0(CsharpType_25, (MR_String) ")");
                    Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_35);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return Initializer_6;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_uint64_const_for_csharp_3_p_0(
  uint64_t U64_4)
{
  {
    mercury__io__write_uint64_3_p_0(U64_4);
    mercury__io__write_string_3_p_0((MR_String) "UL");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_int64_const_for_csharp_3_p_0(
  int64_t I64_4)
{
  {
    mercury__io__write_int64_3_p_0(I64_4);
    mercury__io__write_string_3_p_0((MR_String) "L");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_uint32_const_for_csharp_3_p_0(
  uint32_t U32_4)
{
  {
    mercury__io__write_uint32_3_p_0(U32_4);
    mercury__io__write_string_3_p_0((MR_String) "U");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_int32_const_for_csharp_3_p_0(
  int32_t I32_4)
{
  mercury__io__write_int32_3_p_0(I32_4);
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_uint16_const_for_csharp_3_p_0(
  uint16_t U16_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "(ushort)");
    mercury__io__write_uint16_3_p_0(U16_4);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_int16_const_for_csharp_3_p_0(
  int16_t I16_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "(short)");
    mercury__io__write_int16_3_p_0(I16_4);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_uint8_const_for_csharp_3_p_0(
  uint8_t U8_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "(byte)");
    mercury__io__write_uint8_3_p_0(U8_4);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_int8_const_for_csharp_3_p_0(
  int8_t I8_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "(sbyte)");
    mercury__io__write_int8_3_p_0(I8_4);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_uint_const_for_csharp_3_p_0(
  MR_Unsigned U_4)
{
  {
    mercury__io__write_uint_3_p_0(U_4);
    mercury__io__write_string_3_p_0((MR_String) "U");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_int_const_for_csharp_3_p_0(
  MR_Integer N_4)
{
  {
    MR_bool succeeded = (N_4 > (MR_Integer) 0);
    MR_Integer Var_9;
    MR_Integer Var_10;

    if (succeeded)
    {
      Var_10 = (MR_Integer) 31;
      Var_9 = mercury__int__f_62_62_2_f_0(N_4, Var_10);
      succeeded = (Var_9 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Integer Var_15 = (N_4 & (MR_Integer) 4294967295);
      MR_String Var_22;

      mercury__io__write_string_3_p_0((MR_String) "unchecked((int) 0x");
      mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_cs_data_scalar_common_1[0]), (MR_Integer) 2, Var_15, &Var_22);
      mercury__io__write_string_3_p_0(Var_22);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    else
      mercury__io__write_int_3_p_0(N_4);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_data__output_binary_op_for_csharp_3_p_0(
  MR_Word Op_4)
{
  switch (MR_tag((MR_Word) Op_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Op_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "&&");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "||");
          }
          break;
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
        case (MR_Integer) 22:
        case (MR_Integer) 23:
        case (MR_Integer) 24:
        case (MR_Integer) 25:
        case (MR_Integer) 26:
        case (MR_Integer) 27:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_binary_op_for_csharp\'/3", (MR_String) "invalid binary operator");
              return;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__io__write_string_3_p_0((MR_String) "+");
          }
          break;
        case (MR_Integer) 13:
          {
            mercury__io__write_string_3_p_0((MR_String) "-");
          }
          break;
        case (MR_Integer) 14:
          {
            mercury__io__write_string_3_p_0((MR_String) "*");
          }
          break;
        case (MR_Integer) 15:
          {
            mercury__io__write_string_3_p_0((MR_String) "/");
          }
          break;
        case (MR_Integer) 16:
          {
            mercury__io__write_string_3_p_0((MR_String) "==");
          }
          break;
        case (MR_Integer) 17:
          {
            mercury__io__write_string_3_p_0((MR_String) "!=");
          }
          break;
        case (MR_Integer) 18:
          {
            mercury__io__write_string_3_p_0((MR_String) "<");
          }
          break;
        case (MR_Integer) 19:
          {
            mercury__io__write_string_3_p_0((MR_String) ">");
          }
          break;
        case (MR_Integer) 20:
          {
            mercury__io__write_string_3_p_0((MR_String) "<=");
          }
          break;
        case (MR_Integer) 21:
          {
            mercury__io__write_string_3_p_0((MR_String) ">=");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) "+");
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__io__write_string_3_p_0((MR_String) "-");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Op_4, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "*");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "/");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_3_p_0((MR_String) "%");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_string_3_p_0((MR_String) "<<");
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__io__write_string_3_p_0((MR_String) ">>");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_3_p_0((MR_String) "&");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_3_p_0((MR_String) "|");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_3_p_0((MR_String) "^");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_3_p_0((MR_String) "==");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_3_p_0((MR_String) "!=");
          }
          break;
        case (MR_Integer) 10:
        case (MR_Integer) 11:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_data.output_binary_op_for_csharp\'/3", (MR_String) "invalid binary operator");
              return;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__io__write_string_3_p_0((MR_String) "<");
          }
          break;
        case (MR_Integer) 13:
          {
            mercury__io__write_string_3_p_0((MR_String) ">");
          }
          break;
        case (MR_Integer) 14:
          {
            mercury__io__write_string_3_p_0((MR_String) "<=");
          }
          break;
        case (MR_Integer) 15:
          {
            mercury__io__write_string_3_p_0((MR_String) ">=");
          }
          break;
      }
      break;
  }
}

void mercury__ml_backend__mlds_to_cs_data__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_data__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_cs_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_data__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_data.
