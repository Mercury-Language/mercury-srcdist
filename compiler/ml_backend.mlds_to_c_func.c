/*
** Automatically generated from `mlds_to_c_func.m'
** by the Mercury compiler,
** version 22.01.6-beta-2023-04-07
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_VA_PseudoTypeInfo_Struct5 ml_backend__mlds_to_c_func____vpti_pred_5__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_io__type_ctor_info_output_stream_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_functor_desc_maybe_blank_line_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_functor_desc_maybe_blank_line_0_1;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_ordinal_ordered_maybe_blank_line_0[2];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_name_ordered_maybe_blank_line_0[2];

static const MR_Integer ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__functor_number_map_maybe_blank_line_0[2];

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_param_9_p_0(
  MR_Word Opts_10,
  MR_Word OutputPrefix_11,
  MR_Word OutputSuffix_12,
  MR_Integer Indent_13,
  MR_Word Context_14,
  MR_Word Arg_15,
  MR_Word Stream_16);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_prefix_suffix_7_p_0(
  MR_Word Opts_8,
  MR_Word OutputPrefix_9,
  MR_Word OutputSuffix_10,
  MR_Word Value_11,
  MR_Word Stream_12);

static void MR_CALL 
ml_backend__mlds_to_c_func__standardize_param_names_4_p_0(
  MR_Word STATE_VARIABLE_Argument_0_11,
  MR_Word * STATE_VARIABLE_Argument_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_13,
  MR_Integer * STATE_VARIABLE_ArgNum_14);

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
ml_backend__mlds_to_c_func__mlds_output_func_decl_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word QualifiedName_12,
  MR_Word Context_13,
  MR_Word Signature_14);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params_9_p_0(
  MR_Word Opts_10,
  MR_Word Stream_11,
  MR_Word OutputPrefix_12,
  MR_Word OutputSuffix_13,
  MR_Integer Indent_14,
  MR_Word Context_15,
  MR_Word Parameters_16);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0(
  MR_Word Opts_12,
  MR_Word Stream_13,
  MR_Integer Indent_14,
  MR_Word QualFuncName_15,
  MR_Word Context_16,
  MR_String CallingConvention_17,
  MR_Word Signature_18);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_9_p_0(
  MR_Word Opts_10,
  MR_Word Stream_11,
  MR_Integer Indent_14,
  MR_Word Context_15,
  MR_Word Parameters_16);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_flags_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Flags_9,
  MR_Word MaybeBody_10);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_pred_proc_id_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_3);

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

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_2[1][8];

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_3[6][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_4[1][12];

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_5[1][10];

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_6[1][7];




static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_1[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_2[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_3[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_params__ho2_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_params__ho2_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_4[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_func____vpti_pred_5__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_io__type_ctor_info_output_stream_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_func____vpti_pred_5__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_io__type_ctor_info_output_stream_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_func____vpti_pred_5__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_io__type_ctor_info_output_stream_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_func____vpti_pred_5__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_io__type_ctor_info_output_stream_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_VA_PseudoTypeInfo_Struct5 ml_backend__mlds_to_c_func____vpti_pred_5__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_io__type_ctor_info_output_stream_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
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
  {     ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_name_ordered_maybe_blank_line_0 },
  {     ml_backend__mlds_to_c_func__ml_backend__mlds_to_c_func__enum_ordinal_ordered_maybe_blank_line_0 },
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
}

MR_bool MR_CALL 
ml_backend__mlds_to_c_func____Unify____maybe_blank_line_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_param_9_p_0(
  MR_Word Opts_10,
  MR_Word OutputPrefix_11,
  MR_Word OutputSuffix_12,
  MR_Integer Indent_13,
  MR_Word Context_14,
  MR_Word Arg_15,
  MR_Word Stream_16)
{
  {
    MR_Word LocalVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_15, (MR_Integer) 0))));
    MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_15, (MR_Integer) 1))));
    MR_Word GCStmt_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_15, (MR_Integer) 2))));
    MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_10, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_26_26;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_IO_30_30;

    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_16, Var_23, Context_14);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_16, Indent_13);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputPrefix_11, (MR_Integer) 1))));
    func_0(((MR_Box) (OutputPrefix_11)), ((MR_Box) (Opts_10)), ((MR_Box) (Stream_16)), ((MR_Box) (Type_19)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26_26);
    mercury__io__write_char_4_p_0(Stream_16, (MR_Char) 32);
    ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_16, LocalVarName_18);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputSuffix_12, (MR_Integer) 1))));
    func_2(((MR_Box) (OutputSuffix_12)), ((MR_Box) (Opts_10)), ((MR_Box) (Stream_16)), ((MR_Box) (Type_19)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_30_30);
    ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_7_p_0(Opts_10, Stream_16, Indent_13, GCStmt_20, (MR_String) "\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_prefix_suffix_7_p_0(
  MR_Word Opts_8,
  MR_Word OutputPrefix_9,
  MR_Word OutputSuffix_10,
  MR_Word Value_11,
  MR_Word Stream_12)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputPrefix_9, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_IO_16_16;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_IO_15;

    func_0(((MR_Box) (OutputPrefix_9)), ((MR_Box) (Opts_8)), ((MR_Box) (Stream_12)), ((MR_Box) (Value_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputSuffix_10, (MR_Integer) 1))));
    func_2(((MR_Box) (OutputSuffix_10)), ((MR_Box) (Opts_8)), ((MR_Box) (Stream_12)), ((MR_Box) (Value_11)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_15);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__standardize_param_names_4_p_0(
  MR_Word STATE_VARIABLE_Argument_0_11,
  MR_Word * STATE_VARIABLE_Argument_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_13,
  MR_Integer * STATE_VARIABLE_ArgNum_14)
{
  {
    MR_Word VarName_7;
    MR_Word Type_9;
    MR_Word GCStmt_10;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_13));
    }
    {
      VarName_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), VarName_7, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), VarName_7, 1) = ((MR_Box) (Var_15));
    }
    Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Argument_0_11, (MR_Integer) 1))));
    GCStmt_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Argument_0_11, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Argument_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (GCStmt_10));
    }
    *STATE_VARIABLE_ArgNum_14 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_13 + (MR_Unsigned) 1);
  }
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
      MR_Word FuncDefn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word FuncDefns_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
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
  {
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_12, (MR_Integer) 1))));
    MR_Word FuncName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_12, (MR_Integer) 0))));
    MR_Word Flags_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_12, (MR_Integer) 2))));
    MR_Word MaybePredProcId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_12, (MR_Integer) 3))));
    MR_Word Params_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_12, (MR_Integer) 4))));
    MR_Word MaybeBody_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_12, (MR_Integer) 5))));
    MR_Word QualFuncName_23;
    MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_26, Context_14);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
    ml_backend__mlds_to_c_func__mlds_output_function_decl_flags_6_p_0(Opts_8, Stream_9, Flags_16, MaybeBody_19);
    if (!((MaybePredProcId_17 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PredProcId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredProcId_17, (MR_Integer) 0))));

      ml_backend__mlds_to_c_func__mlds_output_pred_proc_id_5_p_0(Opts_8, Stream_9, PredProcId_22);
    }
    {
      QualFuncName_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), QualFuncName_23, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), QualFuncName_23, 1) = ((MR_Box) (FuncName_15));
    }
    ml_backend__mlds_to_c_func__mlds_output_func_9_p_0(Opts_8, Stream_9, Indent_10, QualFuncName_23, Context_14, Params_18, MaybeBody_19);
  }
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
  {
    ml_backend__mlds_to_c_func__mlds_output_func_decl_8_p_0(Opts_10, Stream_11, Indent_12, QualFuncName_13, Context_14, Params_15);
    if ((FunctionBody_16 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) ";\n");
    else
    {
      MR_Word BodyStmt_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctionBody_16, (MR_Integer) 0))));
      MR_Word ProfileTime_19;
      MR_Word Signature_20;
      MR_Word FuncInfo_21;
      MR_Word Var_27;
      MR_Integer Var_35;
      MR_Word Var_38;

      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
      Var_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_10, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_11, Var_27, Context_14);
      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_11, Indent_12);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "{\n");
      ProfileTime_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_10, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
      switch (ProfileTime_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);

            ml_backend__mlds_to_c_stmt__mlds_output_time_profile_instr_7_p_0(Opts_10, Stream_11, Context_14, Var_32, QualFuncName_13);
          }
          break;
      }
      Signature_20 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_15);
      {
        FuncInfo_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FuncInfo_21, 0) = ((MR_Box) (QualFuncName_13));
        MR_hl_field(MR_mktag(0), FuncInfo_21, 1) = ((MR_Box) (Signature_20));
      }
      Var_35 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
      ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_10, Stream_11, Var_35, FuncInfo_21, BodyStmt_18);
      Var_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_10, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_11, Var_38, Context_14);
      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_11, Indent_12);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word QualifiedName_12,
  MR_Word Context_13,
  MR_Word Signature_14)
{
  ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0(Opts_9, Stream_10, Indent_11, QualifiedName_12, Context_13, (MR_String) "MR_CALL ", Signature_14);
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Argument_12;
    MR_Integer conv2_STATE_VARIABLE_ArgNum_14;

    ml_backend__mlds_to_c_func__standardize_param_names_4_p_0(((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Argument_12, ((MR_Integer) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ArgNum_14);
    *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Argument_12));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ArgNum_14));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_func__mlds_output_prefix_suffix_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_11_p_0(
  MR_Word Opts_12,
  MR_Word Stream_13,
  MR_Integer Indent_14,
  MR_Word QualFuncName_15,
  MR_Word Context_16,
  MR_String CallingConvention_17,
  MR_Word Signature_18,
  MR_Word OutputPrefix_19,
  MR_Word OutputSuffix_20)
{
  {
    MR_Word Parameters0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_18, (MR_Integer) 0))));
    MR_Word RetTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_18, (MR_Integer) 1))));
    MR_Word StdDecl_28;
    MR_Word Parameters_29;

    if ((RetTypes_23 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "void");
    else
    {
      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_23, (MR_Integer) 1))));
      MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_23, (MR_Integer) 0))));

      if ((Var_82 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputPrefix_19, (MR_Integer) 1))));
        MR_Box conv1_STATE_VARIABLE_IO_43_43;

        func_0(((MR_Box) (OutputPrefix_19)), ((MR_Box) (Opts_12)), ((MR_Box) (Stream_13)), ((MR_Box) (Var_83)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_43_43);
      }
      else
      {
        MR_Word Var_38;

        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_11_p_0_1));
          MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Opts_12));
          MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (OutputPrefix_19));
          MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) (OutputSuffix_20));
        }
        ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), Stream_13, Var_38, RetTypes_23);
      }
    }
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_13, CallingConvention_17);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_13, Indent_14);
    ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_4_p_0(Stream_13, QualFuncName_15);
    StdDecl_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_12, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    switch (StdDecl_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Parameters_29 = Parameters0_22;
        break;
      case (MR_Integer) 1:
        {
          MR_Box conv4_Var_30;

          mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds_to_c_func_scalar_common_3[5]), Parameters0_22, &Parameters_29, ((MR_Box) ((MR_Integer) 1)), &conv4_Var_30);
        }
        break;
    }
    ml_backend__mlds_to_c_func__mlds_output_params_9_p_0(Opts_12, Stream_13, OutputPrefix_19, OutputSuffix_20, Indent_14, Context_16, Parameters_29);
    if (!((RetTypes_23 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_23, (MR_Integer) 1))));
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_23, (MR_Integer) 0))));

      if ((Var_84 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputSuffix_20, (MR_Integer) 1))));
        MR_Box conv6_STATE_VARIABLE_IO_36;

        func_5(((MR_Box) (OutputSuffix_20)), ((MR_Box) (Opts_12)), ((MR_Box) (Stream_13)), ((MR_Box) (Var_85)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_36);
      }
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_func__mlds_output_param_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params_9_p_0(
  MR_Word Opts_10,
  MR_Word Stream_11,
  MR_Word OutputPrefix_12,
  MR_Word OutputSuffix_13,
  MR_Integer Indent_14,
  MR_Word Context_15,
  MR_Word Parameters_16)
{
  {
    mercury__io__write_char_4_p_0(Stream_11, (MR_Char) 40);
    if ((Parameters_16 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "void");
    else
    {
      MR_Word Var_25;
      MR_Integer Var_28;

      mercury__io__nl_3_p_0(Stream_11);
      Var_28 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_params_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Opts_10));
        MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (OutputPrefix_12));
        MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (OutputSuffix_13));
        MR_hl_field(MR_mktag(0), Var_25, 6) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), Var_25, 7) = ((MR_Box) (Context_15));
      }
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Var_25, (MR_String) ",\n", Parameters_16, Stream_11);
    }
    mercury__io__write_char_4_p_0(Stream_11, (MR_Char) 41);
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
      MR_Word FuncDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word FuncDefns_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
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

void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word ModuleName_11,
  MR_Word FunctionDefn_12)
{
  {
    MR_Word FuncName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_12, (MR_Integer) 0))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_12, (MR_Integer) 1))));
    MR_Word Flags_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_12, (MR_Integer) 2))));
    MR_Word MaybePredProcId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_12, (MR_Integer) 3))));
    MR_Word Params_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_12, (MR_Integer) 4))));
    MR_Word MaybeBody_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_12, (MR_Integer) 5))));
    MR_Word QualFuncName_22;
    MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_26, Context_15);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
    ml_backend__mlds_to_c_func__mlds_output_function_decl_flags_6_p_0(Opts_8, Stream_9, Flags_16, MaybeBody_19);
    {
      QualFuncName_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), QualFuncName_22, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), QualFuncName_22, 1) = ((MR_Box) (FuncName_14));
    }
    if (!((MaybePredProcId_17 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PredProcId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredProcId_17, (MR_Integer) 0))));

      ml_backend__mlds_to_c_func__mlds_output_pred_proc_id_5_p_0(Opts_8, Stream_9, PredProcId_23);
    }
    ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0(Opts_8, Stream_9, Indent_10, QualFuncName_22, Context_15, (MR_String) "MR_CALL ", Params_18);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Argument_12;
    MR_Integer conv0_STATE_VARIABLE_ArgNum_14;

    ml_backend__mlds_to_c_func__standardize_param_names_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Argument_12, ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ArgNum_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Argument_12));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ArgNum_14));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_func__mlds_output_prefix_suffix_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_type__mlds_output_type_suffix_no_size_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0(
  MR_Word Opts_12,
  MR_Word Stream_13,
  MR_Integer Indent_14,
  MR_Word QualFuncName_15,
  MR_Word Context_16,
  MR_String CallingConvention_17,
  MR_Word Signature_18)
{
  {
    MR_Word Parameters0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_18, (MR_Integer) 0))));
    MR_Word RetTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_18, (MR_Integer) 1))));
    MR_Word StdDecl_28;
    MR_Word Parameters_29;

    if ((RetTypes_23 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "void");
    else
    {
      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_23, (MR_Integer) 1))));
      MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_23, (MR_Integer) 0))));

      if ((Var_82 == (MR_Word) ((MR_Unsigned) 0U)))
        ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_12, Stream_13, Var_83);
      else
      {
        MR_Word Var_38;

        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_11_p_0_3));
          MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Opts_12));
          MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_3[3]));
        }
        ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), Stream_13, Var_38, RetTypes_23);
      }
    }
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_13, CallingConvention_17);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_13, Indent_14);
    ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_4_p_0(Stream_13, QualFuncName_15);
    StdDecl_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_12, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    switch (StdDecl_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Parameters_29 = Parameters0_22;
        break;
      case (MR_Integer) 1:
        {
          MR_Box conv2_Var_30;

          mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds_to_c_func_scalar_common_3[4]), Parameters0_22, &Parameters_29, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_30);
        }
        break;
    }
    ml_backend__mlds_to_c_func__mlds_output_params__ho2_9_p_0(Opts_12, Stream_13, Indent_14, Context_16, Parameters_29);
    if (!((RetTypes_23 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_23, (MR_Integer) 1))));
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_23, (MR_Integer) 0))));

      if ((Var_84 == (MR_Word) ((MR_Unsigned) 0U)))
        ml_backend__mlds_to_c_type__mlds_output_type_suffix_no_size_5_p_0(Opts_12, Stream_13, Var_85);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_func__mlds_output_param_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_type__mlds_output_type_suffix_no_size_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_9_p_0(
  MR_Word Opts_10,
  MR_Word Stream_11,
  MR_Integer Indent_14,
  MR_Word Context_15,
  MR_Word Parameters_16)
{
  {
    mercury__io__write_char_4_p_0(Stream_11, (MR_Char) 40);
    if ((Parameters_16 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "void");
    else
    {
      MR_Word Var_25;
      MR_Integer Var_28;

      mercury__io__nl_3_p_0(Stream_11);
      Var_28 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_params__ho2_9_p_0_3));
        MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Opts_10));
        MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_25, 6) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), Var_25, 7) = ((MR_Box) (Context_15));
      }
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Var_25, (MR_String) ",\n", Parameters_16, Stream_11);
    }
    mercury__io__write_char_4_p_0(Stream_11, (MR_Char) 41);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_flags_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Flags_9,
  MR_Word MaybeBody_10)
{
  {
    MR_bool succeeded;
    MR_Word Access_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word PerInstance_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_9, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Comments_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);

    switch (Comments_14) {
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
          switch (PerInstance_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* one_copy */ ");
              break;
            case (MR_Integer) 1:
              {
              }
              break;
          }
        }
        break;
    }
    succeeded = (Access_12 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (MaybeBody_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static ");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_pred_proc_id_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Comments_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);

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
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_func____Unify____maybe_blank_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_c_func____Unify____maybe_blank_line_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func____Compare____maybe_blank_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_c_func____Compare____maybe_blank_line_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
