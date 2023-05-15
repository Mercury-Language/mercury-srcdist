/*
** Automatically generated from `mlds_to_c_func.m'
** by the Mercury compiler,
** version rotd-2023-05-15
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


// :- module ml_backend.mlds_to_c_func.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_c_func__init
ENDINIT
*/

#include "ml_backend.mlds_to_c_func.mih"


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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_stmt.mih"
#include "ml_backend.mlds_to_c_type.mih"
#include "ml_backend.mlds_to_c_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_VA_PseudoTypeInfo_Struct4 ml_backend__mlds_to_c_func____vpti_pred_4__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_functor_desc_maybe_blank_line_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_functor_desc_maybe_blank_line_0_1;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_ordinal_ordered_maybe_blank_line_0[2];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_name_ordered_maybe_blank_line_0[2];

static const MR_Integer ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__functor_number_map_maybe_blank_line_0[2];

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_prefix_suffix_6_p_0(
  MR_Word Opts_7,
  MR_Word GetTypePrefixSuffix_8,
  MR_Word Type_9,
  MR_Word Stream_10);

static void MR_CALL 
ml_backend__mlds_to_c_func__standardize_param_names_4_p_0(
  MR_Word STATE_VARIABLE_Argument_0_11,
  MR_Word * STATE_VARIABLE_Argument_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_13,
  MR_Integer * STATE_VARIABLE_ArgNum_14);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_9_p_0(
  MR_Word Opts_10,
  MR_Word Stream_11,
  MR_Integer Indent_12,
  MR_Word QualFuncName_13,
  MR_Word Context_14,
  MR_Word Params_15,
  MR_Word FunctionBody_16);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_pred_proc_id_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params_list_9_p_0(
  MR_Word Opts_10,
  MR_Word Stream_11,
  MR_Word GetTypePrefixSuffix_12,
  MR_Integer Indent_13,
  MR_Word Context_14,
  MR_Word HeadArg_15,
  MR_Word TailArgs_16);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_func____Unify____maybe_blank_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_func____Compare____maybe_blank_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_1[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_2[2][7];

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_3[3][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_4[1][9];




static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_2[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_3[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_2[1])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_2[1])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_4[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_func____vpti_pred_4__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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



static const MR_VA_PseudoTypeInfo_Struct4 ml_backend__mlds_to_c_func____vpti_pred_4__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_functor_desc_maybe_blank_line_0_0 = {
  (MR_String) "no_blank_line_start",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_functor_desc_maybe_blank_line_0_1 = {
  (MR_String) "blank_line_start",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_ordinal_ordered_maybe_blank_line_0[2] = {
  &ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_functor_desc_maybe_blank_line_0_0,
  &ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_functor_desc_maybe_blank_line_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_name_ordered_maybe_blank_line_0[2] = {
  &ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_functor_desc_maybe_blank_line_0_1,
  &ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_functor_desc_maybe_blank_line_0_0
};

static const MR_Integer ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__functor_number_map_maybe_blank_line_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__type_ctor_info_maybe_blank_line_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_c_func____Unify____maybe_blank_line_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_func____Compare____maybe_blank_line_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_func",
  (MR_String) "maybe_blank_line",
  { ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_name_ordered_maybe_blank_line_0 },
  { ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_ordinal_ordered_maybe_blank_line_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__functor_number_map_maybe_blank_line_0,

};

void MR_CALL 
ml_backend__mlds_to_c_func____Compare____maybe_blank_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_c_func____Unify____maybe_blank_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_prefix_suffix_6_p_0(
  MR_Word Opts_7,
  MR_Word GetTypePrefixSuffix_8,
  MR_Word Type_9,
  MR_Word Stream_10)
{
  MR_String TypePrefix_12;
  MR_String TypeSuffix_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, GetTypePrefixSuffix_8, (MR_Integer) 1))));
  MR_Box conv2_TypePrefix_12;
  MR_Box conv1_TypeSuffix_13;

  func_0(((MR_Box) (GetTypePrefixSuffix_8)), ((MR_Box) (Opts_7)), ((MR_Box) (Type_9)), &conv2_TypePrefix_12, &conv1_TypeSuffix_13);
  TypePrefix_12 = ((MR_String) (conv2_TypePrefix_12));
  TypeSuffix_13 = ((MR_String) (conv1_TypeSuffix_13));
  mercury__io__write_string_4_p_0(Stream_10, TypePrefix_12);
  mercury__io__write_string_4_p_0(Stream_10, TypeSuffix_13);
}

static void MR_CALL 
ml_backend__mlds_to_c_func__standardize_param_names_4_p_0(
  MR_Word STATE_VARIABLE_Argument_0_11,
  MR_Word * STATE_VARIABLE_Argument_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_13,
  MR_Integer * STATE_VARIABLE_ArgNum_14)
{
  MR_Word VarName_7;
  MR_Word Type_9;
  MR_Word GCStmt_10;
  MR_Word Var_15;

  {
    Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_15, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_13));
  }
  {
    VarName_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, VarName_7, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, VarName_7, 1) = ((MR_Box) (Var_15));
  }
  Type_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Argument_0_11, (MR_Integer) 1))));
  GCStmt_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Argument_0_11, (MR_Integer) 2))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Argument_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarName_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (Type_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (GCStmt_10));
  }
  *STATE_VARIABLE_ArgNum_14 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_13 + (MR_Unsigned) 1);
}

