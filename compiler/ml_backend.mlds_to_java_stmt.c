/*
** Automatically generated from `mlds_to_java_stmt.m'
** by the Mercury compiler,
** version rotd-2018-09-25
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


// :- module ml_backend.mlds_to_java_stmt.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_java_stmt__init
ENDINIT
*/

#include "ml_backend.mlds_to_java_stmt.mih"


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
#include "ml_backend.mlds_to_java_data.mih"
#include "ml_backend.mlds_to_java_func.mih"
#include "ml_backend.mlds_to_java_name.mih"
#include "ml_backend.mlds_to_java_type.mih"
#include "ml_backend.mlds_to_java_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_stmt__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static void MR_CALL 
ml_backend__mlds_to_java_stmt__IntroducedFrom__pred__output_stmt_return_for_java__499__1_4_p_0(
  MR_Word Info_8,
  MR_Word LambdaHeadVar__1_45);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_target_code_component_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word TargetCode_6);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_local_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word LocalVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_switch_cases_for_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_switch_cases_for_java_9_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word FuncInfo_3,
  MR_Word Context_4,
  MR_Word HeadVar__5_5,
  MR_Word Default_6,
  MR_Word * ExitMethods_7);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_switch_default_for_java_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word FuncInfo_11,
  MR_Word Context_12,
  MR_Word Default_13,
  MR_Word * ExitMethods_14);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_atomic_stmt_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_atomic_stmt_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word AtomicStmt_9,
  MR_Word Context_10);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_init_args_for_java_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_case_cond_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Context_9,
  MR_Word Match_10);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_assign_results_8_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer ResultIndex_4,
  MR_Integer Indent_5,
  MR_Word Context_6);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_unboxed_result_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Integer ResultIndex_8);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_args_as_array_5_p_0(
  MR_Word Info_6,
  MR_Word CallArgs_7,
  MR_Word CallArgTypes_8);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_boxed_args_5_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
ml_backend__mlds_to_java_stmt__while_exit_methods_for_java_2_f_0(
  MR_Word Cond_4,
  MR_Word BlockExitMethods_5);


static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_1[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_2[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_3[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_4[3][7];

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_5[3][9];




static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_stmt_scalar_common_2[0])))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_4[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_stmt__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_5[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_stmt__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)
  }
};

