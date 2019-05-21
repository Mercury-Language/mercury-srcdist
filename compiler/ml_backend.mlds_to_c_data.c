/*
** Automatically generated from `mlds_to_c_data.m'
** by the Mercury compiler,
** version rotd-2018-05-28
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


// :- module ml_backend.mlds_to_c_data.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_c_data__init
ENDINIT
*/

#include "ml_backend.mlds_to_c_data.mih"


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
#include "float.mih"
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
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_type.mih"
#include "ml_backend.mlds_to_c_util.mih"
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




static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__IntroducedFrom__pred__mlds_output_rval_const__977__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_61);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__IntroducedFrom__pred__mlds_output_float_bits__436__1_2_p_0(
  MR_Word HeadVar__1_15,
  MR_Word HeadVar__2_16);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_body_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_body_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(
  MR_Word Opts_5,
  MR_Word Rval_6);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_binop_6_p_0(
  MR_Word Opts_7,
  MR_Word Op_8,
  MR_Word X_9,
  MR_Word Y_10);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_unop_5_p_0(
  MR_Word Opts_6,
  MR_Word UnaryOp_7,
  MR_Word Expr_8);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_5_p_0(
  MR_Word Opts_6,
  MR_Word Type_7,
  MR_Word Rval_8);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_cast_rval_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_cast_rval_5_p_0(
  MR_Word Opts_6,
  MR_Word Type_7,
  MR_Word Rval_8);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word Const_6);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_code_addr_3_p_0(
  MR_Word CodeAddr_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__is_aligned_dword_field_3_p_0(
  MR_Word X_4,
  MR_Word Y_5,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
ml_backend__mlds_to_c_data__is_an_address_1_f_0(
  MR_Word Rval_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_float_bits_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_float_bits_4_p_0(
  MR_Word Opts_5,
  MR_Float Float_6);


static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_1[1][2];

static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_2[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_3[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_4[1][8];




static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 1)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 3)) | (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 4))))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__IntroducedFrom__pred__mlds_output_rval_const__977__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_61)
{
  {
    MR_bool succeeded = (Lang_12 == HeadVar__2_61);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__IntroducedFrom__pred__mlds_output_float_bits__436__1_2_p_0(
  MR_Word HeadVar__1_15,
  MR_Word HeadVar__2_16)
{
  {
    MR_bool succeeded = (HeadVar__1_15 == HeadVar__2_16);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_5_p_0(
  MR_Word Opts_6,
  MR_Word _Type_7,
  MR_Word Initializer_8)
{
  ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_105_110_105_116_105_97_108_105_122_101_114_95_95_91_50_93_95_48_5_p_0(Opts_6, Initializer_8);
}

void MR_CALL 
ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_105_110_105_116_105_97_108_105_122_101_114_95_95_91_50_93_95_48_5_p_0(
  MR_Word Opts_6,
  MR_Word Initializer_8)
{
  switch (MR_tag((MR_Word) Initializer_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) " = ");
        ml_backend__mlds_to_c_data__mlds_output_initializer_body_5_p_0(Opts_6, (MR_Integer) 0, Initializer_8);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_8, (MR_Integer) 1))));
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_8, (MR_Integer) 0))));

        if (!((Var_25 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          mercury__io__write_string_3_p_0((MR_String) " = ");
          ml_backend__mlds_to_c_data__mlds_output_initializer_body_5_p_0(Opts_6, (MR_Integer) 0, Initializer_8);
        }
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__io__write_string_3_p_0((MR_String) " = ");
        ml_backend__mlds_to_c_data__mlds_output_initializer_body_5_p_0(Opts_6, (MR_Integer) 0, Initializer_8);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_body_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_data__mlds_output_initializer_body_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_body_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_data__mlds_output_initializer_body_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_body_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word Initializer_8)
{
  switch (MR_tag((MR_Word) Initializer_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer_8, (MR_Integer) 0))));

        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FieldInitializers_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_8, (MR_Integer) 1))));
        MR_Word _Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_8, (MR_Integer) 0))));

        if ((FieldInitializers_12 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_initializer_body\'/5", (MR_String) "FieldInitializers = []");
            return;
          }
        }
        else
        {
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldInitializers_12, (MR_Integer) 1))));
          MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldInitializers_12, (MR_Integer) 0))));

          if ((Var_73 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer Var_56;

            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
            mercury__io__write_string_3_p_0((MR_String) "{ ");
            Var_56 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
            ml_backend__mlds_to_c_data__mlds_output_initializer_body_5_p_0(Opts_6, Var_56, Var_74);
            mercury__io__write_string_3_p_0((MR_String) " }");
          }
          else
          {
            MR_Word Var_43;
            MR_Integer Var_45;

            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
            mercury__io__write_string_3_p_0((MR_String) "{\n");
            Var_45 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
            {
              Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ml_backend__mlds_to_c_data_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ml_backend__mlds_to_c_data__mlds_output_initializer_body_5_p_0_2));
              MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Opts_6));
              MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (Var_45));
            }
            mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), FieldInitializers_12, (MR_String) ",\n", Var_43);
            mercury__io__write_string_3_p_0((MR_String) "\n");
            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
            mercury__io__write_string_3_p_0((MR_String) "}");
          }
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ElementInitializers_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Initializer_8, (MR_Integer) 0))));

        if ((ElementInitializers_17 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
          mercury__io__write_string_3_p_0((MR_String) "{ 0 }\n");
        }
        else
        {
          MR_Word Var_26;
          MR_Integer Var_28;

          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
          mercury__io__write_string_3_p_0((MR_String) "{\n");
          Var_28 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ml_backend__mlds_to_c_data_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ml_backend__mlds_to_c_data__mlds_output_initializer_body_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Opts_6));
            MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (Var_28));
          }
          mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ElementInitializers_17, (MR_String) ",\n", Var_26);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
          mercury__io__write_string_3_p_0((MR_String) "}");
        }
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(
  MR_Word tscc_proc_1_input_1_Opts_5,
  MR_Word tscc_proc_1_input_2_Lval_6)
{
  {
    MR_Word tscc_proc_2_input_1_Opts_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_3_input_1_Opts_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Opts_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Rval_8;

    // The code for TSCC PROC 1: pred ml_backend.mlds_to_c_data.mlds_output_lval/4-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_lval/4-0
    // proc 2 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_rval/4-0
    // proc 3 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_bracketed_rval/4-0
    // proc 4 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_boxed_rval/5-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Opts_5 = tscc_proc_1_input_1_Opts_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybePtag_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 0))));
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2))));
            MR_Word FieldType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
            MR_Word PtrType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

            if (((MR_tag((MR_Word) FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word QualFieldVarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 0))));
              MR_Word CtorType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 1))));
              MR_Integer Var_42;

              mercury__io__write_string_3_p_0((MR_String) "(");
              succeeded = ((MR_tag((MR_Word) MaybePtag_8)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePtag_8, (MR_Integer) 0))));
                succeeded = (Var_42 == (MR_Integer) 0);
              }
              if (succeeded)
              {
                MR_Word PtrAddrLval_22;

                succeeded = ml_backend__mlds____Unify____mlds_type_0_0(PtrType_12, CtorType_21);
                if (!(succeeded))
                  ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_5, CtorType_21);
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  PtrAddrLval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));
                  ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_5, PtrAddrLval_22);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
                else
                {
                  ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ")->");
                }
              }
              else
              {
                ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_5, CtorType_21);
                if ((MaybePtag_8 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_strip_tag(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, PtrRval_9);
                }
                else
                {
                  MR_Integer Ptag_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePtag_8, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "MR_body(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                  ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_82);
                }
                mercury__io__write_string_3_p_0((MR_String) "))->");
              }
              ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_3_p_0(QualFieldVarName_20);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_10, (MR_Integer) 0))));

              if ((FieldType_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word MercuryType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 1))));
                MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 2))));
                MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 3))));
                MR_Word Var_17;
                MR_Word Var_18;

                succeeded = ((MR_tag((MR_Word) MercuryType_14)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MercuryType_14, (MR_Integer) 0))));
                  Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MercuryType_14, (MR_Integer) 1))));
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                if ((MaybePtag_8 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_hl_mask_field(");
                  mercury__io__write_string_3_p_0((MR_String) "(MR_Word) ");
                }
                else
                {
                  MR_Integer Ptag_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePtag_8, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "MR_hl_field(");
                  ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_19);
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, PtrRval_9);
                mercury__io__write_string_3_p_0((MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, OffsetRval_13);
                mercury__io__write_string_3_p_0((MR_String) "))");
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_lval\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word _Type_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_3_input_1_Opts_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "*");
            // direct tailcall eliminated
            next_value_of_tscc_proc_3_input_1_Opts_5 = Opts_5;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_23;
            tscc_proc_3_input_1_Opts_5 = next_value_of_tscc_proc_3_input_1_Opts_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVar_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String Var_35;

            Var_35 = ml_backend__mlds_to_c_name__global_var_name_1_f_0(GlobalVar_25);
            mercury__io__write_string_3_p_0(Var_35);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word _VarType_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(LocalVarName_30);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word MLDS_ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_26, (MR_Integer) 0))));
                MR_Word GlobalVarName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_26, (MR_Integer) 1))));
                MR_Word _VarType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_4_p_0(MLDS_ModuleName_28, GlobalVarName_29);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Opts_5 = tscc_proc_2_input_1_Opts_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ScalarCommon_18 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 0));
            MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 0))));
            MR_Integer TypeNum_21;
            MR_Integer RowNum_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 3))));
            MR_Word ModuleSymName_23;
            MR_String MangledModuleName_24;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 2))));
            MR_String Var_157;
            MR_String Var_167;
            MR_Word _Type_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 1))));

            TypeNum_21 = (MR_Integer) (Var_49);
            ModuleSymName_23 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_19);
            MangledModuleName_24 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_23);
            mercury__io__write_string_3_p_0(MangledModuleName_24);
            mercury__io__write_string_3_p_0((MR_String) "_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), TypeNum_21, &Var_157);
            mercury__io__write_string_3_p_0(Var_157);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), RowNum_22, &Var_167);
            mercury__io__write_string_3_p_0(Var_167);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_90 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_91;
            MR_Integer TypeNum_93;
            MR_Integer RowNum_94;
            MR_Word ModuleSymName_95;
            MR_String MangledModuleName_96;
            MR_Word Var_98;
            MR_String Var_135;
            MR_String Var_145;
            MR_Word _Type_89;

            mercury__io__write_string_3_p_0((MR_String) "&");
            ModuleName_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 0))));
            _Type_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 1))));
            Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 2))));
            RowNum_94 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 3))));
            TypeNum_93 = (MR_Integer) (Var_98);
            ModuleSymName_95 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_91);
            MangledModuleName_96 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_95);
            mercury__io__write_string_3_p_0(MangledModuleName_96);
            mercury__io__write_string_3_p_0((MR_String) "_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), TypeNum_93, &Var_135);
            mercury__io__write_string_3_p_0(Var_135);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), RowNum_94, &Var_145);
            mercury__io__write_string_3_p_0(Var_145);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Opts_5 = Opts_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Opts_5 = next_value_of_tscc_proc_1_input_1_Opts_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Ptag_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word BaseRval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                mercury__io__write_string_3_p_0((MR_String) "MR_mkword(");
                ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_9);
                mercury__io__write_string_3_p_0((MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, BaseRval_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_4_p_0(Const_11);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Opts_6 = Opts_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_77;
                MR_Word next_value_of_tscc_proc_4_input_3_Rval_8 = SubRval_78;

                // direct tailcall eliminated
                tscc_proc_4_input_1_Opts_6 = next_value_of_tscc_proc_4_input_1_Opts_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Rval_8 = next_value_of_tscc_proc_4_input_3_Rval_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_5_p_0(Opts_5, Type_79, SubRval_80);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_data__mlds_output_cast_rval_5_p_0(Opts_5, Type_12, SubRval_13);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_data__mlds_output_unop_5_p_0(Opts_5, Unop_14, SubRval_81);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word BinOp_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RvalA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word RvalB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_c_data__mlds_output_binop_6_p_0(Opts_5, BinOp_15, RvalA_16, RvalB_17);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Opts_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "&");
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Opts_5 = Opts_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_82;
                tscc_proc_1_input_1_Opts_5 = next_value_of_tscc_proc_1_input_1_Opts_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 3))));
                MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 2))));
                MR_Word ModuleName_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 0))));
                MR_Integer TypeNum_86 = (MR_Integer) (Var_34);
                MR_Word ModuleSymName_87;
                MR_String MangledModuleName_88;
                MR_String Var_113;
                MR_String Var_123;
                MR_Integer _NumRows_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 4))));
                MR_Word _Type_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 1))));

                ModuleSymName_87 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_84);
                MangledModuleName_88 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_87);
                mercury__io__write_string_3_p_0((MR_String) "&");
                mercury__io__write_string_3_p_0(MangledModuleName_88);
                mercury__io__write_string_3_p_0((MR_String) "_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), TypeNum_86, &Var_113);
                mercury__io__write_string_3_p_0(Var_113);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), StartRowNum_27, &Var_123);
                mercury__io__write_string_3_p_0(Var_123);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, RowRval_26);
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
      MR_Word Opts_5 = tscc_proc_3_input_1_Opts_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
        MR_Word Var_12;

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_12 = (MR_Word) (MR_body((MR_Word) (Var_15), (MR_Integer) 1));
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_2_input_1_Opts_5 = Opts_5;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        tscc_proc_2_input_1_Opts_5 = next_value_of_tscc_proc_2_input_1_Opts_5;
        tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
        goto top_of_proc_2;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Opts_6 = tscc_proc_4_input_1_Opts_6;
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Rval_8 = tscc_proc_4_input_3_Rval_8;
      MR_bool succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0))) == (MR_Integer) 4)));
      MR_Word InnerRval_11;
      MR_Word OtherType_10;

      if (succeeded)
      {
        OtherType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
        InnerRval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 2))));
        succeeded = ml_backend__mlds____Unify____mlds_type_0_0(Type_7, OtherType_10);
        if (!(succeeded))
        {
          MR_Word Var_46;

          Var_46 = ml_backend__mlds_to_c_data__is_an_address_1_f_0(InnerRval_11);
          succeeded = (Var_46 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_4_input_1_Opts_6 = Opts_6;
        MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_7;
        MR_Word next_value_of_tscc_proc_4_input_3_Rval_8 = InnerRval_11;

        // direct tailcall eliminated
        tscc_proc_4_input_1_Opts_6 = next_value_of_tscc_proc_4_input_1_Opts_6;
        tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
        tscc_proc_4_input_3_Rval_8 = next_value_of_tscc_proc_4_input_3_Rval_8;
        goto top_of_proc_4;
      }
      else
        switch (MR_tag((MR_Word) Type_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Type_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 3:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
              case (MR_Integer) 9:
              case (MR_Integer) 10:
                {
                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                  mercury__io__write_string_3_p_0((MR_String) "))");
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (MR_Word) (");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                  mercury__io__write_string_3_p_0((MR_String) "))");
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Float Float_197;
                  MR_Word Var_198;
                  MR_Word Var_199;
                  MR_Word Var_206;
                  MR_String Var_207;
                  MR_Word Var_208;
                  MR_Word Var_209;
                  MR_Word Var_210;
                  MR_Word Var_211;
                  MR_Word Var_212;
                  MR_Word Var_213;
                  MR_Word Var_214;
                  MR_Word Var_215;
                  MR_Word Var_216;
                  MR_Word Var_217;
                  MR_Word Var_218;
                  MR_Word Var_219;

                  succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) Var_198)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_198, (MR_Integer) 0))) == (MR_Integer) 11)));
                    if (succeeded)
                    {
                      Float_197 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_198, (MR_Integer) 1)));
                      Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
                      Var_207 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
                      Var_208 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) & (MR_Integer) 1);
                      Var_209 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      Var_210 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      Var_199 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                      Var_211 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                      Var_212 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                      Var_213 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                      Var_214 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                      Var_215 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                      Var_216 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                      Var_217 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                      Var_218 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                      Var_219 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                      succeeded = (Var_199 == (MR_Integer) 1);
                    }
                  }
                  if (succeeded)
                    ml_backend__mlds_to_c_data__mlds_output_float_bits_4_p_0(Opts_6, Float_197);
                  else
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_box_float(");
                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word next_value_of_tscc_proc_2_input_1_Opts_5 = Opts_6;
                  MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_8;

                  // direct tailcall eliminated
                  tscc_proc_2_input_1_Opts_5 = next_value_of_tscc_proc_2_input_1_Opts_5;
                  tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
                  goto top_of_proc_2;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word MercuryType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 1))));
                  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 2))));
                  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));

                  switch (MR_tag((MR_Word) MercuryType_22)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word next_value_of_tscc_proc_2_input_1_Opts_5 = Opts_6;
                        MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_8;

                        // direct tailcall eliminated
                        tscc_proc_2_input_1_Opts_5 = next_value_of_tscc_proc_2_input_1_Opts_5;
                        tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
                        goto top_of_proc_2;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                        mercury__io__write_string_3_p_0((MR_String) "))");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word BuiltinType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MercuryType_22, (MR_Integer) 0))));

                        switch (MR_tag((MR_Word) BuiltinType_25)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(BuiltinType_25)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Float Float_87;
                                  MR_Word Var_88;
                                  MR_Word Var_89;
                                  MR_Word Var_96;
                                  MR_String Var_97;
                                  MR_Word Var_98;
                                  MR_Word Var_99;
                                  MR_Word Var_100;
                                  MR_Word Var_101;
                                  MR_Word Var_102;
                                  MR_Word Var_103;
                                  MR_Word Var_104;
                                  MR_Word Var_105;
                                  MR_Word Var_106;
                                  MR_Word Var_107;
                                  MR_Word Var_108;
                                  MR_Word Var_109;

                                  succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0))) == (MR_Integer) 1)));
                                  if (succeeded)
                                  {
                                    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
                                    succeeded = ((((MR_tag((MR_Word) Var_88)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_88, (MR_Integer) 0))) == (MR_Integer) 11)));
                                    if (succeeded)
                                    {
                                      Float_87 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_88, (MR_Integer) 1)));
                                      Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
                                      Var_97 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
                                      Var_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) & (MR_Integer) 1);
                                      Var_99 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                      Var_100 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                      Var_89 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                      Var_101 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                      Var_102 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                                      Var_103 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                                      Var_104 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                                      Var_105 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                                      Var_106 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                                      Var_107 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                                      Var_108 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                                      Var_109 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                                      succeeded = (Var_89 == (MR_Integer) 1);
                                    }
                                  }
                                  if (succeeded)
                                    ml_backend__mlds_to_c_data__mlds_output_float_bits_4_p_0(Opts_6, Float_87);
                                  else
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "MR_box_float(");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) ")");
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                  mercury__io__write_string_3_p_0((MR_String) "))");
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (MR_Word) (");
                                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                  mercury__io__write_string_3_p_0((MR_String) "))");
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word IntType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BuiltinType_25, (MR_Integer) 0))));

                              switch (IntType_26) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                case (MR_Integer) 1:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) "))");
                                  }
                                  break;
                                case (MR_Integer) 4:
                                case (MR_Integer) 6:
                                case (MR_Integer) 2:
                                case (MR_Integer) 5:
                                case (MR_Integer) 7:
                                case (MR_Integer) 3:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (MR_Word) (");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) "))");
                                  }
                                  break;
                                case (MR_Integer) 8:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "MR_box_int64(");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) ")");
                                  }
                                  break;
                                case (MR_Integer) 9:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "MR_box_uint64(");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) ")");
                                  }
                                  break;
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                        mercury__io__write_string_3_p_0((MR_String) "))");
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                  mercury__io__write_string_3_p_0((MR_String) "))");
                }
                break;
            }
            break;
        }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(
  MR_Word tscc_proc_2_input_1_Opts_5,
  MR_Word tscc_proc_2_input_2_Rval_6)
{
  {
    MR_Word tscc_proc_1_input_1_Opts_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_3_input_1_Opts_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Opts_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Rval_8;

    // The code for TSCC PROC 2: pred ml_backend.mlds_to_c_data.mlds_output_rval/4-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_lval/4-0
    // proc 2 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_rval/4-0
    // proc 3 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_bracketed_rval/4-0
    // proc 4 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_boxed_rval/5-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Opts_5 = tscc_proc_1_input_1_Opts_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybePtag_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 0))));
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2))));
            MR_Word FieldType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
            MR_Word PtrType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

            if (((MR_tag((MR_Word) FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word QualFieldVarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 0))));
              MR_Word CtorType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 1))));
              MR_Integer Var_42;

              mercury__io__write_string_3_p_0((MR_String) "(");
              succeeded = ((MR_tag((MR_Word) MaybePtag_8)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePtag_8, (MR_Integer) 0))));
                succeeded = (Var_42 == (MR_Integer) 0);
              }
              if (succeeded)
              {
                MR_Word PtrAddrLval_22;

                succeeded = ml_backend__mlds____Unify____mlds_type_0_0(PtrType_12, CtorType_21);
                if (!(succeeded))
                  ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_5, CtorType_21);
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  PtrAddrLval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));
                  ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_5, PtrAddrLval_22);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
                else
                {
                  ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ")->");
                }
              }
              else
              {
                ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_5, CtorType_21);
                if ((MaybePtag_8 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_strip_tag(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, PtrRval_9);
                }
                else
                {
                  MR_Integer Ptag_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePtag_8, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "MR_body(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                  ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_82);
                }
                mercury__io__write_string_3_p_0((MR_String) "))->");
              }
              ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_3_p_0(QualFieldVarName_20);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_10, (MR_Integer) 0))));

              if ((FieldType_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word MercuryType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 1))));
                MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 2))));
                MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 3))));
                MR_Word Var_17;
                MR_Word Var_18;

                succeeded = ((MR_tag((MR_Word) MercuryType_14)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MercuryType_14, (MR_Integer) 0))));
                  Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MercuryType_14, (MR_Integer) 1))));
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                if ((MaybePtag_8 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_hl_mask_field(");
                  mercury__io__write_string_3_p_0((MR_String) "(MR_Word) ");
                }
                else
                {
                  MR_Integer Ptag_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePtag_8, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "MR_hl_field(");
                  ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_19);
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, PtrRval_9);
                mercury__io__write_string_3_p_0((MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, OffsetRval_13);
                mercury__io__write_string_3_p_0((MR_String) "))");
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_lval\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word _Type_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_3_input_1_Opts_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "*");
            // direct tailcall eliminated
            next_value_of_tscc_proc_3_input_1_Opts_5 = Opts_5;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_23;
            tscc_proc_3_input_1_Opts_5 = next_value_of_tscc_proc_3_input_1_Opts_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVar_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String Var_35;

            Var_35 = ml_backend__mlds_to_c_name__global_var_name_1_f_0(GlobalVar_25);
            mercury__io__write_string_3_p_0(Var_35);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word _VarType_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(LocalVarName_30);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word MLDS_ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_26, (MR_Integer) 0))));
                MR_Word GlobalVarName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_26, (MR_Integer) 1))));
                MR_Word _VarType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_4_p_0(MLDS_ModuleName_28, GlobalVarName_29);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Opts_5 = tscc_proc_2_input_1_Opts_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ScalarCommon_18 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 0));
            MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 0))));
            MR_Integer TypeNum_21;
            MR_Integer RowNum_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 3))));
            MR_Word ModuleSymName_23;
            MR_String MangledModuleName_24;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 2))));
            MR_String Var_157;
            MR_String Var_167;
            MR_Word _Type_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 1))));

            TypeNum_21 = (MR_Integer) (Var_49);
            ModuleSymName_23 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_19);
            MangledModuleName_24 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_23);
            mercury__io__write_string_3_p_0(MangledModuleName_24);
            mercury__io__write_string_3_p_0((MR_String) "_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), TypeNum_21, &Var_157);
            mercury__io__write_string_3_p_0(Var_157);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), RowNum_22, &Var_167);
            mercury__io__write_string_3_p_0(Var_167);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_90 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_91;
            MR_Integer TypeNum_93;
            MR_Integer RowNum_94;
            MR_Word ModuleSymName_95;
            MR_String MangledModuleName_96;
            MR_Word Var_98;
            MR_String Var_135;
            MR_String Var_145;
            MR_Word _Type_89;

            mercury__io__write_string_3_p_0((MR_String) "&");
            ModuleName_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 0))));
            _Type_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 1))));
            Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 2))));
            RowNum_94 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 3))));
            TypeNum_93 = (MR_Integer) (Var_98);
            ModuleSymName_95 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_91);
            MangledModuleName_96 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_95);
            mercury__io__write_string_3_p_0(MangledModuleName_96);
            mercury__io__write_string_3_p_0((MR_String) "_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), TypeNum_93, &Var_135);
            mercury__io__write_string_3_p_0(Var_135);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), RowNum_94, &Var_145);
            mercury__io__write_string_3_p_0(Var_145);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Opts_5 = Opts_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Opts_5 = next_value_of_tscc_proc_1_input_1_Opts_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Ptag_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word BaseRval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                mercury__io__write_string_3_p_0((MR_String) "MR_mkword(");
                ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_9);
                mercury__io__write_string_3_p_0((MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, BaseRval_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_4_p_0(Const_11);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Opts_6 = Opts_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_77;
                MR_Word next_value_of_tscc_proc_4_input_3_Rval_8 = SubRval_78;

                // direct tailcall eliminated
                tscc_proc_4_input_1_Opts_6 = next_value_of_tscc_proc_4_input_1_Opts_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Rval_8 = next_value_of_tscc_proc_4_input_3_Rval_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_5_p_0(Opts_5, Type_79, SubRval_80);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_data__mlds_output_cast_rval_5_p_0(Opts_5, Type_12, SubRval_13);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_data__mlds_output_unop_5_p_0(Opts_5, Unop_14, SubRval_81);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word BinOp_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RvalA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word RvalB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_c_data__mlds_output_binop_6_p_0(Opts_5, BinOp_15, RvalA_16, RvalB_17);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Opts_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "&");
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Opts_5 = Opts_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_82;
                tscc_proc_1_input_1_Opts_5 = next_value_of_tscc_proc_1_input_1_Opts_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 3))));
                MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 2))));
                MR_Word ModuleName_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 0))));
                MR_Integer TypeNum_86 = (MR_Integer) (Var_34);
                MR_Word ModuleSymName_87;
                MR_String MangledModuleName_88;
                MR_String Var_113;
                MR_String Var_123;
                MR_Integer _NumRows_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 4))));
                MR_Word _Type_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 1))));

                ModuleSymName_87 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_84);
                MangledModuleName_88 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_87);
                mercury__io__write_string_3_p_0((MR_String) "&");
                mercury__io__write_string_3_p_0(MangledModuleName_88);
                mercury__io__write_string_3_p_0((MR_String) "_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), TypeNum_86, &Var_113);
                mercury__io__write_string_3_p_0(Var_113);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), StartRowNum_27, &Var_123);
                mercury__io__write_string_3_p_0(Var_123);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, RowRval_26);
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
      MR_Word Opts_5 = tscc_proc_3_input_1_Opts_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
        MR_Word Var_12;

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_12 = (MR_Word) (MR_body((MR_Word) (Var_15), (MR_Integer) 1));
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_2_input_1_Opts_5 = Opts_5;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        tscc_proc_2_input_1_Opts_5 = next_value_of_tscc_proc_2_input_1_Opts_5;
        tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
        goto top_of_proc_2;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Opts_6 = tscc_proc_4_input_1_Opts_6;
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Rval_8 = tscc_proc_4_input_3_Rval_8;
      MR_bool succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0))) == (MR_Integer) 4)));
      MR_Word InnerRval_11;
      MR_Word OtherType_10;

      if (succeeded)
      {
        OtherType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
        InnerRval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 2))));
        succeeded = ml_backend__mlds____Unify____mlds_type_0_0(Type_7, OtherType_10);
        if (!(succeeded))
        {
          MR_Word Var_46;

          Var_46 = ml_backend__mlds_to_c_data__is_an_address_1_f_0(InnerRval_11);
          succeeded = (Var_46 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_4_input_1_Opts_6 = Opts_6;
        MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_7;
        MR_Word next_value_of_tscc_proc_4_input_3_Rval_8 = InnerRval_11;

        // direct tailcall eliminated
        tscc_proc_4_input_1_Opts_6 = next_value_of_tscc_proc_4_input_1_Opts_6;
        tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
        tscc_proc_4_input_3_Rval_8 = next_value_of_tscc_proc_4_input_3_Rval_8;
        goto top_of_proc_4;
      }
      else
        switch (MR_tag((MR_Word) Type_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Type_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 3:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
              case (MR_Integer) 9:
              case (MR_Integer) 10:
                {
                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                  mercury__io__write_string_3_p_0((MR_String) "))");
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (MR_Word) (");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                  mercury__io__write_string_3_p_0((MR_String) "))");
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Float Float_197;
                  MR_Word Var_198;
                  MR_Word Var_199;
                  MR_Word Var_206;
                  MR_String Var_207;
                  MR_Word Var_208;
                  MR_Word Var_209;
                  MR_Word Var_210;
                  MR_Word Var_211;
                  MR_Word Var_212;
                  MR_Word Var_213;
                  MR_Word Var_214;
                  MR_Word Var_215;
                  MR_Word Var_216;
                  MR_Word Var_217;
                  MR_Word Var_218;
                  MR_Word Var_219;

                  succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) Var_198)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_198, (MR_Integer) 0))) == (MR_Integer) 11)));
                    if (succeeded)
                    {
                      Float_197 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_198, (MR_Integer) 1)));
                      Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
                      Var_207 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
                      Var_208 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) & (MR_Integer) 1);
                      Var_209 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      Var_210 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      Var_199 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                      Var_211 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                      Var_212 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                      Var_213 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                      Var_214 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                      Var_215 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                      Var_216 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                      Var_217 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                      Var_218 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                      Var_219 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                      succeeded = (Var_199 == (MR_Integer) 1);
                    }
                  }
                  if (succeeded)
                    ml_backend__mlds_to_c_data__mlds_output_float_bits_4_p_0(Opts_6, Float_197);
                  else
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_box_float(");
                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word next_value_of_tscc_proc_2_input_1_Opts_5 = Opts_6;
                  MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_8;

                  // direct tailcall eliminated
                  tscc_proc_2_input_1_Opts_5 = next_value_of_tscc_proc_2_input_1_Opts_5;
                  tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
                  goto top_of_proc_2;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word MercuryType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 1))));
                  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 2))));
                  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));

                  switch (MR_tag((MR_Word) MercuryType_22)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word next_value_of_tscc_proc_2_input_1_Opts_5 = Opts_6;
                        MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_8;

                        // direct tailcall eliminated
                        tscc_proc_2_input_1_Opts_5 = next_value_of_tscc_proc_2_input_1_Opts_5;
                        tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
                        goto top_of_proc_2;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                        mercury__io__write_string_3_p_0((MR_String) "))");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word BuiltinType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MercuryType_22, (MR_Integer) 0))));

                        switch (MR_tag((MR_Word) BuiltinType_25)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(BuiltinType_25)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Float Float_87;
                                  MR_Word Var_88;
                                  MR_Word Var_89;
                                  MR_Word Var_96;
                                  MR_String Var_97;
                                  MR_Word Var_98;
                                  MR_Word Var_99;
                                  MR_Word Var_100;
                                  MR_Word Var_101;
                                  MR_Word Var_102;
                                  MR_Word Var_103;
                                  MR_Word Var_104;
                                  MR_Word Var_105;
                                  MR_Word Var_106;
                                  MR_Word Var_107;
                                  MR_Word Var_108;
                                  MR_Word Var_109;

                                  succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0))) == (MR_Integer) 1)));
                                  if (succeeded)
                                  {
                                    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
                                    succeeded = ((((MR_tag((MR_Word) Var_88)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_88, (MR_Integer) 0))) == (MR_Integer) 11)));
                                    if (succeeded)
                                    {
                                      Float_87 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_88, (MR_Integer) 1)));
                                      Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
                                      Var_97 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
                                      Var_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) & (MR_Integer) 1);
                                      Var_99 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                      Var_100 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                      Var_89 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                      Var_101 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                      Var_102 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                                      Var_103 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                                      Var_104 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                                      Var_105 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                                      Var_106 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                                      Var_107 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                                      Var_108 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                                      Var_109 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                                      succeeded = (Var_89 == (MR_Integer) 1);
                                    }
                                  }
                                  if (succeeded)
                                    ml_backend__mlds_to_c_data__mlds_output_float_bits_4_p_0(Opts_6, Float_87);
                                  else
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "MR_box_float(");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) ")");
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                  mercury__io__write_string_3_p_0((MR_String) "))");
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (MR_Word) (");
                                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                  mercury__io__write_string_3_p_0((MR_String) "))");
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word IntType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BuiltinType_25, (MR_Integer) 0))));

                              switch (IntType_26) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                case (MR_Integer) 1:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) "))");
                                  }
                                  break;
                                case (MR_Integer) 4:
                                case (MR_Integer) 6:
                                case (MR_Integer) 2:
                                case (MR_Integer) 5:
                                case (MR_Integer) 7:
                                case (MR_Integer) 3:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (MR_Word) (");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) "))");
                                  }
                                  break;
                                case (MR_Integer) 8:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "MR_box_int64(");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) ")");
                                  }
                                  break;
                                case (MR_Integer) 9:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "MR_box_uint64(");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) ")");
                                  }
                                  break;
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                        mercury__io__write_string_3_p_0((MR_String) "))");
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                  mercury__io__write_string_3_p_0((MR_String) "))");
                }
                break;
            }
            break;
        }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(
  MR_Word tscc_proc_3_input_1_Opts_5,
  MR_Word tscc_proc_3_input_2_Rval_6)
{
  {
    MR_Word tscc_proc_1_input_1_Opts_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_2_input_1_Opts_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Opts_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Rval_8;

    // The code for TSCC PROC 3: pred ml_backend.mlds_to_c_data.mlds_output_bracketed_rval/4-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_lval/4-0
    // proc 2 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_rval/4-0
    // proc 3 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_bracketed_rval/4-0
    // proc 4 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_boxed_rval/5-0

    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word Opts_5 = tscc_proc_1_input_1_Opts_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybePtag_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 0))));
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2))));
            MR_Word FieldType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
            MR_Word PtrType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

            if (((MR_tag((MR_Word) FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word QualFieldVarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 0))));
              MR_Word CtorType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 1))));
              MR_Integer Var_42;

              mercury__io__write_string_3_p_0((MR_String) "(");
              succeeded = ((MR_tag((MR_Word) MaybePtag_8)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePtag_8, (MR_Integer) 0))));
                succeeded = (Var_42 == (MR_Integer) 0);
              }
              if (succeeded)
              {
                MR_Word PtrAddrLval_22;

                succeeded = ml_backend__mlds____Unify____mlds_type_0_0(PtrType_12, CtorType_21);
                if (!(succeeded))
                  ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_5, CtorType_21);
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  PtrAddrLval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));
                  ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_5, PtrAddrLval_22);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
                else
                {
                  ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ")->");
                }
              }
              else
              {
                ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_5, CtorType_21);
                if ((MaybePtag_8 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_strip_tag(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, PtrRval_9);
                }
                else
                {
                  MR_Integer Ptag_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePtag_8, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "MR_body(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                  ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_82);
                }
                mercury__io__write_string_3_p_0((MR_String) "))->");
              }
              ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_3_p_0(QualFieldVarName_20);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_10, (MR_Integer) 0))));

              if ((FieldType_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word MercuryType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 1))));
                MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 2))));
                MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 3))));
                MR_Word Var_17;
                MR_Word Var_18;

                succeeded = ((MR_tag((MR_Word) MercuryType_14)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MercuryType_14, (MR_Integer) 0))));
                  Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MercuryType_14, (MR_Integer) 1))));
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                if ((MaybePtag_8 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_hl_mask_field(");
                  mercury__io__write_string_3_p_0((MR_String) "(MR_Word) ");
                }
                else
                {
                  MR_Integer Ptag_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePtag_8, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "MR_hl_field(");
                  ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_19);
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, PtrRval_9);
                mercury__io__write_string_3_p_0((MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, OffsetRval_13);
                mercury__io__write_string_3_p_0((MR_String) "))");
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_lval\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word _Type_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_3_input_1_Opts_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "*");
            // direct tailcall eliminated
            next_value_of_tscc_proc_3_input_1_Opts_5 = Opts_5;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_23;
            tscc_proc_3_input_1_Opts_5 = next_value_of_tscc_proc_3_input_1_Opts_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVar_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String Var_35;

            Var_35 = ml_backend__mlds_to_c_name__global_var_name_1_f_0(GlobalVar_25);
            mercury__io__write_string_3_p_0(Var_35);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word _VarType_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(LocalVarName_30);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word MLDS_ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_26, (MR_Integer) 0))));
                MR_Word GlobalVarName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_26, (MR_Integer) 1))));
                MR_Word _VarType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_4_p_0(MLDS_ModuleName_28, GlobalVarName_29);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Opts_5 = tscc_proc_2_input_1_Opts_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ScalarCommon_18 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 0));
            MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 0))));
            MR_Integer TypeNum_21;
            MR_Integer RowNum_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 3))));
            MR_Word ModuleSymName_23;
            MR_String MangledModuleName_24;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 2))));
            MR_String Var_157;
            MR_String Var_167;
            MR_Word _Type_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 1))));

            TypeNum_21 = (MR_Integer) (Var_49);
            ModuleSymName_23 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_19);
            MangledModuleName_24 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_23);
            mercury__io__write_string_3_p_0(MangledModuleName_24);
            mercury__io__write_string_3_p_0((MR_String) "_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), TypeNum_21, &Var_157);
            mercury__io__write_string_3_p_0(Var_157);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), RowNum_22, &Var_167);
            mercury__io__write_string_3_p_0(Var_167);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_90 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_91;
            MR_Integer TypeNum_93;
            MR_Integer RowNum_94;
            MR_Word ModuleSymName_95;
            MR_String MangledModuleName_96;
            MR_Word Var_98;
            MR_String Var_135;
            MR_String Var_145;
            MR_Word _Type_89;

            mercury__io__write_string_3_p_0((MR_String) "&");
            ModuleName_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 0))));
            _Type_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 1))));
            Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 2))));
            RowNum_94 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 3))));
            TypeNum_93 = (MR_Integer) (Var_98);
            ModuleSymName_95 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_91);
            MangledModuleName_96 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_95);
            mercury__io__write_string_3_p_0(MangledModuleName_96);
            mercury__io__write_string_3_p_0((MR_String) "_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), TypeNum_93, &Var_135);
            mercury__io__write_string_3_p_0(Var_135);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), RowNum_94, &Var_145);
            mercury__io__write_string_3_p_0(Var_145);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Opts_5 = Opts_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Opts_5 = next_value_of_tscc_proc_1_input_1_Opts_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Ptag_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word BaseRval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                mercury__io__write_string_3_p_0((MR_String) "MR_mkword(");
                ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_9);
                mercury__io__write_string_3_p_0((MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, BaseRval_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_4_p_0(Const_11);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Opts_6 = Opts_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_77;
                MR_Word next_value_of_tscc_proc_4_input_3_Rval_8 = SubRval_78;

                // direct tailcall eliminated
                tscc_proc_4_input_1_Opts_6 = next_value_of_tscc_proc_4_input_1_Opts_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Rval_8 = next_value_of_tscc_proc_4_input_3_Rval_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_5_p_0(Opts_5, Type_79, SubRval_80);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_data__mlds_output_cast_rval_5_p_0(Opts_5, Type_12, SubRval_13);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_data__mlds_output_unop_5_p_0(Opts_5, Unop_14, SubRval_81);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word BinOp_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RvalA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word RvalB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_c_data__mlds_output_binop_6_p_0(Opts_5, BinOp_15, RvalA_16, RvalB_17);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Opts_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "&");
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Opts_5 = Opts_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_82;
                tscc_proc_1_input_1_Opts_5 = next_value_of_tscc_proc_1_input_1_Opts_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 3))));
                MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 2))));
                MR_Word ModuleName_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 0))));
                MR_Integer TypeNum_86 = (MR_Integer) (Var_34);
                MR_Word ModuleSymName_87;
                MR_String MangledModuleName_88;
                MR_String Var_113;
                MR_String Var_123;
                MR_Integer _NumRows_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 4))));
                MR_Word _Type_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 1))));

                ModuleSymName_87 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_84);
                MangledModuleName_88 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_87);
                mercury__io__write_string_3_p_0((MR_String) "&");
                mercury__io__write_string_3_p_0(MangledModuleName_88);
                mercury__io__write_string_3_p_0((MR_String) "_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), TypeNum_86, &Var_113);
                mercury__io__write_string_3_p_0(Var_113);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), StartRowNum_27, &Var_123);
                mercury__io__write_string_3_p_0(Var_123);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, RowRval_26);
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
      MR_Word Opts_5 = tscc_proc_3_input_1_Opts_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
        MR_Word Var_12;

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_12 = (MR_Word) (MR_body((MR_Word) (Var_15), (MR_Integer) 1));
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_2_input_1_Opts_5 = Opts_5;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        tscc_proc_2_input_1_Opts_5 = next_value_of_tscc_proc_2_input_1_Opts_5;
        tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
        goto top_of_proc_2;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Opts_6 = tscc_proc_4_input_1_Opts_6;
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Rval_8 = tscc_proc_4_input_3_Rval_8;
      MR_bool succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0))) == (MR_Integer) 4)));
      MR_Word InnerRval_11;
      MR_Word OtherType_10;

      if (succeeded)
      {
        OtherType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
        InnerRval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 2))));
        succeeded = ml_backend__mlds____Unify____mlds_type_0_0(Type_7, OtherType_10);
        if (!(succeeded))
        {
          MR_Word Var_46;

          Var_46 = ml_backend__mlds_to_c_data__is_an_address_1_f_0(InnerRval_11);
          succeeded = (Var_46 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_4_input_1_Opts_6 = Opts_6;
        MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_7;
        MR_Word next_value_of_tscc_proc_4_input_3_Rval_8 = InnerRval_11;

        // direct tailcall eliminated
        tscc_proc_4_input_1_Opts_6 = next_value_of_tscc_proc_4_input_1_Opts_6;
        tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
        tscc_proc_4_input_3_Rval_8 = next_value_of_tscc_proc_4_input_3_Rval_8;
        goto top_of_proc_4;
      }
      else
        switch (MR_tag((MR_Word) Type_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Type_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 3:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
              case (MR_Integer) 9:
              case (MR_Integer) 10:
                {
                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                  mercury__io__write_string_3_p_0((MR_String) "))");
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (MR_Word) (");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                  mercury__io__write_string_3_p_0((MR_String) "))");
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Float Float_197;
                  MR_Word Var_198;
                  MR_Word Var_199;
                  MR_Word Var_206;
                  MR_String Var_207;
                  MR_Word Var_208;
                  MR_Word Var_209;
                  MR_Word Var_210;
                  MR_Word Var_211;
                  MR_Word Var_212;
                  MR_Word Var_213;
                  MR_Word Var_214;
                  MR_Word Var_215;
                  MR_Word Var_216;
                  MR_Word Var_217;
                  MR_Word Var_218;
                  MR_Word Var_219;

                  succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) Var_198)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_198, (MR_Integer) 0))) == (MR_Integer) 11)));
                    if (succeeded)
                    {
                      Float_197 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_198, (MR_Integer) 1)));
                      Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
                      Var_207 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
                      Var_208 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) & (MR_Integer) 1);
                      Var_209 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      Var_210 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      Var_199 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                      Var_211 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                      Var_212 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                      Var_213 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                      Var_214 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                      Var_215 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                      Var_216 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                      Var_217 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                      Var_218 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                      Var_219 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                      succeeded = (Var_199 == (MR_Integer) 1);
                    }
                  }
                  if (succeeded)
                    ml_backend__mlds_to_c_data__mlds_output_float_bits_4_p_0(Opts_6, Float_197);
                  else
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_box_float(");
                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word next_value_of_tscc_proc_2_input_1_Opts_5 = Opts_6;
                  MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_8;

                  // direct tailcall eliminated
                  tscc_proc_2_input_1_Opts_5 = next_value_of_tscc_proc_2_input_1_Opts_5;
                  tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
                  goto top_of_proc_2;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word MercuryType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 1))));
                  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 2))));
                  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));

                  switch (MR_tag((MR_Word) MercuryType_22)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word next_value_of_tscc_proc_2_input_1_Opts_5 = Opts_6;
                        MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_8;

                        // direct tailcall eliminated
                        tscc_proc_2_input_1_Opts_5 = next_value_of_tscc_proc_2_input_1_Opts_5;
                        tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
                        goto top_of_proc_2;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                        mercury__io__write_string_3_p_0((MR_String) "))");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word BuiltinType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MercuryType_22, (MR_Integer) 0))));

                        switch (MR_tag((MR_Word) BuiltinType_25)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(BuiltinType_25)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Float Float_87;
                                  MR_Word Var_88;
                                  MR_Word Var_89;
                                  MR_Word Var_96;
                                  MR_String Var_97;
                                  MR_Word Var_98;
                                  MR_Word Var_99;
                                  MR_Word Var_100;
                                  MR_Word Var_101;
                                  MR_Word Var_102;
                                  MR_Word Var_103;
                                  MR_Word Var_104;
                                  MR_Word Var_105;
                                  MR_Word Var_106;
                                  MR_Word Var_107;
                                  MR_Word Var_108;
                                  MR_Word Var_109;

                                  succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0))) == (MR_Integer) 1)));
                                  if (succeeded)
                                  {
                                    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
                                    succeeded = ((((MR_tag((MR_Word) Var_88)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_88, (MR_Integer) 0))) == (MR_Integer) 11)));
                                    if (succeeded)
                                    {
                                      Float_87 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_88, (MR_Integer) 1)));
                                      Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
                                      Var_97 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
                                      Var_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) & (MR_Integer) 1);
                                      Var_99 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                      Var_100 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                      Var_89 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                      Var_101 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                      Var_102 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                                      Var_103 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                                      Var_104 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                                      Var_105 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                                      Var_106 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                                      Var_107 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                                      Var_108 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                                      Var_109 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                                      succeeded = (Var_89 == (MR_Integer) 1);
                                    }
                                  }
                                  if (succeeded)
                                    ml_backend__mlds_to_c_data__mlds_output_float_bits_4_p_0(Opts_6, Float_87);
                                  else
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "MR_box_float(");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) ")");
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                  mercury__io__write_string_3_p_0((MR_String) "))");
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (MR_Word) (");
                                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                  mercury__io__write_string_3_p_0((MR_String) "))");
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word IntType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BuiltinType_25, (MR_Integer) 0))));

                              switch (IntType_26) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                case (MR_Integer) 1:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) "))");
                                  }
                                  break;
                                case (MR_Integer) 4:
                                case (MR_Integer) 6:
                                case (MR_Integer) 2:
                                case (MR_Integer) 5:
                                case (MR_Integer) 7:
                                case (MR_Integer) 3:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (MR_Word) (");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) "))");
                                  }
                                  break;
                                case (MR_Integer) 8:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "MR_box_int64(");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) ")");
                                  }
                                  break;
                                case (MR_Integer) 9:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "MR_box_uint64(");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) ")");
                                  }
                                  break;
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                        mercury__io__write_string_3_p_0((MR_String) "))");
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                  mercury__io__write_string_3_p_0((MR_String) "))");
                }
                break;
            }
            break;
        }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_boxed_rval_5_p_0(
  MR_Word tscc_proc_4_input_1_Opts_6,
  MR_Word tscc_proc_4_input_2_Type_7,
  MR_Word tscc_proc_4_input_3_Rval_8)
{
  {
    MR_Word tscc_proc_1_input_1_Opts_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_2_input_1_Opts_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_3_input_1_Opts_5;
    MR_Word tscc_proc_3_input_2_Rval_6;

    // The code for TSCC PROC 4: pred ml_backend.mlds_to_c_data.mlds_output_boxed_rval/5-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_lval/4-0
    // proc 2 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_rval/4-0
    // proc 3 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_bracketed_rval/4-0
    // proc 4 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_boxed_rval/5-0

    goto top_of_proc_4;
  top_of_proc_1:;
    {
      MR_Word Opts_5 = tscc_proc_1_input_1_Opts_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybePtag_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 0))));
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2))));
            MR_Word FieldType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
            MR_Word PtrType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

            if (((MR_tag((MR_Word) FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word QualFieldVarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 0))));
              MR_Word CtorType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 1))));
              MR_Integer Var_42;

              mercury__io__write_string_3_p_0((MR_String) "(");
              succeeded = ((MR_tag((MR_Word) MaybePtag_8)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePtag_8, (MR_Integer) 0))));
                succeeded = (Var_42 == (MR_Integer) 0);
              }
              if (succeeded)
              {
                MR_Word PtrAddrLval_22;

                succeeded = ml_backend__mlds____Unify____mlds_type_0_0(PtrType_12, CtorType_21);
                if (!(succeeded))
                  ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_5, CtorType_21);
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  PtrAddrLval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));
                  ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_5, PtrAddrLval_22);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
                else
                {
                  ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ")->");
                }
              }
              else
              {
                ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_5, CtorType_21);
                if ((MaybePtag_8 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_strip_tag(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, PtrRval_9);
                }
                else
                {
                  MR_Integer Ptag_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePtag_8, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "MR_body(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                  ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_82);
                }
                mercury__io__write_string_3_p_0((MR_String) "))->");
              }
              ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_3_p_0(QualFieldVarName_20);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_10, (MR_Integer) 0))));

              if ((FieldType_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word MercuryType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 1))));
                MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 2))));
                MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 3))));
                MR_Word Var_17;
                MR_Word Var_18;

                succeeded = ((MR_tag((MR_Word) MercuryType_14)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MercuryType_14, (MR_Integer) 0))));
                  Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MercuryType_14, (MR_Integer) 1))));
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                if ((MaybePtag_8 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_hl_mask_field(");
                  mercury__io__write_string_3_p_0((MR_String) "(MR_Word) ");
                }
                else
                {
                  MR_Integer Ptag_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePtag_8, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "MR_hl_field(");
                  ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_19);
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, PtrRval_9);
                mercury__io__write_string_3_p_0((MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, OffsetRval_13);
                mercury__io__write_string_3_p_0((MR_String) "))");
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_lval\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word _Type_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_3_input_1_Opts_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "*");
            // direct tailcall eliminated
            next_value_of_tscc_proc_3_input_1_Opts_5 = Opts_5;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_23;
            tscc_proc_3_input_1_Opts_5 = next_value_of_tscc_proc_3_input_1_Opts_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVar_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String Var_35;

            Var_35 = ml_backend__mlds_to_c_name__global_var_name_1_f_0(GlobalVar_25);
            mercury__io__write_string_3_p_0(Var_35);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word _VarType_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(LocalVarName_30);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
                MR_Word MLDS_ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_26, (MR_Integer) 0))));
                MR_Word GlobalVarName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_26, (MR_Integer) 1))));
                MR_Word _VarType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_4_p_0(MLDS_ModuleName_28, GlobalVarName_29);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Opts_5 = tscc_proc_2_input_1_Opts_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ScalarCommon_18 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 0));
            MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 0))));
            MR_Integer TypeNum_21;
            MR_Integer RowNum_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 3))));
            MR_Word ModuleSymName_23;
            MR_String MangledModuleName_24;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 2))));
            MR_String Var_157;
            MR_String Var_167;
            MR_Word _Type_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 1))));

            TypeNum_21 = (MR_Integer) (Var_49);
            ModuleSymName_23 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_19);
            MangledModuleName_24 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_23);
            mercury__io__write_string_3_p_0(MangledModuleName_24);
            mercury__io__write_string_3_p_0((MR_String) "_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), TypeNum_21, &Var_157);
            mercury__io__write_string_3_p_0(Var_157);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), RowNum_22, &Var_167);
            mercury__io__write_string_3_p_0(Var_167);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_90 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_91;
            MR_Integer TypeNum_93;
            MR_Integer RowNum_94;
            MR_Word ModuleSymName_95;
            MR_String MangledModuleName_96;
            MR_Word Var_98;
            MR_String Var_135;
            MR_String Var_145;
            MR_Word _Type_89;

            mercury__io__write_string_3_p_0((MR_String) "&");
            ModuleName_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 0))));
            _Type_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 1))));
            Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 2))));
            RowNum_94 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_90, (MR_Integer) 3))));
            TypeNum_93 = (MR_Integer) (Var_98);
            ModuleSymName_95 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_91);
            MangledModuleName_96 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_95);
            mercury__io__write_string_3_p_0(MangledModuleName_96);
            mercury__io__write_string_3_p_0((MR_String) "_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), TypeNum_93, &Var_135);
            mercury__io__write_string_3_p_0(Var_135);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), RowNum_94, &Var_145);
            mercury__io__write_string_3_p_0(Var_145);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Opts_5 = Opts_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Opts_5 = next_value_of_tscc_proc_1_input_1_Opts_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Ptag_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word BaseRval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                mercury__io__write_string_3_p_0((MR_String) "MR_mkword(");
                ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_9);
                mercury__io__write_string_3_p_0((MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, BaseRval_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_4_p_0(Const_11);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Opts_6 = Opts_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_77;
                MR_Word next_value_of_tscc_proc_4_input_3_Rval_8 = SubRval_78;

                // direct tailcall eliminated
                tscc_proc_4_input_1_Opts_6 = next_value_of_tscc_proc_4_input_1_Opts_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Rval_8 = next_value_of_tscc_proc_4_input_3_Rval_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_5_p_0(Opts_5, Type_79, SubRval_80);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_data__mlds_output_cast_rval_5_p_0(Opts_5, Type_12, SubRval_13);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_c_data__mlds_output_unop_5_p_0(Opts_5, Unop_14, SubRval_81);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word BinOp_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RvalA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word RvalB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_c_data__mlds_output_binop_6_p_0(Opts_5, BinOp_15, RvalA_16, RvalB_17);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Opts_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "&");
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Opts_5 = Opts_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_82;
                tscc_proc_1_input_1_Opts_5 = next_value_of_tscc_proc_1_input_1_Opts_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 3))));
                MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 2))));
                MR_Word ModuleName_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 0))));
                MR_Integer TypeNum_86 = (MR_Integer) (Var_34);
                MR_Word ModuleSymName_87;
                MR_String MangledModuleName_88;
                MR_String Var_113;
                MR_String Var_123;
                MR_Integer _NumRows_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 4))));
                MR_Word _Type_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 1))));

                ModuleSymName_87 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_84);
                MangledModuleName_88 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_87);
                mercury__io__write_string_3_p_0((MR_String) "&");
                mercury__io__write_string_3_p_0(MangledModuleName_88);
                mercury__io__write_string_3_p_0((MR_String) "_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), TypeNum_86, &Var_113);
                mercury__io__write_string_3_p_0(Var_113);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), StartRowNum_27, &Var_123);
                mercury__io__write_string_3_p_0(Var_123);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, RowRval_26);
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
      MR_Word Opts_5 = tscc_proc_3_input_1_Opts_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
        MR_Word Var_12;

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_12 = (MR_Word) (MR_body((MR_Word) (Var_15), (MR_Integer) 1));
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_2_input_1_Opts_5 = Opts_5;
        MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        tscc_proc_2_input_1_Opts_5 = next_value_of_tscc_proc_2_input_1_Opts_5;
        tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
        goto top_of_proc_2;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Opts_6 = tscc_proc_4_input_1_Opts_6;
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Rval_8 = tscc_proc_4_input_3_Rval_8;
      MR_bool succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0))) == (MR_Integer) 4)));
      MR_Word InnerRval_11;
      MR_Word OtherType_10;

      if (succeeded)
      {
        OtherType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
        InnerRval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 2))));
        succeeded = ml_backend__mlds____Unify____mlds_type_0_0(Type_7, OtherType_10);
        if (!(succeeded))
        {
          MR_Word Var_46;

          Var_46 = ml_backend__mlds_to_c_data__is_an_address_1_f_0(InnerRval_11);
          succeeded = (Var_46 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_4_input_1_Opts_6 = Opts_6;
        MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_7;
        MR_Word next_value_of_tscc_proc_4_input_3_Rval_8 = InnerRval_11;

        // direct tailcall eliminated
        tscc_proc_4_input_1_Opts_6 = next_value_of_tscc_proc_4_input_1_Opts_6;
        tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
        tscc_proc_4_input_3_Rval_8 = next_value_of_tscc_proc_4_input_3_Rval_8;
        goto top_of_proc_4;
      }
      else
        switch (MR_tag((MR_Word) Type_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Type_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 3:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
              case (MR_Integer) 9:
              case (MR_Integer) 10:
                {
                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                  mercury__io__write_string_3_p_0((MR_String) "))");
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (MR_Word) (");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                  mercury__io__write_string_3_p_0((MR_String) "))");
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Float Float_197;
                  MR_Word Var_198;
                  MR_Word Var_199;
                  MR_Word Var_206;
                  MR_String Var_207;
                  MR_Word Var_208;
                  MR_Word Var_209;
                  MR_Word Var_210;
                  MR_Word Var_211;
                  MR_Word Var_212;
                  MR_Word Var_213;
                  MR_Word Var_214;
                  MR_Word Var_215;
                  MR_Word Var_216;
                  MR_Word Var_217;
                  MR_Word Var_218;
                  MR_Word Var_219;

                  succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) Var_198)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_198, (MR_Integer) 0))) == (MR_Integer) 11)));
                    if (succeeded)
                    {
                      Float_197 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_198, (MR_Integer) 1)));
                      Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
                      Var_207 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
                      Var_208 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) & (MR_Integer) 1);
                      Var_209 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      Var_210 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      Var_199 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                      Var_211 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                      Var_212 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                      Var_213 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                      Var_214 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                      Var_215 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                      Var_216 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                      Var_217 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                      Var_218 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                      Var_219 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                      succeeded = (Var_199 == (MR_Integer) 1);
                    }
                  }
                  if (succeeded)
                    ml_backend__mlds_to_c_data__mlds_output_float_bits_4_p_0(Opts_6, Float_197);
                  else
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_box_float(");
                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word next_value_of_tscc_proc_2_input_1_Opts_5 = Opts_6;
                  MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_8;

                  // direct tailcall eliminated
                  tscc_proc_2_input_1_Opts_5 = next_value_of_tscc_proc_2_input_1_Opts_5;
                  tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
                  goto top_of_proc_2;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word MercuryType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 1))));
                  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 2))));
                  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));

                  switch (MR_tag((MR_Word) MercuryType_22)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word next_value_of_tscc_proc_2_input_1_Opts_5 = Opts_6;
                        MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_8;

                        // direct tailcall eliminated
                        tscc_proc_2_input_1_Opts_5 = next_value_of_tscc_proc_2_input_1_Opts_5;
                        tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
                        goto top_of_proc_2;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                        mercury__io__write_string_3_p_0((MR_String) "))");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word BuiltinType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MercuryType_22, (MR_Integer) 0))));

                        switch (MR_tag((MR_Word) BuiltinType_25)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(BuiltinType_25)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Float Float_87;
                                  MR_Word Var_88;
                                  MR_Word Var_89;
                                  MR_Word Var_96;
                                  MR_String Var_97;
                                  MR_Word Var_98;
                                  MR_Word Var_99;
                                  MR_Word Var_100;
                                  MR_Word Var_101;
                                  MR_Word Var_102;
                                  MR_Word Var_103;
                                  MR_Word Var_104;
                                  MR_Word Var_105;
                                  MR_Word Var_106;
                                  MR_Word Var_107;
                                  MR_Word Var_108;
                                  MR_Word Var_109;

                                  succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0))) == (MR_Integer) 1)));
                                  if (succeeded)
                                  {
                                    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
                                    succeeded = ((((MR_tag((MR_Word) Var_88)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_88, (MR_Integer) 0))) == (MR_Integer) 11)));
                                    if (succeeded)
                                    {
                                      Float_87 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_88, (MR_Integer) 1)));
                                      Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
                                      Var_97 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
                                      Var_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) & (MR_Integer) 1);
                                      Var_99 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                      Var_100 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                      Var_89 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                      Var_101 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                      Var_102 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                                      Var_103 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                                      Var_104 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                                      Var_105 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                                      Var_106 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                                      Var_107 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                                      Var_108 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                                      Var_109 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                                      succeeded = (Var_89 == (MR_Integer) 1);
                                    }
                                  }
                                  if (succeeded)
                                    ml_backend__mlds_to_c_data__mlds_output_float_bits_4_p_0(Opts_6, Float_87);
                                  else
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "MR_box_float(");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) ")");
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                  mercury__io__write_string_3_p_0((MR_String) "))");
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (MR_Word) (");
                                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                  mercury__io__write_string_3_p_0((MR_String) "))");
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word IntType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BuiltinType_25, (MR_Integer) 0))));

                              switch (IntType_26) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                case (MR_Integer) 1:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) "))");
                                  }
                                  break;
                                case (MR_Integer) 4:
                                case (MR_Integer) 6:
                                case (MR_Integer) 2:
                                case (MR_Integer) 5:
                                case (MR_Integer) 7:
                                case (MR_Integer) 3:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (MR_Word) (");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) "))");
                                  }
                                  break;
                                case (MR_Integer) 8:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "MR_box_int64(");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) ")");
                                  }
                                  break;
                                case (MR_Integer) 9:
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "MR_box_uint64(");
                                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                                    mercury__io__write_string_3_p_0((MR_String) ")");
                                  }
                                  break;
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                        mercury__io__write_string_3_p_0((MR_String) "))");
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "((MR_Box) (");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                  mercury__io__write_string_3_p_0((MR_String) "))");
                }
                break;
            }
            break;
        }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(
  MR_Word Opts_5,
  MR_Word Rval_6)
{
  {
    MR_bool succeeded;

    if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 6))))
      succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 5))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "(");
      ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, Rval_6);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    else
      ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_5, Rval_6);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_binop_6_p_0(
  MR_Word Opts_7,
  MR_Word Op_8,
  MR_Word X_9,
  MR_Word Y_10)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Op_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Op_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "&&");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "||");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_body(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer YN_13;
              MR_Word Var_165;

              mercury__io__write_string_3_p_0((MR_String) "MR_nth_code_unit(");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              succeeded = ((((MR_tag((MR_Word) Y_10)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Y_10, (MR_Integer) 0))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_10, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_165)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                  YN_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_165, (MR_Integer) 0))));
              }
              if (succeeded)
                mercury__io__write_int_3_p_0(YN_13);
              else
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "==");
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "0)");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "!=");
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "0)");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "<");
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "0)");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) ">");
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "0)");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "<=");
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "0)");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) ">=");
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "0)");
            }
            break;
          case (MR_Integer) 10:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_strcmp(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 11:
            {
              mercury__io__write_string_3_p_0((MR_String) "(((MR_Unsigned) ");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ") <= ((MR_Unsigned) ");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
            break;
          case (MR_Integer) 12:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "+");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 13:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "-");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 14:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "*");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 15:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "/");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 16:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "==");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 17:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "!=");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 18:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "<");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 19:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) ">");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 20:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "<=");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 21:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) ">=");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word PtrRval_32;

              mercury__io__write_string_3_p_0((MR_String) "MR_float_from_dword");
              succeeded = ml_backend__mlds_to_c_data__is_aligned_dword_field_3_p_0(X_9, Y_10, &PtrRval_32);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "_ptr(MR_dword_ptr(");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, PtrRval_32);
                mercury__io__write_string_3_p_0((MR_String) "))");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word PtrRval_323;

              mercury__io__write_string_3_p_0((MR_String) "MR_int64_from_dword");
              succeeded = ml_backend__mlds_to_c_data__is_aligned_dword_field_3_p_0(X_9, Y_10, &PtrRval_323);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "_ptr(MR_dword_ptr(");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, PtrRval_323);
                mercury__io__write_string_3_p_0((MR_String) "))");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 24:
            {
              MR_Word PtrRval_940;

              mercury__io__write_string_3_p_0((MR_String) "MR_uint64_from_dword");
              succeeded = ml_backend__mlds_to_c_data__is_aligned_dword_field_3_p_0(X_9, Y_10, &PtrRval_940);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "_ptr(MR_dword_ptr(");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, PtrRval_940);
                mercury__io__write_string_3_p_0((MR_String) "))");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 25:
            {
              mercury__io__write_string_3_p_0((MR_String) "(((MR_Word) ");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ") == ((MR_Word) ");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
            break;
          case (MR_Integer) 26:
          case (MR_Integer) 27:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_binop\'/6", (MR_String) "compound_compare_binop");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Op_8, (MR_Integer) 0))));

          switch (IntType_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
                mercury__io__write_string_3_p_0((MR_String) ") ((");
                mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                mercury__io__write_string_3_p_0((MR_String) "+");
                mercury__io__write_string_3_p_0((MR_String) " (");
                mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                mercury__io__write_string_3_p_0((MR_String) "int16_t");
                mercury__io__write_string_3_p_0((MR_String) ") ((");
                mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                mercury__io__write_string_3_p_0((MR_String) "+");
                mercury__io__write_string_3_p_0((MR_String) " (");
                mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 6:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                mercury__io__write_string_3_p_0((MR_String) "int32_t");
                mercury__io__write_string_3_p_0((MR_String) ") ((");
                mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                mercury__io__write_string_3_p_0((MR_String) "+");
                mercury__io__write_string_3_p_0((MR_String) " (");
                mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 8:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                mercury__io__write_string_3_p_0((MR_String) "int64_t");
                mercury__io__write_string_3_p_0((MR_String) ") ((");
                mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                mercury__io__write_string_3_p_0((MR_String) "+");
                mercury__io__write_string_3_p_0((MR_String) " (");
                mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                mercury__io__write_string_3_p_0((MR_String) "int8_t");
                mercury__io__write_string_3_p_0((MR_String) ") ((");
                mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                mercury__io__write_string_3_p_0((MR_String) "+");
                mercury__io__write_string_3_p_0((MR_String) " (");
                mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 5:
            case (MR_Integer) 7:
            case (MR_Integer) 9:
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                mercury__io__write_string_3_p_0((MR_String) "+");
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word IntType_790 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Op_8, (MR_Integer) 0))));

          switch (IntType_790) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
                mercury__io__write_string_3_p_0((MR_String) ") ((");
                mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                mercury__io__write_string_3_p_0((MR_String) "-");
                mercury__io__write_string_3_p_0((MR_String) " (");
                mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                mercury__io__write_string_3_p_0((MR_String) "int16_t");
                mercury__io__write_string_3_p_0((MR_String) ") ((");
                mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                mercury__io__write_string_3_p_0((MR_String) "-");
                mercury__io__write_string_3_p_0((MR_String) " (");
                mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 6:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                mercury__io__write_string_3_p_0((MR_String) "int32_t");
                mercury__io__write_string_3_p_0((MR_String) ") ((");
                mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                mercury__io__write_string_3_p_0((MR_String) "-");
                mercury__io__write_string_3_p_0((MR_String) " (");
                mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 8:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                mercury__io__write_string_3_p_0((MR_String) "int64_t");
                mercury__io__write_string_3_p_0((MR_String) ") ((");
                mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                mercury__io__write_string_3_p_0((MR_String) "-");
                mercury__io__write_string_3_p_0((MR_String) " (");
                mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                mercury__io__write_string_3_p_0((MR_String) "int8_t");
                mercury__io__write_string_3_p_0((MR_String) ") ((");
                mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                mercury__io__write_string_3_p_0((MR_String) "-");
                mercury__io__write_string_3_p_0((MR_String) " (");
                mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                mercury__io__write_string_3_p_0((MR_String) ") ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 5:
            case (MR_Integer) 7:
            case (MR_Integer) 9:
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                mercury__io__write_string_3_p_0((MR_String) "-");
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
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
              MR_Word IntType_625 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

              switch (IntType_625) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
                    mercury__io__write_string_3_p_0((MR_String) ") ((");
                    mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    mercury__io__write_string_3_p_0((MR_String) "*");
                    mercury__io__write_string_3_p_0((MR_String) " (");
                    mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    mercury__io__write_string_3_p_0((MR_String) "int16_t");
                    mercury__io__write_string_3_p_0((MR_String) ") ((");
                    mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    mercury__io__write_string_3_p_0((MR_String) "*");
                    mercury__io__write_string_3_p_0((MR_String) " (");
                    mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    mercury__io__write_string_3_p_0((MR_String) "int32_t");
                    mercury__io__write_string_3_p_0((MR_String) ") ((");
                    mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    mercury__io__write_string_3_p_0((MR_String) "*");
                    mercury__io__write_string_3_p_0((MR_String) " (");
                    mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    mercury__io__write_string_3_p_0((MR_String) "int64_t");
                    mercury__io__write_string_3_p_0((MR_String) ") ((");
                    mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    mercury__io__write_string_3_p_0((MR_String) "*");
                    mercury__io__write_string_3_p_0((MR_String) " (");
                    mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    mercury__io__write_string_3_p_0((MR_String) "int8_t");
                    mercury__io__write_string_3_p_0((MR_String) ") ((");
                    mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    mercury__io__write_string_3_p_0((MR_String) "*");
                    mercury__io__write_string_3_p_0((MR_String) " (");
                    mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 5:
                case (MR_Integer) 7:
                case (MR_Integer) 9:
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    mercury__io__write_string_3_p_0((MR_String) "*");
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "/");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "%");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "<<");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) ">>");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "&");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "|");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "^");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "==");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "!=");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 10:
            {
              ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) "[");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer N_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "MR_offset_streq(");
              mercury__io__write_int_3_p_0(N_31);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 12:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "<");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 13:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) ">");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 14:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) "<=");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 15:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              mercury__io__write_string_3_p_0((MR_String) ">=");
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_4_p_0(Opts_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_unop_5_p_0(
  MR_Word Opts_6,
  MR_Word UnaryOp_7,
  MR_Word Expr_8)
{
  {
    MR_bool succeeded;
    MR_String UnaryOpString_10;

    backend_libs__c_util__unary_prefix_op_2_p_0(UnaryOp_7, &UnaryOpString_10);
    mercury__io__write_string_3_p_0(UnaryOpString_10);
    mercury__io__write_string_3_p_0((MR_String) "(");
    succeeded = (UnaryOp_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "(MR_Word) ");
    }
    else
    {
    }
    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Expr_8);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_5_p_0(
  MR_Word Opts_6,
  MR_Word Type_7,
  MR_Word Rval_8)
{
  switch (MR_tag((MR_Word) Type_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Type_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 3:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
            mercury__io__write_string_3_p_0((MR_String) "))");
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 5:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) "(MR_Word) ");
            ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_unbox_float(");
            ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__io__write_string_3_p_0((MR_String) "(");
        ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_6, Type_7);
        mercury__io__write_string_3_p_0((MR_String) "(");
        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
        mercury__io__write_string_3_p_0((MR_String) "))");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MercuryType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 1))));
            MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 2))));
            MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));

            switch (MR_tag((MR_Word) MercuryType_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_6, Type_7);
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                  mercury__io__write_string_3_p_0((MR_String) "))");
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word BuiltinType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MercuryType_20, (MR_Integer) 0))));

                  switch (MR_tag((MR_Word) BuiltinType_23)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(BuiltinType_23)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            mercury__io__write_string_3_p_0((MR_String) "MR_unbox_float(");
                            ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                            mercury__io__write_string_3_p_0((MR_String) ")");
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            mercury__io__write_string_3_p_0((MR_String) "(");
                            ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_6, Type_7);
                            mercury__io__write_string_3_p_0((MR_String) "(");
                            ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                            mercury__io__write_string_3_p_0((MR_String) "))");
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            mercury__io__write_string_3_p_0((MR_String) "(");
                            ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_6, Type_7);
                            mercury__io__write_string_3_p_0((MR_String) "(MR_Word) ");
                            ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                            mercury__io__write_string_3_p_0((MR_String) ")");
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word IntType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BuiltinType_23, (MR_Integer) 0))));

                        switch (IntType_24) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(");
                              ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_6, Type_7);
                              mercury__io__write_string_3_p_0((MR_String) "(");
                              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                              mercury__io__write_string_3_p_0((MR_String) "))");
                            }
                            break;
                          case (MR_Integer) 4:
                          case (MR_Integer) 6:
                          case (MR_Integer) 2:
                          case (MR_Integer) 5:
                          case (MR_Integer) 7:
                          case (MR_Integer) 3:
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(");
                              ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_6, Type_7);
                              mercury__io__write_string_3_p_0((MR_String) "(MR_Word) ");
                              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                            break;
                          case (MR_Integer) 8:
                            {
                              mercury__io__write_string_3_p_0((MR_String) "MR_unbox_int64(");
                              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                            break;
                          case (MR_Integer) 9:
                            {
                              mercury__io__write_string_3_p_0((MR_String) "MR_unbox_uint64(");
                              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                            break;
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_6, Type_7);
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
                  mercury__io__write_string_3_p_0((MR_String) "))");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
            mercury__io__write_string_3_p_0((MR_String) "))");
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_cast_rval_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_c_data__IntroducedFrom__pred__mlds_output_float_bits__436__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_cast_rval_5_p_0(
  MR_Word Opts_6,
  MR_Word Type_7,
  MR_Word Rval_8)
{
  {
    MR_bool succeeded;
    MR_Float Float_10;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_22;
    MR_String Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;

    ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_6, Type_7);
    mercury__io__write_char_3_p_0((MR_Char) 40);
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
    Var_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
    Var_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    Var_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
    succeeded = (Var_16 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 0))) == (MR_Integer) 11)));
        if (succeeded)
          Float_10 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 1)));
      }
    }
    if (succeeded)
    {
      MR_Word SinglePrecFloat_41;
      MR_String String_42;
      MR_Word Var_43;
      MR_String Var_88;
      MR_Word Var_69;
      MR_String Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;

      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ml_backend__mlds_to_c_data_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ml_backend__mlds_to_c_data__mlds_output_cast_rval_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_float_bits\'/4", (MR_String) "should only be required with --high-level-data");
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
      Var_70 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
      Var_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) & (MR_Integer) 1);
      Var_72 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_73 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_74 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      SinglePrecFloat_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      Var_75 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      Var_76 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      Var_77 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      Var_78 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      Var_79 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
      Var_80 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
      Var_81 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      Var_82 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
      switch (SinglePrecFloat_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          String_42 = mercury__float__float64_bits_string_1_f_0(Float_10);
          break;
        case (MR_Integer) 1:
          String_42 = mercury__float__float32_bits_string_1_f_0(Float_10);
          break;
      }
      mercury__io__write_string_3_p_0(String_42);
      mercury__io__write_string_3_p_0((MR_String) " /* float-bits: ");
      mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), (MR_Integer) 4, Float_10, &Var_88);
      mercury__io__write_string_3_p_0(Var_88);
      mercury__io__write_string_3_p_0((MR_String) " */");
    }
    else
      ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_8);
    mercury__io__write_char_3_p_0((MR_Char) 41);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_c_data__IntroducedFrom__pred__mlds_output_rval_const__977__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word Const_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Const_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Const_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_TRUE");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_FALSE");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CodeAddr_19 = (MR_Word) (MR_body((MR_Word) (Const_6), (MR_Integer) 1));

          ml_backend__mlds_to_c_data__mlds_output_code_addr_3_p_0(CodeAddr_19);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer N_108 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

          backend_libs__c_util__output_int_expr_cur_stream_3_p_0(N_108);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned U_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

              backend_libs__c_util__output_uint_expr_cur_stream_3_p_0(U_10);
            }
            break;
          case (MR_Integer) 1:
            {
              int8_t N_84 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_int8_expr_cur_stream_3_p_0(N_84);
            }
            break;
          case (MR_Integer) 2:
            {
              uint8_t N_85 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_uint8_expr_cur_stream_3_p_0(N_85);
            }
            break;
          case (MR_Integer) 3:
            {
              int16_t N_86 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_int16_expr_cur_stream_3_p_0(N_86);
            }
            break;
          case (MR_Integer) 4:
            {
              uint16_t N_87 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_uint16_expr_cur_stream_3_p_0(N_87);
            }
            break;
          case (MR_Integer) 5:
            {
              int32_t N_88 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_int32_expr_cur_stream_3_p_0(N_88);
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t N_89 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_uint32_expr_cur_stream_3_p_0(N_89);
            }
            break;
          case (MR_Integer) 7:
            {
              int64_t N_90 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_int64_expr_cur_stream_3_p_0(N_90);
            }
            break;
          case (MR_Integer) 8:
            {
              uint64_t N_91 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_uint64_expr_cur_stream_3_p_0(N_91);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));

              backend_libs__c_util__output_int_expr_cur_stream_3_p_0(N_8);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer C_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "(MR_Char) ");
              mercury__io__write_int_3_p_0(C_11);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Float FloatVal_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "(MR_Float) ");
              backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_15);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String String_16 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "(MR_String) ");
              mercury__io__write_string_3_p_0((MR_String) "\"");
              backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(String_16);
              mercury__io__write_string_3_p_0((MR_String) "\"");
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word String_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\"");
              backend_libs__c_util__output_quoted_multi_string_cur_stream_3_p_0(String_92);
              mercury__io__write_string_3_p_0((MR_String) "\"");
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Lang_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_String Value_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
              MR_Word Var_58;
              MR_Word _Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 3))));

              {
                Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&ml_backend__mlds_to_c_data_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_4_p_0_1));
                MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (Lang_12));
                MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_rval_const\'/4", (MR_String) "mlconst_foreign for language other than C");
              mercury__io__write_string_3_p_0((MR_String) "((int) ");
              mercury__io__write_string_3_p_0(Value_13);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String NamedConst_18 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
              MR_Word _TargetPrefixes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0(NamedConst_18);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word LocalVarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_String MangledLocalVarName_21;
              MR_String Var_37;

              Var_37 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_20);
              MangledLocalVarName_21 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_37);
              mercury__io__write_string_3_p_0((MR_String) "&");
              mercury__io__write_string_3_p_0(MangledLocalVarName_21);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word MLDS_ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_Word GlobalVarName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));

              mercury__io__write_string_3_p_0((MR_String) "&");
              ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_4_p_0(MLDS_ModuleName_22, GlobalVarName_23);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word RttiId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
              MR_Word MLDS_ModuleName_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_Word GlobalVarName_97;
              MR_Word IsArray_98;

              {
                GlobalVarName_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), GlobalVarName_97, 0) = ((MR_Box) (RttiId_25));
              }
              IsArray_98 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(RttiId_25);
              switch (IsArray_98) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "&");
                  }
                  break;
              }
              ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_4_p_0(MLDS_ModuleName_96, GlobalVarName_97);
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word QualProcLabel_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_Word TablingId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
              MR_Word ProcLabel_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualProcLabel_26, (MR_Integer) 1))));
              MR_Word MLDS_ModuleName_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualProcLabel_26, (MR_Integer) 0))));
              MR_Word GlobalVarName_104;
              MR_Word IsArray_105;

              {
                GlobalVarName_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), GlobalVarName_104, 0) = ((MR_Box) (ProcLabel_28));
                MR_hl_field(MR_mktag(2), GlobalVarName_104, 1) = ((MR_Box) (TablingId_27));
              }
              IsArray_105 = backend_libs__rtti__tabling_id_has_array_type_1_f_0(TablingId_27);
              switch (IsArray_105) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "&");
                  }
                  break;
              }
              ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_4_p_0(MLDS_ModuleName_103, GlobalVarName_104);
            }
            break;
          case (MR_Integer) 20:
            {
              mercury__io__write_string_3_p_0((MR_String) "NULL");
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_code_addr_3_p_0(
  MR_Word CodeAddr_4)
{
  {
    MR_Word QualFuncLabel_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_4, (MR_Integer) 0))));
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_6, (MR_Integer) 0))));
    MR_Word FuncLabel_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_6, (MR_Integer) 1))));
    MR_Word ProcLabel_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_9, (MR_Integer) 0))));
    MR_Word MaybeAux_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_9, (MR_Integer) 1))));
    MR_Word QualProcLabel_12;
    MR_String Var_16;
    MR_Word _Signature_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_4, (MR_Integer) 1))));

    {
      QualProcLabel_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), QualProcLabel_12, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), QualProcLabel_12, 1) = ((MR_Box) (ProcLabel_10));
    }
    ml_backend__mlds_to_c_name__mlds_output_fully_qualified_proc_label_3_p_0(QualProcLabel_12);
    Var_16 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_11);
    mercury__io__write_string_3_p_0(Var_16);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__is_aligned_dword_field_3_p_0(
  MR_Word X_4,
  MR_Word Y_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) X_4)) == (MR_mktag((MR_Integer) 2)));
    MR_Word TypeInfo_26_26;
    MR_Word Lval_6;
    MR_Word Ptag_7;
    MR_Word Addr_8;
    MR_Word FieldIdX_9;
    MR_Word Type_10;
    MR_Word PtrType_11;
    MR_Word FieldIdY_12;
    MR_Integer Offset_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Integer Var_20;
    MR_Integer Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    if (succeeded)
    {
      Lval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), X_4, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Lval_6)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Ptag_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 0))));
        Addr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
        FieldIdX_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2))));
        Type_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
        PtrType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));
        succeeded = ((MR_tag((MR_Word) Y_5)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Y_5, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
            Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1))));
            FieldIdY_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 2))));
            Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 3))));
            Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 4))));
            TypeInfo_26_26 = (MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_6));
            }
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (Ptag_7)), ((MR_Box) (Var_22)));
            if (succeeded)
            {
              succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(Addr_8, Var_23);
              if (succeeded)
              {
                succeeded = ml_backend__mlds____Unify____mlds_type_0_0(Type_10, Var_24);
                if (succeeded)
                {
                  succeeded = ml_backend__mlds____Unify____mlds_type_0_0(PtrType_11, Var_25);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) FieldIdX_9)) == (MR_mktag((MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldIdX_9, (MR_Integer) 0))));
                      succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 0))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 1))));
                        succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 2)));
                        if (succeeded)
                        {
                          Offset_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_17, (MR_Integer) 0))));
                          succeeded = ((MR_tag((MR_Word) FieldIdY_12)) == (MR_mktag((MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldIdY_12, (MR_Integer) 0))));
                            succeeded = ((((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_18, (MR_Integer) 0))) == (MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_18, (MR_Integer) 1))));
                              succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 2)));
                              if (succeeded)
                              {
                                Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_19, (MR_Integer) 0))));
                                Var_21 = (MR_Integer) ((MR_Unsigned) Var_20 - (MR_Unsigned) Offset_13);
                                succeeded = (Var_21 == (MR_Integer) 1);
                                if (succeeded)
                                  succeeded = mercury__int__even_1_p_0(Offset_13);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_c_data__is_an_address_1_f_0(
  MR_Word Rval_3)
{
  while (MR_TRUE)
  {
    MR_Word IsAddr_4;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Rval_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IsAddr_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        IsAddr_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        IsAddr_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 2))));
              MR_Integer _Ptag_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 1))));
              MR_Word next_value_of_Rval_3 = SubRval_6;

              // direct tailcall eliminated
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Const_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  IsAddr_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  IsAddr_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  IsAddr_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_24, (MR_Integer) 0)))) {
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
                      IsAddr_4 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 16:
                    case (MR_Integer) 17:
                    case (MR_Integer) 18:
                    case (MR_Integer) 19:
                    case (MR_Integer) 20:
                      IsAddr_4 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 9:
            IsAddr_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 2))));
              MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 1))));
              MR_Word next_value_of_Rval_3 = SubRval_55;

              // direct tailcall eliminated
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            IsAddr_4 = (MR_Integer) 1;
            break;
        }
        break;
    }
    return IsAddr_4;
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_float_bits_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_c_data__IntroducedFrom__pred__mlds_output_float_bits__436__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_float_bits_4_p_0(
  MR_Word Opts_5,
  MR_Float Float_6)
{
  {
    MR_bool succeeded;
    MR_Word SinglePrecFloat_8;
    MR_String String_9;
    MR_Word Var_12;
    MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_String Var_57;
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 0))));
    MR_String Var_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 1))));
    MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
    MR_Word Var_38;
    MR_String Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_c_data_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_c_data__mlds_output_float_bits_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__require__expect_3_p_0(Var_12, (MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_float_bits\'/4", (MR_String) "should only be required with --high-level-data");
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 0))));
    Var_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 1))));
    Var_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    SinglePrecFloat_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_45 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    Var_48 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    Var_49 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_50 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    Var_51 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
    switch (SinglePrecFloat_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        String_9 = mercury__float__float64_bits_string_1_f_0(Float_6);
        break;
      case (MR_Integer) 1:
        String_9 = mercury__float__float32_bits_string_1_f_0(Float_6);
        break;
    }
    mercury__io__write_string_3_p_0(String_9);
    mercury__io__write_string_3_p_0((MR_String) " /* float-bits: ");
    mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_3[0]), (MR_Integer) 4, Float_6, &Var_57);
    mercury__io__write_string_3_p_0(Var_57);
    mercury__io__write_string_3_p_0((MR_String) " */");
  }
}

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(
  MR_Integer Ptag_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "MR_mktag(");
    mercury__io__write_int_3_p_0(Ptag_4);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

void mercury__ml_backend__mlds_to_c_data__init(void)
{
}

void mercury__ml_backend__mlds_to_c_data__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_c_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_c_data__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_c_data.