void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_defns_8_p_0(
  MR_Word Opts_1,
  MR_Word BlankLine_2,
  MR_Word Stream_3,
  MR_Integer Indent_4,
  MR_Word ModuleName_5,
  MR_Word HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FuncDefn_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word FuncDefns_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__6_6;

      switch (BlankLine_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mercury__io__nl_3_p_0(Stream_3);
          break;
        case (MR_Integer) 0:
          {
          }
          break;
      }
      ml_backend__mlds_to_c_func__mlds_output_function_defn_7_p_0(Opts_1, Stream_3, Indent_4, ModuleName_5, FuncDefn_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = FuncDefns_23;
      BlankLine_2 = (MR_Integer) 1;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_defn_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word ModuleName_11,
  MR_Word FunctionDefn_12)
{
  MR_bool succeeded;
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 1))));
  MR_Word FuncName_15 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 0))));
  MR_Word Flags_16 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 2))));
  MR_Word MaybePredProcId_17 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 3))));
  MR_Word Params_18 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 4))));
  MR_Word MaybeBody_19 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 5))));
  MR_Word QualFuncName_23;
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  MR_Word Access_45;
  MR_Word PerInstance_46;
  MR_Word Comments_47;

  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_26, Context_14);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
  Access_45 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_16, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  PerInstance_46 = ((MR_Unsigned) ((MR_hl_field(0, Flags_16, (MR_Integer) 0))) & (MR_Integer) 1);
  Comments_47 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
  switch (Comments_47) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        switch (Access_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* private: */ ");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* public: */ ");
            break;
        }
        switch (PerInstance_46) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* one_copy */ ");
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
      }
      break;
  }
  succeeded = (Access_45 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (MaybeBody_19 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "static ");
  if (!((MaybePredProcId_17 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word PredProcId_22 = ((MR_Word) ((MR_hl_field(1, MaybePredProcId_17, (MR_Integer) 0))));

    ml_backend__mlds_to_c_func__mlds_output_pred_proc_id_5_p_0(Opts_8, Stream_9, PredProcId_22);
  }
  {
    QualFuncName_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, QualFuncName_23, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, QualFuncName_23, 1) = ((MR_Box) (FuncName_15));
  }
  ml_backend__mlds_to_c_func__mlds_output_func_9_p_0(Opts_8, Stream_9, Indent_10, QualFuncName_23, Context_14, Params_18, MaybeBody_19);
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__3_3;
  MR_String conv0_HeadVar__4_4;

  ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_no_size_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_9_p_0(
  MR_Word Opts_10,
  MR_Word Stream_11,
  MR_Integer Indent_12,
  MR_Word QualFuncName_13,
  MR_Word Context_14,
  MR_Word Params_15,
  MR_Word FunctionBody_16)
{
  MR_bool succeeded;

  ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0(Opts_10, Stream_11, (MR_Word) (&ml_backend__mlds_to_c_func_scalar_common_3[2]), (MR_String) "MR_CALL ", Indent_12, Context_14, QualFuncName_13, Params_15);
  if ((FunctionBody_16 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) ";\n");
  else
  {
    MR_Word BodyStmt_18 = ((MR_Word) ((MR_hl_field(1, FunctionBody_16, (MR_Integer) 0))));
    MR_Word LineNumbers_19;
    MR_Word ProfileTime_20;
    MR_Word Signature_21;
    MR_Word FuncInfo_22;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
    LineNumbers_19 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_10, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    ProfileTime_20 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_10, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
    Signature_21 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_15);
    {
      FuncInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FuncInfo_22, 0) = ((MR_Box) (QualFuncName_13));
      MR_hl_field(0, FuncInfo_22, 1) = ((MR_Box) (Signature_21));
    }
    succeeded = (LineNumbers_19 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (ProfileTime_20 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) BodyStmt_18)) == (MR_Integer) 0);
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
      ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_10, Stream_11, Indent_12, FuncInfo_22, BodyStmt_18);
    else
    {
      MR_Integer Var_42;

      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_11, LineNumbers_19, Context_14);
      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_11, Indent_12);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "{\n");
      switch (ProfileTime_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);

            ml_backend__mlds_to_c_stmt__mlds_output_time_profile_instr_7_p_0(Opts_10, Stream_11, Context_14, Var_39, QualFuncName_13);
          }
          break;
      }
      Var_42 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
      ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_10, Stream_11, Var_42, FuncInfo_22, BodyStmt_18);
      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_11, LineNumbers_19, Context_14);
      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_11, Indent_12);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "}\n");
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decls_7_p_0(
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
      MR_Word FuncDefn_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word FuncDefns_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__5_5;

      mercury__io__nl_3_p_0(Stream_2);
      ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_7_p_0(Opts_1, Stream_2, Indent_3, ModuleName_4, FuncDefn_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = FuncDefns_20;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__3_3;
  MR_String conv0_HeadVar__4_4;

  ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_no_size_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word ModuleName_11,
  MR_Word FunctionDefn_12)
{
  MR_bool succeeded;
  MR_Word FuncName_14 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 0))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 1))));
  MR_Word Flags_16 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 2))));
  MR_Word MaybePredProcId_17 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 3))));
  MR_Word Params_18 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 4))));
  MR_Word MaybeBody_19 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 5))));
  MR_Word QualFuncName_22;
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  MR_Word Access_47;
  MR_Word PerInstance_48;
  MR_Word Comments_49;

  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_26, Context_15);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
  Access_47 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_16, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  PerInstance_48 = ((MR_Unsigned) ((MR_hl_field(0, Flags_16, (MR_Integer) 0))) & (MR_Integer) 1);
  Comments_49 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
  switch (Comments_49) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        switch (Access_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* private: */ ");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* public: */ ");
            break;
        }
        switch (PerInstance_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* one_copy */ ");
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
      }
      break;
  }
  succeeded = (Access_47 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (MaybeBody_19 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "static ");
  {
    QualFuncName_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, QualFuncName_22, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, QualFuncName_22, 1) = ((MR_Box) (FuncName_14));
  }
  if (!((MaybePredProcId_17 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word PredProcId_23 = ((MR_Word) ((MR_hl_field(1, MaybePredProcId_17, (MR_Integer) 0))));

    ml_backend__mlds_to_c_func__mlds_output_pred_proc_id_5_p_0(Opts_8, Stream_9, PredProcId_23);
  }
  ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0(Opts_8, Stream_9, (MR_Word) (&ml_backend__mlds_to_c_func_scalar_common_3[1]), (MR_String) "MR_CALL ", Indent_10, Context_15, QualFuncName_22, Params_18);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_pred_proc_id_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_3)
{
  MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word Comments_11 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_6, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);

  switch (Comments_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_18;
        MR_Integer Var_21;
        MR_String Var_40;
        MR_String Var_50;

        Var_18 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_8);
        Var_21 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_9);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/* pred_id: ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_func_scalar_common_1[0]), Var_18, &Var_40);
        mercury__io__write_string_4_p_0(Stream_7, Var_40);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", proc_id: ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_func_scalar_common_1[0]), Var_21, &Var_50);
        mercury__io__write_string_4_p_0(Stream_7, Var_50);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " */ ");
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_func__mlds_output_prefix_suffix_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Argument_12;
  MR_Integer conv0_STATE_VARIABLE_ArgNum_14;

  ml_backend__mlds_to_c_func__standardize_param_names_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Argument_12, ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ArgNum_14);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Argument_12));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ArgNum_14));
}

