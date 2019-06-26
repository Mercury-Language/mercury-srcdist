/*
** Automatically generated from `mlds_to_c_global.m'
** by the Mercury compiler,
** version rotd-2019-06-26
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


// :- module ml_backend.mlds_to_c_global.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_c_global__init
ENDINIT
*/

#include "ml_backend.mlds_to_c_global.mih"


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
#include "backend_libs.c_util.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_class.mih"
#include "ml_backend.mlds_to_c_data.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_stmt.mih"
#include "ml_backend.mlds_to_c_type.mih"
#include "ml_backend.mlds_to_c_util.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_c_global__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_alloc_id_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0;

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defn_6_p_0(
  MR_Word _Opts_7,
  MR_Integer Indent_8,
  MR_Word MLDS_ModuleName_9,
  MR_Word HeadVar__4_4);

static void MR_CALL 
ml_backend__mlds_to_c_global__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_100_101_102_110_95_95_91_49_93_95_48_6_p_0(
  MR_Integer Indent_8,
  MR_Word MLDS_ModuleName_9,
  MR_Word HeadVar__4_4);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_cell_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word Initializer_10,
  MR_Integer STATE_VARIABLE_RowNum_0_15,
  MR_Integer * STATE_VARIABLE_RowNum_16);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_struct_field_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word FieldType_10,
  MR_Integer Num_11,
  MR_Integer * HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_defn_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word Separate_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word GlobalVarDefn_12);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_decl_7_p_0(
  MR_Word Opts_8,
  MR_Word MLDS_ModuleName_9,
  MR_Word GlobalVarName_10,
  MR_Word Type_11,
  MR_Word InitializerSize_12);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_decl_opts_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word MLDS_ModuleName_9,
  MR_Word GlobalVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defn_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_String MangledModuleName_9,
  MR_Word HeadVar__4_4);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_type_and_name_8_p_0(
  MR_Word Opts_9,
  MR_String MangledModuleName_10,
  MR_Integer TypeRawNum_11,
  MR_Word Type_12,
  MR_Word InitArraySize_13,
  MR_Integer NumRows_14);


