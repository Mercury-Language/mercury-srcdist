/*
** Automatically generated from `mlds_to_java_class.m'
** by the Mercury compiler,
** version rotd-2025-07-25
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


// :- module ml_backend.mlds_to_java_class.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_java_class__init
ENDINIT
*/

#include "ml_backend.mlds_to_java_class.mih"


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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.options.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_java_data.mih"
#include "ml_backend.mlds_to_java_func.mih"
#include "ml_backend.mlds_to_java_name.mih"
#include "ml_backend.mlds_to_java_type.mih"
#include "ml_backend.mlds_to_java_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static MR_Char MR_CALL 
ml_backend__mlds_to_java_class__replace_non_alphanum_underscore_1_f_0(
  MR_Char Char_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_field_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word FieldVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constant_for_java_7_p_0(
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word EnumConstDefn_12);

static MR_Box MR_CALL 
ml_backend__mlds_to_java_class__maybe_shorten_long_env_name_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_struct_defn_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_env_defn_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_class_defn_for_java_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_class_defn_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_ctor_for_java_6_p_0(
  MR_Word Stream_7,
  MR_Unsigned Indent_8,
  MR_String ClassName_9,
  MR_Integer ClassArity_10);

static MR_String MR_CALL 
ml_backend__mlds_to_java_class__interface_to_string_for_java_1_f_0(
  MR_Word Interface_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_inherits_list_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word Inherits_10);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word Flags_8);

static MR_Box MR_CALL 
ml_backend__mlds_to_java_class__output_implements_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_implements_list_5_p_0(
  MR_Word Stream_6,
  MR_Unsigned Indent_7,
  MR_Word InterfaceList_8);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_inherits_list_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word Inherits_10);


