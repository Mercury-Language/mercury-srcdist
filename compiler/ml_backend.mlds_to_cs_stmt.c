/*
** Automatically generated from `mlds_to_cs_stmt.m'
** by the Mercury compiler,
** version rotd-2019-11-13
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


// :- module ml_backend.mlds_to_cs_stmt.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_stmt__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_stmt.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
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
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_data.mih"
#include "ml_backend.mlds_to_cs_func.mih"
#include "ml_backend.mlds_to_cs_name.mih"
#include "ml_backend.mlds_to_cs_type.mih"
#include "ml_backend.mlds_to_cs_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static MR_Word MR_CALL 
ml_backend__mlds_to_cs_stmt__IntroducedFrom__func__output_stmt_call_for_csharp__521__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_target_code_component_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word TargetCode_6);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_assign_out_params_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Rval_10,
  MR_Integer Num_11,
  MR_Integer * HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_local_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word LocalVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word Context_4,
  MR_Word HeadVar__5_5,
  MR_Word Default_6,
  MR_Word * ExitMethods_7);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word Context_12,
  MR_Word Default_13,
  MR_Word * ExitMethods_14);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__4_4,
  MR_Word * ExitMethods_5);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_case_cond_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Context_9,
  MR_Word Match_10);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_atomic_stmt_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_atomic_stmt_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word AtomicStmt_9,
  MR_Word Context_10);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_init_args_for_csharp_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_stmt__while_exit_methods_for_csharp_2_f_0(
  MR_Word Cond_4,
  MR_Word BlockExitMethods_5);


static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_2[2][7];

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_3[3][9];

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_4[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_5[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_6[1][10];

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_7[1][1];




static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_stmt_scalar_common_1[0])))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_2[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_3[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_4[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_7[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static MR_Word MR_CALL 
ml_backend__mlds_to_cs_stmt__IntroducedFrom__func__output_stmt_call_for_csharp__521__1_1_f_0(
  MR_Word LambdaHeadVar__1_43)
{
  {
    MR_Word LambdaHeadVar__2_44;

    {
      LambdaHeadVar__2_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_44, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_44, 1) = ((MR_Box) (LambdaHeadVar__1_43));
    }
    return LambdaHeadVar__2_44;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_target_code_component_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word TargetCode_6)
{
  switch (MR_tag((MR_Word) TargetCode_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FuncName_14 = (MR_Word) ((MR_Word) (TargetCode_6));

        ml_backend__mlds_to_cs_name__output_maybe_qualified_function_name_for_csharp_4_p_0(Info_5, FuncName_14);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CodeString_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), TargetCode_6, (MR_Integer) 0))));
        MR_Word MaybeUserContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetCode_6, (MR_Integer) 1))));
        MR_Word Var_32;

        mercury__io__write_string_3_p_0((MR_String) "{\n");
        if (!((MaybeUserContext_9 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word ProgContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUserContext_9, (MR_Integer) 0))));
          MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) & (MR_Integer) 1);

          ml_backend__mlds_to_cs_util__cs_output_context_4_p_0(Var_27, ProgContext_10);
        }
        mercury__io__write_string_3_p_0(CodeString_8);
        mercury__io__write_string_3_p_0((MR_String) "}\n");
        Var_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) & (MR_Integer) 1);
        ml_backend__mlds_to_cs_util__cs_output_default_context_3_p_0(Var_32);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String CodeString_34 = ((MR_String) ((MR_hl_field(MR_mktag(2), TargetCode_6, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0(CodeString_34);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 1))));

            ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_5, Rval_11);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 1))));

            ml_backend__mlds_to_cs_data__output_lval_for_csharp_4_p_0(Info_5, Lval_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 1))));

            ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_5, Type_13);
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_target_code_component_for_csharp\'/4", (MR_String) "target_code_alloc_id not implemented");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_assign_out_params_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Rval_10,
  MR_Integer Num_11,
  MR_Integer * HeadVar__5_5)
{
  {
    MR_String Var_28;

    *HeadVar__5_5 = (MR_Integer) ((MR_Unsigned) Num_11 + (MR_Unsigned) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    mercury__io__write_string_3_p_0((MR_String) "out_param_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_stmt_scalar_common_7[0]), Num_11, &Var_28);
    mercury__io__write_string_3_p_0(Var_28);
    mercury__io__write_string_3_p_0((MR_String) " = ");
    ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_8, Rval_10);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_local_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word LocalVarDefn_10)
{
  {
    MR_Word LocalVarName_12;
    MR_Word Type_14;
    MR_Word Initializer_15;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    LocalVarName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 0))));
    Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 2))));
    Initializer_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 3))));
    ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_7, Type_14);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_3_p_0(LocalVarName_12);
    ml_backend__mlds_to_cs_data__output_initializer_for_csharp_6_p_0(Info_7, OutputAux_9, Type_14, Initializer_15);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_stmt_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word FuncInfo_10,
  MR_Word Stmt_11,
  MR_Word * ExitMethods_12)
{
  ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_8, Indent_9, Stmt_11, ExitMethods_12);
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_stmt__output_case_cond_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word Context_4,
  MR_Word HeadVar__5_5,
  MR_Word Default_6,
  MR_Word * ExitMethods_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_8_p_0(Info_1, Indent_2, Context_4, Default_6, ExitMethods_7);
    else
    {
      MR_Word Case_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Cases_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word CaseExitMethods0_29;
      MR_Word CasesExitMethods_30;
      MR_Word CaseExitMethods_31;
      MR_Word FirstCond_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 0))));
      MR_Word LaterConds_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 1))));
      MR_Word Statement_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 2))));
      MR_Word StmtExitMethods_55;
      MR_Word Var_57;
      MR_Integer Var_59;
      MR_Box conv0_STATE_VARIABLE_IO_24_58;

      ml_backend__mlds_to_cs_stmt__output_case_cond_for_csharp_6_p_0(Info_1, Indent_2, Context_4, FirstCond_52);
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Info_1));
        MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Indent_2));
        MR_hl_field(MR_mktag(0), Var_57, 5) = ((MR_Box) (Context_4));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, LaterConds_53, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_24_58);
      Var_59 = (MR_Integer) ((MR_Unsigned) Indent_2 + (MR_Unsigned) 1);
      ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_1, Var_59, Statement_54, &StmtExitMethods_55);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtExitMethods_55);
      if (succeeded)
      {
        MR_Word Var_63 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        MR_Integer Var_64 = (MR_Integer) ((MR_Unsigned) Indent_2 + (MR_Unsigned) 1);
        MR_Word Var_69;

        ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_63, Context_4, Var_64);
        mercury__io__write_string_3_p_0((MR_String) "break;\n");
        Var_69 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), StmtExitMethods_55, ((MR_Box) ((MR_Integer) 0)));
        CaseExitMethods0_29 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_69, ((MR_Box) ((MR_Integer) 4)));
      }
      else
        CaseExitMethods0_29 = StmtExitMethods_55;
      ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0(Info_1, Indent_2, Context_4, Cases_25, Default_6, &CasesExitMethods_30);
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
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
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
            MR_Word Var_23;
            MR_Integer Var_24;

            ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_19, Context_12, Indent_10);
            mercury__io__write_string_3_p_0((MR_String) "default: /*NOTREACHED*/\n");
            Var_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            Var_24 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
            ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_23, Context_12, Var_24);
            mercury__io__write_string_3_p_0((MR_String) "throw new runtime.UnreachableDefault();\n");
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 3)));
          }
          break;
        case (MR_Integer) 1:
          *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Statement_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Default_13, (MR_Integer) 0))));
        MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        MR_Integer Var_34;
        MR_Word Var_37;

        ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_30, Context_12, Indent_10);
        mercury__io__write_string_3_p_0((MR_String) "default:\n");
        Var_34 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
        ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_9, Var_34, Statement_16, ExitMethods_14);
        Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_37, Context_12, Indent_10);
        mercury__io__write_string_3_p_0((MR_String) "break;\n");
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__4_4,
  MR_Word * ExitMethods_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *ExitMethods_5 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
    else
    {
      MR_Word Stmt_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Stmts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word StmtExitMethods_23;

      ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_1, Indent_2, Stmt_19, &StmtExitMethods_23);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtExitMethods_23);
      if (succeeded)
      {
        MR_Word StmtsExitMethods_24;
        MR_Word ExitMethods0_25;

        ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_1, Indent_2, Stmts_20, &StmtsExitMethods_24);
        ExitMethods0_25 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), StmtExitMethods_23, StmtsExitMethods_24);
        succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtsExitMethods_24);
        if (succeeded)
          *ExitMethods_5 = ExitMethods0_25;
        else
          *ExitMethods_5 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ExitMethods0_25, ((MR_Box) ((MR_Integer) 4)));
      }
      else
        *ExitMethods_5 = StmtExitMethods_23;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv3_HeadVar__5_5;

    ml_backend__mlds_to_cs_stmt__output_assign_out_params_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv3_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__5_5));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_44;

    conv2_LambdaHeadVar__2_44 = ml_backend__mlds_to_cs_stmt__IntroducedFrom__func__output_stmt_call_for_csharp__521__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_44));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_func__output_function_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_stmt__output_local_var_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Stmt_11,
  MR_Word * ExitMethods_12)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Stmt_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 0))));
          MR_Word FuncDefns_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 1))));
          MR_Word Stmts_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 2))));
          MR_Word Context_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 3))));
          MR_Integer BlockIndent_87 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
          MR_Word Var_93 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          MR_Word Var_108;

          ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_93, Context_85, Indent_9);
          mercury__io__write_string_3_p_0((MR_String) "{\n");
          if (!((LocalVarDefns_82 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word Var_97;
            MR_Box conv0_STATE_VARIABLE_IO_32_98;

            {
              Var_97 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (Info_8));
              MR_hl_field(MR_mktag(0), Var_97, 4) = ((MR_Box) (BlockIndent_87));
              MR_hl_field(MR_mktag(0), Var_97, 5) = ((MR_Box) ((MR_Unsigned) 8U));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_97, LocalVarDefns_82, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_32_98);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          if (!((FuncDefns_83 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word Var_102;
            MR_Box conv1_STATE_VARIABLE_IO_37_103;

            {
              Var_102 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_3[1]));
              MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_2));
              MR_hl_field(MR_mktag(0), Var_102, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_102, 3) = ((MR_Box) (Info_8));
              MR_hl_field(MR_mktag(0), Var_102, 4) = ((MR_Box) (BlockIndent_87));
              MR_hl_field(MR_mktag(0), Var_102, 5) = ((MR_Box) ((MR_Unsigned) 8U));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_102, FuncDefns_83, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_37_103);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_8, BlockIndent_87, Stmts_84, ExitMethods_12);
          Var_108 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_108, Context_85, Indent_9);
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_612 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Cond_613 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 1))));
          MR_Word BodyStmt_614 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 2))));
          MR_Word Context_616 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 4))));
          MR_Integer ScopeIndent_617;
          MR_Word Var_722;

          ml_backend__mlds_to_target_util__scope_indent_3_p_0(BodyStmt_614, Indent_9, &ScopeIndent_617);
          Var_722 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          switch (Kind_612) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_626;
                MR_Word BodyInfo_656;
                MR_Word StmtExitMethods_657;
                MR_Word Var_695;
                MR_Word Var_699;
                MR_String Var_700;
                MR_Word Var_701;
                MR_Word Var_702;
                MR_Word Var_704;
                MR_Unsigned packed_word_42;

                ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_722, Context_616, Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "do\n");
                Var_695 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
                packed_word_42 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
                Var_699 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2))));
                Var_700 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
                Var_701 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));
                Var_702 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
                Var_704 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6))));
                {
                  BodyInfo_656 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), BodyInfo_656, 0) = ((MR_Box) (Var_695));
                  MR_hl_field(MR_mktag(0), BodyInfo_656, 1) = (MR_Box) (packed_word_42);
                  MR_hl_field(MR_mktag(0), BodyInfo_656, 2) = ((MR_Box) (Var_699));
                  MR_hl_field(MR_mktag(0), BodyInfo_656, 3) = ((MR_Box) (Var_700));
                  MR_hl_field(MR_mktag(0), BodyInfo_656, 4) = ((MR_Box) (Var_701));
                  MR_hl_field(MR_mktag(0), BodyInfo_656, 5) = (MR_Box) (((((MR_Unsigned) (Var_702) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                  MR_hl_field(MR_mktag(0), BodyInfo_656, 6) = ((MR_Box) (Var_704));
                }
                ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(BodyInfo_656, ScopeIndent_617, BodyStmt_614, &StmtExitMethods_657);
                Var_626 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_626, Context_616, Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "while (");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_8, Cond_613);
                mercury__io__write_string_3_p_0((MR_String) ");\n");
                *ExitMethods_12 = ml_backend__mlds_to_cs_stmt__while_exit_methods_for_csharp_2_f_0(Cond_613, StmtExitMethods_657);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_725;
                MR_Word Var_727;
                MR_Word Var_728;
                MR_String Var_729;
                MR_Word Var_730;
                MR_Word Var_732;
                MR_Word Var_734;
                MR_Unsigned packed_word_46;
                MR_Word Var_640;

                ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_722, Context_616, Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "while (");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_8, Cond_613);
                mercury__io__write_string_3_p_0((MR_String) ")\n");
                Var_734 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
                packed_word_46 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
                Var_732 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                Var_730 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2))));
                Var_729 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
                Var_728 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));
                Var_727 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
                Var_725 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6))));
                succeeded = ((((MR_tag((MR_Word) Cond_613)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Cond_613, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_640 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Cond_613, (MR_Integer) 1))));
                  succeeded = (Var_640 == (MR_Word) ((MR_Unsigned) 4U));
                }
                if (succeeded)
                {
                  MR_Integer Var_645;

                  ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_732, Context_616, Indent_9);
                  mercury__io__write_string_3_p_0((MR_String) "{\n");
                  Var_645 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_645);
                  mercury__io__write_string_3_p_0((MR_String) "/* Unreachable code */\n");
                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                  mercury__io__write_string_3_p_0((MR_String) "}\n");
                  *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
                }
                else
                {
                  MR_Word BodyInfo_618;
                  MR_Word StmtExitMethods_619;

                  {
                    BodyInfo_618 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), BodyInfo_618, 0) = ((MR_Box) (Var_734));
                    MR_hl_field(MR_mktag(0), BodyInfo_618, 1) = (MR_Box) (packed_word_46);
                    MR_hl_field(MR_mktag(0), BodyInfo_618, 2) = ((MR_Box) (Var_730));
                    MR_hl_field(MR_mktag(0), BodyInfo_618, 3) = ((MR_Box) (Var_729));
                    MR_hl_field(MR_mktag(0), BodyInfo_618, 4) = ((MR_Box) (Var_728));
                    MR_hl_field(MR_mktag(0), BodyInfo_618, 5) = (MR_Box) (((((MR_Unsigned) (Var_727) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                    MR_hl_field(MR_mktag(0), BodyInfo_618, 6) = ((MR_Box) (Var_725));
                  }
                  ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(BodyInfo_618, ScopeIndent_617, BodyStmt_614, &StmtExitMethods_619);
                  *ExitMethods_12 = ml_backend__mlds_to_cs_stmt__while_exit_methods_for_csharp_2_f_0(Cond_613, StmtExitMethods_619);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Cond_384 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 0))));
          MR_Word Then0_385 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 1))));
          MR_Word MaybeElse_386 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 2))));
          MR_Word Context_387 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 3))));
          MR_Word Then_392;
          MR_Integer ThenScopeIndent_393;
          MR_Word ThenExitMethods_394;
          MR_Word Var_403;
          MR_Word ThenContext_391;
          MR_Word Var_398;

          succeeded = (MaybeElse_386 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Then0_385)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_398 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_385, (MR_Integer) 2))));
              ThenContext_391 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_385, (MR_Integer) 3))));
              succeeded = (Var_398 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
          {
            MR_Word Var_401;

            {
              Var_401 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_401, 0) = ((MR_Box) (Then0_385));
              MR_hl_field(MR_mktag(1), Var_401, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Then_392 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Then_392, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Then_392, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Then_392, 2) = ((MR_Box) (Var_401));
              MR_hl_field(MR_mktag(0), Then_392, 3) = ((MR_Box) (ThenContext_391));
            }
          }
          else
            Then_392 = Then0_385;
          Var_403 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_403, Context_387, Indent_9);
          mercury__io__write_string_3_p_0((MR_String) "if (");
          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_8, Cond_384);
          mercury__io__write_string_3_p_0((MR_String) ")\n");
          ml_backend__mlds_to_target_util__scope_indent_3_p_0(Then_392, Indent_9, &ThenScopeIndent_393);
          ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_8, ThenScopeIndent_393, Then_392, &ThenExitMethods_394);
          if ((MaybeElse_386 == (MR_Word) ((MR_Unsigned) 0U)))
            *ExitMethods_12 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ThenExitMethods_394, ((MR_Box) ((MR_Integer) 4)));
          else
          {
            MR_Word Else_395 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_386, (MR_Integer) 0))));
            MR_Integer ElseScopeIndent_396;
            MR_Word ElseExitMethods_397;
            MR_Word Var_412 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

            ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_412, Context_387, Indent_9);
            mercury__io__write_string_3_p_0((MR_String) "else\n");
            ml_backend__mlds_to_target_util__scope_indent_3_p_0(Else_395, Indent_9, &ElseScopeIndent_396);
            ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_8, ElseScopeIndent_396, Else_395, &ElseExitMethods_397);
            *ExitMethods_12 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ThenExitMethods_394, ElseExitMethods_397);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Val_501 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));
              MR_Word Cases_503 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 4))));
              MR_Word Default_504 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 5))));
              MR_Word Context_505 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 6))));
              MR_Word CaseInfo_506;
              MR_Word Var_507 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Integer Var_515;
              MR_Word Var_518;
              MR_Word Var_531;
              MR_Word Var_535;
              MR_String Var_536;
              MR_Word Var_537;
              MR_Word Var_538;
              MR_Word Var_540;
              MR_Unsigned packed_word_33;

              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_507, Context_505, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "switch (");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_8, Val_501);
              mercury__io__write_string_3_p_0((MR_String) ") {\n");
              Var_531 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
              packed_word_33 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
              Var_535 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2))));
              Var_536 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
              Var_537 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));
              Var_538 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
              Var_540 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6))));
              {
                CaseInfo_506 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CaseInfo_506, 0) = ((MR_Box) (Var_531));
                MR_hl_field(MR_mktag(0), CaseInfo_506, 1) = (MR_Box) (packed_word_33);
                MR_hl_field(MR_mktag(0), CaseInfo_506, 2) = ((MR_Box) (Var_535));
                MR_hl_field(MR_mktag(0), CaseInfo_506, 3) = ((MR_Box) (Var_536));
                MR_hl_field(MR_mktag(0), CaseInfo_506, 4) = ((MR_Box) (Var_537));
                MR_hl_field(MR_mktag(0), CaseInfo_506, 5) = (MR_Box) (((((MR_Unsigned) (Var_538) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
                MR_hl_field(MR_mktag(0), CaseInfo_506, 6) = ((MR_Box) (Var_540));
              }
              Var_515 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0(CaseInfo_506, Var_515, Context_505, Cases_503, Default_504, ExitMethods_12);
              Var_518 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_518, Context_505, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_stmt_for_csharp\'/7", (MR_String) "labels not supported in C#.");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_302 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));
              MR_Word Context_303 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) Target_302)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Target_302)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word BreakContext_305 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) & (MR_Integer) 3);
                        MR_Word Var_330 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

                        switch (BreakContext_305) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                          case (MR_Integer) 0:
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_stmt_goto_for_csharp\'/7", (MR_String) "goto_break_switch not in switch");
                              return;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_330, Context_303, Indent_9);
                              mercury__io__write_string_3_p_0((MR_String) "break;\n");
                              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)));
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word BreakContext_327 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) & (MR_Integer) 3);
                        MR_Word Var_348 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

                        switch (BreakContext_327) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                            {
                              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_348, Context_303, Indent_9);
                              mercury__io__write_string_3_p_0((MR_String) "break;\n");
                              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)));
                            }
                            break;
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_stmt_goto_for_csharp\'/7", (MR_String) "goto_break_loop not in loop");
                              return;
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_306 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

                        ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_306, Context_303, Indent_9);
                        mercury__io__write_string_3_p_0((MR_String) "continue;\n");
                        *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 1)));
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_stmt_goto_for_csharp\'/7", (MR_String) "gotos not supported in C#.");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_stmt_for_csharp\'/7", (MR_String) "computed gotos not supported in C#.");
              return;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Signature_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));
              MR_Word FuncRval_149 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));
              MR_Word CallArgs_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 3))));
              MR_Word Results_151 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 4))));
              MR_Word IsTailCall_152 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 5))) & (MR_Integer) 3);
              MR_Word Context_153 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 6))));
              MR_Word ArgTypes_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_148, (MR_Integer) 0))));
              MR_Word RetTypes_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_148, (MR_Integer) 1))));
              MR_Word OutArgs_156;
              MR_String CloseBracket_161;
              MR_Word Var_163 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word Var_167;
              MR_Integer Var_168;
              MR_Word Var_187;
              MR_Word Var_189;
              MR_Word Var_199;
              MR_Word Var_177;

              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_163, Context_153, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              Var_167 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              Var_168 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_167, Context_153, Var_168);
              if ((Results_151 == (MR_Word) ((MR_Unsigned) 0U)))
                OutArgs_156 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word Lval_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_151, (MR_Integer) 0))));
                MR_Word Lvals_158 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_151, (MR_Integer) 1))));

                ml_backend__mlds_to_cs_data__output_lval_for_csharp_4_p_0(Info_8, Lval_157);
                mercury__io__write_string_3_p_0((MR_String) " = ");
                OutArgs_156 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds_to_cs_stmt_scalar_common_5[0]), Lvals_158);
              }
              succeeded = ((((MR_tag((MR_Word) FuncRval_149)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FuncRval_149, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FuncRval_149, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_177)) == (MR_Integer) 1);
                if (succeeded)
                {
                }
              }
              if (succeeded)
                CloseBracket_161 = (MR_String) "";
              else
              {
                MR_String TypeString_162;

                TypeString_162 = ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0(Info_8, ArgTypes_154, RetTypes_155);
                mercury__io__write_string_3_p_0((MR_String) "((");
                mercury__io__write_string_3_p_0(TypeString_162);
                mercury__io__write_string_3_p_0((MR_String) ") ");
                CloseBracket_161 = (MR_String) ")";
              }
              ml_backend__mlds_to_cs_data__output_call_rval_for_csharp_4_p_0(Info_8, FuncRval_149);
              mercury__io__write_string_3_p_0(CloseBracket_161);
              mercury__io__write_string_3_p_0((MR_String) "(");
              Var_187 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_150, OutArgs_156);
              {
                Var_189 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_189, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), Var_189, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_4));
                MR_hl_field(MR_mktag(0), Var_189, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_189, 3) = ((MR_Box) (Info_8));
              }
              mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_187, (MR_String) ", ", Var_189);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
              switch (IsTailCall_152) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_193 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                    MR_Integer Var_194 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

                    ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_193, Context_153, Var_194);
                    mercury__io__write_string_3_p_0((MR_String) "throw new runtime.UnreachableDefault();\n");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                  }
                  break;
              }
              Var_199 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_199, Context_153, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Results_445 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));
              MR_Word Context_446 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));

              if ((Results_445 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_460 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

                ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_460, Context_446, Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "return;\n");
              }
              else
              {
                MR_Word Rval_447 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_445, (MR_Integer) 0))));
                MR_Word Rvals_448 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_445, (MR_Integer) 1))));
                MR_Word Var_450;
                MR_Word Var_453;
                MR_Box conv5_Var_449;
                MR_Box conv4_STATE_VARIABLE_IO_23_452;

                {
                  Var_450 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_450, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_6[0]));
                  MR_hl_field(MR_mktag(0), Var_450, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_450, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_450, 3) = ((MR_Box) (Info_8));
                  MR_hl_field(MR_mktag(0), Var_450, 4) = ((MR_Box) (Indent_9));
                }
                mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_450, Rvals_448, ((MR_Box) ((MR_Integer) 2)), &conv5_Var_449, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_23_452);
                Var_453 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_453, Context_446, Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "return ");
                ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_8, Rval_447);
                mercury__io__write_string_3_p_0((MR_String) ";\n");
              }
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BodyStmt_559 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));
              MR_Word HandlerStmt_560 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 3))));
              MR_Word Context_561 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 4))));
              MR_Word LineNumbers_562 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word TryExitMethods0_563;
              MR_Word CatchExitMethods_564;
              MR_Integer Var_571;
              MR_Integer Var_583;
              MR_Integer Var_586;
              MR_Word Var_592;

              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(LineNumbers_562, Context_561, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "try\n");
              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(LineNumbers_562, Context_561, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              Var_571 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_8, Var_571, BodyStmt_559, &TryExitMethods0_563);
              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(LineNumbers_562, Context_561, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(LineNumbers_562, Context_561, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "catch (runtime.Commit commit_variable)\n");
              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(LineNumbers_562, Context_561, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              Var_583 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(LineNumbers_562, Context_561, Var_583);
              Var_586 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_8, Var_586, HandlerStmt_560, &CatchExitMethods_564);
              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(LineNumbers_562, Context_561, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
              Var_592 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), TryExitMethods0_563, ((MR_Box) ((MR_Integer) 3)));
              *ExitMethods_12 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_592, CatchExitMethods_564);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Ref_260 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));
              MR_Word Context_261 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));
              MR_Word Var_262 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word Var_267;

              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_262, Context_261, Indent_9);
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_8, Ref_260);
              mercury__io__write_string_3_p_0((MR_String) " = new runtime.Commit();\n");
              Var_267 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_267, Context_261, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "throw ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_8, Ref_260);
              mercury__io__write_string_3_p_0((MR_String) ";\n");
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word AtomicStatement_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));
              MR_Word Context_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));

              ml_backend__mlds_to_cs_stmt__output_atomic_stmt_for_csharp_6_p_0(Info_8, Indent_9, AtomicStatement_54, Context_55);
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_case_cond_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Context_9,
  MR_Word Match_10)
{
  if (((MR_tag((MR_Word) Match_10)) == (MR_Integer) 1))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_case_cond_for_csharp\'/6", (MR_String) "cannot match ranges in C# cases");
      return;
    }
  else
  {
    MR_Word Val_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Match_10, (MR_Integer) 0))));
    MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

    ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_19, Context_9, Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "case ");
    ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Val_12);
    mercury__io__write_string_3_p_0((MR_String) ":\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_atomic_stmt_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_stmt__output_target_code_component_for_csharp_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_atomic_stmt_for_csharp_6_p_0(
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/6", (MR_String) "gc_check not implemented.");
          return;
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
          MR_Word Var_100 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

          ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_100, Context_10, Indent_8);
          ml_backend__mlds_to_cs_data__output_lval_for_csharp_4_p_0(Info_7, Lval_13);
          mercury__io__write_string_3_p_0((MR_String) " = ");
          ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_7, Rval_14);
          mercury__io__write_string_3_p_0((MR_String) ";\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/6", (MR_String) "assign_if_in_heap");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/6", (MR_String) "delete_object not supported in C#.");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 1))));
              MR_Word ExplicitSecTag_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 3))) & (MR_Integer) 1);
              MR_Word Type_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 4))));
              MR_Word MaybeCtorName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 6))));
              MR_Word ArgRvalsTypes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 7))));
              MR_Word IsArray_37;
              MR_Word Var_66;
              MR_Word Var_70;
              MR_Integer Var_71;
              MR_Word Var_92;
              MR_Word QualifiedCtorId_27;
              MR_Word MerType_28;
              MR_Word CtorCat_29;
              MR_String Var_30;
              MR_Word Var_31;

              switch (ExplicitSecTag_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/6", (MR_String) "explicit secondary tag");
                    return;
                  }
                  break;
              }
              Var_66 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_66, Context_10, Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              Var_70 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              Var_71 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_70, Context_10, Var_71);
              ml_backend__mlds_to_cs_data__output_lval_for_csharp_4_p_0(Info_7, Target_18);
              mercury__io__write_string_3_p_0((MR_String) " = new ");
              succeeded = (MaybeCtorName_23 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                QualifiedCtorId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCtorName_23, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) Type_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  MerType_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_21, (MR_Integer) 1))));
                  CtorCat_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_21, (MR_Integer) 2))));
                  succeeded = ml_backend__mlds_to_cs_type__hand_defined_type_for_csharp_4_p_0(MerType_28, CtorCat_29, &Var_30, &Var_31);
                }
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word CtorDefn_34;
                MR_String CtorName_35;
                MR_Integer CtorArity_36;

                ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_7, Type_21);
                mercury__io__write_char_3_p_0((MR_Char) 46);
                CtorDefn_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualifiedCtorId_27, (MR_Integer) 2))));
                CtorName_35 = ((MR_String) ((MR_hl_field(MR_mktag(0), CtorDefn_34, (MR_Integer) 0))));
                CtorArity_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorDefn_34, (MR_Integer) 1))));
                ml_backend__mlds_to_cs_name__output_unqual_class_name_for_csharp_4_p_0(CtorName_35, CtorArity_36);
              }
              else
                ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_7, Type_21);
              IsArray_37 = ml_backend__mlds_to_cs_type__type_is_array_for_csharp_1_f_0(Type_21);
              switch (IsArray_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) " {");
                    ml_backend__mlds_to_cs_stmt__output_init_args_for_csharp_4_p_0(Info_7, ArgRvalsTypes_24);
                    mercury__io__write_string_3_p_0((MR_String) "};\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    ml_backend__mlds_to_cs_stmt__output_init_args_for_csharp_4_p_0(Info_7, ArgRvalsTypes_24);
                    mercury__io__write_string_3_p_0((MR_String) ");\n");
                  }
                  break;
              }
              Var_92 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_92, Context_10, Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/6", (MR_String) "mark_hp not implemented.");
              return;
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/6", (MR_String) "restore_hp not implemented.");
              return;
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/6", (MR_String) "trail_ops not implemented.");
              return;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TargetLang_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word Components_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 2))));

              switch (TargetLang_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/6", (MR_String) "inline_target_code only works for lang_java");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_53;
                    MR_Box conv0_STATE_VARIABLE_IO_54_54;

                    ml_backend__mlds_to_cs_util__output_pragma_warning_restore_2_p_0();
                    {
                      Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_2[0]));
                      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__output_atomic_stmt_for_csharp_6_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Info_7));
                    }
                    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, Components_41, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_54_54);
                    ml_backend__mlds_to_cs_util__output_pragma_warning_disable_2_p_0();
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/6", (MR_String) "foreign language interfacing not implemented");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_init_args_for_csharp_4_p_0(
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

      ml_backend__mlds_to_cs_data__output_rval_for_csharp_4_p_0(Info_1, ArgRval_13);
      if (!((ArgRvalsTypes_11 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__io__write_string_3_p_0((MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ArgRvalsTypes_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_stmt__while_exit_methods_for_csharp_2_f_0(
  MR_Word Cond_4,
  MR_Word BlockExitMethods_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Cond_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Cond_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
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
      ExitMethods0_7 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), BlockExitMethods_5, ((MR_Box) ((MR_Integer) 4)));
    else
      ExitMethods0_7 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), BlockExitMethods_5, ((MR_Box) ((MR_Integer) 4)));
    ExitMethods_6 = mercury__set__delete_list_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ExitMethods0_7, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_stmt_scalar_common_1[1])));
    return ExitMethods_6;
  }
}

void mercury__ml_backend__mlds_to_cs_stmt__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_stmt__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_cs_stmt__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_stmt__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_stmt.
