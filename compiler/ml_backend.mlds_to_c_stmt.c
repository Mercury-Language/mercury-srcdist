/*
** Automatically generated from `mlds_to_c_stmt.m'
** by the Mercury compiler,
** version 2018-10-29
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
#include "ml_backend.mlds_to_c_data.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_type.mih"
#include "ml_backend.mlds_to_c_util.mih"
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
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_6[2][7];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_7[1][11];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_8[1][10];

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_9[1][9];




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

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_6[2][7] = {
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

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_7[1][11] = {
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

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_8[1][10] = {
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

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_9[1][9] = {
  /* row 0 */
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__field_types_func_info_c_0_0[2] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_qual_function_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_signature_0)
};

static const MR_DuFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_func_info_c_0_0 = {
  (MR_String) "func_info_c",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
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
    (MR_Integer) 1,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Unify____func_info_c_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Compare____func_info_c_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_stmt",
  (MR_String) "func_info_c",
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_name_ordered_func_info_c_0 },
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_ptag_ordered_func_info_c_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_func_info_c_0
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__field_types_lval_or_string_0_0[1] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)
};

static const MR_DuFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_lval_or_string_0_0 = {
  (MR_String) "ls_lval",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
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
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
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
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_lval_or_string_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Unify____lval_or_string_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Compare____lval_or_string_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_stmt",
  (MR_String) "lval_or_string",
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_name_ordered_lval_or_string_0 },
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_ptag_ordered_lval_or_string_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_lval_or_string_0
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_0 = {
  (MR_String) "call_has_no_return",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_1 = {
  (MR_String) "call_has_return_expr_prefix",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_functor_desc_maybe_call_has_return_0_2 = {
  (MR_String) "call_has_return_stmt_suffix",
  (MR_Integer) 2
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Unify____maybe_call_has_return_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_stmt____Compare____maybe_call_has_return_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_stmt",
  (MR_String) "maybe_call_has_return",
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_name_ordered_maybe_call_has_return_0 },
  {     ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__enum_value_ordered_maybe_call_has_return_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__functor_number_map_maybe_call_has_return_0
};

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
        MR_Word Var_99 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

        if ((MaybeUserContext_11 == (MR_Word) ((MR_Unsigned) 0U)))
          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_99, Context_7);
        else
        {
          MR_Word UserContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUserContext_11, (MR_Integer) 0))));

          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_99, UserContext_12);
        }
        mercury__io__write_string_3_p_0(CodeString_10);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        Var_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
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
    MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    MR_Integer Var_20;
    MR_String Var_50;

    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_18, Context_10);
    Var_20 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_20);
    mercury__io__write_string_3_p_0((MR_String) "case ");
    mercury__io__write_int_3_p_0(Count0_13);
    mercury__io__write_string_3_p_0((MR_String) ": goto ");
    Var_50 = parse_tree__prog_foreign__name_mangle_1_f_0(Label_12);
    mercury__io__write_string_3_p_0(Var_50);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
    *Count_14 = (MR_Integer) ((MR_Unsigned) Count0_13 + (MR_Unsigned) (MR_Integer) 1);
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
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_switch_case_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Opts_8));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (Indent_9));
      MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (Context_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, LaterConds_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_21_21);
    Var_22 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_8, Var_22, FuncInfo_10, Stmt_16);
    Var_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_25, Context_11);
    Var_27 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
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
    MR_Word Var_76 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

    if (((MR_tag((MR_Word) Match_10)) == (MR_Integer) 1))
    {
      MR_Word Low_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Match_10, (MR_Integer) 0))));
      MR_Word High_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Match_10, (MR_Integer) 1))));

      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_76, Context_9);
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

      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_76, Context_9);
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
      Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
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
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_9(
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
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_Count_14;

    ml_backend__mlds_to_c_stmt__mlds_output_computed_goto_label_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_Count_14);
    *wrapper_arg_3 = ((MR_Box) (conv1_Count_14));
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

    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_3(
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
    MR_Word Var_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

    // setup for model_det tailcalls optimized into a loop
    ;
    ml_backend__mlds_to_c_util__c_output_stmt_context_4_p_0(Var_42, Stmt_10);
    switch (MR_tag((MR_Word) Stmt_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns_431 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_10, (MR_Integer) 0))));
          MR_Word FuncDefns_432 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_10, (MR_Integer) 1))));
          MR_Word SubStmts_433 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_10, (MR_Integer) 2))));
          MR_Word Context_434 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_10, (MR_Integer) 3))));
          MR_Integer BlockIndent_436 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
          MR_Word Var_452;

          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
          mercury__io__write_string_3_p_0((MR_String) "{\n");
          if (!((FuncDefns_432 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_block\'/6", (MR_String) "FuncDefns != []");
              return;
            }
          }
          if (!((LocalVarDefns_431 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_6_p_0(Opts_7, BlockIndent_436, (MR_Integer) 0, LocalVarDefns_431);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          ml_backend__mlds_to_c_stmt__mlds_output_statements_6_p_0(Opts_7, BlockIndent_436, FuncInfo_9, SubStmts_433);
          Var_452 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_452, Context_434);
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_1077 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Stmt_10, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Cond_1078 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_10, (MR_Integer) 1))));
          MR_Word BodyStmt_1079 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_10, (MR_Integer) 2))));
          MR_Word Context_1081 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_10, (MR_Integer) 4))));
          MR_Integer ScopeIndent_1082;
          MR_Word BodyOpts_1083;
          MR_Word Var_1104;
          MR_String Var_1105;
          MR_Unsigned packed_word_25;

          ml_backend__mlds_to_target_util__scope_indent_3_p_0(BodyStmt_1079, Indent_8, &ScopeIndent_1082);
          Var_1104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
          Var_1105 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
          packed_word_25 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2)));
          {
            BodyOpts_1083 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BodyOpts_1083, 0) = ((MR_Box) (Var_1104));
            MR_hl_field(MR_mktag(0), BodyOpts_1083, 1) = ((MR_Box) (Var_1105));
            MR_hl_field(MR_mktag(0), BodyOpts_1083, 2) = (MR_Box) ((((packed_word_25 & (~((MR_Unsigned) 3U)))) | (MR_Unsigned) ((MR_Integer) 2)));
          }
          switch (Kind_1077) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_1089;

                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                mercury__io__write_string_3_p_0((MR_String) "do\n");
                ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(BodyOpts_1083, ScopeIndent_1082, FuncInfo_9, BodyStmt_1079);
                Var_1089 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_1089, Context_1081);
                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                mercury__io__write_string_3_p_0((MR_String) "while (");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Cond_1078);
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
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Cond_1078);
                mercury__io__write_string_3_p_0((MR_String) ")\n");
                // direct tailcall eliminated
                ;
                next_value_of_Opts_7 = BodyOpts_1083;
                next_value_of_Indent_8 = ScopeIndent_1082;
                next_value_of_Stmt_10 = BodyStmt_1079;
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
          MR_Word Cond_829 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_10, (MR_Integer) 0))));
          MR_Word Then0_830 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_10, (MR_Integer) 1))));
          MR_Word MaybeElse_831 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_10, (MR_Integer) 2))));
          MR_Word Context_832 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_10, (MR_Integer) 3))));
          MR_Word Then_837;
          MR_Integer ScopeIndent_841;
          MR_Word ThenContext_836;
          MR_Word Var_848;

          succeeded = (MaybeElse_831 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Then0_830)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_848 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_830, (MR_Integer) 2))));
              ThenContext_836 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_830, (MR_Integer) 3))));
              succeeded = (Var_848 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
          {
            MR_Word Var_851;

            {
              Var_851 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_851, 0) = ((MR_Box) (Then0_830));
              MR_hl_field(MR_mktag(1), Var_851, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Then_837 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Then_837, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Then_837, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Then_837, 2) = ((MR_Box) (Var_851));
              MR_hl_field(MR_mktag(0), Then_837, 3) = ((MR_Box) (ThenContext_836));
            }
          }
          else
          {
            MR_Word ThenContext_871;
            MR_Word Var_853;

            succeeded = (MaybeElse_831 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Then0_830)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_853 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_830, (MR_Integer) 2))));
                ThenContext_871 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_830, (MR_Integer) 3))));
                succeeded = (Var_853 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_856;

              {
                Var_856 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_856, 0) = ((MR_Box) (Then0_830));
                MR_hl_field(MR_mktag(1), Var_856, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Then_837 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Then_837, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Then_837, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Then_837, 2) = ((MR_Box) (Var_856));
                MR_hl_field(MR_mktag(0), Then_837, 3) = ((MR_Box) (ThenContext_871));
              }
            }
            else
              Then_837 = Then0_830;
          }
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
          mercury__io__write_string_3_p_0((MR_String) "if (");
          ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Cond_829);
          mercury__io__write_string_3_p_0((MR_String) ")\n");
          ml_backend__mlds_to_target_util__scope_indent_3_p_0(Then_837, Indent_8, &ScopeIndent_841);
          ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_7, ScopeIndent_841, FuncInfo_9, Then_837);
          if (!((MaybeElse_831 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word Else_842 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_831, (MR_Integer) 0))));
            MR_Integer ElseScopeIndent_847;
            MR_Word Var_865 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
            MR_Integer next_value_of_Indent_8;
            MR_Word next_value_of_Stmt_10;

            ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_865, Context_832);
            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
            mercury__io__write_string_3_p_0((MR_String) "else\n");
            succeeded = ((MR_tag((MR_Word) Else_842)) == (MR_Integer) 2);
            if (succeeded)
            {
              ElseScopeIndent_847 = Indent_8;
            }
            else
              ml_backend__mlds_to_target_util__scope_indent_3_p_0(Else_842, Indent_8, &ElseScopeIndent_847);
            // direct tailcall eliminated
            ;
            next_value_of_Indent_8 = ElseScopeIndent_847;
            next_value_of_Stmt_10 = Else_842;
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
              MR_Word Val_943 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));
              MR_Word Cases_945 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 4))));
              MR_Word Default_946 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 5))));
              MR_Word Context_947 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 6))));
              MR_Word CaseOpts_948;
              MR_Word Var_949 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
              MR_Integer Var_958;
              MR_Word Var_961;
              MR_Integer Var_963;
              MR_Word Var_965;
              MR_Word Var_984;
              MR_String Var_985;
              MR_Unsigned packed_word_21;
              MR_Box conv4_STATE_VARIABLE_IO_34_962;

              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_949, Context_947);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "switch (");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Val_943);
              mercury__io__write_string_3_p_0((MR_String) ") {\n");
              Var_984 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
              Var_985 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
              packed_word_21 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2)));
              {
                CaseOpts_948 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CaseOpts_948, 0) = ((MR_Box) (Var_984));
                MR_hl_field(MR_mktag(0), CaseOpts_948, 1) = ((MR_Box) (Var_985));
                MR_hl_field(MR_mktag(0), CaseOpts_948, 2) = (MR_Box) ((((packed_word_21 & (~((MR_Unsigned) 3U)))) | (MR_Unsigned) ((MR_Integer) 1)));
              }
              Var_958 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_c_stmt__mlds_output_switch_default_7_p_0(CaseOpts_948, Var_958, FuncInfo_9, Context_947, Default_946);
              Var_963 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
              {
                Var_961 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_961, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[0]));
                MR_hl_field(MR_mktag(0), Var_961, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_9));
                MR_hl_field(MR_mktag(0), Var_961, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_961, 3) = ((MR_Box) (CaseOpts_948));
                MR_hl_field(MR_mktag(0), Var_961, 4) = ((MR_Box) (Var_963));
                MR_hl_field(MR_mktag(0), Var_961, 5) = ((MR_Box) (FuncInfo_9));
                MR_hl_field(MR_mktag(0), Var_961, 6) = ((MR_Box) (Context_947));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_961, Cases_945, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_34_962);
              Var_965 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_965, Context_947);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String LabelName_891 = ((MR_String) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Integer Var_893 = (MR_Integer) ((MR_Unsigned) Indent_8 - (MR_Unsigned) (MR_Integer) 1);
              MR_String Var_903;

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_893);
              Var_903 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName_891);
              mercury__io__write_string_3_p_0(Var_903);
              mercury__io__write_string_3_p_0((MR_String) ":;\n");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_767 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              switch (MR_tag((MR_Word) Target_767)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Target_767)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word BreakContext_770 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (BreakContext_770) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                          case (MR_Integer) 0:
                            {
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_goto\'/5", (MR_String) "goto_break_switch not in switch");
                                return;
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              mercury__io__write_string_3_p_0((MR_String) "break;\n");
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word BreakContext_787 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (BreakContext_787) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                            {
                              mercury__io__write_string_3_p_0((MR_String) "break;\n");
                            }
                            break;
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                            {
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_goto\'/5", (MR_String) "goto_break_loop not in loop");
                                return;
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "continue;\n");
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String LabelName_769 = ((MR_String) ((MR_hl_field(MR_mktag(1), Target_767, (MR_Integer) 0))));
                    MR_String Var_820;

                    mercury__io__write_string_3_p_0((MR_String) "goto ");
                    Var_820 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName_769);
                    mercury__io__write_string_3_p_0(Var_820);
                    mercury__io__write_string_3_p_0((MR_String) ";\n");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Expr_686 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word Labels_687 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));
              MR_Word Context_688 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 3))));
              MR_Word Var_696;
              MR_Word Var_699;
              MR_Integer Var_701;
              MR_Word Var_706;
              MR_Box conv3__FinalCount_689;
              MR_Box conv2_STATE_VARIABLE_IO_24_698;

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "switch (");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Expr_686);
              mercury__io__write_string_3_p_0((MR_String) ") {\n");
              {
                Var_696 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_696, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_696, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_7));
                MR_hl_field(MR_mktag(0), Var_696, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_696, 3) = ((MR_Box) (Opts_7));
                MR_hl_field(MR_mktag(0), Var_696, 4) = ((MR_Box) (Context_688));
                MR_hl_field(MR_mktag(0), Var_696, 5) = ((MR_Box) (Indent_8));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_696, Labels_687, ((MR_Box) ((MR_Integer) 0)), &conv3__FinalCount_689, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_24_698);
              Var_699 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_699, Context_688);
              Var_701 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_701);
              mercury__io__write_string_3_p_0((MR_String) "default: /*NOTREACHED*/ MR_assert(0);\n");
              Var_706 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_706, Context_688);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Signature_478 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word FuncRval_479 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));
              MR_Word CallArgs_480 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 3))));
              MR_Word Results_481 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 4))));
              MR_Word IsTailCall_482 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 5))) & (MR_Integer) 3);
              MR_Word Context_483 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 6))));
              MR_Word CallerName_484 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncInfo_9, (MR_Integer) 0))));
              MR_Word CallerSignature_485 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncInfo_9, (MR_Integer) 1))));
              MR_Word ProfileCalls_486 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
              MR_Word ProfileTime_487 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
              MR_Word CallHasReturn_488;

              switch (IsTailCall_482) {
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
                MR_Word CalleeRetTypes_554 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_478, (MR_Integer) 1))));
                MR_Word CallerRetTypes_556 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallerSignature_485, (MR_Integer) 1))));
                MR_Word TypeInfo_17_559;

                succeeded = (Results_481 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TypeInfo_17_559 = (MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_559, ((MR_Box) (CalleeRetTypes_554)), ((MR_Box) (CallerRetTypes_556)));
                }
                if (succeeded)
                  CallHasReturn_488 = (MR_Integer) 1;
                else
                {
                  succeeded = (CallerRetTypes_556 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                    CallHasReturn_488 = (MR_Integer) 2;
                  else
                    CallHasReturn_488 = (MR_Integer) 0;
                }
              }
              else
                CallHasReturn_488 = (MR_Integer) 0;
              succeeded = (ProfileCalls_486 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (ProfileTime_487 == (MR_Integer) 0);
                if (succeeded)
                  switch (CallHasReturn_488) {
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
                MR_Word Var_574 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                MR_Word Var_592;

                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_574, Context_483);
                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                switch (CallHasReturn_488) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "return ");
                    }
                    break;
                }
                if (!((Results_481 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word Var_618 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_481, (MR_Integer) 1))));
                  MR_Word Var_619 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_481, (MR_Integer) 0))));

                  if ((Var_618 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Var_619);
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                  else
                  {
                    MR_Word Var_580;

                    {
                      Var_580 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_580, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_6[0]));
                      MR_hl_field(MR_mktag(0), Var_580, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_3));
                      MR_hl_field(MR_mktag(0), Var_580, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_580, 3) = ((MR_Box) (Opts_7));
                    }
                    ml_backend__mlds_to_c_type__mlds_output_return_list_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Results_481, Var_580);
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                }
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, FuncRval_479);
                mercury__io__write_string_3_p_0((MR_String) "(");
                {
                  Var_592 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_592, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_592, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_4));
                  MR_hl_field(MR_mktag(0), Var_592, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_592, 3) = ((MR_Box) (Opts_7));
                }
                mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_480, (MR_String) ", ", Var_592);
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
              else
              {
                MR_Integer BodyIndent_489 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                MR_Word Var_634;
                MR_Word Var_652;

                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                mercury__io__write_string_3_p_0((MR_String) "{\n");
                switch (ProfileCalls_486) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    ml_backend__mlds_to_c_stmt__mlds_output_call_profile_instr_7_p_0(Opts_7, Context_483, BodyIndent_489, FuncRval_479, CallerName_484);
                    break;
                }
                Var_634 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_634, Context_483);
                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(BodyIndent_489);
                switch (CallHasReturn_488) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "return ");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                    }
                    break;
                }
                if (!((Results_481 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word Var_678 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_481, (MR_Integer) 1))));
                  MR_Word Var_679 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_481, (MR_Integer) 0))));

                  if ((Var_678 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Var_679);
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                  else
                  {
                    MR_Word Var_640;

                    {
                      Var_640 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_640, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_6[0]));
                      MR_hl_field(MR_mktag(0), Var_640, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_5));
                      MR_hl_field(MR_mktag(0), Var_640, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_640, 3) = ((MR_Box) (Opts_7));
                    }
                    ml_backend__mlds_to_c_type__mlds_output_return_list_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Results_481, Var_640);
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                }
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, FuncRval_479);
                mercury__io__write_string_3_p_0((MR_String) "(");
                {
                  Var_652 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_652, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_652, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_6));
                  MR_hl_field(MR_mktag(0), Var_652, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_652, 3) = ((MR_Box) (Opts_7));
                }
                mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_480, (MR_String) ", ", Var_652);
                mercury__io__write_string_3_p_0((MR_String) ");\n");
                switch (CallHasReturn_488) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    switch (ProfileTime_487) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                        }
                        break;
                      case (MR_Integer) 1:
                        ml_backend__mlds_to_c_stmt__mlds_output_time_profile_instr_6_p_0(Opts_7, Context_483, BodyIndent_489, CallerName_484);
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_498 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_498, Context_483);
                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(BodyIndent_489);
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
              MR_Word Results_911 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "return");
              if (!((Results_911 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Var_933 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_911, (MR_Integer) 1))));
                MR_Word Var_934 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_911, (MR_Integer) 0))));

                if ((Var_933 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__io__write_char_3_p_0((MR_Char) 32);
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Var_934);
                }
                else
                {
                  MR_Word Var_921;

                  {
                    Var_921 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_921, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_921, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_8));
                    MR_hl_field(MR_mktag(0), Var_921, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_921, 3) = ((MR_Box) (Opts_7));
                  }
                  ml_backend__mlds_to_c_type__mlds_output_return_list_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Results_911, Var_921);
                }
              }
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Ref_1025 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word BodyStmt0_1026 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));
              MR_Word HandlerStmt_1027 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 3))));
              MR_Word Context_1028 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 4))));
              MR_Word BodyStmt_1031;
              MR_Integer Var_1043;
              MR_Word Var_1046;
              MR_Integer Var_1051;
              MR_Word Var_1032;
              MR_Word Var_1068;
              MR_Integer next_value_of_Indent_8;
              MR_Word next_value_of_Stmt_10;

              succeeded = ((MR_tag((MR_Word) BodyStmt0_1026)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_1032 = ((MR_Word) ((MR_hl_field(MR_mktag(2), BodyStmt0_1026, (MR_Integer) 2))));
                Var_1068 = ((MR_Word) ((MR_hl_field(MR_mktag(2), BodyStmt0_1026, (MR_Integer) 3))));
                succeeded = mercury__term____Unify____context_0_0(Context_1028, Var_1068);
                if (succeeded)
                  succeeded = (Var_1032 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word Var_1035;

                {
                  Var_1035 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1035, 0) = ((MR_Box) (BodyStmt0_1026));
                  MR_hl_field(MR_mktag(1), Var_1035, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  BodyStmt_1031 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), BodyStmt_1031, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), BodyStmt_1031, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), BodyStmt_1031, 2) = ((MR_Box) (Var_1035));
                  MR_hl_field(MR_mktag(0), BodyStmt_1031, 3) = ((MR_Box) (Context_1028));
                }
              }
              else
                BodyStmt_1031 = BodyStmt0_1026;
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "if (MR_builtin_setjmp(");
              ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Ref_1025);
              mercury__io__write_string_3_p_0((MR_String) ") == 0)\n");
              Var_1043 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_7, Var_1043, FuncInfo_9, BodyStmt_1031);
              Var_1046 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_1046, Context_1028);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "else\n");
              Var_1051 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
              // direct tailcall eliminated
              ;
              next_value_of_Indent_8 = Var_1051;
              next_value_of_Stmt_10 = HandlerStmt_1027;
              Indent_8 = next_value_of_Indent_8;
              Stmt_10 = next_value_of_Stmt_10;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Ref_753 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "MR_builtin_longjmp(");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Ref_753);
              mercury__io__write_string_3_p_0((MR_String) ", 1);\n");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word AtomicStmt_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word Context_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) AtomicStmt_104)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                    mercury__io__write_string_3_p_0((MR_String) "MR_GC_check();\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Comment_106 = ((MR_String) ((MR_hl_field(MR_mktag(1), AtomicStmt_104, (MR_Integer) 0))));

                    succeeded = (strcmp(Comment_106, (MR_String) "") == 0);
                    if (!(succeeded))
                    {
                      MR_Word CommentLines_107;

                      CommentLines_107 = mercury__string__split_at_separator_2_f_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_4[0]), Comment_106);
                      ml_backend__mlds_to_c_stmt__write_comment_lines_4_p_0(Indent_8, CommentLines_107);
                    }
                    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                    mercury__io__write_string_3_p_0((MR_String) ";\n");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Lval_108 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_104, (MR_Integer) 0))));
                    MR_Word Rval_109 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_104, (MR_Integer) 1))));

                    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                    ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Lval_108);
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                    ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Rval_109);
                    mercury__io__write_string_3_p_0((MR_String) ";\n");
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Lval_177 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 1))));
                        MR_Word Rval_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 2))));

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "MR_assign_if_in_heap(");
                        ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Lval_177);
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Rval_178);
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Rval_179 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 1))));

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "MR_free_heap(");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Rval_179);
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Target_195 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 1))));
                        MR_Word Ptag_196 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 2))));
                        MR_Word Type_198 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 4))));
                        MR_Word MaybeSize_199 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 5))));
                        MR_Word ArgRvalsTypes_201 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 7))));
                        MR_Word MayUseAtomic_202 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 8))) & (MR_Integer) 1);
                        MR_Word MaybeAllocId_203 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 9))));
                        MR_Word Base_206;
                        MR_Word GC_Method_208;
                        MR_String EndMkword_210;
                        MR_Integer Var_254;
                        MR_Integer Var_304;
                        MR_Word Var_307;
                        MR_Word Var_328;
                        uint8_t Var_260;

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "{\n");
                        Var_328 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                        GC_Method_208 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 3)) & (MR_Integer) 7);
                        Var_254 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                        succeeded = ((((MR_tag((MR_Word) Target_195)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Target_195, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          {
                            Base_206 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Base_206, 0) = ((MR_Box) (Target_195));
                          }
                          switch (GC_Method_208) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 5:
                              {
                                MR_Word NeedsForwardingSpace_209;
                                MR_Integer Var_233;

                                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_328, Context_105);
                                Var_233 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_233);
                                mercury__io__write_string_3_p_0((MR_String) "MR_GC_check();\n");
                                NeedsForwardingSpace_209 = ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(Type_198);
                                switch (NeedsForwardingSpace_209) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Word Var_238 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                                      MR_Integer Var_240;
                                      MR_Integer Var_247;

                                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_238, Context_105);
                                      Var_240 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_240);
                                      mercury__io__write_string_3_p_0((MR_String) "// reserve space for GC forwarding pointer\n");
                                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_238, Context_105);
                                      Var_247 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_247);
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
                          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_328, Context_105);
                          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_254);
                          ml_backend__mlds_to_c_stmt__write_lval_or_string_4_p_0(Opts_7, Base_206);
                        }
                        else
                        {
                          MR_Word Var_218;
                          MR_Integer Var_220;

                          Base_206 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_stmt_scalar_common_2[3]));
                          Var_218 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_218, Context_105);
                          Var_220 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_220);
                          ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_7, Type_198);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "base");
                          ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_7, Type_198, (MR_Word) ((MR_Unsigned) 0U));
                          mercury__io__write_string_3_p_0((MR_String) ";\n");
                          switch (GC_Method_208) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 5:
                              {
                                MR_Word NeedsForwardingSpace_1243;
                                MR_Integer Var_1245;

                                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_328, Context_105);
                                Var_1245 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_1245);
                                mercury__io__write_string_3_p_0((MR_String) "MR_GC_check();\n");
                                NeedsForwardingSpace_1243 = ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(Type_198);
                                switch (NeedsForwardingSpace_1243) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Integer Var_1163;
                                      MR_Integer Var_1170;

                                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_218, Context_105);
                                      Var_1163 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_1163);
                                      mercury__io__write_string_3_p_0((MR_String) "// reserve space for GC forwarding pointer\n");
                                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_218, Context_105);
                                      Var_1170 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_1170);
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
                          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_328, Context_105);
                          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_254);
                          ml_backend__mlds_to_c_stmt__write_lval_or_string_4_p_0(Opts_7, Base_206);
                        }
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                        Var_260 = (uint8_t) (Ptag_196);
                        succeeded = (Var_260 == UINT8_C(0));
                        if (succeeded)
                        {
                          ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_7, Type_198);
                          EndMkword_210 = (MR_String) "";
                        }
                        else
                        {
                          ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_7, Type_198);
                          mercury__io__write_string_3_p_0((MR_String) "MR_mkword(");
                          ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_196);
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                          EndMkword_210 = (MR_String) ")";
                        }
                        switch (MayUseAtomic_202) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              mercury__io__write_string_3_p_0((MR_String) "MR_new_object(");
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              mercury__io__write_string_3_p_0((MR_String) "MR_new_object_atomic(");
                            }
                            break;
                        }
                        ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_7, Type_198);
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        if ((MaybeSize_199 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          mercury__io__write_int_3_p_0((MR_Integer) -1);
                        }
                        else
                        {
                          MR_Word Size_211 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSize_199, (MR_Integer) 0))));
                          MR_Integer SizeInt_212;
                          MR_Word Var_279;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          succeeded = ((((MR_tag((MR_Word) Size_211)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Size_211, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_279 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Size_211, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_279)) == (MR_Integer) 2);
                            if (succeeded)
                              SizeInt_212 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_279, (MR_Integer) 0))));
                          }
                          if (succeeded)
                            mercury__io__write_int_3_p_0(SizeInt_212);
                          else
                            ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Size_211);
                          mercury__io__write_string_3_p_0((MR_String) " * sizeof(MR_Word))");
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ml_backend__mlds_to_c_stmt__mlds_output_maybe_alloc_id_3_p_0(MaybeAllocId_203);
                        mercury__io__write_string_3_p_0((MR_String) ", NULL)");
                        mercury__io__write_string_3_p_0(EndMkword_210);
                        mercury__io__write_string_3_p_0((MR_String) ";\n");
                        if (!(((MR_tag((MR_Word) Base_206)) == (MR_Integer) 0)))
                        {
                          MR_String BaseVarName1_214 = ((MR_String) ((MR_hl_field(MR_mktag(1), Base_206, (MR_Integer) 0))));
                          MR_Word Var_292 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                          MR_Integer Var_294;

                          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_292, Context_105);
                          Var_294 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_294);
                          ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Target_195);
                          mercury__io__write_string_3_p_0((MR_String) " = ");
                          mercury__io__write_string_3_p_0(BaseVarName1_214);
                          mercury__io__write_string_3_p_0((MR_String) ";\n");
                        }
                        Var_304 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                        ml_backend__mlds_to_c_stmt__mlds_output_init_args_9_p_0(ArgRvalsTypes_201, Context_105, (MR_Integer) 0, Base_206, Ptag_196, Opts_7, Var_304);
                        Var_307 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                        ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_307, Context_105);
                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "}\n");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Lval_180 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 1))));

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "MR_mark_hp(");
                        ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Lval_180);
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Rval_181 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 1))));

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "MR_restore_hp(");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Rval_181);
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        {
                          mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_atomic\'/5", (MR_String) "trail_ops not implemented");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word TargetLang_120 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 1))) & (MR_Integer) 3);
                        MR_Word Components_121 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 2))));

                        switch (TargetLang_120) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word Var_130;
                              MR_Box conv0_STATE_VARIABLE_IO_41;

                              {
                                Var_130 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_5[0]));
                                MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_2));
                                MR_hl_field(MR_mktag(0), Var_130, 2) = ((MR_Box) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(0), Var_130, 3) = ((MR_Box) (Opts_7));
                                MR_hl_field(MR_mktag(0), Var_130, 4) = ((MR_Box) (Context_105));
                              }
                              mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_130, Components_121, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_41);
                            }
                            break;
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                            {
                              {
                                mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_atomic\'/5", (MR_String) "inline_target_code only works for language C");
                                return;
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_atomic\'/5", (MR_String) "outline_foreign_proc is not used in C backend");
                          return;
                        }
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
            MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

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
        MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
        MR_Integer Var_22;
        MR_Word Var_25;
        MR_Integer Var_27;

        ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_17, Context_11);
        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
        mercury__io__write_string_3_p_0((MR_String) "default:\n");
        Var_22 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
        ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_8, Var_22, FuncInfo_10, Stmt_14);
        Var_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
        ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_25, Context_11);
        Var_27 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
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
      MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
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
        MR_Word Target_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Base_4, (MR_Integer) 0))));

        ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_6, Target_71);
      }
      else
      {
        MR_String BaseVarName_72 = ((MR_String) ((MR_hl_field(MR_mktag(1), Base_4, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0(BaseVarName_72);
      }
      mercury__io__write_string_3_p_0((MR_String) ", ");
      mercury__io__write_int_3_p_0(ArgNum_3);
      mercury__io__write_string_3_p_0((MR_String) ") = ");
      ArgRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalType_19, (MR_Integer) 0))));
      ArgType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalType_19, (MR_Integer) 1))));
      ml_backend__mlds_to_c_data__mlds_output_boxed_rval_5_p_0(Opts_6, ArgType_29, ArgRval_28);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      Var_49 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) (MR_Integer) 1);
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
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_stmt.type_needs_forwarding_pointer_space\'/1", (MR_String) "unknown_type");
            }
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
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_stmt.type_needs_forwarding_pointer_space\'/1", (MR_String) "rtti_type");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_stmt.type_needs_forwarding_pointer_space\'/1", (MR_String) "tabling_type");
            }
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
  {
    mercury__io__write_string_3_p_0((MR_String) "NULL");
  }
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
    MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_16, Context_9);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    mercury__io__write_string_3_p_0((MR_String) "MR_prof_call_profile(");
    ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_8, CalleeFuncRval_11);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_3_p_0(CallerName_12);
    mercury__io__write_string_3_p_0((MR_String) ");\n");
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
    MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);

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