static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_1[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_2[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_3[3][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_4[2][9];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_5[2][10];




static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_2[2][5] = {
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_3[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_java_class__output_implements_list_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_2[1])),
    ((MR_Box) (ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_2[1])),
    ((MR_Box) (ml_backend__mlds_to_java_class__maybe_shorten_long_env_name_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_4[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_5[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_const_defn_0)),
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


static MR_Char MR_CALL 
ml_backend__mlds_to_java_class__replace_non_alphanum_underscore_1_f_0(
  MR_Char Char_3)
{
  MR_bool succeeded;
  MR_Char HeadVar__2_2;

  succeeded = mercury__char__is_alnum_or_underscore_1_p_0(Char_3);
  if (succeeded)
    HeadVar__2_2 = Char_3;
  else
    HeadVar__2_2 = (MR_Char) 95;
  return HeadVar__2_2;
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_field_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word FieldVarDefn_10)
{
  MR_bool succeeded;
  MR_Word FieldVarName_12 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, 0))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, 1))));
  MR_Word Flags_14 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, 2))));
  MR_Word Type_15 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, 3))));
  MR_Word Initializer_16 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, 4))));
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 1))) >> 1)) & (MR_Integer) 1);
  MR_Unsigned Var_26;
  MR_Word PerInstance_39;
  MR_Word Constness_40;
  MR_String TypeStr_47;
  MR_String FieldVarNameStr_48;

  ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_8, Var_20, (MR_Integer) 2, Context_13, Indent_9);
  PerInstance_39 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_14, 0))) >> 1)) & (MR_Integer) 1);
  Constness_40 = ((MR_Unsigned) ((MR_hl_field(0, Flags_14, 0))) & (MR_Integer) 1);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "public ");
  switch (PerInstance_39) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static ");
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
  succeeded = (Constness_40 == (MR_Integer) 1);
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "final ");
  TypeStr_47 = ml_backend__mlds_to_java_type__type_to_string_for_java_2_f_0(Info_7, Type_15);
  FieldVarNameStr_48 = ml_backend__mlds_to_java_name__field_var_name_to_string_for_java_1_f_0(FieldVarName_12);
  mercury__io__write_string_4_p_0(Stream_8, TypeStr_47);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_48);
  Var_26 = (Indent_9 + (MR_Unsigned) 1U);
  ml_backend__mlds_to_java_data__output_initializer_for_java_9_p_0(Info_7, Stream_8, (MR_Word) ((MR_Unsigned) 0U), Var_26, Type_15, Initializer_16, (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constant_for_java_7_p_0(
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word EnumConstDefn_12)
{
  MR_Word FieldVarName_14 = ((MR_Word) ((MR_hl_field(0, EnumConstDefn_12, 0))));
  MR_Word EnumConst_16 = ((MR_Word) ((MR_hl_field(0, EnumConstDefn_12, 2))));
  MR_String IndentStr_17;
  MR_String UnqualClassNameStr_18;
  MR_String FieldVarNameStr_19;

  IndentStr_17 = libs__indent__indent2_string_1_f_0(Indent_9);
  UnqualClassNameStr_18 = ml_backend__mlds_to_java_name__unqual_class_name_to_string_for_java_2_f_0(ClassName_10, ClassArity_11);
  FieldVarNameStr_19 = ml_backend__mlds_to_java_name__field_var_name_to_string_for_java_1_f_0(FieldVarName_14);
  if (((MR_tag((MR_Word) EnumConst_16)) == (MR_Integer) 1))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_class.output_enum_constant_for_java\'/7", (MR_String) "not mlconst_enum");
      return;
    }
  else
  {
    MR_Unsigned EnumUInt_20 = ((MR_Unsigned) ((MR_hl_field(0, EnumConst_16, 0))));
    MR_String Var_51;
    MR_String Var_65;

    mercury__io__write_string_4_p_0(Stream_8, IndentStr_17);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "public static final ");
    mercury__io__write_string_4_p_0(Stream_8, UnqualClassNameStr_18);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) " K");
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_1[0]), (MR_Integer) 1, EnumUInt_20, &Var_51);
    mercury__io__write_string_4_p_0(Stream_8, Var_51);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = new ");
    mercury__io__write_string_4_p_0(Stream_8, UnqualClassNameStr_18);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_1[0]), (MR_Integer) 1, EnumUInt_20, &Var_65);
    mercury__io__write_string_4_p_0(Stream_8, Var_65);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "); /* ");
    mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_19);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) " */\n");
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_java_class__interface_is_special_for_java_1_p_0(
  MR_String HeadVar__1_1)
{
  MR_bool succeeded;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    if (MR_offset_strn_eq(0, 2, HeadVar__1_1, (MR_String) "Me"))
      switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
        case (MR_Integer) 114:
          if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "MercuryType"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 116:
          if (MR_offset_strn_eq(3, 6, HeadVar__1_1, (MR_String) "MethodPtr"))
            switch (MR_nth_code_unit(HeadVar__1_1, 9)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 1;
                break;
              case (MR_Integer) 49:
                switch (MR_nth_code_unit(HeadVar__1_1, 10)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 48:
                    if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "MethodPtr10"))
                      case_num_0 = (MR_Integer) 3;
                    break;
                  case (MR_Integer) 49:
                    if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "MethodPtr11"))
                      case_num_0 = (MR_Integer) 4;
                    break;
                  case (MR_Integer) 50:
                    if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "MethodPtr12"))
                      case_num_0 = (MR_Integer) 5;
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "MethodPtr13"))
                      case_num_0 = (MR_Integer) 6;
                    break;
                  case (MR_Integer) 52:
                    if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "MethodPtr14"))
                      case_num_0 = (MR_Integer) 7;
                    break;
                  case (MR_Integer) 53:
                    if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "MethodPtr15"))
                      case_num_0 = (MR_Integer) 8;
                    break;
                }
                break;
              case (MR_Integer) 50:
                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "MethodPtr2"))
                  case_num_0 = (MR_Integer) 9;
                break;
              case (MR_Integer) 51:
                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "MethodPtr3"))
                  case_num_0 = (MR_Integer) 10;
                break;
              case (MR_Integer) 52:
                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "MethodPtr4"))
                  case_num_0 = (MR_Integer) 11;
                break;
              case (MR_Integer) 53:
                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "MethodPtr5"))
                  case_num_0 = (MR_Integer) 12;
                break;
              case (MR_Integer) 54:
                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "MethodPtr6"))
                  case_num_0 = (MR_Integer) 13;
                break;
              case (MR_Integer) 55:
                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "MethodPtr7"))
                  case_num_0 = (MR_Integer) 14;
                break;
              case (MR_Integer) 56:
                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "MethodPtr8"))
                  case_num_0 = (MR_Integer) 15;
                break;
              case (MR_Integer) 57:
                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "MethodPtr9"))
                  case_num_0 = (MR_Integer) 16;
                break;
              case (MR_Integer) 78:
                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "MethodPtrN"))
                  case_num_0 = (MR_Integer) 17;
                break;
            }
          break;
      }
    if ((case_num_0 < (MR_Integer) 0))
      succeeded = MR_FALSE;
    else
    {
      // we found a match; look up the results
      ;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__mlds_to_java_class__maybe_shorten_long_env_name_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Char conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__mlds_to_java_class__replace_non_alphanum_underscore_1_f_0(((MR_Char) (MR_Word) wrapper_arg_1));
  wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
ml_backend__mlds_to_java_class__maybe_shorten_long_env_name_4_p_0(
  MR_Word STATE_VARIABLE_EnvDefn_0_11,
  MR_Word * STATE_VARIABLE_EnvDefn_12,
  MR_Word STATE_VARIABLE_Renaming_0_13,
  MR_Word * STATE_VARIABLE_Renaming_14)
{
  MR_bool succeeded;
  MR_String EnvName0_7 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_EnvDefn_0_11, 0))));
  MR_Word Context_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_EnvDefn_0_11, 1))));
  MR_Word MemberFields_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_EnvDefn_0_11, 2))));
  MR_String EnvName_10;
  MR_String MangledClassName0_16;
  MR_Integer Var_23;

  MangledClassName0_16 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(EnvName0_7);
  Var_23 = mercury__string__length_1_f_0(MangledClassName0_16);
  succeeded = (Var_23 < (MR_Integer) 100);
  if (succeeded)
    EnvName_10 = EnvName0_7;
  else
  {
    MR_String Left_17;
    MR_String Middle_18;
    MR_String Right_19;
    MR_String GenName_20;
    MR_Word GenList_21;
    MR_Word FilterList_22;
    MR_String Var_30;
    MR_String Var_31;
    MR_String Var_33;
    MR_String Var_34;

    Left_17 = mercury__string__left_2_f_0(EnvName0_7, (MR_Integer) 44);
    Middle_18 = backend_libs__c_util__hex_hash32_1_f_0(EnvName0_7);
    Right_19 = mercury__string__right_2_f_0(EnvName0_7, (MR_Integer) 44);
    Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "_", Right_19);
    Var_31 = mercury__string__f_43_43_2_f_0(Middle_18, Var_30);
    Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_31);
    Var_34 = mercury__string__f_43_43_2_f_0(Left_17, Var_33);
    GenName_20 = mercury__string__f_43_43_2_f_0((MR_String) "s_", Var_34);
    GenList_21 = mercury__string__to_char_list_1_f_0(GenName_20);
    FilterList_22 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_3[2]), GenList_21);
    EnvName_10 = mercury__string__from_char_list_1_f_0(FilterList_22);
  }
  succeeded = (strcmp(EnvName_10, EnvName0_7) == 0);
  if (succeeded)
  {
    *STATE_VARIABLE_Renaming_14 = STATE_VARIABLE_Renaming_0_13;
    *STATE_VARIABLE_EnvDefn_12 = STATE_VARIABLE_EnvDefn_0_11;
  }
  else
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_EnvDefn_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (EnvName_10));
      MR_hl_field(0, base, 1) = ((MR_Box) (Context_8));
      MR_hl_field(0, base, 2) = ((MR_Box) (MemberFields_9));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (EnvName0_7)), ((MR_Box) (EnvName_10)), STATE_VARIABLE_Renaming_0_13, STATE_VARIABLE_Renaming_14);
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Char conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__mlds_to_java_class__replace_non_alphanum_underscore_1_f_0(((MR_Char) (MR_Word) wrapper_arg_1));
  wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0(
  MR_Word STATE_VARIABLE_ClassDefn_0_23,
  MR_Word * STATE_VARIABLE_ClassDefn_24,
  MR_Word STATE_VARIABLE_Renaming_0_25,
  MR_Word * STATE_VARIABLE_Renaming_26)
{
  MR_bool succeeded;
  MR_String ClassName0_7 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_23, 0))));
  MR_Word Flags_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_23, 3))));
  MR_Word Access_19 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_10, 0))) >> 2)) & (MR_Integer) 1);

  switch (Access_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String ClassName_22;
        MR_String MangledClassName0_40;
        MR_Integer Var_47;

        MangledClassName0_40 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName0_7);
        Var_47 = mercury__string__length_1_f_0(MangledClassName0_40);
        succeeded = (Var_47 < (MR_Integer) 100);
        if (succeeded)
          ClassName_22 = ClassName0_7;
        else
        {
          MR_String Left_41;
          MR_String Middle_42;
          MR_String Right_43;
          MR_String GenName_44;
          MR_Word GenList_45;
          MR_Word FilterList_46;
          MR_String Var_54;
          MR_String Var_55;
          MR_String Var_57;
          MR_String Var_58;

          Left_41 = mercury__string__left_2_f_0(ClassName0_7, (MR_Integer) 44);
          Middle_42 = backend_libs__c_util__hex_hash32_1_f_0(ClassName0_7);
          Right_43 = mercury__string__right_2_f_0(ClassName0_7, (MR_Integer) 44);
          Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "_", Right_43);
          Var_55 = mercury__string__f_43_43_2_f_0(Middle_42, Var_54);
          Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_55);
          Var_58 = mercury__string__f_43_43_2_f_0(Left_41, Var_57);
          GenName_44 = mercury__string__f_43_43_2_f_0((MR_String) "s_", Var_58);
          GenList_45 = mercury__string__to_char_list_1_f_0(GenName_44);
          FilterList_46 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_3[1]), GenList_45);
          ClassName_22 = mercury__string__from_char_list_1_f_0(FilterList_46);
        }
        succeeded = (strcmp(ClassName_22, ClassName0_7) == 0);
        if (succeeded)
        {
          *STATE_VARIABLE_Renaming_26 = STATE_VARIABLE_Renaming_0_25;
          *STATE_VARIABLE_ClassDefn_24 = STATE_VARIABLE_ClassDefn_0_23;
        }
        else
        {
          MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_23, 1))));
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_23, 2))));
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_23, 3))));
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_23, 4))));
          MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_23, 5))));
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_23, 6))));
          MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_23, 7))));
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_23, 8))));
          MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_23, 9))));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_23, 10))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_23, 11))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_ClassDefn_24 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_22));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_30));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_33));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_34));
            MR_hl_field(0, base, 8) = ((MR_Box) (Var_35));
            MR_hl_field(0, base, 9) = ((MR_Box) (Var_36));
            MR_hl_field(0, base, 10) = ((MR_Box) (Var_37));
            MR_hl_field(0, base, 11) = ((MR_Box) (Var_38));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ClassName0_7)), ((MR_Box) (ClassName_22)), STATE_VARIABLE_Renaming_0_25, STATE_VARIABLE_Renaming_26);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_ClassDefn_24 = STATE_VARIABLE_ClassDefn_0_23;
        *STATE_VARIABLE_Renaming_26 = STATE_VARIABLE_Renaming_0_25;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_struct_defn_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_field_var_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_java_class__output_struct_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word StructDefn_10)
{
  MR_String StructName_12 = ((MR_String) ((MR_hl_field(0, StructDefn_10, 0))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, StructDefn_10, 1))));
  MR_Word MemberFields_14 = ((MR_Word) ((MR_hl_field(0, StructDefn_10, 2))));
  MR_Word MaybeCtor_15 = ((MR_Word) ((MR_hl_field(0, StructDefn_10, 3))));
  MR_Word Ctor_16;
  MR_String StructNameStr_17;
  MR_Unsigned Indent1_18;
  MR_String IndentStr_19;
  MR_Word Var_26;
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Box conv0_STATE_VARIABLE_IO_4_40;

  if ((MaybeCtor_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_class.output_struct_defn_for_java\'/6", (MR_String) "MaybeCtor = no");
      return;
    }
  else
    Ctor_16 = ((MR_Word) ((MR_hl_field(1, MaybeCtor_15, 0))));
  StructNameStr_17 = ml_backend__mlds_to_java_name__unqual_class_name_to_string_for_java_2_f_0(StructName_12, (MR_Integer) 0);
  Indent1_18 = (Indent_9 + (MR_Unsigned) 1U);
  IndentStr_19 = libs__indent__indent2_string_1_f_0(Indent_9);
  Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 1))) >> 1)) & (MR_Integer) 1);
  ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_8, Var_26, (MR_Integer) 2, Context_13, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "private static final class ");
  mercury__io__write_string_4_p_0(Stream_8, StructNameStr_17);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_19);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_4[0]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_struct_defn_for_java_6_p_0_1));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_39, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_39, 5) = ((MR_Box) (Indent1_18));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, MemberFields_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_4_40);
  mercury__io__nl_3_p_0(Stream_8);
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (StructName_12));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  ml_backend__mlds_to_java_func__output_function_defn_for_java_7_p_0(Info_7, Stream_8, Indent1_18, Var_42, Ctor_16);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_19);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_env_defn_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_field_var_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_java_class__output_env_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word EnvDefn_10)
{
  MR_String EnvName_12 = ((MR_String) ((MR_hl_field(0, EnvDefn_10, 0))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, EnvDefn_10, 1))));
  MR_Word MemberFields_14 = ((MR_Word) ((MR_hl_field(0, EnvDefn_10, 2))));
  MR_String IndentStr_15;
  MR_Unsigned Indent1_16;
  MR_String Indent1Str_17;
  MR_String EnvNameStr_18;
  MR_String BaseTypeStr_19;
  MR_Word Var_25;
  MR_Word Var_45;
  MR_Box conv0_STATE_VARIABLE_IO_5_46;

  IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_9);
  Indent1_16 = (Indent_9 + (MR_Unsigned) 1U);
  Indent1Str_17 = libs__indent__indent2_string_1_f_0(Indent1_16);
  EnvNameStr_18 = ml_backend__mlds_to_java_name__unqual_class_name_to_string_for_java_2_f_0(EnvName_12, (MR_Integer) 0);
  BaseTypeStr_19 = ml_backend__mlds_to_java_type__type_to_string_for_java_2_f_0(Info_7, (MR_Word) ((MR_Unsigned) 24U));
  Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 1))) >> 1)) & (MR_Integer) 1);
  ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_8, Var_25, (MR_Integer) 2, Context_13, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "private static class ");
  mercury__io__write_string_4_p_0(Stream_8, EnvNameStr_18);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, Indent1Str_17);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "extends ");
  mercury__io__write_string_4_p_0(Stream_8, BaseTypeStr_19);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_4[0]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_env_defn_for_java_6_p_0_1));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_45, 5) = ((MR_Box) (Indent1_16));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, MemberFields_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_5_46);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_class_defn_for_java_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_func__output_function_defn_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_class_defn_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_enum_constant_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_class_defn_for_java_6_p_0(
  MR_Word Info0_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word EnumDefn_10)
{
  MR_bool succeeded;
  MR_String ClassName_12 = ((MR_String) ((MR_hl_field(0, EnumDefn_10, 0))));
  MR_Integer ClassArity_13 = ((MR_Integer) ((MR_hl_field(0, EnumDefn_10, 1))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, 2))));
  MR_Word Inherits_15 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, 3))));
  MR_Word Implements_16 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, 4))));
  MR_Word TypeParams_17 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, 5))));
  MR_Word EnumConsts_19 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, 7))));
  MR_Word Ctors_20 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, 8))));
  MR_Word Info1_21;
  MR_String InterfaceStr_23;
  MR_Word Info_24;
  MR_String ClassNameStr_25;
  MR_String IndentStr_26;
  MR_Unsigned Indent1_27;
  MR_Word ClassAux_28;
  MR_Word Var_34;
  MR_Word Var_58;
  MR_Word Var_62;
  MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, Info0_7, 0))));
  MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Info0_7, 2))));
  MR_String Var_74 = ((MR_String) ((MR_hl_field(0, Info0_7, 3))));
  MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, Info0_7, 4))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, 1)));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, 5)));
  MR_Word Interface_22;
  MR_Word Var_107;
  MR_Box conv0_STATE_VARIABLE_IO_8_59;
  MR_Box conv1_STATE_VARIABLE_IO_11_63;

  {
    Info1_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info1_21, 0) = ((MR_Box) (Var_69));
    MR_hl_field(0, Info1_21, 1) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Info1_21, 2) = ((MR_Box) (Var_73));
    MR_hl_field(0, Info1_21, 3) = ((MR_Box) (Var_74));
    MR_hl_field(0, Info1_21, 4) = ((MR_Box) (Var_75));
    MR_hl_field(0, Info1_21, 5) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Info1_21, 6) = ((MR_Box) (TypeParams_17));
  }
  succeeded = (Implements_16 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Interface_22 = ((MR_Word) ((MR_hl_field(1, Implements_16, 0))));
    Var_107 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
    succeeded = ml_backend__mlds____Unify____mlds_interface_id_0_0(Interface_22, Var_107);
  }
  if (succeeded)
  {
    MR_Word Var_79;
    MR_Word Var_83;
    MR_String Var_84;
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Unsigned packed_word_2;

    InterfaceStr_23 = ml_backend__mlds_to_java_class__interface_to_string_for_java_1_f_0(Interface_22);
    Var_79 = ((MR_Word) ((MR_hl_field(0, Info1_21, 0))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, Info1_21, 1)));
    Var_83 = ((MR_Word) ((MR_hl_field(0, Info1_21, 2))));
    Var_84 = ((MR_String) ((MR_hl_field(0, Info1_21, 3))));
    Var_85 = ((MR_Word) ((MR_hl_field(0, Info1_21, 4))));
    Var_87 = ((MR_Unsigned) ((MR_hl_field(0, Info1_21, 5))) & (MR_Integer) 3);
    Var_88 = ((MR_Word) ((MR_hl_field(0, Info1_21, 6))));
    {
      Info_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Info_24, 0) = ((MR_Box) (Var_79));
      MR_hl_field(0, Info_24, 1) = (MR_Box) (packed_word_2);
      MR_hl_field(0, Info_24, 2) = ((MR_Box) (Var_83));
      MR_hl_field(0, Info_24, 3) = ((MR_Box) (Var_84));
      MR_hl_field(0, Info_24, 4) = ((MR_Box) (Var_85));
      MR_hl_field(0, Info_24, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) (Var_87)));
      MR_hl_field(0, Info_24, 6) = ((MR_Box) (Var_88));
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_class.output_enum_class_defn_for_java\'/6", (MR_String) "no ml_java_mercury_type_interface");
      return;
    }
  Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, Info0_7, 1))) >> 1)) & (MR_Integer) 1);
  ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_8, Var_34, (MR_Integer) 2, Context_14, Indent_9);
  ClassNameStr_25 = ml_backend__mlds_to_java_name__unqual_class_name_to_string_for_java_2_f_0(ClassName_12, ClassArity_13);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "public static class ");
  mercury__io__write_string_4_p_0(Stream_8, ClassNameStr_25);
  ml_backend__mlds_to_target_util__output_generic_tvars_4_p_0(Stream_8, TypeParams_17);
  mercury__io__nl_3_p_0(Stream_8);
  IndentStr_26 = libs__indent__indent2_string_1_f_0(Indent_9);
  Indent1_27 = (Indent_9 + (MR_Unsigned) 1U);
  ml_backend__mlds_to_java_class__output_enum_inherits_list_6_p_0(Info_24, Stream_8, Indent1_27, Inherits_15);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_26);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "implements ");
  mercury__io__write_string_4_p_0(Stream_8, InterfaceStr_23);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_26);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  {
    Var_58 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_58, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_5[1]));
    MR_hl_field(0, Var_58, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_enum_class_defn_for_java_6_p_0_1));
    MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_58, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_58, 4) = ((MR_Box) (Indent1_27));
    MR_hl_field(0, Var_58, 5) = ((MR_Box) (ClassName_12));
    MR_hl_field(0, Var_58, 6) = ((MR_Box) (ClassArity_13));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_const_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, EnumConsts_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_8_59);
  mercury__io__nl_3_p_0(Stream_8);
  ml_backend__mlds_to_java_class__output_enum_ctor_for_java_6_p_0(Stream_8, Indent1_27, ClassName_12, ClassArity_13);
  {
    ClassAux_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ClassAux_28, 0) = ((MR_Box) (ClassName_12));
    MR_hl_field(1, ClassAux_28, 1) = ((MR_Box) (ClassArity_13));
  }
  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_62, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_5[0]));
    MR_hl_field(0, Var_62, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_enum_class_defn_for_java_6_p_0_2));
    MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_62, 3) = ((MR_Box) (Info_24));
    MR_hl_field(0, Var_62, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_62, 5) = ((MR_Box) (Indent1_27));
    MR_hl_field(0, Var_62, 6) = ((MR_Box) (ClassAux_28));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, Ctors_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_11_63);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_26);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_ctor_for_java_6_p_0(
  MR_Word Stream_7,
  MR_Unsigned Indent_8,
  MR_String ClassName_9,
  MR_Integer ClassArity_10)
{
  MR_String IndentStr_12;
  MR_String Indent1Str_13;
  MR_String UnqualClassnameStr_14;
  MR_Unsigned Var_17;

  IndentStr_12 = libs__indent__indent2_string_1_f_0(Indent_8);
  Var_17 = (Indent_8 + (MR_Unsigned) 1U);
  Indent1Str_13 = libs__indent__indent2_string_1_f_0(Var_17);
  UnqualClassnameStr_14 = ml_backend__mlds_to_java_name__unqual_class_name_to_string_for_java_2_f_0(ClassName_9, ClassArity_10);
  mercury__io__write_string_4_p_0(Stream_7, IndentStr_12);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "private ");
  mercury__io__write_string_4_p_0(Stream_7, UnqualClassnameStr_14);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(int val) {\n");
  mercury__io__write_string_4_p_0(Stream_7, Indent1Str_13);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "super(val);\n");
  mercury__io__write_string_4_p_0(Stream_7, IndentStr_12);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "}\n");
}

