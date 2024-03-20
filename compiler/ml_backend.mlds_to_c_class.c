/*
** Automatically generated from `mlds_to_c_class.m'
** by the Mercury compiler,
** version rotd-2024-03-20
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


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
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
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_class__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__IntroducedFrom__pred__mlds_output_struct_defn__227__1_2_p_0(
  MR_Word MaybeCtor_17,
  MR_Word HeadVar__2_29);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word EnumModuleName_11,
  MR_Word EnumConstDefns_12);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word EnumModuleName_12,
  MR_Word HeadDefn_13,
  MR_Word TailDefns_14);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_forward_decl_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word ModuleName_11,
  MR_Word ClassDefn_12);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__field_var_defn_is_static_member_1_p_0(
  MR_Word FieldVarDefn_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__function_defn_is_static_member_1_p_0(
  MR_Word FuncDefn_2);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_struct_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_struct_defn_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_env_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Unsigned Indent_3,
  MR_Word ModuleName_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_field_var_defns_8_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
  MR_Word Separate_4,
  MR_Word ModuleName_5,
  MR_Word HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_field_var_defn_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
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


static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_2[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_3[2][4];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_4[2][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_5[1][11];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_6[1][10];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_7[1][5];




static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row   1 */
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_7[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_c_class__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_class__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_class__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0) }
};

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__IntroducedFrom__pred__mlds_output_struct_defn__227__1_2_p_0(
  MR_Word MaybeCtor_17,
  MR_Word HeadVar__2_29)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_c_class_scalar_common_1[0]), ((MR_Box) (MaybeCtor_17)), ((MR_Box) (HeadVar__2_29)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
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
  MR_Unsigned Indent_11,
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
  MR_Unsigned Indent_10,
  MR_Word ModuleName_11,
  MR_Word ClassDefn_12)
{
  MR_String IndentStr_14;
  MR_String ClassName_19;
  MR_Integer ClassArity_20;
  MR_Word Context_21;
  MR_Word Flags_22;
  MR_String FlagsPrefix_31;
  MR_String Qualifier_32;
  MR_String ClassNameStr_33;
  MR_Word Var_34;
  MR_Word Access_69;
  MR_Word Overridability_70;
  MR_Word Constness_71;
  MR_String ConstnessPrefix_72;
  MR_Word Comments_73;

  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_10);
  ClassName_19 = ((MR_String) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 0))));
  ClassArity_20 = ((MR_Integer) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 1))));
  Context_21 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 2))));
  Flags_22 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 3))));
  Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_34, Context_21);
  Access_69 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_22, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
  Overridability_70 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_22, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Constness_71 = ((MR_Unsigned) ((MR_hl_field(0, Flags_22, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (Constness_71) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ConstnessPrefix_72 = (MR_String) "const ";
      break;
    case (MR_Integer) 0:
      ConstnessPrefix_72 = (MR_String) "";
      break;
  }
  Comments_73 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
  switch (Comments_73) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      FlagsPrefix_31 = ConstnessPrefix_72;
      break;
    case (MR_Integer) 1:
      switch (Access_69) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          switch (Overridability_70) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              FlagsPrefix_31 = mercury__string__f_43_43_2_f_0((MR_String) "/* private one_copy */ ", ConstnessPrefix_72);
              break;
            case (MR_Integer) 1:
              FlagsPrefix_31 = mercury__string__f_43_43_2_f_0((MR_String) "/* private one_copy sealed */ ", ConstnessPrefix_72);
              break;
          }
          break;
        case (MR_Integer) 0:
          switch (Overridability_70) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              FlagsPrefix_31 = mercury__string__f_43_43_2_f_0((MR_String) "/* public one_copy */ ", ConstnessPrefix_72);
              break;
            case (MR_Integer) 1:
              FlagsPrefix_31 = mercury__string__f_43_43_2_f_0((MR_String) "/* public one_copy sealed */ ", ConstnessPrefix_72);
              break;
          }
          break;
      }
      break;
  }
  Qualifier_32 = ml_backend__mlds_to_c_name__qualifier_to_string_for_c_1_f_0(ModuleName_11);
  ClassNameStr_33 = ml_backend__mlds_to_c_name__class_name_arity_to_string_for_c_2_f_0(ClassName_19, ClassArity_20);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_9, FlagsPrefix_31);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "struct ");
  mercury__io__write_string_4_p_0(Stream_9, Qualifier_32);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "__");
  mercury__io__write_string_4_p_0(Stream_9, ClassNameStr_33);
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
ml_backend__mlds_to_c_class__mlds_output_struct_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_class__mlds_output_field_var_defn_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_struct_defn_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_class__IntroducedFrom__pred__mlds_output_struct_defn__227__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_struct_defn_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word ModuleName_11,
  MR_Word StructDefn_12)
{
  MR_bool succeeded;
  MR_String StructName_14 = ((MR_String) ((MR_hl_field(0, StructDefn_12, (MR_Integer) 0))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, StructDefn_12, (MR_Integer) 1))));
  MR_Word MemberFields_16 = ((MR_Word) ((MR_hl_field(0, StructDefn_12, (MR_Integer) 2))));
  MR_Word MaybeCtor_17 = ((MR_Word) ((MR_hl_field(0, StructDefn_12, (MR_Integer) 3))));
  MR_String IndentStr_18;
  MR_Word ClassModuleName_19;
  MR_String FlagsPrefix_20;
  MR_String Qualifier_21;
  MR_String StructNameStr_22;
  MR_Unsigned Indent1_23;
  MR_Word Var_26;
  MR_Word Var_37;
  MR_Word Var_54;
  MR_Word Comments_93;
  MR_Box conv0_STATE_VARIABLE_IO_55_55;

  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_7[0]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_struct_defn_7_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (MaybeCtor_17));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140ml_backend.mlds_to_c_class.mlds_output_struct_defn\'/7", (MR_String) "MaybeCtor != no");
  IndentStr_18 = libs__indent__indent2_string_1_f_0(Indent_10);
  ClassModuleName_19 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(ModuleName_11, StructName_14, (MR_Integer) 0);
  mercury__io__nl_3_p_0(Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_18);
  Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_37, Context_15);
  Comments_93 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
  switch (Comments_93) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      FlagsPrefix_20 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      FlagsPrefix_20 = (MR_String) "/* private one_copy sealed */ ";
      break;
  }
  Qualifier_21 = ml_backend__mlds_to_c_name__qualifier_to_string_for_c_1_f_0(ModuleName_11);
  StructNameStr_22 = ml_backend__mlds_to_c_name__class_name_arity_to_string_for_c_2_f_0(StructName_14, (MR_Integer) 0);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_18);
  mercury__io__write_string_4_p_0(Stream_9, FlagsPrefix_20);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "struct ");
  mercury__io__write_string_4_p_0(Stream_9, Qualifier_21);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "__");
  mercury__io__write_string_4_p_0(Stream_9, StructNameStr_22);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_s");
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " {\n");
  Indent1_23 = (Indent_10 + (MR_Unsigned) 1U);
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_5[0]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_struct_defn_7_p_0_2));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (Opts_8));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_54, 5) = ((MR_Box) (Indent1_23));
    MR_hl_field(0, Var_54, 6) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_54, 7) = ((MR_Box) (ClassModuleName_19));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, MemberFields_16, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_55_55);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_18);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_env_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_class__mlds_output_field_var_defn_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_env_defn_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word ModuleName_11,
  MR_Word EnvDefn_12)
{
  MR_String EnvName_14 = ((MR_String) ((MR_hl_field(0, EnvDefn_12, (MR_Integer) 0))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, EnvDefn_12, (MR_Integer) 1))));
  MR_Word MemberFields_16 = ((MR_Word) ((MR_hl_field(0, EnvDefn_12, (MR_Integer) 2))));
  MR_String IndentStr_17;
  MR_Word EnvModuleName_18;
  MR_String FlagsPrefix_19;
  MR_String Qualifier_20;
  MR_String EnvNameStr_21;
  MR_Unsigned Indent1_22;
  MR_Word Var_32;
  MR_Word Var_49;
  MR_Word Comments_87;
  MR_Box conv0_STATE_VARIABLE_IO_50_50;

  IndentStr_17 = libs__indent__indent2_string_1_f_0(Indent_10);
  EnvModuleName_18 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(ModuleName_11, EnvName_14, (MR_Integer) 0);
  mercury__io__nl_3_p_0(Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_17);
  Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_32, Context_15);
  Comments_87 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
  switch (Comments_87) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      FlagsPrefix_19 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      FlagsPrefix_19 = (MR_String) "/* private one_copy */ ";
      break;
  }
  Qualifier_20 = ml_backend__mlds_to_c_name__qualifier_to_string_for_c_1_f_0(ModuleName_11);
  EnvNameStr_21 = ml_backend__mlds_to_c_name__class_name_arity_to_string_for_c_2_f_0(EnvName_14, (MR_Integer) 0);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_17);
  mercury__io__write_string_4_p_0(Stream_9, FlagsPrefix_19);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "struct ");
  mercury__io__write_string_4_p_0(Stream_9, Qualifier_20);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "__");
  mercury__io__write_string_4_p_0(Stream_9, EnvNameStr_21);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_s");
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " {\n");
  Indent1_22 = (Indent_10 + (MR_Unsigned) 1U);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_5[0]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_env_defn_7_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (Opts_8));
    MR_hl_field(0, Var_49, 4) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_49, 5) = ((MR_Box) (Indent1_22));
    MR_hl_field(0, Var_49, 6) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_49, 7) = ((MR_Box) (EnvModuleName_18));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, MemberFields_16, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_50_50);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_17);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_func__mlds_output_function_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_class__mlds_output_field_var_defn_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Unsigned Indent_10,
  MR_Word ModuleName_11,
  MR_Word ClassDefn_12)
{
  MR_bool succeeded;
  MR_String ClassName_14 = ((MR_String) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 0))));
  MR_Integer ClassArity_15 = ((MR_Integer) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 1))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 2))));
  MR_Word Inherits_19 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 5))));
  MR_Word MemberFields_22 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 8))));
  MR_Word MemberClasses_23 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 9))));
  MR_Word Ctors_25 = ((MR_Word) ((MR_hl_field(0, ClassDefn_12, (MR_Integer) 11))));
  MR_String IndentStr_26;
  MR_Word ClassModuleName_27;
  MR_Word StaticCtors_28;
  MR_Word StaticMemberFields_30;
  MR_Word StructCtors_32;
  MR_Word StructMemberFields_33;
  MR_Word BaseFieldVarDefns_34;
  MR_Unsigned Indent1_39;
  MR_Word Var_59;
  MR_Word Var_62;
  MR_Word Var_67;
  MR_Box conv0_STATE_VARIABLE_IO_60_60;
  MR_Box conv1_STATE_VARIABLE_IO_63_63;
  MR_Box conv2_STATE_VARIABLE_IO_65_65;

  IndentStr_26 = libs__indent__indent2_string_1_f_0(Indent_10);
  ClassModuleName_27 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(ModuleName_11, ClassName_14, ClassArity_15);
  mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_c_class_scalar_common_4[0]), Ctors_25, &StaticCtors_28, &StructCtors_32);
  mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_class_scalar_common_4[1]), MemberFields_22, &StaticMemberFields_30, &StructMemberFields_33);
  if ((Inherits_19 == (MR_Word) ((MR_Unsigned) 0U)))
    BaseFieldVarDefns_34 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word BaseClassId_35 = (MR_Word) (MR_body((MR_Word) (Inherits_19), (MR_Integer) 1));
    MR_Word Type_37 = (MR_Word) (MR_mkword(1, (MR_Word) (BaseClassId_35)));
    MR_Word Var_45;
    MR_Word Var_46;

    Var_46 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__mlds_to_c_class_scalar_common_1[1])));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (Context_16));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) (Var_46));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (Type_37));
      MR_hl_field(0, Var_45, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_45, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      BaseFieldVarDefns_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BaseFieldVarDefns_34, 0) = ((MR_Box) (Var_45));
      MR_hl_field(1, BaseFieldVarDefns_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  mercury__io__nl_3_p_0(Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_26);
  ml_backend__mlds_to_c_class__mlds_output_class_flags_qual_name_7_p_0(Opts_8, Stream_9, IndentStr_26, ModuleName_11, ClassDefn_12);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " {\n");
  Indent1_39 = (Indent_10 + (MR_Unsigned) 1U);
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_5[0]));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_3));
    MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_59, 3) = ((MR_Box) (Opts_8));
    MR_hl_field(0, Var_59, 4) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_59, 5) = ((MR_Box) (Indent1_39));
    MR_hl_field(0, Var_59, 6) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_59, 7) = ((MR_Box) (ClassModuleName_27));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, BaseFieldVarDefns_34, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_60_60);
  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_62, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_6[0]));
    MR_hl_field(0, Var_62, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_4));
    MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_62, 3) = ((MR_Box) (Opts_8));
    MR_hl_field(0, Var_62, 4) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_62, 5) = ((MR_Box) (Indent1_39));
    MR_hl_field(0, Var_62, 6) = ((MR_Box) (ClassModuleName_27));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, StructCtors_32, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_63_63);
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, StructMemberFields_33, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_65_65);
  Var_67 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_67, Context_16);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_26);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
  ml_backend__mlds_to_c_func__mlds_output_function_defns_8_p_0(Opts_8, (MR_Integer) 1, Stream_9, Indent_10, ClassModuleName_27, StaticCtors_28);
  ml_backend__mlds_to_c_class__mlds_output_field_var_defns_8_p_0(Opts_8, Stream_9, Indent_10, (MR_Integer) 1, ClassModuleName_27, StaticMemberFields_30);
  ml_backend__mlds_to_c_class__mlds_output_class_defns_7_p_0(Opts_8, Stream_9, Indent_10, ClassModuleName_27, MemberClasses_23);
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defns_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
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
  MR_Unsigned Indent_3,
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
  MR_Unsigned Indent_11,
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
  MR_String FlagsPrefix_26;
  MR_String Qualifier_27;
  MR_String ClassNameStr_28;
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  MR_Word Access_67;
  MR_Word Overridability_68;
  MR_Word Constness_69;
  MR_String ConstnessPrefix_70;
  MR_Word Comments_71;

  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_31, Context_16);
  Access_67 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_17, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
  Overridability_68 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_17, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Constness_69 = ((MR_Unsigned) ((MR_hl_field(0, Flags_17, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (Constness_69) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ConstnessPrefix_70 = (MR_String) "const ";
      break;
    case (MR_Integer) 0:
      ConstnessPrefix_70 = (MR_String) "";
      break;
  }
  Comments_71 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
  switch (Comments_71) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      FlagsPrefix_26 = ConstnessPrefix_70;
      break;
    case (MR_Integer) 1:
      switch (Access_67) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          switch (Overridability_68) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              FlagsPrefix_26 = mercury__string__f_43_43_2_f_0((MR_String) "/* private one_copy */ ", ConstnessPrefix_70);
              break;
            case (MR_Integer) 1:
              FlagsPrefix_26 = mercury__string__f_43_43_2_f_0((MR_String) "/* private one_copy sealed */ ", ConstnessPrefix_70);
              break;
          }
          break;
        case (MR_Integer) 0:
          switch (Overridability_68) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              FlagsPrefix_26 = mercury__string__f_43_43_2_f_0((MR_String) "/* public one_copy */ ", ConstnessPrefix_70);
              break;
            case (MR_Integer) 1:
              FlagsPrefix_26 = mercury__string__f_43_43_2_f_0((MR_String) "/* public one_copy sealed */ ", ConstnessPrefix_70);
              break;
          }
          break;
      }
      break;
  }
  Qualifier_27 = ml_backend__mlds_to_c_name__qualifier_to_string_for_c_1_f_0(ModuleName_11);
  ClassNameStr_28 = ml_backend__mlds_to_c_name__class_name_arity_to_string_for_c_2_f_0(ClassName_14, ClassArity_15);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_10);
  mercury__io__write_string_4_p_0(Stream_9, FlagsPrefix_26);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "struct ");
  mercury__io__write_string_4_p_0(Stream_9, Qualifier_27);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "__");
  mercury__io__write_string_4_p_0(Stream_9, ClassNameStr_28);
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
