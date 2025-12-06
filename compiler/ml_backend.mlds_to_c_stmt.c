/*
** Automatically generated from `mlds_to_c_stmt.m'
** by the Mercury compiler,
** version rotd-2025-12-06
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
ml_backend__mlds_to_c_stmt__mlds_output_init_args_10_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word Context_4,
  MR_Integer ArgNum_5,
  MR_Word Base_6,
  MR_Word Ptag_7,
  MR_Unsigned Indent_8);

static void MR_CALL 
ml_backend__mlds_to_c_stmt__write_lval_or_string_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word Base_8);

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

static MR_Word MR_CALL 
ml_backend__mlds_to_c_stmt__find_out_if_call_has_return_4_f_0(
  MR_Word CallKind_6,
  MR_Word Results_7,
  MR_Word CalleeSignature_8,
  MR_Word CallerSignature_9);

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
        MR_Word FuncName_22 = (MR_Word) ((MR_Word) (TargetCode_10));
        MR_String FuncNameStr_23;

        FuncNameStr_23 = ml_backend__mlds_to_c_name__qual_function_name_to_string_for_c_1_f_0(FuncName_22);
        mercury__io__write_string_4_p_0(Stream_8, FuncNameStr_23);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CodeString_12 = ((MR_String) ((MR_hl_field(1, TargetCode_10, 0))));
        MR_Word MaybeUserContext_13 = ((MR_Word) ((MR_hl_field(1, TargetCode_10, 1))));
        MR_Word LineNumbers_14 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_7, 3))) >> 16)) & (MR_Integer) 1);
        MR_Word InitContext_16;
        MR_String OutputFileName_17;

        if ((MaybeUserContext_13 == (MR_Word) ((MR_Unsigned) 0U)))
          InitContext_16 = Context_9;
        else
          InitContext_16 = ((MR_Word) ((MR_hl_field(1, MaybeUserContext_13, 0))));
        ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_8, LineNumbers_14, InitContext_16);
        mercury__io__write_string_4_p_0(Stream_8, CodeString_12);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        OutputFileName_17 = ((MR_String) ((MR_hl_field(0, Opts_7, 2))));
        ml_backend__mlds_to_c_util__c_reset_context_5_p_0(Stream_8, LineNumbers_14, OutputFileName_17);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String CodeString_52 = ((MR_String) ((MR_hl_field(2, TargetCode_10, 0))));

        mercury__io__write_string_4_p_0(Stream_8, CodeString_52);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TargetCode_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(3, TargetCode_10, 1))));

            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_18, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_19 = ((MR_Word) ((MR_hl_field(3, TargetCode_10, 1))));

            ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_7, Lval_19, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_20 = ((MR_Word) ((MR_hl_field(3, TargetCode_10, 1))));
            MR_String TypeStr_21;

            TypeStr_21 = ml_backend__mlds_to_c_type__type_to_string_for_c_2_f_0(Opts_7, Type_20);
            mercury__io__write_string_4_p_0(Stream_8, TypeStr_21);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word AllocId_24 = ((MR_Word) ((MR_hl_field(3, TargetCode_10, 1))));
            MR_String MaybeAllocIdStr_25;
            MR_Integer Num_87 = (MR_Integer) (AllocId_24);
            MR_String Var_94;
            MR_String Var_101;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), Num_87, &Var_94);
            Var_101 = mercury__string__f_43_43_2_f_0(Var_94, (MR_String) "]");
            MaybeAllocIdStr_25 = mercury__string__f_43_43_2_f_0((MR_String) "&MR_alloc_sites[", Var_101);
            mercury__io__write_string_4_p_0(Stream_8, MaybeAllocIdStr_25);
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
  MR_String Var_54;
  MR_String LabelName_65 = (MR_String) (Label_14);

  LabelStr_17 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName_65);
  Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_10, 3))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_11, Var_22, Context_12);
  mercury__io__write_string_4_p_0(Stream_11, IndentStr_13);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "case ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), STATE_VARIABLE_Count_0_18, &Var_54);
  mercury__io__write_string_4_p_0(Stream_11, Var_54);
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
  Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_9, 3))) >> 16)) & (MR_Integer) 1);
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
  MR_Word Var_83 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);

  if (((MR_tag((MR_Word) Match_12)) == (MR_Integer) 1))
  {
    MR_Word Low_15 = ((MR_Word) ((MR_hl_field(1, Match_12, 0))));
    MR_Word High_16 = ((MR_Word) ((MR_hl_field(1, Match_12, 1))));

    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_83, Context_11);
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

    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_83, Context_11);
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
      Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_1, 3))) >> 16)) & (MR_Integer) 1);
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
    MR_Word Var_44 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);

    // setup for model_det tailcalls optimized into a loop
    ;
    ml_backend__mlds_to_c_util__c_output_stmt_context_5_p_0(Stream_9, Var_44, Stmt_12);
    switch (MR_tag((MR_Word) Stmt_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns_466 = ((MR_Word) ((MR_hl_field(0, Stmt_12, 0))));
          MR_Word FuncDefns_467 = ((MR_Word) ((MR_hl_field(0, Stmt_12, 1))));
          MR_Word SubStmts_468 = ((MR_Word) ((MR_hl_field(0, Stmt_12, 2))));
          MR_Word Context_469 = ((MR_Word) ((MR_hl_field(0, Stmt_12, 3))));
          MR_Unsigned BlockIndent_470 = (Indent_10 + (MR_Unsigned) 1U);
          MR_String BraceIndentStr_471;
          MR_Word FuncName_472;
          MR_Word ModuleName_474;
          MR_Word PrintedSomething2_478;
          MR_Word Var_496;

          BraceIndentStr_471 = libs__indent__indent2_string_1_f_0(Indent_10);
          mercury__io__write_string_4_p_0(Stream_9, BraceIndentStr_471);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
          FuncName_472 = ((MR_Word) ((MR_hl_field(0, FuncInfo_11, 0))));
          ModuleName_474 = ((MR_Word) ((MR_hl_field(0, FuncName_472, 0))));
          if ((FuncDefns_467 == (MR_Word) ((MR_Unsigned) 0U)))
            if ((LocalVarDefns_466 == (MR_Word) ((MR_Unsigned) 0U)))
              PrintedSomething2_478 = (MR_Integer) 0;
            else
            {
              ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_7_p_0(Opts_8, Stream_9, BlockIndent_470, (MR_Integer) 0, LocalVarDefns_466);
              PrintedSomething2_478 = (MR_Integer) 1;
            }
          else
          {
            MR_Word Var_481;
            MR_Word Var_484 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 3)) & (MR_Integer) 1);
            MR_Word Var_486;
            MR_Word PrintedSomething1_1679;
            MR_Box conv1_STATE_VARIABLE_IO_2_1680;

            {
              Var_481 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_481, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_6[0]));
              MR_hl_field(0, Var_481, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_3));
              MR_hl_field(0, Var_481, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_481, 3) = ((MR_Box) (Var_484));
              MR_hl_field(0, Var_481, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_481, (MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_block\'/7", (MR_String) "nested functions in target C code");
            {
              Var_486 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_486, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_7[0]));
              MR_hl_field(0, Var_486, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_4));
              MR_hl_field(0, Var_486, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_486, 3) = ((MR_Box) (Opts_8));
              MR_hl_field(0, Var_486, 4) = ((MR_Box) (Stream_9));
              MR_hl_field(0, Var_486, 5) = ((MR_Box) (BlockIndent_470));
              MR_hl_field(0, Var_486, 6) = ((MR_Box) (ModuleName_474));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_486, FuncDefns_467, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_2_1680);
            if ((LocalVarDefns_466 == (MR_Word) ((MR_Unsigned) 0U)))
              PrintedSomething1_1679 = (MR_Integer) 1;
            else
            {
              mercury__io__nl_3_p_0(Stream_9);
              ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_7_p_0(Opts_8, Stream_9, BlockIndent_470, (MR_Integer) 0, LocalVarDefns_466);
              PrintedSomething1_1679 = (MR_Integer) 1;
            }
            switch (PrintedSomething1_1679) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                mercury__io__nl_3_p_0(Stream_9);
                break;
            }
            ml_backend__mlds_to_c_func__mlds_output_function_defns_8_p_0(Opts_8, (MR_Integer) 0, Stream_9, BlockIndent_470, ModuleName_474, FuncDefns_467);
            PrintedSomething2_478 = (MR_Integer) 1;
          }
          switch (PrintedSomething2_478) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              mercury__io__nl_3_p_0(Stream_9);
              break;
          }
          ml_backend__mlds_to_c_stmt__mlds_output_statements_7_p_0(Opts_8, Stream_9, BlockIndent_470, FuncInfo_11, SubStmts_468);
          Var_496 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_496, Context_469);
          mercury__io__write_string_4_p_0(Stream_9, BraceIndentStr_471);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_1181 = ((MR_Unsigned) ((MR_hl_field(1, Stmt_12, 0))) & (MR_Integer) 1);
          MR_Word Cond_1182 = ((MR_Word) ((MR_hl_field(1, Stmt_12, 1))));
          MR_Word BodyStmt_1183 = ((MR_Word) ((MR_hl_field(1, Stmt_12, 2))));
          MR_Word Context_1185 = ((MR_Word) ((MR_hl_field(1, Stmt_12, 4))));
          MR_Unsigned ScopeIndent_1186;
          MR_Word BodyOpts_1187;
          MR_String IndentStr_1188;
          MR_Word Var_1213;
          MR_String Var_1214;
          MR_String Var_1215;
          MR_Word Var_1216;
          MR_Word Var_1217;
          MR_Word Var_1218;
          MR_Word Var_1219;
          MR_Word Var_1220;
          MR_Word Var_1221;
          MR_Word Var_1222;
          MR_Word Var_1223;
          MR_Word Var_1224;
          MR_Word Var_1225;
          MR_Word Var_1226;
          MR_Word Var_1227;

          ml_backend__mlds_to_target_util__scope_indent_3_p_0(BodyStmt_1183, Indent_10, &ScopeIndent_1186);
          Var_1213 = ((MR_Word) ((MR_hl_field(0, Opts_8, 0))));
          Var_1214 = ((MR_String) ((MR_hl_field(0, Opts_8, 1))));
          Var_1215 = ((MR_String) ((MR_hl_field(0, Opts_8, 2))));
          Var_1216 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
          Var_1217 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 15)) & (MR_Integer) 1);
          Var_1218 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 14)) & (MR_Integer) 1);
          Var_1219 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 13)) & (MR_Integer) 1);
          Var_1220 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 12)) & (MR_Integer) 1);
          Var_1221 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 11)) & (MR_Integer) 1);
          Var_1222 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 10)) & (MR_Integer) 1);
          Var_1223 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 9)) & (MR_Integer) 1);
          Var_1224 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 7)) & (MR_Integer) 3);
          Var_1225 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 4)) & (MR_Integer) 7);
          Var_1226 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 3)) & (MR_Integer) 1);
          Var_1227 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 2)) & (MR_Integer) 1);
          {
            BodyOpts_1187 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, BodyOpts_1187, 0) = ((MR_Box) (Var_1213));
            MR_hl_field(0, BodyOpts_1187, 1) = ((MR_Box) (Var_1214));
            MR_hl_field(0, BodyOpts_1187, 2) = ((MR_Box) (Var_1215));
            MR_hl_field(0, BodyOpts_1187, 3) = (MR_Box) (((((MR_Unsigned) (Var_1216) << 16)) | (((((MR_Unsigned) (Var_1217) << 15)) | (((((MR_Unsigned) (Var_1218) << 14)) | (((((MR_Unsigned) (Var_1219) << 13)) | (((((MR_Unsigned) (Var_1220) << 12)) | (((((MR_Unsigned) (Var_1221) << 11)) | (((((MR_Unsigned) (Var_1222) << 10)) | (((((MR_Unsigned) (Var_1223) << 9)) | (((((MR_Unsigned) (Var_1224) << 7)) | (((((MR_Unsigned) (Var_1225) << 4)) | (((((MR_Unsigned) (Var_1226) << 3)) | (((((MR_Unsigned) (Var_1227) << 2)) | (MR_Unsigned) ((MR_Integer) 2)))))))))))))))))))))))));
          }
          IndentStr_1188 = libs__indent__indent2_string_1_f_0(Indent_10);
          switch (Kind_1181) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_1204;

                mercury__io__write_string_4_p_0(Stream_9, IndentStr_1188);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "do\n");
                ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(BodyOpts_1187, Stream_9, ScopeIndent_1186, FuncInfo_11, BodyStmt_1183);
                Var_1204 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_1204, Context_1185);
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_1188);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "while (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Cond_1182, Stream_9);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_Opts_8;
                MR_Unsigned next_value_of_Indent_10;
                MR_Word next_value_of_Stmt_12;

                mercury__io__write_string_4_p_0(Stream_9, IndentStr_1188);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "while (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Cond_1182, Stream_9);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")\n");
                // direct tailcall eliminated
                ;
                next_value_of_Opts_8 = BodyOpts_1187;
                next_value_of_Indent_10 = ScopeIndent_1186;
                next_value_of_Stmt_12 = BodyStmt_1183;
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
          MR_Word Cond_950 = ((MR_Word) ((MR_hl_field(2, Stmt_12, 0))));
          MR_Word Then0_951 = ((MR_Word) ((MR_hl_field(2, Stmt_12, 1))));
          MR_Word MaybeElse_952 = ((MR_Word) ((MR_hl_field(2, Stmt_12, 2))));
          MR_Word Context_953 = ((MR_Word) ((MR_hl_field(2, Stmt_12, 3))));
          MR_Word Then_958;
          MR_String IndentStr_962;
          MR_Unsigned ScopeIndent_963;
          MR_Word ThenContext_957;
          MR_Word Var_970;

          succeeded = (MaybeElse_952 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Then0_951)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_970 = ((MR_Word) ((MR_hl_field(2, Then0_951, 2))));
              ThenContext_957 = ((MR_Word) ((MR_hl_field(2, Then0_951, 3))));
              succeeded = (Var_970 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
          {
            MR_Word Var_973;

            {
              Var_973 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_973, 0) = ((MR_Box) (Then0_951));
              MR_hl_field(1, Var_973, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Then_958 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Then_958, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Then_958, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Then_958, 2) = ((MR_Box) (Var_973));
              MR_hl_field(0, Then_958, 3) = ((MR_Box) (ThenContext_957));
            }
          }
          else
          {
            MR_Word ThenContext_996;
            MR_Word Var_975;

            succeeded = (MaybeElse_952 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Then0_951)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_975 = ((MR_Word) ((MR_hl_field(2, Then0_951, 2))));
                ThenContext_996 = ((MR_Word) ((MR_hl_field(2, Then0_951, 3))));
                succeeded = (Var_975 != (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              MR_Word Var_978;

              {
                Var_978 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_978, 0) = ((MR_Box) (Then0_951));
                MR_hl_field(1, Var_978, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Then_958 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Then_958, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Then_958, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Then_958, 2) = ((MR_Box) (Var_978));
                MR_hl_field(0, Then_958, 3) = ((MR_Box) (ThenContext_996));
              }
            }
            else
              Then_958 = Then0_951;
          }
          IndentStr_962 = libs__indent__indent2_string_1_f_0(Indent_10);
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_962);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "if (");
          ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Cond_950, Stream_9);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")\n");
          ml_backend__mlds_to_target_util__scope_indent_3_p_0(Then_958, Indent_10, &ScopeIndent_963);
          ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_8, Stream_9, ScopeIndent_963, FuncInfo_11, Then_958);
          if (!((MaybeElse_952 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word Else_964 = ((MR_Word) ((MR_hl_field(1, MaybeElse_952, 0))));
            MR_Unsigned ElseScopeIndent_969;
            MR_Word Var_989 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
            MR_Unsigned next_value_of_Indent_10;
            MR_Word next_value_of_Stmt_12;

            ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_989, Context_953);
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_962);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "else\n");
            succeeded = ((MR_tag((MR_Word) Else_964)) == (MR_Integer) 2);
            if (succeeded)
              ElseScopeIndent_969 = Indent_10;
            else
              ml_backend__mlds_to_target_util__scope_indent_3_p_0(Else_964, Indent_10, &ElseScopeIndent_969);
            // direct tailcall eliminated
            ;
            next_value_of_Indent_10 = ElseScopeIndent_969;
            next_value_of_Stmt_12 = Else_964;
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
              MR_Word Val_1052 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 2))));
              MR_Word Cases_1054 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 4))));
              MR_Word Default_1055 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 5))));
              MR_Word Context_1056 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 6))));
              MR_String IndentStr_1057;
              MR_Word CaseOpts_1058;
              MR_Word Var_1059;
              MR_Unsigned Var_1066;
              MR_Word Var_1069;
              MR_Unsigned Var_1071;
              MR_Word Var_1073;
              MR_Word Var_1090;
              MR_String Var_1091;
              MR_String Var_1092;
              MR_Word Var_1093;
              MR_Word Var_1094;
              MR_Word Var_1095;
              MR_Word Var_1096;
              MR_Word Var_1097;
              MR_Word Var_1098;
              MR_Word Var_1099;
              MR_Word Var_1100;
              MR_Word Var_1101;
              MR_Word Var_1102;
              MR_Word Var_1103;
              MR_Word Var_1104;
              MR_Box conv5_STATE_VARIABLE_IO_6_1070;

              IndentStr_1057 = libs__indent__indent2_string_1_f_0(Indent_10);
              Var_1059 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_1059, Context_1056);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_1057);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "switch (");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Val_1052, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") {\n");
              Var_1090 = ((MR_Word) ((MR_hl_field(0, Opts_8, 0))));
              Var_1091 = ((MR_String) ((MR_hl_field(0, Opts_8, 1))));
              Var_1092 = ((MR_String) ((MR_hl_field(0, Opts_8, 2))));
              Var_1093 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
              Var_1094 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 15)) & (MR_Integer) 1);
              Var_1095 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 14)) & (MR_Integer) 1);
              Var_1096 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 13)) & (MR_Integer) 1);
              Var_1097 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 12)) & (MR_Integer) 1);
              Var_1098 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 11)) & (MR_Integer) 1);
              Var_1099 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 10)) & (MR_Integer) 1);
              Var_1100 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 9)) & (MR_Integer) 1);
              Var_1101 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 7)) & (MR_Integer) 3);
              Var_1102 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 4)) & (MR_Integer) 7);
              Var_1103 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 3)) & (MR_Integer) 1);
              Var_1104 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 2)) & (MR_Integer) 1);
              {
                CaseOpts_1058 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, CaseOpts_1058, 0) = ((MR_Box) (Var_1090));
                MR_hl_field(0, CaseOpts_1058, 1) = ((MR_Box) (Var_1091));
                MR_hl_field(0, CaseOpts_1058, 2) = ((MR_Box) (Var_1092));
                MR_hl_field(0, CaseOpts_1058, 3) = (MR_Box) (((((MR_Unsigned) (Var_1093) << 16)) | (((((MR_Unsigned) (Var_1094) << 15)) | (((((MR_Unsigned) (Var_1095) << 14)) | (((((MR_Unsigned) (Var_1096) << 13)) | (((((MR_Unsigned) (Var_1097) << 12)) | (((((MR_Unsigned) (Var_1098) << 11)) | (((((MR_Unsigned) (Var_1099) << 10)) | (((((MR_Unsigned) (Var_1100) << 9)) | (((((MR_Unsigned) (Var_1101) << 7)) | (((((MR_Unsigned) (Var_1102) << 4)) | (((((MR_Unsigned) (Var_1103) << 3)) | (((((MR_Unsigned) (Var_1104) << 2)) | (MR_Unsigned) ((MR_Integer) 1)))))))))))))))))))))))));
              }
              Var_1066 = (Indent_10 + (MR_Unsigned) 1U);
              ml_backend__mlds_to_c_stmt__mlds_output_switch_default_8_p_0(CaseOpts_1058, Stream_9, Var_1066, FuncInfo_11, Context_1056, Default_1055);
              Var_1071 = (Indent_10 + (MR_Unsigned) 1U);
              {
                Var_1069 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_1069, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_10[0]));
                MR_hl_field(0, Var_1069, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_11));
                MR_hl_field(0, Var_1069, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_1069, 3) = ((MR_Box) (CaseOpts_1058));
                MR_hl_field(0, Var_1069, 4) = ((MR_Box) (Stream_9));
                MR_hl_field(0, Var_1069, 5) = ((MR_Box) (Var_1071));
                MR_hl_field(0, Var_1069, 6) = ((MR_Box) (FuncInfo_11));
                MR_hl_field(0, Var_1069, 7) = ((MR_Box) (Context_1056));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_1069, Cases_1054, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_6_1070);
              Var_1073 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_1073, Context_1056);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_1057);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Label_1016 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_String IndentM1Str_1018;
              MR_String LabelStr_1019;
              MR_Unsigned Var_1020 = (Indent_10 - (MR_Unsigned) 1U);
              MR_String LabelName_1031;

              IndentM1Str_1018 = libs__indent__indent2_string_1_f_0(Var_1020);
              LabelName_1031 = (MR_String) (Label_1016);
              LabelStr_1019 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName_1031);
              mercury__io__write_string_4_p_0(Stream_9, IndentM1Str_1018);
              mercury__io__write_string_4_p_0(Stream_9, LabelStr_1019);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ":;\n");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_879 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_String IndentStr_881;

              IndentStr_881 = libs__indent__indent2_string_1_f_0(Indent_10);
              switch (MR_tag((MR_Word) Target_879)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Target_879)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word BreakContext_884 = ((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) & (MR_Integer) 3);

                        switch (BreakContext_884) {
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
                              mercury__io__write_string_4_p_0(Stream_9, IndentStr_881);
                              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "break;\n");
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word BreakContext_907 = ((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) & (MR_Integer) 3);

                        switch (BreakContext_907) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                            {
                              mercury__io__write_string_4_p_0(Stream_9, IndentStr_881);
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
                        mercury__io__write_string_4_p_0(Stream_9, IndentStr_881);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "continue;\n");
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Label_882 = ((MR_Word) ((MR_hl_field(1, Target_879, 0))));
                    MR_String LabelStr_883;
                    MR_String LabelName_949 = (MR_String) (Label_882);

                    LabelStr_883 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName_949);
                    mercury__io__write_string_4_p_0(Stream_9, IndentStr_881);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "goto ");
                    mercury__io__write_string_4_p_0(Stream_9, LabelStr_883);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Expr_808 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_Word Labels_809 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 2))));
              MR_Word Context_810 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 3))));
              MR_String IndentStr_811;
              MR_String Indent1Str_812;
              MR_Unsigned Var_814;
              MR_Word Var_820;
              MR_Word Var_823;
              MR_Word Var_826;
              MR_Box conv4__FinalCount_813;
              MR_Box conv3_STATE_VARIABLE_IO_4_822;

              IndentStr_811 = libs__indent__indent2_string_1_f_0(Indent_10);
              Var_814 = (Indent_10 + (MR_Unsigned) 1U);
              Indent1Str_812 = libs__indent__indent2_string_1_f_0(Var_814);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_811);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "switch (");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Expr_808, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") {\n");
              {
                Var_820 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_820, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_9[0]));
                MR_hl_field(0, Var_820, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_9));
                MR_hl_field(0, Var_820, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_820, 3) = ((MR_Box) (Opts_8));
                MR_hl_field(0, Var_820, 4) = ((MR_Box) (Stream_9));
                MR_hl_field(0, Var_820, 5) = ((MR_Box) (Context_810));
                MR_hl_field(0, Var_820, 6) = ((MR_Box) (Indent1Str_812));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_820, Labels_809, ((MR_Box) ((MR_Integer) 0)), &conv4__FinalCount_813, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_4_822);
              Var_823 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_823, Context_810);
              mercury__io__write_string_4_p_0(Stream_9, Indent1Str_812);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "default: /*NOTREACHED*/ MR_assert(0);\n");
              Var_826 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_826, Context_810);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_811);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Signature_534 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_Word FuncRval_535 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 2))));
              MR_Word CallArgs_536 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 3))));
              MR_Word Results_537 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 4))));
              MR_Word IsTailCall_538 = ((MR_Unsigned) ((MR_hl_field(3, Stmt_12, 5))) & (MR_Integer) 3);
              MR_Word Context_539 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 6))));
              MR_Word CallerName_540 = ((MR_Word) ((MR_hl_field(0, FuncInfo_11, 0))));
              MR_Word CallerSignature_541 = ((MR_Word) ((MR_hl_field(0, FuncInfo_11, 1))));
              MR_Word ProfileCalls_542 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 12)) & (MR_Integer) 1);
              MR_Word ProfileTime_543 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 10)) & (MR_Integer) 1);
              MR_Word CallHasReturn_544;

              CallHasReturn_544 = ml_backend__mlds_to_c_stmt__find_out_if_call_has_return_4_f_0(IsTailCall_538, Results_537, Signature_534, CallerSignature_541);
              succeeded = (ProfileCalls_542 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (ProfileTime_543 == (MR_Integer) 0);
                if (succeeded)
                  switch (CallHasReturn_544) {
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
                MR_String IndentStr_618;
                MR_Word Comments_619;
                MR_Word Var_644;
                MR_Word Var_658;
                MR_Word PredLabel_627;
                MR_Integer ProcId_628;
                MR_Word CodeAddr_620;
                MR_Word QualFuncLabel_621;
                MR_Word FuncLabel_624;
                MR_Word ProcLabel_625;
                MR_Word Var_639;

                IndentStr_618 = libs__indent__indent2_string_1_f_0(Indent_10);
                Comments_619 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 14)) & (MR_Integer) 1);
                succeeded = (Comments_619 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) FuncRval_535)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FuncRval_535, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_639 = ((MR_Word) ((MR_hl_field(3, FuncRval_535, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_639)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      CodeAddr_620 = (MR_Word) (MR_body((MR_Word) (Var_639), (MR_Integer) 1));
                      QualFuncLabel_621 = ((MR_Word) ((MR_hl_field(0, CodeAddr_620, 0))));
                      FuncLabel_624 = ((MR_Word) ((MR_hl_field(0, QualFuncLabel_621, 1))));
                      ProcLabel_625 = ((MR_Word) ((MR_hl_field(0, FuncLabel_624, 0))));
                      PredLabel_627 = ((MR_Word) ((MR_hl_field(0, ProcLabel_625, 0))));
                      ProcId_628 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_625, 1))));
                      if (((MR_tag((MR_Word) PredLabel_627)) == (MR_Integer) 1))
                      {
                        MR_String PredName_634 = ((MR_String) ((MR_hl_field(1, PredLabel_627, 0))));
                        MR_String TypeName_635 = ((MR_String) ((MR_hl_field(1, PredLabel_627, 2))));
                        MR_Word MaybeModuleName_663 = ((MR_Word) ((MR_hl_field(1, PredLabel_627, 1))));

                        {
                          MR_String Var_698;

                          Var_698 = parse_tree__prog_foreign__name_mangle_1_f_0(PredName_634);
                          succeeded = (strcmp(PredName_634, Var_698) == 0);
                          succeeded = !(succeeded);
                        }
                        if (!(succeeded))
                        {
                          {
                            MR_Word ModuleName_662;
                            MR_String Var_641;
                            MR_String Var_699;

                            succeeded = (MaybeModuleName_663 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ModuleName_662 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_663, 0))));
                              Var_641 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_662);
                              Var_699 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_662);
                              succeeded = (strcmp(Var_641, Var_699) == 0);
                              succeeded = !(succeeded);
                            }
                          }
                          if (!(succeeded))
                          {
                            MR_String Var_700;

                            Var_700 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_635);
                            succeeded = (strcmp(TypeName_635, Var_700) == 0);
                            succeeded = !(succeeded);
                          }
                        }
                      }
                      else
                      {
                        MR_Word MaybeModuleName_630 = ((MR_Word) ((MR_hl_field(0, PredLabel_627, 1))));
                        MR_String Name_631 = ((MR_String) ((MR_hl_field(0, PredLabel_627, 2))));

                        {
                          MR_String Var_696;

                          Var_696 = parse_tree__prog_foreign__name_mangle_1_f_0(Name_631);
                          succeeded = (strcmp(Name_631, Var_696) == 0);
                          succeeded = !(succeeded);
                        }
                        if (!(succeeded))
                        {
                          MR_Word ModuleName_633;
                          MR_String Var_640;
                          MR_String Var_697;

                          succeeded = (MaybeModuleName_630 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ModuleName_633 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_630, 0))));
                            Var_640 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_633);
                            Var_697 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_633);
                            succeeded = (strcmp(Var_640, Var_697) == 0);
                            succeeded = !(succeeded);
                          }
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_String UnmangledPredLabelStr_637;
                  MR_Integer ProcIdNum_638;
                  MR_String Var_710;

                  UnmangledPredLabelStr_637 = ml_backend__mlds_to_c_name__pred_label_to_string_for_c_2_f_0((MR_Integer) 0, PredLabel_627);
                  ProcIdNum_638 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_628);
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_618);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "// callee is ");
                  mercury__io__write_string_4_p_0(Stream_9, UnmangledPredLabelStr_637);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_");
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), ProcIdNum_638, &Var_710);
                  mercury__io__write_string_4_p_0(Stream_9, Var_710);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
                }
                Var_644 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_644, Context_539);
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_618);
                switch (CallHasReturn_544) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "return ");
                    break;
                }
                if (!((Results_537 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word Var_701 = ((MR_Word) ((MR_hl_field(1, Results_537, 1))));
                  MR_Word Var_702 = ((MR_Word) ((MR_hl_field(1, Results_537, 0))));

                  if ((Var_701 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Var_702, Stream_9);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                  }
                  else
                  {
                    MR_Word Var_652;

                    {
                      Var_652 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_652, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[0]));
                      MR_hl_field(0, Var_652, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_5));
                      MR_hl_field(0, Var_652, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(0, Var_652, 3) = ((MR_Box) (Opts_8));
                    }
                    ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Stream_9, Var_652, Results_537);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                  }
                }
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, FuncRval_535);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                {
                  Var_658 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_658, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[1]));
                  MR_hl_field(0, Var_658, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_6));
                  MR_hl_field(0, Var_658, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_658, 3) = ((MR_Box) (Opts_8));
                }
                parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_658, (MR_String) ", ", CallArgs_536, Stream_9);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
              }
              else
              {
                MR_Unsigned BodyIndent_545 = (Indent_10 + (MR_Unsigned) 1U);
                MR_String IndentStr_546;
                MR_String BodyIndentStr_547;
                MR_String IndentStr_713;
                MR_Word Comments_714;
                MR_Word Var_739;
                MR_Word Var_753;
                MR_Word PredLabel_722;
                MR_Integer ProcId_723;
                MR_Word CodeAddr_715;
                MR_Word QualFuncLabel_716;
                MR_Word FuncLabel_719;
                MR_Word ProcLabel_720;
                MR_Word Var_734;

                IndentStr_546 = libs__indent__indent2_string_1_f_0(Indent_10);
                BodyIndentStr_547 = libs__indent__indent2_string_1_f_0(BodyIndent_545);
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_546);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
                switch (ProfileCalls_542) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    ml_backend__mlds_to_c_stmt__mlds_output_call_profile_instr_8_p_0(Opts_8, Stream_9, Context_539, BodyIndent_545, FuncRval_535, CallerName_540);
                    break;
                }
                IndentStr_713 = libs__indent__indent2_string_1_f_0(BodyIndent_545);
                Comments_714 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 14)) & (MR_Integer) 1);
                succeeded = (Comments_714 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) FuncRval_535)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FuncRval_535, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_734 = ((MR_Word) ((MR_hl_field(3, FuncRval_535, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_734)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      CodeAddr_715 = (MR_Word) (MR_body((MR_Word) (Var_734), (MR_Integer) 1));
                      QualFuncLabel_716 = ((MR_Word) ((MR_hl_field(0, CodeAddr_715, 0))));
                      FuncLabel_719 = ((MR_Word) ((MR_hl_field(0, QualFuncLabel_716, 1))));
                      ProcLabel_720 = ((MR_Word) ((MR_hl_field(0, FuncLabel_719, 0))));
                      PredLabel_722 = ((MR_Word) ((MR_hl_field(0, ProcLabel_720, 0))));
                      ProcId_723 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_720, 1))));
                      if (((MR_tag((MR_Word) PredLabel_722)) == (MR_Integer) 1))
                      {
                        MR_String PredName_729 = ((MR_String) ((MR_hl_field(1, PredLabel_722, 0))));
                        MR_String TypeName_730 = ((MR_String) ((MR_hl_field(1, PredLabel_722, 2))));
                        MR_Word MaybeModuleName_758 = ((MR_Word) ((MR_hl_field(1, PredLabel_722, 1))));

                        {
                          MR_String Var_793;

                          Var_793 = parse_tree__prog_foreign__name_mangle_1_f_0(PredName_729);
                          succeeded = (strcmp(PredName_729, Var_793) == 0);
                          succeeded = !(succeeded);
                        }
                        if (!(succeeded))
                        {
                          {
                            MR_Word ModuleName_757;
                            MR_String Var_736;
                            MR_String Var_794;

                            succeeded = (MaybeModuleName_758 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ModuleName_757 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_758, 0))));
                              Var_736 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_757);
                              Var_794 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_757);
                              succeeded = (strcmp(Var_736, Var_794) == 0);
                              succeeded = !(succeeded);
                            }
                          }
                          if (!(succeeded))
                          {
                            MR_String Var_795;

                            Var_795 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_730);
                            succeeded = (strcmp(TypeName_730, Var_795) == 0);
                            succeeded = !(succeeded);
                          }
                        }
                      }
                      else
                      {
                        MR_Word MaybeModuleName_725 = ((MR_Word) ((MR_hl_field(0, PredLabel_722, 1))));
                        MR_String Name_726 = ((MR_String) ((MR_hl_field(0, PredLabel_722, 2))));

                        {
                          MR_String Var_791;

                          Var_791 = parse_tree__prog_foreign__name_mangle_1_f_0(Name_726);
                          succeeded = (strcmp(Name_726, Var_791) == 0);
                          succeeded = !(succeeded);
                        }
                        if (!(succeeded))
                        {
                          MR_Word ModuleName_728;
                          MR_String Var_735;
                          MR_String Var_792;

                          succeeded = (MaybeModuleName_725 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ModuleName_728 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_725, 0))));
                            Var_735 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_728);
                            Var_792 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_728);
                            succeeded = (strcmp(Var_735, Var_792) == 0);
                            succeeded = !(succeeded);
                          }
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_String UnmangledPredLabelStr_732;
                  MR_Integer ProcIdNum_733;
                  MR_String Var_805;

                  UnmangledPredLabelStr_732 = ml_backend__mlds_to_c_name__pred_label_to_string_for_c_2_f_0((MR_Integer) 0, PredLabel_722);
                  ProcIdNum_733 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_723);
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_713);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "// callee is ");
                  mercury__io__write_string_4_p_0(Stream_9, UnmangledPredLabelStr_732);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_");
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), ProcIdNum_733, &Var_805);
                  mercury__io__write_string_4_p_0(Stream_9, Var_805);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
                }
                Var_739 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_739, Context_539);
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_713);
                switch (CallHasReturn_544) {
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
                if (!((Results_537 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word Var_796 = ((MR_Word) ((MR_hl_field(1, Results_537, 1))));
                  MR_Word Var_797 = ((MR_Word) ((MR_hl_field(1, Results_537, 0))));

                  if ((Var_796 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Var_797, Stream_9);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                  }
                  else
                  {
                    MR_Word Var_747;

                    {
                      Var_747 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_747, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[0]));
                      MR_hl_field(0, Var_747, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_7));
                      MR_hl_field(0, Var_747, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(0, Var_747, 3) = ((MR_Box) (Opts_8));
                    }
                    ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Stream_9, Var_747, Results_537);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                  }
                }
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, FuncRval_535);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                {
                  Var_753 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_753, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[1]));
                  MR_hl_field(0, Var_753, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_8));
                  MR_hl_field(0, Var_753, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_753, 3) = ((MR_Box) (Opts_8));
                }
                parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_753, (MR_String) ", ", CallArgs_536, Stream_9);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
                switch (CallHasReturn_544) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    switch (ProfileTime_543) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                        }
                        break;
                      case (MR_Integer) 1:
                        ml_backend__mlds_to_c_stmt__mlds_output_time_profile_instr_7_p_0(Opts_8, Stream_9, Context_539, BodyIndent_545, CallerName_540);
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_556 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);

                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_556, Context_539);
                      mercury__io__write_string_4_p_0(Stream_9, BodyIndentStr_547);
                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "return;\n");
                    }
                    break;
                }
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_546);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Results_1032 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_String IndentStr_1034;

              IndentStr_1034 = libs__indent__indent2_string_1_f_0(Indent_10);
              if ((Results_1032 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_1034);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "return;\n");
              }
              else
              {
                MR_Word Var_1043 = ((MR_Word) ((MR_hl_field(1, Results_1032, 1))));
                MR_Word Var_1044 = ((MR_Word) ((MR_hl_field(1, Results_1032, 0))));

                if ((Var_1043 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_1034);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "return ");
                  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Var_1044, Stream_9);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                }
                else
                {
                  MR_Word Var_1039;

                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_1034);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "return");
                  {
                    Var_1039 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_1039, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[1]));
                    MR_hl_field(0, Var_1039, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_10));
                    MR_hl_field(0, Var_1039, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_1039, 3) = ((MR_Box) (Opts_8));
                  }
                  ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Stream_9, Var_1039, Results_1032);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Ref_1127 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_Word BodyStmt0_1128 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 2))));
              MR_Word HandlerStmt_1129 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 3))));
              MR_Word Context_1130 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 4))));
              MR_Word BodyStmt_1133;
              MR_String IndentStr_1134;
              MR_Unsigned Var_1148;
              MR_Word Var_1151;
              MR_Unsigned Var_1158;
              MR_Word Var_1135;
              MR_Word Var_1175;
              MR_Unsigned next_value_of_Indent_10;
              MR_Word next_value_of_Stmt_12;

              succeeded = ((MR_tag((MR_Word) BodyStmt0_1128)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_1135 = ((MR_Word) ((MR_hl_field(2, BodyStmt0_1128, 2))));
                Var_1175 = ((MR_Word) ((MR_hl_field(2, BodyStmt0_1128, 3))));
                succeeded = mercury__term_context____Unify____term_context_0_0(Context_1130, Var_1175);
                if (succeeded)
                  succeeded = (Var_1135 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word Var_1138;

                {
                  Var_1138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_1138, 0) = ((MR_Box) (BodyStmt0_1128));
                  MR_hl_field(1, Var_1138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  BodyStmt_1133 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BodyStmt_1133, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, BodyStmt_1133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, BodyStmt_1133, 2) = ((MR_Box) (Var_1138));
                  MR_hl_field(0, BodyStmt_1133, 3) = ((MR_Box) (Context_1130));
                }
              }
              else
                BodyStmt_1133 = BodyStmt0_1128;
              IndentStr_1134 = libs__indent__indent2_string_1_f_0(Indent_10);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_1134);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "if (MR_builtin_setjmp(");
              ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Ref_1127, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") == 0)\n");
              Var_1148 = (Indent_10 + (MR_Unsigned) 1U);
              ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_8, Stream_9, Var_1148, FuncInfo_11, BodyStmt_1133);
              Var_1151 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_1151, Context_1130);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_1134);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "else\n");
              Var_1158 = (Indent_10 + (MR_Unsigned) 1U);
              // direct tailcall eliminated
              ;
              next_value_of_Indent_10 = Var_1158;
              next_value_of_Stmt_12 = HandlerStmt_1129;
              Indent_10 = next_value_of_Indent_10;
              Stmt_12 = next_value_of_Stmt_12;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Ref_867 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_String IndentStr_869;

              IndentStr_869 = libs__indent__indent2_string_1_f_0(Indent_10);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_869);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_builtin_longjmp(");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Ref_867, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", 1);\n");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word AtomicStmt_100 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 1))));
              MR_Word Context_101 = ((MR_Word) ((MR_hl_field(3, Stmt_12, 2))));
              MR_String IndentStr_102;

              IndentStr_102 = libs__indent__indent2_string_1_f_0(Indent_10);
              switch (MR_tag((MR_Word) AtomicStmt_100)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_4_p_0(Stream_9, IndentStr_102);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_GC_check();\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Comment_103 = ((MR_String) ((MR_hl_field(1, AtomicStmt_100, 0))));

                    succeeded = (strcmp(Comment_103, (MR_String) "") == 0);
                    if (!(succeeded))
                    {
                      MR_Word CommentLines_104;

                      CommentLines_104 = mercury__string__split_at_separator_2_f_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_4[0]), Comment_103);
                      ml_backend__mlds_to_c_stmt__write_comment_lines_5_p_0(Stream_9, IndentStr_102, CommentLines_104);
                    }
                    mercury__io__write_string_4_p_0(Stream_9, IndentStr_102);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Lval_105 = ((MR_Word) ((MR_hl_field(2, AtomicStmt_100, 0))));
                    MR_Word Rval_106 = ((MR_Word) ((MR_hl_field(2, AtomicStmt_100, 1))));

                    mercury__io__write_string_4_p_0(Stream_9, IndentStr_102);
                    ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Lval_105, Stream_9);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Rval_106, Stream_9);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, AtomicStmt_100, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Lval_139 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_100, 1))));
                        MR_Word Rval_140 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_100, 2))));

                        mercury__io__write_string_4_p_0(Stream_9, IndentStr_102);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_assign_if_in_heap(");
                        ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Lval_139, Stream_9);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                        ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Rval_140, Stream_9);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Rval_141 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_100, 1))));

                        mercury__io__write_string_4_p_0(Stream_9, IndentStr_102);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_free_heap(");
                        ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Rval_141, Stream_9);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Target_158 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_100, 1))));
                        MR_Word Ptag_159 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_100, 2))));
                        MR_Word Type_161 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_100, 4))));
                        MR_Word MaybeSize_162 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_100, 5))));
                        MR_Word ArgRvalsTypes_164 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_100, 7))));
                        MR_Word MayUseAtomic_165 = ((MR_Unsigned) ((MR_hl_field(3, AtomicStmt_100, 8))) & (MR_Integer) 1);
                        MR_Word MaybeAllocId_166 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_100, 9))));
                        MR_String IndentStr_167;
                        MR_String Indent1Str_168;
                        MR_Word Base_171;
                        MR_String TypeStr_177;
                        MR_String NewObjectMacro_178;
                        MR_String MaybeAllocIdStr_179;
                        uint8_t PtagUInt8_180;
                        MR_String EndMkword_181;
                        MR_Unsigned Var_186;
                        MR_Unsigned Var_277;
                        MR_Word Var_280;

                        IndentStr_167 = libs__indent__indent2_string_1_f_0(Indent_10);
                        Var_186 = (Indent_10 + (MR_Unsigned) 1U);
                        Indent1Str_168 = libs__indent__indent2_string_1_f_0(Var_186);
                        mercury__io__write_string_4_p_0(Stream_9, IndentStr_167);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
                        switch (MayUseAtomic_165) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            NewObjectMacro_178 = (MR_String) "MR_new_object";
                            break;
                          case (MR_Integer) 0:
                            NewObjectMacro_178 = (MR_String) "MR_new_object_atomic";
                            break;
                        }
                        MaybeAllocIdStr_179 = ml_backend__mlds_to_c_stmt__maybe_alloc_id_to_string_1_f_0(MaybeAllocId_166);
                        succeeded = ((((MR_tag((MR_Word) Target_158)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Target_158, 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          MR_Word GC_Method_175;
                          MR_Word Var_304;

                          {
                            Base_171 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Base_171, 0) = ((MR_Box) (Target_158));
                          }
                          Var_304 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
                          GC_Method_175 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 4)) & (MR_Integer) 7);
                          switch (GC_Method_175) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 5:
                              {
                                MR_Word NeedsForwardingSpace_176;

                                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_304, Context_101);
                                mercury__io__write_string_4_p_0(Stream_9, Indent1Str_168);
                                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_GC_check();\n");
                                NeedsForwardingSpace_176 = ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(Type_161);
                                switch (NeedsForwardingSpace_176) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_304, Context_101);
                                      mercury__io__write_string_4_p_0(Stream_9, Indent1Str_168);
                                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "// reserve space for GC forwarding pointer\n");
                                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_304, Context_101);
                                      mercury__io__write_string_4_p_0(Stream_9, Indent1Str_168);
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
                          TypeStr_177 = ml_backend__mlds_to_c_type__type_to_string_for_c_2_f_0(Opts_8, Type_161);
                          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_304, Context_101);
                          mercury__io__write_string_4_p_0(Stream_9, Indent1Str_168);
                          ml_backend__mlds_to_c_stmt__write_lval_or_string_5_p_0(Opts_8, Stream_9, Base_171);
                        }
                        else
                        {
                          MR_String TypePrefix_173;
                          MR_String TypeSuffix_174;
                          MR_Word Var_194;
                          MR_Word GC_Method_1475;

                          Base_171 = (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_c_stmt_scalar_common_1[3]));
                          ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_8, Type_161, (MR_Word) ((MR_Unsigned) 0U), &TypePrefix_173, &TypeSuffix_174);
                          Var_194 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
                          GC_Method_1475 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 4)) & (MR_Integer) 7);
                          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_194, Context_101);
                          mercury__io__write_string_4_p_0(Stream_9, Indent1Str_168);
                          mercury__io__write_string_4_p_0(Stream_9, TypePrefix_173);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "base");
                          mercury__io__write_string_4_p_0(Stream_9, TypeSuffix_174);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                          switch (GC_Method_1475) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 5:
                              {
                                MR_Word NeedsForwardingSpace_1372;

                                ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_194, Context_101);
                                mercury__io__write_string_4_p_0(Stream_9, Indent1Str_168);
                                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_GC_check();\n");
                                NeedsForwardingSpace_1372 = ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(Type_161);
                                switch (NeedsForwardingSpace_1372) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_194, Context_101);
                                      mercury__io__write_string_4_p_0(Stream_9, Indent1Str_168);
                                      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "// reserve space for GC forwarding pointer\n");
                                      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_194, Context_101);
                                      mercury__io__write_string_4_p_0(Stream_9, Indent1Str_168);
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
                          TypeStr_177 = ml_backend__mlds_to_c_type__type_to_string_for_c_2_f_0(Opts_8, Type_161);
                          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_194, Context_101);
                          mercury__io__write_string_4_p_0(Stream_9, Indent1Str_168);
                          ml_backend__mlds_to_c_stmt__write_lval_or_string_5_p_0(Opts_8, Stream_9, Base_171);
                        }
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                        PtagUInt8_180 = (uint8_t) (Ptag_159);
                        succeeded = (PtagUInt8_180 == UINT8_C(0));
                        if (succeeded)
                        {
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                          mercury__io__write_string_4_p_0(Stream_9, TypeStr_177);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
                          mercury__io__write_string_4_p_0(Stream_9, NewObjectMacro_178);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                          mercury__io__write_string_4_p_0(Stream_9, TypeStr_177);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                          EndMkword_181 = (MR_String) "";
                        }
                        else
                        {
                          MR_Unsigned Var_438;
                          MR_String Var_439;

                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                          mercury__io__write_string_4_p_0(Stream_9, TypeStr_177);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") MR_mkword(");
                          mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_180, &Var_438);
                          mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), (MR_Integer) 1, Var_438, &Var_439);
                          mercury__io__write_string_4_p_0(Stream_9, Var_439);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                          mercury__io__write_string_4_p_0(Stream_9, NewObjectMacro_178);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                          mercury__io__write_string_4_p_0(Stream_9, TypeStr_177);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                          EndMkword_181 = (MR_String) ")";
                        }
                        if ((MaybeSize_162 == (MR_Word) ((MR_Unsigned) 0U)))
                          mercury__io__write_int_4_p_0(Stream_9, (MR_Integer) -1);
                        else
                        {
                          MR_Word Size_182 = ((MR_Word) ((MR_hl_field(1, MaybeSize_162, 0))));
                          MR_Integer SizeInt_183;
                          MR_Word Var_255;

                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                          succeeded = ((((MR_tag((MR_Word) Size_182)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Size_182, 0)))) == (MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_255 = ((MR_Word) ((MR_hl_field(3, Size_182, 1))));
                            succeeded = ((MR_tag((MR_Word) Var_255)) == (MR_Integer) 2);
                            if (succeeded)
                              SizeInt_183 = ((MR_Integer) ((MR_hl_field(2, Var_255, 0))));
                          }
                          if (succeeded)
                            mercury__io__write_int_4_p_0(Stream_9, SizeInt_183);
                          else
                            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Size_182, Stream_9);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " * sizeof(MR_Word))");
                        }
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
                        mercury__io__write_string_4_p_0(Stream_9, MaybeAllocIdStr_179);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", NULL)");
                        mercury__io__write_string_4_p_0(Stream_9, EndMkword_181);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                        if (!(((MR_tag((MR_Word) Base_171)) == (MR_Integer) 0)))
                        {
                          MR_String BaseVarName1_185 = ((MR_String) ((MR_hl_field(1, Base_171, 0))));
                          MR_Word Var_267 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);

                          ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_267, Context_101);
                          mercury__io__write_string_4_p_0(Stream_9, Indent1Str_168);
                          ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Target_158, Stream_9);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_9, BaseVarName1_185);
                          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
                        }
                        Var_277 = (Indent_10 + (MR_Unsigned) 1U);
                        ml_backend__mlds_to_c_stmt__mlds_output_init_args_10_p_0(Opts_8, Stream_9, ArgRvalsTypes_164, Context_101, (MR_Integer) 0, Base_171, Ptag_159, Var_277);
                        Var_280 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
                        ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_280, Context_101);
                        mercury__io__write_string_4_p_0(Stream_9, IndentStr_167);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Lval_142 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_100, 1))));

                        mercury__io__write_string_4_p_0(Stream_9, IndentStr_102);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_mark_hp(");
                        ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_8, Lval_142, Stream_9);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Rval_143 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_100, 1))));

                        mercury__io__write_string_4_p_0(Stream_9, IndentStr_102);
                        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_restore_hp(");
                        ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Rval_143, Stream_9);
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
                        MR_Word TargetLang_107 = ((MR_Unsigned) ((MR_hl_field(3, AtomicStmt_100, 1))) & (MR_Integer) 3);
                        MR_Word Components_108 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_100, 2))));

                        switch (TargetLang_107) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word Var_134;
                              MR_Box conv0_STATE_VARIABLE_IO_43;

                              {
                                Var_134 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, Var_134, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_5[0]));
                                MR_hl_field(0, Var_134, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0_2));
                                MR_hl_field(0, Var_134, 2) = ((MR_Box) ((MR_Integer) 3));
                                MR_hl_field(0, Var_134, 3) = ((MR_Box) (Opts_8));
                                MR_hl_field(0, Var_134, 4) = ((MR_Box) (Stream_9));
                                MR_hl_field(0, Var_134, 5) = ((MR_Box) (Context_101));
                              }
                              mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_134, Components_108, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_43);
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
            Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_9, 3))) >> 16)) & (MR_Integer) 1);
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
        MR_String IndentStr_45;

        IndentStr_45 = libs__indent__indent2_string_1_f_0(Indent_11);
        Var_28 = (Indent_11 + (MR_Unsigned) 1U);
        Indent1Str_18 = libs__indent__indent2_string_1_f_0(Var_28);
        Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_9, 3))) >> 16)) & (MR_Integer) 1);
        ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_30, Context_13);
        mercury__io__write_string_4_p_0(Stream_10, IndentStr_45);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "default:\n");
        Var_37 = (Indent_11 + (MR_Unsigned) 1U);
        ml_backend__mlds_to_c_stmt__mlds_output_statement_7_p_0(Opts_9, Stream_10, Var_37, FuncInfo_12, Stmt_17);
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
      MR_Unsigned Var_78;
      MR_String Var_79;
      MR_String Var_90;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_ArgNum_5;

      IndentStr_31 = libs__indent__indent2_string_1_f_0(Indent_8);
      PtagUInt8_32 = (uint8_t) (Ptag_7);
      ArgRval_33 = ((MR_Word) ((MR_hl_field(0, ArgRvalType_23, 0))));
      ArgType_34 = ((MR_Word) ((MR_hl_field(0, ArgRvalType_23, 1))));
      Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_1, 3))) >> 16)) & (MR_Integer) 1);
      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_2, Var_37, Context_4);
      mercury__io__write_string_4_p_0(Stream_2, IndentStr_31);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "MR_hl_field(");
      mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_32, &Var_78);
      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), (MR_Integer) 1, Var_78, &Var_79);
      mercury__io__write_string_4_p_0(Stream_2, Var_79);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ", ");
      ml_backend__mlds_to_c_stmt__write_lval_or_string_5_p_0(Opts_1, Stream_2, Base_6);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ", ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[2]), ArgNum_5, &Var_90);
      mercury__io__write_string_4_p_0(Stream_2, Var_90);
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
  Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_9, 3))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_20, Context_11);
  mercury__io__write_string_4_p_0(Stream_10, IndentStr_16);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "MR_prof_call_profile(");
  ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_9, Stream_10, CalleeFuncRval_13);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_10, CallerNameStr_17);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ");\n");
}

static MR_Word MR_CALL 
ml_backend__mlds_to_c_stmt__find_out_if_call_has_return_4_f_0(
  MR_Word CallKind_6,
  MR_Word Results_7,
  MR_Word CalleeSignature_8,
  MR_Word CallerSignature_9)
{
  MR_bool succeeded;
  MR_Word CallHasReturn_10;

  switch (CallKind_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word CalleeReturnTypes_12 = ((MR_Word) ((MR_hl_field(0, CalleeSignature_8, 1))));
        MR_Word CallerReturnTypes_14 = ((MR_Word) ((MR_hl_field(0, CallerSignature_9, 1))));
        MR_Word TypeInfo_17_17;

        succeeded = (Results_7 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (CalleeReturnTypes_12)), ((MR_Box) (CallerReturnTypes_14)));
        }
        if (succeeded)
          CallHasReturn_10 = (MR_Integer) 1;
        else
        {
          succeeded = (CallerReturnTypes_14 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            CallHasReturn_10 = (MR_Integer) 2;
          else
            CallHasReturn_10 = (MR_Integer) 0;
        }
      }
      break;
    case (MR_Integer) 2:
      CallHasReturn_10 = (MR_Integer) 0;
      break;
  }
  return CallHasReturn_10;
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
  Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
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