static MR_String MR_CALL 
ml_backend__mlds_to_java_class__interface_to_string_for_java_1_f_0(
  MR_Word Interface_3)
{
  MR_bool succeeded;
  MR_String String_4;
  MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(0, Interface_3, 0))));
  MR_String ClassName_6 = ((MR_String) ((MR_hl_field(0, Interface_3, 1))));
  MR_Word SymName_7;
  MR_String ModuleNameStr_8;

  SymName_7 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_5);
  parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_7, (MR_Integer) 0, (MR_String) ".", &ModuleNameStr_8);
  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    if (MR_offset_strn_eq(0, 2, ClassName_6, (MR_String) "Me"))
      switch (MR_nth_code_unit(ClassName_6, 2)) {
        case (MR_Integer) 114:
          if (MR_offset_streq(3, ClassName_6, (MR_String) "MercuryType"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 116:
          if (MR_offset_strn_eq(3, 6, ClassName_6, (MR_String) "MethodPtr"))
            switch (MR_nth_code_unit(ClassName_6, 9)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 1;
                break;
              case (MR_Integer) 49:
                switch (MR_nth_code_unit(ClassName_6, 10)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 48:
                    if (MR_offset_streq(11, ClassName_6, (MR_String) "MethodPtr10"))
                      case_num_0 = (MR_Integer) 3;
                    break;
                  case (MR_Integer) 49:
                    if (MR_offset_streq(11, ClassName_6, (MR_String) "MethodPtr11"))
                      case_num_0 = (MR_Integer) 4;
                    break;
                  case (MR_Integer) 50:
                    if (MR_offset_streq(11, ClassName_6, (MR_String) "MethodPtr12"))
                      case_num_0 = (MR_Integer) 5;
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_streq(11, ClassName_6, (MR_String) "MethodPtr13"))
                      case_num_0 = (MR_Integer) 6;
                    break;
                  case (MR_Integer) 52:
                    if (MR_offset_streq(11, ClassName_6, (MR_String) "MethodPtr14"))
                      case_num_0 = (MR_Integer) 7;
                    break;
                  case (MR_Integer) 53:
                    if (MR_offset_streq(11, ClassName_6, (MR_String) "MethodPtr15"))
                      case_num_0 = (MR_Integer) 8;
                    break;
                }
                break;
              case (MR_Integer) 50:
                if (MR_offset_streq(10, ClassName_6, (MR_String) "MethodPtr2"))
                  case_num_0 = (MR_Integer) 9;
                break;
              case (MR_Integer) 51:
                if (MR_offset_streq(10, ClassName_6, (MR_String) "MethodPtr3"))
                  case_num_0 = (MR_Integer) 10;
                break;
              case (MR_Integer) 52:
                if (MR_offset_streq(10, ClassName_6, (MR_String) "MethodPtr4"))
                  case_num_0 = (MR_Integer) 11;
                break;
              case (MR_Integer) 53:
                if (MR_offset_streq(10, ClassName_6, (MR_String) "MethodPtr5"))
                  case_num_0 = (MR_Integer) 12;
                break;
              case (MR_Integer) 54:
                if (MR_offset_streq(10, ClassName_6, (MR_String) "MethodPtr6"))
                  case_num_0 = (MR_Integer) 13;
                break;
              case (MR_Integer) 55:
                if (MR_offset_streq(10, ClassName_6, (MR_String) "MethodPtr7"))
                  case_num_0 = (MR_Integer) 14;
                break;
              case (MR_Integer) 56:
                if (MR_offset_streq(10, ClassName_6, (MR_String) "MethodPtr8"))
                  case_num_0 = (MR_Integer) 15;
                break;
              case (MR_Integer) 57:
                if (MR_offset_streq(10, ClassName_6, (MR_String) "MethodPtr9"))
                  case_num_0 = (MR_Integer) 16;
                break;
              case (MR_Integer) 78:
                if (MR_offset_streq(10, ClassName_6, (MR_String) "MethodPtrN"))
                  case_num_0 = (MR_Integer) 17;
                break;
            }
          break;
      }
    if ((case_num_0 < (MR_Integer) 0))
      succeeded = MR_FALSE;
    else
    {
      // we found a match; look up the results
      ;
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_String Var_27;

    Var_27 = mercury__string__f_43_43_2_f_0((MR_String) ".", ClassName_6);
    String_4 = mercury__string__f_43_43_2_f_0(ModuleNameStr_8, Var_27);
  }
  else
  {
    MR_String Var_28;
    MR_String Var_35;
    MR_String Var_37;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_1[0]), (MR_Integer) 0, &Var_28);
    Var_35 = mercury__string__f_43_43_2_f_0(ClassName_6, Var_28);
    Var_37 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_35);
    String_4 = mercury__string__f_43_43_2_f_0(ModuleNameStr_8, Var_37);
  }
  return String_4;
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_inherits_list_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word Inherits_10)
{
  if (!((Inherits_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word BaseClassId_12 = (MR_Word) (MR_body((MR_Word) (Inherits_10), (MR_Integer) 1));
    MR_Word BaseType_13 = (MR_Word) (MR_mkword(1, (MR_Word) (BaseClassId_12)));
    MR_String IndentStr_14;
    MR_String BaseTypeStr_15;

    IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_9);
    BaseTypeStr_15 = ml_backend__mlds_to_java_type__type_to_string_for_java_2_f_0(Info_7, BaseType_13);
    mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "extends ");
    mercury__io__write_string_4_p_0(Stream_8, BaseTypeStr_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_func__output_function_defn_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_func__output_function_defn_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_field_var_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0(
  MR_Word Info0_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word ClassDefn_10)
{
  MR_bool succeeded;
  MR_String ClassName_12 = ((MR_String) ((MR_hl_field(0, ClassDefn_10, 0))));
  MR_Integer ClassArity_13 = ((MR_Integer) ((MR_hl_field(0, ClassDefn_10, 1))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, 2))));
  MR_Word Flags_15 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, 3))));
  MR_Word Inherits_17 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, 5))));
  MR_Word Implements_18 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, 6))));
  MR_Word TypeParams_19 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, 7))));
  MR_Word MemberFields_20 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, 8))));
  MR_Word MemberClasses_21 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, 9))));
  MR_Word MemberMethods_22 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, 10))));
  MR_Word Ctors_23 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, 11))));
  MR_Word Info1_24;
  MR_Word Info_25;
  MR_String ClassNameStr_26;
  MR_Word OutputGenerics_27;
  MR_Unsigned Indent1_28;
  MR_String IndentStr_29;
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, Info0_7, 1))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_61;
  MR_Word Var_63;
  MR_Word Var_78;
  MR_Word Var_82;
  MR_String Var_83;
  MR_Word Var_84;
  MR_Unsigned packed_word_0;
  MR_Unsigned packed_word_1;
  MR_Word Var_36;
  MR_Box conv0_STATE_VARIABLE_IO_9_54;
  MR_Box conv1_STATE_VARIABLE_IO_10_56;
  MR_Box conv2_STATE_VARIABLE_IO_11_58;
  MR_Box conv3_STATE_VARIABLE_IO_13_62;

  ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_8, Var_32, (MR_Integer) 2, Context_14, Indent_9);
  ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_5_p_0(Stream_8, Flags_15);
  Var_78 = ((MR_Word) ((MR_hl_field(0, Info0_7, 0))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, 1)));
  Var_82 = ((MR_Word) ((MR_hl_field(0, Info0_7, 2))));
  Var_83 = ((MR_String) ((MR_hl_field(0, Info0_7, 3))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, Info0_7, 4))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, 5)));
  {
    Info1_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info1_24, 0) = ((MR_Box) (Var_78));
    MR_hl_field(0, Info1_24, 1) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Info1_24, 2) = ((MR_Box) (Var_82));
    MR_hl_field(0, Info1_24, 3) = ((MR_Box) (Var_83));
    MR_hl_field(0, Info1_24, 4) = ((MR_Box) (Var_84));
    MR_hl_field(0, Info1_24, 5) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Info1_24, 6) = ((MR_Box) (TypeParams_19));
  }
  Var_36 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
  succeeded = mercury__list__member_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0), ((MR_Box) (Var_36)), Implements_18);
  if (succeeded)
  {
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, Info1_24, 0))));
    MR_Word Var_92 = ((MR_Word) ((MR_hl_field(0, Info1_24, 2))));
    MR_String Var_93 = ((MR_String) ((MR_hl_field(0, Info1_24, 3))));
    MR_Word Var_94 = ((MR_Word) ((MR_hl_field(0, Info1_24, 4))));
    MR_Word Var_96 = ((MR_Unsigned) ((MR_hl_field(0, Info1_24, 5))) & (MR_Integer) 3);
    MR_Word Var_97 = ((MR_Word) ((MR_hl_field(0, Info1_24, 6))));
    MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, Info1_24, 1)));

    {
      Info_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Info_25, 0) = ((MR_Box) (Var_88));
      MR_hl_field(0, Info_25, 1) = (MR_Box) (packed_word_2);
      MR_hl_field(0, Info_25, 2) = ((MR_Box) (Var_92));
      MR_hl_field(0, Info_25, 3) = ((MR_Box) (Var_93));
      MR_hl_field(0, Info_25, 4) = ((MR_Box) (Var_94));
      MR_hl_field(0, Info_25, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) (Var_96)));
      MR_hl_field(0, Info_25, 6) = ((MR_Box) (Var_97));
    }
  }
  else
    Info_25 = Info1_24;
  ClassNameStr_26 = ml_backend__mlds_to_java_name__unqual_class_name_to_string_for_java_2_f_0(ClassName_12, ClassArity_13);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "class ");
  mercury__io__write_string_4_p_0(Stream_8, ClassNameStr_26);
  OutputGenerics_27 = ((((MR_Unsigned) ((MR_hl_field(0, Info_25, 5))) >> 2)) & (MR_Integer) 1);
  switch (OutputGenerics_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 0:
      ml_backend__mlds_to_target_util__output_generic_tvars_4_p_0(Stream_8, TypeParams_19);
      break;
  }
  mercury__io__nl_3_p_0(Stream_8);
  Indent1_28 = (Indent_9 + (MR_Unsigned) 1U);
  ml_backend__mlds_to_java_class__output_inherits_list_6_p_0(Info_25, Stream_8, Indent1_28, Inherits_17);
  ml_backend__mlds_to_java_class__output_implements_list_5_p_0(Stream_8, Indent1_28, Implements_18);
  IndentStr_29 = libs__indent__indent2_string_1_f_0(Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_29);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_4[0]));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_1));
    MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_53, 3) = ((MR_Box) (Info_25));
    MR_hl_field(0, Var_53, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_53, 5) = ((MR_Box) (Indent1_28));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, MemberFields_20, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9_54);
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_4[1]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_2));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (Info_25));
    MR_hl_field(0, Var_55, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_55, 5) = ((MR_Box) (Indent1_28));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, MemberClasses_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_10_56);
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_5[0]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_3));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (Info_25));
    MR_hl_field(0, Var_57, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_57, 5) = ((MR_Box) (Indent1_28));
    MR_hl_field(0, Var_57, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, MemberMethods_22, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_11_58);
  mercury__io__nl_3_p_0(Stream_8);
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (ClassName_12));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (ClassArity_13));
  }
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_5[0]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_4));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (Info_25));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_61, 5) = ((MR_Box) (Indent1_28));
    MR_hl_field(0, Var_61, 6) = ((MR_Box) (Var_63));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, Ctors_23, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_13_62);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_29);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word Flags_8)
{
  MR_bool succeeded;
  MR_Word Access_10 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_8, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Overrability_11 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_8, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Constness_12 = ((MR_Unsigned) ((MR_hl_field(0, Flags_8, 0))) & (MR_Integer) 1);

  switch (Access_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "private ");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "public ");
      break;
  }
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "static ");
  succeeded = (Overrability_11 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (Constness_12 == (MR_Integer) 1);
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "final ");
}