static void MR_CALL 
ml_backend__mlds_to_java_stmt__IntroducedFrom__pred__output_stmt_return_for_java__499__1_4_p_0(
  MR_Word Info_8,
  MR_Word LambdaHeadVar__1_45)
{
  {
    MR_Word Type_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_45, (MR_Integer) 0))));
    MR_Word Result_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_45, (MR_Integer) 1))));

    ml_backend__mlds_to_java_data__output_boxed_rval_for_java_5_p_0(Info_8, Type_65, Result_66);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_target_code_component_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word TargetCode_6)
{
  switch (MR_tag((MR_Word) TargetCode_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FuncName_15 = (MR_Word) (MR_body((MR_Word) (TargetCode_6), (MR_Integer) 0));

        ml_backend__mlds_to_java_name__output_maybe_qualified_function_name_for_java_4_p_0(Info_5, FuncName_15);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CodeString_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), TargetCode_6, (MR_Integer) 0))));
        MR_Word MaybeUserContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetCode_6, (MR_Integer) 1))));

        if ((MaybeUserContext_9 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__io__write_string_3_p_0(CodeString_8);
        else
        {
          MR_Word ProgContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUserContext_9, (MR_Integer) 0))));

          ml_backend__mlds_to_java_util__write_string_with_context_block_6_p_0(Info_5, (MR_Integer) 0, CodeString_8, ProgContext_10);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String CodeString_30 = ((MR_String) ((MR_hl_field(MR_mktag(2), TargetCode_6, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0(CodeString_30);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 1))));

            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, Rval_11);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 1))));

            ml_backend__mlds_to_java_data__output_lval_for_java_4_p_0(Info_5, Lval_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 1))));
            MR_Word InfoGenerics_14;
            MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
            MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
            MR_String Var_36 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3))));
            MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
            MR_Word Var_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5))) & (MR_Integer) 3);
            MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6))));
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));

            {
              InfoGenerics_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InfoGenerics_14, 0) = ((MR_Box) (Var_31));
              MR_hl_field(MR_mktag(0), InfoGenerics_14, 1) = (MR_Box) (packed_word_0);
              MR_hl_field(MR_mktag(0), InfoGenerics_14, 2) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(0), InfoGenerics_14, 3) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(0), InfoGenerics_14, 4) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), InfoGenerics_14, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) (Var_39)));
              MR_hl_field(MR_mktag(0), InfoGenerics_14, 6) = ((MR_Box) (Var_40));
            }
            ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(InfoGenerics_14, Type_13);
          }
          break;
        case (MR_Integer) 3:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_target_code_component_for_java\'/4", (MR_String) "target_code_alloc_id not implemented");
              return;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_local_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word LocalVarDefn_10)
{
  {
    MR_Word LocalVarName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 0))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 1))));
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 2))));
    MR_Word Initializer_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 3))));
    MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

    ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_19, (MR_Integer) 2, Context_13, Indent_8);
    ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_7, Type_14);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    ml_backend__mlds_to_java_name__output_local_var_name_for_java_3_p_0(LocalVarName_12);
    ml_backend__mlds_to_java_data__output_initializer_for_java_6_p_0(Info_7, OutputAux_9, Type_14, Initializer_15);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_switch_cases_for_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_stmt__output_case_cond_for_java_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_switch_cases_for_java_9_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word FuncInfo_3,
  MR_Word Context_4,
  MR_Word HeadVar__5_5,
  MR_Word Default_6,
  MR_Word * ExitMethods_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      ml_backend__mlds_to_java_stmt__output_switch_default_for_java_8_p_0(Info_1, Indent_2, FuncInfo_3, Context_4, Default_6, ExitMethods_7);
    else
    {
      MR_Word Case_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Cases_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word CaseExitMethods0_29;
      MR_Word CasesExitMethods_30;
      MR_Word CaseExitMethods_31;
      MR_Word FirstCond_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 0))));
      MR_Word LaterConds_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 1))));
      MR_Word Stmt_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 2))));
      MR_Word StmtExitMethods_55;
      MR_Word Var_57;
      MR_Integer Var_59;
      MR_Box conv0_STATE_VARIABLE_IO_24_58;

      ml_backend__mlds_to_java_stmt__output_case_cond_for_java_6_p_0(Info_1, Indent_2, Context_4, FirstCond_52);
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_switch_cases_for_java_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Info_1));
        MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Indent_2));
        MR_hl_field(MR_mktag(0), Var_57, 5) = ((MR_Box) (Context_4));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, LaterConds_53, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_24_58);
      Var_59 = (MR_Integer) ((MR_Unsigned) Indent_2 + (MR_Unsigned) (MR_Integer) 1);
      ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0(Info_1, Var_59, FuncInfo_3, Stmt_54, &StmtExitMethods_55);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtExitMethods_55);
      if (succeeded)
      {
        MR_Word Var_63 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        MR_Integer Var_65 = (MR_Integer) ((MR_Unsigned) Indent_2 + (MR_Unsigned) (MR_Integer) 1);
        MR_Word Var_70;

        ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_63, (MR_Integer) 2, Context_4, Var_65);
        mercury__io__write_string_3_p_0((MR_String) "break;\n");
        Var_70 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), StmtExitMethods_55, ((MR_Box) ((MR_Integer) 0)));
        CaseExitMethods0_29 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_70, ((MR_Box) ((MR_Integer) 4)));
      }
      else
        CaseExitMethods0_29 = StmtExitMethods_55;
      ml_backend__mlds_to_java_stmt__output_switch_cases_for_java_9_p_0(Info_1, Indent_2, FuncInfo_3, Context_4, Cases_25, Default_6, &CasesExitMethods_30);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)), CaseExitMethods0_29);
      if (succeeded)
      {
        MR_Word Var_37;

        Var_37 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), CaseExitMethods0_29, ((MR_Box) ((MR_Integer) 0)));
        CaseExitMethods_31 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_37, ((MR_Box) ((MR_Integer) 4)));
      }
      else
        CaseExitMethods_31 = CaseExitMethods0_29;
      *ExitMethods_7 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), CaseExitMethods_31, CasesExitMethods_30);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_switch_default_for_java_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word FuncInfo_11,
  MR_Word Context_12,
  MR_Word Default_13,
  MR_Word * ExitMethods_14)
{
  switch (MR_tag((MR_Word) Default_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Default_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            MR_Word Var_24;
            MR_Integer Var_26;

            ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_19, (MR_Integer) 2, Context_12, Indent_10);
            mercury__io__write_string_3_p_0((MR_String) "default: /*NOTREACHED*/\n");
            Var_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            Var_26 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) (MR_Integer) 1);
            ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_24, (MR_Integer) 2, Context_12, Var_26);
            mercury__io__write_string_3_p_0((MR_String) "throw new jmercury.runtime.UnreachableDefault();\n");
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 3)));
          }
          break;
        case (MR_Integer) 1:
          {
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stmt_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Default_13, (MR_Integer) 0))));
        MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        MR_Integer Var_37;

        ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_32, (MR_Integer) 2, Context_12, Indent_10);
        mercury__io__write_string_3_p_0((MR_String) "default:\n");
        Var_37 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) (MR_Integer) 1);
        ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0(Info_9, Var_37, FuncInfo_11, Stmt_16, ExitMethods_14);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_stmt__IntroducedFrom__pred__output_stmt_return_for_java__499__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_func__output_function_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_stmt__output_local_var_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word FuncInfo_10,
  MR_Word Stmt_11,
  MR_Word * ExitMethods_12)
{
  {
    MR_bool succeeded;
    MR_Word Context_14;
    MR_Word Var_61;

    Context_14 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt_11);
    Var_61 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    ml_backend__mlds_to_java_util__output_context_for_java_5_p_0(Var_61, (MR_Integer) 2, Context_14);
    switch (MR_tag((MR_Word) Stmt_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 0))));
          MR_Word FuncDefns_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 1))));
          MR_Word SubStmts_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 2))));
          MR_Word Context_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 3))));
          MR_Integer BlockIndent_141 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
          MR_Word Var_161;

          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
          mercury__io__write_string_3_p_0((MR_String) "{\n");
          if (!((LocalVarDefns_136 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word Var_150;
            MR_Box conv0_STATE_VARIABLE_IO_31_151;

            {
              Var_150 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_150, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_150, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_150, 3) = ((MR_Box) (Info_8));
              MR_hl_field(MR_mktag(0), Var_150, 4) = ((MR_Box) (BlockIndent_141));
              MR_hl_field(MR_mktag(0), Var_150, 5) = ((MR_Box) ((MR_Unsigned) 8U));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_150, LocalVarDefns_136, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_31_151);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          if (!((FuncDefns_137 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word Var_155;
            MR_Box conv1_STATE_VARIABLE_IO_36_156;

            {
              Var_155 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_155, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_5[1]));
              MR_hl_field(MR_mktag(0), Var_155, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0_2));
              MR_hl_field(MR_mktag(0), Var_155, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_155, 3) = ((MR_Box) (Info_8));
              MR_hl_field(MR_mktag(0), Var_155, 4) = ((MR_Box) (BlockIndent_141));
              MR_hl_field(MR_mktag(0), Var_155, 5) = ((MR_Box) ((MR_Unsigned) 8U));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_155, FuncDefns_137, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_36_156);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          ml_backend__mlds_to_java_stmt__output_statements_for_java_7_p_0(Info_8, BlockIndent_141, FuncInfo_10, SubStmts_138, ExitMethods_12);
          Var_161 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_161, (MR_Integer) 2, Context_139, Indent_9);
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_572 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Cond_573 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 1))));
          MR_Word BodyStmt_574 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 2))));
          MR_Word Context_576 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 4))));
          MR_Integer ScopeIndent_577;

          ml_backend__mlds_to_target_util__scope_indent_3_p_0(BodyStmt_574, Indent_9, &ScopeIndent_577);
          switch (Kind_572) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_585;
                MR_Word BodyInfo_614;
                MR_Word StmtExitMethods_615;
                MR_Word Var_626;
                MR_Word Var_630;
                MR_String Var_631;
                MR_Word Var_632;
                MR_Word Var_633;
                MR_Word Var_635;
                MR_Unsigned packed_word_20;

                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "do\n");
                Var_626 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
                packed_word_20 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
                Var_630 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2))));
                Var_631 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
                Var_632 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));
                Var_633 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
                Var_635 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6))));
                {
                  BodyInfo_614 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), BodyInfo_614, 0) = ((MR_Box) (Var_626));
                  MR_hl_field(MR_mktag(0), BodyInfo_614, 1) = (MR_Box) (packed_word_20);
                  MR_hl_field(MR_mktag(0), BodyInfo_614, 2) = ((MR_Box) (Var_630));
                  MR_hl_field(MR_mktag(0), BodyInfo_614, 3) = ((MR_Box) (Var_631));
                  MR_hl_field(MR_mktag(0), BodyInfo_614, 4) = ((MR_Box) (Var_632));
                  MR_hl_field(MR_mktag(0), BodyInfo_614, 5) = (MR_Box) (((((MR_Unsigned) (Var_633) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                  MR_hl_field(MR_mktag(0), BodyInfo_614, 6) = ((MR_Box) (Var_635));
                }
                ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0(BodyInfo_614, ScopeIndent_577, FuncInfo_10, BodyStmt_574, &StmtExitMethods_615);
                Var_585 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_585, (MR_Integer) 2, Context_576, Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "while (");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_8, Cond_573);
                mercury__io__write_string_3_p_0((MR_String) ");\n");
                *ExitMethods_12 = ml_backend__mlds_to_java_stmt__while_exit_methods_for_java_2_f_0(Cond_573, StmtExitMethods_615);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_599;

                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "while (");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_8, Cond_573);
                mercury__io__write_string_3_p_0((MR_String) ")\n");
                succeeded = ((((MR_tag((MR_Word) Cond_573)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Cond_573, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_599 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Cond_573, (MR_Integer) 1))));
                  succeeded = (Var_599 == (MR_Word) ((MR_Unsigned) 4U));
                }
                if (succeeded)
                {
                  MR_Integer Var_603;

                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                  mercury__io__write_string_3_p_0((MR_String) "{\n");
                  Var_603 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_603);
                  mercury__io__write_string_3_p_0((MR_String) "/* Unreachable code */\n");
                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                  mercury__io__write_string_3_p_0((MR_String) "}\n");
                  *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
                }
                else
                {
                  MR_Word BodyInfo_578;
                  MR_Word StmtExitMethods_579;
                  MR_Word Var_616 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
                  MR_Word Var_620 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2))));
                  MR_String Var_621 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
                  MR_Word Var_622 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));
                  MR_Word Var_623 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
                  MR_Word Var_625 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6))));
                  MR_Unsigned packed_word_24 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));

                  {
                    BodyInfo_578 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), BodyInfo_578, 0) = ((MR_Box) (Var_616));
                    MR_hl_field(MR_mktag(0), BodyInfo_578, 1) = (MR_Box) (packed_word_24);
                    MR_hl_field(MR_mktag(0), BodyInfo_578, 2) = ((MR_Box) (Var_620));
                    MR_hl_field(MR_mktag(0), BodyInfo_578, 3) = ((MR_Box) (Var_621));
                    MR_hl_field(MR_mktag(0), BodyInfo_578, 4) = ((MR_Box) (Var_622));
                    MR_hl_field(MR_mktag(0), BodyInfo_578, 5) = (MR_Box) (((((MR_Unsigned) (Var_623) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                    MR_hl_field(MR_mktag(0), BodyInfo_578, 6) = ((MR_Box) (Var_625));
                  }
                  ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0(BodyInfo_578, ScopeIndent_577, FuncInfo_10, BodyStmt_574, &StmtExitMethods_579);
                  *ExitMethods_12 = ml_backend__mlds_to_java_stmt__while_exit_methods_for_java_2_f_0(Cond_573, StmtExitMethods_579);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Cond_349 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 0))));
          MR_Word Then0_350 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 1))));
          MR_Word MaybeElse_351 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 2))));
          MR_Word Context_352 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 3))));
          MR_Word Then_357;
          MR_Integer ThenScopeIndent_358;
          MR_Word ThenExitMethods_359;
          MR_Word ThenContext_356;
          MR_Word Var_363;

          succeeded = ((MR_tag((MR_Word) MaybeElse_351)) == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Then0_350)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_363 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_350, (MR_Integer) 2))));
              ThenContext_356 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_350, (MR_Integer) 3))));
              succeeded = (Var_363 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
          {
            MR_Word Var_366;

            {
              Var_366 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_366, 0) = ((MR_Box) (Then0_350));
              MR_hl_field(MR_mktag(1), Var_366, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Then_357 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Then_357, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Then_357, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Then_357, 2) = ((MR_Box) (Var_366));
              MR_hl_field(MR_mktag(0), Then_357, 3) = ((MR_Box) (ThenContext_356));
            }
          }
          else
            Then_357 = Then0_350;
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
          mercury__io__write_string_3_p_0((MR_String) "if (");
          ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_8, Cond_349);
          mercury__io__write_string_3_p_0((MR_String) ")\n");
          ml_backend__mlds_to_target_util__scope_indent_3_p_0(Then_357, Indent_9, &ThenScopeIndent_358);
          ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0(Info_8, ThenScopeIndent_358, FuncInfo_10, Then_357, &ThenExitMethods_359);
          if ((MaybeElse_351 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *ExitMethods_12 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ThenExitMethods_359, ((MR_Box) ((MR_Integer) 4)));
          }
          else
          {
            MR_Word Else_360 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_351, (MR_Integer) 0))));
            MR_Integer ElseScopeIndent_361;
            MR_Word ElseExitMethods_362;
            MR_Word Var_376 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

            ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_376, (MR_Integer) 2, Context_352, Indent_9);
            mercury__io__write_string_3_p_0((MR_String) "else\n");
            ml_backend__mlds_to_target_util__scope_indent_3_p_0(Else_360, Indent_9, &ElseScopeIndent_361);
            ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0(Info_8, ElseScopeIndent_361, FuncInfo_10, Else_360, &ElseExitMethods_362);
            *ExitMethods_12 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ThenExitMethods_359, ElseExitMethods_362);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Val_469 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));
              MR_Word Cases_471 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 4))));
              MR_Word Default_472 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 5))));
              MR_Word Context_473 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 6))));
              MR_Word CaseInfo_474;
              MR_Word Var_475 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Integer Var_484;
              MR_Word Var_487;
              MR_Word Var_501;
              MR_Word Var_505;
              MR_String Var_506;
              MR_Word Var_507;
              MR_Word Var_508;
              MR_Word Var_510;
              MR_Unsigned packed_word_15;

              ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_475, (MR_Integer) 2, Context_473, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "switch (");
              ml_backend__mlds_to_java_data__output_rval_maybe_with_enum_for_java_4_p_0(Info_8, Val_469);
              mercury__io__write_string_3_p_0((MR_String) ") {\n");
              Var_501 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
              packed_word_15 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
              Var_505 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2))));
              Var_506 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
              Var_507 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));
              Var_508 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
              Var_510 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6))));
              {
                CaseInfo_474 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CaseInfo_474, 0) = ((MR_Box) (Var_501));
                MR_hl_field(MR_mktag(0), CaseInfo_474, 1) = (MR_Box) (packed_word_15);
                MR_hl_field(MR_mktag(0), CaseInfo_474, 2) = ((MR_Box) (Var_505));
                MR_hl_field(MR_mktag(0), CaseInfo_474, 3) = ((MR_Box) (Var_506));
                MR_hl_field(MR_mktag(0), CaseInfo_474, 4) = ((MR_Box) (Var_507));
                MR_hl_field(MR_mktag(0), CaseInfo_474, 5) = (MR_Box) (((((MR_Unsigned) (Var_508) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
                MR_hl_field(MR_mktag(0), CaseInfo_474, 6) = ((MR_Box) (Var_510));
              }
              Var_484 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_java_stmt__output_switch_cases_for_java_9_p_0(CaseInfo_474, Var_484, FuncInfo_10, Context_473, Cases_471, Default_472, ExitMethods_12);
              Var_487 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_487, (MR_Integer) 2, Context_473, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_statement_for_java\'/7", (MR_String) "labels not supported in Java.");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Target_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Target_36)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word BreakContext_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) & (MR_Integer) 3);

                        switch (BreakContext_39) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                          case (MR_Integer) 0:
                            {
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_statement_for_java\'/7", (MR_String) "goto_break_switch not in switch");
                                return;
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                              mercury__io__write_string_3_p_0((MR_String) "break;\n");
                              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)));
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word BreakContext_96 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) & (MR_Integer) 3);

                        switch (BreakContext_96) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                            {
                              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                              mercury__io__write_string_3_p_0((MR_String) "break;\n");
                              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)));
                            }
                            break;
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                            {
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_statement_for_java\'/7", (MR_String) "goto_break_loop not in loop");
                                return;
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                        mercury__io__write_string_3_p_0((MR_String) "continue;\n");
                        *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 1)));
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_statement_for_java\'/7", (MR_String) "gotos not supported in Java.");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_statement_for_java\'/7", (MR_String) "computed gotos not supported in Java.");
                return;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Signature_193 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));
              MR_Word FuncRval_194 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));
              MR_Word CallArgs_195 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 3))));
              MR_Word Results_196 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 4))));
              MR_Word Context_198 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 6))));
              MR_Word ArgTypes_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_193, (MR_Integer) 0))));
              MR_Word RetTypes_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_193, (MR_Integer) 1))));
              MR_Word Var_225;
              MR_Integer Var_227;
              MR_Word Var_237;
              MR_Word Var_285;

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              Var_225 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              Var_227 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_225, (MR_Integer) 2, Context_198, Var_227);
              if (!((Results_196 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Var_309 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_196, (MR_Integer) 1))));
                MR_Word Var_310 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_196, (MR_Integer) 0))));

                if ((Var_309 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  ml_backend__mlds_to_java_data__output_lval_for_java_4_p_0(Info_8, Var_310);
                  mercury__io__write_string_3_p_0((MR_String) " = ");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "java.lang.Object [] result = ");
                }
              }
              succeeded = ((((MR_tag((MR_Word) FuncRval_194)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FuncRval_194, (MR_Integer) 0))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_237 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FuncRval_194, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_237)) == (MR_Integer) 1);
                if (succeeded)
                {
                }
              }
              if (succeeded)
              {
                MR_Word Var_242;

                ml_backend__mlds_to_java_data__output_call_rval_for_java_4_p_0(Info_8, FuncRval_194);
                mercury__io__write_string_3_p_0((MR_String) "(");
                {
                  Var_242 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_242, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), Var_242, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_242, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_242, 3) = ((MR_Box) (Info_8));
                }
                mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_195, (MR_String) ", ", Var_242);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              else
              {
                MR_Integer Arity_211;

                if (!((RetTypes_200 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word Var_311 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_200, (MR_Integer) 1))));
                  MR_Word Var_312 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_200, (MR_Integer) 0))));

                  if ((Var_311 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_String RetTypeString_207;

                    ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(Info_8, Var_312, &RetTypeString_207);
                    mercury__io__write_string_3_p_0((MR_String) "((");
                    mercury__io__write_string_3_p_0(RetTypeString_207);
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                  }
                  else
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object[]) ");
                  }
                }
                mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_195, &Arity_211);
                succeeded = ml_backend__mlds_to_java_util__is_specialised_method_ptr_arity_1_p_0(Arity_211);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "((jmercury.runtime.MethodPtr");
                  mercury__io__write_int_3_p_0(Arity_211);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_4_p_0(Info_8, FuncRval_194);
                  mercury__io__write_string_3_p_0((MR_String) ").call___0_0(");
                  ml_backend__mlds_to_java_stmt__output_boxed_args_5_p_0(Info_8, CallArgs_195, ArgTypes_199);
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((jmercury.runtime.MethodPtrN) ");
                  ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_4_p_0(Info_8, FuncRval_194);
                  mercury__io__write_string_3_p_0((MR_String) ").call___0_0(");
                  ml_backend__mlds_to_java_stmt__output_args_as_array_5_p_0(Info_8, CallArgs_195, ArgTypes_199);
                }
                mercury__io__write_string_3_p_0((MR_String) ")");
                if (!((RetTypes_200 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word Var_313 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_200, (MR_Integer) 1))));
                  MR_Word Var_314 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_200, (MR_Integer) 0))));

                  if ((Var_313 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_String UnboxMethod_215;
                    MR_String Var_213;
                    MR_String Var_214;

                    succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Var_314, &Var_213, &Var_214, &UnboxMethod_215);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) ").");
                      mercury__io__write_string_3_p_0(UnboxMethod_215);
                      mercury__io__write_string_3_p_0((MR_String) "()");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  else
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
              }
              mercury__io__write_string_3_p_0((MR_String) ";\n");
              succeeded = ((MR_tag((MR_Word) Results_196)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_285 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_196, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_285)) == (MR_Integer) 1);
                if (succeeded)
                {
                }
              }
              if (succeeded)
              {
                MR_Integer Var_287 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);

                ml_backend__mlds_to_java_stmt__output_assign_results_8_p_0(Info_8, Results_196, RetTypes_200, (MR_Integer) 0, Var_287, Context_198);
              }
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Results_401 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              if ((Results_401 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_3_p_0((MR_String) "return;\n");
              }
              else
              {
                MR_Word Var_458 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_401, (MR_Integer) 1))));
                MR_Word Var_459 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_401, (MR_Integer) 0))));

                if ((Var_458 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__io__write_string_3_p_0((MR_String) "return ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_8, Var_459);
                  mercury__io__write_string_3_p_0((MR_String) ";\n");
                }
                else
                {
                  MR_Word Params_407 = (MR_Word) (FuncInfo_10);
                  MR_Word ReturnTypes_409 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_407, (MR_Integer) 1))));
                  MR_Word TypesAndResults_410;
                  MR_String Separator_411;
                  MR_Integer Var_418;
                  MR_String Var_422;
                  MR_Integer Var_424;
                  MR_Integer Var_425;
                  MR_Word Var_428;

                  TypesAndResults_410 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ReturnTypes_409, Results_401);
                  mercury__io__write_string_3_p_0((MR_String) "return new java.lang.Object[] {\n");
                  Var_418 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_418);
                  Var_425 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
                  Var_424 = (MR_Integer) ((MR_Unsigned) Var_425 * (MR_Unsigned) (MR_Integer) 2);
                  Var_422 = mercury__string__duplicate_char_2_f_0((MR_Char) 32, Var_424);
                  Separator_411 = mercury__string__f_43_43_2_f_0((MR_String) ",\n", Var_422);
                  {
                    Var_428 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_428, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_4[2]));
                    MR_hl_field(MR_mktag(0), Var_428, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0_4));
                    MR_hl_field(MR_mktag(0), Var_428, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_428, 3) = ((MR_Box) (Info_8));
                  }
                  mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds_to_java_stmt_scalar_common_1[0]), TypesAndResults_410, Separator_411, Var_428);
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                  mercury__io__write_string_3_p_0((MR_String) "};\n");
                }
              }
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BodyStmt_529 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));
              MR_Word HandlerStmt_530 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 3))));
              MR_Word TryExitMethods0_532;
              MR_Word CatchExitMethods_533;
              MR_Integer Var_540;
              MR_Integer Var_552;
              MR_Integer Var_555;
              MR_Word Var_561;

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "try\n");
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              Var_540 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0(Info_8, Var_540, FuncInfo_10, BodyStmt_529, &TryExitMethods0_532);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "catch (jmercury.runtime.Commit commit_variable)\n");
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              Var_552 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_552);
              Var_555 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0(Info_8, Var_555, FuncInfo_10, HandlerStmt_530, &CatchExitMethods_533);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
              Var_561 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), TryExitMethods0_532, ((MR_Box) ((MR_Integer) 3)));
              *ExitMethods_12 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_561, CatchExitMethods_533);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Ref_327 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_8, Ref_327);
              mercury__io__write_string_3_p_0((MR_String) " = new jmercury.runtime.Commit();\n");
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "throw ");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_8, Ref_327);
              mercury__io__write_string_3_p_0((MR_String) ";\n");
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word AtomicStmt_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));

              ml_backend__mlds_to_java_stmt__output_atomic_stmt_for_java_6_p_0(Info_8, Indent_9, AtomicStmt_57, Context_14);
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statements_for_java_7_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word FuncInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * ExitMethods_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *ExitMethods_5 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
    }
    else
    {
      MR_Word Stmt_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Stmts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word StmtExitMethods_23;

      ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0(Info_1, Indent_2, FuncInfo_3, Stmt_19, &StmtExitMethods_23);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtExitMethods_23);
      if (succeeded)
      {
        MR_Word StmtsExitMethods_24;
        MR_Word ExitMethods0_25;

        ml_backend__mlds_to_java_stmt__output_statements_for_java_7_p_0(Info_1, Indent_2, FuncInfo_3, Stmts_20, &StmtsExitMethods_24);
        ExitMethods0_25 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), StmtExitMethods_23, StmtsExitMethods_24);
        succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtsExitMethods_24);
        if (succeeded)
          *ExitMethods_5 = ExitMethods0_25;
        else
        {
          *ExitMethods_5 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ExitMethods0_25, ((MR_Box) ((MR_Integer) 4)));
        }
      }
      else
        *ExitMethods_5 = StmtExitMethods_23;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_atomic_stmt_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_stmt__output_target_code_component_for_java_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_atomic_stmt_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word AtomicStmt_9,
  MR_Word Context_10)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) AtomicStmt_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/6", (MR_String) "gc_check not implemented.");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Comment_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), AtomicStmt_9, (MR_Integer) 0))));

          succeeded = (strcmp(Comment_12, (MR_String) "") == 0);
          if (succeeded)
            mercury__io__nl_2_p_0();
          else
          {
            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
            mercury__io__write_string_3_p_0((MR_String) "/* ");
            mercury__io__write_string_3_p_0(Comment_12);
            mercury__io__write_string_3_p_0((MR_String) " */\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_9, (MR_Integer) 0))));
          MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_9, (MR_Integer) 1))));

          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
          ml_backend__mlds_to_java_data__output_lval_for_java_4_p_0(Info_7, Lval_13);
          mercury__io__write_string_3_p_0((MR_String) " = ");
          ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Rval_14);
          mercury__io__write_string_3_p_0((MR_String) ";\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/6", (MR_String) "assign_if_in_heap");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/6", (MR_String) "delete_object not supported in Java.");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 1))));
              MR_Word ExplicitSecTag_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 3))) & (MR_Integer) 1);
              MR_Word Type_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 4))));
              MR_Word MaybeCtorName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 6))));
              MR_Word ArgRvalsTypes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 7))));
              MR_Word IsArray_38;
              MR_Word Var_69;
              MR_Integer Var_71;
              MR_Word QualifiedCtorId_27;
              MR_Word MerType_28;
              MR_Word CtorCat_30;
              MR_String Var_31;
              MR_Word Var_32;

              switch (ExplicitSecTag_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/6", (MR_String) "explicit secondary tag");
                      return;
                    }
                  }
                  break;
              }
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              Var_69 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              Var_71 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_69, (MR_Integer) 2, Context_10, Var_71);
              ml_backend__mlds_to_java_data__output_lval_for_java_4_p_0(Info_7, Target_18);
              mercury__io__write_string_3_p_0((MR_String) " = new ");
              succeeded = ((MR_tag((MR_Word) MaybeCtorName_23)) == (MR_Integer) 1);
              if (succeeded)
              {
                QualifiedCtorId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCtorName_23, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) Type_21)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_21, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  MerType_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_21, (MR_Integer) 1))));
                  CtorCat_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_21, (MR_Integer) 3))));
                  succeeded = ml_backend__mlds_to_java_type__hand_defined_type_for_java_4_p_0(MerType_28, CtorCat_30, &Var_31, &Var_32);
                }
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word CtorDefn_35;
                MR_String CtorName_36;
                MR_Integer CtorArity_37;

                ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_7, Type_21);
                mercury__io__write_char_3_p_0((MR_Char) 46);
                CtorDefn_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualifiedCtorId_27, (MR_Integer) 2))));
                CtorName_36 = ((MR_String) ((MR_hl_field(MR_mktag(0), CtorDefn_35, (MR_Integer) 0))));
                CtorArity_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorDefn_35, (MR_Integer) 1))));
                ml_backend__mlds_to_java_name__output_unqual_class_name_for_java_4_p_0(CtorName_36, CtorArity_37);
              }
              else
                ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_7, Type_21);
              IsArray_38 = ml_backend__mlds_to_java_type__type_is_array_for_java_1_f_0(Type_21);
              switch (IsArray_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) " {");
                    ml_backend__mlds_to_java_stmt__output_init_args_for_java_4_p_0(Info_7, ArgRvalsTypes_24);
                    mercury__io__write_string_3_p_0((MR_String) "};\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    ml_backend__mlds_to_java_stmt__output_init_args_for_java_4_p_0(Info_7, ArgRvalsTypes_24);
                    mercury__io__write_string_3_p_0((MR_String) ");\n");
                  }
                  break;
              }
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/6", (MR_String) "mark_hp not implemented.");
                return;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/6", (MR_String) "restore_hp not implemented.");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/6", (MR_String) "trail_ops not implemented.");
                return;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TargetLang_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word Components_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 2))));

              switch (TargetLang_41) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/6", (MR_String) "inline_target_code only works for lang_java");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_54;
                    MR_Box conv0_STATE_VARIABLE_IO_48;

                    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                    {
                      Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_4[0]));
                      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_atomic_stmt_for_java_6_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Info_7));
                    }
                    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, Components_42, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_48);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/6", (MR_String) "foreign language interfacing not implemented");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_init_args_for_java_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ArgRvalType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgRvalsTypes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalType_10, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;

      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_1, ArgRval_13);
      if (!((ArgRvalsTypes_11 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        mercury__io__write_string_3_p_0((MR_String) ", ");
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ArgRvalsTypes_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_case_cond_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Context_9,
  MR_Word Match_10)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Match_10)) == (MR_Integer) 1))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_case_cond_for_java\'/6", (MR_String) "cannot match ranges in Java cases");
        return;
      }
    }
    else
    {
      MR_Word Val_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Match_10, (MR_Integer) 0))));
      MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Integer N_13;
      MR_Word Var_26;

      ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_21, (MR_Integer) 2, Context_9, Indent_8);
      mercury__io__write_string_3_p_0((MR_String) "case ");
      succeeded = ((((MR_tag((MR_Word) Val_12)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Val_12, (MR_Integer) 0))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Val_12, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0))) == (MR_Integer) 9)));
        if (succeeded)
          N_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
      }
      if (succeeded)
        mercury__io__write_int_3_p_0(N_13);
      else
        ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Val_12);
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_assign_results_8_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer ResultIndex_4,
  MR_Integer Indent_5,
  MR_Word Context_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_assign_results\'/8", (MR_String) "list length mismatch");
          return;
        }
      }
    }
    else
    {
      MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_assign_results\'/8", (MR_String) "list length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Types_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        MR_Integer Var_36;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Integer next_value_of_ResultIndex_4;

        ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_27, (MR_Integer) 2, Context_6, Indent_5);
        ml_backend__mlds_to_java_data__output_lval_for_java_4_p_0(Info_1, Var_69);
        mercury__io__write_string_3_p_0((MR_String) " = ");
        ml_backend__mlds_to_java_stmt__output_unboxed_result_5_p_0(Info_1, Type_19, ResultIndex_4);
        mercury__io__write_string_3_p_0((MR_String) ";\n");
        Var_36 = (MR_Integer) ((MR_Unsigned) ResultIndex_4 + (MR_Unsigned) (MR_Integer) 1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_68;
        next_value_of_HeadVar__3_3 = Types_20;
        next_value_of_ResultIndex_4 = Var_36;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        ResultIndex_4 = next_value_of_ResultIndex_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_unboxed_result_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Integer ResultIndex_8)
{
  {
    MR_bool succeeded;
    MR_String JavaBoxedName_11;
    MR_String UnboxMethod_12;
    MR_String Var_10;

    succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_7, &Var_10, &JavaBoxedName_11, &UnboxMethod_12);
    if (succeeded)
    {
      MR_String Var_40;

      mercury__io__write_string_3_p_0((MR_String) "((");
      mercury__io__write_string_3_p_0(JavaBoxedName_11);
      mercury__io__write_string_3_p_0((MR_String) ") ");
      mercury__io__write_string_3_p_0((MR_String) "result[");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_stmt_scalar_common_3[0]), ResultIndex_8, &Var_40);
      mercury__io__write_string_3_p_0(Var_40);
      mercury__io__write_string_3_p_0((MR_String) "]).");
      mercury__io__write_string_3_p_0(UnboxMethod_12);
      mercury__io__write_string_3_p_0((MR_String) "()");
    }
    else
    {
      MR_String Var_54;

      mercury__io__write_string_3_p_0((MR_String) "(");
      ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_6, Type_7);
      mercury__io__write_string_3_p_0((MR_String) ") ");
      mercury__io__write_string_3_p_0((MR_String) "result[");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_stmt_scalar_common_3[0]), ResultIndex_8, &Var_54);
      mercury__io__write_string_3_p_0(Var_54);
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_args_as_array_5_p_0(
  MR_Word Info_6,
  MR_Word CallArgs_7,
  MR_Word CallArgTypes_8)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "new java.lang.Object[] { ");
    ml_backend__mlds_to_java_stmt__output_boxed_args_5_p_0(Info_6, CallArgs_7, CallArgTypes_8);
    mercury__io__write_string_3_p_0((MR_String) "} ");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_boxed_args_5_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_boxed_args\'/5", (MR_String) "length mismatch");
          return;
        }
      }
    }
    else
    {
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_boxed_args\'/5", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word CallArgType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word CallArgTypes_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));

        ml_backend__mlds_to_java_data__output_boxed_rval_for_java_5_p_0(Info_1, CallArgType_29, Var_41);
        if (!((Var_40 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__io__write_string_3_p_0((MR_String) ", ");
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_40;
          next_value_of_HeadVar__3_3 = CallArgTypes_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_java_stmt__while_exit_methods_for_java_2_f_0(
  MR_Word Cond_4,
  MR_Word BlockExitMethods_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Cond_4)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Cond_4, (MR_Integer) 0))) == (MR_Integer) 1)));
    MR_Word ExitMethods_6;
    MR_Word ExitMethods0_7;
    MR_Word Var_8;
    MR_Word TypeCtorInfo_17_17;
    MR_Word Var_9;

    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Cond_4, (MR_Integer) 1))));
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_9 = (MR_Integer) 0;
        TypeCtorInfo_17_17 = (MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0);
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_17_17, ((MR_Box) (Var_9)), BlockExitMethods_5);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      ExitMethods0_7 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), BlockExitMethods_5, ((MR_Box) ((MR_Integer) 4)));
    }
    else
    {
      ExitMethods0_7 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), BlockExitMethods_5, ((MR_Box) ((MR_Integer) 4)));
    }
    ExitMethods_6 = mercury__set__delete_list_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ExitMethods0_7, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_stmt_scalar_common_2[1])));
    return ExitMethods_6;
  }
}

void mercury__ml_backend__mlds_to_java_stmt__init(void)
{
}

void mercury__ml_backend__mlds_to_java_stmt__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_java_stmt__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_java_stmt__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_java_stmt.
