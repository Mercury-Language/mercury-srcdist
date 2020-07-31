/*
** Automatically generated from `mlds_to_c_class.m'
** by the Mercury compiler,
** version rotd-2020-07-31
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
#include "getopt_io.mih"
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
#include "parse_tree.java_names.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__IntroducedFrom__pred__mlds_output_class__133__1_2_p_0(
  MR_Word MemberMethods_23,
  MR_Word HeadVar__2_42);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constant_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word EnumModuleName_9,
  MR_Word FieldVarDefn_10);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__field_var_defn_is_static_member_1_p_0(
  MR_Word FieldVarDefn_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__function_defn_is_static_member_1_p_0(
  MR_Word FuncDefn_2);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_decl_opts_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word ModuleName_9,
  MR_Word ClassDefn_10);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word ModuleName_9,
  MR_Word ClassDefn_10);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defns_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
ml_backend__mlds_to_c_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word ModuleName_9,
  MR_String ClassName_10,
  MR_Integer Arity_11,
  MR_Word ClassDefn_12);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word EnumModuleName_9,
  MR_Word MemberFields_10);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_field_var_defns_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_field_var_defn_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word Separate_10,
  MR_Word ModuleName_11,
  MR_Word FieldVarDefn_12);

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_field_var_decl_6_p_0(
  MR_Word Opts_7,
  MR_Word FieldVarName_8,
  MR_Word Type_9,
  MR_Word InitializerSize_10);


static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_2[2][4];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_3[3][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_4[2][9];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_5[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_6[1][10];




static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_2[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_enum_constants_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_2[1])),
    ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_4[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_c_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_class_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
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



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)
  }
};

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__IntroducedFrom__pred__mlds_output_class__133__1_2_p_0(
  MR_Word MemberMethods_23,
  MR_Word HeadVar__2_42)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_c_class_scalar_common_1[0]), ((MR_Box) (MemberMethods_23)), ((MR_Box) (HeadVar__2_42)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constant_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word EnumModuleName_9,
  MR_Word FieldVarDefn_10)
{
  {
    MR_Word FieldVarName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 0))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 1))));
    MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 3))));
    MR_Word Initializer_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 4))));
    MR_Word QualFieldVarName_18;
    MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_21, Context_13);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    {
      QualFieldVarName_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), QualFieldVarName_18, 0) = ((MR_Box) (EnumModuleName_9));
      MR_hl_field(MR_mktag(0), QualFieldVarName_18, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), QualFieldVarName_18, 2) = ((MR_Box) (FieldVarName_12));
    }
    ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_3_p_0(QualFieldVarName_18);
    ml_backend__mlds_to_c_data__mlds_output_initializer_5_p_0(Opts_7, Type_15, Initializer_16);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__field_var_defn_is_static_member_1_p_0(
  MR_Word FieldVarDefn_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_3;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_2, (MR_Integer) 2))));

    Var_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_4, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    succeeded = (Var_3 == (MR_Integer) 0);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__function_defn_is_static_member_1_p_0(
  MR_Word FuncDefn_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_3;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn_2, (MR_Integer) 2))));

    Var_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_4, (MR_Integer) 0))) & (MR_Integer) 1);
    succeeded = (Var_3 == (MR_Integer) 0);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_decl_opts_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word ModuleName_9,
  MR_Word ClassDefn_10)
{
  {
    MR_bool succeeded;
    MR_String ClassName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 0))));
    MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 1))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 2))));
    MR_Word Flags_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 3))));
    MR_Word Kind_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 4))) & (MR_Integer) 3);

    succeeded = (Kind_16 == (MR_Integer) 3);
    if (!(succeeded))
    {
      MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
      MR_Word Access_55;
      MR_Word Overridability_56;
      MR_Word Constness_57;
      MR_Word Comments_58;

      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_27, Context_14);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
      Access_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_15, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      Overridability_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_15, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      Constness_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_15, (MR_Integer) 0))) & (MR_Integer) 1);
      Comments_58 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
      switch (Comments_58) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            switch (Access_55) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                mercury__io__write_string_3_p_0((MR_String) "/* private: */ ");
                break;
              case (MR_Integer) 0:
                mercury__io__write_string_3_p_0((MR_String) "/* public: */ ");
                break;
            }
            mercury__io__write_string_3_p_0((MR_String) "/* one_copy */ ");
          }
          break;
      }
      switch (Overridability_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "/* sealed */ ");
          break;
      }
      switch (Constness_57) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "const ");
          break;
        case (MR_Integer) 0:
          {
          }
          break;
      }
      ml_backend__mlds_to_c_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_7_p_0(ModuleName_9, ClassName_12, Arity_13, ClassDefn_10);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defn_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word ModuleName_9,
  MR_Word ClassDefn_10)
{
  {
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 2))));
    MR_Word Flags_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 3))));
    MR_Word Var_28;
    MR_Word Access_54;
    MR_Word Overridability_55;
    MR_Word Constness_56;
    MR_Word Comments_57;

    mercury__io__nl_2_p_0();
    Var_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_28, Context_14);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    Access_54 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_15, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    Overridability_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_15, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    Constness_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_15, (MR_Integer) 0))) & (MR_Integer) 1);
    Comments_57 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
    switch (Comments_57) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          switch (Access_54) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              mercury__io__write_string_3_p_0((MR_String) "/* private: */ ");
              break;
            case (MR_Integer) 0:
              mercury__io__write_string_3_p_0((MR_String) "/* public: */ ");
              break;
          }
          mercury__io__write_string_3_p_0((MR_String) "/* one_copy */ ");
        }
        break;
    }
    switch (Overridability_55) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_3_p_0((MR_String) "/* sealed */ ");
        break;
    }
    switch (Constness_56) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_3_p_0((MR_String) "const ");
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    ml_backend__mlds_to_c_class__mlds_output_class_6_p_0(Opts_7, Indent_8, ModuleName_9, ClassDefn_10);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_class__mlds_output_field_var_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_func__mlds_output_function_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_class__mlds_output_field_var_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_c_class__field_var_defn_is_static_member_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_c_class__function_defn_is_static_member_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_c_class__IntroducedFrom__pred__mlds_output_class__133__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word ModuleName_9,
  MR_Word ClassDefn_10)
{
  {
    MR_bool succeeded;
    MR_String ClassName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 0))));
    MR_Integer ClassArity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 1))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 2))));
    MR_Word Kind_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 4))) & (MR_Integer) 3);
    MR_Word Inherits_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 6))));
    MR_Word MemberFields_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 9))));
    MR_Word MemberClasses_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 10))));
    MR_Word MemberMethods_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 11))));
    MR_Word Ctors_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_10, (MR_Integer) 12))));
    MR_Word ClassModuleName_25;
    MR_Word StaticCtors_26;
    MR_Word StaticMemberFields_28;
    MR_Word BaseFieldVarDefns_32;
    MR_Word Var_39;
    MR_Word Var_75;

    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (MemberMethods_23));
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_39, (MR_String) "predicate \140ml_backend.mlds_to_c_class.mlds_output_class\'/6", (MR_String) "MemberMethods != []");
    ClassModuleName_25 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(ModuleName_9, ClassName_12, ClassArity_13);
    switch (MR_tag((MR_Word) Inherits_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inherits_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            BaseFieldVarDefns_32 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_class.mlds_output_class\'/6", (MR_String) "inherits_generic_env_ptr_type");
              return;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word BaseClassId_33 = (MR_Word) (MR_body((MR_Word) (Inherits_18), (MR_Integer) 1));
          MR_Word Type_35 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (BaseClassId_33)));
          MR_Word Var_48;
          MR_Word Var_49;

          Var_49 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__mlds_to_c_class_scalar_common_1[1])));
            MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Type_35));
            MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_48, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            BaseFieldVarDefns_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), BaseFieldVarDefns_32, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), BaseFieldVarDefns_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    ml_backend__mlds_to_c_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_7_p_0(ModuleName_9, ClassName_12, ClassArity_13, ClassDefn_10);
    mercury__io__write_string_3_p_0((MR_String) " {\n");
    switch (Kind_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word StructCtors_27;
          MR_Word StructMemberFields_29;

          mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_c_class_scalar_common_3[1]), Ctors_24, &StaticCtors_26, &StructCtors_27);
          mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_class_scalar_common_3[2]), MemberFields_21, &StaticMemberFields_28, &StructMemberFields_29);
          {
            MR_Word Var_55;
            MR_Integer Var_57 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
            MR_Word Var_60;
            MR_Integer Var_62;
            MR_Word Var_64;
            MR_Integer Var_66;
            MR_Box conv0_STATE_VARIABLE_IO_56_56;
            MR_Box conv1_STATE_VARIABLE_IO_61_61;
            MR_Box conv2_STATE_VARIABLE_IO_73_73;

            {
              Var_55 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_4));
              MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Opts_7));
              MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Var_57));
              MR_hl_field(MR_mktag(0), Var_55, 5) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), Var_55, 6) = ((MR_Box) (ClassModuleName_25));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, BaseFieldVarDefns_32, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_56_56);
            Var_62 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
            {
              Var_60 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_5));
              MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Opts_7));
              MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (Var_62));
              MR_hl_field(MR_mktag(0), Var_60, 5) = ((MR_Box) (ClassModuleName_25));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, StructCtors_27, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_61_61);
            Var_66 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
            {
              Var_64 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_class_6_p_0_6));
              MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (Opts_7));
              MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (Var_66));
              MR_hl_field(MR_mktag(0), Var_64, 5) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), Var_64, 6) = ((MR_Box) (ClassModuleName_25));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, StructMemberFields_29, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_73_73);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer Var_69;
          MR_Integer Var_72;

          StaticCtors_26 = (MR_Word) ((MR_Unsigned) 0U);
          StaticMemberFields_28 = (MR_Word) ((MR_Unsigned) 0U);
          Var_69 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
          ml_backend__mlds_to_c_class__mlds_output_enum_constants_6_p_0(Opts_7, Var_69, ClassModuleName_25, BaseFieldVarDefns_32);
          Var_72 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
          ml_backend__mlds_to_c_class__mlds_output_enum_constants_6_p_0(Opts_7, Var_72, ClassModuleName_25, MemberFields_21);
        }
        break;
    }
    Var_75 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_75, Context_14);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "};\n");
    ml_backend__mlds_to_c_func__mlds_output_function_defns_6_p_0(Opts_7, Indent_8, ClassModuleName_25, StaticCtors_26);
    ml_backend__mlds_to_c_class__mlds_output_field_var_defns_7_p_0(Opts_7, Indent_8, (MR_Integer) 1, ClassModuleName_25, StaticMemberFields_28);
    ml_backend__mlds_to_c_class__mlds_output_class_defns_6_p_0(Opts_7, Indent_8, ClassModuleName_25, MemberClasses_22);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_class_defns_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ClassDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ClassDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__4_4;

      ml_backend__mlds_to_c_class__mlds_output_class_defn_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ClassDefn_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ClassDefns_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word ModuleName_9,
  MR_String ClassName_10,
  MR_Integer Arity_11,
  MR_Word ClassDefn_12)
{
  {
    MR_Word ClassKind_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 4))) & (MR_Integer) 3);

    switch (ClassKind_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          mercury__io__write_string_3_p_0((MR_String) "struct ");
          ml_backend__mlds_to_c_name__output_qual_name_prefix_c_3_p_0(ModuleName_9);
          ml_backend__mlds_to_c_name__mlds_output_class_name_arity_4_p_0(ClassName_10, Arity_11);
          mercury__io__write_string_3_p_0((MR_String) "_s");
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__io__write_string_3_p_0((MR_String) "enum ");
          ml_backend__mlds_to_c_name__output_qual_name_prefix_c_3_p_0(ModuleName_9);
          ml_backend__mlds_to_c_name__mlds_output_class_name_arity_4_p_0(ClassName_10, Arity_11);
          mercury__io__write_string_3_p_0((MR_String) "_e");
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_class__mlds_output_enum_constant_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_enum_constants_6_p_0_1(
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
ml_backend__mlds_to_c_class__mlds_output_enum_constants_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word EnumModuleName_9,
  MR_Word MemberFields_10)
{
  {
    MR_bool succeeded;
    MR_Word EnumConstMemberFields_12;
    MR_Word Var_17;

    mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_class_scalar_common_3[0]), MemberFields_10, &EnumConstMemberFields_12);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&ml_backend__mlds_to_c_class_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (ml_backend__mlds_to_c_class__mlds_output_enum_constants_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Opts_7));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Indent_8));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (EnumModuleName_9));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), EnumConstMemberFields_12, (MR_String) ",\n", Var_17);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_field_var_defns_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FieldVarDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word FieldVarDefns_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__5_5;

      ml_backend__mlds_to_c_class__mlds_output_field_var_defn_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, FieldVarDefn_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = FieldVarDefns_20;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_field_var_defn_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word Separate_10,
  MR_Word ModuleName_11,
  MR_Word FieldVarDefn_12)
{
  {
    MR_Word FieldVarName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_12, (MR_Integer) 0))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_12, (MR_Integer) 1))));
    MR_Word Flags_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_12, (MR_Integer) 2))));
    MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_12, (MR_Integer) 3))));
    MR_Word Initializer_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_12, (MR_Integer) 4))));
    MR_Word GCStmt_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_12, (MR_Integer) 5))));
    MR_Word QualFieldVarName_20;
    MR_Word Var_24;
    MR_Word Var_30;
    MR_Word Constness_57;
    MR_Word Comments_58;
    MR_Word Var_64;

    switch (Separate_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        mercury__io__nl_2_p_0();
        break;
    }
    Var_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_24, Context_15);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    Var_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_16, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    Constness_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_16, (MR_Integer) 0))) & (MR_Integer) 1);
    Comments_58 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
    switch (Comments_58) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        switch (Var_64) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_3_p_0((MR_String) "/* one_copy */ ");
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
        break;
    }
    switch (Constness_57) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_3_p_0((MR_String) "const ");
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    {
      QualFieldVarName_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), QualFieldVarName_20, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), QualFieldVarName_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), QualFieldVarName_20, 2) = ((MR_Box) (FieldVarName_14));
    }
    Var_30 = ml_backend__mlds__get_initializer_array_size_1_f_0(Initializer_18);
    ml_backend__mlds_to_c_class__mlds_output_field_var_decl_6_p_0(Opts_8, QualFieldVarName_20, Type_17, Var_30);
    ml_backend__mlds_to_c_data__mlds_output_initializer_5_p_0(Opts_8, Type_17, Initializer_18);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
    ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_6_p_0(Opts_8, Indent_9, GCStmt_19, (MR_String) "");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_class__mlds_output_field_var_decl_6_p_0(
  MR_Word Opts_7,
  MR_Word FieldVarName_8,
  MR_Word Type_9,
  MR_Word InitializerSize_10)
{
  {
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_7, Type_9);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_3_p_0(FieldVarName_8);
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_7, Type_9, InitializerSize_10);
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