static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_1[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_2[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_3[2][10];

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_4[1][9];




static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_2[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_3[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_global__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_alloc_id_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_c_global__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_alloc_id_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0)
  }
};

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defn_6_p_0(
  MR_Word _Opts_7,
  MR_Integer Indent_8,
  MR_Word MLDS_ModuleName_9,
  MR_Word HeadVar__4_4)
{
  ml_backend__mlds_to_c_global__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_100_101_102_110_95_95_91_49_93_95_48_6_p_0(Indent_8, MLDS_ModuleName_9, HeadVar__4_4);
}

static void MR_CALL 
ml_backend__mlds_to_c_global__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_100_101_102_110_95_95_91_49_93_95_48_6_p_0(
  MR_Integer Indent_8,
  MR_Word MLDS_ModuleName_9,
  MR_Word HeadVar__4_4)
{
  {
    MR_Word AllocData_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word FuncName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_11, (MR_Integer) 0))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_11, (MR_Integer) 1))));
    MR_String Type_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), AllocData_11, (MR_Integer) 2))));
    MR_Integer Size_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), AllocData_11, (MR_Integer) 3))));
    MR_Word QualFuncName_17;
    MR_String FileName_18;
    MR_Integer LineNumber_19;

    {
      QualFuncName_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), QualFuncName_17, 0) = ((MR_Box) (MLDS_ModuleName_9));
      MR_hl_field(MR_mktag(0), QualFuncName_17, 1) = ((MR_Box) (FuncName_13));
    }
    mercury__term__context_file_2_p_0(Context_14, &FileName_18);
    mercury__term__context_line_2_p_0(Context_14, &LineNumber_19);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "{ ");
    ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_3_p_0(QualFuncName_17);
    mercury__io__write_string_3_p_0((MR_String) ", \"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(FileName_18);
    mercury__io__write_string_3_p_0((MR_String) "\", ");
    mercury__io__write_int_3_p_0(LineNumber_19);
    mercury__io__write_string_3_p_0((MR_String) ", \"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(Type_15);
    mercury__io__write_string_3_p_0((MR_String) "\", ");
    mercury__io__write_int_3_p_0(Size_16);
    mercury__io__write_string_3_p_0((MR_String) "},\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_cell_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word Initializer_10,
  MR_Integer STATE_VARIABLE_RowNum_0_15,
  MR_Integer * STATE_VARIABLE_RowNum_16)
{
  {
    MR_bool succeeded;
    MR_Word Var_25;
    MR_Word Var_26;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    mercury__io__write_string_3_p_0((MR_String) "/* row ");
    mercury__io__write_int_3_p_0(STATE_VARIABLE_RowNum_0_15);
    mercury__io__write_string_3_p_0((MR_String) " */");
    succeeded = ((MR_tag((MR_Word) Initializer_10)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_10, (MR_Integer) 1))));
      succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
        succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
    else
      mercury__io__nl_2_p_0();
    *STATE_VARIABLE_RowNum_16 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RowNum_0_15 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_c_data__mlds_output_initializer_body_5_p_0(Opts_8, Indent_9, Initializer_10);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_struct_field_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word FieldType_10,
  MR_Integer Num_11,
  MR_Integer * HeadVar__5_5)
{
  {
    MR_bool succeeded;
    MR_String Var_29;
    MR_String TypeName_13;

    *HeadVar__5_5 = (MR_Integer) ((MR_Unsigned) Num_11 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    if ((FieldType_10 == (MR_Word) ((MR_Unsigned) 4U)))
    {
      TypeName_13 = (MR_String) "MR_Float_Aligned";
      succeeded = MR_TRUE;
    }
    else
    if (((((MR_tag((MR_Word) FieldType_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldType_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
    {
      MR_Word IntType_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FieldType_10, (MR_Integer) 1))) & (MR_Integer) 15);

      switch (IntType_14) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 8:
          {
            TypeName_13 = (MR_String) "MR_Int64Aligned";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            TypeName_13 = (MR_String) "MR_Uint64Aligned";
            succeeded = MR_TRUE;
          }
          break;
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      mercury__io__write_string_3_p_0(TypeName_13);
    else
      ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_8, FieldType_10);
    mercury__io__write_string_3_p_0((MR_String) " f");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), Num_11, &Var_29);
    mercury__io__write_string_3_p_0(Var_29);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_defns_7_p_0(
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
      MR_Word GlobalVarDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word GlobalVarDefns_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__5_5;

      ml_backend__mlds_to_c_global__mlds_output_global_var_defn_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, GlobalVarDefn_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = GlobalVarDefns_20;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_defn_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word Separate_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word GlobalVarDefn_12)
{
  {
    MR_bool succeeded;
    MR_Word GlobalVarName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_12, (MR_Integer) 0))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_12, (MR_Integer) 1))));
    MR_Word Flags_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_12, (MR_Integer) 2))));
    MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_12, (MR_Integer) 3))));
    MR_Word Initializer_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_12, (MR_Integer) 4))));
    MR_Word GCStmt_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_12, (MR_Integer) 5))));
    MR_Word Access_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_16, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ShouldModuleQual_22;
    MR_Word Var_29;
    MR_Word Var_34;
    MR_Word Access_61;
    MR_Word Constness_62;

    ShouldModuleQual_22 = ml_backend__mlds_to_c_name__should_module_qualify_global_var_name_1_f_0(GlobalVarName_14);
    succeeded = (Access_20 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (ShouldModuleQual_22 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) GlobalVarName_14)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_global.mlds_output_global_var_defn\'/7", (MR_String) "whole-program visible global var is not module qualified");
        return;
      }
    }
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
    Var_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_29, Context_15);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    Access_61 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_16, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    Constness_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_16, (MR_Integer) 0))) & (MR_Integer) 1);
    switch (Access_61) {
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
    switch (Constness_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "const ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    Var_34 = ml_backend__mlds__get_initializer_array_size_1_f_0(Initializer_18);
    ml_backend__mlds_to_c_global__mlds_output_global_var_decl_7_p_0(Opts_8, MLDS_ModuleName_11, GlobalVarName_14, Type_17, Var_34);
    ml_backend__mlds_to_c_data__mlds_output_initializer_5_p_0(Opts_8, Type_17, Initializer_18);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
    ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_6_p_0(Opts_8, Indent_9, GCStmt_19, (MR_String) "");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_decl_7_p_0(
  MR_Word Opts_8,
  MR_Word MLDS_ModuleName_9,
  MR_Word GlobalVarName_10,
  MR_Word Type_11,
  MR_Word InitializerSize_12)
{
  {
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_8, Type_11);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_4_p_0(MLDS_ModuleName_9, GlobalVarName_10);
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_8, Type_11, InitializerSize_12);
  }
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_decls_6_p_0(
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
      MR_Word GlobalVarDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word GlobalVarDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__4_4;

      mercury__io__nl_2_p_0();
      ml_backend__mlds_to_c_global__mlds_output_global_var_decl_opts_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, GlobalVarDefn_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = GlobalVarDefns_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_decl_opts_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word MLDS_ModuleName_9,
  MR_Word GlobalVarDefn_10)
{
  {
    MR_Word GlobalVarName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 0))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 1))));
    MR_Word Flags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 2))));
    MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 3))));
    MR_Word Initializer_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 4))));
    MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
    MR_Word Var_25;
    MR_Word Access_49;
    MR_Word Constness_50;

    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_20, Context_13);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    Access_49 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    Constness_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))) & (MR_Integer) 1);
    switch (Access_49) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "static ");
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "extern ");
        }
        break;
    }
    switch (Constness_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "const ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    Var_25 = ml_backend__mlds__get_initializer_array_size_1_f_0(Initializer_16);
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_7, Type_15);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_4_p_0(MLDS_ModuleName_9, GlobalVarName_12);
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_7, Type_15, Var_25);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_global__mlds_output_alloc_site_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word MLDS_ModuleName_9,
  MR_Word AllocSites_10)
{
  if (!((AllocSites_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer NumAllocSites_14;
    MR_Word Var_23;
    MR_Integer Var_25;
    MR_String Var_38;
    MR_Box conv0_STATE_VARIABLE_IO_24_24;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_1[0]), AllocSites_10, &NumAllocSites_14);
    mercury__io__write_string_3_p_0((MR_String) "static MR_AllocSiteInfo MR_alloc_sites[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumAllocSites_14, &Var_38);
    mercury__io__write_string_3_p_0(Var_38);
    mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    Var_25 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_c_global_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Opts_7));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (MLDS_ModuleName_9));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, AllocSites_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_24_24);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_decls_4_p_0(
  MR_Integer Indent_5,
  MR_Word AllocSites_6)
{
  if (!((AllocSites_6 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer NumAllocSites_10;
    MR_String Var_23;

    mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_1[0]), AllocSites_6, &NumAllocSites_10);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "static MR_AllocSiteInfo MR_alloc_sites[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumAllocSites_10, &Var_23);
    mercury__io__write_string_3_p_0(Var_23);
    mercury__io__write_string_3_p_0((MR_String) "];\n");
  }
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defns_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CellGroup_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word CellGroups_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__4_4;

      ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defn_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, CellGroup_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = CellGroups_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_RowNum_16;

    ml_backend__mlds_to_c_global__mlds_output_cell_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RowNum_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RowNum_16));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defn_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_String MangledModuleName_9,
  MR_Word HeadVar__4_4)
{
  {
    MR_Word TypeNum_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word CellGroup_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
    MR_Integer TypeRawNum_13 = (MR_Integer) (TypeNum_10);
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_11, (MR_Integer) 0))));
    MR_Word RowCords_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_11, (MR_Integer) 4))));
    MR_Word Rows_19;
    MR_Integer NumRows_20;
    MR_Word Var_41;
    MR_Integer Var_44;
    MR_String Var_62;
    MR_String Var_72;
    MR_Box conv2_Var_21;
    MR_Box conv1_STATE_VARIABLE_IO_43_43;

    Rows_19 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowCords_18);
    mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Rows_19, &NumRows_20);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "\nstatic /* final */ const ");
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_7, Type_14);
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__io__write_string_3_p_0(MangledModuleName_9);
    mercury__io__write_string_3_p_0((MR_String) "_vector_common_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_13, &Var_62);
    mercury__io__write_string_3_p_0(Var_62);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumRows_20, &Var_72);
    mercury__io__write_string_3_p_0(Var_72);
    mercury__io__write_string_3_p_0((MR_String) "]");
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_7, Type_14, (MR_Word) ((MR_Unsigned) 0U));
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    Var_44 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__mlds_to_c_global_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defn_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Opts_7));
      MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (Var_44));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_41, Rows_19, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_43_43);
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_decls_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_String HeadVar__4_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CellGroup_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word CellGroups_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word TypeNum_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_19, (MR_Integer) 0))));
      MR_Word CellGroup_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_19, (MR_Integer) 1))));
      MR_Integer TypeRawNum_35 = (MR_Integer) (TypeNum_32);
      MR_Word Type_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_33, (MR_Integer) 0))));
      MR_Word ClassDefn_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_33, (MR_Integer) 1))));
      MR_Word Rows_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_33, (MR_Integer) 4))));
      MR_Integer NumRows_41;
      MR_String Var_67;
      MR_String Var_77;
      MR_Word next_value_of_HeadVar__5_5;

      ml_backend__mlds_to_c_class__mlds_output_class_defn_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ClassDefn_37);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(HeadVar__2_2);
      mercury__io__write_string_3_p_0((MR_String) "\nstatic /* final */ const ");
      ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(HeadVar__1_1, Type_36);
      NumRows_41 = mercury__cord__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Rows_40);
      mercury__io__write_string_3_p_0((MR_String) " ");
      mercury__io__write_string_3_p_0(HeadVar__4_4);
      mercury__io__write_string_3_p_0((MR_String) "_vector_common_");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_35, &Var_67);
      mercury__io__write_string_3_p_0(Var_67);
      mercury__io__write_string_3_p_0((MR_String) "[");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumRows_41, &Var_77);
      mercury__io__write_string_3_p_0(Var_77);
      mercury__io__write_string_3_p_0((MR_String) "]");
      ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(HeadVar__1_1, Type_36, (MR_Word) ((MR_Unsigned) 0U));
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = CellGroups_20;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_RowNum_16;

    ml_backend__mlds_to_c_global__mlds_output_cell_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RowNum_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RowNum_16));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_defns_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CellGroup_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word CellGroups_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word TypeNum_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_16, (MR_Integer) 0))));
      MR_Word CellGroup_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_16, (MR_Integer) 1))));
      MR_Integer TypeRawNum_31 = (MR_Integer) (TypeNum_28);
      MR_Word Type_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_29, (MR_Integer) 0))));
      MR_Word InitArraySize_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_29, (MR_Integer) 1))));
      MR_Word RowCords_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_29, (MR_Integer) 4))));
      MR_Word Rows_37;
      MR_Integer NumRows_38;
      MR_Word Var_46;
      MR_Integer Var_49;
      MR_Box conv2_Var_39;
      MR_Box conv1_STATE_VARIABLE_IO_32_48;
      MR_Word next_value_of_HeadVar__4_4;

      Rows_37 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowCords_36);
      mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Rows_37, &NumRows_38);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(HeadVar__2_2);
      mercury__io__write_string_3_p_0((MR_String) "\nstatic /* final */ const ");
      ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_type_and_name_8_p_0(HeadVar__1_1, HeadVar__3_3, TypeRawNum_31, Type_32, InitArraySize_33, NumRows_38);
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
      Var_49 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) (MR_Integer) 1);
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&ml_backend__mlds_to_c_global_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_defns_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (Var_49));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, Rows_37, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_39, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_32_48);
      mercury__io__write_string_3_p_0((MR_String) "};\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = CellGroups_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__5_5;

    ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_struct_field_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decls_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CellGroup_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word CellGroups_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word TypeNum_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_16, (MR_Integer) 0))));
      MR_Word CellGroup_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_16, (MR_Integer) 1))));
      MR_Integer TypeRawNum_31 = (MR_Integer) (TypeNum_28);
      MR_Word Type_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_29, (MR_Integer) 0))));
      MR_Word InitArraySize_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_29, (MR_Integer) 1))));
      MR_Word Rows_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_29, (MR_Integer) 4))));
      MR_Integer NumRows_38;
      MR_Word ElemTypes_37;
      MR_Word next_value_of_HeadVar__4_4;

      succeeded = ((((MR_tag((MR_Word) Type_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_32, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
        ElemTypes_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_32, (MR_Integer) 1))));
        {
          MR_Word Var_64;
          MR_Integer Var_67;
          MR_String Var_87;
          MR_Box conv2_Var_55;
          MR_Box conv1_STATE_VARIABLE_IO_27_66;

          backend_libs__c_util__output_pragma_pack_push_2_p_0();
          mercury__io__write_string_3_p_0((MR_String) "struct ");
          mercury__io__write_string_3_p_0(HeadVar__3_3);
          mercury__io__write_string_3_p_0((MR_String) "_scalar_cell_group_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_31, &Var_87);
          mercury__io__write_string_3_p_0(Var_87);
          mercury__io__write_string_3_p_0((MR_String) " {\n");
          Var_67 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) (MR_Integer) 1);
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&ml_backend__mlds_to_c_global_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decls_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (HeadVar__1_1));
            MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (Var_67));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, ElemTypes_37, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_55, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27_66);
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(HeadVar__2_2);
          mercury__io__write_string_3_p_0((MR_String) "};\n");
          backend_libs__c_util__output_pragma_pack_pop_2_p_0();
        }
      }
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(HeadVar__2_2);
      mercury__io__write_string_3_p_0((MR_String) "\nstatic /* final */ const ");
      NumRows_38 = mercury__cord__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Rows_36);
      ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_type_and_name_8_p_0(HeadVar__1_1, HeadVar__3_3, TypeRawNum_31, Type_32, InitArraySize_33, NumRows_38);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = CellGroups_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_type_and_name_8_p_0(
  MR_Word Opts_9,
  MR_String MangledModuleName_10,
  MR_Integer TypeRawNum_11,
  MR_Word Type_12,
  MR_Word InitArraySize_13,
  MR_Integer NumRows_14)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Type_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_12, (MR_Integer) 0)))) == (MR_Integer) 6)));
    MR_String Var_56;
    MR_String Var_66;

    if (succeeded)
    {
      {
        MR_String Var_43;

        mercury__io__write_string_3_p_0((MR_String) "struct ");
        mercury__io__write_string_3_p_0(MangledModuleName_10);
        mercury__io__write_string_3_p_0((MR_String) "_scalar_cell_group_");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_11, &Var_43);
        mercury__io__write_string_3_p_0(Var_43);
      }
    }
    else
      ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_9, Type_12);
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__io__write_string_3_p_0(MangledModuleName_10);
    mercury__io__write_string_3_p_0((MR_String) "_scalar_common_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_11, &Var_56);
    mercury__io__write_string_3_p_0(Var_56);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumRows_14, &Var_66);
    mercury__io__write_string_3_p_0(Var_66);
    mercury__io__write_string_3_p_0((MR_String) "]");
    succeeded = ((((MR_tag((MR_Word) Type_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_12, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (succeeded)
    {
    }
    if (!(succeeded))
      ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_9, Type_12, InitArraySize_13);
  }
}

void mercury__ml_backend__mlds_to_c_global__init(void)
{
}

void mercury__ml_backend__mlds_to_c_global__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_c_global__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_c_global__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_c_global.