void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0(
  MR_Word Opts_11,
  MR_Word Stream_12,
  MR_Word GetTypePrefixSuffix_13,
  MR_String CallingConvention_14,
  MR_Integer Indent_15,
  MR_Word Context_16,
  MR_Word QualFuncName_17,
  MR_Word Signature_18)
{
  MR_Word Parameters0_20 = ((MR_Word) ((MR_hl_field(0, Signature_18, (MR_Integer) 0))));
  MR_Word ReturnTypes_21 = ((MR_Word) ((MR_hl_field(0, Signature_18, (MR_Integer) 1))));
  MR_Word StdDecl_22 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_11, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
  MR_Word Parameters_23;
  MR_String IndentStr_25;
  MR_String QualFuncNameStr_26;

  switch (StdDecl_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Parameters_23 = Parameters0_20;
      break;
    case (MR_Integer) 1:
      {
        MR_Box conv2_Var_24;

        mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds_to_c_func_scalar_common_3[0]), Parameters0_20, &Parameters_23, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_24);
      }
      break;
  }
  IndentStr_25 = libs__indent__indent2_string_1_f_0(Indent_15);
  QualFuncNameStr_26 = ml_backend__mlds_to_c_name__fully_qualified_function_name_to_string_for_c_1_f_0(QualFuncName_17);
  if ((ReturnTypes_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_12, IndentStr_25);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "void ");
    mercury__io__write_string_4_p_0(Stream_12, CallingConvention_14);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_12, IndentStr_25);
    mercury__io__write_string_4_p_0(Stream_12, QualFuncNameStr_26);
    if ((Parameters_23 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "(void)");
    else
    {
      MR_Word HeadArg_122 = ((MR_Word) ((MR_hl_field(1, Parameters_23, (MR_Integer) 0))));
      MR_Word TailArgs_123 = ((MR_Word) ((MR_hl_field(1, Parameters_23, (MR_Integer) 1))));
      MR_Integer Var_127;

      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "(\n");
      Var_127 = (MR_Integer) ((MR_Unsigned) Indent_15 + (MR_Unsigned) 1);
      ml_backend__mlds_to_c_func__mlds_output_params_list_9_p_0(Opts_11, Stream_12, GetTypePrefixSuffix_13, Var_127, Context_16, HeadArg_122, TailArgs_123);
      mercury__io__write_char_4_p_0(Stream_12, (MR_Char) 41);
    }
  }
  else
  {
    MR_Word Var_106 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_21, (MR_Integer) 1))));
    MR_Word Var_107 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_21, (MR_Integer) 0))));

    if ((Var_106 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String ReturnTypePrefix_28;
      MR_String ReturnTypeSuffix_29;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, GetTypePrefixSuffix_13, (MR_Integer) 1))));
      MR_Box conv5_ReturnTypePrefix_28;
      MR_Box conv4_ReturnTypeSuffix_29;

      func_3(((MR_Box) (GetTypePrefixSuffix_13)), ((MR_Box) (Opts_11)), ((MR_Box) (Var_107)), &conv5_ReturnTypePrefix_28, &conv4_ReturnTypeSuffix_29);
      ReturnTypePrefix_28 = ((MR_String) (conv5_ReturnTypePrefix_28));
      ReturnTypeSuffix_29 = ((MR_String) (conv4_ReturnTypeSuffix_29));
      mercury__io__write_string_4_p_0(Stream_12, IndentStr_25);
      mercury__io__write_string_4_p_0(Stream_12, ReturnTypePrefix_28);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) " ");
      mercury__io__write_string_4_p_0(Stream_12, CallingConvention_14);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_12, IndentStr_25);
      mercury__io__write_string_4_p_0(Stream_12, QualFuncNameStr_26);
      if ((Parameters_23 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "(void)");
      else
      {
        MR_Word HeadArg_131 = ((MR_Word) ((MR_hl_field(1, Parameters_23, (MR_Integer) 0))));
        MR_Word TailArgs_132 = ((MR_Word) ((MR_hl_field(1, Parameters_23, (MR_Integer) 1))));
        MR_Integer Var_136;

        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "(\n");
        Var_136 = (MR_Integer) ((MR_Unsigned) Indent_15 + (MR_Unsigned) 1);
        ml_backend__mlds_to_c_func__mlds_output_params_list_9_p_0(Opts_11, Stream_12, GetTypePrefixSuffix_13, Var_136, Context_16, HeadArg_131, TailArgs_132);
        mercury__io__write_char_4_p_0(Stream_12, (MR_Char) 41);
      }
      mercury__io__write_string_4_p_0(Stream_12, ReturnTypeSuffix_29);
    }
    else
    {
      MR_Word Var_72;

      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_72, 0) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_4[0]));
        MR_hl_field(0, Var_72, 1) = ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0_2));
        MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_72, 3) = ((MR_Box) (Opts_11));
        MR_hl_field(0, Var_72, 4) = ((MR_Box) (GetTypePrefixSuffix_13));
      }
      ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), Stream_12, Var_72, ReturnTypes_21);
      mercury__io__write_string_4_p_0(Stream_12, IndentStr_25);
      mercury__io__write_string_4_p_0(Stream_12, QualFuncNameStr_26);
      if ((Parameters_23 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "(void)");
      else
      {
        MR_Word HeadArg_140 = ((MR_Word) ((MR_hl_field(1, Parameters_23, (MR_Integer) 0))));
        MR_Word TailArgs_141 = ((MR_Word) ((MR_hl_field(1, Parameters_23, (MR_Integer) 1))));
        MR_Integer Var_145;

        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "(\n");
        Var_145 = (MR_Integer) ((MR_Unsigned) Indent_15 + (MR_Unsigned) 1);
        ml_backend__mlds_to_c_func__mlds_output_params_list_9_p_0(Opts_11, Stream_12, GetTypePrefixSuffix_13, Var_145, Context_16, HeadArg_140, TailArgs_141);
        mercury__io__write_char_4_p_0(Stream_12, (MR_Char) 41);
      }
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params_list_9_p_0(
  MR_Word Opts_10,
  MR_Word Stream_11,
  MR_Word GetTypePrefixSuffix_12,
  MR_Integer Indent_13,
  MR_Word Context_14,
  MR_Word HeadArg_15,
  MR_Word TailArgs_16)
{
  while (MR_TRUE)
  {
    MR_Word LocalVarName_18 = ((MR_Word) ((MR_hl_field(0, HeadArg_15, (MR_Integer) 0))));
    MR_Word Type_19 = ((MR_Word) ((MR_hl_field(0, HeadArg_15, (MR_Integer) 1))));
    MR_Word GCStmt_20 = ((MR_Word) ((MR_hl_field(0, HeadArg_15, (MR_Integer) 2))));
    MR_String IndentStr_21;
    MR_String TypePrefix_22;
    MR_String TypeSuffix_23;
    MR_String LocalVarNameStr_24;
    MR_Word Var_29;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
    MR_Box conv2_TypePrefix_22;
    MR_Box conv1_TypeSuffix_23;

    // setup for model_det tailcalls optimized into a loop
    ;
    IndentStr_21 = libs__indent__indent2_string_1_f_0(Indent_13);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, GetTypePrefixSuffix_12, (MR_Integer) 1))));
    func_0(((MR_Box) (GetTypePrefixSuffix_12)), ((MR_Box) (Opts_10)), ((MR_Box) (Type_19)), &conv2_TypePrefix_22, &conv1_TypeSuffix_23);
    TypePrefix_22 = ((MR_String) (conv2_TypePrefix_22));
    TypeSuffix_23 = ((MR_String) (conv1_TypeSuffix_23));
    LocalVarNameStr_24 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(LocalVarName_18);
    Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_10, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_11, Var_29, Context_14);
    mercury__io__write_string_4_p_0(Stream_11, IndentStr_21);
    mercury__io__write_string_4_p_0(Stream_11, TypePrefix_22);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_11, LocalVarNameStr_24);
    mercury__io__write_string_4_p_0(Stream_11, TypeSuffix_23);
    ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_7_p_0(Opts_10, Stream_11, Indent_13, GCStmt_20, (MR_String) "\n");
    if (!((TailArgs_16 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadTailArg_25 = ((MR_Word) ((MR_hl_field(1, TailArgs_16, (MR_Integer) 0))));
      MR_Word TailTailArgs_26 = ((MR_Word) ((MR_hl_field(1, TailArgs_16, (MR_Integer) 1))));
      MR_Word next_value_of_HeadArg_15;
      MR_Word next_value_of_TailArgs_16;

      mercury__io__write_string_4_p_0(Stream_11, (MR_String) ",\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadArg_15 = HeadTailArg_25;
      next_value_of_TailArgs_16 = TailTailArgs_26;
      HeadArg_15 = next_value_of_HeadArg_15;
      TailArgs_16 = next_value_of_TailArgs_16;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_func____Unify____maybe_blank_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_c_func____Unify____maybe_blank_line_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_func____Compare____maybe_blank_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_c_func____Compare____maybe_blank_line_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__mlds_to_c_func__init(void)
{
}

void mercury__ml_backend__mlds_to_c_func__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__type_ctor_info_maybe_blank_line_0);
}

void mercury__ml_backend__mlds_to_c_func__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_c_func__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_c_func.
