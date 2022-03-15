/*
** Automatically generated from `mlds_to_java_class.m'
** by the Mercury compiler,
** version rotd-2022-03-15
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
#include "parse_tree.parse_tree_out_info.mih"
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
ml_backend__mlds_to_java_class__output_enum_constant_for_java_8_p_0(
  MR_Word _Info_9,
  MR_Integer Indent_10,
  MR_String ClassName_11,
  MR_Integer ClassArity_12,
  MR_Word FieldVarDefn_13,
  MR_Word Stream_14);

static void MR_CALL 
ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_8_p_0(
  MR_Integer Indent_10,
  MR_String ClassName_11,
  MR_Integer ClassArity_12,
  MR_Word FieldVarDefn_13,
  MR_Word Stream_14);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_interface_4_p_0(
  MR_Word Interface_5,
  MR_Word Stream_6);

static MR_Box MR_CALL 
ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constants_for_java_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constants_for_java_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_String ClassName_12,
  MR_Integer ClassArity_13,
  MR_Word EnumConsts_14);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_ctor_for_java_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_String ClassName_9,
  MR_Integer ClassArity_10);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_implements_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_kind_for_java_4_p_0(
  MR_Word Stream_5,
  MR_Word Kind_6);


static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_1[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_2[1][7];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_3[3][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_4[1][11];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_5[2][9];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_6[1][10];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_7[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_8[1][5];




static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_1[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_2[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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
    ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_7[0])),
    ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_8[0])),
    ((MR_Box) (ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_4[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_5[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_7[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_8[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



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
  MR_Word FieldVarName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 0))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 1))));
  MR_Word Flags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 2))));
  MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 3))));
  MR_Word Initializer_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 4))));
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  MR_Integer Var_26;
  MR_Word PerInstance_44;
  MR_Word Constness_45;

  ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_8, Var_20, (MR_Integer) 2, Context_13, Indent_9);
  PerInstance_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Constness_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))) & (MR_Integer) 1);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "public ");
  switch (PerInstance_44) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static ");
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
  succeeded = (Constness_45 == (MR_Integer) 1);
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "final ");
  ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_7, Type_15, Stream_8);
  mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 32);
  ml_backend__mlds_to_java_name__output_field_var_name_for_java_4_p_0(Stream_8, FieldVarName_12);
  Var_26 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_java_data__output_initializer_for_java_9_p_0(Info_7, Stream_8, (MR_Word) ((MR_Unsigned) 0U), Var_26, Type_15, Initializer_16, (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constant_for_java_8_p_0(
  MR_Word _Info_9,
  MR_Integer Indent_10,
  MR_String ClassName_11,
  MR_Integer ClassArity_12,
  MR_Word FieldVarDefn_13,
  MR_Word Stream_14)
{
  ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_8_p_0(Indent_10, ClassName_11, ClassArity_12, FieldVarDefn_13, Stream_14);
}

static void MR_CALL 
ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_8_p_0(
  MR_Integer Indent_10,
  MR_String ClassName_11,
  MR_Integer ClassArity_12,
  MR_Word FieldVarDefn_13,
  MR_Word Stream_14)
{
  MR_bool succeeded;
  MR_Word FieldVarName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_13, (MR_Integer) 0))));
  MR_Word Initializer_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_13, (MR_Integer) 4))));

  switch (MR_tag((MR_Word) Initializer_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_class.output_enum_constant_for_java\'/8", (MR_String) "not mlconst_enum");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer_20, (MR_Integer) 0))));
        MR_Integer N_23;
        MR_Word Var_32;

        succeeded = ((((MR_tag((MR_Word) Rval_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_22, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_22, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
            N_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 1))));
        }
        if (succeeded)
        {
          MR_String Var_58;
          MR_String Var_69;

          ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_14, Indent_10);
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) "public static final ");
          ml_backend__mlds_to_java_name__output_class_name_arity_for_java_5_p_0(Stream_14, ClassName_11, ClassArity_12);
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) " K");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_1[0]), N_23, &Var_58);
          mercury__io__write_string_4_p_0(Stream_14, Var_58);
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) " = new ");
          ml_backend__mlds_to_java_name__output_class_name_arity_for_java_5_p_0(Stream_14, ClassName_11, ClassArity_12);
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_1[0]), N_23, &Var_69);
          mercury__io__write_string_4_p_0(Stream_14, Var_69);
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) "); ");
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) " /* ");
          ml_backend__mlds_to_java_name__output_field_var_name_for_java_4_p_0(Stream_14, FieldVarName_16);
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) " */");
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_class.output_enum_constant_for_java\'/8", (MR_String) "not mlconst_enum");
            return;
          }
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_class.output_enum_constant_for_java\'/8", (MR_String) "not mlconst_enum");
        return;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_interface_4_p_0(
  MR_Word Interface_5,
  MR_Word Stream_6)
{
  MR_bool succeeded;
  MR_Word QualClassName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Interface_5, (MR_Integer) 0))));
  MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Interface_5, (MR_Integer) 1))));
  MR_Word ModuleQualifier_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualClassName_8, (MR_Integer) 0))));
  MR_Word QualKind_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), QualClassName_8, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_String ClassName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualClassName_8, (MR_Integer) 2))));
  MR_Word SymName_14;
  MR_String ModuleNameStr_15;
  MR_Word Var_18;

  SymName_14 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleQualifier_11);
  Var_18 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_12);
  parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_14, Var_18, (MR_String) ".", &ModuleNameStr_15);
  mercury__io__write_string_4_p_0(Stream_6, ModuleNameStr_15);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".");
  mercury__io__write_string_4_p_0(Stream_6, ClassName_13);
  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    if (((((MR_nth_code_unit(ClassName_13, 0)) == (MR_Integer) 77)) && (((MR_nth_code_unit(ClassName_13, 1)) == (MR_Integer) 101))))
      switch (MR_nth_code_unit(ClassName_13, 2)) {
        case (MR_Integer) 114:
          if (MR_offset_streq(3, ClassName_13, (MR_String) "MercuryType"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 116:
          if (((((((((((((MR_nth_code_unit(ClassName_13, 3)) == (MR_Integer) 104)) && (((MR_nth_code_unit(ClassName_13, 4)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(ClassName_13, 5)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(ClassName_13, 6)) == (MR_Integer) 80)))) && (((MR_nth_code_unit(ClassName_13, 7)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(ClassName_13, 8)) == (MR_Integer) 114))))
            switch (MR_nth_code_unit(ClassName_13, 9)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 1;
                break;
              case (MR_Integer) 49:
                switch (MR_nth_code_unit(ClassName_13, 10)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 48:
                    if (MR_offset_streq(11, ClassName_13, (MR_String) "MethodPtr10"))
                      case_num_0 = (MR_Integer) 3;
                    break;
                  case (MR_Integer) 49:
                    if (MR_offset_streq(11, ClassName_13, (MR_String) "MethodPtr11"))
                      case_num_0 = (MR_Integer) 4;
                    break;
                  case (MR_Integer) 50:
                    if (MR_offset_streq(11, ClassName_13, (MR_String) "MethodPtr12"))
                      case_num_0 = (MR_Integer) 5;
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_streq(11, ClassName_13, (MR_String) "MethodPtr13"))
                      case_num_0 = (MR_Integer) 6;
                    break;
                  case (MR_Integer) 52:
                    if (MR_offset_streq(11, ClassName_13, (MR_String) "MethodPtr14"))
                      case_num_0 = (MR_Integer) 7;
                    break;
                  case (MR_Integer) 53:
                    if (MR_offset_streq(11, ClassName_13, (MR_String) "MethodPtr15"))
                      case_num_0 = (MR_Integer) 8;
                    break;
                }
                break;
              case (MR_Integer) 50:
                if (MR_offset_streq(10, ClassName_13, (MR_String) "MethodPtr2"))
                  case_num_0 = (MR_Integer) 9;
                break;
              case (MR_Integer) 51:
                if (MR_offset_streq(10, ClassName_13, (MR_String) "MethodPtr3"))
                  case_num_0 = (MR_Integer) 10;
                break;
              case (MR_Integer) 52:
                if (MR_offset_streq(10, ClassName_13, (MR_String) "MethodPtr4"))
                  case_num_0 = (MR_Integer) 11;
                break;
              case (MR_Integer) 53:
                if (MR_offset_streq(10, ClassName_13, (MR_String) "MethodPtr5"))
                  case_num_0 = (MR_Integer) 12;
                break;
              case (MR_Integer) 54:
                if (MR_offset_streq(10, ClassName_13, (MR_String) "MethodPtr6"))
                  case_num_0 = (MR_Integer) 13;
                break;
              case (MR_Integer) 55:
                if (MR_offset_streq(10, ClassName_13, (MR_String) "MethodPtr7"))
                  case_num_0 = (MR_Integer) 14;
                break;
              case (MR_Integer) 56:
                if (MR_offset_streq(10, ClassName_13, (MR_String) "MethodPtr8"))
                  case_num_0 = (MR_Integer) 15;
                break;
              case (MR_Integer) 57:
                if (MR_offset_streq(10, ClassName_13, (MR_String) "MethodPtr9"))
                  case_num_0 = (MR_Integer) 16;
                break;
              case (MR_Integer) 78:
                if (MR_offset_streq(10, ClassName_13, (MR_String) "MethodPtrN"))
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
  if (!(succeeded))
  {
    MR_String Var_35;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_1[0]), Arity_9, &Var_35);
    mercury__io__write_string_4_p_0(Stream_6, Var_35);
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
  MR_String ClassName0_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 0))));
  MR_Word Flags_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 3))));
  MR_Word Access_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_10, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

  switch (Access_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String ClassName_23;
        MR_String MangledClassName0_46;
        MR_Integer Var_53;

        MangledClassName0_46 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName0_7);
        Var_53 = mercury__string__length_1_f_0(MangledClassName0_46);
        succeeded = (Var_53 < (MR_Integer) 100);
        if (succeeded)
          ClassName_23 = ClassName0_7;
        else
        {
          MR_String Left_47;
          MR_String Middle_48;
          MR_String Right_49;
          MR_String GenName_50;
          MR_Word GenList_51;
          MR_Word FilterList_52;
          MR_String Var_70;
          MR_String Var_71;
          MR_String Var_73;
          MR_String Var_74;

          Left_47 = mercury__string__left_2_f_0(ClassName0_7, (MR_Integer) 44);
          Middle_48 = backend_libs__c_util__hex_hash32_1_f_0(ClassName0_7);
          Right_49 = mercury__string__right_2_f_0(ClassName0_7, (MR_Integer) 44);
          Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "_", Right_49);
          Var_71 = mercury__string__f_43_43_2_f_0(Middle_48, Var_70);
          Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_71);
          Var_74 = mercury__string__f_43_43_2_f_0(Left_47, Var_73);
          GenName_50 = mercury__string__f_43_43_2_f_0((MR_String) "s_", Var_74);
          GenList_51 = mercury__string__to_char_list_1_f_0(GenName_50);
          FilterList_52 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_3[2]), GenList_51);
          ClassName_23 = mercury__string__from_char_list_1_f_0(FilterList_52);
        }
        succeeded = (strcmp(ClassName_23, ClassName0_7) == 0);
        if (succeeded)
        {
          *STATE_VARIABLE_Renaming_27 = STATE_VARIABLE_Renaming_0_26;
          *STATE_VARIABLE_ClassDefn_25 = STATE_VARIABLE_ClassDefn_0_24;
        }
        else
        {
          MR_Integer Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 1))));
          MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 2))));
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 3))));
          MR_Word Var_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 4))) & (MR_Integer) 3);
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 5))));
          MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 6))));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 7))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 8))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 9))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 10))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 11))));
          MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 12))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_ClassDefn_25 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassName_23));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_32));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_33));
            MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_34));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_42));
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
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_func__output_function_defn_for_java_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_target_util__field_var_defn_is_enum_const_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_func__output_function_defn_for_java_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_field_var_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0(
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ClassDefn_10)
{
  MR_bool succeeded;
  MR_String ClassName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 0))));
  MR_Integer ClassArity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 1))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 2))));
  MR_Word Flags_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 3))));
  MR_Word Kind_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 4))) & (MR_Integer) 3);
  MR_Word Inherits_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 6))));
  MR_Word Implements_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 7))));
  MR_Word TypeParams_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 8))));
  MR_Word MemberFields_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 9))));
  MR_Word MemberClasses_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 10))));
  MR_Word MemberMethods_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 11))));
  MR_Word Ctors_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 12))));
  MR_Word OutputGenerics_25;
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  MR_Word STATE_VARIABLE_Info_34_34;
  MR_Word STATE_VARIABLE_Info_36_36;
  MR_Integer Var_42;
  MR_Integer Var_45;
  MR_Word Var_75;
  MR_Integer Var_77;
  MR_Word Var_79;
  MR_Word Var_92;
  MR_Word Var_96;
  MR_String Var_97;
  MR_Word Var_98;
  MR_Unsigned packed_word_3;
  MR_Unsigned packed_word_4;
  MR_Word Var_35;
  MR_Box conv3_STATE_VARIABLE_IO_76_76;

  ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_8, Var_30, (MR_Integer) 2, Context_14, Indent_9);
  ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_5_p_0(Stream_8, Flags_15);
  Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 0))));
  packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
  Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 2))));
  Var_97 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 3))));
  Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 4))));
  packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 5)));
  {
    STATE_VARIABLE_Info_34_34 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 0) = ((MR_Box) (Var_92));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 1) = (MR_Box) (packed_word_3);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 2) = ((MR_Box) (Var_96));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 3) = ((MR_Box) (Var_97));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 4) = ((MR_Box) (Var_98));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 5) = (MR_Box) (packed_word_4);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 6) = ((MR_Box) (TypeParams_20));
  }
  Var_35 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
  succeeded = mercury__list__member_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0), ((MR_Box) (Var_35)), Implements_19);
  if (succeeded)
  {
    MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 0))));
    MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 2))));
    MR_String Var_107 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 3))));
    MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 4))));
    MR_Word Var_110 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 5))) & (MR_Integer) 3);
    MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 6))));
    MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 1)));

    {
      STATE_VARIABLE_Info_36_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 0) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 1) = (MR_Box) (packed_word_5);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 2) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 3) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 4) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) (Var_110)));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 6) = ((MR_Box) (Var_111));
    }
  }
  else
    STATE_VARIABLE_Info_36_36 = STATE_VARIABLE_Info_34_34;
  ml_backend__mlds_to_java_class__output_class_kind_for_java_4_p_0(Stream_8, Kind_16);
  ml_backend__mlds_to_java_name__output_unqual_class_name_for_java_5_p_0(Stream_8, ClassName_12, ClassArity_13);
  OutputGenerics_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
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
  Var_42 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_java_class__output_inherits_list_6_p_0(STATE_VARIABLE_Info_36_36, Stream_8, Var_42, Inherits_18);
  Var_45 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_java_class__output_implements_list_5_p_0(Stream_8, Var_45, Implements_19);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  switch (Kind_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word Var_61;
        MR_Integer Var_63 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        MR_Word Var_65;
        MR_Integer Var_67;
        MR_Word Var_69;
        MR_Integer Var_71;
        MR_Box conv0_STATE_VARIABLE_IO_62_62;
        MR_Box conv1_STATE_VARIABLE_IO_66_66;
        MR_Box conv2_STATE_VARIABLE_IO_70_70;

        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (STATE_VARIABLE_Info_36_36));
          MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(MR_mktag(0), Var_61, 5) = ((MR_Box) (Var_63));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, MemberFields_21, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_62_62);
        Var_67 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (STATE_VARIABLE_Info_36_36));
          MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(MR_mktag(0), Var_65, 5) = ((MR_Box) (Var_67));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, MemberClasses_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_66_66);
        Var_71 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        {
          Var_69 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_3));
          MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (STATE_VARIABLE_Info_36_36));
          MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(MR_mktag(0), Var_69, 5) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), Var_69, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_69, MemberMethods_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_70_70);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word EnumConstFields_26;
        MR_Integer Var_52;
        MR_Integer Var_56;

        mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_3[1]), MemberFields_21, &EnumConstFields_26);
        Var_52 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 2);
        ml_backend__mlds_to_java_class__output_enum_constants_for_java_8_p_0(STATE_VARIABLE_Info_36_36, Stream_8, Var_52, ClassName_12, ClassArity_13, EnumConstFields_26);
        mercury__io__nl_3_p_0(Stream_8);
        Var_56 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 2);
        ml_backend__mlds_to_java_class__output_enum_ctor_for_java_6_p_0(Stream_8, Var_56, ClassName_12, ClassArity_13);
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
  Var_77 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  {
    Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (ClassName_12));
    MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (ClassArity_13));
  }
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0_5));
    MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (STATE_VARIABLE_Info_36_36));
    MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(MR_mktag(0), Var_75, 5) = ((MR_Box) (Var_77));
    MR_hl_field(MR_mktag(0), Var_75, 6) = ((MR_Box) (Var_79));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_75, Ctors_24, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_76_76);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word Flags_8)
{
  MR_bool succeeded;
  MR_Word Access_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_8, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Overrability_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_8, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Constness_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_8, (MR_Integer) 0))) & (MR_Integer) 1);

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

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constants_for_java_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_enum_constant_for_java_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constants_for_java_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_String ClassName_12,
  MR_Integer ClassArity_13,
  MR_Word EnumConsts_14)
{
  MR_Word Var_18;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_enum_constants_for_java_8_p_0_1));
    MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_9));
    MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Indent_11));
    MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (ClassName_12));
    MR_hl_field(MR_mktag(0), Var_18, 6) = ((MR_Box) (ClassArity_13));
  }
  parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), Var_18, (MR_String) "\n", EnumConsts_14, Stream_10);
  mercury__io__nl_3_p_0(Stream_10);
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_ctor_for_java_6_p_0(
  MR_Word Stream_7,
  MR_Integer Indent_8,
  MR_String ClassName_9,
  MR_Integer ClassArity_10)
{
  MR_Integer Var_20;

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_7, Indent_8);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "private ");
  ml_backend__mlds_to_java_name__output_class_name_arity_for_java_5_p_0(Stream_7, ClassName_9, ClassArity_10);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(int val) {\n");
  Var_20 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_7, Var_20);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "super(val);\n");
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_7, Indent_8);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "}\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_implements_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_interface_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_implements_list_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word InterfaceList_8)
{
  if (!((InterfaceList_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "implements ");
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0), (MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_3[0]), (MR_String) ",", InterfaceList_8, Stream_6);
    mercury__io__nl_3_p_0(Stream_6);
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
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "extends ");
            ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_7, (MR_Word) ((MR_Unsigned) 24U), Stream_8);
            mercury__io__nl_3_p_0(Stream_8);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BaseClassId_12 = (MR_Word) (MR_body((MR_Word) (Inherits_10), (MR_Integer) 1));
        MR_Word BaseType_13 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (BaseClassId_12)));

        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "extends ");
        ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_7, BaseType_13, Stream_8);
        mercury__io__nl_3_p_0(Stream_8);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_kind_for_java_4_p_0(
  MR_Word Stream_5,
  MR_Word Kind_6)
{
  switch (Kind_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 3:
    case (MR_Integer) 2:
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "class ");
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "interface ");
      break;
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