static MR_Box MR_CALL 
ml_backend__mlds_to_java_class__output_implements_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_String_4;

  conv0_String_4 = ml_backend__mlds_to_java_class__interface_to_string_for_java_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_String_4));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_implements_list_5_p_0(
  MR_Word Stream_6,
  MR_Unsigned Indent_7,
  MR_Word InterfaceList_8)
{
  if (!((InterfaceList_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String IndentStr_12;
    MR_Word InterfaceStrs_13;
    MR_String InterfacesStr_14;

    IndentStr_12 = libs__indent__indent2_string_1_f_0(Indent_7);
    InterfaceStrs_13 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_3[0]), InterfaceList_8);
    InterfacesStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", InterfaceStrs_13);
    mercury__io__write_string_4_p_0(Stream_6, IndentStr_12);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "implements ");
    mercury__io__write_string_4_p_0(Stream_6, InterfacesStr_14);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_inherits_list_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word Inherits_10)
{
  if (!((Inherits_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word BaseClassId_12 = (MR_Word) (MR_body((MR_Word) (Inherits_10), (MR_Integer) 1));
    MR_String IndentStr_13;
    MR_Word BaseType_14;
    MR_String BaseTypeStr_15;

    IndentStr_13 = libs__indent__indent2_string_1_f_0(Indent_9);
    BaseType_14 = (MR_Word) (MR_mkword(1, (MR_Word) (BaseClassId_12)));
    BaseTypeStr_15 = ml_backend__mlds_to_java_type__type_to_string_for_java_2_f_0(Info_7, BaseType_14);
    mercury__io__write_string_4_p_0(Stream_8, IndentStr_13);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "extends ");
    mercury__io__write_string_4_p_0(Stream_8, BaseTypeStr_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  }
}

void mercury__ml_backend__mlds_to_java_class__init(void)
{
}

void mercury__ml_backend__mlds_to_java_class__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_java_class__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_java_class__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_java_class.
