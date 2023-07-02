/*
** Automatically generated from `mlds_to_c_class.m'
** by the Mercury compiler,
** version rotd-2023-07-02
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


// :- module ml_backend.mlds_to_c_class.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_c_class__init
ENDINIT
*/

#include "ml_backend.mlds_to_c_class.mih"


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
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_data.mih"
#include "ml_backend.mlds_to_c_func.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_stmt.mih"
#include "ml_backend.mlds_to_c_type.mih"
#include "ml_backend.mlds_to_c_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word EnumModuleName_11,
  MR_Word EnumConstDefns_12);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word EnumModuleName_12,
  MR_Word HeadDefn_13,
  MR_Word TailDefns_14);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_forward_decl_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word ModuleName_11,
  MR_Word ClassDefn_12);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__field_var_defn_is_static_member_1_p_0(
  MR_Word FieldVarDefn_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__function_defn_is_static_member_1_p_0(
  MR_Word FuncDefn_2);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defns_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word ModuleName_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_field_var_defns_8_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word Separate_4,
  MR_Word ModuleName_5,
  MR_Word HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_field_var_defn_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word Separate_12,
  MR_Word ModuleName_13,
  MR_Word FieldVarDefn_14);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_flags_qual_name_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_String IndentStr_10,
  MR_Word ModuleName_11,
  MR_Word ClassDefn_12);


