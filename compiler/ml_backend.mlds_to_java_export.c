/*
** Automatically generated from `mlds_to_java_export.m'
** by the Mercury compiler,
** version rotd-2020-04-06
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


// :- module ml_backend.mlds_to_java_export.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_java_export__init
ENDINIT
*/

#include "ml_backend.mlds_to_java_export.mih"


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
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_java_data.mih"
#include "ml_backend.mlds_to_java_func.mih"
#include "ml_backend.mlds_to_java_name.mih"
#include "ml_backend.mlds_to_java_type.mih"
#include "ml_backend.mlds_to_java_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0_s {
  MR_bool ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__succeeded;
  MR_Word ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__Parameters_16;
  jmp_buf ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__commit_0;
  MR_Word ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__Param_58;
  MR_Word ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__Var_88;
  MR_Box ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__conv0_Param_58;
};


static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__IntroducedFrom__pred__output_export_for_java__77__1_2_p_0(
  MR_Word Lang_10,
  MR_Word HeadVar__2_33);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enum_constant_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word MLDS_Type_9,
  MR_Word ExportedConstant_10);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enum_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enum_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnum_8);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__has_ptr_type_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ml_backend__mlds_to_java_export__assign_ref_output_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Arg_10,
  MR_Integer N_11,
  MR_Integer * HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_java_export__write_argument_name_for_java_3_p_0(
  MR_Word Arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_param_ref_out_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Argument_8);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_5_p_0(
  MR_Word Info0_6,
  MR_Integer Indent_7,
  MR_Word Export_8);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Export_8);

