/*
** Automatically generated from `mlds_to_java_class.m'
** by the Mercury compiler,
** version rotd-2023-06-16
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
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
#include "parse_tree.java_names.mih"
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
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static MR_Char MR_CALL 
ml_backend__mlds_to_java_class__replace_non_alphanum_underscore_1_f_0(
  MR_Char Char_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_field_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word FieldVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constant_for_java_7_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word EnumConstDefn_12);

static MR_Box MR_CALL 
ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
  MR_Integer Indent_8,
  MR_String ClassName_9,
  MR_Integer ClassArity_10);

static MR_String MR_CALL 
ml_backend__mlds_to_java_class__interface_to_string_for_java_1_f_0(
  MR_Word Interface_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_inherits_list_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
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
  MR_Integer Indent_7,
  MR_Word InterfaceList_8);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_inherits_list_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Inherits_10);

static MR_String MR_CALL 
ml_backend__mlds_to_java_class__class_kind_to_string_for_java_1_f_0(
  MR_Word Kind_3);


static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_1[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_2[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_3[2][3];

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

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_3[2][3] = {
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
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_4[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
  MR_Integer Indent_9,
  MR_Word FieldVarDefn_10)
{
  MR_bool succeeded;
  MR_Word FieldVarName_12 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 0))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 1))));
  MR_Word Flags_14 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 2))));
  MR_Word Type_15 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 3))));
  MR_Word Initializer_16 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 4))));
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  MR_Integer Var_26;
  MR_Word PerInstance_39;
  MR_Word Constness_40;
  MR_String TypeStr_47;
  MR_String FieldVarNameStr_48;

  ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_8, Var_20, (MR_Integer) 2, Context_13, Indent_9);
  PerInstance_39 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Constness_40 = ((MR_Unsigned) ((MR_hl_field(0, Flags_14, (MR_Integer) 0))) & (MR_Integer) 1);
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
  Var_26 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_java_data__output_initializer_for_java_9_p_0(Info_7, Stream_8, (MR_Word) ((MR_Unsigned) 0U), Var_26, Type_15, Initializer_16, (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constant_for_java_7_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word EnumConstDefn_12)
{
  MR_Word FieldVarName_14 = ((MR_Word) ((MR_hl_field(0, EnumConstDefn_12, (MR_Integer) 0))));
  MR_Word EnumConst_16 = ((MR_Word) ((MR_hl_field(0, EnumConstDefn_12, (MR_Integer) 2))));
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
    MR_Unsigned EnumUInt_20 = ((MR_Unsigned) ((MR_hl_field(0, EnumConst_16, (MR_Integer) 0))));
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

    if (((((MR_nth_code_unit(HeadVar__1_1, 0)) == (MR_Integer) 77)) && (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 101))))
      switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
        case (MR_Integer) 114:
          if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "MercuryType"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 116:
          if (((((((((((((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 104)) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 80)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 114))))
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
  MR_Word STATE_VARIABLE_ClassDefn_0_24,
  MR_Word * STATE_VARIABLE_ClassDefn_25,
  MR_Word STATE_VARIABLE_Renaming_0_26,
  MR_Word * STATE_VARIABLE_Renaming_27)
{
  MR_bool succeeded;
  MR_String ClassName0_7 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 0))));
  MR_Word Flags_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 3))));
  MR_Word Access_20 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_10, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

  switch (Access_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String ClassName_23;
        MR_String MangledClassName0_42;
        MR_Integer Var_49;

        MangledClassName0_42 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName0_7);
        Var_49 = mercury__string__length_1_f_0(MangledClassName0_42);
        succeeded = (Var_49 < (MR_Integer) 100);
        if (succeeded)
          ClassName_23 = ClassName0_7;
        else
        {
          MR_String Left_43;
          MR_String Middle_44;
          MR_String Right_45;
          MR_String GenName_46;
          MR_Word GenList_47;
          MR_Word FilterList_48;
          MR_String Var_56;
          MR_String Var_57;
          MR_String Var_59;
          MR_String Var_60;

          Left_43 = mercury__string__left_2_f_0(ClassName0_7, (MR_Integer) 44);
          Middle_44 = backend_libs__c_util__hex_hash32_1_f_0(ClassName0_7);
          Right_45 = mercury__string__right_2_f_0(ClassName0_7, (MR_Integer) 44);
          Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "_", Right_45);
          Var_57 = mercury__string__f_43_43_2_f_0(Middle_44, Var_56);
          Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_57);
          Var_60 = mercury__string__f_43_43_2_f_0(Left_43, Var_59);
          GenName_46 = mercury__string__f_43_43_2_f_0((MR_String) "s_", Var_60);
          GenList_47 = mercury__string__to_char_list_1_f_0(GenName_46);
          FilterList_48 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_3[1]), GenList_47);
          ClassName_23 = mercury__string__from_char_list_1_f_0(FilterList_48);
        }
        succeeded = (strcmp(ClassName_23, ClassName0_7) == 0);
        if (succeeded)
        {
          *STATE_VARIABLE_Renaming_27 = STATE_VARIABLE_Renaming_0_26;
          *STATE_VARIABLE_ClassDefn_25 = STATE_VARIABLE_ClassDefn_0_24;
        }
        else
        {
          MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 1))));
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 2))));
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 3))));
          MR_Word Var_32 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 4))) & (MR_Integer) 3);
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 5))));
          MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 6))));
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 7))));
          MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 8))));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 9))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 10))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 11))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 12))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_ClassDefn_25 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_23));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_29));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_30));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_31));
            MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) (Var_32));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_33));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_34));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_35));
            MR_hl_field(0, base, 8) = ((MR_Box) (Var_36));
            MR_hl_field(0, base, 9) = ((MR_Box) (Var_37));
            MR_hl_field(0, base, 10) = ((MR_Box) (Var_38));
            MR_hl_field(0, base, 11) = ((MR_Box) (Var_39));
            MR_hl_field(0, base, 12) = ((MR_Box) (Var_40));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ClassName0_7)), ((MR_Box) (ClassName_23)), STATE_VARIABLE_Renaming_0_26, STATE_VARIABLE_Renaming_27);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_ClassDefn_25 = STATE_VARIABLE_ClassDefn_0_24;
        *STATE_VARIABLE_Renaming_27 = STATE_VARIABLE_Renaming_0_26;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_class_defn_for_java_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_func__output_function_defn_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_class_defn_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_enum_constant_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_class_defn_for_java_6_p_0(
  MR_Word Info0_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word EnumDefn_10)
{
  MR_bool succeeded;
  MR_String ClassName_12 = ((MR_String) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 0))));
  MR_Integer ClassArity_13 = ((MR_Integer) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 1))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 2))));
  MR_Word Inherits_15 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 3))));
  MR_Word Implements_16 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 4))));
  MR_Word TypeParams_17 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 5))));
  MR_Word EnumConsts_19 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 7))));
  MR_Word Ctors_20 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 8))));
  MR_Word Info1_21;
  MR_String InterfaceStr_23;
  MR_Word Info_24;
  MR_String ClassNameStr_25;
  MR_String IndentStr_26;
  MR_Integer Indent1_27;
  MR_Word ClassAux_28;
  MR_Word Var_34;
  MR_Word Var_58;
  MR_Word Var_62;
  MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 0))));
  MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 2))));
  MR_String Var_74 = ((MR_String) ((MR_hl_field(0, Info0_7, (MR_Integer) 3))));
  MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 4))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 1)));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 5)));
  MR_Word Interface_22;
  MR_Word Var_107;
  MR_Box conv0_STATE_VARIABLE_IO_59_59;
  MR_Box conv1_STATE_VARIABLE_IO_63_63;

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
    Interface_22 = ((MR_Word) ((MR_hl_field(1, Implements_16, (MR_Integer) 0))));
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
    Var_79 = ((MR_Word) ((MR_hl_field(0, Info1_21, (MR_Integer) 0))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, Info1_21, (MR_Integer) 1)));
    Var_83 = ((MR_Word) ((MR_hl_field(0, Info1_21, (MR_Integer) 2))));
    Var_84 = ((MR_String) ((MR_hl_field(0, Info1_21, (MR_Integer) 3))));
    Var_85 = ((MR_Word) ((MR_hl_field(0, Info1_21, (MR_Integer) 4))));
    Var_87 = ((MR_Unsigned) ((MR_hl_field(0, Info1_21, (MR_Integer) 5))) & (MR_Integer) 3);
    Var_88 = ((MR_Word) ((MR_hl_field(0, Info1_21, (MR_Integer) 6))));
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
  Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_8, Var_34, (MR_Integer) 2, Context_14, Indent_9);
  ClassNameStr_25 = ml_backend__mlds_to_java_name__unqual_class_name_to_string_for_java_2_f_0(ClassName_12, ClassArity_13);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "public static class ");
  mercury__io__write_string_4_p_0(Stream_8, ClassNameStr_25);
  ml_backend__mlds_to_target_util__output_generic_tvars_4_p_0(Stream_8, TypeParams_17);
  mercury__io__nl_3_p_0(Stream_8);
  IndentStr_26 = libs__indent__indent2_string_1_f_0(Indent_9);
  Indent1_27 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
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
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_const_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, EnumConsts_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_59_59);
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
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, Ctors_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_63_63);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_26);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_ctor_for_java_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_String ClassName_9,
  MR_Integer ClassArity_10)
{
  MR_String IndentStr_12;
  MR_String Indent1Str_13;
  MR_String UnqualClassnameStr_14;
  MR_Integer Var_17;

  IndentStr_12 = libs__indent__indent2_string_1_f_0(Indent_8);
  Var_17 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
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
  MR_Word QualClassName_5 = ((MR_Word) ((MR_hl_field(0, Interface_3, (MR_Integer) 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, Interface_3, (MR_Integer) 1))));
  MR_Word ModuleQualifier_8 = ((MR_Word) ((MR_hl_field(0, QualClassName_5, (MR_Integer) 0))));
  MR_Word QualKind_9 = ((MR_Unsigned) ((MR_hl_field(0, QualClassName_5, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_String ClassName_10 = ((MR_String) ((MR_hl_field(0, QualClassName_5, (MR_Integer) 2))));
  MR_Word SymName_11;
  MR_String ModuleNameStr_12;
  MR_Word Var_13;

  SymName_11 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleQualifier_8);
  Var_13 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_9);
  parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_11, Var_13, (MR_String) ".", &ModuleNameStr_12);
  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    if (((((MR_nth_code_unit(ClassName_10, 0)) == (MR_Integer) 77)) && (((MR_nth_code_unit(ClassName_10, 1)) == (MR_Integer) 101))))
      switch (MR_nth_code_unit(ClassName_10, 2)) {
        case (MR_Integer) 114:
          if (MR_offset_streq(3, ClassName_10, (MR_String) "MercuryType"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 116:
          if (((((((((((((MR_nth_code_unit(ClassName_10, 3)) == (MR_Integer) 104)) && (((MR_nth_code_unit(ClassName_10, 4)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(ClassName_10, 5)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(ClassName_10, 6)) == (MR_Integer) 80)))) && (((MR_nth_code_unit(ClassName_10, 7)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(ClassName_10, 8)) == (MR_Integer) 114))))
            switch (MR_nth_code_unit(ClassName_10, 9)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 1;
                break;
              case (MR_Integer) 49:
                switch (MR_nth_code_unit(ClassName_10, 10)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 48:
                    if (MR_offset_streq(11, ClassName_10, (MR_String) "MethodPtr10"))
                      case_num_0 = (MR_Integer) 3;
                    break;
                  case (MR_Integer) 49:
                    if (MR_offset_streq(11, ClassName_10, (MR_String) "MethodPtr11"))
                      case_num_0 = (MR_Integer) 4;
                    break;
                  case (MR_Integer) 50:
                    if (MR_offset_streq(11, ClassName_10, (MR_String) "MethodPtr12"))
                      case_num_0 = (MR_Integer) 5;
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_streq(11, ClassName_10, (MR_String) "MethodPtr13"))
                      case_num_0 = (MR_Integer) 6;
                    break;
                  case (MR_Integer) 52:
                    if (MR_offset_streq(11, ClassName_10, (MR_String) "MethodPtr14"))
                      case_num_0 = (MR_Integer) 7;
                    break;
                  case (MR_Integer) 53:
                    if (MR_offset_streq(11, ClassName_10, (MR_String) "MethodPtr15"))
                      case_num_0 = (MR_Integer) 8;
                    break;
                }
                break;
              case (MR_Integer) 50:
                if (MR_offset_streq(10, ClassName_10, (MR_String) "MethodPtr2"))
                  case_num_0 = (MR_Integer) 9;
                break;
              case (MR_Integer) 51:
                if (MR_offset_streq(10, ClassName_10, (MR_String) "MethodPtr3"))
                  case_num_0 = (MR_Integer) 10;
                break;
              case (MR_Integer) 52:
                if (MR_offset_streq(10, ClassName_10, (MR_String) "MethodPtr4"))
                  case_num_0 = (MR_Integer) 11;
                break;
              case (MR_Integer) 53:
                if (MR_offset_streq(10, ClassName_10, (MR_String) "MethodPtr5"))
                  case_num_0 = (MR_Integer) 12;
                break;
              case (MR_Integer) 54:
                if (MR_offset_streq(10, ClassName_10, (MR_String) "MethodPtr6"))
                  case_num_0 = (MR_Integer) 13;
                break;
              case (MR_Integer) 55:
                if (MR_offset_streq(10, ClassName_10, (MR_String) "MethodPtr7"))
                  case_num_0 = (MR_Integer) 14;
                break;
              case (MR_Integer) 56:
                if (MR_offset_streq(10, ClassName_10, (MR_String) "MethodPtr8"))
                  case_num_0 = (MR_Integer) 15;
                break;
              case (MR_Integer) 57:
                if (MR_offset_streq(10, ClassName_10, (MR_String) "MethodPtr9"))
                  case_num_0 = (MR_Integer) 16;
                break;
              case (MR_Integer) 78:
                if (MR_offset_streq(10, ClassName_10, (MR_String) "MethodPtrN"))
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
    MR_String Var_30;

    Var_30 = mercury__string__f_43_43_2_f_0((MR_String) ".", ClassName_10);
    String_4 = mercury__string__f_43_43_2_f_0(ModuleNameStr_12, Var_30);
  }
  else
  {
    MR_String Var_31;
    MR_String Var_38;
    MR_String Var_40;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_1[0]), Arity_6, &Var_31);
    Var_38 = mercury__string__f_43_43_2_f_0(ClassName_10, Var_31);
    Var_40 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_38);
    String_4 = mercury__string__f_43_43_2_f_0(ModuleNameStr_12, Var_40);
  }
  return String_4;
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_inherits_list_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
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

  ml_backend__mlds_to_java_func__output_function_defn_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_func__output_function_defn_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_field_var_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0(
  MR_Word Info0_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ClassDefn_10)
{
  MR_bool succeeded;
  MR_String ClassName_12 = ((MR_String) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 0))));
  MR_Integer ClassArity_13 = ((MR_Integer) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 1))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 2))));
  MR_Word Flags_15 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 3))));
  MR_Word Kind_16 = ((MR_Unsigned) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 4))) & (MR_Integer) 3);
  MR_Word Inherits_18 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 6))));
  MR_Word Implements_19 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 7))));
  MR_Word TypeParams_20 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 8))));
  MR_Word MemberFields_21 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 9))));
  MR_Word MemberClasses_22 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 10))));
  MR_Word MemberMethods_23 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 11))));
  MR_Word Ctors_24 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 12))));
  MR_Word Info1_25;
  MR_Word Info_26;
  MR_String KindStr_27;
  MR_String ClassNameStr_28;
  MR_Word OutputGenerics_29;
  MR_Integer Indent1_30;
  MR_String IndentStr_31;
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_67;
  MR_Word Var_69;
  MR_Word Var_84;
  MR_Word Var_88;
  MR_String Var_89;
  MR_Word Var_90;
  MR_Unsigned packed_word_3;
  MR_Unsigned packed_word_4;
  MR_Word Var_38;
  MR_Box conv3_STATE_VARIABLE_IO_68_68;

  ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_8, Var_34, (MR_Integer) 2, Context_14, Indent_9);
  ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_5_p_0(Stream_8, Flags_15);
  Var_84 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 0))));
  packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 1)));
  Var_88 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 2))));
  Var_89 = ((MR_String) ((MR_hl_field(0, Info0_7, (MR_Integer) 3))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 4))));
  packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 5)));
  {
    Info1_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info1_25, 0) = ((MR_Box) (Var_84));
    MR_hl_field(0, Info1_25, 1) = (MR_Box) (packed_word_3);
    MR_hl_field(0, Info1_25, 2) = ((MR_Box) (Var_88));
    MR_hl_field(0, Info1_25, 3) = ((MR_Box) (Var_89));
    MR_hl_field(0, Info1_25, 4) = ((MR_Box) (Var_90));
    MR_hl_field(0, Info1_25, 5) = (MR_Box) (packed_word_4);
    MR_hl_field(0, Info1_25, 6) = ((MR_Box) (TypeParams_20));
  }
  Var_38 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
  succeeded = mercury__list__member_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0), ((MR_Box) (Var_38)), Implements_19);
  if (succeeded)
  {
    MR_Word Var_94 = ((MR_Word) ((MR_hl_field(0, Info1_25, (MR_Integer) 0))));
    MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, Info1_25, (MR_Integer) 2))));
    MR_String Var_99 = ((MR_String) ((MR_hl_field(0, Info1_25, (MR_Integer) 3))));
    MR_Word Var_100 = ((MR_Word) ((MR_hl_field(0, Info1_25, (MR_Integer) 4))));
    MR_Word Var_102 = ((MR_Unsigned) ((MR_hl_field(0, Info1_25, (MR_Integer) 5))) & (MR_Integer) 3);
    MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, Info1_25, (MR_Integer) 6))));
    MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(0, Info1_25, (MR_Integer) 1)));

    {
      Info_26 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Info_26, 0) = ((MR_Box) (Var_94));
      MR_hl_field(0, Info_26, 1) = (MR_Box) (packed_word_5);
      MR_hl_field(0, Info_26, 2) = ((MR_Box) (Var_98));
      MR_hl_field(0, Info_26, 3) = ((MR_Box) (Var_99));
      MR_hl_field(0, Info_26, 4) = ((MR_Box) (Var_100));
      MR_hl_field(0, Info_26, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) (Var_102)));
      MR_hl_field(0, Info_26, 6) = ((MR_Box) (Var_103));
    }
  }
  else
    Info_26 = Info1_25;
  KindStr_27 = ml_backend__mlds_to_java_class__class_kind_to_string_for_java_1_f_0(Kind_16);
  ClassNameStr_28 = ml_backend__mlds_to_java_name__unqual_class_name_to_string_for_java_2_f_0(ClassName_12, ClassArity_13);
  mercury__io__write_string_4_p_0(Stream_8, KindStr_27);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_8, ClassNameStr_28);
  OutputGenerics_29 = ((((MR_Unsigned) ((MR_hl_field(0, Info_26, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
  switch (OutputGenerics_29) {
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
  Indent1_30 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_java_class__output_inherits_list_6_p_0(Info_26, Stream_8, Indent1_30, Inherits_18);
  ml_backend__mlds_to_java_class__output_implements_list_5_p_0(Stream_8, Indent1_30, Implements_19);
  IndentStr_31 = libs__indent__indent2_string_1_f_0(Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_31);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  switch (Kind_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word Var_57;
        MR_Word Var_59;
        MR_Word Var_61;
        MR_Box conv0_STATE_VARIABLE_IO_58_58;
        MR_Box conv1_STATE_VARIABLE_IO_60_60;
        MR_Box conv2_STATE_VARIABLE_IO_62_62;

        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_57, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_4[0]));
          MR_hl_field(0, Var_57, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_1));
          MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_57, 3) = ((MR_Box) (Info_26));
          MR_hl_field(0, Var_57, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_57, 5) = ((MR_Box) (Indent1_30));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, MemberFields_21, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_58_58);
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_59, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_4[1]));
          MR_hl_field(0, Var_59, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_2));
          MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_59, 3) = ((MR_Box) (Info_26));
          MR_hl_field(0, Var_59, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_59, 5) = ((MR_Box) (Indent1_30));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, MemberClasses_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_60_60);
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_61, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_5[0]));
          MR_hl_field(0, Var_61, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_3));
          MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_61, 3) = ((MR_Box) (Info_26));
          MR_hl_field(0, Var_61, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_61, 5) = ((MR_Box) (Indent1_30));
          MR_hl_field(0, Var_61, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, MemberMethods_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_62_62);
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_class.output_class_defn_for_java\'/6", (MR_String) "structs not supported in Java");
        return;
      }
      break;
  }
  mercury__io__nl_3_p_0(Stream_8);
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (ClassName_12));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (ClassArity_13));
  }
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_5[0]));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_4));
    MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_67, 3) = ((MR_Box) (Info_26));
    MR_hl_field(0, Var_67, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_67, 5) = ((MR_Box) (Indent1_30));
    MR_hl_field(0, Var_67, 6) = ((MR_Box) (Var_69));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_67, Ctors_24, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_68_68);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_31);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word Flags_8)
{
  MR_bool succeeded;
  MR_Word Access_10 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_8, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Overrability_11 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_8, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Constness_12 = ((MR_Unsigned) ((MR_hl_field(0, Flags_8, (MR_Integer) 0))) & (MR_Integer) 1);

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
  MR_Integer Indent_7,
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
  MR_Integer Indent_9,
  MR_Word Inherits_10)
{
  switch (MR_tag((MR_Word) Inherits_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inherits_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String IndentStr_26;
            MR_String BaseTypeStr_27;

            IndentStr_26 = libs__indent__indent2_string_1_f_0(Indent_9);
            BaseTypeStr_27 = ml_backend__mlds_to_java_type__type_to_string_for_java_2_f_0(Info_7, (MR_Word) ((MR_Unsigned) 24U));
            mercury__io__write_string_4_p_0(Stream_8, IndentStr_26);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "extends ");
            mercury__io__write_string_4_p_0(Stream_8, BaseTypeStr_27);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
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
      break;
  }
}

static MR_String MR_CALL 
ml_backend__mlds_to_java_class__class_kind_to_string_for_java_1_f_0(
  MR_Word Kind_3)
{
  MR_String KindStr_4;

  switch (Kind_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      KindStr_4 = (MR_String) "class";
      break;
    case (MR_Integer) 1:
      KindStr_4 = (MR_String) "interface";
      break;
  }
  return KindStr_4;
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
