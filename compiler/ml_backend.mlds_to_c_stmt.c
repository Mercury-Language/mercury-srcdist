/*
** Automatically generated from `mlds_to_c_stmt.m'
** by the Mercury compiler,
** version rotd-2025-08-15
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
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
#include "ml_backend.mlds_to_c_data.mih"
#include "ml_backend.mlds_to_c_func.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_type.mih"
#include "ml_backend.mlds_to_c_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




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
ml_backend__mlds_to_c_stmt__IntroducedFrom__pred__mlds_output_stmt_block__159__1_2_p_0(
  MR_Word HeadVar__1_45,
  MR_Word HeadVar__2_46);

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____maybe_call_has_return_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____maybe_call_has_return_0_0(
  MR_Word HeadVar__1_1,
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
  MR_String IndentStr_13,
  MR_Word Label_14,
  MR_Integer STATE_VARIABLE_Count_0_18,
  MR_Integer * STATE_VARIABLE_Count_19);

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
  MR_Unsigned Indent_11,
  MR_Word FuncInfo_12,
  MR_Word Context_13,
  MR_Word Case_14);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_case_cond_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_String IndentStr_10,
  MR_Word Context_11,
  MR_Word Match_12);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
  MR_Word Separate_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statements_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
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
  MR_Unsigned Indent_11,
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
  MR_Unsigned Indent_8);

static MR_Word MR_CALL 
ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(
  MR_Word Type_3);

static MR_String MR_CALL 
ml_backend__mlds_to_c_stmt__maybe_alloc_id_to_string_1_f_0(
  MR_Word MaybeAllocId_3);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__write_comment_lines_5_p_0(
  MR_Word Stream_1,
  MR_String IndentStr_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_call_profile_instr_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Word Context_11,
  MR_Unsigned Indent_12,
  MR_Word CalleeFuncRval_13,
  MR_Word CallerName_14);

static MR_String MR_CALL 
ml_backend__mlds_to_c_stmt__local_var_decl_to_type_name_4_f_0(
  MR_Word Opts_6,
  MR_Word LocalVarName_7,
  MR_Word Type_8,
  MR_Word InitializerSize_9);

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
  /* row   0 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "dummy")) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "base")) },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_2[2][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_3[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_3[0])),
    ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_target_or_dump_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_target_or_dump_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_7[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_8[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_9[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_10[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__type_ctor_info_func_info_c_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
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
#include "io.stream_ops.mh"


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

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_func_info_c_0_0[1] = { &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_func_info_c_0_0 };

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

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_name_ordered_func_info_c_0[1] = { &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_func_info_c_0_0 };

static const MR_Integer ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_func_info_c_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__type_ctor_info_func_info_c_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Unify____func_info_c_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Compare____func_info_c_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_stmt",
  (MR_String) "func_info_c",
  { ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_name_ordered_func_info_c_0 },
  { ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_ptag_ordered_func_info_c_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_func_info_c_0,

};

static const MR_PseudoTypeInfo ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__field_types_lval_or_string_0_0[1] = { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0) };

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

static const MR_PseudoTypeInfo ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__field_types_lval_or_string_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_lval_or_string_0_0[1] = { &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_lval_or_string_0_0 };

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_lval_or_string_0_1[1] = { &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_lval_or_string_0_1 };

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
  { ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_name_ordered_lval_or_string_0 },
  { ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_ptag_ordered_lval_or_string_0 },
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
  { ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_name_ordered_maybe_call_has_return_0 },
  { ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_ordinal_ordered_maybe_call_has_return_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_maybe_call_has_return_0,

};

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__IntroducedFrom__pred__mlds_output_stmt_block__159__1_2_p_0(
  MR_Word HeadVar__1_45,
  MR_Word HeadVar__2_46)
{
  MR_bool succeeded = (HeadVar__1_45 == HeadVar__2_46);

  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____maybe_call_has_return_0_0(
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

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____maybe_call_has_return_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____lval_or_string_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

      ml_backend__mlds____Compare____mlds_lval_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____lval_or_string_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
    }
  }
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____func_info_c_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    ml_backend__mlds____Compare____qual_function_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      ml_backend__mlds____Compare____mlds_func_signature_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____func_info_c_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = ml_backend__mlds____Unify____qual_function_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = ml_backend__mlds____Unify____mlds_func_signature_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
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
        MR_Word FuncName_21 = (MR_Word) ((MR_Word) (TargetCode_10));
        MR_String FuncNameStr_22;

        FuncNameStr_22 = ml_backend__mlds_to_c_name__qual_function_name_to_string_for_c_1_f_0(FuncName_21);
        mercury__io__write_string_4_p_0(Stream_8, FuncNameStr_22);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CodeString_12 = ((MR_String) ((MR_hl_field(1, TargetCode_10, 0))));
        MR_Word MaybeUserContext_13 = ((MR_Word) ((MR_hl_field(1, TargetCode_10, 1))));
        MR_Word LineNumbers_14 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_7, 2))) >> 16)) & (MR_Integer) 1);
        MR_Word InitContext_16;

        if ((MaybeUserContext_13 == (MR_Word) ((MR_Unsigned) 0U)))
          InitContext_16 = Context_9;
        else
          InitContext_16 = ((MR_Word) ((MR_hl_field(1, MaybeUserContext_13, 0))));
        ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_8, LineNumbers_14, InitContext_16);
        mercury__io__write_string_4_p_0(Stream_8, CodeString_12);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        ml_backend__mlds_to_c_util__c_reset_context_4_p_0(Stream_8, LineNumbers_14);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String CodeString_51 = ((MR_String) ((MR_hl_field(2, TargetCode_10, 0))));

        mercury__io__write_string_4_p_0(Stream_8, CodeString_51);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TargetCode_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_17 = ((MR_Word) ((MR_hl_field(3, TargetCode_10, 1))));

            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_17, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_18 = ((MR_Word) ((MR_hl_field(3, TargetCode_10, 1))));

            ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_7, Lval_18, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_19 = ((MR_Word) ((MR_hl_field(3, TargetCode_10, 1))));
            MR_String TypeStr_20;

            TypeStr_20 = ml_backend__mlds_to_c_type__type_to_string_for_c_2_f_0(Opts_7, Type_19);
            mercury__io__write_string_4_p_0(Stream_8, TypeStr_20);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word AllocId_23 = ((MR_Word) ((MR_hl_field(3, TargetCode_10, 1))));
            MR_String MaybeAllocIdStr_24;
            MR_Integer Num_70 = (MR_Integer) (AllocId_23);
            MR_String Var_77;
            MR_String Var_84;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), Num_70, &Var_77);
            Var_84 = mercury__string__f_43_43_2_f_0(Var_77, (MR_String) "]");
            MaybeAllocIdStr_24 = mercury__string__f_43_43_2_f_0((MR_String) "&MR_alloc_sites[", Var_84);
            mercury__io__write_string_4_p_0(Stream_8, MaybeAllocIdStr_24);
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
  MR_String IndentStr_13,
  MR_Word Label_14,
  MR_Integer STATE_VARIABLE_Count_0_18,
  MR_Integer * STATE_VARIABLE_Count_19)
{
  MR_String LabelStr_17;
  MR_Word Var_22;
  MR_String Var_53;
  MR_String LabelName_64 = (MR_String) (Label_14);

  LabelStr_17 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName_64);
  Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_10, 2))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_11, Var_22, Context_12);
  mercury__io__write_string_4_p_0(Stream_11, IndentStr_13);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "case ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), STATE_VARIABLE_Count_0_18, &Var_53);
  mercury__io__write_string_4_p_0(Stream_11, Var_53);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) ": goto ");
  mercury__io__write_string_4_p_0(Stream_11, LabelStr_17);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) ";\n");
  *STATE_VARIABLE_Count_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Count_0_18 + (MR_Unsigned) 1);
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_switch_case_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_stmt__mlds_output_case_cond_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_switch_case_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word FuncInfo_12,
  MR_Word Context_13,
  MR_Word Case_14)
{
  MR_Word FirstCond_16 = ((MR_Word) ((MR_hl_field(0, Case_14, 0))));
  MR_Word LaterConds_17 = ((MR_Word) ((MR_hl_field(0, Case_14, 1))));
  MR_Word Stmt_18 = ((MR_Word) ((MR_hl_field(0, Case_14, 2))));
  MR_String IndentStr_19;
  MR_String Indent1Str_20;
  MR_Unsigned Var_23;
  MR_Word Var_26;
  MR_Unsigned Var_28;
  MR_Word Var_31;
  MR_Box conv0_STATE_VARIABLE_IO_2_27;

  IndentStr_19 = libs__indent__indent2_string_1_f_0(Indent_11);
  Var_23 = (Indent_11 + (MR_Unsigned) 1U);
  Indent1Str_20 = libs__indent__indent2_string_1_f_0(Var_23);
  ml_backend__mlds_to_c_stmt__mlds_output_case_cond_7_p_0(Opts_9, Stream_10, IndentStr_19, Context_13, FirstCond_16);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_7[1]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_switch_case_8_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (Opts_9));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (Stream_10));
    MR_hl_field(0, Var_26, 5) = ((MR_Box) (IndentStr_19));
    MR_hl_field(0, Var_26, 6) = ((MR_Box) (Context_13));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, LaterConds_17, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_27);
  Var_28 = (Indent_11 + (MR_Unsigned) 1U);
  ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_9, Stream_10, Var_28, FuncInfo_12, Stmt_18);
  Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_9, 2))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_31, Context_13);
  mercury__io__write_string_4_p_0(Stream_10, Indent1Str_20);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "break;\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_case_cond_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_String IndentStr_10,
  MR_Word Context_11,
  MR_Word Match_12)
{
  MR_Word Var_81 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);

  if (((MR_tag((MR_Word) Match_12)) == (MR_Integer) 1))
  {
    MR_Word Low_15 = ((MR_Word) ((MR_hl_field(1, Match_12, 0))));
    MR_Word High_16 = ((MR_Word) ((MR_hl_field(1, Match_12, 1))));

    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_81, Context_11);
    mercury__io__write_string_4_p_0(Stream_9, IndentStr_10);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "case ");
    ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Low_15, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ... ");
    ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, High_16, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ":\n");
  }
  else
  {
    MR_Word Val_14 = ((MR_Word) ((MR_hl_field(0, Match_12, 0))));

    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_81, Context_11);
    mercury__io__write_string_4_p_0(Stream_9, IndentStr_10);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "case ");
    ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Val_14, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ":\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
  MR_Word Separate_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word LocalVarDefn_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word LocalVarDefns_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word LocalVarName_25 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_19, 0))));
      MR_Word Context_26 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_19, 1))));
      MR_Word Type_27 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_19, 2))));
      MR_Word Initializer_28 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_19, 3))));
      MR_Word GCStmt_29 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_19, 4))));
      MR_String IndentStr_30;
      MR_String LocalVarTypeName_31;
      MR_Word Var_32;
      MR_Word Var_34;
      MR_Word next_value_of_HeadVar__5_5;

      IndentStr_30 = libs__indent__indent2_string_1_f_0(Indent_3);
      Var_32 = ml_backend__mlds__get_initializer_array_size_1_f_0(Initializer_28);
      LocalVarTypeName_31 = ml_backend__mlds_to_c_stmt__local_var_decl_to_type_name_4_f_0(Opts_1, LocalVarName_25, Type_27, Var_32);
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
      Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_1, 2))) >> 16)) & (MR_Integer) 1);
      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_2, Var_34, Context_26);
      mercury__io__write_string_4_p_0(Stream_2, IndentStr_30);
      mercury__io__write_string_4_p_0(Stream_2, LocalVarTypeName_31);
      ml_backend__mlds_to_c_data__mlds_output_initializer_6_p_0(Opts_1, Stream_2, Type_27, Initializer_28);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ";\n");
      ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_7_p_0(Opts_1, Stream_2, Indent_3, GCStmt_29, (MR_String) "");
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
  MR_Unsigned Indent_3,
  MR_Word FuncInfo_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Stmt_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Stmts_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
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
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_stmt__mlds_output_switch_case_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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
  MR_Box closure = closure_arg;
  MR_Integer conv2_STATE_VARIABLE_Count_19;

  ml_backend__mlds_to_c_stmt__mlds_output_computed_goto_label_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Count_19);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Count_19));
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_stmt__IntroducedFrom__pred__mlds_output_stmt_block__159__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_stmt__mlds_output_target_code_component_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_line_separator_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word FuncInfo_11,
  MR_Word Stmt_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Var_44 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);

    // setup for model_det tailcalls optimized into a loop
    ;
    ml_backend__mlds_to_c_util__c_output_stmt_context_5_p_0(Stream_9, Var_44, Stmt_12);
    switch (MR_tag((MR_Word) Stmt_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns_457 = ((MR_Word) ((MR_hl_field(0, Stmt_12, 0))));
          MR_Word FuncDefns_458 = ((MR_Word) ((MR_hl_field(0, Stmt_12, 1))));
          MR_Word SubStmts_459 = ((MR_Word) ((MR_hl_field(0, Stmt_12, 2))));
          MR_Word Context_460 = ((MR_Word) ((MR_hl_field(0, Stmt_12, 3))));
          MR_Unsigned BlockIndent_461 = (Indent_10 + (MR_Unsigned) 1U);
          MR_String BraceIndentStr_462;
          MR_Word FuncName_463;
          MR_Word ModuleName_465;
          MR_Word PrintedSomething2_469;
          MR_Word Var_487;

          BraceIndentStr_462 = libs__indent__indent2_string_1_f_0(Indent_10);
          mercury__io__write_string_4_p_0(Stream_9, BraceIndentStr_462);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
          FuncName_463 = ((MR_Word) ((MR_hl_field(0, FuncInfo_11, 0))));
          ModuleName_465 = ((MR_Word) ((MR_hl_field(0, FuncName_463, 0))));
          if ((FuncDefns_458 == (MR_Word) ((MR_Unsigned) 0U)))
            if ((LocalVarDefns_457 == (MR_Word) ((MR_Unsigned) 0U)))
              PrintedSomething2_469 = (MR_Integer) 0;
            else
            {
              ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_7_p_0(Opts_8, Stream_9, BlockIndent_461, (MR_Integer) 0, LocalVarDefns_457);
              PrintedSomething2_469 = (MR_Integer) 1;
            }
          else
          {
            MR_Word Var_472;
            MR_Word Var_475 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 3)) & (MR_Integer) 1);
            MR_Word Var_477;
            MR_Word PrintedSomething1_1641;
            MR_Box conv1_STATE_VARIABLE_IO_2_1642;

            {
              Var_472 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_472, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_6[0]));
              MR_hl_field(0, Var_472, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_3));
              MR_hl_field(0, Var_472, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_472, 3) = ((MR_Box) (Var_475));
              MR_hl_field(0, Var_472, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_472, (MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_block\'/7", (MR_String) "nested functions in target C code");
            {
              Var_477 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_477, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_7[0]));
              MR_hl_field(0, Var_477, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_4));
              MR_hl_field(0, Var_477, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_477, 3) = ((MR_Box) (Opts_8));
              MR_hl_field(0, Var_477, 4) = ((MR_Box) (Stream_9));
              MR_hl_field(0, Var_477, 5) = ((MR_Box) (BlockIndent_461));
              MR_hl_field(0, Var_477, 6) = ((MR_Box) (ModuleName_465));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_477, FuncDefns_458, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_2_1642);
            if ((LocalVarDefns_457 == (MR_Word) ((MR_Unsigned) 0U)))
              PrintedSomething1_1641 = (MR_Integer) 1;
            else
            {
              mercury__io__nl_3_p_0(Stream_9);
              ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_7_p_0(Opts_8, Stream_9, BlockIndent_461, (MR_Integer) 0, LocalVarDefns_457);
              PrintedSomething1_1641 = (MR_Integer) 1;
            }
            switch (PrintedSomething1_1641) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                mercury__io__nl_3_p_0(Stream_9);
                break;
            }
            ml_backend__mlds_to_c_func__mlds_output_function_defns_8_p_0(Opts_8, (MR_Integer) 0, Stream_9, BlockIndent_461, ModuleName_465, FuncDefns_458);
            PrintedSomething2_469 = (MR_Integer) 1;
          }
          switch (PrintedSomething2_469) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              mercury__io__nl_3_p_0(Stream_9);
              break;
          }
          ml_backend__mlds_to_c_stmt__mlds_output_statements_7_p_0(Opts_8, Stream_9, BlockIndent_461, FuncInfo_11, SubStmts_459);
          Var_487 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_487, Context_460);
          mercury__io__write_string_4_p_0(Stream_9, BraceIndentStr_462);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_1161 = ((MR_Unsigned) ((MR_hl_field(1, Stmt_12, 0))) & (MR_Integer) 1);
          MR_Word Cond_1162 = ((MR_Word) ((MR_hl_field(1, Stmt_12, 1))));
          MR_Word BodyStmt_1163 = ((MR_Word) ((MR_hl_field(1, Stmt_12, 2))));
          MR_Word Context_1165 = ((MR_Word) ((MR_hl_field(1, Stmt_12, 4))));
          MR_Unsigned ScopeIndent_1166;
          MR_Word BodyOpts_1167;
          MR_String IndentStr_1168;
          MR_Word Var_1193;
          MR_String Var_1194;
          MR_Word Var_1195;
          MR_Word Var_1196;
          MR_Word Var_1197;
          MR_Word Var_1198;
          MR_Word Var_1199;
          MR_Word Var_1200;
          MR_Word Var_1201;
          MR_Word Var_1202;
          MR_Word Var_1203;
          MR_Word Var_1204;
          MR_Word Var_1205;
          MR_Word Var_1206;

          ml_backend__mlds_to_target_util__scope_indent_3_p_0(BodyStmt_1163, Indent_10, &ScopeIndent_1166);
          Var_1193 = ((MR_Word) ((MR_hl_field(0, Opts_8, 0))));
          Var_1194 = ((MR_String) ((MR_hl_field(0, Opts_8, 1))));
          Var_1195 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
          Var_1196 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 15)) & (MR_Integer) 1);
          Var_1197 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 14)) & (MR_Integer) 1);
          Var_1198 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 13)) & (MR_Integer) 1);
          Var_1199 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 12)) & (MR_Integer) 1);
          Var_1200 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 11)) & (MR_Integer) 1);
          Var_1201 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 10)) & (MR_Integer) 1);
          Var_1202 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 9)) & (MR_Integer) 1);
          Var_1203 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 7)) & (MR_Integer) 3);
          Var_1204 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 4)) & (MR_Integer) 7);
          Var_1205 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 3)) & (MR_Integer) 1);
          Var_1206 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 2)) & (MR_Integer) 1);
          {
            BodyOpts_1167 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, BodyOpts_1167, 0) = ((MR_Box) (Var_1193));
            MR_hl_field(0, BodyOpts_1167, 1) = ((MR_Box) (Var_1194));
            MR_hl_field(0, BodyOpts_1167, 2) = (MR_Box) (((((MR_Unsigned) (Var_1195) << 16)) | (((((MR_Unsigned) (Var_1196) << 15)) | (((((MR_Unsigned) (Var_1197) << 14)) | (((((MR_Unsigned) (Var_1198) << 13)) | (((((MR_Unsigned) (Var_1199) << 12)) | (((((MR_Unsigned) (Var_1200) << 11)) | (((((MR_Unsigned) (Var_1201) << 10)) | (((((MR_Unsigned) (Var_1202) << 9)) | (((((MR_Unsigned) (Var_1203) << 7)) | (((((MR_Unsigned) (Var_1204) << 4)) | (((((MR_Unsigned) (Var_1205) << 3)) | (((((MR_Unsigned) (Var_1206) << 2)) | (MR_Unsigned) ((MR_Integer) 2)))))))))))))))))))))))));
          }
          IndentStr_1168 = libs__indent__indent2_string_1_f_0(Indent_10);
          switch (Kind_1161) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_1184;

                mercury__io__write_string_4_p_0(Stream_9, IndentStr_1168);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "do\n");
                ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(BodyOpts_1167, Stream_9, ScopeIndent_1166, FuncInfo_11, BodyStmt_1163);
                Var_1184 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_1184, Context_1165);
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_1168);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "while (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Cond_1162, Stream_9);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_Opts_8;
                MR_Unsigned next_value_of_Indent_10;
                MR_Word next_value_of_Stmt_12;

                mercury__io__write_string_4_p_0(Stream_9, IndentStr_1168);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "while (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Cond_1162, Stream_9);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")\n");
                // direct tailcall eliminated
                ;
                next_value_of_Opts_8 = BodyOpts_1167;
                next_value_of_Indent_10 = ScopeIndent_1166;
                next_value_of_Stmt_12 = BodyStmt_1163;
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
          MR_Word Cond_935 = ((MR_Word) ((MR_hl_field(2, Stmt_12, 0))));
          MR_Word Then0_936 = ((MR_Word) ((MR_hl_field(2, Stmt_12, 1))));
          MR_Word MaybeElse_937 = ((MR_Word) ((MR_hl_field(2, Stmt_12, 2))));
          MR_Word Context_938 = ((MR_Word) ((MR_hl_field(2, Stmt_12, 3))));
          MR_Word Then_943;
          MR_String IndentStr_947;
          MR_Unsigned ScopeIndent_948;
          MR_Word ThenContext_942;
          MR_Word Var_955;

          succeeded = (MaybeElse_937 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Then0_936)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_955 = ((MR_Word) ((MR_hl_field(2, Then0_936, 2))));
              ThenContext_942 = ((MR_Word) ((MR_hl_field(2, Then0_936, 3))));
              succeeded = (Var_955 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
          {
            MR_Word Var_958;

            {
              Var_958 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_958, 0) = ((MR_Box) (Then0_936));
              MR_hl_field(1, Var_958, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Then_943 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Then_943, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Then_943, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Then_943, 2) = ((MR_Box) (Var_958));
              MR_hl_field(0, Then_943, 3) = ((MR_Box) (ThenContext_942));
            }
          }
          else
          {
            MR_Word ThenContext_981;
            MR_Word Var_960;

            succeeded = (MaybeElse_937 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Then0_936)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_960 = ((MR_Word) ((MR_hl_field(2, Then0_936, 2))));
                ThenContext_981 = ((MR_Word) ((MR_hl_field(2, Then0_936, 3))));
                succeeded = (Var_960 != (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              MR_Word Var_963;

              {
                Var_963 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_963, 0) = ((MR_Box) (Then0_936));
                MR_hl_field(1, Var_963, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Then_943 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Then_943, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Then_943, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Then_943, 2) = ((MR_Box) (Var_963));
                MR_hl_field(0, Then_943, 3) = ((MR_Box) (ThenContext_981));
              }
            }
            else
              Then_943 = Then0_936;
          }
          IndentStr_947 = libs__indent__indent2_string_1_f_0(Indent_10);
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_947);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "if (");
          ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Cond_935, Stream_9);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")\n");
          ml_backend__mlds_to_target_util__scope_indent_3_p_0(Then_943, Indent_10, &ScopeIndent_948);
          ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_8, Stream_9, ScopeIndent_948, FuncInfo_11, Then_943);
          if (!((MaybeElse_937 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word Else_949 = ((MR_Word) ((MR_hl_field(1, MaybeElse_937, 0))));
            MR_Unsigned ElseScopeIndent_954;
            MR_Word Var_974 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
            MR_Unsigned next_value_of_Indent_10;
            MR_Word next_value_of_Stmt_12;

            ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_974, Context_938);
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_947);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "else\n");
            succeeded = ((MR_tag((MR_Word) Else_949)) == (MR_Integer) 2);
            if (succeeded)
              ElseScopeIndent_954 = Indent_10;
            else
              ml_backend__mlds_to_target_util__scope_indent_3_p_0(Else_949, Indent_10, &ElseScopeIndent_954);
            // direct tailcall eliminated
            ;
            next_value_of_Indent_10 = ElseScopeIndent_954;
            next_value_of_Stmt_12 = Else_949;
            Indent_10 = next_value_of_Indent_10;
            Stmt_12 = next_value_of_Stmt_12;
            continue;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Stmt_12, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Val_1036 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 2))));
              MR_Word Cases_1038 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 4))));
              MR_Word Default_1039 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 5))));
              MR_Word Context_1040 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 6))));
              MR_String IndentStr_1041;
              MR_Word CaseOpts_1042;
              MR_Word Var_1043;
              MR_Unsigned Var_1050;
              MR_Word Var_1053;
              MR_Unsigned Var_1055;
              MR_Word Var_1057;
              MR_Word Var_1073;
              MR_String Var_1074;
              MR_Word Var_1075;
              MR_Word Var_1076;
              MR_Word Var_1077;
              MR_Word Var_1078;
              MR_Word Var_1079;
              MR_Word Var_1080;
              MR_Word Var_1081;
              MR_Word Var_1082;
              MR_Word Var_1083;
              MR_Word Var_1084;
              MR_Word Var_1085;
              MR_Word Var_1086;
              MR_Box conv5_STATE_VARIABLE_IO_6_1054;

              IndentStr_1041 = libs__indent__indent2_string_1_f_0(Indent_10);
              Var_1043 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_1043, Context_1040);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_1041);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "switch (");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Val_1036, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") {\n");
              Var_1073 = ((MR_Word) ((MR_hl_field(0, Opts_8, 0))));
              Var_1074 = ((MR_String) ((MR_hl_field(0, Opts_8, 1))));
              Var_1075 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
              Var_1076 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 15)) & (MR_Integer) 1);
              Var_1077 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 14)) & (MR_Integer) 1);
              Var_1078 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 13)) & (MR_Integer) 1);
              Var_1079 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 12)) & (MR_Integer) 1);
              Var_1080 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 11)) & (MR_Integer) 1);
              Var_1081 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 10)) & (MR_Integer) 1);
              Var_1082 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 9)) & (MR_Integer) 1);
              Var_1083 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 7)) & (MR_Integer) 3);
              Var_1084 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 4)) & (MR_Integer) 7);
              Var_1085 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 3)) & (MR_Integer) 1);
              Var_1086 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 2)) & (MR_Integer) 1);
              {
                CaseOpts_1042 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, CaseOpts_1042, 0) = ((MR_Box) (Var_1073));
                MR_hl_field(0, CaseOpts_1042, 1) = ((MR_Box) (Var_1074));
                MR_hl_field(0, CaseOpts_1042, 2) = (MR_Box) (((((MR_Unsigned) (Var_1075) << 16)) | (((((MR_Unsigned) (Var_1076) << 15)) | (((((MR_Unsigned) (Var_1077) << 14)) | (((((MR_Unsigned) (Var_1078) << 13)) | (((((MR_Unsigned) (Var_1079) << 12)) | (((((MR_Unsigned) (Var_1080) << 11)) | (((((MR_Unsigned) (Var_1081) << 10)) | (((((MR_Unsigned) (Var_1082) << 9)) | (((((MR_Unsigned) (Var_1083) << 7)) | (((((MR_Unsigned) (Var_1084) << 4)) | (((((MR_Unsigned) (Var_1085) << 3)) | (((((MR_Unsigned) (Var_1086) << 2)) | (MR_Unsigned) ((MR_Integer) 1)))))))))))))))))))))))));
              }
              Var_1050 = (Indent_10 + (MR_Unsigned) 1U);
              ml_backend__mlds_to_c_stmt__mlds_output_switch_default_8_p_0(CaseOpts_1042, Stream_9, Var_1050, FuncInfo_11, Context_1040, Default_1039);
              Var_1055 = (Indent_10 + (MR_Unsigned) 1U);
              {
                Var_1053 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_1053, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_10[0]));
                MR_hl_field(0, Var_1053, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_11));
                MR_hl_field(0, Var_1053, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_1053, 3) = ((MR_Box) (CaseOpts_1042));
                MR_hl_field(0, Var_1053, 4) = ((MR_Box) (Stream_9));
                MR_hl_field(0, Var_1053, 5) = ((MR_Box) (Var_1055));
                MR_hl_field(0, Var_1053, 6) = ((MR_Box) (FuncInfo_11));
                MR_hl_field(0, Var_1053, 7) = ((MR_Box) (Context_1040));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_1053, Cases_1038, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_6_1054);
              Var_1057 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_1057, Context_1040);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_1041);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Label_1000 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_String IndentM1Str_1002;
              MR_String LabelStr_1003;
              MR_Unsigned Var_1004 = (Indent_10 - (MR_Unsigned) 1U);
              MR_String LabelName_1015;

              IndentM1Str_1002 = libs__indent__indent2_string_1_f_0(Var_1004);
              LabelName_1015 = (MR_String) (Label_1000);
              LabelStr_1003 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName_1015);
              mercury__io__write_string_4_p_0(Stream_9, IndentM1Str_1002);
              mercury__io__write_string_4_p_0(Stream_9, LabelStr_1003);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ":;\n");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_866 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_String IndentStr_868;

              IndentStr_868 = libs__indent__indent2_string_1_f_0(Indent_10);
              switch (MR_tag((MR_Word) Target_866)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Target_866)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word BreakContext_871 = ((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) & (MR_Integer) 3);

                        switch (BreakContext_871) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                          case (MR_Integer) 0:
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_goto\'/6", (MR_String) "goto_break_switch not in switch");
                              return;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              mercury__io__write_string_4_p_0(Stream_9, IndentStr_868);
                              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "break;\n");
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word BreakContext_894 = ((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) & (MR_Integer) 3);

                        switch (BreakContext_894) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                            {
                              mercury__io__write_string_4_p_0(Stream_9, IndentStr_868);
                              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "break;\n");
                            }
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
                      {
                        mercury__io__write_string_4_p_0(Stream_9, IndentStr_868);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "continue;\n");
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Label_869 = ((MR_Word) ((MR_hl_field(1, Target_866, 0))));
                    MR_String LabelStr_870;
                    MR_String LabelName_934 = (MR_String) (Label_869);

                    LabelStr_870 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName_934);
                    mercury__io__write_string_4_p_0(Stream_9, IndentStr_868);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "goto ");
                    mercury__io__write_string_4_p_0(Stream_9, LabelStr_870);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Expr_797 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_Word Labels_798 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 2))));
              MR_Word Context_799 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 3))));
              MR_String IndentStr_800;
              MR_String Indent1Str_801;
              MR_Unsigned Var_803;
              MR_Word Var_809;
              MR_Word Var_812;
              MR_Word Var_815;
              MR_Box conv4__FinalCount_802;
              MR_Box conv3_STATE_VARIABLE_IO_4_811;

              IndentStr_800 = libs__indent__indent2_string_1_f_0(Indent_10);
              Var_803 = (Indent_10 + (MR_Unsigned) 1U);
              Indent1Str_801 = libs__indent__indent2_string_1_f_0(Var_803);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_800);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "switch (");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Expr_797, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") {\n");
              {
                Var_809 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_809, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_9[0]));
                MR_hl_field(0, Var_809, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_9));
                MR_hl_field(0, Var_809, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_809, 3) = ((MR_Box) (Opts_8));
                MR_hl_field(0, Var_809, 4) = ((MR_Box) (Stream_9));
                MR_hl_field(0, Var_809, 5) = ((MR_Box) (Context_799));
                MR_hl_field(0, Var_809, 6) = ((MR_Box) (Indent1Str_801));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_809, Labels_798, ((MR_Box) ((MR_Integer) 0)), &conv4__FinalCount_802, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_4_811);
              Var_812 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_812, Context_799);
              mercury__io__write_string_4_p_0(Stream_9, Indent1Str_801);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "default: /*NOTREACHED*/ MR_assert(0);\n");
              Var_815 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_815, Context_799);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_800);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Signature_523 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_Word FuncRval_524 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 2))));
              MR_Word CallArgs_525 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 3))));
              MR_Word Results_526 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 4))));
              MR_Word IsTailCall_527 = ((MR_Unsigned) ((MR_hl_field(3, Stmt_12, 5))) & (MR_Integer) 3);
              MR_Word Context_528 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 6))));
              MR_Word CallerName_529 = ((MR_Word) ((MR_hl_field(0, FuncInfo_11, 0))));
              MR_Word CallerSignature_530 = ((MR_Word) ((MR_hl_field(0, FuncInfo_11, 1))));
              MR_Word ProfileCalls_531 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 12)) & (MR_Integer) 1);
              MR_Word ProfileTime_532 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 10)) & (MR_Integer) 1);
              MR_Word CallHasReturn_533;

              switch (IsTailCall_527) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    MR_Word CalleeReturnTypes_605 = ((MR_Word) ((MR_hl_field(0, Signature_523, 1))));
                    MR_Word CallerReturnTypes_607 = ((MR_Word) ((MR_hl_field(0, CallerSignature_530, 1))));
                    MR_Word TypeInfo_17_610;

                    succeeded = (Results_526 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      TypeInfo_17_610 = (MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_2[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_610, ((MR_Box) (CalleeReturnTypes_605)), ((MR_Box) (CallerReturnTypes_607)));
                    }
                    if (succeeded)
                      CallHasReturn_533 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (CallerReturnTypes_607 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                        CallHasReturn_533 = (MR_Integer) 2;
                      else
                        CallHasReturn_533 = (MR_Integer) 0;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  CallHasReturn_533 = (MR_Integer) 0;
                  break;
              }
              succeeded = (ProfileCalls_531 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (ProfileTime_532 == (MR_Integer) 0);
                if (succeeded)
                  switch (CallHasReturn_533) {
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
                MR_String IndentStr_611;
                MR_Word Comments_612;
                MR_Word Var_637;
                MR_Word Var_651;
                MR_Word PredLabel_620;
                MR_Integer ProcId_621;
                MR_Word CodeAddr_613;
                MR_Word QualFuncLabel_614;
                MR_Word FuncLabel_617;
                MR_Word ProcLabel_618;
                MR_Word Var_632;

                IndentStr_611 = libs__indent__indent2_string_1_f_0(Indent_10);
                Comments_612 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 14)) & (MR_Integer) 1);
                succeeded = (Comments_612 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) FuncRval_524)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FuncRval_524, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_632 = ((MR_Word) ((MR_hl_field(3, FuncRval_524, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_632)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      CodeAddr_613 = (MR_Word) (MR_body((MR_Word) (Var_632), (MR_Integer) 1));
                      QualFuncLabel_614 = ((MR_Word) ((MR_hl_field(0, CodeAddr_613, 0))));
                      FuncLabel_617 = ((MR_Word) ((MR_hl_field(0, QualFuncLabel_614, 1))));
                      ProcLabel_618 = ((MR_Word) ((MR_hl_field(0, FuncLabel_617, 0))));
                      PredLabel_620 = ((MR_Word) ((MR_hl_field(0, ProcLabel_618, 0))));
                      ProcId_621 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_618, 1))));
                      if (((MR_tag((MR_Word) PredLabel_620)) == (MR_Integer) 1))
                      {
                        MR_String PredName_627 = ((MR_String) ((MR_hl_field(1, PredLabel_620, 0))));
                        MR_String TypeName_628 = ((MR_String) ((MR_hl_field(1, PredLabel_620, 2))));
                        MR_Word MaybeModuleName_656 = ((MR_Word) ((MR_hl_field(1, PredLabel_620, 1))));

                        {
                          MR_String Var_689;

                          Var_689 = parse_tree__prog_foreign__name_mangle_1_f_0(PredName_627);
                          succeeded = (strcmp(PredName_627, Var_689) == 0);
                          succeeded = !(succeeded);
                        }
                        if (!(succeeded))
                        {
                          {
                            MR_Word ModuleName_655;
                            MR_String Var_634;
                            MR_String Var_690;

                            succeeded = (MaybeModuleName_656 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ModuleName_655 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_656, 0))));
                              Var_634 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_655);
                              Var_690 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_655);
                              succeeded = (strcmp(Var_634, Var_690) == 0);
                              succeeded = !(succeeded);
                            }
                          }
                          if (!(succeeded))
                          {
                            MR_String Var_691;

                            Var_691 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_628);
                            succeeded = (strcmp(TypeName_628, Var_691) == 0);
                            succeeded = !(succeeded);
                          }
                        }
                      }
                      else
                      {
                        MR_Word MaybeModuleName_623 = ((MR_Word) ((MR_hl_field(0, PredLabel_620, 1))));
                        MR_String Name_624 = ((MR_String) ((MR_hl_field(0, PredLabel_620, 2))));

                        {
                          MR_String Var_687;

                          Var_687 = parse_tree__prog_foreign__name_mangle_1_f_0(Name_624);
                          succeeded = (strcmp(Name_624, Var_687) == 0);
                          succeeded = !(succeeded);
                        }
                        if (!(succeeded))
                        {
                          MR_Word ModuleName_626;
                          MR_String Var_633;
                          MR_String Var_688;

                          succeeded = (MaybeModuleName_623 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ModuleName_626 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_623, 0))));
                            Var_633 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_626);
                            Var_688 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_626);
                            succeeded = (strcmp(Var_633, Var_688) == 0);
                            succeeded = !(succeeded);
                          }
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_String UnmangledPredLabelStr_630;
                  MR_Integer ProcIdNum_631;
                  MR_String Var_701;

                  UnmangledPredLabelStr_630 = ml_backend__mlds_to_c_name__pred_label_to_string_for_c_2_f_0((MR_Integer) 0, PredLabel_620);
                  ProcIdNum_631 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_621);
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_611);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "// callee is ");
                  mercury__io__write_string_4_p_0(Stream_9, UnmangledPredLabelStr_630);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_");
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), ProcIdNum_631, &Var_701);
                  mercury__io__write_string_4_p_0(Stream_9, Var_701);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
                }
                Var_637 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_637, Context_528);
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_611);
                switch (CallHasReturn_533) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "return ");
                    break;
                }
                if (!((Results_526 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word Var_692 = ((MR_Word) ((MR_hl_field(1, Results_526, 1))));
                  MR_Word Var_693 = ((MR_Word) ((MR_hl_field(1, Results_526, 0))));

                  if ((Var_692 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Var_693, Stream_9);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                  }
                  else
                  {
                    MR_Word Var_645;

                    {
                      Var_645 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_645, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[0]));
                      MR_hl_field(0, Var_645, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_5));
                      MR_hl_field(0, Var_645, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(0, Var_645, 3) = ((MR_Box) (Opts_8));
                    }
                    ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Stream_9, Var_645, Results_526);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                  }
                }
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, FuncRval_524);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                {
                  Var_651 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_651, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[1]));
                  MR_hl_field(0, Var_651, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_6));
                  MR_hl_field(0, Var_651, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_651, 3) = ((MR_Box) (Opts_8));
                }
                parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_651, (MR_String) ", ", CallArgs_525, Stream_9);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
              }
              else
              {
                MR_Unsigned BodyIndent_534 = (Indent_10 + (MR_Unsigned) 1U);
                MR_String IndentStr_535;
                MR_String BodyIndentStr_536;
                MR_String IndentStr_704;
                MR_Word Comments_705;
                MR_Word Var_730;
                MR_Word Var_744;
                MR_Word PredLabel_713;
                MR_Integer ProcId_714;
                MR_Word CodeAddr_706;
                MR_Word QualFuncLabel_707;
                MR_Word FuncLabel_710;
                MR_Word ProcLabel_711;
                MR_Word Var_725;

                IndentStr_535 = libs__indent__indent2_string_1_f_0(Indent_10);
                BodyIndentStr_536 = libs__indent__indent2_string_1_f_0(BodyIndent_534);
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_535);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
                switch (ProfileCalls_531) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    ml_backend__mlds_to_c_stmt__mlds_output_call_profile_instr_8_p_0(Opts_8, Stream_9, Context_528, BodyIndent_534, FuncRval_524, CallerName_529);
                    break;
                }
                IndentStr_704 = libs__indent__indent2_string_1_f_0(BodyIndent_534);
                Comments_705 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 14)) & (MR_Integer) 1);
                succeeded = (Comments_705 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) FuncRval_524)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FuncRval_524, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_725 = ((MR_Word) ((MR_hl_field(3, FuncRval_524, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_725)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      CodeAddr_706 = (MR_Word) (MR_body((MR_Word) (Var_725), (MR_Integer) 1));
                      QualFuncLabel_707 = ((MR_Word) ((MR_hl_field(0, CodeAddr_706, 0))));
                      FuncLabel_710 = ((MR_Word) ((MR_hl_field(0, QualFuncLabel_707, 1))));
                      ProcLabel_711 = ((MR_Word) ((MR_hl_field(0, FuncLabel_710, 0))));
                      PredLabel_713 = ((MR_Word) ((MR_hl_field(0, ProcLabel_711, 0))));
                      ProcId_714 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_711, 1))));
                      if (((MR_tag((MR_Word) PredLabel_713)) == (MR_Integer) 1))
                      {
                        MR_String PredName_720 = ((MR_String) ((MR_hl_field(1, PredLabel_713, 0))));
                        MR_String TypeName_721 = ((MR_String) ((MR_hl_field(1, PredLabel_713, 2))));
                        MR_Word MaybeModuleName_749 = ((MR_Word) ((MR_hl_field(1, PredLabel_713, 1))));

                        {
                          MR_String Var_782;

                          Var_782 = parse_tree__prog_foreign__name_mangle_1_f_0(PredName_720);
                          succeeded = (strcmp(PredName_720, Var_782) == 0);
                          succeeded = !(succeeded);
                        }
                        if (!(succeeded))
                        {
                          {
                            MR_Word ModuleName_748;
                            MR_String Var_727;
                            MR_String Var_783;

                            succeeded = (MaybeModuleName_749 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ModuleName_748 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_749, 0))));
                              Var_727 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_748);
                              Var_783 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_748);
                              succeeded = (strcmp(Var_727, Var_783) == 0);
                              succeeded = !(succeeded);
                            }
                          }
                          if (!(succeeded))
                          {
                            MR_String Var_784;

                            Var_784 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_721);
                            succeeded = (strcmp(TypeName_721, Var_784) == 0);
                            succeeded = !(succeeded);
                          }
                        }
                      }
                      else
                      {
                        MR_Word MaybeModuleName_716 = ((MR_Word) ((MR_hl_field(0, PredLabel_713, 1))));
                        MR_String Name_717 = ((MR_String) ((MR_hl_field(0, PredLabel_713, 2))));

                        {
                          MR_String Var_780;

                          Var_780 = parse_tree__prog_foreign__name_mangle_1_f_0(Name_717);
                          succeeded = (strcmp(Name_717, Var_780) == 0);
                          succeeded = !(succeeded);
                        }
                        if (!(succeeded))
                        {
                          MR_Word ModuleName_719;
                          MR_String Var_726;
                          MR_String Var_781;

                          succeeded = (MaybeModuleName_716 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ModuleName_719 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_716, 0))));
                            Var_726 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_719);
                            Var_781 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_719);
                            succeeded = (strcmp(Var_726, Var_781) == 0);
                            succeeded = !(succeeded);
                          }
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_String UnmangledPredLabelStr_723;
                  MR_Integer ProcIdNum_724;
                  MR_String Var_794;

                  UnmangledPredLabelStr_723 = ml_backend__mlds_to_c_name__pred_label_to_string_for_c_2_f_0((MR_Integer) 0, PredLabel_713);
                  ProcIdNum_724 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_714);
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_704);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "// callee is ");
                  mercury__io__write_string_4_p_0(Stream_9, UnmangledPredLabelStr_723);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_");
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), ProcIdNum_724, &Var_794);
                  mercury__io__write_string_4_p_0(Stream_9, Var_794);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
                }
                Var_730 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_730, Context_528);
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_704);
                switch (CallHasReturn_533) {
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
                if (!((Results_526 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word Var_785 = ((MR_Word) ((MR_hl_field(1, Results_526, 1))));
                  MR_Word Var_786 = ((MR_Word) ((MR_hl_field(1, Results_526, 0))));

                  if ((Var_785 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Var_786, Stream_9);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                  }
                  else
                  {
                    MR_Word Var_738;

                    {
                      Var_738 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_738, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[0]));
                      MR_hl_field(0, Var_738, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_7));
                      MR_hl_field(0, Var_738, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(0, Var_738, 3) = ((MR_Box) (Opts_8));
                    }
                    ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Stream_9, Var_738, Results_526);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                  }
                }
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, FuncRval_524);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                {
                  Var_744 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_744, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[1]));
                  MR_hl_field(0, Var_744, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_8));
                  MR_hl_field(0, Var_744, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_744, 3) = ((MR_Box) (Opts_8));
                }
                parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_744, (MR_String) ", ", CallArgs_525, Stream_9);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
                switch (CallHasReturn_533) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    switch (ProfileTime_532) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                        }
                        break;
                      case (MR_Integer) 1:
                        ml_backend__mlds_to_c_stmt__mlds_output_time_profile_instr_7_p_0(Opts_8, Stream_9, Context_528, BodyIndent_534, CallerName_529);
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_545 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);

                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_545, Context_528);
                      mercury__io__write_string_4_p_0(Stream_9, BodyIndentStr_536);
                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "return;\n");
                    }
                    break;
                }
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_535);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Results_1016 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_String IndentStr_1018;

              IndentStr_1018 = libs__indent__indent2_string_1_f_0(Indent_10);
              if ((Results_1016 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_1018);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "return;\n");
              }
              else
              {
                MR_Word Var_1027 = ((MR_Word) ((MR_hl_field(1, Results_1016, 1))));
                MR_Word Var_1028 = ((MR_Word) ((MR_hl_field(1, Results_1016, 0))));

                if ((Var_1027 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_1018);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "return ");
                  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Var_1028, Stream_9);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                }
                else
                {
                  MR_Word Var_1023;

                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_1018);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "return");
                  {
                    Var_1023 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_1023, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[1]));
                    MR_hl_field(0, Var_1023, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_10));
                    MR_hl_field(0, Var_1023, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_1023, 3) = ((MR_Box) (Opts_8));
                  }
                  ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Stream_9, Var_1023, Results_1016);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Ref_1108 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_Word BodyStmt0_1109 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 2))));
              MR_Word HandlerStmt_1110 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 3))));
              MR_Word Context_1111 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 4))));
              MR_Word BodyStmt_1114;
              MR_String IndentStr_1115;
              MR_Unsigned Var_1129;
              MR_Word Var_1132;
              MR_Unsigned Var_1139;
              MR_Word Var_1116;
              MR_Word Var_1155;
              MR_Unsigned next_value_of_Indent_10;
              MR_Word next_value_of_Stmt_12;

              succeeded = ((MR_tag((MR_Word) BodyStmt0_1109)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_1116 = ((MR_Word) ((MR_hl_field(2, BodyStmt0_1109, 2))));
                Var_1155 = ((MR_Word) ((MR_hl_field(2, BodyStmt0_1109, 3))));
                succeeded = mercury__term_context____Unify____term_context_0_0(Context_1111, Var_1155);
                if (succeeded)
                  succeeded = (Var_1116 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word Var_1119;

                {
                  Var_1119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_1119, 0) = ((MR_Box) (BodyStmt0_1109));
                  MR_hl_field(1, Var_1119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  BodyStmt_1114 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BodyStmt_1114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, BodyStmt_1114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, BodyStmt_1114, 2) = ((MR_Box) (Var_1119));
                  MR_hl_field(0, BodyStmt_1114, 3) = ((MR_Box) (Context_1111));
                }
              }
              else
                BodyStmt_1114 = BodyStmt0_1109;
              IndentStr_1115 = libs__indent__indent2_string_1_f_0(Indent_10);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_1115);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "if (MR_builtin_setjmp(");
              ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Ref_1108, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") == 0)\n");
              Var_1129 = (Indent_10 + (MR_Unsigned) 1U);
              ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_8, Stream_9, Var_1129, FuncInfo_11, BodyStmt_1114);
              Var_1132 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_1132, Context_1111);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_1115);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "else\n");
              Var_1139 = (Indent_10 + (MR_Unsigned) 1U);
              // direct tailcall eliminated
              ;
              next_value_of_Indent_10 = Var_1139;
              next_value_of_Stmt_12 = HandlerStmt_1110;
              Indent_10 = next_value_of_Indent_10;
              Stmt_12 = next_value_of_Stmt_12;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Ref_854 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_String IndentStr_856;

              IndentStr_856 = libs__indent__indent2_string_1_f_0(Indent_10);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_856);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_builtin_longjmp(");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Ref_854, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", 1);\n");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word AtomicStmt_99 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_Word Context_100 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 2))));
              MR_String IndentStr_101;

              IndentStr_101 = libs__indent__indent2_string_1_f_0(Indent_10);
              switch (MR_tag((MR_Word) AtomicStmt_99)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_4_p_0(Stream_9, IndentStr_101);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_GC_check();\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Comment_102 = ((MR_String) ((MR_hl_field(1, AtomicStmt_99, 0))));

                    succeeded = (strcmp(Comment_102, (MR_String) "") == 0);
                    if (!(succeeded))
                    {
                      MR_Word CommentLines_103;

                      CommentLines_103 = mercury__string__split_at_separator_2_f_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_4[0]), Comment_102);
                      ml_backend__mlds_to_c_stmt__write_comment_lines_5_p_0(Stream_9, IndentStr_101, CommentLines_103);
                    }
                    mercury__io__write_string_4_p_0(Stream_9, IndentStr_101);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Lval_104 = ((MR_Word) ((MR_hl_field(2, AtomicStmt_99, 0))));
                    MR_Word Rval_105 = ((MR_Word) ((MR_hl_field(2, AtomicStmt_99, 1))));

                    mercury__io__write_string_4_p_0(Stream_9, IndentStr_101);
                    ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Lval_104, Stream_9);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Rval_105, Stream_9);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, AtomicStmt_99, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Lval_138 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_99, 1))));
                        MR_Word Rval_139 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_99, 2))));

                        mercury__io__write_string_4_p_0(Stream_9, IndentStr_101);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_assign_if_in_heap(");
                        ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Lval_138, Stream_9);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                        ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Rval_139, Stream_9);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Rval_140 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_99, 1))));

                        mercury__io__write_string_4_p_0(Stream_9, IndentStr_101);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_free_heap(");
                        ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Rval_140, Stream_9);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Target_157 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_99, 1))));
                        MR_Word Ptag_158 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_99, 2))));
                        MR_Word Type_160 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_99, 4))));
                        MR_Word MaybeSize_161 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_99, 5))));
                        MR_Word ArgRvalsTypes_163 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_99, 7))));
                        MR_Word MayUseAtomic_164 = ((MR_Unsigned) ((MR_hl_field(3, AtomicStmt_99, 8))) & (MR_Integer) 1);
                        MR_Word MaybeAllocId_165 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_99, 9))));
                        MR_String IndentStr_166;
                        MR_String Indent1Str_167;
                        MR_Word Base_170;
                        MR_String TypeStr_176;
                        MR_String NewObjectMacro_177;
                        MR_String MaybeAllocIdStr_178;
                        uint8_t PtagUInt8_179;
                        MR_String EndMkword_180;
                        MR_Unsigned Var_185;
                        MR_Unsigned Var_276;
                        MR_Word Var_279;

                        IndentStr_166 = libs__indent__indent2_string_1_f_0(Indent_10);
                        Var_185 = (Indent_10 + (MR_Unsigned) 1U);
                        Indent1Str_167 = libs__indent__indent2_string_1_f_0(Var_185);
                        mercury__io__write_string_4_p_0(Stream_9, IndentStr_166);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
                        switch (MayUseAtomic_164) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            NewObjectMacro_177 = (MR_String) "MR_new_object";
                            break;
                          case (MR_Integer) 0:
                            NewObjectMacro_177 = (MR_String) "MR_new_object_atomic";
                            break;
                        }
                        MaybeAllocIdStr_178 = ml_backend__mlds_to_c_stmt__maybe_alloc_id_to_string_1_f_0(MaybeAllocId_165);
                        succeeded = ((((MR_tag((MR_Word) Target_157)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Target_157, 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          MR_Word GC_Method_174;
                          MR_Word Var_301;

                          {
                            Base_170 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Base_170, 0) = ((MR_Box) (Target_157));
                          }
                          Var_301 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
                          GC_Method_174 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 4)) & (MR_Integer) 7);
                          switch (GC_Method_174) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 5:
                              {
                                MR_Word NeedsForwardingSpace_175;

                                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_301, Context_100);
                                mercury__io__write_string_4_p_0(Stream_9, Indent1Str_167);
                                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_GC_check();\n");
                                NeedsForwardingSpace_175 = ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(Type_160);
                                switch (NeedsForwardingSpace_175) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_301, Context_100);
                                      mercury__io__write_string_4_p_0(Stream_9, Indent1Str_167);
                                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "// reserve space for GC forwarding pointer\n");
                                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_301, Context_100);
                                      mercury__io__write_string_4_p_0(Stream_9, Indent1Str_167);
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
                          TypeStr_176 = ml_backend__mlds_to_c_type__type_to_string_for_c_2_f_0(Opts_8, Type_160);
                          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_301, Context_100);
                          mercury__io__write_string_4_p_0(Stream_9, Indent1Str_167);
                          ml_backend__mlds_to_c_stmt__write_lval_or_string_5_p_0(Opts_8, Stream_9, Base_170);
                        }
                        else
                        {
                          MR_String TypePrefix_172;
                          MR_String TypeSuffix_173;
                          MR_Word Var_193;
                          MR_Word GC_Method_1441;

                          Base_170 = (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_c_stmt_scalar_common_1[3]));
                          ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_8, Type_160, (MR_Word) ((MR_Unsigned) 0U), &TypePrefix_172, &TypeSuffix_173);
                          Var_193 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
                          GC_Method_1441 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 4)) & (MR_Integer) 7);
                          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_193, Context_100);
                          mercury__io__write_string_4_p_0(Stream_9, Indent1Str_167);
                          mercury__io__write_string_4_p_0(Stream_9, TypePrefix_172);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "base");
                          mercury__io__write_string_4_p_0(Stream_9, TypeSuffix_173);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                          switch (GC_Method_1441) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 5:
                              {
                                MR_Word NeedsForwardingSpace_1343;

                                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_193, Context_100);
                                mercury__io__write_string_4_p_0(Stream_9, Indent1Str_167);
                                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_GC_check();\n");
                                NeedsForwardingSpace_1343 = ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(Type_160);
                                switch (NeedsForwardingSpace_1343) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_193, Context_100);
                                      mercury__io__write_string_4_p_0(Stream_9, Indent1Str_167);
                                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "// reserve space for GC forwarding pointer\n");
                                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_193, Context_100);
                                      mercury__io__write_string_4_p_0(Stream_9, Indent1Str_167);
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
                          TypeStr_176 = ml_backend__mlds_to_c_type__type_to_string_for_c_2_f_0(Opts_8, Type_160);
                          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_193, Context_100);
                          mercury__io__write_string_4_p_0(Stream_9, Indent1Str_167);
                          ml_backend__mlds_to_c_stmt__write_lval_or_string_5_p_0(Opts_8, Stream_9, Base_170);
                        }
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                        PtagUInt8_179 = (uint8_t) (Ptag_158);
                        succeeded = (PtagUInt8_179 == UINT8_C(0));
                        if (succeeded)
                        {
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                          mercury__io__write_string_4_p_0(Stream_9, TypeStr_176);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
                          mercury__io__write_string_4_p_0(Stream_9, NewObjectMacro_177);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                          mercury__io__write_string_4_p_0(Stream_9, TypeStr_176);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                          EndMkword_180 = (MR_String) "";
                        }
                        else
                        {
                          MR_Unsigned Var_429;
                          MR_String Var_430;

                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                          mercury__io__write_string_4_p_0(Stream_9, TypeStr_176);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") MR_mkword(");
                          mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_179, &Var_429);
                          mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), (MR_Integer) 1, Var_429, &Var_430);
                          mercury__io__write_string_4_p_0(Stream_9, Var_430);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                          mercury__io__write_string_4_p_0(Stream_9, NewObjectMacro_177);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                          mercury__io__write_string_4_p_0(Stream_9, TypeStr_176);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                          EndMkword_180 = (MR_String) ")";
                        }
                        if ((MaybeSize_161 == (MR_Word) ((MR_Unsigned) 0U)))
                          mercury__io__write_int_4_p_0(Stream_9, (MR_Integer) -1);
                        else
                        {
                          MR_Word Size_181 = ((MR_Word) ((MR_hl_field(1, MaybeSize_161, 0))));
                          MR_Integer SizeInt_182;
                          MR_Word Var_254;

                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                          succeeded = ((((MR_tag((MR_Word) Size_181)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Size_181, 0)))) == (MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_254 = ((MR_Word) ((MR_hl_field(3, Size_181, 1))));
                            succeeded = ((MR_tag((MR_Word) Var_254)) == (MR_Integer) 2);
                            if (succeeded)
                              SizeInt_182 = ((MR_Integer) ((MR_hl_field(2, Var_254, 0))));
                          }
                          if (succeeded)
                            mercury__io__write_int_4_p_0(Stream_9, SizeInt_182);
                          else
                            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Size_181, Stream_9);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " * sizeof(MR_Word))");
                        }
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                        mercury__io__write_string_4_p_0(Stream_9, MaybeAllocIdStr_178);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", NULL)");
                        mercury__io__write_string_4_p_0(Stream_9, EndMkword_180);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                        if (!(((MR_tag((MR_Word) Base_170)) == (MR_Integer) 0)))
                        {
                          MR_String BaseVarName1_184 = ((MR_String) ((MR_hl_field(1, Base_170, 0))));
                          MR_Word Var_266 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);

                          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_266, Context_100);
                          mercury__io__write_string_4_p_0(Stream_9, Indent1Str_167);
                          ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Target_157, Stream_9);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_9, BaseVarName1_184);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                        }
                        Var_276 = (Indent_10 + (MR_Unsigned) 1U);
                        ml_backend__mlds_to_c_stmt__mlds_output_init_args_10_p_0(Opts_8, Stream_9, ArgRvalsTypes_163, Context_100, (MR_Integer) 0, Base_170, Ptag_158, Var_276);
                        Var_279 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
                        ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_279, Context_100);
                        mercury__io__write_string_4_p_0(Stream_9, IndentStr_166);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Lval_141 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_99, 1))));

                        mercury__io__write_string_4_p_0(Stream_9, IndentStr_101);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_mark_hp(");
                        ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Lval_141, Stream_9);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Rval_142 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_99, 1))));

                        mercury__io__write_string_4_p_0(Stream_9, IndentStr_101);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_restore_hp(");
                        ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Rval_142, Stream_9);
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
                        MR_Word TargetLang_106 = ((MR_Unsigned) ((MR_hl_field(3, AtomicStmt_99, 1))) & (MR_Integer) 3);
                        MR_Word Components_107 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_99, 2))));

                        switch (TargetLang_106) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word Var_133;
                              MR_Box conv0_STATE_VARIABLE_IO_43;

                              {
                                Var_133 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, Var_133, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_5[0]));
                                MR_hl_field(0, Var_133, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_2));
                                MR_hl_field(0, Var_133, 2) = ((MR_Box) ((MR_Integer) 3));
                                MR_hl_field(0, Var_133, 3) = ((MR_Box) (Opts_8));
                                MR_hl_field(0, Var_133, 4) = ((MR_Box) (Stream_9));
                                MR_hl_field(0, Var_133, 5) = ((MR_Box) (Context_100));
                              }
                              mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_133, Components_107, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_43);
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
  MR_Unsigned Indent_11,
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
            MR_String IndentStr_16;
            MR_Word Var_21;

            IndentStr_16 = libs__indent__indent2_string_1_f_0(Indent_11);
            Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_9, 2))) >> 16)) & (MR_Integer) 1);
            ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_21, Context_13);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_16);
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
        MR_Word Stmt_17 = ((MR_Word) ((MR_hl_field(1, Default_14, 0))));
        MR_String Indent1Str_18;
        MR_Unsigned Var_28;
        MR_Word Var_30;
        MR_Unsigned Var_37;
        MR_Word Var_40;
        MR_String IndentStr_47;

        IndentStr_47 = libs__indent__indent2_string_1_f_0(Indent_11);
        Var_28 = (Indent_11 + (MR_Unsigned) 1U);
        Indent1Str_18 = libs__indent__indent2_string_1_f_0(Var_28);
        Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_9, 2))) >> 16)) & (MR_Integer) 1);
        ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_30, Context_13);
        mercury__io__write_string_4_p_0(Stream_10, IndentStr_47);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "default:\n");
        Var_37 = (Indent_11 + (MR_Unsigned) 1U);
        ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_9, Stream_10, Var_37, FuncInfo_12, Stmt_17);
        Var_40 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_9, 2))) >> 16)) & (MR_Integer) 1);
        ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_40, Context_13);
        mercury__io__write_string_4_p_0(Stream_10, Indent1Str_18);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "break;\n");
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
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
        MR_Word Stmt_32 = ((MR_Word) ((MR_hl_field(1, GCStmt_11, 0))));
        MR_Word ModuleName_34;
        MR_Word QualFuncName_36;
        MR_Word FuncInfo_37;

        mercury__io__write_string_4_p_0(Stream_9, MaybeNewLine_12);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "#if 0 // GC trace code\n");
        ModuleName_34 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[0]));
        {
          QualFuncName_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, QualFuncName_36, 0) = ((MR_Box) (ModuleName_34));
          MR_hl_field(0, QualFuncName_36, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_c_stmt_scalar_common_1[1])));
        }
        {
          FuncInfo_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FuncInfo_37, 0) = ((MR_Box) (QualFuncName_36));
          MR_hl_field(0, FuncInfo_37, 1) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_2[0]));
        }
        ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_8, Stream_9, Indent_10, FuncInfo_37, Stmt_32);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "#endif\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Stmt_14 = ((MR_Word) ((MR_hl_field(2, GCStmt_11, 0))));
        MR_Word ModuleName_16;
        MR_Word QualFuncName_18;
        MR_Word FuncInfo_19;

        mercury__io__write_string_4_p_0(Stream_9, MaybeNewLine_12);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "#if 0 // GC initialiser\n");
        ModuleName_16 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[0]));
        {
          QualFuncName_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, QualFuncName_18, 0) = ((MR_Box) (ModuleName_16));
          MR_hl_field(0, QualFuncName_18, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_c_stmt_scalar_common_1[1])));
        }
        {
          FuncInfo_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FuncInfo_19, 0) = ((MR_Box) (QualFuncName_18));
          MR_hl_field(0, FuncInfo_19, 1) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_2[0]));
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
    MR_Word Target_10 = ((MR_Word) ((MR_hl_field(0, Base_8, 0))));

    ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_6, Target_10, Stream_7);
  }
  else
  {
    MR_String BaseVarName_11 = ((MR_String) ((MR_hl_field(1, Base_8, 0))));

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
  MR_Unsigned Indent_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ArgRvalType_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgRvalsTypes_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_String IndentStr_31;
      uint8_t PtagUInt8_32;
      MR_Word ArgRval_33;
      MR_Word ArgType_34;
      MR_Word Var_37;
      MR_Integer Var_55;
      MR_Unsigned Var_77;
      MR_String Var_78;
      MR_String Var_89;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_ArgNum_5;

      IndentStr_31 = libs__indent__indent2_string_1_f_0(Indent_8);
      PtagUInt8_32 = (uint8_t) (Ptag_7);
      ArgRval_33 = ((MR_Word) ((MR_hl_field(0, ArgRvalType_23, 0))));
      ArgType_34 = ((MR_Word) ((MR_hl_field(0, ArgRvalType_23, 1))));
      Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_1, 2))) >> 16)) & (MR_Integer) 1);
      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_2, Var_37, Context_4);
      mercury__io__write_string_4_p_0(Stream_2, IndentStr_31);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "MR_hl_field(");
      mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_32, &Var_77);
      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), (MR_Integer) 1, Var_77, &Var_78);
      mercury__io__write_string_4_p_0(Stream_2, Var_78);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ", ");
      if (((MR_tag((MR_Word) Base_6)) == (MR_Integer) 0))
      {
        MR_Word Target_97 = ((MR_Word) ((MR_hl_field(0, Base_6, 0))));

        ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_1, Target_97, Stream_2);
      }
      else
      {
        MR_String BaseVarName_98 = ((MR_String) ((MR_hl_field(1, Base_6, 0))));

        mercury__io__write_string_4_p_0(Stream_2, BaseVarName_98);
      }
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ", ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), ArgNum_5, &Var_89);
      mercury__io__write_string_4_p_0(Stream_2, Var_89);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ") = ");
      ml_backend__mlds_to_c_data__mlds_output_boxed_rval_6_p_0(Opts_1, Stream_2, ArgType_34, ArgRval_33);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ";\n");
      Var_55 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ArgRvalsTypes_24;
      next_value_of_ArgNum_5 = Var_55;
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
      switch (((MR_Integer) ((MR_hl_field(3, Type_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
          NeedsForwardingPtrSpace_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeCategory_18 = ((MR_Word) ((MR_hl_field(3, Type_3, 2))));
            MR_Word Var_21 = (MR_Word) (TypeCategory_18);

            NeedsForwardingPtrSpace_4 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(Var_21);
          }
          break;
        case (MR_Integer) 11:
          mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_stmt.type_needs_forwarding_pointer_space\'/1", (MR_String) "rtti_type");
          break;
        case (MR_Integer) 12:
          mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_stmt.type_needs_forwarding_pointer_space\'/1", (MR_String) "tabling_type");
          break;
      }
      break;
  }
  return NeedsForwardingPtrSpace_4;
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_stmt__maybe_alloc_id_to_string_1_f_0(
  MR_Word MaybeAllocId_3)
{
  MR_String MaybeAllocIdStr_4;

  if ((MaybeAllocId_3 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeAllocIdStr_4 = (MR_String) "NULL";
  else
  {
    MR_Integer Num_5;
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, MaybeAllocId_3, 0))));
    MR_String Var_12;
    MR_String Var_19;

    Num_5 = (MR_Integer) (Var_6);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), Num_5, &Var_12);
    Var_19 = mercury__string__f_43_43_2_f_0(Var_12, (MR_String) "]");
    MaybeAllocIdStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "&MR_alloc_sites[", Var_19);
  }
  return MaybeAllocIdStr_4;
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__write_comment_lines_5_p_0(
  MR_Word Stream_1,
  MR_String IndentStr_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String CommentLine_13 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word CommentLines_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = (strcmp(CommentLine_13, (MR_String) "") == 0);
      if (succeeded)
        mercury__io__nl_3_p_0(Stream_1);
      else
      {
        mercury__io__write_string_4_p_0(Stream_1, IndentStr_2);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "// ");
        mercury__io__write_string_4_p_0(Stream_1, CommentLine_13);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
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
  MR_Unsigned Indent_12,
  MR_Word CalleeFuncRval_13,
  MR_Word CallerName_14)
{
  MR_String IndentStr_16;
  MR_String CallerNameStr_17;
  MR_Word Var_20;

  IndentStr_16 = libs__indent__indent2_string_1_f_0(Indent_12);
  CallerNameStr_17 = ml_backend__mlds_to_c_name__qual_function_name_to_string_for_c_1_f_0(CallerName_14);
  Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_9, 2))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_20, Context_11);
  mercury__io__write_string_4_p_0(Stream_10, IndentStr_16);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "MR_prof_call_profile(");
  ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_9, Stream_10, CalleeFuncRval_13);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_10, CallerNameStr_17);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ");\n");
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_stmt__local_var_decl_to_type_name_4_f_0(
  MR_Word Opts_6,
  MR_Word LocalVarName_7,
  MR_Word Type_8,
  MR_Word InitializerSize_9)
{
  MR_String TypeNameStr_10;
  MR_String TypePrefix_11;
  MR_String TypeSuffix_12;
  MR_String LocalVarNameStr_13;
  MR_String Var_22;
  MR_String Var_24;

  ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_6, Type_8, InitializerSize_9, &TypePrefix_11, &TypeSuffix_12);
  LocalVarNameStr_13 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(LocalVarName_7);
  Var_22 = mercury__string__f_43_43_2_f_0(LocalVarNameStr_13, TypeSuffix_12);
  Var_24 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_22);
  TypeNameStr_10 = mercury__string__f_43_43_2_f_0(TypePrefix_11, Var_24);
  return TypeNameStr_10;
}

void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_time_profile_instr_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Word Context_10,
  MR_Unsigned Indent_11,
  MR_Word FuncName_12)
{
  MR_String IndentStr_14;
  MR_String FuncNameStr_15;
  MR_Word Var_18;

  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_11);
  FuncNameStr_15 = ml_backend__mlds_to_c_name__qual_function_name_to_string_for_c_1_f_0(FuncName_12);
  Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 2))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_18, Context_10);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_set_prof_current_proc(");
  mercury__io__write_string_4_p_0(Stream_9, FuncNameStr_15);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____func_info_c_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_c_stmt____Unify____func_info_c_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____func_info_c_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_c_stmt____Compare____func_info_c_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____lval_or_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_c_stmt____Unify____lval_or_string_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____lval_or_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_c_stmt____Compare____lval_or_string_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_stmt____Unify____maybe_call_has_return_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_c_stmt____Unify____maybe_call_has_return_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt____Compare____maybe_call_has_return_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_c_stmt____Compare____maybe_call_has_return_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
