/*
** Automatically generated from `mlds_to_cs_export.m'
** by the Mercury compiler,
** version rotd-2018-09-05
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


// :- module ml_backend.mlds_to_cs_export.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_export__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_export.mih"


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
#include "backend_libs.foreign.mih"
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
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_data.mih"
#include "ml_backend.mlds_to_cs_func.mih"
#include "ml_backend.mlds_to_cs_name.mih"
#include "ml_backend.mlds_to_cs_type.mih"
#include "ml_backend.mlds_to_cs_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__IntroducedFrom__pred__output_export_for_csharp__73__1_2_p_0(
  MR_Word Lang_10,
  MR_Word HeadVar__2_36);

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_constant_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word MLDS_Type_9,
  MR_Word ExportedConstant_10);

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnum_8);

static void MR_CALL 
ml_backend__mlds_to_cs_export__write_argument_name_for_csharp_3_p_0(
  MR_Word Arg_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__is_out_argument_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__output_export_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__output_export_for_csharp_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_export_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Export_8);

static void MR_CALL 
ml_backend__mlds_to_cs_export__write_export_call_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_export__write_export_call_for_csharp_4_p_0(
  MR_Word QualFuncName_5,
  MR_Word Parameters_6);

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enums_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exports_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_1[2][8];

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_2[1][6];

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_3[2][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_4[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_5[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_6[1][9];




static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_1[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_export__write_export_call_for_csharp_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_export__output_export_for_csharp_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_5[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__IntroducedFrom__pred__output_export_for_csharp__73__1_2_p_0(
  MR_Word Lang_10,
  MR_Word HeadVar__2_36)
{
  {
    MR_bool succeeded = (Lang_10 == HeadVar__2_36);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_constant_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word MLDS_Type_9,
  MR_Word ExportedConstant_10)
{
  {
    MR_String Name_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), ExportedConstant_10, (MR_Integer) 0))));
    MR_Word Initializer_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedConstant_10, (MR_Integer) 1))));

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "public static readonly ");
    ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_7, MLDS_Type_9);
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__io__write_string_3_p_0(Name_12);
    mercury__io__write_string_3_p_0((MR_String) " = ");
    ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_5_p_0(Info_7, Initializer_13, (MR_Word) ((MR_Unsigned) 0U));
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_export__output_exported_enum_constant_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnum_8)
{
  {
    MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word TypeCtor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 2))));
    MR_Word ExportedConstants_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 3))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 0)));

    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ClassName_14;
          MR_Integer ClassArity_15;
          MR_Word ClassId_16;
          MR_Word MLDS_Type_17;
          MR_Word Var_21;
          MR_Box conv0_STATE_VARIABLE_IO_19;

          ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_12, &ClassName_14, &ClassArity_15);
          {
            ClassId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClassId_16, 0) = ((MR_Box) (ClassName_14));
            MR_hl_field(MR_mktag(0), ClassId_16, 1) = ((MR_Box) (ClassArity_15));
            MR_hl_field(MR_mktag(0), ClassId_16, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
          }
          MLDS_Type_17 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_16)));
          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Info_6));
            MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (Indent_7));
            MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (MLDS_Type_17));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, ExportedConstants_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19);
        }
        break;
      case (MR_Integer) 3:
        {
        }
        break;
      case (MR_Integer) 2:
        {
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__write_argument_name_for_csharp_3_p_0(
  MR_Word Arg_4)
{
  {
    MR_bool succeeded;
    MR_Word Name_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 0))));
    MR_Word Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 1))));

    succeeded = ((((MR_tag((MR_Word) Type_7)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0))) == (MR_Integer) 6)));
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "out ");
    }
    ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_3_p_0(Name_6);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__is_out_argument_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Type_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))) == (MR_Integer) 6)));
    if (succeeded)
    {
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__output_export_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_cs_export__is_out_argument_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__output_export_for_csharp_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_cs_export__IntroducedFrom__pred__output_export_for_csharp__73__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_export_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Export_8)
{
  {
    MR_bool succeeded;
    MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_String ExportName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 1))));
    MR_Word MLDS_Name_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 2))));
    MR_Word MLDS_Signature_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 3))));
    MR_Word Parameters_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 0))));
    MR_Word ReturnTypes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 1))));
    MR_Word OutArgs_22;
    MR_Word InArgs_23;
    MR_Word RestOutArgs_24;
    MR_Word Var_33;
    MR_Integer Var_52;
    MR_Integer Var_59;
    MR_Word Var_71;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 0)));

    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (ml_backend__mlds_to_cs_export__output_export_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Lang_10));
      MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140ml_backend.mlds_to_cs_export.output_export_for_csharp\'/5", (MR_String) "foreign_export for language other than C#.");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "public static ");
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    if ((ReturnTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
    else
    {
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 1))));
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 0))));

      if ((Var_79 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_6, Var_80);
        mercury__io__write_string_3_p_0((MR_String) " ");
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_export.output_export_for_csharp\'/5", (MR_String) "multiple return values in export method");
          return;
        }
      }
    }
    mercury__io__write_string_3_p_0(ExportName_11);
    Var_52 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs_func__output_params_for_csharp_5_p_0(Info_6, Var_52, Parameters_16);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    Var_59 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_59);
    mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_cs_export_scalar_common_3[1]), Parameters_16, &OutArgs_22, &InArgs_23);
    if ((ReturnTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((OutArgs_22 == (MR_Word) ((MR_Unsigned) 0U)))
        RestOutArgs_24 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word FirstOutArg_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutArgs_22, (MR_Integer) 0))));
        MR_Word FirstOutArgName_26;

        RestOutArgs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutArgs_22, (MR_Integer) 1))));
        FirstOutArgName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstOutArg_25, (MR_Integer) 0))));
        ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_3_p_0(FirstOutArgName_26);
        mercury__io__write_string_3_p_0((MR_String) " = ");
      }
    else
    {
      MR_Word RetTypeB_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0((MR_String) "return (");
      ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_6, RetTypeB_29);
      mercury__io__write_string_3_p_0((MR_String) ") ");
      RestOutArgs_24 = OutArgs_22;
    }
    Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), InArgs_23, RestOutArgs_24);
    ml_backend__mlds_to_cs_export__write_export_call_for_csharp_4_p_0(MLDS_Name_12, Var_71);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__write_export_call_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_export__write_argument_name_for_csharp_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__write_export_call_for_csharp_4_p_0(
  MR_Word QualFuncName_5,
  MR_Word Parameters_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_5, (MR_Integer) 0))));
    MR_Word FuncName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_5, (MR_Integer) 1))));

    ml_backend__mlds_to_cs_name__output_qual_name_prefix_cs_4_p_0(ModuleName_8, (MR_Integer) 0);
    ml_backend__mlds_to_cs_name__output_function_name_for_csharp_3_p_0(FuncName_9);
    mercury__io__write_char_3_p_0((MR_Char) 40);
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Parameters_6, (MR_String) ", ", (MR_Word) (&ml_backend__mlds_to_cs_export_scalar_common_3[0]));
    mercury__io__write_string_3_p_0((MR_String) ");\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enums_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enums_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnums_8)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_1[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs_export__output_exported_enums_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Indent_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, ExportedEnums_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exports_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_export__output_export_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_export__output_exports_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Exports_8)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs_export__output_exports_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Indent_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, Exports_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

void mercury__ml_backend__mlds_to_cs_export__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_export__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_cs_export__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_export__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_export.
