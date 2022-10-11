/*
** Automatically generated from `mlds_to_cs_class.m'
** by the Mercury compiler,
** version rotd-2022-10-11
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


// :- module ml_backend.mlds_to_cs_class.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_class__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_class.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_data.mih"
#include "ml_backend.mlds_to_cs_func.mih"
#include "ml_backend.mlds_to_cs_name.mih"
#include "ml_backend.mlds_to_cs_type.mih"
#include "ml_backend.mlds_to_cs_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_class_defn_for_csharp__63__1_2_p_0(
  MR_Word MemberMethods_23,
  MR_Word HeadVar__2_34);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word FieldVarDefn_9,
  MR_Word Stream_10);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_field_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word FieldVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs_class__interface_to_string_2_p_0(
  MR_Word InterfaceId_3,
  MR_String * String_4);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_6_p_0(
  MR_Word Stream_8,
  MR_Word Flags_9,
  MR_Word Kind_10);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_supers_list_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_supers_list_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word Inherits_11,
  MR_Word Interfaces_12);


static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_1[1][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_2[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_3[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_4[2][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_5[3][9];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_6[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_7[1][10];




static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_2[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_cs_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_4[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_3[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_class__output_supers_list_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_5[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_6[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_7[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)
  }
};

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_class_defn_for_csharp__63__1_2_p_0(
  MR_Word MemberMethods_23,
  MR_Word HeadVar__2_34)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_1[0]), ((MR_Box) (MemberMethods_23)), ((MR_Box) (HeadVar__2_34)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word FieldVarDefn_9,
  MR_Word Stream_10)
{
  MR_bool succeeded;
  MR_Word FieldVarName_12 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_9, (MR_Integer) 0))));
  MR_Word Initializer_16 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_9, (MR_Integer) 4))));

  switch (MR_tag((MR_Word) Initializer_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_47;

        Var_47 = mercury__string__string_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (Initializer_16)));
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_enum_constant_for_csharp\'/6", Var_47);
          return;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(1, Initializer_16, (MR_Integer) 0))));
        MR_Integer N_19;
        MR_Word Var_32;

        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_8);
        ml_backend__mlds_to_cs_name__output_field_var_name_for_csharp_4_p_0(Stream_10, FieldVarName_12);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = ");
        succeeded = ((((MR_tag((MR_Word) Rval_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_32 = ((MR_Word) ((MR_hl_field(3, Rval_18, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_32, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
            N_19 = ((MR_Integer) ((MR_hl_field(3, Var_32, (MR_Integer) 1))));
        }
        if (succeeded)
          mercury__io__write_int_4_p_0(Stream_10, N_19);
        else
        {
          MR_String String_21;
          MR_Word Type_22;
          MR_Word Var_34;
          MR_Word Var_35;

          succeeded = ((((MR_tag((MR_Word) Rval_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_34 = ((MR_Word) ((MR_hl_field(3, Rval_18, (MR_Integer) 1))));
            succeeded = ((((MR_tag((MR_Word) Var_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_34, (MR_Integer) 0)))) == (MR_Integer) 14)));
            if (succeeded)
            {
              Var_35 = ((MR_Unsigned) ((MR_hl_field(3, Var_34, (MR_Integer) 1))) & (MR_Integer) 3);
              String_21 = ((MR_String) ((MR_hl_field(3, Var_34, (MR_Integer) 2))));
              Type_22 = ((MR_Word) ((MR_hl_field(3, Var_34, (MR_Integer) 3))));
              succeeded = (Var_35 == (MR_Integer) 1);
            }
          }
          if (succeeded)
          {
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
            ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(Info_7, Type_22, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_10, String_21);
          }
          else
          {
            MR_String Var_43;

            Var_43 = mercury__string__string_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ((MR_Box) (Rval_18)));
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_enum_constant_for_csharp\'/6", Var_43);
              return;
            }
          }
        }
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",");
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        MR_String Var_47;

        Var_47 = mercury__string__string_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (Initializer_16)));
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_enum_constant_for_csharp\'/6", Var_47);
          return;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_field_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word FieldVarDefn_10)
{
  MR_Word FieldVarName_12;
  MR_Word Flags_14;
  MR_Word Type_15;
  MR_Word Initializer_16;
  MR_Integer Var_24;
  MR_Word Var_30;
  MR_Word Var_33;

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  FieldVarName_12 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 0))));
  Flags_14 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 2))));
  Type_15 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 3))));
  Initializer_16 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 4))));
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "public ");
  Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Var_33 = ((MR_Unsigned) ((MR_hl_field(0, Flags_14, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (Var_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static ");
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
  switch (Var_33) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "readonly ");
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
  ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(Info_7, Type_15, Stream_8);
  mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 32);
  ml_backend__mlds_to_cs_name__output_field_var_name_for_csharp_4_p_0(Stream_8, FieldVarName_12);
  Var_24 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_cs_data__output_initializer_for_csharp_9_p_0(Info_7, Stream_8, (MR_Word) ((MR_Unsigned) 0U), Var_24, Type_15, Initializer_16, (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__interface_to_string_2_p_0(
  MR_Word InterfaceId_3,
  MR_String * String_4)
{
  MR_bool succeeded;
  MR_Word QualClassName_5 = ((MR_Word) ((MR_hl_field(0, InterfaceId_3, (MR_Integer) 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, InterfaceId_3, (MR_Integer) 1))));
  MR_Word ModuleQualifier_8 = ((MR_Word) ((MR_hl_field(0, QualClassName_5, (MR_Integer) 0))));
  MR_String ClassName_10 = ((MR_String) ((MR_hl_field(0, QualClassName_5, (MR_Integer) 2))));
  MR_Word SymName_11;
  MR_String ModuleNameStr_12;

  SymName_11 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleQualifier_8);
  parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(SymName_11, (MR_Integer) 0, (MR_String) ".", &ModuleNameStr_12);
  succeeded = (strcmp(ClassName_10, (MR_String) "MercuryType") == 0);
  if (succeeded)
  {
    MR_String Var_30;

    Var_30 = mercury__string__f_43_43_2_f_0((MR_String) ".", ClassName_10);
    *String_4 = mercury__string__f_43_43_2_f_0(ModuleNameStr_12, Var_30);
  }
  else
  {
    MR_String Var_31;
    MR_String Var_38;
    MR_String Var_40;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_2[0]), Arity_6, &Var_31);
    Var_38 = mercury__string__f_43_43_2_f_0(ClassName_10, Var_31);
    Var_40 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_38);
    *String_4 = mercury__string__f_43_43_2_f_0(ModuleNameStr_12, Var_40);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_func__output_function_defn_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_target_util__field_var_defn_is_enum_const_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_class__output_field_var_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_class_defn_for_csharp__63__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0(
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ClassDefn_10)
{
  MR_bool succeeded;
  MR_String ClassName_12;
  MR_Integer ClassArity_13;
  MR_Word Flags_15;
  MR_Word Kind_16;
  MR_Word Inherits_18;
  MR_Word Implements_19;
  MR_Word TypeParams_20;
  MR_Word MemberFields_21;
  MR_Word MemberClasses_22;
  MR_Word MemberMethods_23;
  MR_Word Ctors_24;
  MR_Word OutputGenerics_25;
  MR_Word Var_31;
  MR_Word STATE_VARIABLE_Info_39_39;
  MR_Integer Var_44;
  MR_Word Var_63;
  MR_Integer Var_65;
  MR_Word Var_67;
  MR_Word Var_70;
  MR_Word Var_74;
  MR_String Var_75;
  MR_Word Var_76;
  MR_Unsigned packed_word_1;
  MR_Unsigned packed_word_2;
  MR_Box conv2_STATE_VARIABLE_IO_64_64;

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  ClassName_12 = ((MR_String) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 0))));
  ClassArity_13 = ((MR_Integer) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 1))));
  Flags_15 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 3))));
  Kind_16 = ((MR_Unsigned) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 4))) & (MR_Integer) 3);
  Inherits_18 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 6))));
  Implements_19 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 7))));
  TypeParams_20 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 8))));
  MemberFields_21 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 9))));
  MemberClasses_22 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 10))));
  MemberMethods_23 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 11))));
  Ctors_24 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 12))));
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_3[1]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (MemberMethods_23));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_31, (MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_class_defn_for_csharp\'/6", (MR_String) "MemberMethods != []");
  switch (Kind_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      {
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[System.Serializable]\n");
        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 2:
      {
      }
      break;
  }
  ml_backend__mlds_to_cs_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_6_p_0(Stream_8, Flags_15, Kind_16);
  Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 0))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 2))));
  Var_75 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 3))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 4))));
  packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_27, (MR_Integer) 5)));
  {
    STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (Var_70));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 1) = (MR_Box) (packed_word_1);
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (Var_74));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (Var_75));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (Var_76));
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 5) = (MR_Box) (packed_word_2);
    MR_hl_field(0, STATE_VARIABLE_Info_39_39, 6) = ((MR_Box) (TypeParams_20));
  }
  switch (Kind_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "class ");
      break;
    case (MR_Integer) 3:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "enum ");
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "interface ");
      break;
    case (MR_Integer) 2:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "struct ");
      break;
  }
  ml_backend__mlds_to_cs_name__output_unqual_class_name_for_csharp_5_p_0(Stream_8, ClassName_12, ClassArity_13);
  OutputGenerics_25 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
  switch (OutputGenerics_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 0:
      ml_backend__mlds_to_target_util__output_generic_tvars_4_p_0(Stream_8, TypeParams_20);
      break;
  }
  mercury__io__nl_3_p_0(Stream_8);
  Var_44 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_cs_class__output_supers_list_7_p_0(STATE_VARIABLE_Info_39_39, Stream_8, Var_44, Inherits_18, Implements_19);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  switch (Kind_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Word Var_50;
        MR_Integer Var_52 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        MR_Word Var_54;
        MR_Integer Var_56;
        MR_Box conv0_STATE_VARIABLE_IO_51_51;
        MR_Box conv1_STATE_VARIABLE_IO_55_55;

        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_5[0]));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_2));
          MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_50, 3) = ((MR_Box) (STATE_VARIABLE_Info_39_39));
          MR_hl_field(0, Var_50, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_50, 5) = ((MR_Box) (Var_52));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, MemberFields_21, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_51_51);
        Var_56 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_5[1]));
          MR_hl_field(0, Var_54, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_3));
          MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_54, 3) = ((MR_Box) (STATE_VARIABLE_Info_39_39));
          MR_hl_field(0, Var_54, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_54, 5) = ((MR_Box) (Var_56));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, MemberClasses_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_55_55);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word EnumConstMemberFields_26;
        MR_Integer Var_59;
        MR_Word Var_110;

        mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_4[1]), MemberFields_21, &EnumConstMemberFields_26);
        Var_59 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 2);
        {
          Var_110 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_110, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_5[2]));
          MR_hl_field(0, Var_110, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_5));
          MR_hl_field(0, Var_110, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_110, 3) = ((MR_Box) (STATE_VARIABLE_Info_39_39));
          MR_hl_field(0, Var_110, 4) = ((MR_Box) (Var_59));
        }
        parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), Var_110, (MR_String) "\n", EnumConstMemberFields_26, Stream_8);
        mercury__io__nl_3_p_0(Stream_8);
      }
      break;
  }
  mercury__io__nl_3_p_0(Stream_8);
  Var_65 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (ClassName_12));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (ClassArity_13));
  }
  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_63, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_7[0]));
    MR_hl_field(0, Var_63, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_6));
    MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_63, 3) = ((MR_Box) (STATE_VARIABLE_Info_39_39));
    MR_hl_field(0, Var_63, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_63, 5) = ((MR_Box) (Var_65));
    MR_hl_field(0, Var_63, 6) = ((MR_Box) (Var_67));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_63, Ctors_24, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_64_64);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_6_p_0(
  MR_Word Stream_8,
  MR_Word Flags_9,
  MR_Word Kind_10)
{
  MR_Word Access_12 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_9, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Overridability0_13 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Constness_14 = ((MR_Unsigned) ((MR_hl_field(0, Flags_9, (MR_Integer) 0))) & (MR_Integer) 1);

  switch (Access_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "private ");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "public ");
      break;
  }
  switch (Kind_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      switch (Overridability0_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "sealed ");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static ");
        switch (Overridability0_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "sealed ");
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
      }
      break;
  }
  switch (Constness_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "readonly ");
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_supers_list_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_String_4;

  ml_backend__mlds_to_cs_class__interface_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_String_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_String_4));
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_supers_list_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word Inherits_11,
  MR_Word Interfaces_12)
{
  MR_Word AfterColonStrings0_14;
  MR_Word AfterColonStrings_15;

  mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_4[0]), Interfaces_12, &AfterColonStrings0_14);
  switch (MR_tag((MR_Word) Inherits_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inherits_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          AfterColonStrings_15 = AfterColonStrings0_14;
          break;
        case (MR_Integer) 1:
          {
            MR_String EnvPtrTypeString_20;
            MR_Word _ArrayDims_35;

            ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_8, (MR_Word) ((MR_Unsigned) 24U), &EnvPtrTypeString_20, &_ArrayDims_35);
            {
              AfterColonStrings_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, AfterColonStrings_15, 0) = ((MR_Box) (EnvPtrTypeString_20));
              MR_hl_field(1, AfterColonStrings_15, 1) = ((MR_Box) (AfterColonStrings0_14));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BaseClassId_16 = (MR_Word) (MR_body((MR_Word) (Inherits_11), (MR_Integer) 1));
        MR_Word BaseClassType_17 = (MR_Word) (MR_mkword(1, (MR_Word) (BaseClassId_16)));
        MR_String BaseClassString_18;
        MR_Word _ArrayDims_19;

        ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_8, BaseClassType_17, &BaseClassString_18, &_ArrayDims_19);
        {
          AfterColonStrings_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AfterColonStrings_15, 0) = ((MR_Box) (BaseClassString_18));
          MR_hl_field(1, AfterColonStrings_15, 1) = ((MR_Box) (AfterColonStrings0_14));
        }
      }
      break;
  }
  if (!((AfterColonStrings_15 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String AfterColonString_23;

    AfterColonString_23 = mercury__string__join_list_2_f_0((MR_String) ", ", AfterColonStrings_15);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ": ");
    mercury__io__write_string_4_p_0(Stream_9, AfterColonString_23);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  }
}

void mercury__ml_backend__mlds_to_cs_class__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_class__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_cs_class__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_class__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_class.
