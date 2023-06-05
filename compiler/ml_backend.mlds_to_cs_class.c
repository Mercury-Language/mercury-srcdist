/*
** Automatically generated from `mlds_to_cs_class.m'
** by the Mercury compiler,
** version rotd-2023-06-05
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
#include "libs.indent.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_class_defn_for_csharp__62__1_2_p_0(
  MR_Word MemberMethods_23,
  MR_Word HeadVar__2_48);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_String IndentStr_9,
  MR_Word FieldVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_field_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word FieldVarDefn_10);

static MR_String MR_CALL 
ml_backend__mlds_to_cs_class__interface_to_string_for_csharp_1_f_0(
  MR_Word InterfaceId_3);

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
  MR_Box * wrapper_arg_3);

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
ml_backend__mlds_to_cs_class__get_class_decl_flags_for_csharp_8_p_0(
  MR_Word Kind_9,
  MR_Word Flags_10,
  MR_Word * Serializable_11,
  MR_String * AccessPrefix_12,
  MR_String * PerInstancePrefix_13,
  MR_String * OverridePrefix_14,
  MR_String * ConstnessPrefix_15,
  MR_String * KindStr_16);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_class__get_superclass_names_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_class__get_superclass_names_3_f_0(
  MR_Word Info_5,
  MR_Word Inherits_6,
  MR_Word Interfaces_7);


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
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
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
    ((MR_Box) (ml_backend__mlds_to_cs_class__get_superclass_names_3_f_0_1)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0) }
};

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_class_defn_for_csharp__62__1_2_p_0(
  MR_Word MemberMethods_23,
  MR_Word HeadVar__2_48)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_1[0]), ((MR_Box) (MemberMethods_23)), ((MR_Box) (HeadVar__2_48)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_String IndentStr_9,
  MR_Word FieldVarDefn_10)
{
  MR_bool succeeded;
  MR_Word FieldVarName_12 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 0))));
  MR_Word Initializer_16 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 4))));

  switch (MR_tag((MR_Word) Initializer_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_56;

        Var_56 = mercury__string__string_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (Initializer_16)));
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_enum_constant_for_csharp\'/6", Var_56);
          return;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(1, Initializer_16, (MR_Integer) 0))));
        MR_String FieldVarNameStr_19;
        MR_Integer N_20;
        MR_Word Var_30;

        FieldVarNameStr_19 = ml_backend__mlds_to_cs_name__field_var_name_to_ll_string_for_csharp_1_f_0(FieldVarName_12);
        succeeded = ((((MR_tag((MR_Word) Rval_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_30 = ((MR_Word) ((MR_hl_field(3, Rval_18, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_30, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
            N_20 = ((MR_Integer) ((MR_hl_field(3, Var_30, (MR_Integer) 1))));
        }
        if (succeeded)
        {
          MR_String Var_64;

          mercury__io__write_string_4_p_0(Stream_8, IndentStr_9);
          mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_19);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_2[0]), N_20, &Var_64);
          mercury__io__write_string_4_p_0(Stream_8, Var_64);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n");
        }
        else
        {
          MR_String ConstStr_22;
          MR_Word Type_23;
          MR_Word Var_40;
          MR_Word Var_41;

          succeeded = ((((MR_tag((MR_Word) Rval_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_40 = ((MR_Word) ((MR_hl_field(3, Rval_18, (MR_Integer) 1))));
            succeeded = ((((MR_tag((MR_Word) Var_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_40, (MR_Integer) 0)))) == (MR_Integer) 14)));
            if (succeeded)
            {
              Var_41 = ((MR_Unsigned) ((MR_hl_field(3, Var_40, (MR_Integer) 1))) & (MR_Integer) 3);
              ConstStr_22 = ((MR_String) ((MR_hl_field(3, Var_40, (MR_Integer) 2))));
              Type_23 = ((MR_Word) ((MR_hl_field(3, Var_40, (MR_Integer) 3))));
              succeeded = (Var_41 == (MR_Integer) 1);
            }
          }
          if (succeeded)
          {
            MR_String TypeStr_24;

            TypeStr_24 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_7, Type_23);
            mercury__io__write_string_4_p_0(Stream_8, IndentStr_9);
            mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_19);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = (");
            mercury__io__write_string_4_p_0(Stream_8, TypeStr_24);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_8, ConstStr_22);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n");
          }
          else
          {
            MR_String Var_54;

            Var_54 = mercury__string__string_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ((MR_Box) (Rval_18)));
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_enum_constant_for_csharp\'/6", Var_54);
              return;
            }
          }
        }
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        MR_String Var_56;

        Var_56 = mercury__string__string_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (Initializer_16)));
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_enum_constant_for_csharp\'/6", Var_56);
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
  MR_Word FieldVarName_12 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 0))));
  MR_Word Flags_14 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 2))));
  MR_Word Type_15 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 3))));
  MR_Word Initializer_16 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 4))));
  MR_String IndentStr_18;
  MR_String PerInstancePrefix_20;
  MR_String ConstnessPrefix_21;
  MR_String TypeStr_22;
  MR_String FieldVarNameStr_23;
  MR_Integer Var_42;
  MR_Word PerInstance_53;
  MR_Word Constness_54;

  IndentStr_18 = libs__indent__indent2_string_1_f_0(Indent_9);
  PerInstance_53 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Constness_54 = ((MR_Unsigned) ((MR_hl_field(0, Flags_14, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (PerInstance_53) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      PerInstancePrefix_20 = (MR_String) "static ";
      break;
    case (MR_Integer) 1:
      PerInstancePrefix_20 = (MR_String) "";
      break;
  }
  switch (Constness_54) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ConstnessPrefix_21 = (MR_String) "readonly ";
      break;
    case (MR_Integer) 0:
      ConstnessPrefix_21 = (MR_String) "";
      break;
  }
  TypeStr_22 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_7, Type_15);
  FieldVarNameStr_23 = ml_backend__mlds_to_cs_name__field_var_name_to_ll_string_for_csharp_1_f_0(FieldVarName_12);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_18);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "public ");
  mercury__io__write_string_4_p_0(Stream_8, PerInstancePrefix_20);
  mercury__io__write_string_4_p_0(Stream_8, ConstnessPrefix_21);
  mercury__io__write_string_4_p_0(Stream_8, TypeStr_22);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_23);
  Var_42 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_cs_data__output_initializer_for_csharp_9_p_0(Info_7, Stream_8, (MR_Word) ((MR_Unsigned) 0U), Var_42, Type_15, Initializer_16, (MR_String) ";");
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs_class__interface_to_string_for_csharp_1_f_0(
  MR_Word InterfaceId_3)
{
  MR_bool succeeded;
  MR_String String_4;
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
    String_4 = mercury__string__f_43_43_2_f_0(ModuleNameStr_12, Var_30);
  }
  else
  {
    MR_String Var_31;
    MR_String Var_38;
    MR_String Var_40;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_2[0]), Arity_6, &Var_31);
    Var_38 = mercury__string__f_43_43_2_f_0(ClassName_10, Var_31);
    Var_40 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_38);
    String_4 = mercury__string__f_43_43_2_f_0(ModuleNameStr_12, Var_40);
  }
  return String_4;
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
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
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

  succeeded = ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_class_defn_for_csharp__62__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0(
  MR_Word Info0_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ClassDefn_10)
{
  MR_bool succeeded;
  MR_String ClassName_12 = ((MR_String) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 0))));
  MR_Integer ClassArity_13 = ((MR_Integer) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 1))));
  MR_Word Flags_15 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 3))));
  MR_Word Kind_16 = ((MR_Unsigned) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 4))) & (MR_Integer) 3);
  MR_Word Inherits_18 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 6))));
  MR_Word Implements_19 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 7))));
  MR_Word TypeParams_20 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 8))));
  MR_Word MemberFields_21 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 9))));
  MR_Word MemberClasses_22 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 10))));
  MR_Word MemberMethods_23 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 11))));
  MR_Word Ctors_24 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 12))));
  MR_Word Info_25;
  MR_String IndentStr_26;
  MR_Word Serializable_27;
  MR_String AccessPrefix_28;
  MR_String PerInstancePrefix_29;
  MR_String OverridePrefix_30;
  MR_String ConstnessPrefix_31;
  MR_String ClassKindStr_32;
  MR_String ClassNameStr_33;
  MR_Word OutputGenerics_34;
  MR_String GenericTypeParamsStr_35;
  MR_Word SuperClassNames_36;
  MR_Word CtorsAux_42;
  MR_Word Var_45;
  MR_Word Var_100;
  MR_Integer Var_102;
  MR_Word Var_109;
  MR_Word Var_113;
  MR_String Var_114;
  MR_Word Var_115;
  MR_Unsigned packed_word_1;
  MR_Unsigned packed_word_2;
  MR_Box conv3_STATE_VARIABLE_IO_101_101;

  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_3[1]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (MemberMethods_23));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_class_defn_for_csharp\'/6", (MR_String) "MemberMethods != []");
  Var_109 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 0))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 1)));
  Var_113 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 2))));
  Var_114 = ((MR_String) ((MR_hl_field(0, Info0_7, (MR_Integer) 3))));
  Var_115 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 4))));
  packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 5)));
  {
    Info_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_25, 0) = ((MR_Box) (Var_109));
    MR_hl_field(0, Info_25, 1) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Info_25, 2) = ((MR_Box) (Var_113));
    MR_hl_field(0, Info_25, 3) = ((MR_Box) (Var_114));
    MR_hl_field(0, Info_25, 4) = ((MR_Box) (Var_115));
    MR_hl_field(0, Info_25, 5) = (MR_Box) (packed_word_2);
    MR_hl_field(0, Info_25, 6) = ((MR_Box) (TypeParams_20));
  }
  IndentStr_26 = libs__indent__indent2_string_1_f_0(Indent_9);
  ml_backend__mlds_to_cs_class__get_class_decl_flags_for_csharp_8_p_0(Kind_16, Flags_15, &Serializable_27, &AccessPrefix_28, &PerInstancePrefix_29, &OverridePrefix_30, &ConstnessPrefix_31, &ClassKindStr_32);
  ClassNameStr_33 = ml_backend__mlds_to_cs_name__unqual_class_name_to_ll_string_for_csharp_2_f_0(ClassName_12, ClassArity_13);
  OutputGenerics_34 = ((((MR_Unsigned) ((MR_hl_field(0, Info_25, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
  switch (OutputGenerics_34) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      GenericTypeParamsStr_35 = (MR_String) "";
      break;
    case (MR_Integer) 0:
      GenericTypeParamsStr_35 = ml_backend__mlds_to_target_util__generic_tvars_to_string_1_f_0(TypeParams_20);
      break;
  }
  switch (Serializable_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(Stream_8, IndentStr_26);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[System.Serializable]\n");
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_26);
  mercury__io__write_string_4_p_0(Stream_8, AccessPrefix_28);
  mercury__io__write_string_4_p_0(Stream_8, PerInstancePrefix_29);
  mercury__io__write_string_4_p_0(Stream_8, OverridePrefix_30);
  mercury__io__write_string_4_p_0(Stream_8, ConstnessPrefix_31);
  mercury__io__write_string_4_p_0(Stream_8, ClassKindStr_32);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_8, ClassNameStr_33);
  mercury__io__write_string_4_p_0(Stream_8, GenericTypeParamsStr_35);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  SuperClassNames_36 = ml_backend__mlds_to_cs_class__get_superclass_names_3_f_0(Info_25, Inherits_18, Implements_19);
  if (!((SuperClassNames_36 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String SuperClassesStr_39;

    SuperClassesStr_39 = mercury__string__join_list_2_f_0((MR_String) ", ", SuperClassNames_36);
    mercury__io__write_string_4_p_0(Stream_8, IndentStr_26);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "  : ");
    mercury__io__write_string_4_p_0(Stream_8, SuperClassesStr_39);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  }
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_26);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  switch (Kind_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Word Var_86;
        MR_Integer Var_88 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        MR_Word Var_90;
        MR_Integer Var_92;
        MR_Box conv0_STATE_VARIABLE_IO_87_87;
        MR_Box conv1_STATE_VARIABLE_IO_91_91;

        {
          Var_86 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_86, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_5[0]));
          MR_hl_field(0, Var_86, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_2));
          MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_86, 3) = ((MR_Box) (Info_25));
          MR_hl_field(0, Var_86, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_86, 5) = ((MR_Box) (Var_88));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_86, MemberFields_21, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_87_87);
        Var_92 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        {
          Var_90 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_90, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_5[1]));
          MR_hl_field(0, Var_90, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_3));
          MR_hl_field(0, Var_90, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_90, 3) = ((MR_Box) (Info_25));
          MR_hl_field(0, Var_90, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_90, 5) = ((MR_Box) (Var_92));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_90, MemberClasses_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_91_91);
        mercury__io__nl_3_p_0(Stream_8);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word EnumConstMemberFields_40;
        MR_String Indent2Str_41;
        MR_Integer Var_96;
        MR_Word Var_98;
        MR_Box conv2_STATE_VARIABLE_IO_94_94;

        mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_4[1]), MemberFields_21, &EnumConstMemberFields_40);
        Var_96 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 2);
        Indent2Str_41 = libs__indent__indent2_string_1_f_0(Var_96);
        {
          Var_98 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_98, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_5[2]));
          MR_hl_field(0, Var_98, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_5));
          MR_hl_field(0, Var_98, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_98, 3) = ((MR_Box) (Info_25));
          MR_hl_field(0, Var_98, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_98, 5) = ((MR_Box) (Indent2Str_41));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_98, EnumConstMemberFields_40, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_94_94);
      }
      break;
  }
  {
    CtorsAux_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CtorsAux_42, 0) = ((MR_Box) (ClassName_12));
    MR_hl_field(1, CtorsAux_42, 1) = ((MR_Box) (ClassArity_13));
  }
  Var_102 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  {
    Var_100 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_100, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_7[0]));
    MR_hl_field(0, Var_100, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_6));
    MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_100, 3) = ((MR_Box) (Info_25));
    MR_hl_field(0, Var_100, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_100, 5) = ((MR_Box) (Var_102));
    MR_hl_field(0, Var_100, 6) = ((MR_Box) (CtorsAux_42));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_100, Ctors_24, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_101_101);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_26);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__get_class_decl_flags_for_csharp_8_p_0(
  MR_Word Kind_9,
  MR_Word Flags_10,
  MR_Word * Serializable_11,
  MR_String * AccessPrefix_12,
  MR_String * PerInstancePrefix_13,
  MR_String * OverridePrefix_14,
  MR_String * ConstnessPrefix_15,
  MR_String * KindStr_16)
{
  MR_Word Access_17 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_10, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Overridability0_18 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Constness_19 = ((MR_Unsigned) ((MR_hl_field(0, Flags_10, (MR_Integer) 0))) & (MR_Integer) 1);

  switch (Access_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *AccessPrefix_12 = (MR_String) "private ";
      break;
    case (MR_Integer) 0:
      *AccessPrefix_12 = (MR_String) "public ";
      break;
  }
  switch (Kind_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *KindStr_16 = (MR_String) "class";
        *Serializable_11 = (MR_Integer) 1;
        *PerInstancePrefix_13 = (MR_String) "";
        switch (Overridability0_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *OverridePrefix_14 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            *OverridePrefix_14 = (MR_String) "sealed ";
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        *KindStr_16 = (MR_String) "enum";
        *Serializable_11 = (MR_Integer) 1;
        *PerInstancePrefix_13 = (MR_String) "";
        switch (Overridability0_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *OverridePrefix_14 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            *OverridePrefix_14 = (MR_String) "sealed ";
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *KindStr_16 = (MR_String) "interface";
        *Serializable_11 = (MR_Integer) 0;
        *PerInstancePrefix_13 = (MR_String) "static ";
        switch (Overridability0_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *OverridePrefix_14 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            *OverridePrefix_14 = (MR_String) "sealed ";
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *KindStr_16 = (MR_String) "struct";
        *Serializable_11 = (MR_Integer) 0;
        *PerInstancePrefix_13 = (MR_String) "";
        *OverridePrefix_14 = (MR_String) "";
      }
      break;
  }
  switch (Constness_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *ConstnessPrefix_15 = (MR_String) "readonly ";
      break;
    case (MR_Integer) 0:
      *ConstnessPrefix_15 = (MR_String) "";
      break;
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_class__get_superclass_names_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_String_4;

  conv0_String_4 = ml_backend__mlds_to_cs_class__interface_to_string_for_csharp_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_String_4));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_class__get_superclass_names_3_f_0(
  MR_Word Info_5,
  MR_Word Inherits_6,
  MR_Word Interfaces_7)
{
  MR_Word Supers_8;
  MR_Word Supers0_9;

  Supers0_9 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_4[0]), Interfaces_7);
  switch (MR_tag((MR_Word) Inherits_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inherits_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Supers_8 = Supers0_9;
          break;
        case (MR_Integer) 1:
          {
            MR_String EnvPtrTypeName_13;

            EnvPtrTypeName_13 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_5, (MR_Word) ((MR_Unsigned) 24U));
            {
              Supers_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Supers_8, 0) = ((MR_Box) (EnvPtrTypeName_13));
              MR_hl_field(1, Supers_8, 1) = ((MR_Box) (Supers0_9));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BaseClassId_10 = (MR_Word) (MR_body((MR_Word) (Inherits_6), (MR_Integer) 1));
        MR_Word BaseClassType_11 = (MR_Word) (MR_mkword(1, (MR_Word) (BaseClassId_10)));
        MR_String BaseClassTypeName_12;

        BaseClassTypeName_12 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_5, BaseClassType_11);
        {
          Supers_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Supers_8, 0) = ((MR_Box) (BaseClassTypeName_12));
          MR_hl_field(1, Supers_8, 1) = ((MR_Box) (Supers0_9));
        }
      }
      break;
  }
  return Supers_8;
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
