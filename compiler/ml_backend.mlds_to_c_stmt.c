/*
** Automatically generated from `mlds_to_c_stmt.m'
** by the Mercury compiler,
** version 22.01-beta-2022-03-06
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


// :- module ml_backend.mlds_to_c_stmt.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_c_stmt__init
ENDINIT
*/

#include "ml_backend.mlds_to_c_stmt.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "hlds.code_model.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_data.mih"
#include "ml_backend.mlds_to_c_func.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_type.mih"
#include "ml_backend.mlds_to_c_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_PseudoTypeInfo ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__field_types_func_info_c_0_0[2];

static const MR_DuFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_func_info_c_0_0;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_func_info_c_0_0[1];

static const MR_DuPtagLayout ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_ptag_ordered_func_info_c_0[1];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_name_ordered_func_info_c_0[1];

static const MR_Integer ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_func_info_c_0[1];

static const MR_PseudoTypeInfo ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__field_types_lval_or_string_0_0[1];

static const MR_DuFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_lval_or_string_0_0;

static const MR_PseudoTypeInfo ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__field_types_lval_or_string_0_1[1];

static const MR_DuFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_lval_or_string_0_1;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_lval_or_string_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_lval_or_string_0_1[1];

static const MR_DuPtagLayout ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_ptag_ordered_lval_or_string_0[2];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_name_ordered_lval_or_string_0[2];

static const MR_Integer ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_lval_or_string_0[2];

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_1;

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_2;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_ordinal_ordered_maybe_call_has_return_0[3];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_name_ordered_maybe_call_has_return_0[3];

static const MR_Integer ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_maybe_call_has_return_0[3];

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__IntroducedFrom__pred__mlds_output_stmt_block__156__1_2_p_0(
  MR_Word HeadVar__1_42,
  MR_Word HeadVar__2_43);

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____maybe_call_has_return_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____maybe_call_has_return_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____lval_or_string_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____lval_or_string_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_target_code_component_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Context_9,
  MR_Word TargetCode_10);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_computed_goto_label_9_p_0(
  MR_Word Opts_10,
  MR_Word Stream_11,
  MR_Word Context_12,
  MR_Integer Indent_13,
  MR_String Label_14,
  MR_Integer STATE_VARIABLE_Count_0_17,
  MR_Integer * STATE_VARIABLE_Count_18);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_switch_case_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_switch_case_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word FuncInfo_12,
  MR_Word Context_13,
  MR_Word Case_14);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_case_cond_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word Context_11,
  MR_Word Match_12);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word Separate_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statements_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word FuncInfo_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_switch_default_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word FuncInfo_12,
  MR_Word Context_13,
  MR_Word Default_14);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__write_lval_or_string_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word Base_8);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_init_args_10_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word Context_4,
  MR_Integer ArgNum_5,
  MR_Word Base_6,
  MR_Word Ptag_7,
  MR_Integer Indent_8);

static MR_Word MR_CALL 
ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(
  MR_Word Type_3);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_maybe_alloc_id_4_p_0(
  MR_Word Stream_5,
  MR_Word MaybeAllocId_6);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__write_comment_lines_5_p_0(
  MR_Word Stream_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_call_profile_instr_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Word Context_11,
  MR_Integer Indent_12,
  MR_Word CalleeFuncRval_13,
  MR_Word CallerName_14);

