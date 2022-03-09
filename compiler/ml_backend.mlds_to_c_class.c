/*
** Automatically generated from `mlds_to_c_class.m'
** by the Mercury compiler,
** version rotd-2022-03-09
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
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constant_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word EnumModuleName_10,
  MR_Word FieldVarDefn_11,
  MR_Word Stream_12);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__field_var_defn_is_static_member_1_p_0(
  MR_Word FieldVarDefn_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__function_defn_is_static_member_1_p_0(
  MR_Word FuncDefn_2);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_forward_decl_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word ModuleName_11,
  MR_Word ClassDefn_12);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_5(
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
  MR_Integer Indent_3,
  MR_Word ModuleName_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_54_93_95_48_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word ModuleName_12,
  MR_Word ClassDefn_13);

static void MR_CALL 
ml_backend__mlds_to_c_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_95_91_52_93_95_48_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Flags_9);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word EnumModuleName_11,
  MR_Word MemberFields_12);

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
ml_backend__mlds_to_c_class__mlds_output_field_var_decl_flags_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Flags_9,
  MR_Word DeclOrDefn_10);


static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_1[1][2];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_2[2][4];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_3[3][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_4[2][10];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_5[1][11];




static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_2[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_3[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_enum_constants_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_2[1])),
    ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_4[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_5[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constant_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word EnumModuleName_10,
  MR_Word FieldVarDefn_11,
  MR_Word Stream_12)
{
  MR_Word FieldVarName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_11, (MR_Integer) 0))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_11, (MR_Integer) 1))));
  MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_11, (MR_Integer) 3))));
  MR_Word Initializer_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_11, (MR_Integer) 4))));
  MR_Word QualFieldVarName_20;
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_12, Var_23, Context_15);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_12, Indent_9);
  {
    QualFieldVarName_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), QualFieldVarName_20, 0) = ((MR_Box) (EnumModuleName_10));
    MR_hl_field(MR_mktag(0), QualFieldVarName_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), QualFieldVarName_20, 2) = ((MR_Box) (FieldVarName_14));
  }
  ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_4_p_0(Stream_12, QualFieldVarName_20);
  ml_backend__mlds_to_c_data__mlds_output_initializer_6_p_0(Opts_8, Stream_12, Type_17, Initializer_18);
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__field_var_defn_is_static_member_1_p_0(
  MR_Word FieldVarDefn_2)
{
  MR_bool succeeded;
  MR_Word Var_3;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_2, (MR_Integer) 2))));

  Var_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_4, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  succeeded = (Var_3 == (MR_Integer) 0);
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__function_defn_is_static_member_1_p_0(
  MR_Word FuncDefn_2)
{
  MR_bool succeeded;
  MR_Word Var_3;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 2))));

  Var_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_4, (MR_Integer) 0))) & (MR_Integer) 1);
  succeeded = (Var_3 == (MR_Integer) 0);
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_forward_decl_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word ModuleName_11,
  MR_Word ClassDefn_12)
{
  MR_bool succeeded;
  MR_Word Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 4))) & (MR_Integer) 3);

  succeeded = (Var_16 == (MR_Integer) 3);
  if (!(succeeded))
  {
    MR_String ClassName_42 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 0))));
    MR_Integer ClassArity_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 1))));
    MR_Word Context_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 2))));
    MR_Word Flags_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 3))));
    MR_Word ClassKind_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 4))) & (MR_Integer) 3);
    MR_Word Var_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_55, Context_44);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
    ml_backend__mlds_to_c_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_95_91_52_93_95_48_6_p_0(Opts_8, Stream_9, Flags_45);
    switch (ClassKind_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "struct ");
          ml_backend__mlds_to_c_name__output_qual_name_prefix_c_4_p_0(Stream_9, ModuleName_11);
          ml_backend__mlds_to_c_name__mlds_output_class_name_arity_5_p_0(Stream_9, ClassName_42, ClassArity_43);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_s");
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "enum ");
          ml_backend__mlds_to_c_name__output_qual_name_prefix_c_4_p_0(Stream_9, ModuleName_11);
          ml_backend__mlds_to_c_name__mlds_output_class_name_arity_5_p_0(Stream_9, ClassName_42, ClassArity_43);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_e");
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_class__mlds_output_field_var_defn_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_func__mlds_output_function_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_class__mlds_output_field_var_defn_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_String ClassName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 0))));
  MR_Integer ClassArity_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 1))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 2))));
  MR_Word Kind_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 4))) & (MR_Integer) 3);
  MR_Word Inherits_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 6))));
  MR_Word MemberFields_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 9))));
  MR_Word MemberClasses_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 10))));
  MR_Word Ctors_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 12))));
  MR_Word ClassModuleName_27;
  MR_Word StaticCtors_28;
  MR_Word StaticMemberFields_30;
  MR_Word BaseFieldVarDefns_34;
  MR_Word Var_75;

  mercury__io__nl_3_p_0(Stream_9);
  ml_backend__mlds_to_c_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_54_93_95_48_8_p_0(Opts_8, Stream_9, Indent_10, ModuleName_11, ClassDefn_12);
  ClassModuleName_27 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(ModuleName_11, ClassName_14, ClassArity_15);
  switch (MR_tag((MR_Word) Inherits_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inherits_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          BaseFieldVarDefns_34 = (MR_Word) ((MR_Unsigned) 0U);
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
        MR_Word BaseClassId_35 = (MR_Word) (MR_body((MR_Word) (Inherits_20), (MR_Integer) 1));
        MR_Word Type_37 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (BaseClassId_35)));
        MR_Word Var_49;
        MR_Word Var_50;

        Var_50 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__mlds_to_c_class_scalar_common_1[0])));
          MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (Context_16));
          MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Type_37));
          MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Var_49, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          BaseFieldVarDefns_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), BaseFieldVarDefns_34, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), BaseFieldVarDefns_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " {\n");
  switch (Kind_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Word StructCtors_29;
        MR_Word StructMemberFields_31;

        mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_c_class_scalar_common_3[1]), Ctors_26, &StaticCtors_28, &StructCtors_29);
        mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_class_scalar_common_3[2]), MemberFields_23, &StaticMemberFields_30, &StructMemberFields_31);
        {
          MR_Word Var_55;
          MR_Integer Var_57 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
          MR_Word Var_60;
          MR_Integer Var_62;
          MR_Word Var_64;
          MR_Integer Var_66;
          MR_Box conv0_STATE_VARIABLE_IO_56_56;
          MR_Box conv1_STATE_VARIABLE_IO_61_61;
          MR_Box conv2_STATE_VARIABLE_IO_73_73;

          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_3));
            MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Opts_8));
            MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Stream_9));
            MR_hl_field(MR_mktag(0), Var_55, 5) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), Var_55, 6) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_55, 7) = ((MR_Box) (ClassModuleName_27));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, BaseFieldVarDefns_34, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_56_56);
          Var_62 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_4));
            MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Opts_8));
            MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (Stream_9));
            MR_hl_field(MR_mktag(0), Var_60, 5) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(0), Var_60, 6) = ((MR_Box) (ClassModuleName_27));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, StructCtors_29, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_61_61);
          Var_66 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0_5));
            MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (Opts_8));
            MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (Stream_9));
            MR_hl_field(MR_mktag(0), Var_64, 5) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(0), Var_64, 6) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_64, 7) = ((MR_Box) (ClassModuleName_27));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, StructMemberFields_31, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_73_73);
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer Var_69;
        MR_Integer Var_72;

        StaticCtors_28 = (MR_Word) ((MR_Unsigned) 0U);
        StaticMemberFields_30 = (MR_Word) ((MR_Unsigned) 0U);
        Var_69 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
        ml_backend__mlds_to_c_class__mlds_output_enum_constants_7_p_0(Opts_8, Stream_9, Var_69, ClassModuleName_27, BaseFieldVarDefns_34);
        Var_72 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
        ml_backend__mlds_to_c_class__mlds_output_enum_constants_7_p_0(Opts_8, Stream_9, Var_72, ClassModuleName_27, MemberFields_23);
      }
      break;
  }
  Var_75 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_75, Context_16);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
  ml_backend__mlds_to_c_func__mlds_output_function_defns_8_p_0(Opts_8, (MR_Integer) 1, Stream_9, Indent_10, ClassModuleName_27, StaticCtors_28);
  ml_backend__mlds_to_c_class__mlds_output_field_var_defns_8_p_0(Opts_8, Stream_9, Indent_10, (MR_Integer) 1, ClassModuleName_27, StaticMemberFields_30);
  ml_backend__mlds_to_c_class__mlds_output_class_defns_7_p_0(Opts_8, Stream_9, Indent_10, ClassModuleName_27, MemberClasses_24);
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
      MR_Word ClassDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ClassDefns_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
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
ml_backend__mlds_to_c_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_54_93_95_48_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word ModuleName_12,
  MR_Word ClassDefn_13)
{
  MR_String ClassName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 0))));
  MR_Integer ClassArity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 1))));
  MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 2))));
  MR_Word Flags_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 3))));
  MR_Word ClassKind_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 4))) & (MR_Integer) 3);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_31, Context_18);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
  ml_backend__mlds_to_c_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_95_91_52_93_95_48_6_p_0(Opts_9, Stream_10, Flags_19);
  switch (ClassKind_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "struct ");
        ml_backend__mlds_to_c_name__output_qual_name_prefix_c_4_p_0(Stream_10, ModuleName_12);
        ml_backend__mlds_to_c_name__mlds_output_class_name_arity_5_p_0(Stream_10, ClassName_16, ClassArity_17);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "_s");
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "enum ");
        ml_backend__mlds_to_c_name__output_qual_name_prefix_c_4_p_0(Stream_10, ModuleName_12);
        ml_backend__mlds_to_c_name__mlds_output_class_name_arity_5_p_0(Stream_10, ClassName_16, ClassArity_17);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "_e");
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_95_91_52_93_95_48_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Flags_9)
{
  MR_Word Access_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_9, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Overridability_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Constness_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_9, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Comments_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);

  switch (Comments_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        switch (Access_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* private: */ ");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* public: */ ");
            break;
        }
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* one_copy */ ");
        switch (Overridability_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* sealed */ ");
            break;
        }
      }
      break;
  }
  switch (Constness_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "const ");
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_class__mlds_output_enum_constant_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_target_util__field_var_defn_is_enum_const_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word EnumModuleName_11,
  MR_Word MemberFields_12)
{
  MR_bool succeeded;
  MR_Word EnumConstMemberFields_14;
  MR_Word Var_18;

  mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_class_scalar_common_3[0]), MemberFields_12, &EnumConstMemberFields_14);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_enum_constants_7_p_0_2));
    MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Opts_8));
    MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Indent_10));
    MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (EnumModuleName_11));
  }
  parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), Var_18, (MR_String) ",\n", EnumConstMemberFields_14, Stream_9);
  mercury__io__nl_3_p_0(Stream_9);
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
      MR_Word FieldVarDefn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word FieldVarDefns_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
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
  MR_Word FieldVarName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_14, (MR_Integer) 0))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_14, (MR_Integer) 1))));
  MR_Word Flags_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_14, (MR_Integer) 2))));
  MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_14, (MR_Integer) 3))));
  MR_Word Initializer_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_14, (MR_Integer) 4))));
  MR_Word GCStmt_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_14, (MR_Integer) 5))));
  MR_Word QualFieldVarName_22;
  MR_Word Var_26;
  MR_Word Var_32;

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
  Var_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_26, Context_17);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
  ml_backend__mlds_to_c_class__mlds_output_field_var_decl_flags_6_p_0(Opts_9, Stream_10, Flags_18, (MR_Integer) 1);
  {
    QualFieldVarName_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), QualFieldVarName_22, 0) = ((MR_Box) (ModuleName_13));
    MR_hl_field(MR_mktag(0), QualFieldVarName_22, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), QualFieldVarName_22, 2) = ((MR_Box) (FieldVarName_16));
  }
  Var_32 = ml_backend__mlds__get_initializer_array_size_1_f_0(Initializer_20);
  ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_9, Stream_10, Type_19);
  mercury__io__write_char_4_p_0(Stream_10, (MR_Char) 32);
  ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_4_p_0(Stream_10, QualFieldVarName_22);
  ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(Opts_9, Stream_10, Type_19, Var_32);
  ml_backend__mlds_to_c_data__mlds_output_initializer_6_p_0(Opts_9, Stream_10, Type_19, Initializer_20);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
  ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_7_p_0(Opts_9, Stream_10, Indent_11, GCStmt_21, (MR_String) "");
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_field_var_decl_flags_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Flags_9,
  MR_Word DeclOrDefn_10)
{
  MR_Word Constness_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_9, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Comments_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

  switch (Comments_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      switch (Var_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* one_copy */ ");
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
      break;
  }
  switch (DeclOrDefn_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "extern ");
      break;
  }
  switch (Constness_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "const ");
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
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