static void MR_CALL 
ml_backend__mlds_to_java_export__write_export_call_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_export__write_export_call_for_java_4_p_0(
  MR_Word QualFuncName_5,
  MR_Word Parameters_6);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_no_ref_out_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_no_ref_out_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Export_8);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enums_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exports_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_1[3][8];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_2[1][6];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_3[3][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_4[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_5[1][10];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_6[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_7[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_8[1][9];




static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_1[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_java_export__output_export_no_ref_out_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_java_export__write_export_call_for_java_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_4[0])),
    ((MR_Box) (ml_backend__mlds_to_java_export__output_export_ref_out_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_7[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__IntroducedFrom__pred__output_export_for_java__77__1_2_p_0(
  MR_Word Lang_10,
  MR_Word HeadVar__2_33)
{
  {
    MR_bool succeeded = (Lang_10 == HeadVar__2_33);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enum_constant_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word MLDS_Type_9,
  MR_Word ExportedConstant_10)
{
  {
    MR_String Name_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), ExportedConstant_10, (MR_Integer) 0))));
    MR_Word Initializer_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedConstant_10, (MR_Integer) 1))));

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "public static final ");
    ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_7, MLDS_Type_9);
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__io__write_string_3_p_0(Name_12);
    mercury__io__write_string_3_p_0((MR_String) " = ");
    ml_backend__mlds_to_java_data__output_initializer_body_for_java_5_p_0(Info_7, Initializer_13, (MR_Word) ((MR_Unsigned) 0U));
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enum_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_export__output_exported_enum_constant_for_java_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enum_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnum_8)
{
  {
    MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word TypeCtor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 2))));
    MR_Word ExportedConstants_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 3))));

    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 3:
        {
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ClassName_14;
          MR_Integer ClassArity_15;
          MR_Word MLDS_Type_16;
          MR_Word Var_19;
          MR_Word Var_21;
          MR_Box conv0_STATE_VARIABLE_IO_18;

          ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_12, &ClassName_14, &ClassArity_15);
          {
            Var_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (ClassName_14));
            MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ClassArity_15));
            MR_hl_field(MR_mktag(0), Var_19, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
          }
          MLDS_Type_16 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_19)));
          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_exported_enum_for_java_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Info_6));
            MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (Indent_7));
            MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (MLDS_Type_16));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, ExportedConstants_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_18);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__has_ptr_type_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    succeeded = ((((MR_tag((MR_Word) Var_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_5, (MR_Integer) 0)))) == (MR_Integer) 7)));
    if (succeeded)
    {
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__assign_ref_output_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Arg_10,
  MR_Integer N_11,
  MR_Integer * HeadVar__5_5)
{
  {
    MR_bool succeeded;
    MR_Word VarName_13;
    MR_Word Type_14;
    MR_String TypeString_17;
    MR_String Var_36;
    MR_Word InnerType_16;

    *HeadVar__5_5 = (MR_Integer) ((MR_Unsigned) N_11 + (MR_Unsigned) 1);
    VarName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 0))));
    Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 1))));
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    ml_backend__mlds_to_java_name__output_local_var_name_for_java_3_p_0(VarName_13);
    succeeded = ((((MR_tag((MR_Word) Type_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_14, (MR_Integer) 0)))) == (MR_Integer) 7)));
    if (succeeded)
    {
      InnerType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_14, (MR_Integer) 1))));
      ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(Info_8, InnerType_16, &TypeString_17);
    }
    else
      ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(Info_8, Type_14, &TypeString_17);
    mercury__io__write_string_3_p_0((MR_String) ".val = (");
    mercury__io__write_string_3_p_0(TypeString_17);
    mercury__io__write_string_3_p_0((MR_String) ") results[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_export_scalar_common_7[0]), N_11, &Var_36);
    mercury__io__write_string_3_p_0(Var_36);
    mercury__io__write_string_3_p_0((MR_String) "];\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__write_argument_name_for_java_3_p_0(
  MR_Word Arg_4)
{
  {
    MR_Word VarName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 0))));

    ml_backend__mlds_to_java_name__output_local_var_name_for_java_3_p_0(VarName_6);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_param_ref_out_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word VarName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Argument_8, (MR_Integer) 0))));
    MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Argument_8, (MR_Integer) 1))));
    MR_Word InnerType_13;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    succeeded = ((((MR_tag((MR_Word) Type_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
    if (succeeded)
    {
      InnerType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_11, (MR_Integer) 1))));
      {
        MR_String InnerTypeString_14;

        ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(Info_6, InnerType_13, &InnerTypeString_14);
        mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.Ref<");
        mercury__io__write_string_3_p_0(InnerTypeString_14);
        mercury__io__write_string_3_p_0((MR_String) "> ");
      }
    }
    else
    {
      ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_6, Type_11);
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    ml_backend__mlds_to_java_name__output_local_var_name_for_java_3_p_0(VarName_10);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_java_export__IntroducedFrom__pred__output_export_for_java__77__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__Param_58 = ((MR_Word) ((env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__conv0_Param_58));
    ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_3(env_ptr);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__Param_58, (MR_Integer) 0))));
      MR_Word Var_87;
      MR_Word Var_86;

      (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__Param_58, (MR_Integer) 1))));
      Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__Param_58, (MR_Integer) 2))));
      (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__Var_88)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__Var_88, (MR_Integer) 0)))) == (MR_Integer) 7)));
      if ((env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__succeeded)
      {
        Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__Var_88, (MR_Integer) 1))));
        ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_2(env_ptr);
      }
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_5(
  void * env_ptr_arg)
{
  {
    struct ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), &(env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__conv0_Param_58, (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__Parameters_16, ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_4, env_ptr);
        (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_5_p_0(
  MR_Word Info0_6,
  MR_Integer Indent_7,
  MR_Word Export_8)
{
  {
    struct ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0_s env;

    {
      MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_String ExportName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 1))));
      MR_Word MLDS_Signature_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 3))));
      MR_Word UnivQTVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 4))));
      MR_Word ReturnTypes_17;
      MR_Word Info_18;
      MR_Word Var_30;
      MR_String Var_49;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_String Var_64;
      MR_Word Var_65;
      MR_Word Var_67;
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 2))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 5))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 0)));
      MR_Word Var_66;
      MR_Word Var_68;
      MR_Unsigned packed_word_1;
      MR_Unsigned packed_word_2;

      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Lang_10));
        MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      mercury__require__expect_3_p_0(Var_30, (MR_String) "predicate \140ml_backend.mlds_to_java_export.output_export_for_java\'/5", (MR_String) "foreign_export for language other than Java.");
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
      mercury__io__write_string_3_p_0((MR_String) "public static ");
      ml_backend__mlds_to_target_util__output_generic_tvars_3_p_0(UnivQTVars_14);
      mercury__io__nl_2_p_0();
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
      (env).ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__Parameters_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 0))));
      ReturnTypes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 1))));
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 0))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 1)));
      Var_60 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      Var_61 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      Var_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 2))));
      Var_64 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 3))));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 4))));
      packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 5)));
      Var_66 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
      Var_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 5))) & (MR_Integer) 3);
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 6))));
      {
        Info_18 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Info_18, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), Info_18, 1) = (MR_Box) (packed_word_1);
        MR_hl_field(MR_mktag(0), Info_18, 2) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), Info_18, 3) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), Info_18, 4) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), Info_18, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) (Var_67)));
        MR_hl_field(MR_mktag(0), Info_18, 6) = ((MR_Box) (UnivQTVars_14));
      }
      if ((ReturnTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_3_p_0((MR_String) "void");
      else
      {
        MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 1))));
        MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 0))));

        if ((Var_81 == (MR_Word) ((MR_Unsigned) 0U)))
          ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_18, Var_82);
        else
          mercury__io__write_string_3_p_0((MR_String) "java.lang.Object []");
      }
      Var_49 = mercury__string__f_43_43_2_f_0((MR_String) " ", ExportName_11);
      mercury__io__write_string_3_p_0(Var_49);
      ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_5(&env);
      if ((env).ml_backend__mlds_to_java_export__output_export_for_java_5_p_0_env_0__succeeded)
        if ((ReturnTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
          ml_backend__mlds_to_java_export__output_export_ref_out_5_p_0(Info_18, Indent_7, Export_8);
        else
        {
          MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 1))));
          MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 0))));

          if ((Var_83 == (MR_Word) ((MR_Unsigned) 0U)))
            ml_backend__mlds_to_java_export__output_export_ref_out_5_p_0(Info_18, Indent_7, Export_8);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_export.output_export_for_java\'/5", (MR_String) "multiple return values");
              return;
            }
        }
      else
        ml_backend__mlds_to_java_export__output_export_no_ref_out_5_p_0(Info_18, Indent_7, Export_8);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_5_p_0_3(
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

    ml_backend__mlds_to_java_export__assign_ref_output_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_export__output_export_param_ref_out_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_java_export__has_ptr_type_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Export_8)
{
  {
    MR_bool succeeded;
    MR_Word QualFuncName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 2))));
    MR_Word MLDS_Signature_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 3))));
    MR_Word Parameters_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 0))));
    MR_Word ReturnTypes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 1))));
    MR_Word RefParams_18;
    MR_Word NonRefParams_19;
    MR_Integer FirstRefArg_20;
    MR_Integer Var_31;
    MR_Word Var_41;
    MR_Integer Var_43;
    MR_Box conv2_Var_21;
    MR_Box conv1_STATE_VARIABLE_IO_42_42;

    mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_java_export_scalar_common_3[2]), Parameters_16, &RefParams_18, &NonRefParams_19);
    mercury__io__write_string_3_p_0((MR_String) "(");
    if (!((Parameters_16 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_73;
      MR_Integer Var_75;

      mercury__io__nl_2_p_0();
      Var_75 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
      {
        Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_1[2]));
        MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_export_ref_out_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (Info_6));
        MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) (Var_75));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Parameters_16, (MR_String) ",\n", Var_73);
    }
    mercury__io__write_string_3_p_0((MR_String) ")");
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    Var_31 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_31);
    mercury__io__write_string_3_p_0((MR_String) "java.lang.Object[] results = ");
    ml_backend__mlds_to_java_export__write_export_call_for_java_4_p_0(QualFuncName_12, NonRefParams_19);
    succeeded = (ReturnTypes_17 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      FirstRefArg_20 = (MR_Integer) 0;
    else
    {
      MR_Word Var_37;
      MR_Word Var_38;

      succeeded = (ReturnTypes_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 0))));
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 1))));
        succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 16U));
        if (succeeded)
          succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        FirstRefArg_20 = (MR_Integer) 1;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_export.output_export_ref_out\'/5", (MR_String) "unexpected ReturnTypes");
          return;
        }
    }
    Var_43 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_export_ref_out_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (Var_43));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_41, RefParams_18, ((MR_Box) (FirstRefArg_20)), &conv2_Var_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_42_42);
    switch (FirstRefArg_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_45 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);

          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_45);
          mercury__io__write_string_3_p_0((MR_String) "return ((java.lang.Boolean) results[0]).booleanValue();\n");
        }
        break;
    }
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__write_export_call_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_export__write_argument_name_for_java_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__write_export_call_for_java_4_p_0(
  MR_Word QualFuncName_5,
  MR_Word Parameters_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_5, (MR_Integer) 0))));
    MR_Word FuncName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_5, (MR_Integer) 1))));

    ml_backend__mlds_to_java_name__output_qual_name_prefix_java_4_p_0(ModuleName_8, (MR_Integer) 0);
    ml_backend__mlds_to_java_name__output_function_name_for_java_3_p_0(FuncName_9);
    mercury__io__write_char_3_p_0((MR_Char) 40);
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Parameters_6, (MR_String) ", ", (MR_Word) (&ml_backend__mlds_to_java_export_scalar_common_3[1]));
    mercury__io__write_string_3_p_0((MR_String) ");\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_no_ref_out_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_export__write_argument_name_for_java_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_no_ref_out_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Export_8)
{
  {
    MR_Word QualFuncName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 2))));
    MR_Word MLDS_Signature_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 3))));
    MR_Word Parameters_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 0))));
    MR_Word ReturnTypes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 1))));
    MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
    MR_Integer Var_31;
    MR_Word ModuleName_54;
    MR_Word FuncName_55;

    ml_backend__mlds_to_java_func__output_params_for_java_5_p_0(Info_6, Var_24, Parameters_16);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    Var_31 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_31);
    if (!((ReturnTypes_17 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 1))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 0))));

      if ((Var_47 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_3_p_0((MR_String) "return (");
        ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_6, Var_48);
        mercury__io__write_string_3_p_0((MR_String) ") ");
      }
      else
        mercury__io__write_string_3_p_0((MR_String) "return ");
    }
    ModuleName_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_12, (MR_Integer) 0))));
    FuncName_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_12, (MR_Integer) 1))));
    ml_backend__mlds_to_java_name__output_qual_name_prefix_java_4_p_0(ModuleName_54, (MR_Integer) 0);
    ml_backend__mlds_to_java_name__output_function_name_for_java_3_p_0(FuncName_55);
    mercury__io__write_char_3_p_0((MR_Char) 40);
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Parameters_16, (MR_String) ", ", (MR_Word) (&ml_backend__mlds_to_java_export_scalar_common_3[0]));
    mercury__io__write_string_3_p_0((MR_String) ");\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enums_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_export__output_exported_enum_for_java_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enums_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnums_8)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_1[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_exported_enums_for_java_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Indent_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, ExportedEnums_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exports_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_export__output_export_for_java_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_java_export__output_exports_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Exports_8)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_exports_for_java_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Indent_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, Exports_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

void mercury__ml_backend__mlds_to_java_export__init(void)
{
}

void mercury__ml_backend__mlds_to_java_export__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_java_export__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_java_export__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_java_export.