static MR_Word MR_CALL 
ml_backend__mlds_to_c_stmt__find_out_if_call_has_return_4_f_0(
  MR_Word IsTailCall_6,
  MR_Word Results_7,
  MR_Word CalleeSignature_8,
  MR_Word CallerSignature_9);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_local_var_decl_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Word LocalVarName_10,
  MR_Word Type_11,
  MR_Word InitializerSize_12);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____func_info_c_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____func_info_c_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____lval_or_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____lval_or_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____maybe_call_has_return_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____maybe_call_has_return_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_1[4][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_2[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_3[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_4[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_5[1][9];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_6[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_7[2][10];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_8[2][8];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_9[1][12];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_10[1][11];




static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_1[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "dummy"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "base"))
  },
  /* row 3 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_3[0])),
    ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_target_or_dump_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_target_or_dump_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_7[2][10] = {
  /* row 0 */
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_8[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_9[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_10[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__type_ctor_info_func_info_c_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_PseudoTypeInfo ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__field_types_func_info_c_0_0[2] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_qual_function_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_signature_0)
};

static const MR_DuFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_func_info_c_0_0 = {
  (MR_String) "func_info_c",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__field_types_func_info_c_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_func_info_c_0_0[1] = {
  &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_func_info_c_0_0
};

static const MR_DuPtagLayout ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_ptag_ordered_func_info_c_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_func_info_c_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_name_ordered_func_info_c_0[1] = {
  &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_func_info_c_0_0
};

static const MR_Integer ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_func_info_c_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__type_ctor_info_func_info_c_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Unify____func_info_c_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Compare____func_info_c_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_stmt",
  (MR_String) "func_info_c",
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_name_ordered_func_info_c_0 },
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_ptag_ordered_func_info_c_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_func_info_c_0,

};

static const MR_PseudoTypeInfo ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__field_types_lval_or_string_0_0[1] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)
};

static const MR_DuFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_lval_or_string_0_0 = {
  (MR_String) "ls_lval",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__field_types_lval_or_string_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__field_types_lval_or_string_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_lval_or_string_0_1 = {
  (MR_String) "ls_string",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__field_types_lval_or_string_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_lval_or_string_0_0[1] = {
  &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_lval_or_string_0_0
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_lval_or_string_0_1[1] = {
  &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_lval_or_string_0_1
};

static const MR_DuPtagLayout ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_ptag_ordered_lval_or_string_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_lval_or_string_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_lval_or_string_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_name_ordered_lval_or_string_0[2] = {
  &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_lval_or_string_0_0,
  &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_lval_or_string_0_1
};

static const MR_Integer ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_lval_or_string_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__type_ctor_info_lval_or_string_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Unify____lval_or_string_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Compare____lval_or_string_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_stmt",
  (MR_String) "lval_or_string",
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_name_ordered_lval_or_string_0 },
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_ptag_ordered_lval_or_string_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_lval_or_string_0,

};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_0 = {
  (MR_String) "call_has_no_return",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_1 = {
  (MR_String) "call_has_return_expr_prefix",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_2 = {
  (MR_String) "call_has_return_stmt_suffix",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_ordinal_ordered_maybe_call_has_return_0[3] = {
  &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_0,
  &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_1,
  &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_2
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_name_ordered_maybe_call_has_return_0[3] = {
  &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_0,
  &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_1,
  &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_2
};

static const MR_Integer ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_maybe_call_has_return_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__type_ctor_info_maybe_call_has_return_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Unify____maybe_call_has_return_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Compare____maybe_call_has_return_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_stmt",
  (MR_String) "maybe_call_has_return",
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_name_ordered_maybe_call_has_return_0 },
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_ordinal_ordered_maybe_call_has_return_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_maybe_call_has_return_0,

};

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__IntroducedFrom__pred__mlds_output_stmt_block__156__1_2_p_0(
  MR_Word HeadVar__1_42,
  MR_Word HeadVar__2_43)
{
  {
    MR_bool succeeded = (HeadVar__1_42 == HeadVar__2_43);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____maybe_call_has_return_0_0(
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

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____maybe_call_has_return_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____lval_or_string_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        ml_backend__mlds____Compare____mlds_lval_0_0(HeadVar__1_1, Var_16, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_String Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_String ArgY1_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_17, ArgY1_11);
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____lval_or_string_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____func_info_c_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      ml_backend__mlds____Compare____qual_function_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        ml_backend__mlds____Compare____mlds_func_signature_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____func_info_c_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = ml_backend__mlds____Unify____qual_function_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = ml_backend__mlds____Unify____mlds_func_signature_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_target_code_component_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Context_9,
  MR_Word TargetCode_10)
{
  switch (MR_tag((MR_Word) TargetCode_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FuncName_18 = (MR_Word) ((MR_Word) (TargetCode_10));

        ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_4_p_0(Stream_8, FuncName_18);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CodeString_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), TargetCode_10, (MR_Integer) 0))));
        MR_Word MaybeUserContext_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetCode_10, (MR_Integer) 1))));
        MR_Word Var_44;
        MR_Word Var_101 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

        if ((MaybeUserContext_13 == (MR_Word) ((MR_Unsigned) 0U)))
          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_8, Var_101, Context_9);
        else
        {
          MR_Word UserContext_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUserContext_13, (MR_Integer) 0))));

          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_8, Var_101, UserContext_14);
        }
        mercury__io__write_string_4_p_0(Stream_8, CodeString_12);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        Var_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
        ml_backend__mlds_to_c_util__c_reset_context_4_p_0(Stream_8, Var_44);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String CodeString_46 = ((MR_String) ((MR_hl_field(MR_mktag(2), TargetCode_10, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_8, CodeString_46);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TargetCode_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_10, (MR_Integer) 1))));

            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_15, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_10, (MR_Integer) 1))));

            ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_7, Lval_16, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_10, (MR_Integer) 1))));

            ml_backend__mlds_to_c_type__mlds_output_type_5_p_0(Opts_7, Type_17, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word AllocId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_10, (MR_Integer) 1))));
            MR_Integer Num_109 = (MR_Integer) (AllocId_19);
            MR_String Var_121;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&MR_alloc_sites[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[3]), Num_109, &Var_121);
            mercury__io__write_string_4_p_0(Stream_8, Var_121);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_computed_goto_label_9_p_0(
  MR_Word Opts_10,
  MR_Word Stream_11,
  MR_Word Context_12,
  MR_Integer Indent_13,
  MR_String Label_14,
  MR_Integer STATE_VARIABLE_Count_0_17,
  MR_Integer * STATE_VARIABLE_Count_18)
{
  {
    MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_10, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    MR_Integer Var_23;
    MR_String Var_55;

    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_11, Var_21, Context_12);
    Var_23 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_11, Var_23);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "case ");
    mercury__io__write_int_4_p_0(Stream_11, STATE_VARIABLE_Count_0_17);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) ": goto ");
    Var_55 = parse_tree__prog_foreign__name_mangle_1_f_0(Label_14);
    mercury__io__write_string_4_p_0(Stream_11, Var_55);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) ";\n");
    *STATE_VARIABLE_Count_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Count_0_17 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_switch_case_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_stmt__mlds_output_case_cond_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_switch_case_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word FuncInfo_12,
  MR_Word Context_13,
  MR_Word Case_14)
{
  {
    MR_Word FirstCond_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_14, (MR_Integer) 0))));
    MR_Word LaterConds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_14, (MR_Integer) 1))));
    MR_Word Stmt_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_14, (MR_Integer) 2))));
    MR_Word Var_22;
    MR_Integer Var_24;
    MR_Word Var_27;
    MR_Integer Var_29;
    MR_Box conv0_STATE_VARIABLE_IO_23_23;

    ml_backend__mlds_to_c_stmt__mlds_output_case_cond_7_p_0(Opts_9, Stream_10, Indent_11, Context_13, FirstCond_16);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_switch_case_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Opts_9));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Stream_10));
      MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (Indent_11));
      MR_hl_field(MR_mktag(0), Var_22, 6) = ((MR_Box) (Context_13));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_22, LaterConds_17, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_23_23);
    Var_24 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
    ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_9, Stream_10, Var_24, FuncInfo_12, Stmt_18);
    Var_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_27, Context_13);
    Var_29 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Var_29);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "break;\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_case_cond_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word Context_11,
  MR_Word Match_12)
{
  {
    MR_Word Var_78 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

    if (((MR_tag((MR_Word) Match_12)) == (MR_Integer) 1))
    {
      MR_Word Low_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Match_12, (MR_Integer) 0))));
      MR_Word High_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Match_12, (MR_Integer) 1))));

      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_78, Context_11);
      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "case ");
      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Low_15, Stream_9);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ... ");
      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, High_16, Stream_9);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ":\n");
    }
    else
    {
      MR_Word Val_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Match_12, (MR_Integer) 0))));

      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_78, Context_11);
      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "case ");
      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Val_14, Stream_9);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ":\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word Separate_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word LocalVarDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word LocalVarDefns_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word LocalVarName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_19, (MR_Integer) 0))));
      MR_Word Context_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_19, (MR_Integer) 1))));
      MR_Word Type_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_19, (MR_Integer) 2))));
      MR_Word Initializer_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_19, (MR_Integer) 3))));
      MR_Word GCStmt_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_19, (MR_Integer) 4))));
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word next_value_of_HeadVar__5_5;

      switch (Separate_4) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          mercury__io__nl_3_p_0(Stream_2);
          break;
      }
      Var_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_1, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_2, Var_40, Context_35);
      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_2, Indent_3);
      Var_43 = ml_backend__mlds__get_initializer_array_size_1_f_0(Initializer_37);
      ml_backend__mlds_to_c_stmt__mlds_output_local_var_decl_7_p_0(Opts_1, Stream_2, LocalVarName_34, Type_36, Var_43);
      ml_backend__mlds_to_c_data__mlds_output_initializer_6_p_0(Opts_1, Stream_2, Type_36, Initializer_37);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ";\n");
      ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_7_p_0(Opts_1, Stream_2, Indent_3, GCStmt_38, (MR_String) "");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = LocalVarDefns_20;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statements_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word FuncInfo_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Stmt_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Stmts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__5_5;

      ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_1, Stream_2, Indent_3, FuncInfo_4, Stmt_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Stmts_20;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_stmt__mlds_output_switch_case_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv2_STATE_VARIABLE_Count_18;

    ml_backend__mlds_to_c_stmt__mlds_output_computed_goto_label_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Count_18);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Count_18));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_c_stmt__IntroducedFrom__pred__mlds_output_stmt_block__156__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_stmt__mlds_output_target_code_component_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__char__is_line_separator_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word FuncInfo_11,
  MR_Word Stmt_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Var_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

    // setup for model_det tailcalls optimized into a loop
    ;
    ml_backend__mlds_to_c_util__c_output_stmt_context_5_p_0(Stream_9, Var_44, Stmt_12);
    switch (MR_tag((MR_Word) Stmt_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns_436 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_12, (MR_Integer) 0))));
          MR_Word FuncDefns_437 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_12, (MR_Integer) 1))));
          MR_Word SubStmts_438 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_12, (MR_Integer) 2))));
          MR_Word Context_439 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_12, (MR_Integer) 3))));
          MR_Integer BlockIndent_441 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
          MR_Word FuncName_442;
          MR_Word ModuleName_444;
          MR_Word PrintedSomething2_454;
          MR_Word Var_474;

          ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
          FuncName_442 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncInfo_11, (MR_Integer) 0))));
          ModuleName_444 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncName_442, (MR_Integer) 0))));
          if ((FuncDefns_437 == (MR_Word) ((MR_Unsigned) 0U)))
            if ((LocalVarDefns_436 == (MR_Word) ((MR_Unsigned) 0U)))
              PrintedSomething2_454 = (MR_Integer) 0;
            else
            {
              ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_7_p_0(Opts_8, Stream_9, BlockIndent_441, (MR_Integer) 0, LocalVarDefns_436);
              PrintedSomething2_454 = (MR_Integer) 1;
            }
          else
          {
            MR_Word Var_459;
            MR_Word Var_462 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
            MR_Word Var_464;
            MR_Word PrintedSomething1_1537;
            MR_Box conv1_STATE_VARIABLE_IO_45_1538;

            {
              Var_459 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_459, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_459, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_3));
              MR_hl_field(MR_mktag(0), Var_459, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_459, 3) = ((MR_Box) (Var_462));
              MR_hl_field(MR_mktag(0), Var_459, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_459, (MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_block\'/7", (MR_String) "nested functions in target C code");
            {
              Var_464 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_464, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), Var_464, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_4));
              MR_hl_field(MR_mktag(0), Var_464, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_464, 3) = ((MR_Box) (Opts_8));
              MR_hl_field(MR_mktag(0), Var_464, 4) = ((MR_Box) (Stream_9));
              MR_hl_field(MR_mktag(0), Var_464, 5) = ((MR_Box) (BlockIndent_441));
              MR_hl_field(MR_mktag(0), Var_464, 6) = ((MR_Box) (ModuleName_444));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_464, FuncDefns_437, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_45_1538);
            if ((LocalVarDefns_436 == (MR_Word) ((MR_Unsigned) 0U)))
              PrintedSomething1_1537 = (MR_Integer) 1;
            else
            {
              mercury__io__nl_3_p_0(Stream_9);
              ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_7_p_0(Opts_8, Stream_9, BlockIndent_441, (MR_Integer) 0, LocalVarDefns_436);
              PrintedSomething1_1537 = (MR_Integer) 1;
            }
            switch (PrintedSomething1_1537) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                mercury__io__nl_3_p_0(Stream_9);
                break;
            }
            ml_backend__mlds_to_c_func__mlds_output_function_defns_8_p_0(Opts_8, (MR_Integer) 0, Stream_9, BlockIndent_441, ModuleName_444, FuncDefns_437);
            PrintedSomething2_454 = (MR_Integer) 1;
          }
          switch (PrintedSomething2_454) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              mercury__io__nl_3_p_0(Stream_9);
              break;
          }
          ml_backend__mlds_to_c_stmt__mlds_output_statements_7_p_0(Opts_8, Stream_9, BlockIndent_441, FuncInfo_11, SubStmts_438);
          Var_474 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_474, Context_439);
          ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_1126 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Stmt_12, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Cond_1127 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_12, (MR_Integer) 1))));
          MR_Word BodyStmt_1128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_12, (MR_Integer) 2))));
          MR_Word Context_1130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_12, (MR_Integer) 4))));
          MR_Integer ScopeIndent_1131;
          MR_Word BodyOpts_1132;
          MR_Word Var_1153;
          MR_String Var_1154;
          MR_Unsigned packed_word_25;

          ml_backend__mlds_to_target_util__scope_indent_3_p_0(BodyStmt_1128, Indent_10, &ScopeIndent_1131);
          Var_1153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 0))));
          Var_1154 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 1))));
          packed_word_25 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2)));
          {
            BodyOpts_1132 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BodyOpts_1132, 0) = ((MR_Box) (Var_1153));
            MR_hl_field(MR_mktag(0), BodyOpts_1132, 1) = ((MR_Box) (Var_1154));
            MR_hl_field(MR_mktag(0), BodyOpts_1132, 2) = (MR_Box) ((((packed_word_25 & (~((MR_Unsigned) 3U)))) | (MR_Unsigned) ((MR_Integer) 2)));
          }
          switch (Kind_1126) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_1138;

                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "do\n");
                ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(BodyOpts_1132, Stream_9, ScopeIndent_1131, FuncInfo_11, BodyStmt_1128);
                Var_1138 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_1138, Context_1130);
                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "while (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Cond_1127, Stream_9);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_Opts_8;
                MR_Integer next_value_of_Indent_10;
                MR_Word next_value_of_Stmt_12;

                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "while (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Cond_1127, Stream_9);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")\n");
                // direct tailcall eliminated
                ;
                next_value_of_Opts_8 = BodyOpts_1132;
                next_value_of_Indent_10 = ScopeIndent_1131;
                next_value_of_Stmt_12 = BodyStmt_1128;
                Opts_8 = next_value_of_Opts_8;
                Indent_10 = next_value_of_Indent_10;
                Stmt_12 = next_value_of_Stmt_12;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Cond_871 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_12, (MR_Integer) 0))));
          MR_Word Then0_872 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_12, (MR_Integer) 1))));
          MR_Word MaybeElse_873 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_12, (MR_Integer) 2))));
          MR_Word Context_874 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_12, (MR_Integer) 3))));
          MR_Word Then_879;
          MR_Integer ScopeIndent_883;
          MR_Word ThenContext_878;
          MR_Word Var_890;

          succeeded = (MaybeElse_873 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Then0_872)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_890 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_872, (MR_Integer) 2))));
              ThenContext_878 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_872, (MR_Integer) 3))));
              succeeded = (Var_890 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
          {
            MR_Word Var_893;

            {
              Var_893 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_893, 0) = ((MR_Box) (Then0_872));
              MR_hl_field(MR_mktag(1), Var_893, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Then_879 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Then_879, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Then_879, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Then_879, 2) = ((MR_Box) (Var_893));
              MR_hl_field(MR_mktag(0), Then_879, 3) = ((MR_Box) (ThenContext_878));
            }
          }
          else
          {
            MR_Word ThenContext_913;
            MR_Word Var_895;

            succeeded = (MaybeElse_873 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Then0_872)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_895 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_872, (MR_Integer) 2))));
                ThenContext_913 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_872, (MR_Integer) 3))));
                succeeded = (Var_895 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_898;

              {
                Var_898 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_898, 0) = ((MR_Box) (Then0_872));
                MR_hl_field(MR_mktag(1), Var_898, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Then_879 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Then_879, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Then_879, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Then_879, 2) = ((MR_Box) (Var_898));
                MR_hl_field(MR_mktag(0), Then_879, 3) = ((MR_Box) (ThenContext_913));
              }
            }
            else
              Then_879 = Then0_872;
          }
          ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "if (");
          ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Cond_871, Stream_9);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")\n");
          ml_backend__mlds_to_target_util__scope_indent_3_p_0(Then_879, Indent_10, &ScopeIndent_883);
          ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_8, Stream_9, ScopeIndent_883, FuncInfo_11, Then_879);
          if (!((MaybeElse_873 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word Else_884 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_873, (MR_Integer) 0))));
            MR_Integer ElseScopeIndent_889;
            MR_Word Var_907 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
            MR_Integer next_value_of_Indent_10;
            MR_Word next_value_of_Stmt_12;

            ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_907, Context_874);
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "else\n");
            succeeded = ((MR_tag((MR_Word) Else_884)) == (MR_Integer) 2);
            if (succeeded)
              ElseScopeIndent_889 = Indent_10;
            else
              ml_backend__mlds_to_target_util__scope_indent_3_p_0(Else_884, Indent_10, &ElseScopeIndent_889);
            // direct tailcall eliminated
            ;
            next_value_of_Indent_10 = ElseScopeIndent_889;
            next_value_of_Stmt_12 = Else_884;
            Indent_10 = next_value_of_Indent_10;
            Stmt_12 = next_value_of_Stmt_12;
            continue;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Val_990 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 2))));
              MR_Word Cases_992 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 4))));
              MR_Word Default_993 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 5))));
              MR_Word Context_994 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 6))));
              MR_Word CaseOpts_995;
              MR_Word Var_996 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
              MR_Integer Var_1005;
              MR_Word Var_1008;
              MR_Integer Var_1010;
              MR_Word Var_1012;
              MR_Word Var_1031;
              MR_String Var_1032;
              MR_Unsigned packed_word_21;
              MR_Box conv5_STATE_VARIABLE_IO_36_1009;

              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_996, Context_994);
              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "switch (");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Val_990, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") {\n");
              Var_1031 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 0))));
              Var_1032 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 1))));
              packed_word_21 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2)));
              {
                CaseOpts_995 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CaseOpts_995, 0) = ((MR_Box) (Var_1031));
                MR_hl_field(MR_mktag(0), CaseOpts_995, 1) = ((MR_Box) (Var_1032));
                MR_hl_field(MR_mktag(0), CaseOpts_995, 2) = (MR_Box) ((((packed_word_21 & (~((MR_Unsigned) 3U)))) | (MR_Unsigned) ((MR_Integer) 1)));
              }
              Var_1005 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
              ml_backend__mlds_to_c_stmt__mlds_output_switch_default_8_p_0(CaseOpts_995, Stream_9, Var_1005, FuncInfo_11, Context_994, Default_993);
              Var_1010 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
              {
                Var_1008 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_1008, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_10[0]));
                MR_hl_field(MR_mktag(0), Var_1008, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_11));
                MR_hl_field(MR_mktag(0), Var_1008, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(0), Var_1008, 3) = ((MR_Box) (CaseOpts_995));
                MR_hl_field(MR_mktag(0), Var_1008, 4) = ((MR_Box) (Stream_9));
                MR_hl_field(MR_mktag(0), Var_1008, 5) = ((MR_Box) (Var_1010));
                MR_hl_field(MR_mktag(0), Var_1008, 6) = ((MR_Box) (FuncInfo_11));
                MR_hl_field(MR_mktag(0), Var_1008, 7) = ((MR_Box) (Context_994));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_1008, Cases_992, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_36_1009);
              Var_1012 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_1012, Context_994);
              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String LabelName_934 = ((MR_String) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 1))));
              MR_Integer Var_936 = (MR_Integer) ((MR_Unsigned) Indent_10 - (MR_Unsigned) 1);
              MR_String Var_947;

              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_936);
              Var_947 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName_934);
              mercury__io__write_string_4_p_0(Stream_9, Var_947);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ":;\n");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_807 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 1))));

              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
              switch (MR_tag((MR_Word) Target_807)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Target_807)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word BreakContext_810 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (BreakContext_810) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                          case (MR_Integer) 0:
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_goto\'/6", (MR_String) "goto_break_switch not in switch");
                              return;
                            }
                            break;
                          case (MR_Integer) 1:
                            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "break;\n");
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word BreakContext_827 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (BreakContext_827) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "break;\n");
                            break;
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_goto\'/6", (MR_String) "goto_break_loop not in loop");
                              return;
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "continue;\n");
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String LabelName_809 = ((MR_String) ((MR_hl_field(MR_mktag(1), Target_807, (MR_Integer) 0))));
                    MR_String Var_861;

                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "goto ");
                    Var_861 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName_809);
                    mercury__io__write_string_4_p_0(Stream_9, Var_861);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Expr_724 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 1))));
              MR_Word Labels_725 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 2))));
              MR_Word Context_726 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 3))));
              MR_Word Var_734;
              MR_Word Var_737;
              MR_Integer Var_739;
              MR_Word Var_744;
              MR_Box conv4__FinalCount_727;
              MR_Box conv3_STATE_VARIABLE_IO_26_736;

              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "switch (");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Expr_724, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") {\n");
              {
                Var_734 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_734, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_9[0]));
                MR_hl_field(MR_mktag(0), Var_734, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_9));
                MR_hl_field(MR_mktag(0), Var_734, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_734, 3) = ((MR_Box) (Opts_8));
                MR_hl_field(MR_mktag(0), Var_734, 4) = ((MR_Box) (Stream_9));
                MR_hl_field(MR_mktag(0), Var_734, 5) = ((MR_Box) (Context_726));
                MR_hl_field(MR_mktag(0), Var_734, 6) = ((MR_Box) (Indent_10));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_734, Labels_725, ((MR_Box) ((MR_Integer) 0)), &conv4__FinalCount_727, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_26_736);
              Var_737 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_737, Context_726);
              Var_739 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_739);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "default: /*NOTREACHED*/ MR_assert(0);\n");
              Var_744 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_744, Context_726);
              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Signature_521 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 1))));
              MR_Word FuncRval_522 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 2))));
              MR_Word CallArgs_523 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 3))));
              MR_Word Results_524 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 4))));
              MR_Word IsTailCall_525 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 5))) & (MR_Integer) 3);
              MR_Word Context_526 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 6))));
              MR_Word CallerName_527 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncInfo_11, (MR_Integer) 0))));
              MR_Word CallerSignature_528 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncInfo_11, (MR_Integer) 1))));
              MR_Word ProfileCalls_529 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
              MR_Word ProfileTime_530 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
              MR_Word CallHasReturn_531;

              CallHasReturn_531 = ml_backend__mlds_to_c_stmt__find_out_if_call_has_return_4_f_0(IsTailCall_525, Results_524, Signature_521, CallerSignature_528);
              succeeded = (ProfileCalls_529 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (ProfileTime_530 == (MR_Integer) 0);
                if (succeeded)
                  switch (CallHasReturn_531) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                  }
              }
              if (succeeded)
              {
                MR_Word Var_606 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                MR_Word Var_623;

                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_606, Context_526);
                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                switch (CallHasReturn_531) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "return ");
                    break;
                }
                if (!((Results_524 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word Var_652 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_524, (MR_Integer) 1))));
                  MR_Word Var_653 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_524, (MR_Integer) 0))));

                  if ((Var_652 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Var_653, Stream_9);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                  }
                  else
                  {
                    MR_Word Var_612;

                    {
                      Var_612 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_612, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[0]));
                      MR_hl_field(MR_mktag(0), Var_612, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_5));
                      MR_hl_field(MR_mktag(0), Var_612, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_612, 3) = ((MR_Box) (Opts_8));
                    }
                    ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Stream_9, Var_612, Results_524);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                  }
                }
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, FuncRval_522);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                {
                  Var_623 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_623, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[1]));
                  MR_hl_field(MR_mktag(0), Var_623, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_6));
                  MR_hl_field(MR_mktag(0), Var_623, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_623, 3) = ((MR_Box) (Opts_8));
                }
                parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_623, (MR_String) ", ", CallArgs_523, Stream_9);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
              }
              else
              {
                MR_Integer BodyIndent_532 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
                MR_Word Var_669;
                MR_Word Var_686;

                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
                switch (ProfileCalls_529) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    ml_backend__mlds_to_c_stmt__mlds_output_call_profile_instr_8_p_0(Opts_8, Stream_9, Context_526, BodyIndent_532, FuncRval_522, CallerName_527);
                    break;
                }
                Var_669 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_669, Context_526);
                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, BodyIndent_532);
                switch (CallHasReturn_531) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "return ");
                    break;
                  case (MR_Integer) 2:
                    {
                    }
                    break;
                }
                if (!((Results_524 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word Var_715 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_524, (MR_Integer) 1))));
                  MR_Word Var_716 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_524, (MR_Integer) 0))));

                  if ((Var_715 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Var_716, Stream_9);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                  }
                  else
                  {
                    MR_Word Var_675;

                    {
                      Var_675 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_675, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[0]));
                      MR_hl_field(MR_mktag(0), Var_675, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_7));
                      MR_hl_field(MR_mktag(0), Var_675, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_675, 3) = ((MR_Box) (Opts_8));
                    }
                    ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Stream_9, Var_675, Results_524);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                  }
                }
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, FuncRval_522);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                {
                  Var_686 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_686, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[1]));
                  MR_hl_field(MR_mktag(0), Var_686, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_8));
                  MR_hl_field(MR_mktag(0), Var_686, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_686, 3) = ((MR_Box) (Opts_8));
                }
                parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_686, (MR_String) ", ", CallArgs_523, Stream_9);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
                switch (CallHasReturn_531) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    switch (ProfileTime_530) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                        }
                        break;
                      case (MR_Integer) 1:
                        ml_backend__mlds_to_c_stmt__mlds_output_time_profile_instr_7_p_0(Opts_8, Stream_9, Context_526, BodyIndent_532, CallerName_527);
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_541 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_541, Context_526);
                      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, BodyIndent_532);
                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "return;\n");
                    }
                    break;
                }
                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Results_956 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 1))));

              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "return");
              if (!((Results_956 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Var_979 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_956, (MR_Integer) 1))));
                MR_Word Var_980 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_956, (MR_Integer) 0))));

                if ((Var_979 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__io__write_char_4_p_0(Stream_9, (MR_Char) 32);
                  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Var_980, Stream_9);
                }
                else
                {
                  MR_Word Var_966;

                  {
                    Var_966 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_966, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[1]));
                    MR_hl_field(MR_mktag(0), Var_966, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_10));
                    MR_hl_field(MR_mktag(0), Var_966, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_966, 3) = ((MR_Box) (Opts_8));
                  }
                  ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Stream_9, Var_966, Results_956);
                }
              }
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Ref_1073 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 1))));
              MR_Word BodyStmt0_1074 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 2))));
              MR_Word HandlerStmt_1075 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 3))));
              MR_Word Context_1076 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 4))));
              MR_Word BodyStmt_1079;
              MR_Integer Var_1091;
              MR_Word Var_1094;
              MR_Integer Var_1099;
              MR_Word Var_1080;
              MR_Word Var_1116;
              MR_Integer next_value_of_Indent_10;
              MR_Word next_value_of_Stmt_12;

              succeeded = ((MR_tag((MR_Word) BodyStmt0_1074)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_1080 = ((MR_Word) ((MR_hl_field(MR_mktag(2), BodyStmt0_1074, (MR_Integer) 2))));
                Var_1116 = ((MR_Word) ((MR_hl_field(MR_mktag(2), BodyStmt0_1074, (MR_Integer) 3))));
                succeeded = mercury__term____Unify____context_0_0(Context_1076, Var_1116);
                if (succeeded)
                  succeeded = (Var_1080 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word Var_1083;

                {
                  Var_1083 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1083, 0) = ((MR_Box) (BodyStmt0_1074));
                  MR_hl_field(MR_mktag(1), Var_1083, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  BodyStmt_1079 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), BodyStmt_1079, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), BodyStmt_1079, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), BodyStmt_1079, 2) = ((MR_Box) (Var_1083));
                  MR_hl_field(MR_mktag(0), BodyStmt_1079, 3) = ((MR_Box) (Context_1076));
                }
              }
              else
                BodyStmt_1079 = BodyStmt0_1074;
              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "if (MR_builtin_setjmp(");
              ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Ref_1073, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") == 0)\n");
              Var_1091 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
              ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_8, Stream_9, Var_1091, FuncInfo_11, BodyStmt_1079);
              Var_1094 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_1094, Context_1076);
              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "else\n");
              Var_1099 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_Indent_10 = Var_1099;
              next_value_of_Stmt_12 = HandlerStmt_1075;
              Indent_10 = next_value_of_Indent_10;
              Stmt_12 = next_value_of_Stmt_12;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Ref_792 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 1))));

              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_builtin_longjmp(");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Ref_792, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", 1);\n");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word AtomicStmt_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 1))));
              MR_Word Context_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_12, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) AtomicStmt_107)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_GC_check();\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Comment_109 = ((MR_String) ((MR_hl_field(MR_mktag(1), AtomicStmt_107, (MR_Integer) 0))));

                    succeeded = (strcmp(Comment_109, (MR_String) "") == 0);
                    if (!(succeeded))
                    {
                      MR_Word CommentLines_110;

                      CommentLines_110 = mercury__string__split_at_separator_2_f_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_4[0]), Comment_109);
                      ml_backend__mlds_to_c_stmt__write_comment_lines_5_p_0(Stream_9, Indent_10, CommentLines_110);
                    }
                    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Lval_111 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_107, (MR_Integer) 0))));
                    MR_Word Rval_112 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_107, (MR_Integer) 1))));

                    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                    ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Lval_111, Stream_9);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Rval_112, Stream_9);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Lval_180 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 1))));
                        MR_Word Rval_181 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 2))));

                        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_assign_if_in_heap(");
                        ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Lval_180, Stream_9);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                        ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Rval_181, Stream_9);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Rval_182 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 1))));

                        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_free_heap(");
                        ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Rval_182, Stream_9);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Target_199 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 1))));
                        MR_Word Ptag_200 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 2))));
                        MR_Word Type_202 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 4))));
                        MR_Word MaybeSize_203 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 5))));
                        MR_Word ArgRvalsTypes_205 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 7))));
                        MR_Word MayUseAtomic_206 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 8))) & (MR_Integer) 1);
                        MR_Word MaybeAllocId_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 9))));
                        MR_Word Base_210;
                        MR_String EndMkword_214;
                        MR_Integer Var_258;
                        MR_Integer Var_308;
                        MR_Word Var_311;
                        uint8_t Var_264;

                        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
                        Var_258 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
                        succeeded = ((((MR_tag((MR_Word) Target_199)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Target_199, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          MR_Word GC_Method_212;
                          MR_Word Var_332;

                          {
                            Base_210 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Base_210, 0) = ((MR_Box) (Target_199));
                          }
                          Var_332 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                          GC_Method_212 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 4)) & (MR_Integer) 7);
                          switch (GC_Method_212) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 5:
                              {
                                MR_Word NeedsForwardingSpace_213;
                                MR_Integer Var_237;

                                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_332, Context_108);
                                Var_237 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
                                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_237);
                                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_GC_check();\n");
                                NeedsForwardingSpace_213 = ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(Type_202);
                                switch (NeedsForwardingSpace_213) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Integer Var_244;
                                      MR_Integer Var_251;

                                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_332, Context_108);
                                      Var_244 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_244);
                                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "// reserve space for GC forwarding pointer\n");
                                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_332, Context_108);
                                      Var_251 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_251);
                                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_hp_alloc(1);\n");
                                    }
                                    break;
                                }
                              }
                              break;
                            case (MR_Integer) 0:
                              {
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                              }
                              break;
                            case (MR_Integer) 4:
                              {
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                              }
                              break;
                          }
                          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_332, Context_108);
                          ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_258);
                          ml_backend__mlds_to_c_stmt__write_lval_or_string_5_p_0(Opts_8, Stream_9, Base_210);
                        }
                        else
                        {
                          MR_Word Var_222;
                          MR_Integer Var_224;
                          MR_Word GC_Method_1401;

                          Base_210 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_stmt_scalar_common_1[2]));
                          Var_222 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                          GC_Method_1401 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 4)) & (MR_Integer) 7);
                          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_222, Context_108);
                          Var_224 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
                          ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_224);
                          ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_8, Stream_9, Type_202);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "base");
                          ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(Opts_8, Stream_9, Type_202, (MR_Word) ((MR_Unsigned) 0U));
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                          switch (GC_Method_1401) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 5:
                              {
                                MR_Word NeedsForwardingSpace_1305;
                                MR_Integer Var_1307;

                                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_222, Context_108);
                                Var_1307 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
                                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_1307);
                                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_GC_check();\n");
                                NeedsForwardingSpace_1305 = ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(Type_202);
                                switch (NeedsForwardingSpace_1305) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Integer Var_1225;
                                      MR_Integer Var_1232;

                                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_222, Context_108);
                                      Var_1225 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_1225);
                                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "// reserve space for GC forwarding pointer\n");
                                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_222, Context_108);
                                      Var_1232 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_1232);
                                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_hp_alloc(1);\n");
                                    }
                                    break;
                                }
                              }
                              break;
                            case (MR_Integer) 0:
                              {
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                              }
                              break;
                            case (MR_Integer) 4:
                              {
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                              }
                              break;
                          }
                          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_222, Context_108);
                          ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_258);
                          ml_backend__mlds_to_c_stmt__write_lval_or_string_5_p_0(Opts_8, Stream_9, Base_210);
                        }
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                        Var_264 = (uint8_t) (Ptag_200);
                        succeeded = (Var_264 == UINT8_C(0));
                        if (succeeded)
                        {
                          ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_8, Stream_9, Type_202);
                          EndMkword_214 = (MR_String) "";
                        }
                        else
                        {
                          ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_8, Stream_9, Type_202);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_mkword(");
                          ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(Stream_9, Ptag_200);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                          EndMkword_214 = (MR_String) ")";
                        }
                        switch (MayUseAtomic_206) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_new_object(");
                            break;
                          case (MR_Integer) 0:
                            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_new_object_atomic(");
                            break;
                        }
                        ml_backend__mlds_to_c_type__mlds_output_type_5_p_0(Opts_8, Type_202, Stream_9);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                        if ((MaybeSize_203 == (MR_Word) ((MR_Unsigned) 0U)))
                          mercury__io__write_int_4_p_0(Stream_9, (MR_Integer) -1);
                        else
                        {
                          MR_Word Size_215 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSize_203, (MR_Integer) 0))));
                          MR_Integer SizeInt_216;
                          MR_Word Var_283;

                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                          succeeded = ((((MR_tag((MR_Word) Size_215)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Size_215, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_283 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Size_215, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_283)) == (MR_Integer) 2);
                            if (succeeded)
                              SizeInt_216 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_283, (MR_Integer) 0))));
                          }
                          if (succeeded)
                            mercury__io__write_int_4_p_0(Stream_9, SizeInt_216);
                          else
                            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Size_215, Stream_9);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " * sizeof(MR_Word))");
                        }
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                        ml_backend__mlds_to_c_stmt__mlds_output_maybe_alloc_id_4_p_0(Stream_9, MaybeAllocId_207);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", NULL)");
                        mercury__io__write_string_4_p_0(Stream_9, EndMkword_214);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                        if (!(((MR_tag((MR_Word) Base_210)) == (MR_Integer) 0)))
                        {
                          MR_String BaseVarName1_218 = ((MR_String) ((MR_hl_field(MR_mktag(1), Base_210, (MR_Integer) 0))));
                          MR_Word Var_296 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                          MR_Integer Var_298;

                          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_296, Context_108);
                          Var_298 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
                          ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_298);
                          ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Target_199, Stream_9);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_9, BaseVarName1_218);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                        }
                        Var_308 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
                        ml_backend__mlds_to_c_stmt__mlds_output_init_args_10_p_0(Opts_8, Stream_9, ArgRvalsTypes_205, Context_108, (MR_Integer) 0, Base_210, Ptag_200, Var_308);
                        Var_311 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                        ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_311, Context_108);
                        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Lval_183 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 1))));

                        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_mark_hp(");
                        ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Lval_183, Stream_9);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Rval_184 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 1))));

                        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_restore_hp(");
                        ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Rval_184, Stream_9);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_atomic\'/6", (MR_String) "trail_ops not implemented");
                        return;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word TargetLang_123 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 1))) & (MR_Integer) 3);
                        MR_Word Components_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_107, (MR_Integer) 2))));

                        switch (TargetLang_123) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word Var_133;
                              MR_Box conv0_STATE_VARIABLE_IO_43;

                              {
                                Var_133 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_5[0]));
                                MR_hl_field(MR_mktag(0), Var_133, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_2));
                                MR_hl_field(MR_mktag(0), Var_133, 2) = ((MR_Box) ((MR_Integer) 3));
                                MR_hl_field(MR_mktag(0), Var_133, 3) = ((MR_Box) (Opts_8));
                                MR_hl_field(MR_mktag(0), Var_133, 4) = ((MR_Box) (Stream_9));
                                MR_hl_field(MR_mktag(0), Var_133, 5) = ((MR_Box) (Context_108));
                              }
                              mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_133, Components_124, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_43);
                            }
                            break;
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                            {
                              mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_atomic\'/6", (MR_String) "inline_target_code only works for language C");
                              return;
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_atomic\'/6", (MR_String) "outline_foreign_proc is not used in C backend");
                        return;
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_switch_default_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word FuncInfo_12,
  MR_Word Context_13,
  MR_Word Default_14)
{
  switch (MR_tag((MR_Word) Default_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Default_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

            ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_34, Context_13);
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "default: /*NOTREACHED*/ MR_assert(0);\n");
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stmt_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Default_14, (MR_Integer) 0))));
        MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
        MR_Integer Var_24;
        MR_Word Var_27;
        MR_Integer Var_29;

        ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_19, Context_13);
        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "default:\n");
        Var_24 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
        ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_9, Stream_10, Var_24, FuncInfo_12, Stmt_16);
        Var_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
        ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_27, Context_13);
        Var_29 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Var_29);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "break;\n");
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word GCStmt_11,
  MR_String MaybeNewLine_12)
{
  switch (MR_tag((MR_Word) GCStmt_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stmt_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GCStmt_11, (MR_Integer) 0))));
        MR_Word ModuleName_35;
        MR_Word QualFuncName_37;
        MR_Word FuncInfo_38;

        mercury__io__write_string_4_p_0(Stream_9, MaybeNewLine_12);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "#if 0 // GC trace code\n");
        ModuleName_35 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[0]));
        {
          QualFuncName_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), QualFuncName_37, 0) = ((MR_Box) (ModuleName_35));
          MR_hl_field(MR_mktag(0), QualFuncName_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_stmt_scalar_common_1[1])));
        }
        {
          FuncInfo_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FuncInfo_38, 0) = ((MR_Box) (QualFuncName_37));
          MR_hl_field(MR_mktag(0), FuncInfo_38, 1) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_2[0]));
        }
        ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_8, Stream_9, Indent_10, FuncInfo_38, Stmt_33);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "#endif\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Stmt_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GCStmt_11, (MR_Integer) 0))));
        MR_Word ModuleName_16;
        MR_Word QualFuncName_18;
        MR_Word FuncInfo_19;

        mercury__io__write_string_4_p_0(Stream_9, MaybeNewLine_12);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "#if 0 // GC initialiser\n");
        ModuleName_16 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[0]));
        {
          QualFuncName_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), QualFuncName_18, 0) = ((MR_Box) (ModuleName_16));
          MR_hl_field(MR_mktag(0), QualFuncName_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_stmt_scalar_common_1[1])));
        }
        {
          FuncInfo_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FuncInfo_19, 0) = ((MR_Box) (QualFuncName_18));
          MR_hl_field(MR_mktag(0), FuncInfo_19, 1) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_2[0]));
        }
        ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_8, Stream_9, Indent_10, FuncInfo_19, Stmt_14);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "#endif\n");
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__write_lval_or_string_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word Base_8)
{
  if (((MR_tag((MR_Word) Base_8)) == (MR_Integer) 0))
  {
    MR_Word Target_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Base_8, (MR_Integer) 0))));

    ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_6, Target_10, Stream_7);
  }
  else
  {
    MR_String BaseVarName_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), Base_8, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(Stream_7, BaseVarName_11);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_init_args_10_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word Context_4,
  MR_Integer ArgNum_5,
  MR_Word Base_6,
  MR_Word Ptag_7,
  MR_Integer Indent_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ArgRvalType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgRvalsTypes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgRval_31;
      MR_Word ArgType_32;
      MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_1, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
      MR_Integer Var_52;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_ArgNum_5;

      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_2, Var_35, Context_4);
      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_2, Indent_8);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "MR_hl_field(");
      ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(Stream_2, Ptag_7);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ", ");
      if (((MR_tag((MR_Word) Base_6)) == (MR_Integer) 0))
      {
        MR_Word Target_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Base_6, (MR_Integer) 0))));

        ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_1, Target_75, Stream_2);
      }
      else
      {
        MR_String BaseVarName_76 = ((MR_String) ((MR_hl_field(MR_mktag(1), Base_6, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_2, BaseVarName_76);
      }
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ", ");
      mercury__io__write_int_4_p_0(Stream_2, ArgNum_5);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ") = ");
      ArgRval_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalType_23, (MR_Integer) 0))));
      ArgType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalType_23, (MR_Integer) 1))));
      ml_backend__mlds_to_c_data__mlds_output_boxed_rval_6_p_0(Opts_1, Stream_2, ArgType_32, ArgRval_31);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ";\n");
      Var_52 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ArgRvalsTypes_24;
      next_value_of_ArgNum_5 = Var_52;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      ArgNum_5 = next_value_of_ArgNum_5;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(
  MR_Word Type_3)
{
  {
    MR_Word NeedsForwardingPtrSpace_4;

    switch (MR_tag((MR_Word) Type_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Type_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            NeedsForwardingPtrSpace_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            NeedsForwardingPtrSpace_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 9:
            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_stmt.type_needs_forwarding_pointer_space\'/1", (MR_String) "unknown_type");
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        NeedsForwardingPtrSpace_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeCategory_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 2))));

              NeedsForwardingPtrSpace_4 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(TypeCategory_15);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            NeedsForwardingPtrSpace_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 8:
            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_stmt.type_needs_forwarding_pointer_space\'/1", (MR_String) "rtti_type");
            break;
          case (MR_Integer) 9:
            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_stmt.type_needs_forwarding_pointer_space\'/1", (MR_String) "tabling_type");
            break;
        }
        break;
    }
    return NeedsForwardingPtrSpace_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_maybe_alloc_id_4_p_0(
  MR_Word Stream_5,
  MR_Word MaybeAllocId_6)
{
  if ((MaybeAllocId_6 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "NULL");
  else
  {
    MR_Integer Num_8;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAllocId_6, (MR_Integer) 0))));
    MR_String Var_22;

    Num_8 = (MR_Integer) (Var_13);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "&MR_alloc_sites[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[3]), Num_8, &Var_22);
    mercury__io__write_string_4_p_0(Stream_5, Var_22);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "]");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__write_comment_lines_5_p_0(
  MR_Word Stream_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String CommentLine_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word CommentLines_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = (strcmp(CommentLine_13, (MR_String) "") == 0);
      if (succeeded)
        mercury__io__nl_3_p_0(Stream_1);
      else
      {
        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_1, Indent_2);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "// ");
        mercury__io__write_string_4_p_0(Stream_1, CommentLine_13);
        mercury__io__nl_3_p_0(Stream_1);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = CommentLines_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_call_profile_instr_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Word Context_11,
  MR_Integer Indent_12,
  MR_Word CalleeFuncRval_13,
  MR_Word CallerName_14)
{
  {
    MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_18, Context_11);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_12);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "MR_prof_call_profile(");
    ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_9, Stream_10, CalleeFuncRval_13);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
    ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_4_p_0(Stream_10, CallerName_14);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ");\n");
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_c_stmt__find_out_if_call_has_return_4_f_0(
  MR_Word IsTailCall_6,
  MR_Word Results_7,
  MR_Word CalleeSignature_8,
  MR_Word CallerSignature_9)
{
  {
    MR_bool succeeded;
    MR_Word CallHasReturn_10;

    switch (IsTailCall_6) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      MR_Word CalleeRetTypes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleeSignature_8, (MR_Integer) 1))));
      MR_Word CallerRetTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallerSignature_9, (MR_Integer) 1))));
      MR_Word TypeInfo_17_17;

      succeeded = (Results_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (CalleeRetTypes_12)), ((MR_Box) (CallerRetTypes_14)));
      }
      if (succeeded)
        CallHasReturn_10 = (MR_Integer) 1;
      else
      {
        succeeded = (CallerRetTypes_14 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          CallHasReturn_10 = (MR_Integer) 2;
        else
          CallHasReturn_10 = (MR_Integer) 0;
      }
    }
    else
      CallHasReturn_10 = (MR_Integer) 0;
    return CallHasReturn_10;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_local_var_decl_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Word LocalVarName_10,
  MR_Word Type_11,
  MR_Word InitializerSize_12)
{
  {
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_8, Stream_9, Type_11);
    mercury__io__write_char_4_p_0(Stream_9, (MR_Char) 32);
    ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_9, LocalVarName_10);
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(Opts_8, Stream_9, Type_11, InitializerSize_12);
  }
}

void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_time_profile_instr_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Word Context_10,
  MR_Integer Indent_11,
  MR_Word QualFuncName_12)
{
  {
    MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_16, Context_10);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_11);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_set_prof_current_proc(");
    ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_4_p_0(Stream_9, QualFuncName_12);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____func_info_c_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_c_stmt____Unify____func_info_c_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____func_info_c_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_c_stmt____Compare____func_info_c_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____lval_or_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_c_stmt____Unify____lval_or_string_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____lval_or_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_c_stmt____Compare____lval_or_string_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____maybe_call_has_return_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_c_stmt____Unify____maybe_call_has_return_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____maybe_call_has_return_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_c_stmt____Compare____maybe_call_has_return_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__mlds_to_c_stmt__init(void)
{
}

void mercury__ml_backend__mlds_to_c_stmt__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__type_ctor_info_func_info_c_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__type_ctor_info_lval_or_string_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__type_ctor_info_maybe_call_has_return_0);
}

void mercury__ml_backend__mlds_to_c_stmt__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_c_stmt__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_c_stmt.
