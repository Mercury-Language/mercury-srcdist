/*
** Automatically generated from `mlds_to_java_class.m'
** by the Mercury compiler,
** version rotd-2019-07-26
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
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static MR_Char MR_CALL 
ml_backend__mlds_to_java_class__replace_non_alphanum_underscore_1_f_0(
  MR_Char Char_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_field_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word FieldVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constant_for_java_7_p_0(
  MR_Word _Info_8,
  MR_Integer Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word FieldVarDefn_12);

static void MR_CALL 
ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_7_p_0(
  MR_Integer Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word FieldVarDefn_12);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_interface_3_p_0(
  MR_Word Interface_4);

static MR_Box MR_CALL 
ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word Flags_6);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constants_for_java_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constants_for_java_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word EnumConsts_12);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_ctor_for_java_5_p_0(
  MR_Integer Indent_6,
  MR_String ClassName_7,
  MR_Integer ClassArity_8);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_implements_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_implements_list_4_p_0(
  MR_Integer Indent_5,
  MR_Word InterfaceList_6);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_inherits_list_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Inherits_8);

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_kind_for_java_3_p_0(
  MR_Word Kind_4);


static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_1[1][6];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_2[3][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_3[1][10];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_4[2][9];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_5[1][8];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_6[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_7[2][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_8[1][5];




static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_1[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_1[0])),
    ((MR_Box) (ml_backend__mlds_to_java_class__output_implements_list_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_8[0])),
    ((MR_Box) (ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_3[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_4[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_6[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_7[2][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 1U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_class_scalar_common_8[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static MR_Char MR_CALL 
ml_backend__mlds_to_java_class__replace_non_alphanum_underscore_1_f_0(
  MR_Char Char_3)
{
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
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_field_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word FieldVarDefn_10)
{
  {
    MR_bool succeeded;
    MR_Word FieldVarName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 0))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 1))));
    MR_Word Flags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 2))));
    MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 3))));
    MR_Word Initializer_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 4))));
    MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word PerInstance_41;
    MR_Word Constness_42;

    ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_20, (MR_Integer) 2, Context_13, Indent_8);
    PerInstance_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    Constness_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))) & (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "public ");
    switch (PerInstance_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "static ");
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    succeeded = (Constness_42 == (MR_Integer) 1);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "final ");
    }
    ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_7, Type_15);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    ml_backend__mlds_to_java_name__output_field_var_name_for_java_3_p_0(FieldVarName_12);
    ml_backend__mlds_to_java_data__output_initializer_for_java_6_p_0(Info_7, OutputAux_9, Type_15, Initializer_16);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constant_for_java_7_p_0(
  MR_Word _Info_8,
  MR_Integer Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word FieldVarDefn_12)
{
  ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_7_p_0(Indent_9, ClassName_10, ClassArity_11, FieldVarDefn_12);
}

static void MR_CALL 
ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_7_p_0(
  MR_Integer Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word FieldVarDefn_12)
{
  {
    MR_bool succeeded;
    MR_Word FieldVarName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_12, (MR_Integer) 0))));
    MR_Word Initializer_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_12, (MR_Integer) 4))));

    switch (MR_tag((MR_Word) Initializer_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_class.output_enum_constant_for_java\'/7", (MR_String) "not mlconst_enum");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer_18, (MR_Integer) 0))));
          MR_Integer N_21;
          MR_Word Var_30;

          succeeded = ((((MR_tag((MR_Word) Rval_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_20, (MR_Integer) 1))));
            succeeded = ((((MR_tag((MR_Word) Var_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 0)))) == (MR_Integer) 9)));
            if (succeeded)
              N_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 1))));
          }
          if (succeeded)
          {
            MR_String Var_56;
            MR_String Var_67;

            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
            mercury__io__write_string_3_p_0((MR_String) "public static final ");
            ml_backend__mlds_to_java_name__output_class_name_arity_for_java_4_p_0(ClassName_10, ClassArity_11);
            mercury__io__write_string_3_p_0((MR_String) " K");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_7[1]), N_21, &Var_56);
            mercury__io__write_string_3_p_0(Var_56);
            mercury__io__write_string_3_p_0((MR_String) " = new ");
            ml_backend__mlds_to_java_name__output_class_name_arity_for_java_4_p_0(ClassName_10, ClassArity_11);
            mercury__io__write_string_3_p_0((MR_String) "(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_7[1]), N_21, &Var_67);
            mercury__io__write_string_3_p_0(Var_67);
            mercury__io__write_string_3_p_0((MR_String) "); ");
            mercury__io__write_string_3_p_0((MR_String) " /* ");
            ml_backend__mlds_to_java_name__output_field_var_name_for_java_3_p_0(FieldVarName_14);
            mercury__io__write_string_3_p_0((MR_String) " */");
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_class.output_enum_constant_for_java\'/7", (MR_String) "not mlconst_enum");
              return;
            }
          }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_class.output_enum_constant_for_java\'/7", (MR_String) "not mlconst_enum");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_interface_3_p_0(
  MR_Word Interface_4)
{
  {
    MR_bool succeeded;
    MR_Word QualClassName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Interface_4, (MR_Integer) 0))));
    MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Interface_4, (MR_Integer) 1))));
    MR_Word ModuleQualifier_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualClassName_6, (MR_Integer) 0))));
    MR_Word QualKind_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), QualClassName_6, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_String ClassName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualClassName_6, (MR_Integer) 2))));
    MR_Word SymName_12;
    MR_String ModuleNameStr_13;
    MR_Word Var_16;

    SymName_12 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleQualifier_9);
    Var_16 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_10);
    parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_12, Var_16, (MR_String) ".", &ModuleNameStr_13);
    mercury__io__write_string_3_p_0(ModuleNameStr_13);
    mercury__io__write_string_3_p_0((MR_String) ".");
    mercury__io__write_string_3_p_0(ClassName_11);
    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      if (((((MR_nth_code_unit(ClassName_11, 0)) == (MR_Integer) 77)) && (((MR_nth_code_unit(ClassName_11, 1)) == (MR_Integer) 101))))
        switch (MR_nth_code_unit(ClassName_11, 2)) {
          case (MR_Integer) 114:
            if (MR_offset_streq(3, ClassName_11, (MR_String) "MercuryType"))
              case_num_0 = (MR_Integer) 0;
            break;
          case (MR_Integer) 116:
            if (((((((((((((MR_nth_code_unit(ClassName_11, 3)) == (MR_Integer) 104)) && (((MR_nth_code_unit(ClassName_11, 4)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(ClassName_11, 5)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(ClassName_11, 6)) == (MR_Integer) 80)))) && (((MR_nth_code_unit(ClassName_11, 7)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(ClassName_11, 8)) == (MR_Integer) 114))))
              switch (MR_nth_code_unit(ClassName_11, 9)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 49:
                  switch (MR_nth_code_unit(ClassName_11, 10)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 48:
                      if (MR_offset_streq(11, ClassName_11, (MR_String) "MethodPtr10"))
                        case_num_0 = (MR_Integer) 3;
                      break;
                    case (MR_Integer) 49:
                      if (MR_offset_streq(11, ClassName_11, (MR_String) "MethodPtr11"))
                        case_num_0 = (MR_Integer) 4;
                      break;
                    case (MR_Integer) 50:
                      if (MR_offset_streq(11, ClassName_11, (MR_String) "MethodPtr12"))
                        case_num_0 = (MR_Integer) 5;
                      break;
                    case (MR_Integer) 51:
                      if (MR_offset_streq(11, ClassName_11, (MR_String) "MethodPtr13"))
                        case_num_0 = (MR_Integer) 6;
                      break;
                    case (MR_Integer) 52:
                      if (MR_offset_streq(11, ClassName_11, (MR_String) "MethodPtr14"))
                        case_num_0 = (MR_Integer) 7;
                      break;
                    case (MR_Integer) 53:
                      if (MR_offset_streq(11, ClassName_11, (MR_String) "MethodPtr15"))
                        case_num_0 = (MR_Integer) 8;
                      break;
                  }
                  break;
                case (MR_Integer) 50:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr2"))
                    case_num_0 = (MR_Integer) 9;
                  break;
                case (MR_Integer) 51:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr3"))
                    case_num_0 = (MR_Integer) 10;
                  break;
                case (MR_Integer) 52:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr4"))
                    case_num_0 = (MR_Integer) 11;
                  break;
                case (MR_Integer) 53:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr5"))
                    case_num_0 = (MR_Integer) 12;
                  break;
                case (MR_Integer) 54:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr6"))
                    case_num_0 = (MR_Integer) 13;
                  break;
                case (MR_Integer) 55:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr7"))
                    case_num_0 = (MR_Integer) 14;
                  break;
                case (MR_Integer) 56:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr8"))
                    case_num_0 = (MR_Integer) 15;
                  break;
                case (MR_Integer) 57:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr9"))
                    case_num_0 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 78:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtrN"))
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
      MR_String Var_33;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_7[1]), Arity_7, &Var_33);
      mercury__io__write_string_3_p_0(Var_33);
    }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_java_class__interface_is_special_for_java_1_p_0(
  MR_String HeadVar__1_1)
{
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
}

static MR_Box MR_CALL 
ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Char conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ml_backend__mlds_to_java_class__replace_non_alphanum_underscore_1_f_0(((MR_Char) (MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0(
  MR_Word STATE_VARIABLE_ClassDefn_0_24,
  MR_Word * STATE_VARIABLE_ClassDefn_25,
  MR_Word STATE_VARIABLE_Renaming_0_26,
  MR_Word * STATE_VARIABLE_Renaming_27)
{
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
            MR_String Right_48;
            MR_Integer Hash_49;
            MR_String GenName_50;
            MR_Word GenList_51;
            MR_Word FilterList_52;
            MR_Integer Var_57;
            MR_String Var_72;
            MR_String Var_73;
            MR_String Var_82;
            MR_String Var_84;
            MR_String Var_85;

            Left_47 = mercury__string__left_2_f_0(ClassName0_7, (MR_Integer) 44);
            Right_48 = mercury__string__right_2_f_0(ClassName0_7, (MR_Integer) 44);
            Var_57 = mercury__string__hash_1_f_0(ClassName0_7);
            Hash_49 = (Var_57 & (MR_Integer) 4294967295);
            Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "_", Right_48);
            mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0((MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_7[0]), (MR_Integer) 8, (MR_Integer) 2, Hash_49, &Var_73);
            Var_82 = mercury__string__f_43_43_2_f_0(Var_73, Var_72);
            Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_82);
            Var_85 = mercury__string__f_43_43_2_f_0(Left_47, Var_84);
            GenName_50 = mercury__string__f_43_43_2_f_0((MR_String) "s_", Var_85);
            GenList_51 = mercury__string__to_char_list_1_f_0(GenName_50);
            FilterList_52 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_2[2]), GenList_51);
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
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_5(
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

static MR_bool MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_target_util__field_var_defn_is_enum_const_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_3(
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
ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_class__output_field_var_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0(
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Integer Indent_7,
  MR_Word ClassDefn_8)
{
  {
    MR_bool succeeded;
    MR_String ClassName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 0))));
    MR_Integer ClassArity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 1))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 2))));
    MR_Word Flags_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 3))));
    MR_Word Kind_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 4))) & (MR_Integer) 3);
    MR_Word Inherits_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 6))));
    MR_Word Implements_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 7))));
    MR_Word TypeParams_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 8))));
    MR_Word MemberFields_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 9))));
    MR_Word MemberClasses_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 10))));
    MR_Word MemberMethods_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 11))));
    MR_Word Ctors_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 12))));
    MR_Word OutputGenerics_23;
    MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Info_34_34;
    MR_Integer Var_40;
    MR_Integer Var_43;
    MR_Word Var_74;
    MR_Integer Var_76;
    MR_Word Var_78;
    MR_Word Var_91;
    MR_Word Var_95;
    MR_String Var_96;
    MR_Word Var_97;
    MR_Unsigned packed_word_3;
    MR_Unsigned packed_word_4;
    MR_Word Var_33;
    MR_Box conv3_STATE_VARIABLE_IO_75_75;

    ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_28, (MR_Integer) 2, Context_12, Indent_7);
    ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_4_p_0(Flags_13);
    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 0))));
    packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
    Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 2))));
    Var_96 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 3))));
    Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 4))));
    packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
    {
      STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 1) = (MR_Box) (packed_word_3);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 5) = (MR_Box) (packed_word_4);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 6) = ((MR_Box) (TypeParams_18));
    }
    Var_33 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
    succeeded = mercury__list__member_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0), ((MR_Box) (Var_33)), Implements_17);
    if (succeeded)
    {
      MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 0))));
      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 2))));
      MR_String Var_106 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 3))));
      MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 4))));
      MR_Word Var_109 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 5))) & (MR_Integer) 3);
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 6))));
      MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 1)));

      {
        STATE_VARIABLE_Info_34_34 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 0) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 1) = (MR_Box) (packed_word_5);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 2) = ((MR_Box) (Var_105));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 3) = ((MR_Box) (Var_106));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 4) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) (Var_109)));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 6) = ((MR_Box) (Var_110));
      }
    }
    else
      STATE_VARIABLE_Info_34_34 = STATE_VARIABLE_Info_32_32;
    ml_backend__mlds_to_java_class__output_class_kind_for_java_3_p_0(Kind_14);
    ml_backend__mlds_to_java_name__output_unqual_class_name_for_java_4_p_0(ClassName_10, ClassArity_11);
    OutputGenerics_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
    switch (OutputGenerics_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        ml_backend__mlds_to_target_util__output_generic_tvars_3_p_0(TypeParams_18);
        break;
    }
    mercury__io__nl_2_p_0();
    Var_40 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
    ml_backend__mlds_to_java_class__output_inherits_list_5_p_0(STATE_VARIABLE_Info_34_34, Var_40, Inherits_16);
    Var_43 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
    ml_backend__mlds_to_java_class__output_implements_list_4_p_0(Var_43, Implements_17);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    switch (Kind_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word Var_59;
          MR_Integer Var_61 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
          MR_Word Var_64;
          MR_Integer Var_66;
          MR_Word Var_68;
          MR_Integer Var_70;
          MR_Box conv0_STATE_VARIABLE_IO_60_60;
          MR_Box conv1_STATE_VARIABLE_IO_65_65;
          MR_Box conv2_STATE_VARIABLE_IO_69_69;

          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (STATE_VARIABLE_Info_34_34));
            MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(0), Var_59, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, MemberFields_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_60_60);
          Var_66 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (STATE_VARIABLE_Info_34_34));
            MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (Var_66));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, MemberClasses_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_65_65);
          Var_70 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_3));
            MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (STATE_VARIABLE_Info_34_34));
            MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(0), Var_68, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_68, MemberMethods_21, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_69_69);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word EnumConstFields_24;
          MR_Integer Var_50;
          MR_Integer Var_54;

          mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_2[1]), MemberFields_19, &EnumConstFields_24);
          Var_50 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 2);
          ml_backend__mlds_to_java_class__output_enum_constants_for_java_7_p_0(STATE_VARIABLE_Info_34_34, Var_50, ClassName_10, ClassArity_11, EnumConstFields_24);
          mercury__io__nl_2_p_0();
          Var_54 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 2);
          ml_backend__mlds_to_java_class__output_enum_ctor_for_java_5_p_0(Var_54, ClassName_10, ClassArity_11);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_class.output_class_defn_for_java\'/5", (MR_String) "structs not supported in Java");
            return;
          }
        }
        break;
    }
    mercury__io__nl_2_p_0();
    Var_76 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (ClassName_10));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (ClassArity_11));
    }
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (STATE_VARIABLE_Info_34_34));
      MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), Var_74, 5) = ((MR_Box) (Var_78));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, Ctors_22, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_75_75);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word Flags_6)
{
  {
    MR_bool succeeded;
    MR_Word Access_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word Overrability_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word Constness_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) & (MR_Integer) 1);

    switch (Access_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "private ");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "public ");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "static ");
    succeeded = (Overrability_9 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (Constness_10 == (MR_Integer) 1);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "final ");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constants_for_java_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_class__output_enum_constant_for_java_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_constants_for_java_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word EnumConsts_12)
{
  {
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&ml_backend__mlds_to_java_class_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (ml_backend__mlds_to_java_class__output_enum_constants_for_java_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Info_8));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Indent_9));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (ClassName_10));
      MR_hl_field(MR_mktag(0), Var_17, 6) = ((MR_Box) (ClassArity_11));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), EnumConsts_12, (MR_String) "\n", Var_17);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_enum_ctor_for_java_5_p_0(
  MR_Integer Indent_6,
  MR_String ClassName_7,
  MR_Integer ClassArity_8)
{
  {
    MR_Integer Var_18;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_6);
    mercury__io__write_string_3_p_0((MR_String) "private ");
    ml_backend__mlds_to_java_name__output_class_name_arity_for_java_4_p_0(ClassName_7, ClassArity_8);
    mercury__io__write_string_3_p_0((MR_String) "(int val) {\n");
    Var_18 = (MR_Integer) ((MR_Unsigned) Indent_6 + (MR_Unsigned) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_18);
    mercury__io__write_string_3_p_0((MR_String) "super(val);\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_6);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_implements_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_class__output_interface_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_implements_list_4_p_0(
  MR_Integer Indent_5,
  MR_Word InterfaceList_6)
{
  if (!((InterfaceList_6 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "implements ");
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0), InterfaceList_6, (MR_String) ",", (MR_Word) (&ml_backend__mlds_to_java_class_scalar_common_2[0]));
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_inherits_list_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Inherits_8)
{
  switch (MR_tag((MR_Word) Inherits_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inherits_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
            mercury__io__write_string_3_p_0((MR_String) "extends ");
            ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_6, (MR_Word) ((MR_Unsigned) 24U));
            mercury__io__nl_2_p_0();
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BaseClassId_10 = (MR_Word) (MR_body((MR_Word) (Inherits_8), (MR_Integer) 1));
        MR_Word BaseType_11 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (BaseClassId_10)));

        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
        mercury__io__write_string_3_p_0((MR_String) "extends ");
        ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_6, BaseType_11);
        mercury__io__nl_2_p_0();
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_class__output_class_kind_for_java_3_p_0(
  MR_Word Kind_4)
{
  switch (Kind_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 3:
    case (MR_Integer) 2:
      {
        mercury__io__write_string_3_p_0((MR_String) "class ");
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) "interface ");
      }
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
