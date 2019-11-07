/*
** Automatically generated from `mlds_to_c_stmt.m'
** by the Mercury compiler,
** version rotd-2019-11-07
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


#include "backend_libs.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "parse_tree.mih"
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
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_data.mih"
#include "ml_backend.mlds_to_c_func.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_type.mih"
#include "ml_backend.mlds_to_c_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.java_names.mih"
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

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_value_ordered_maybe_call_has_return_0[3];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_name_ordered_maybe_call_has_return_0[3];

static const MR_Integer ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_maybe_call_has_return_0[3];

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__IntroducedFrom__pred__mlds_output_stmt_block__152__1_2_p_0(
  MR_Word HeadVar__1_37,
  MR_Word HeadVar__2_38);

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
ml_backend__mlds_to_c_stmt__mlds_output_target_code_component_5_p_0(
  MR_Word Opts_6,
  MR_Word Context_7,
  MR_Word TargetCode_8);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_computed_goto_label_8_p_0(
  MR_Word Opts_9,
  MR_Word Context_10,
  MR_Integer Indent_11,
  MR_String Label_12,
  MR_Integer Count0_13,
  MR_Integer * Count_14);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_switch_case_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_switch_case_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word FuncInfo_10,
  MR_Word Context_11,
  MR_Word Case_12);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_case_cond_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word Context_9,
  MR_Word Match_10);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statements_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_switch_default_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word FuncInfo_10,
  MR_Word Context_11,
  MR_Word Default_12);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__write_lval_or_string_4_p_0(
  MR_Word Opts_5,
  MR_Word Base_6);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_init_args_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Integer ArgNum_3,
  MR_Word Base_4,
  MR_Word Ptag_5,
  MR_Word Opts_6,
  MR_Integer Indent_7);

static MR_Word MR_CALL 
ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(
  MR_Word Type_3);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_maybe_alloc_id_3_p_0(
  MR_Word MaybeAllocId_4);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__write_comment_lines_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_call_profile_instr_7_p_0(
  MR_Word Opts_8,
  MR_Word Context_9,
  MR_Integer Indent_10,
  MR_Word CalleeFuncRval_11,
  MR_Word CallerName_12);

static MR_Word MR_CALL 
ml_backend__mlds_to_c_stmt__find_out_if_call_has_return_4_f_0(
  MR_Word IsTailCall_6,
  MR_Word Results_7,
  MR_Word CalleeSignature_8,
  MR_Word CallerSignature_9);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_local_var_decl_6_p_0(
  MR_Word Opts_7,
  MR_Word LocalVarName_8,
  MR_Word Type_9,
  MR_Word InitializerSize_10);

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


static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_2[4][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_3[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_4[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_5[1][8];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_6[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_7[2][9];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_8[2][7];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_9[1][11];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_10[1][10];




static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_2[4][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "dummy"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "base"))
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
    ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
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

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_7[2][9] = {
  /* row 0 */
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_8[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_9[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_10[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
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
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Unify____func_info_c_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Compare____func_info_c_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_stmt",
  (MR_String) "func_info_c",
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_name_ordered_func_info_c_0 },
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_ptag_ordered_func_info_c_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_func_info_c_0
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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_lval_or_string_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Unify____lval_or_string_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Compare____lval_or_string_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_stmt",
  (MR_String) "lval_or_string",
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_name_ordered_lval_or_string_0 },
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_ptag_ordered_lval_or_string_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_lval_or_string_0
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

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_value_ordered_maybe_call_has_return_0[3] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Unify____maybe_call_has_return_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Compare____maybe_call_has_return_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_stmt",
  (MR_String) "maybe_call_has_return",
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_name_ordered_maybe_call_has_return_0 },
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_value_ordered_maybe_call_has_return_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_maybe_call_has_return_0
};

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__IntroducedFrom__pred__mlds_output_stmt_block__152__1_2_p_0(
  MR_Word HeadVar__1_37,
  MR_Word HeadVar__2_38)
{
  {
    MR_bool succeeded = (HeadVar__1_37 == HeadVar__2_38);

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
ml_backend__mlds_to_c_stmt__mlds_output_target_code_component_5_p_0(
  MR_Word Opts_6,
  MR_Word Context_7,
  MR_Word TargetCode_8)
{
  switch (MR_tag((MR_Word) TargetCode_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FuncName_16 = (MR_Word) ((MR_Word) (TargetCode_8));

        ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_3_p_0(FuncName_16);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CodeString_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), TargetCode_8, (MR_Integer) 0))));
        MR_Word MaybeUserContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetCode_8, (MR_Integer) 1))));
        MR_Word Var_42;
        MR_Word Var_103 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);

        if ((MaybeUserContext_11 == (MR_Word) ((MR_Unsigned) 0U)))
          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_103, Context_7);
        else
        {
          MR_Word UserContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUserContext_11, (MR_Integer) 0))));

          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_103, UserContext_12);
        }
        mercury__io__write_string_3_p_0(CodeString_10);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        Var_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
        ml_backend__mlds_to_c_util__c_reset_context_3_p_0(Var_42);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String CodeString_44 = ((MR_String) ((MR_hl_field(MR_mktag(2), TargetCode_8, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0(CodeString_44);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TargetCode_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_8, (MR_Integer) 1))));

            ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_6, Rval_13);
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_8, (MR_Integer) 1))));

            ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_6, Lval_14);
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_8, (MR_Integer) 1))));

            ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_6, Type_15);
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word AllocId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_8, (MR_Integer) 1))));
            MR_Word Var_20;

            {
              Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (AllocId_17));
            }
            ml_backend__mlds_to_c_stmt__mlds_output_maybe_alloc_id_3_p_0(Var_20);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_computed_goto_label_8_p_0(
  MR_Word Opts_9,
  MR_Word Context_10,
  MR_Integer Indent_11,
  MR_String Label_12,
  MR_Integer Count0_13,
  MR_Integer * Count_14)
{
  {
    MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
    MR_Integer Var_20;
    MR_String Var_51;

    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_18, Context_10);
    Var_20 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_20);
    mercury__io__write_string_3_p_0((MR_String) "case ");
    mercury__io__write_int_3_p_0(Count0_13);
    mercury__io__write_string_3_p_0((MR_String) ": goto ");
    Var_51 = parse_tree__prog_foreign__name_mangle_1_f_0(Label_12);
    mercury__io__write_string_3_p_0(Var_51);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
    *Count_14 = (MR_Integer) ((MR_Unsigned) Count0_13 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_switch_case_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_stmt__mlds_output_case_cond_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_switch_case_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word FuncInfo_10,
  MR_Word Context_11,
  MR_Word Case_12)
{
  {
    MR_Word FirstCond_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_12, (MR_Integer) 0))));
    MR_Word LaterConds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_12, (MR_Integer) 1))));
    MR_Word Stmt_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_12, (MR_Integer) 2))));
    MR_Word Var_20;
    MR_Integer Var_22;
    MR_Word Var_25;
    MR_Integer Var_27;
    MR_Box conv0_STATE_VARIABLE_IO_21_21;

    ml_backend__mlds_to_c_stmt__mlds_output_case_cond_6_p_0(Opts_8, Indent_9, Context_11, FirstCond_14);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_switch_case_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Opts_8));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (Indent_9));
      MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (Context_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, LaterConds_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_21_21);
    Var_22 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_8, Var_22, FuncInfo_10, Stmt_16);
    Var_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_25, Context_11);
    Var_27 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_27);
    mercury__io__write_string_3_p_0((MR_String) "break;\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_case_cond_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word Context_9,
  MR_Word Match_10)
{
  {
    MR_Word Var_79 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);

    if (((MR_tag((MR_Word) Match_10)) == (MR_Integer) 1))
    {
      MR_Word Low_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Match_10, (MR_Integer) 0))));
      MR_Word High_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Match_10, (MR_Integer) 1))));

      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_79, Context_9);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
      mercury__io__write_string_3_p_0((MR_String) "case ");
      ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Low_13);
      mercury__io__write_string_3_p_0((MR_String) " ... ");
      ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, High_14);
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
    else
    {
      MR_Word Val_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Match_10, (MR_Integer) 0))));

      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_79, Context_9);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
      mercury__io__write_string_3_p_0((MR_String) "case ");
      ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Val_12);
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_6_p_0(
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
      MR_Word LocalVarDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word LocalVarDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word LocalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_16, (MR_Integer) 0))));
      MR_Word Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_16, (MR_Integer) 1))));
      MR_Word Type_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_16, (MR_Integer) 2))));
      MR_Word Initializer_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_16, (MR_Integer) 3))));
      MR_Word GCStmt_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_16, (MR_Integer) 4))));
      MR_Word Var_36;
      MR_Word Var_39;
      MR_Word next_value_of_HeadVar__4_4;

      switch (HeadVar__3_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          mercury__io__nl_2_p_0();
          break;
      }
      Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_36, Context_31);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(HeadVar__2_2);
      Var_39 = ml_backend__mlds__get_initializer_array_size_1_f_0(Initializer_33);
      ml_backend__mlds_to_c_stmt__mlds_output_local_var_decl_6_p_0(HeadVar__1_1, LocalVarName_30, Type_32, Var_39);
      ml_backend__mlds_to_c_data__mlds_output_initializer_5_p_0(HeadVar__1_1, Type_32, Initializer_33);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_6_p_0(HeadVar__1_1, HeadVar__2_2, GCStmt_34, (MR_String) "");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = LocalVarDefns_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statements_6_p_0(
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
      MR_Word Stmt_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Stmts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__4_4;

      ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Stmt_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Stmts_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_stmt__mlds_output_switch_case_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv2_Count_14;

    ml_backend__mlds_to_c_stmt__mlds_output_computed_goto_label_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_Count_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_Count_14));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_c_stmt__IntroducedFrom__pred__mlds_output_stmt_block__152__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_stmt__mlds_output_target_code_component_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_1(
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
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word FuncInfo_9,
  MR_Word Stmt_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Var_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);

    // setup for model_det tailcalls optimized into a loop
    ;
    ml_backend__mlds_to_c_util__c_output_stmt_context_4_p_0(Var_42, Stmt_10);
    switch (MR_tag((MR_Word) Stmt_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns_440 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_10, (MR_Integer) 0))));
          MR_Word FuncDefns_441 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_10, (MR_Integer) 1))));
          MR_Word SubStmts_442 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_10, (MR_Integer) 2))));
          MR_Word Context_443 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_10, (MR_Integer) 3))));
          MR_Integer BlockIndent_445 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
          MR_Word FuncName_446;
          MR_Word ModuleName_448;
          MR_Word Var_477;

          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
          mercury__io__write_string_3_p_0((MR_String) "{\n");
          FuncName_446 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncInfo_9, (MR_Integer) 0))));
          ModuleName_448 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncName_446, (MR_Integer) 0))));
          if ((FuncDefns_441 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            if (!((LocalVarDefns_440 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_6_p_0(Opts_7, BlockIndent_445, (MR_Integer) 0, LocalVarDefns_440);
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
          else
          {
            MR_Word Var_460;
            MR_Word Var_463 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
            MR_Word Var_465;
            MR_Box conv1_STATE_VARIABLE_IO_40_466;

            {
              Var_460 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_460, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_460, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_3));
              MR_hl_field(MR_mktag(0), Var_460, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_460, 3) = ((MR_Box) (Var_463));
              MR_hl_field(MR_mktag(0), Var_460, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_460, (MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_block\'/6", (MR_String) "nested functions in target C code");
            {
              Var_465 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_465, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), Var_465, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_4));
              MR_hl_field(MR_mktag(0), Var_465, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_465, 3) = ((MR_Box) (Opts_7));
              MR_hl_field(MR_mktag(0), Var_465, 4) = ((MR_Box) (BlockIndent_445));
              MR_hl_field(MR_mktag(0), Var_465, 5) = ((MR_Box) (ModuleName_448));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_465, FuncDefns_441, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_40_466);
            mercury__io__write_string_3_p_0((MR_String) "\n");
            if (!((LocalVarDefns_440 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_6_p_0(Opts_7, BlockIndent_445, (MR_Integer) 0, LocalVarDefns_440);
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            ml_backend__mlds_to_c_func__mlds_output_function_defns_6_p_0(Opts_7, BlockIndent_445, ModuleName_448, FuncDefns_441);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          ml_backend__mlds_to_c_stmt__mlds_output_statements_6_p_0(Opts_7, BlockIndent_445, FuncInfo_9, SubStmts_442);
          Var_477 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_477, Context_443);
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_1126 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Stmt_10, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Cond_1127 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_10, (MR_Integer) 1))));
          MR_Word BodyStmt_1128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_10, (MR_Integer) 2))));
          MR_Word Context_1130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_10, (MR_Integer) 4))));
          MR_Integer ScopeIndent_1131;
          MR_Word BodyOpts_1132;
          MR_Word Var_1153;
          MR_String Var_1154;
          MR_Unsigned packed_word_26;

          ml_backend__mlds_to_target_util__scope_indent_3_p_0(BodyStmt_1128, Indent_8, &ScopeIndent_1131);
          Var_1153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
          Var_1154 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
          packed_word_26 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2)));
          {
            BodyOpts_1132 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BodyOpts_1132, 0) = ((MR_Box) (Var_1153));
            MR_hl_field(MR_mktag(0), BodyOpts_1132, 1) = ((MR_Box) (Var_1154));
            MR_hl_field(MR_mktag(0), BodyOpts_1132, 2) = (MR_Box) ((((packed_word_26 & (~((MR_Unsigned) 3U)))) | (MR_Unsigned) ((MR_Integer) 2)));
          }
          switch (Kind_1126) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_1138;

                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                mercury__io__write_string_3_p_0((MR_String) "do\n");
                ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(BodyOpts_1132, ScopeIndent_1131, FuncInfo_9, BodyStmt_1128);
                Var_1138 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_1138, Context_1130);
                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                mercury__io__write_string_3_p_0((MR_String) "while (");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Cond_1127);
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_Opts_7;
                MR_Integer next_value_of_Indent_8;
                MR_Word next_value_of_Stmt_10;

                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                mercury__io__write_string_3_p_0((MR_String) "while (");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Cond_1127);
                mercury__io__write_string_3_p_0((MR_String) ")\n");
                // direct tailcall eliminated
                ;
                next_value_of_Opts_7 = BodyOpts_1132;
                next_value_of_Indent_8 = ScopeIndent_1131;
                next_value_of_Stmt_10 = BodyStmt_1128;
                Opts_7 = next_value_of_Opts_7;
                Indent_8 = next_value_of_Indent_8;
                Stmt_10 = next_value_of_Stmt_10;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Cond_873 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_10, (MR_Integer) 0))));
          MR_Word Then0_874 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_10, (MR_Integer) 1))));
          MR_Word MaybeElse_875 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_10, (MR_Integer) 2))));
          MR_Word Context_876 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_10, (MR_Integer) 3))));
          MR_Word Then_881;
          MR_Integer ScopeIndent_885;
          MR_Word ThenContext_880;
          MR_Word Var_892;

          succeeded = (MaybeElse_875 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Then0_874)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_892 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_874, (MR_Integer) 2))));
              ThenContext_880 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_874, (MR_Integer) 3))));
              succeeded = (Var_892 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
          {
            MR_Word Var_895;

            {
              Var_895 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_895, 0) = ((MR_Box) (Then0_874));
              MR_hl_field(MR_mktag(1), Var_895, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Then_881 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Then_881, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Then_881, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Then_881, 2) = ((MR_Box) (Var_895));
              MR_hl_field(MR_mktag(0), Then_881, 3) = ((MR_Box) (ThenContext_880));
            }
          }
          else
          {
            MR_Word ThenContext_915;
            MR_Word Var_897;

            succeeded = (MaybeElse_875 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Then0_874)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_897 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_874, (MR_Integer) 2))));
                ThenContext_915 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_874, (MR_Integer) 3))));
                succeeded = (Var_897 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_900;

              {
                Var_900 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_900, 0) = ((MR_Box) (Then0_874));
                MR_hl_field(MR_mktag(1), Var_900, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Then_881 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Then_881, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Then_881, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Then_881, 2) = ((MR_Box) (Var_900));
                MR_hl_field(MR_mktag(0), Then_881, 3) = ((MR_Box) (ThenContext_915));
              }
            }
            else
              Then_881 = Then0_874;
          }
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
          mercury__io__write_string_3_p_0((MR_String) "if (");
          ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Cond_873);
          mercury__io__write_string_3_p_0((MR_String) ")\n");
          ml_backend__mlds_to_target_util__scope_indent_3_p_0(Then_881, Indent_8, &ScopeIndent_885);
          ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_7, ScopeIndent_885, FuncInfo_9, Then_881);
          if (!((MaybeElse_875 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word Else_886 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_875, (MR_Integer) 0))));
            MR_Integer ElseScopeIndent_891;
            MR_Word Var_909 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
            MR_Integer next_value_of_Indent_8;
            MR_Word next_value_of_Stmt_10;

            ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_909, Context_876);
            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
            mercury__io__write_string_3_p_0((MR_String) "else\n");
            succeeded = ((MR_tag((MR_Word) Else_886)) == (MR_Integer) 2);
            if (succeeded)
              ElseScopeIndent_891 = Indent_8;
            else
              ml_backend__mlds_to_target_util__scope_indent_3_p_0(Else_886, Indent_8, &ElseScopeIndent_891);
            // direct tailcall eliminated
            ;
            next_value_of_Indent_8 = ElseScopeIndent_891;
            next_value_of_Stmt_10 = Else_886;
            Indent_8 = next_value_of_Indent_8;
            Stmt_10 = next_value_of_Stmt_10;
            continue;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Val_988 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));
              MR_Word Cases_990 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 4))));
              MR_Word Default_991 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 5))));
              MR_Word Context_992 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 6))));
              MR_Word CaseOpts_993;
              MR_Word Var_994 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
              MR_Integer Var_1003;
              MR_Word Var_1006;
              MR_Integer Var_1008;
              MR_Word Var_1010;
              MR_Word Var_1030;
              MR_String Var_1031;
              MR_Unsigned packed_word_22;
              MR_Box conv5_STATE_VARIABLE_IO_34_1007;

              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_994, Context_992);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "switch (");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Val_988);
              mercury__io__write_string_3_p_0((MR_String) ") {\n");
              Var_1030 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
              Var_1031 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
              packed_word_22 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2)));
              {
                CaseOpts_993 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CaseOpts_993, 0) = ((MR_Box) (Var_1030));
                MR_hl_field(MR_mktag(0), CaseOpts_993, 1) = ((MR_Box) (Var_1031));
                MR_hl_field(MR_mktag(0), CaseOpts_993, 2) = (MR_Box) ((((packed_word_22 & (~((MR_Unsigned) 3U)))) | (MR_Unsigned) ((MR_Integer) 1)));
              }
              Var_1003 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
              ml_backend__mlds_to_c_stmt__mlds_output_switch_default_7_p_0(CaseOpts_993, Var_1003, FuncInfo_9, Context_992, Default_991);
              Var_1008 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
              {
                Var_1006 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_1006, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_10[0]));
                MR_hl_field(MR_mktag(0), Var_1006, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_11));
                MR_hl_field(MR_mktag(0), Var_1006, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_1006, 3) = ((MR_Box) (CaseOpts_993));
                MR_hl_field(MR_mktag(0), Var_1006, 4) = ((MR_Box) (Var_1008));
                MR_hl_field(MR_mktag(0), Var_1006, 5) = ((MR_Box) (FuncInfo_9));
                MR_hl_field(MR_mktag(0), Var_1006, 6) = ((MR_Box) (Context_992));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_1006, Cases_990, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_34_1007);
              Var_1010 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_1010, Context_992);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String LabelName_936 = ((MR_String) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Integer Var_938 = (MR_Integer) ((MR_Unsigned) Indent_8 - (MR_Unsigned) 1);
              MR_String Var_948;

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_938);
              Var_948 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName_936);
              mercury__io__write_string_3_p_0(Var_948);
              mercury__io__write_string_3_p_0((MR_String) ":;\n");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_809 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              switch (MR_tag((MR_Word) Target_809)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Target_809)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word BreakContext_812 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (BreakContext_812) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                          case (MR_Integer) 0:
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_goto\'/5", (MR_String) "goto_break_switch not in switch");
                              return;
                            }
                            break;
                          case (MR_Integer) 1:
                            mercury__io__write_string_3_p_0((MR_String) "break;\n");
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word BreakContext_829 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (BreakContext_829) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                            mercury__io__write_string_3_p_0((MR_String) "break;\n");
                            break;
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_goto\'/5", (MR_String) "goto_break_loop not in loop");
                              return;
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      mercury__io__write_string_3_p_0((MR_String) "continue;\n");
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String LabelName_811 = ((MR_String) ((MR_hl_field(MR_mktag(1), Target_809, (MR_Integer) 0))));
                    MR_String Var_864;

                    mercury__io__write_string_3_p_0((MR_String) "goto ");
                    Var_864 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName_811);
                    mercury__io__write_string_3_p_0(Var_864);
                    mercury__io__write_string_3_p_0((MR_String) ";\n");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Expr_726 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word Labels_727 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));
              MR_Word Context_728 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 3))));
              MR_Word Var_736;
              MR_Word Var_739;
              MR_Integer Var_741;
              MR_Word Var_746;
              MR_Box conv4__FinalCount_729;
              MR_Box conv3_STATE_VARIABLE_IO_24_738;

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "switch (");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Expr_726);
              mercury__io__write_string_3_p_0((MR_String) ") {\n");
              {
                Var_736 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_736, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_9[0]));
                MR_hl_field(MR_mktag(0), Var_736, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_9));
                MR_hl_field(MR_mktag(0), Var_736, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_736, 3) = ((MR_Box) (Opts_7));
                MR_hl_field(MR_mktag(0), Var_736, 4) = ((MR_Box) (Context_728));
                MR_hl_field(MR_mktag(0), Var_736, 5) = ((MR_Box) (Indent_8));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_736, Labels_727, ((MR_Box) ((MR_Integer) 0)), &conv4__FinalCount_729, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_24_738);
              Var_739 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_739, Context_728);
              Var_741 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_741);
              mercury__io__write_string_3_p_0((MR_String) "default: /*NOTREACHED*/ MR_assert(0);\n");
              Var_746 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_746, Context_728);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Signature_525 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word FuncRval_526 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));
              MR_Word CallArgs_527 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 3))));
              MR_Word Results_528 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 4))));
              MR_Word IsTailCall_529 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 5))) & (MR_Integer) 3);
              MR_Word Context_530 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 6))));
              MR_Word CallerName_531 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncInfo_9, (MR_Integer) 0))));
              MR_Word CallerSignature_532 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncInfo_9, (MR_Integer) 1))));
              MR_Word ProfileCalls_533 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
              MR_Word ProfileTime_534 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
              MR_Word CallHasReturn_535;

              CallHasReturn_535 = ml_backend__mlds_to_c_stmt__find_out_if_call_has_return_4_f_0(IsTailCall_529, Results_528, Signature_525, CallerSignature_532);
              succeeded = (ProfileCalls_533 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (ProfileTime_534 == (MR_Integer) 0);
                if (succeeded)
                  switch (CallHasReturn_535) {
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
                MR_Word Var_612 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
                MR_Word Var_630;

                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_612, Context_530);
                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                switch (CallHasReturn_535) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    mercury__io__write_string_3_p_0((MR_String) "return ");
                    break;
                }
                if (!((Results_528 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word Var_657 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_528, (MR_Integer) 1))));
                  MR_Word Var_658 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_528, (MR_Integer) 0))));

                  if ((Var_657 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Var_658);
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                  else
                  {
                    MR_Word Var_618;

                    {
                      Var_618 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_618, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[0]));
                      MR_hl_field(MR_mktag(0), Var_618, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_5));
                      MR_hl_field(MR_mktag(0), Var_618, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_618, 3) = ((MR_Box) (Opts_7));
                    }
                    ml_backend__mlds_to_c_type__mlds_output_return_list_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Results_528, Var_618);
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                }
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, FuncRval_526);
                mercury__io__write_string_3_p_0((MR_String) "(");
                {
                  Var_630 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_630, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[1]));
                  MR_hl_field(MR_mktag(0), Var_630, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_6));
                  MR_hl_field(MR_mktag(0), Var_630, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_630, 3) = ((MR_Box) (Opts_7));
                }
                mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_527, (MR_String) ", ", Var_630);
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
              else
              {
                MR_Integer BodyIndent_536 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
                MR_Word Var_673;
                MR_Word Var_691;

                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                mercury__io__write_string_3_p_0((MR_String) "{\n");
                switch (ProfileCalls_533) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    ml_backend__mlds_to_c_stmt__mlds_output_call_profile_instr_7_p_0(Opts_7, Context_530, BodyIndent_536, FuncRval_526, CallerName_531);
                    break;
                }
                Var_673 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_673, Context_530);
                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(BodyIndent_536);
                switch (CallHasReturn_535) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    mercury__io__write_string_3_p_0((MR_String) "return ");
                    break;
                  case (MR_Integer) 2:
                    {
                    }
                    break;
                }
                if (!((Results_528 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word Var_718 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_528, (MR_Integer) 1))));
                  MR_Word Var_719 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_528, (MR_Integer) 0))));

                  if ((Var_718 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Var_719);
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                  else
                  {
                    MR_Word Var_679;

                    {
                      Var_679 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_679, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[0]));
                      MR_hl_field(MR_mktag(0), Var_679, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_7));
                      MR_hl_field(MR_mktag(0), Var_679, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_679, 3) = ((MR_Box) (Opts_7));
                    }
                    ml_backend__mlds_to_c_type__mlds_output_return_list_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Results_528, Var_679);
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                }
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, FuncRval_526);
                mercury__io__write_string_3_p_0((MR_String) "(");
                {
                  Var_691 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_691, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[1]));
                  MR_hl_field(MR_mktag(0), Var_691, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_8));
                  MR_hl_field(MR_mktag(0), Var_691, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_691, 3) = ((MR_Box) (Opts_7));
                }
                mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_527, (MR_String) ", ", Var_691);
                mercury__io__write_string_3_p_0((MR_String) ");\n");
                switch (CallHasReturn_535) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    switch (ProfileTime_534) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                        }
                        break;
                      case (MR_Integer) 1:
                        ml_backend__mlds_to_c_stmt__mlds_output_time_profile_instr_6_p_0(Opts_7, Context_530, BodyIndent_536, CallerName_531);
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_545 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);

                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_545, Context_530);
                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(BodyIndent_536);
                      mercury__io__write_string_3_p_0((MR_String) "return;\n");
                    }
                    break;
                }
                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                mercury__io__write_string_3_p_0((MR_String) "}\n");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Results_956 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "return");
              if (!((Results_956 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Var_978 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_956, (MR_Integer) 1))));
                MR_Word Var_979 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_956, (MR_Integer) 0))));

                if ((Var_978 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__io__write_char_3_p_0((MR_Char) 32);
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Var_979);
                }
                else
                {
                  MR_Word Var_966;

                  {
                    Var_966 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_966, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[1]));
                    MR_hl_field(MR_mktag(0), Var_966, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_10));
                    MR_hl_field(MR_mktag(0), Var_966, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_966, 3) = ((MR_Box) (Opts_7));
                  }
                  ml_backend__mlds_to_c_type__mlds_output_return_list_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Results_956, Var_966);
                }
              }
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Ref_1073 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word BodyStmt0_1074 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));
              MR_Word HandlerStmt_1075 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 3))));
              MR_Word Context_1076 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 4))));
              MR_Word BodyStmt_1079;
              MR_Integer Var_1091;
              MR_Word Var_1094;
              MR_Integer Var_1099;
              MR_Word Var_1080;
              MR_Word Var_1117;
              MR_Integer next_value_of_Indent_8;
              MR_Word next_value_of_Stmt_10;

              succeeded = ((MR_tag((MR_Word) BodyStmt0_1074)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_1080 = ((MR_Word) ((MR_hl_field(MR_mktag(2), BodyStmt0_1074, (MR_Integer) 2))));
                Var_1117 = ((MR_Word) ((MR_hl_field(MR_mktag(2), BodyStmt0_1074, (MR_Integer) 3))));
                succeeded = mercury__term____Unify____context_0_0(Context_1076, Var_1117);
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
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "if (MR_builtin_setjmp(");
              ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Ref_1073);
              mercury__io__write_string_3_p_0((MR_String) ") == 0)\n");
              Var_1091 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
              ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_7, Var_1091, FuncInfo_9, BodyStmt_1079);
              Var_1094 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_1094, Context_1076);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "else\n");
              Var_1099 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_Indent_8 = Var_1099;
              next_value_of_Stmt_10 = HandlerStmt_1075;
              Indent_8 = next_value_of_Indent_8;
              Stmt_10 = next_value_of_Stmt_10;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Ref_795 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "MR_builtin_longjmp(");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Ref_795);
              mercury__io__write_string_3_p_0((MR_String) ", 1);\n");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word AtomicStmt_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word Context_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) AtomicStmt_105)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                    mercury__io__write_string_3_p_0((MR_String) "MR_GC_check();\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Comment_107 = ((MR_String) ((MR_hl_field(MR_mktag(1), AtomicStmt_105, (MR_Integer) 0))));

                    succeeded = (strcmp(Comment_107, (MR_String) "") == 0);
                    if (!(succeeded))
                    {
                      MR_Word CommentLines_108;

                      CommentLines_108 = mercury__string__split_at_separator_2_f_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_4[0]), Comment_107);
                      ml_backend__mlds_to_c_stmt__write_comment_lines_4_p_0(Indent_8, CommentLines_108);
                    }
                    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                    mercury__io__write_string_3_p_0((MR_String) ";\n");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Lval_109 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_105, (MR_Integer) 0))));
                    MR_Word Rval_110 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_105, (MR_Integer) 1))));

                    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                    ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Lval_109);
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Rval_110);
                    mercury__io__write_string_3_p_0((MR_String) ";\n");
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Lval_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 1))));
                        MR_Word Rval_179 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 2))));

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "MR_assign_if_in_heap(");
                        ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Lval_178);
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Rval_179);
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Rval_180 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 1))));

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "MR_free_heap(");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Rval_180);
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Target_196 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 1))));
                        MR_Word Ptag_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 2))));
                        MR_Word Type_199 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 4))));
                        MR_Word MaybeSize_200 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 5))));
                        MR_Word ArgRvalsTypes_202 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 7))));
                        MR_Word MayUseAtomic_203 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 8))) & (MR_Integer) 1);
                        MR_Word MaybeAllocId_204 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 9))));
                        MR_Word Base_207;
                        MR_Word GC_Method_209;
                        MR_String EndMkword_211;
                        MR_Integer Var_255;
                        MR_Integer Var_305;
                        MR_Word Var_308;
                        MR_Word Var_330;
                        uint8_t Var_261;

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "{\n");
                        Var_330 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
                        GC_Method_209 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 4)) & (MR_Integer) 7);
                        Var_255 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
                        succeeded = ((((MR_tag((MR_Word) Target_196)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Target_196, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          {
                            Base_207 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Base_207, 0) = ((MR_Box) (Target_196));
                          }
                          switch (GC_Method_209) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 5:
                              {
                                MR_Word NeedsForwardingSpace_210;
                                MR_Integer Var_234;

                                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_330, Context_106);
                                Var_234 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
                                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_234);
                                mercury__io__write_string_3_p_0((MR_String) "MR_GC_check();\n");
                                NeedsForwardingSpace_210 = ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(Type_199);
                                switch (NeedsForwardingSpace_210) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Word Var_239 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
                                      MR_Integer Var_241;
                                      MR_Integer Var_248;

                                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_239, Context_106);
                                      Var_241 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_241);
                                      mercury__io__write_string_3_p_0((MR_String) "// reserve space for GC forwarding pointer\n");
                                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_239, Context_106);
                                      Var_248 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_248);
                                      mercury__io__write_string_3_p_0((MR_String) "MR_hp_alloc(1);\n");
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
                          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_330, Context_106);
                          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_255);
                          ml_backend__mlds_to_c_stmt__write_lval_or_string_4_p_0(Opts_7, Base_207);
                        }
                        else
                        {
                          MR_Word Var_219;
                          MR_Integer Var_221;

                          Base_207 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_stmt_scalar_common_2[3]));
                          Var_219 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
                          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_219, Context_106);
                          Var_221 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
                          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_221);
                          ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_7, Type_199);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "base");
                          ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_7, Type_199, (MR_Word) ((MR_Unsigned) 0U));
                          mercury__io__write_string_3_p_0((MR_String) ";\n");
                          switch (GC_Method_209) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 5:
                              {
                                MR_Word NeedsForwardingSpace_1300;
                                MR_Integer Var_1302;

                                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_330, Context_106);
                                Var_1302 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
                                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_1302);
                                mercury__io__write_string_3_p_0((MR_String) "MR_GC_check();\n");
                                NeedsForwardingSpace_1300 = ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(Type_199);
                                switch (NeedsForwardingSpace_1300) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Integer Var_1216;
                                      MR_Integer Var_1223;

                                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_219, Context_106);
                                      Var_1216 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_1216);
                                      mercury__io__write_string_3_p_0((MR_String) "// reserve space for GC forwarding pointer\n");
                                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_219, Context_106);
                                      Var_1223 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_1223);
                                      mercury__io__write_string_3_p_0((MR_String) "MR_hp_alloc(1);\n");
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
                          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_330, Context_106);
                          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_255);
                          ml_backend__mlds_to_c_stmt__write_lval_or_string_4_p_0(Opts_7, Base_207);
                        }
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                        Var_261 = (uint8_t) (Ptag_197);
                        succeeded = (Var_261 == UINT8_C(0));
                        if (succeeded)
                        {
                          ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_7, Type_199);
                          EndMkword_211 = (MR_String) "";
                        }
                        else
                        {
                          ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_7, Type_199);
                          mercury__io__write_string_3_p_0((MR_String) "MR_mkword(");
                          ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_197);
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                          EndMkword_211 = (MR_String) ")";
                        }
                        switch (MayUseAtomic_203) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            mercury__io__write_string_3_p_0((MR_String) "MR_new_object(");
                            break;
                          case (MR_Integer) 0:
                            mercury__io__write_string_3_p_0((MR_String) "MR_new_object_atomic(");
                            break;
                        }
                        ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_7, Type_199);
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        if ((MaybeSize_200 == (MR_Word) ((MR_Unsigned) 0U)))
                          mercury__io__write_int_3_p_0((MR_Integer) -1);
                        else
                        {
                          MR_Word Size_212 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSize_200, (MR_Integer) 0))));
                          MR_Integer SizeInt_213;
                          MR_Word Var_280;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          succeeded = ((((MR_tag((MR_Word) Size_212)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Size_212, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_280 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Size_212, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_280)) == (MR_Integer) 2);
                            if (succeeded)
                              SizeInt_213 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_280, (MR_Integer) 0))));
                          }
                          if (succeeded)
                            mercury__io__write_int_3_p_0(SizeInt_213);
                          else
                            ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Size_212);
                          mercury__io__write_string_3_p_0((MR_String) " * sizeof(MR_Word))");
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ml_backend__mlds_to_c_stmt__mlds_output_maybe_alloc_id_3_p_0(MaybeAllocId_204);
                        mercury__io__write_string_3_p_0((MR_String) ", NULL)");
                        mercury__io__write_string_3_p_0(EndMkword_211);
                        mercury__io__write_string_3_p_0((MR_String) ";\n");
                        if (!(((MR_tag((MR_Word) Base_207)) == (MR_Integer) 0)))
                        {
                          MR_String BaseVarName1_215 = ((MR_String) ((MR_hl_field(MR_mktag(1), Base_207, (MR_Integer) 0))));
                          MR_Word Var_293 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
                          MR_Integer Var_295;

                          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_293, Context_106);
                          Var_295 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
                          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_295);
                          ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Target_196);
                          mercury__io__write_string_3_p_0((MR_String) " = ");
                          mercury__io__write_string_3_p_0(BaseVarName1_215);
                          mercury__io__write_string_3_p_0((MR_String) ";\n");
                        }
                        Var_305 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
                        ml_backend__mlds_to_c_stmt__mlds_output_init_args_9_p_0(ArgRvalsTypes_202, Context_106, (MR_Integer) 0, Base_207, Ptag_197, Opts_7, Var_305);
                        Var_308 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
                        ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_308, Context_106);
                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "}\n");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Lval_181 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 1))));

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "MR_mark_hp(");
                        ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Lval_181);
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Rval_182 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 1))));

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "MR_restore_hp(");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Rval_182);
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_atomic\'/5", (MR_String) "trail_ops not implemented");
                        return;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word TargetLang_121 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 1))) & (MR_Integer) 3);
                        MR_Word Components_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_105, (MR_Integer) 2))));

                        switch (TargetLang_121) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word Var_131;
                              MR_Box conv0_STATE_VARIABLE_IO_41;

                              {
                                Var_131 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_5[0]));
                                MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_2));
                                MR_hl_field(MR_mktag(0), Var_131, 2) = ((MR_Box) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(0), Var_131, 3) = ((MR_Box) (Opts_7));
                                MR_hl_field(MR_mktag(0), Var_131, 4) = ((MR_Box) (Context_106));
                              }
                              mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_131, Components_122, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_41);
                            }
                            break;
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                            {
                              mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_atomic\'/5", (MR_String) "inline_target_code only works for language C");
                              return;
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_atomic\'/5", (MR_String) "outline_foreign_proc is not used in C backend");
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
ml_backend__mlds_to_c_stmt__mlds_output_switch_default_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word FuncInfo_10,
  MR_Word Context_11,
  MR_Word Default_12)
{
  switch (MR_tag((MR_Word) Default_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Default_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);

            ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_32, Context_11);
            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
            mercury__io__write_string_3_p_0((MR_String) "default: /*NOTREACHED*/ MR_assert(0);\n");
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
        MR_Word Stmt_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Default_12, (MR_Integer) 0))));
        MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
        MR_Integer Var_22;
        MR_Word Var_25;
        MR_Integer Var_27;

        ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_17, Context_11);
        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
        mercury__io__write_string_3_p_0((MR_String) "default:\n");
        Var_22 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_8, Var_22, FuncInfo_10, Stmt_14);
        Var_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
        ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_25, Context_11);
        Var_27 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_27);
        mercury__io__write_string_3_p_0((MR_String) "break;\n");
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word GCStmt_9,
  MR_String MaybeNewLine_10)
{
  switch (MR_tag((MR_Word) GCStmt_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stmt_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GCStmt_9, (MR_Integer) 0))));
        MR_Word ModuleName_33;
        MR_Word QualFuncName_35;
        MR_Word FuncInfo_36;

        mercury__io__write_string_3_p_0(MaybeNewLine_10);
        mercury__io__write_string_3_p_0((MR_String) "#if 0 // GC trace code\n");
        ModuleName_33 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_2[1]));
        {
          QualFuncName_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), QualFuncName_35, 0) = ((MR_Box) (ModuleName_33));
          MR_hl_field(MR_mktag(0), QualFuncName_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_stmt_scalar_common_2[2])));
        }
        {
          FuncInfo_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FuncInfo_36, 0) = ((MR_Box) (QualFuncName_35));
          MR_hl_field(MR_mktag(0), FuncInfo_36, 1) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_1[1]));
        }
        ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_7, Indent_8, FuncInfo_36, Stmt_31);
        mercury__io__write_string_3_p_0((MR_String) "#endif\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Stmt_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GCStmt_9, (MR_Integer) 0))));
        MR_Word ModuleName_14;
        MR_Word QualFuncName_16;
        MR_Word FuncInfo_17;

        mercury__io__write_string_3_p_0(MaybeNewLine_10);
        mercury__io__write_string_3_p_0((MR_String) "#if 0 // GC initialiser\n");
        ModuleName_14 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_2[1]));
        {
          QualFuncName_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), QualFuncName_16, 0) = ((MR_Box) (ModuleName_14));
          MR_hl_field(MR_mktag(0), QualFuncName_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_stmt_scalar_common_2[2])));
        }
        {
          FuncInfo_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FuncInfo_17, 0) = ((MR_Box) (QualFuncName_16));
          MR_hl_field(MR_mktag(0), FuncInfo_17, 1) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_1[1]));
        }
        ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_7, Indent_8, FuncInfo_17, Stmt_12);
        mercury__io__write_string_3_p_0((MR_String) "#endif\n");
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__write_lval_or_string_4_p_0(
  MR_Word Opts_5,
  MR_Word Base_6)
{
  if (((MR_tag((MR_Word) Base_6)) == (MR_Integer) 0))
  {
    MR_Word Target_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Base_6, (MR_Integer) 0))));

    ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_5, Target_8);
  }
  else
  {
    MR_String BaseVarName_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), Base_6, (MR_Integer) 0))));

    mercury__io__write_string_3_p_0(BaseVarName_9);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_init_args_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Integer ArgNum_3,
  MR_Word Base_4,
  MR_Word Ptag_5,
  MR_Word Opts_6,
  MR_Integer Indent_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ArgRvalType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgRvalsTypes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgRval_28;
      MR_Word ArgType_29;
      MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
      MR_Integer Var_49;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_ArgNum_3;

      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_32, Context_2);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
      mercury__io__write_string_3_p_0((MR_String) "MR_hl_field(");
      ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_5);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      if (((MR_tag((MR_Word) Base_4)) == (MR_Integer) 0))
      {
        MR_Word Target_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Base_4, (MR_Integer) 0))));

        ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_6, Target_72);
      }
      else
      {
        MR_String BaseVarName_73 = ((MR_String) ((MR_hl_field(MR_mktag(1), Base_4, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0(BaseVarName_73);
      }
      mercury__io__write_string_3_p_0((MR_String) ", ");
      mercury__io__write_int_3_p_0(ArgNum_3);
      mercury__io__write_string_3_p_0((MR_String) ") = ");
      ArgRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalType_19, (MR_Integer) 0))));
      ArgType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalType_19, (MR_Integer) 1))));
      ml_backend__mlds_to_c_data__mlds_output_boxed_rval_5_p_0(Opts_6, ArgType_29, ArgRval_28);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      Var_49 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ArgRvalsTypes_20;
      next_value_of_ArgNum_3 = Var_49;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      ArgNum_3 = next_value_of_ArgNum_3;
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
ml_backend__mlds_to_c_stmt__mlds_output_maybe_alloc_id_3_p_0(
  MR_Word MaybeAllocId_4)
{
  if ((MaybeAllocId_4 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_3_p_0((MR_String) "NULL");
  else
  {
    MR_Integer Num_6;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAllocId_4, (MR_Integer) 0))));
    MR_String Var_20;

    Num_6 = (MR_Integer) (Var_11);
    mercury__io__write_string_3_p_0((MR_String) "&MR_alloc_sites[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_2[0]), Num_6, &Var_20);
    mercury__io__write_string_3_p_0(Var_20);
    mercury__io__write_string_3_p_0((MR_String) "]");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__write_comment_lines_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String CommentLine_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word CommentLines_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (strcmp(CommentLine_10, (MR_String) "") == 0);
      if (succeeded)
        mercury__io__nl_2_p_0();
      else
      {
        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(HeadVar__1_1);
        mercury__io__write_string_3_p_0((MR_String) "// ");
        mercury__io__write_string_3_p_0(CommentLine_10);
        mercury__io__nl_2_p_0();
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = CommentLines_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_call_profile_instr_7_p_0(
  MR_Word Opts_8,
  MR_Word Context_9,
  MR_Integer Indent_10,
  MR_Word CalleeFuncRval_11,
  MR_Word CallerName_12)
{
  {
    MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);

    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_16, Context_9);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    mercury__io__write_string_3_p_0((MR_String) "MR_prof_call_profile(");
    ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_8, CalleeFuncRval_11);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_3_p_0(CallerName_12);
    mercury__io__write_string_3_p_0((MR_String) ");\n");
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
        TypeInfo_17_17 = (MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[0]);
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
ml_backend__mlds_to_c_stmt__mlds_output_local_var_decl_6_p_0(
  MR_Word Opts_7,
  MR_Word LocalVarName_8,
  MR_Word Type_9,
  MR_Word InitializerSize_10)
{
  {
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_7, Type_9);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(LocalVarName_8);
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_7, Type_9, InitializerSize_10);
  }
}

void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_time_profile_instr_6_p_0(
  MR_Word Opts_7,
  MR_Word Context_8,
  MR_Integer Indent_9,
  MR_Word QualFuncName_10)
{
  {
    MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);

    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_14, Context_8);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    mercury__io__write_string_3_p_0((MR_String) "MR_set_prof_current_proc(");
    ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_3_p_0(QualFuncName_10);
    mercury__io__write_string_3_p_0((MR_String) ");\n");
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