static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_1[1][2];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_2[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_3[2][4];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_4[2][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_5[1][11];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_6[1][10];




static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_3[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_4[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_3[0])),
    ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_3[1])),
    ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_5[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
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


static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word EnumModuleName_11,
  MR_Word EnumConstDefns_12)
{
  if ((EnumConstDefns_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_class.mlds_output_enum_constants\'/7", (MR_String) "EnumConstDefns = []");
      return;
    }
  else
  {
    MR_Word HeadEnumConstDefn_14 = ((MR_Word) ((MR_hl_field(1, EnumConstDefns_12, (MR_Integer) 0))));
    MR_Word TailEnumConstDefns_15 = ((MR_Word) ((MR_hl_field(1, EnumConstDefns_12, (MR_Integer) 1))));

    ml_backend__mlds_to_c_class__mlds_output_enum_constants_8_p_0(Opts_8, Stream_9, Indent_10, EnumModuleName_11, HeadEnumConstDefn_14, TailEnumConstDefns_15);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word EnumModuleName_12,
  MR_Word HeadDefn_13,
  MR_Word TailDefns_14)
{
  while (MR_TRUE)
  {
    MR_Word FieldVarName_16 = ((MR_Word) ((MR_hl_field(0, HeadDefn_13, (MR_Integer) 0))));
    MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, HeadDefn_13, (MR_Integer) 1))));
    MR_Word EnumConst_18 = ((MR_Word) ((MR_hl_field(0, HeadDefn_13, (MR_Integer) 2))));
    MR_String IndentStr_19;
    MR_Word QualFieldVarName_20;
    MR_String QualFieldVarNameStr_21;
    MR_Word Var_31;

    // setup for model_det tailcalls optimized into a loop
    ;
    IndentStr_19 = libs__indent__indent2_string_1_f_0(Indent_11);
    {
      QualFieldVarName_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, QualFieldVarName_20, 0) = ((MR_Box) (EnumModuleName_12));
      MR_hl_field(0, QualFieldVarName_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, QualFieldVarName_20, 2) = ((MR_Box) (FieldVarName_16));
    }
    QualFieldVarNameStr_21 = ml_backend__mlds_to_c_name__qual_field_var_name_to_string_for_c_1_f_0(QualFieldVarName_20);
    Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_9, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_31, Context_17);
    if (((MR_tag((MR_Word) EnumConst_18)) == (MR_Integer) 1))
    {
      MR_String EnumNameStr_24 = ((MR_String) ((MR_hl_field(1, EnumConst_18, (MR_Integer) 1))));

      mercury__io__write_string_4_p_0(Stream_10, IndentStr_19);
      mercury__io__write_string_4_p_0(Stream_10, QualFieldVarNameStr_21);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = (int) ");
      mercury__io__write_string_4_p_0(Stream_10, EnumNameStr_24);
    }
    else
    {
      MR_Unsigned EnumUInt_22 = ((MR_Unsigned) ((MR_hl_field(0, EnumConst_18, (MR_Integer) 0))));
      MR_String Var_74;

      mercury__io__write_string_4_p_0(Stream_10, IndentStr_19);
      mercury__io__write_string_4_p_0(Stream_10, QualFieldVarNameStr_21);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = (MR_Integer) ");
      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_class_scalar_common_2[0]), (MR_Integer) 1, EnumUInt_22, &Var_74);
      mercury__io__write_string_4_p_0(Stream_10, Var_74);
    }
    if ((TailDefns_14 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    else
    {
      MR_Word HeadTailDefn_26 = ((MR_Word) ((MR_hl_field(1, TailDefns_14, (MR_Integer) 0))));
      MR_Word TailTailDefns_27 = ((MR_Word) ((MR_hl_field(1, TailDefns_14, (MR_Integer) 1))));
      MR_Word next_value_of_HeadDefn_13;
      MR_Word next_value_of_TailDefns_14;

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadDefn_13 = HeadTailDefn_26;
      next_value_of_TailDefns_14 = TailTailDefns_27;
      HeadDefn_13 = next_value_of_HeadDefn_13;
      TailDefns_14 = next_value_of_TailDefns_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_forward_decl_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word ModuleName_11,
  MR_Word ClassDefn_12)
{
  MR_String IndentStr_14;
  MR_String ClassName_19;
  MR_Integer ClassArity_20;
  MR_Word Context_21;
  MR_Word Flags_22;
  MR_String FlagsPrefix_32;
  MR_String Qualifier_33;
  MR_String ClassNameStr_34;
  MR_Word Var_35;
  MR_Word Access_70;
  MR_Word Overridability_71;
  MR_Word Constness_72;
  MR_String ConstnessPrefix_73;
  MR_Word Comments_74;

  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_10);
  ClassName_19 = ((MR_String) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 0))));
  ClassArity_20 = ((MR_Integer) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 1))));
  Context_21 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 2))));
  Flags_22 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 3))));
  Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_35, Context_21);
  Access_70 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_22, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
  Overridability_71 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_22, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Constness_72 = ((MR_Unsigned) ((MR_hl_field(0, Flags_22, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (Constness_72) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ConstnessPrefix_73 = (MR_String) "const ";
      break;
    case (MR_Integer) 0:
      ConstnessPrefix_73 = (MR_String) "";
      break;
  }
  Comments_74 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
  switch (Comments_74) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      FlagsPrefix_32 = ConstnessPrefix_73;
      break;
    case (MR_Integer) 1:
      switch (Access_70) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          switch (Overridability_71) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              FlagsPrefix_32 = mercury__string__f_43_43_2_f_0((MR_String) "/* private one_copy */ ", ConstnessPrefix_73);
              break;
            case (MR_Integer) 1:
              FlagsPrefix_32 = mercury__string__f_43_43_2_f_0((MR_String) "/* private one_copy sealed */ ", ConstnessPrefix_73);
              break;
          }
          break;
        case (MR_Integer) 0:
          switch (Overridability_71) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              FlagsPrefix_32 = mercury__string__f_43_43_2_f_0((MR_String) "/* public one_copy */ ", ConstnessPrefix_73);
              break;
            case (MR_Integer) 1:
              FlagsPrefix_32 = mercury__string__f_43_43_2_f_0((MR_String) "/* public one_copy sealed */ ", ConstnessPrefix_73);
              break;
          }
          break;
      }
      break;
  }
  Qualifier_33 = ml_backend__mlds_to_c_name__qualifier_to_string_for_c_1_f_0(ModuleName_11);
  ClassNameStr_34 = ml_backend__mlds_to_c_name__class_name_arity_to_string_for_c_2_f_0(ClassName_19, ClassArity_20);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_9, FlagsPrefix_32);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "struct ");
  mercury__io__write_string_4_p_0(Stream_9, Qualifier_33);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "__");
  mercury__io__write_string_4_p_0(Stream_9, ClassNameStr_34);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_s");
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__field_var_defn_is_static_member_1_p_0(
  MR_Word FieldVarDefn_2)
{
  MR_bool succeeded;
  MR_Word Var_3;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_2, (MR_Integer) 2))));

  Var_3 = ((((MR_Unsigned) ((MR_hl_field(0, Var_4, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  succeeded = (Var_3 == (MR_Integer) 0);
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__function_defn_is_static_member_1_p_0(
  MR_Word FuncDefn_2)
{
  MR_bool succeeded;
  MR_Word Var_3;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, FuncDefn_2, (MR_Integer) 2))));

  Var_3 = ((MR_Unsigned) ((MR_hl_field(0, Var_4, (MR_Integer) 0))) & (MR_Integer) 1);
  succeeded = (Var_3 == (MR_Integer) 0);
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_func__mlds_output_function_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_class__mlds_output_field_var_defn_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_class__field_var_defn_is_static_member_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_class__function_defn_is_static_member_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word ModuleName_11,
  MR_Word ClassDefn_12)
{
  MR_bool succeeded;
  MR_String ClassName_14 = ((MR_String) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 0))));
  MR_Integer ClassArity_15 = ((MR_Integer) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 1))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 2))));
  MR_Word Inherits_20 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 6))));
  MR_Word MemberFields_23 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 9))));
  MR_Word MemberClasses_24 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 10))));
  MR_Word Ctors_26 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 12))));
  MR_String IndentStr_27;
  MR_Word ClassModuleName_28;
  MR_Word StaticCtors_29;
  MR_Word StaticMemberFields_31;
  MR_Word StructCtors_33;
  MR_Word StructMemberFields_34;
  MR_Word BaseFieldVarDefns_35;
  MR_Integer Indent1_40;
  MR_Word Var_62;
  MR_Word Var_65;
  MR_Word Var_70;
  MR_Box conv0_STATE_VARIABLE_IO_63_63;
  MR_Box conv1_STATE_VARIABLE_IO_66_66;
  MR_Box conv2_STATE_VARIABLE_IO_68_68;

  IndentStr_27 = libs__indent__indent2_string_1_f_0(Indent_10);
  ClassModuleName_28 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(ModuleName_11, ClassName_14, ClassArity_15);
  mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_c_class_scalar_common_4[0]), Ctors_26, &StaticCtors_29, &StructCtors_33);
  mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_class_scalar_common_4[1]), MemberFields_23, &StaticMemberFields_31, &StructMemberFields_34);
  switch (MR_tag((MR_Word) Inherits_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inherits_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          BaseFieldVarDefns_35 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_class.mlds_output_class_defn\'/7", (MR_String) "inherits_generic_env_ptr_type");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BaseClassId_36 = (MR_Word) (MR_body((MR_Word) (Inherits_20), (MR_Integer) 1));
        MR_Word Type_38 = (MR_Word) (MR_mkword(1, (MR_Word) (BaseClassId_36)));
        MR_Word Var_46;
        MR_Word Var_47;

        Var_47 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_c_class_scalar_common_1[0])));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (Context_16));
          MR_hl_field(0, Var_46, 2) = ((MR_Box) (Var_47));
          MR_hl_field(0, Var_46, 3) = ((MR_Box) (Type_38));
          MR_hl_field(0, Var_46, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_46, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          BaseFieldVarDefns_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, BaseFieldVarDefns_35, 0) = ((MR_Box) (Var_46));
          MR_hl_field(1, BaseFieldVarDefns_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  mercury__io__nl_3_p_0(Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_27);
  ml_backend__mlds_to_c_class__mlds_output_class_flags_qual_name_7_p_0(Opts_8, Stream_9, IndentStr_27, ModuleName_11, ClassDefn_12);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " {\n");
  Indent1_40 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_62, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_5[0]));
    MR_hl_field(0, Var_62, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_3));
    MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_62, 3) = ((MR_Box) (Opts_8));
    MR_hl_field(0, Var_62, 4) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_62, 5) = ((MR_Box) (Indent1_40));
    MR_hl_field(0, Var_62, 6) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_62, 7) = ((MR_Box) (ClassModuleName_28));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, BaseFieldVarDefns_35, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_63_63);
  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_6[0]));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_4));
    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_65, 3) = ((MR_Box) (Opts_8));
    MR_hl_field(0, Var_65, 4) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_65, 5) = ((MR_Box) (Indent1_40));
    MR_hl_field(0, Var_65, 6) = ((MR_Box) (ClassModuleName_28));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, StructCtors_33, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_66_66);
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, StructMemberFields_34, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_68_68);
  Var_70 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_70, Context_16);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_27);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
  ml_backend__mlds_to_c_func__mlds_output_function_defns_8_p_0(Opts_8, (MR_Integer) 1, Stream_9, Indent_10, ClassModuleName_28, StaticCtors_29);
  ml_backend__mlds_to_c_class__mlds_output_field_var_defns_8_p_0(Opts_8, Stream_9, Indent_10, (MR_Integer) 1, ClassModuleName_28, StaticMemberFields_31);
  ml_backend__mlds_to_c_class__mlds_output_class_defns_7_p_0(Opts_8, Stream_9, Indent_10, ClassModuleName_28, MemberClasses_24);
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defns_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word ModuleName_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ClassDefn_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ClassDefns_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__5_5;

      ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0(Opts_1, Stream_2, Indent_3, ModuleName_4, ClassDefn_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ClassDefns_20;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_field_var_defns_8_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word Separate_4,
  MR_Word ModuleName_5,
  MR_Word HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FieldVarDefn_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word FieldVarDefns_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__6_6;

      ml_backend__mlds_to_c_class__mlds_output_field_var_defn_8_p_0(Opts_1, Stream_2, Indent_3, Separate_4, ModuleName_5, FieldVarDefn_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = FieldVarDefns_23;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_field_var_defn_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word Separate_12,
  MR_Word ModuleName_13,
  MR_Word FieldVarDefn_14)
{
  MR_Word FieldVarName_16 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_14, (MR_Integer) 0))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_14, (MR_Integer) 1))));
  MR_Word Flags_18 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_14, (MR_Integer) 2))));
  MR_Word Type_19 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_14, (MR_Integer) 3))));
  MR_Word Initializer_20 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_14, (MR_Integer) 4))));
  MR_Word GCStmt_21 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_14, (MR_Integer) 5))));
  MR_String IndentStr_22;
  MR_String FlagsPrefix_23;
  MR_Word QualFieldVarName_24;
  MR_Word InitSize_25;
  MR_String TypePrefix_26;
  MR_String TypeSuffix_27;
  MR_String FieldVarNameStr_28;
  MR_Word Var_34;
  MR_Word PerInstance_73;
  MR_Word Constness_74;
  MR_Word Comments_76;
  MR_String FlagsPrefix0_77;

  IndentStr_22 = libs__indent__indent2_string_1_f_0(Indent_11);
  PerInstance_73 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_18, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Constness_74 = ((MR_Unsigned) ((MR_hl_field(0, Flags_18, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (Constness_74) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      FlagsPrefix0_77 = (MR_String) "const ";
      break;
    case (MR_Integer) 0:
      FlagsPrefix0_77 = (MR_String) "";
      break;
  }
  Comments_76 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_9, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
  switch (Comments_76) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      FlagsPrefix_23 = FlagsPrefix0_77;
      break;
    case (MR_Integer) 1:
      switch (PerInstance_73) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          FlagsPrefix_23 = mercury__string__f_43_43_2_f_0((MR_String) "/* one_copy */ ", FlagsPrefix0_77);
          break;
        case (MR_Integer) 1:
          FlagsPrefix_23 = FlagsPrefix0_77;
          break;
      }
      break;
  }
  {
    QualFieldVarName_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, QualFieldVarName_24, 0) = ((MR_Box) (ModuleName_13));
    MR_hl_field(0, QualFieldVarName_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, QualFieldVarName_24, 2) = ((MR_Box) (FieldVarName_16));
  }
  InitSize_25 = ml_backend__mlds__get_initializer_array_size_1_f_0(Initializer_20);
  ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_9, Type_19, InitSize_25, &TypePrefix_26, &TypeSuffix_27);
  switch (Separate_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__nl_3_p_0(Stream_10);
      break;
  }
  Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_9, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_34, Context_17);
  FieldVarNameStr_28 = ml_backend__mlds_to_c_name__qual_field_var_name_to_string_for_c_1_f_0(QualFieldVarName_24);
  mercury__io__write_string_4_p_0(Stream_10, IndentStr_22);
  mercury__io__write_string_4_p_0(Stream_10, FlagsPrefix_23);
  mercury__io__write_string_4_p_0(Stream_10, TypePrefix_26);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_10, FieldVarNameStr_28);
  mercury__io__write_string_4_p_0(Stream_10, TypeSuffix_27);
  ml_backend__mlds_to_c_data__mlds_output_initializer_6_p_0(Opts_9, Stream_10, Type_19, Initializer_20);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
  ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_7_p_0(Opts_9, Stream_10, Indent_11, GCStmt_21, (MR_String) "");
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_flags_qual_name_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_String IndentStr_10,
  MR_Word ModuleName_11,
  MR_Word ClassDefn_12)
{
  MR_String ClassName_14 = ((MR_String) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 0))));
  MR_Integer ClassArity_15 = ((MR_Integer) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 1))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 2))));
  MR_Word Flags_17 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 3))));
  MR_String FlagsPrefix_27;
  MR_String Qualifier_28;
  MR_String ClassNameStr_29;
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  MR_Word Access_68;
  MR_Word Overridability_69;
  MR_Word Constness_70;
  MR_String ConstnessPrefix_71;
  MR_Word Comments_72;

  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_32, Context_16);
  Access_68 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_17, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
  Overridability_69 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_17, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Constness_70 = ((MR_Unsigned) ((MR_hl_field(0, Flags_17, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (Constness_70) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ConstnessPrefix_71 = (MR_String) "const ";
      break;
    case (MR_Integer) 0:
      ConstnessPrefix_71 = (MR_String) "";
      break;
  }
  Comments_72 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
  switch (Comments_72) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      FlagsPrefix_27 = ConstnessPrefix_71;
      break;
    case (MR_Integer) 1:
      switch (Access_68) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          switch (Overridability_69) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              FlagsPrefix_27 = mercury__string__f_43_43_2_f_0((MR_String) "/* private one_copy */ ", ConstnessPrefix_71);
              break;
            case (MR_Integer) 1:
              FlagsPrefix_27 = mercury__string__f_43_43_2_f_0((MR_String) "/* private one_copy sealed */ ", ConstnessPrefix_71);
              break;
          }
          break;
        case (MR_Integer) 0:
          switch (Overridability_69) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              FlagsPrefix_27 = mercury__string__f_43_43_2_f_0((MR_String) "/* public one_copy */ ", ConstnessPrefix_71);
              break;
            case (MR_Integer) 1:
              FlagsPrefix_27 = mercury__string__f_43_43_2_f_0((MR_String) "/* public one_copy sealed */ ", ConstnessPrefix_71);
              break;
          }
          break;
      }
      break;
  }
  Qualifier_28 = ml_backend__mlds_to_c_name__qualifier_to_string_for_c_1_f_0(ModuleName_11);
  ClassNameStr_29 = ml_backend__mlds_to_c_name__class_name_arity_to_string_for_c_2_f_0(ClassName_14, ClassArity_15);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_10);
  mercury__io__write_string_4_p_0(Stream_9, FlagsPrefix_27);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "struct ");
  mercury__io__write_string_4_p_0(Stream_9, Qualifier_28);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "__");
  mercury__io__write_string_4_p_0(Stream_9, ClassNameStr_29);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_s");
}

void mercury__ml_backend__mlds_to_c_class__init(void)
{
}

void mercury__ml_backend__mlds_to_c_class__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_c_class__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_c_class__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_c_class.
