/*
** Automatically generated from `mlds_to_c_stmt.m'
** by the Mercury compiler,
** version rotd-2018-05-28
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
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
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
  MR_Integer Ptag_5,
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_2[4][1] = {
  /* row 0 */
  {
    (MR_Box) (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 1)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 3)) | (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 4))))))))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_3[0])),
    ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_stmt_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_func_info_c_0_0[1] = {
  &ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_functor_desc_func_info_c_0_0
};

static const MR_DuPtagLayout ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_ptag_ordered_func_info_c_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_func_info_c_0_0
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
  MR_FUNCTOR_SUBTYPE_NONE
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
  MR_FUNCTOR_SUBTYPE_NONE
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
    ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_lval_or_string_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__mlds_to_c_stmt__ml_backend__mlds_to_c_stmt__du_stag_ordered_lval_or_string_0_1
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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
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

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
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

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      ml_backend__mlds____Compare____qual_function_name_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        ml_backend__mlds____Compare____mlds_func_signature_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
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
        MR_Word FuncName_16 = (MR_Word) (MR_body((MR_Word) (TargetCode_8), (MR_Integer) 0));

        ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_3_p_0(FuncName_16);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CodeString_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), TargetCode_8, (MR_Integer) 0))));
        MR_Word MaybeUserContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetCode_8, (MR_Integer) 1))));
        MR_Word Var_42;
        MR_Word Var_99 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) & (MR_Integer) 1);
        MR_Word Var_87 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
        MR_Word Var_88 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
        MR_Word Var_89 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
        MR_Word Var_90 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
        MR_Word Var_91 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word Var_92 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word Var_93 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word Var_94 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word Var_95 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word Var_96 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word Var_97 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word Var_98 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_String Var_100 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
        MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
        MR_Word Var_73;
        MR_String Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;

        if ((MaybeUserContext_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_99, Context_7);
        else
        {
          MR_Word UserContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUserContext_11, (MR_Integer) 0))));

          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_99, UserContext_12);
        }
        mercury__io__write_string_3_p_0(CodeString_10);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
        Var_74 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
        Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) & (MR_Integer) 1);
        Var_75 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        Var_76 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        Var_77 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        Var_78 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        Var_79 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        Var_80 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        Var_81 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        Var_82 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        Var_83 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
        Var_84 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
        Var_85 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
        Var_86 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
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
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TargetCode_8, (MR_Integer) 0)))) {
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
              Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
    MR_Word Var_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Integer Var_20;
    MR_String Var_50;
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 0))));
    MR_String Var_33 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 1))));
    MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    MR_Word Var_45 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);

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
    MR_Word Var_32;
    MR_String Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;

    ml_backend__mlds_to_c_stmt__mlds_output_case_cond_6_p_0(Opts_8, Indent_9, Context_11, FirstCond_14);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_switch_case_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Opts_8));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (Indent_9));
      MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (Context_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, LaterConds_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_21_21);
    Var_22 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_8, Var_22, FuncInfo_10, Stmt_16);
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 0))));
    Var_33 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 1))));
    Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    Var_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    Var_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    Var_45 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
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
    MR_Word Var_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
    MR_Word Var_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    MR_Word Var_66 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_67 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_68 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_69 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_70 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_71 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_72 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_73 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_74 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_75 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_String Var_77 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Match_10)) == (MR_mktag((MR_Integer) 1))))
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
    if (!((HeadVar__4_4 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
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
      MR_Word Var_46;
      MR_String Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
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
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      Var_48 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_49 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_50 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      Var_51 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      Var_52 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      Var_53 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      Var_54 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      Var_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      Var_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
      Var_57 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
      Var_58 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      Var_59 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_36, Context_31);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(HeadVar__2_2);
      Var_39 = ml_backend__mlds__get_initializer_array_size_1_f_0(Initializer_33);
      ml_backend__mlds_to_c_stmt__mlds_output_local_var_decl_6_p_0(HeadVar__1_1, LocalVarName_30, Type_32, Var_39);
      ml_backend__mlds_to_c_data__mlds_output_initializer_5_p_0(HeadVar__1_1, Type_32, Initializer_33);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_6_p_0(HeadVar__1_1, HeadVar__2_2, GCStmt_34, (MR_String) "");
      // direct tailcall eliminated
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
    if (!((HeadVar__4_4 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Stmt_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Stmts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__4_4;

      ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Stmt_16);
      // direct tailcall eliminated
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
    MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
    MR_String Var_85 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
    MR_Word Var_86 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_87 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_88 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_89 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_90 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_91 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_92 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_93 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_94 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_95 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_96 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    MR_Word Var_97 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);

    // setup for model_det tailcalls optimized into a loop
    ml_backend__mlds_to_c_util__c_output_stmt_context_4_p_0(Var_42, Stmt_10);
    switch (MR_tag((MR_Word) Stmt_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns_425 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_10, (MR_Integer) 0))));
          MR_Word FuncDefns_426 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_10, (MR_Integer) 1))));
          MR_Word SubStmts_427 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_10, (MR_Integer) 2))));
          MR_Word Context_428 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_10, (MR_Integer) 3))));
          MR_Integer BlockIndent_430 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
          MR_Word Var_446;
          MR_Word Var_451;
          MR_String Var_452;
          MR_Word Var_453;
          MR_Word Var_454;
          MR_Word Var_455;
          MR_Word Var_456;
          MR_Word Var_457;
          MR_Word Var_458;
          MR_Word Var_459;
          MR_Word Var_460;
          MR_Word Var_461;
          MR_Word Var_462;
          MR_Word Var_463;
          MR_Word Var_464;

          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
          mercury__io__write_string_3_p_0((MR_String) "{\n");
          if (!((FuncDefns_426 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_stmt.mlds_output_stmt_block\'/6", (MR_String) "FuncDefns != []");
              return;
            }
          }
          if (!((LocalVarDefns_425 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            ml_backend__mlds_to_c_stmt__mlds_output_local_var_defns_6_p_0(Opts_7, BlockIndent_430, (MR_Integer) 0, LocalVarDefns_425);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          ml_backend__mlds_to_c_stmt__mlds_output_statements_6_p_0(Opts_7, BlockIndent_430, FuncInfo_9, SubStmts_427);
          Var_451 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
          Var_452 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
          Var_446 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
          Var_453 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_454 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          Var_455 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          Var_456 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          Var_457 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
          Var_458 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
          Var_459 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
          Var_460 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
          Var_461 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
          Var_462 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
          Var_463 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
          Var_464 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_446, Context_428);
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_1071 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_10, (MR_Integer) 0))));
          MR_Word Cond_1072 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_10, (MR_Integer) 1))));
          MR_Word BodyStmt_1073 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_10, (MR_Integer) 2))));
          MR_Word Context_1075 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_10, (MR_Integer) 4))));
          MR_Integer ScopeIndent_1076;
          MR_Word BodyOpts_1077;
          MR_Word _LoopLocalVars_1074 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_10, (MR_Integer) 3))));
          MR_Word Var_1098;
          MR_String Var_1099;
          MR_Word Var_1100;
          MR_Word Var_1101;
          MR_Word Var_1102;
          MR_Word Var_1103;
          MR_Word Var_1104;
          MR_Word Var_1105;
          MR_Word Var_1106;
          MR_Word Var_1107;
          MR_Word Var_1108;
          MR_Word Var_1109;
          MR_Word Var_1110;
          MR_Word Var_1111;
          MR_Word Var_1112;

          ml_backend__mlds_to_target_util__scope_indent_3_p_0(BodyStmt_1073, Indent_8, &ScopeIndent_1076);
          Var_1098 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
          Var_1099 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
          Var_1100 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
          Var_1101 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_1102 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          Var_1103 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          Var_1104 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          Var_1105 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
          Var_1106 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
          Var_1107 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
          Var_1108 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
          Var_1109 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
          Var_1110 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
          Var_1111 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
          Var_1112 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
          {
            BodyOpts_1077 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BodyOpts_1077, 0) = ((MR_Box) (Var_1098));
            MR_hl_field(MR_mktag(0), BodyOpts_1077, 1) = ((MR_Box) (Var_1099));
            MR_hl_field(MR_mktag(0), BodyOpts_1077, 2) = (MR_Box) (((MR_Unsigned) (((MR_Box) (Var_1100))) | (((((MR_Unsigned) (((MR_Box) (Var_1101))) << (MR_Integer) 1)) | (((((MR_Unsigned) (((MR_Box) (Var_1102))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) (Var_1103))) << (MR_Integer) 3)) | (((((MR_Unsigned) (((MR_Box) (Var_1104))) << (MR_Integer) 4)) | (((((MR_Unsigned) (((MR_Box) (Var_1105))) << (MR_Integer) 5)) | (((((MR_Unsigned) (((MR_Box) (Var_1106))) << (MR_Integer) 6)) | (((((MR_Unsigned) (((MR_Box) (Var_1107))) << (MR_Integer) 7)) | (((((MR_Unsigned) (((MR_Box) (Var_1108))) << (MR_Integer) 8)) | (((((MR_Unsigned) (((MR_Box) (Var_1109))) << (MR_Integer) 9)) | (((((MR_Unsigned) (((MR_Box) (Var_1110))) << (MR_Integer) 11)) | (((((MR_Unsigned) (((MR_Box) (Var_1111))) << (MR_Integer) 14)) | (((MR_Unsigned) (((MR_Box) ((MR_Integer) 2))) << (MR_Integer) 15))))))))))))))))))))))))));
          }
          switch (Kind_1071) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_1083;
                MR_Word Var_1113;
                MR_String Var_1114;
                MR_Word Var_1115;
                MR_Word Var_1116;
                MR_Word Var_1117;
                MR_Word Var_1118;
                MR_Word Var_1119;
                MR_Word Var_1120;
                MR_Word Var_1121;
                MR_Word Var_1122;
                MR_Word Var_1123;
                MR_Word Var_1124;
                MR_Word Var_1125;
                MR_Word Var_1126;

                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                mercury__io__write_string_3_p_0((MR_String) "do\n");
                ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(BodyOpts_1077, ScopeIndent_1076, FuncInfo_9, BodyStmt_1073);
                Var_1113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
                Var_1114 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
                Var_1083 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
                Var_1115 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                Var_1116 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                Var_1117 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                Var_1118 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                Var_1119 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                Var_1120 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                Var_1121 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                Var_1122 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                Var_1123 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                Var_1124 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                Var_1125 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                Var_1126 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_1083, Context_1075);
                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                mercury__io__write_string_3_p_0((MR_String) "while (");
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Cond_1072);
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
                ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Cond_1072);
                mercury__io__write_string_3_p_0((MR_String) ")\n");
                // direct tailcall eliminated
                next_value_of_Opts_7 = BodyOpts_1077;
                next_value_of_Indent_8 = ScopeIndent_1076;
                next_value_of_Stmt_10 = BodyStmt_1073;
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
          MR_Word Cond_823 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_10, (MR_Integer) 0))));
          MR_Word Then0_824 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_10, (MR_Integer) 1))));
          MR_Word MaybeElse_825 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_10, (MR_Integer) 2))));
          MR_Word Context_826 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_10, (MR_Integer) 3))));
          MR_Word Then_831;
          MR_Integer ScopeIndent_835;
          MR_Word ThenContext_830;
          MR_Word Var_842;
          MR_Word Var_827;
          MR_Word Var_828;
          MR_Word Var_829;

          succeeded = ((MR_tag((MR_Word) MaybeElse_825)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_827 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_825, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Then0_824)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              Var_828 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_824, (MR_Integer) 0))));
              Var_829 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_824, (MR_Integer) 1))));
              Var_842 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_824, (MR_Integer) 2))));
              ThenContext_830 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_824, (MR_Integer) 3))));
              succeeded = (Var_842 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word Var_845;

            {
              Var_845 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_845, 0) = ((MR_Box) (Then0_824));
              MR_hl_field(MR_mktag(1), Var_845, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Then_831 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Then_831, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Then_831, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Then_831, 2) = ((MR_Box) (Var_845));
              MR_hl_field(MR_mktag(0), Then_831, 3) = ((MR_Box) (ThenContext_830));
            }
          }
          else
          {
            MR_Word ThenContext_865;
            MR_Word Var_847;
            MR_Word Var_832;
            MR_Word Var_833;
            MR_Word Var_834;

            succeeded = (MaybeElse_825 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Then0_824)) == (MR_mktag((MR_Integer) 2)));
              if (succeeded)
              {
                Var_832 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_824, (MR_Integer) 0))));
                Var_833 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_824, (MR_Integer) 1))));
                Var_847 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_824, (MR_Integer) 2))));
                ThenContext_865 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_824, (MR_Integer) 3))));
                succeeded = ((MR_tag((MR_Word) Var_847)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                  Var_834 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_847, (MR_Integer) 0))));
              }
            }
            if (succeeded)
            {
              MR_Word Var_850;

              {
                Var_850 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_850, 0) = ((MR_Box) (Then0_824));
                MR_hl_field(MR_mktag(1), Var_850, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Then_831 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Then_831, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), Then_831, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), Then_831, 2) = ((MR_Box) (Var_850));
                MR_hl_field(MR_mktag(0), Then_831, 3) = ((MR_Box) (ThenContext_865));
              }
            }
            else
              Then_831 = Then0_824;
          }
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
          mercury__io__write_string_3_p_0((MR_String) "if (");
          ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Cond_823);
          mercury__io__write_string_3_p_0((MR_String) ")\n");
          ml_backend__mlds_to_target_util__scope_indent_3_p_0(Then_831, Indent_8, &ScopeIndent_835);
          ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_7, ScopeIndent_835, FuncInfo_9, Then_831);
          if (!((MaybeElse_825 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            MR_Word Else_836 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_825, (MR_Integer) 0))));
            MR_Integer ElseScopeIndent_841;
            MR_Word Var_859 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Var_866 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
            MR_String Var_867 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
            MR_Word Var_868 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_869 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word Var_870 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word Var_871 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_Word Var_872 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
            MR_Word Var_873 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
            MR_Word Var_874 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
            MR_Word Var_875 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
            MR_Word Var_876 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
            MR_Word Var_877 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
            MR_Word Var_878 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
            MR_Word Var_879 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
            MR_Word Var_837;
            MR_Word Var_838;
            MR_Word Var_839;
            MR_Word Var_840;
            MR_Integer next_value_of_Indent_8;
            MR_Word next_value_of_Stmt_10;

            ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_859, Context_826);
            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
            mercury__io__write_string_3_p_0((MR_String) "else\n");
            succeeded = ((MR_tag((MR_Word) Else_836)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              Var_837 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Else_836, (MR_Integer) 0))));
              Var_838 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Else_836, (MR_Integer) 1))));
              Var_839 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Else_836, (MR_Integer) 2))));
              Var_840 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Else_836, (MR_Integer) 3))));
              ElseScopeIndent_841 = Indent_8;
            }
            else
              ml_backend__mlds_to_target_util__scope_indent_3_p_0(Else_836, Indent_8, &ElseScopeIndent_841);
            // direct tailcall eliminated
            next_value_of_Indent_8 = ElseScopeIndent_841;
            next_value_of_Stmt_10 = Else_836;
            Indent_8 = next_value_of_Indent_8;
            Stmt_10 = next_value_of_Stmt_10;
            continue;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Val_937 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));
              MR_Word Cases_939 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 4))));
              MR_Word Default_940 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 5))));
              MR_Word Context_941 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 6))));
              MR_Word CaseOpts_942;
              MR_Word Var_943 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Integer Var_952;
              MR_Word Var_955;
              MR_Integer Var_957;
              MR_Word Var_959;
              MR_Word _Type_936 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word _Range_938 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 3))));
              MR_Word Var_964 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
              MR_String Var_965 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
              MR_Word Var_966 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word Var_967 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word Var_968 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word Var_969 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word Var_970 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              MR_Word Var_971 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              MR_Word Var_972 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              MR_Word Var_973 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              MR_Word Var_974 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
              MR_Word Var_975 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
              MR_Word Var_976 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
              MR_Word Var_977 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
              MR_Word Var_978;
              MR_String Var_979;
              MR_Word Var_980;
              MR_Word Var_981;
              MR_Word Var_982;
              MR_Word Var_983;
              MR_Word Var_984;
              MR_Word Var_985;
              MR_Word Var_986;
              MR_Word Var_987;
              MR_Word Var_988;
              MR_Word Var_989;
              MR_Word Var_990;
              MR_Word Var_991;
              MR_Word Var_992;
              MR_Box conv4_STATE_VARIABLE_IO_34_956;
              MR_Word Var_993;
              MR_String Var_994;
              MR_Word Var_995;
              MR_Word Var_996;
              MR_Word Var_997;
              MR_Word Var_998;
              MR_Word Var_999;
              MR_Word Var_1000;
              MR_Word Var_1001;
              MR_Word Var_1002;
              MR_Word Var_1003;
              MR_Word Var_1004;
              MR_Word Var_1005;
              MR_Word Var_1006;

              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_943, Context_941);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "switch (");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Val_937);
              mercury__io__write_string_3_p_0((MR_String) ") {\n");
              Var_978 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
              Var_979 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
              Var_980 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
              Var_981 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_982 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              Var_983 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              Var_984 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              Var_985 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              Var_986 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              Var_987 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              Var_988 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              Var_989 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
              Var_990 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
              Var_991 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
              Var_992 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
              {
                CaseOpts_942 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CaseOpts_942, 0) = ((MR_Box) (Var_978));
                MR_hl_field(MR_mktag(0), CaseOpts_942, 1) = ((MR_Box) (Var_979));
                MR_hl_field(MR_mktag(0), CaseOpts_942, 2) = (MR_Box) (((MR_Unsigned) (((MR_Box) (Var_980))) | (((((MR_Unsigned) (((MR_Box) (Var_981))) << (MR_Integer) 1)) | (((((MR_Unsigned) (((MR_Box) (Var_982))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) (Var_983))) << (MR_Integer) 3)) | (((((MR_Unsigned) (((MR_Box) (Var_984))) << (MR_Integer) 4)) | (((((MR_Unsigned) (((MR_Box) (Var_985))) << (MR_Integer) 5)) | (((((MR_Unsigned) (((MR_Box) (Var_986))) << (MR_Integer) 6)) | (((((MR_Unsigned) (((MR_Box) (Var_987))) << (MR_Integer) 7)) | (((((MR_Unsigned) (((MR_Box) (Var_988))) << (MR_Integer) 8)) | (((((MR_Unsigned) (((MR_Box) (Var_989))) << (MR_Integer) 9)) | (((((MR_Unsigned) (((MR_Box) (Var_990))) << (MR_Integer) 11)) | (((((MR_Unsigned) (((MR_Box) (Var_991))) << (MR_Integer) 14)) | (((MR_Unsigned) (((MR_Box) ((MR_Integer) 1))) << (MR_Integer) 15))))))))))))))))))))))))));
              }
              Var_952 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_c_stmt__mlds_output_switch_default_7_p_0(CaseOpts_942, Var_952, FuncInfo_9, Context_941, Default_940);
              Var_957 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
              {
                Var_955 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_955, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_8[0]));
                MR_hl_field(MR_mktag(0), Var_955, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_9));
                MR_hl_field(MR_mktag(0), Var_955, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_955, 3) = ((MR_Box) (CaseOpts_942));
                MR_hl_field(MR_mktag(0), Var_955, 4) = ((MR_Box) (Var_957));
                MR_hl_field(MR_mktag(0), Var_955, 5) = ((MR_Box) (FuncInfo_9));
                MR_hl_field(MR_mktag(0), Var_955, 6) = ((MR_Box) (Context_941));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_955, Cases_939, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_34_956);
              Var_993 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
              Var_994 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
              Var_959 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
              Var_995 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_996 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              Var_997 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              Var_998 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              Var_999 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              Var_1000 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              Var_1001 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              Var_1002 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              Var_1003 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
              Var_1004 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
              Var_1005 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
              Var_1006 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_959, Context_941);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String LabelName_885 = ((MR_String) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Integer Var_887 = (MR_Integer) ((MR_Unsigned) Indent_8 - (MR_Unsigned) (MR_Integer) 1);
              MR_String Var_897;
              MR_Word _Context_886 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_887);
              Var_897 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName_885);
              mercury__io__write_string_3_p_0(Var_897);
              mercury__io__write_string_3_p_0((MR_String) ":;\n");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_761 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word _Context_762 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              switch (MR_tag((MR_Word) Target_761)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Target_761)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word BreakContext_764 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                        MR_Word Var_782 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
                        MR_String Var_783 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
                        MR_Word Var_784 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
                        MR_Word Var_785 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        MR_Word Var_786 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word Var_787 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        MR_Word Var_788 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                        MR_Word Var_789 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                        MR_Word Var_790 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                        MR_Word Var_791 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                        MR_Word Var_792 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                        MR_Word Var_793 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                        MR_Word Var_794 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                        MR_Word Var_795 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);

                        switch (BreakContext_764) {
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
                        MR_Word BreakContext_781 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                        MR_Word Var_796 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
                        MR_String Var_797 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
                        MR_Word Var_798 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
                        MR_Word Var_799 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        MR_Word Var_800 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word Var_801 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        MR_Word Var_802 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                        MR_Word Var_803 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                        MR_Word Var_804 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                        MR_Word Var_805 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                        MR_Word Var_806 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                        MR_Word Var_807 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                        MR_Word Var_808 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                        MR_Word Var_809 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);

                        switch (BreakContext_781) {
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
                    MR_String LabelName_763 = ((MR_String) ((MR_hl_field(MR_mktag(1), Target_761, (MR_Integer) 0))));
                    MR_String Var_814;

                    mercury__io__write_string_3_p_0((MR_String) "goto ");
                    Var_814 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName_763);
                    mercury__io__write_string_3_p_0(Var_814);
                    mercury__io__write_string_3_p_0((MR_String) ";\n");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Expr_680 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word Labels_681 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));
              MR_Word Context_682 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 3))));
              MR_Word Var_690;
              MR_Word Var_693;
              MR_Integer Var_695;
              MR_Word Var_700;
              MR_Integer _FinalCount_683;
              MR_Box conv3__FinalCount_683;
              MR_Box conv2_STATE_VARIABLE_IO_24_692;
              MR_Word Var_705;
              MR_String Var_706;
              MR_Word Var_707;
              MR_Word Var_708;
              MR_Word Var_709;
              MR_Word Var_710;
              MR_Word Var_711;
              MR_Word Var_712;
              MR_Word Var_713;
              MR_Word Var_714;
              MR_Word Var_715;
              MR_Word Var_716;
              MR_Word Var_717;
              MR_Word Var_718;
              MR_Word Var_719;
              MR_String Var_720;
              MR_Word Var_721;
              MR_Word Var_722;
              MR_Word Var_723;
              MR_Word Var_724;
              MR_Word Var_725;
              MR_Word Var_726;
              MR_Word Var_727;
              MR_Word Var_728;
              MR_Word Var_729;
              MR_Word Var_730;
              MR_Word Var_731;
              MR_Word Var_732;

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "switch (");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Expr_680);
              mercury__io__write_string_3_p_0((MR_String) ") {\n");
              {
                Var_690 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_690, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_690, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_7));
                MR_hl_field(MR_mktag(0), Var_690, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_690, 3) = ((MR_Box) (Opts_7));
                MR_hl_field(MR_mktag(0), Var_690, 4) = ((MR_Box) (Context_682));
                MR_hl_field(MR_mktag(0), Var_690, 5) = ((MR_Box) (Indent_8));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_690, Labels_681, ((MR_Box) ((MR_Integer) 0)), &conv3__FinalCount_683, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_24_692);
              _FinalCount_683 = ((MR_Integer) (conv3__FinalCount_683));
              Var_705 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
              Var_706 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
              Var_693 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
              Var_707 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_708 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              Var_709 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              Var_710 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              Var_711 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              Var_712 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              Var_713 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              Var_714 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              Var_715 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
              Var_716 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
              Var_717 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
              Var_718 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_693, Context_682);
              Var_695 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_695);
              mercury__io__write_string_3_p_0((MR_String) "default: /*NOTREACHED*/ MR_assert(0);\n");
              Var_719 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
              Var_720 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
              Var_700 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
              Var_721 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_722 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              Var_723 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              Var_724 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              Var_725 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              Var_726 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              Var_727 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              Var_728 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              Var_729 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
              Var_730 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
              Var_731 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
              Var_732 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_700, Context_682);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Signature_472 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word FuncRval_473 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));
              MR_Word CallArgs_474 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 3))));
              MR_Word Results_475 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 4))));
              MR_Word IsTailCall_476 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 5))));
              MR_Word Context_477 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 6))));
              MR_Word CallerName_478 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncInfo_9, (MR_Integer) 0))));
              MR_Word CallerSignature_479 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncInfo_9, (MR_Integer) 1))));
              MR_Word ProfileCalls_480 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              MR_Word ProfileTime_481 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              MR_Word CallHasReturn_482;
              MR_Word Var_500 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
              MR_String Var_501 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
              MR_Word Var_502 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Var_503 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word Var_504 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word Var_505 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word Var_506 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word Var_507 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              MR_Word Var_509 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              MR_Word Var_510 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
              MR_Word Var_511 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
              MR_Word Var_512 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
              MR_Word Var_513 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);

              switch (IsTailCall_476) {
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
                MR_Word CalleeRetTypes_548 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_472, (MR_Integer) 1))));
                MR_Word CallerRetTypes_550 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallerSignature_479, (MR_Integer) 1))));
                MR_Word Var_547 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_472, (MR_Integer) 0))));
                MR_Word Var_549 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallerSignature_479, (MR_Integer) 0))));
                MR_Word TypeInfo_17_553;
                MR_Word Var_551;
                MR_Word Var_552;

                succeeded = ((MR_tag((MR_Word) Results_475)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_551 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_475, (MR_Integer) 0))));
                  Var_552 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_475, (MR_Integer) 1))));
                  TypeInfo_17_553 = (MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_553, ((MR_Box) (CalleeRetTypes_548)), ((MR_Box) (CallerRetTypes_550)));
                }
                if (succeeded)
                  CallHasReturn_482 = (MR_Integer) 1;
                else
                {
                  succeeded = (CallerRetTypes_550 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (succeeded)
                    CallHasReturn_482 = (MR_Integer) 2;
                  else
                    CallHasReturn_482 = (MR_Integer) 0;
                }
              }
              else
                CallHasReturn_482 = (MR_Integer) 0;
              succeeded = (ProfileCalls_480 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (ProfileTime_481 == (MR_Integer) 0);
                if (succeeded)
                  switch (CallHasReturn_482) {
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
                MR_Word Var_568 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word Var_586;
                MR_Word Var_590 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
                MR_String Var_591 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
                MR_Word Var_592 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word Var_593 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                MR_Word Var_594 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Word Var_595 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                MR_Word Var_596 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                MR_Word Var_597 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                MR_Word Var_598 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                MR_Word Var_599 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                MR_Word Var_600 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                MR_Word Var_601 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                MR_Word Var_602 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                MR_Word Var_603 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);

                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_568, Context_477);
                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                switch (CallHasReturn_482) {
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
                if (!((Results_475 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
                {
                  MR_Word Var_612 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_475, (MR_Integer) 1))));
                  MR_Word Var_613 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_475, (MR_Integer) 0))));

                  if ((Var_612 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Var_613);
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                  else
                  {
                    MR_Word Var_574;

                    {
                      Var_574 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_574, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_6[0]));
                      MR_hl_field(MR_mktag(0), Var_574, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_3));
                      MR_hl_field(MR_mktag(0), Var_574, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_574, 3) = ((MR_Box) (Opts_7));
                    }
                    ml_backend__mlds_to_c_type__mlds_output_return_list_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Results_475, Var_574);
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                }
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, FuncRval_473);
                mercury__io__write_string_3_p_0((MR_String) "(");
                {
                  Var_586 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_586, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_586, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_4));
                  MR_hl_field(MR_mktag(0), Var_586, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_586, 3) = ((MR_Box) (Opts_7));
                }
                mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_474, (MR_String) ", ", Var_586);
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
              else
              {
                MR_Integer BodyIndent_483 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                MR_Word Var_628;
                MR_Word Var_646;
                MR_Word Var_650;
                MR_String Var_651;
                MR_Word Var_652;
                MR_Word Var_653;
                MR_Word Var_654;
                MR_Word Var_655;
                MR_Word Var_656;
                MR_Word Var_657;
                MR_Word Var_658;
                MR_Word Var_659;
                MR_Word Var_660;
                MR_Word Var_661;
                MR_Word Var_662;
                MR_Word Var_663;

                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                mercury__io__write_string_3_p_0((MR_String) "{\n");
                switch (ProfileCalls_480) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    ml_backend__mlds_to_c_stmt__mlds_output_call_profile_instr_7_p_0(Opts_7, Context_477, BodyIndent_483, FuncRval_473, CallerName_478);
                    break;
                }
                Var_650 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
                Var_651 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
                Var_628 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
                Var_652 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                Var_653 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                Var_654 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                Var_655 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                Var_656 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                Var_657 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                Var_658 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                Var_659 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                Var_660 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                Var_661 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                Var_662 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                Var_663 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_628, Context_477);
                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(BodyIndent_483);
                switch (CallHasReturn_482) {
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
                if (!((Results_475 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
                {
                  MR_Word Var_672 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_475, (MR_Integer) 1))));
                  MR_Word Var_673 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_475, (MR_Integer) 0))));

                  if ((Var_672 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Var_673);
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                  else
                  {
                    MR_Word Var_634;

                    {
                      Var_634 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_634, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_6[0]));
                      MR_hl_field(MR_mktag(0), Var_634, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_5));
                      MR_hl_field(MR_mktag(0), Var_634, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_634, 3) = ((MR_Box) (Opts_7));
                    }
                    ml_backend__mlds_to_c_type__mlds_output_return_list_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Results_475, Var_634);
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                }
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_4_p_0(Opts_7, FuncRval_473);
                mercury__io__write_string_3_p_0((MR_String) "(");
                {
                  Var_646 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_646, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_646, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_6));
                  MR_hl_field(MR_mktag(0), Var_646, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_646, 3) = ((MR_Box) (Opts_7));
                }
                mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_474, (MR_String) ", ", Var_646);
                mercury__io__write_string_3_p_0((MR_String) ");\n");
                switch (CallHasReturn_482) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    switch (ProfileTime_481) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                        }
                        break;
                      case (MR_Integer) 1:
                        ml_backend__mlds_to_c_stmt__mlds_output_time_profile_instr_6_p_0(Opts_7, Context_477, BodyIndent_483, CallerName_478);
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_492 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
                      MR_Word Var_528 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
                      MR_String Var_529 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
                      MR_Word Var_530 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word Var_531 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      MR_Word Var_532 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                      MR_Word Var_533 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                      MR_Word Var_534 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                      MR_Word Var_535 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                      MR_Word Var_536 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                      MR_Word Var_537 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                      MR_Word Var_538 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                      MR_Word Var_539 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                      MR_Word Var_540 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                      MR_Word Var_541 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);

                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_492, Context_477);
                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(BodyIndent_483);
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
              MR_Word Results_905 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word _Context_906 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "return");
              if (!((Results_905 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
              {
                MR_Word Var_927 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_905, (MR_Integer) 1))));
                MR_Word Var_928 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_905, (MR_Integer) 0))));

                if ((Var_927 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__io__write_char_3_p_0((MR_Char) 32);
                  ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Var_928);
                }
                else
                {
                  MR_Word Var_915;

                  {
                    Var_915 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_915, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_915, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_8));
                    MR_hl_field(MR_mktag(0), Var_915, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_915, 3) = ((MR_Box) (Opts_7));
                  }
                  ml_backend__mlds_to_c_type__mlds_output_return_list_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Results_905, Var_915);
                }
              }
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Ref_1019 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word BodyStmt0_1020 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));
              MR_Word HandlerStmt_1021 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 3))));
              MR_Word Context_1022 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 4))));
              MR_Word BodyStmt_1025;
              MR_Integer Var_1037;
              MR_Word Var_1040;
              MR_Integer Var_1045;
              MR_Word Var_1026;
              MR_Word Var_1062;
              MR_Word Var_1023;
              MR_Word Var_1024;
              MR_Word Var_1048;
              MR_String Var_1049;
              MR_Word Var_1050;
              MR_Word Var_1051;
              MR_Word Var_1052;
              MR_Word Var_1053;
              MR_Word Var_1054;
              MR_Word Var_1055;
              MR_Word Var_1056;
              MR_Word Var_1057;
              MR_Word Var_1058;
              MR_Word Var_1059;
              MR_Word Var_1060;
              MR_Word Var_1061;
              MR_Integer next_value_of_Indent_8;
              MR_Word next_value_of_Stmt_10;

              succeeded = ((MR_tag((MR_Word) BodyStmt0_1020)) == (MR_mktag((MR_Integer) 2)));
              if (succeeded)
              {
                Var_1023 = ((MR_Word) ((MR_hl_field(MR_mktag(2), BodyStmt0_1020, (MR_Integer) 0))));
                Var_1024 = ((MR_Word) ((MR_hl_field(MR_mktag(2), BodyStmt0_1020, (MR_Integer) 1))));
                Var_1026 = ((MR_Word) ((MR_hl_field(MR_mktag(2), BodyStmt0_1020, (MR_Integer) 2))));
                Var_1062 = ((MR_Word) ((MR_hl_field(MR_mktag(2), BodyStmt0_1020, (MR_Integer) 3))));
                succeeded = mercury__term____Unify____context_0_0(Context_1022, Var_1062);
                if (succeeded)
                  succeeded = (Var_1026 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              if (succeeded)
              {
                MR_Word Var_1029;

                {
                  Var_1029 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1029, 0) = ((MR_Box) (BodyStmt0_1020));
                  MR_hl_field(MR_mktag(1), Var_1029, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  BodyStmt_1025 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), BodyStmt_1025, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), BodyStmt_1025, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), BodyStmt_1025, 2) = ((MR_Box) (Var_1029));
                  MR_hl_field(MR_mktag(0), BodyStmt_1025, 3) = ((MR_Box) (Context_1022));
                }
              }
              else
                BodyStmt_1025 = BodyStmt0_1020;
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "if (MR_builtin_setjmp(");
              ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Ref_1019);
              mercury__io__write_string_3_p_0((MR_String) ") == 0)\n");
              Var_1037 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_7, Var_1037, FuncInfo_9, BodyStmt_1025);
              Var_1048 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
              Var_1049 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
              Var_1040 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
              Var_1050 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_1051 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              Var_1052 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              Var_1053 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              Var_1054 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              Var_1055 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              Var_1056 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              Var_1057 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              Var_1058 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
              Var_1059 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
              Var_1060 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
              Var_1061 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_1040, Context_1022);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "else\n");
              Var_1045 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
              // direct tailcall eliminated
              next_value_of_Indent_8 = Var_1045;
              next_value_of_Stmt_10 = HandlerStmt_1021;
              Indent_8 = next_value_of_Indent_8;
              Stmt_10 = next_value_of_Stmt_10;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Ref_747 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 1))));
              MR_Word _Context_748 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_10, (MR_Integer) 2))));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "MR_builtin_longjmp(");
              ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Ref_747);
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
                    if (succeeded)
                      mercury__io__nl_2_p_0();
                    else
                    {
                      MR_Word CommentLines_107;

                      CommentLines_107 = mercury__string__split_at_separator_2_f_0((MR_Word) (&ml_backend__mlds_to_c_stmt_scalar_common_4[0]), Comment_106);
                      ml_backend__mlds_to_c_stmt__write_comment_lines_4_p_0(Indent_8, CommentLines_107);
                    }
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
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Lval_175 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 1))));
                        MR_Word Rval_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 2))));

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "MR_assign_if_in_heap(");
                        ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Lval_175);
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Rval_176);
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Rval_177 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 1))));

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "MR_free_heap(");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Rval_177);
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Target_193 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 1))));
                        MR_Integer Ptag_194 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 2))));
                        MR_Word Type_196 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 4))));
                        MR_Word MaybeSize_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 5))));
                        MR_Word ArgRvalsTypes_199 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 7))));
                        MR_Word MayUseAtomic_200 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 8))));
                        MR_Word MaybeAllocId_201 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 9))));
                        MR_Word Base_204;
                        MR_Word GC_Method_206;
                        MR_String EndMkword_208;
                        MR_Integer Var_251;
                        MR_Integer Var_298;
                        MR_Word Var_301;
                        MR_Word Var_322;
                        MR_Word _ExplicitSecTag_195 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 3))));
                        MR_Word _MaybeCtorName_198 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 6))));
                        MR_Word Var_320;
                        MR_String Var_321;
                        MR_Word Var_323;
                        MR_Word Var_324;
                        MR_Word Var_325;
                        MR_Word Var_326;
                        MR_Word Var_327;
                        MR_Word Var_328;
                        MR_Word Var_329;
                        MR_Word Var_330;
                        MR_Word Var_331;
                        MR_Word Var_332;
                        MR_Word Var_333;
                        MR_Word Var_202;
                        MR_Word Var_203;
                        MR_Word Var_404;
                        MR_String Var_405;
                        MR_Word Var_406;
                        MR_Word Var_407;
                        MR_Word Var_408;
                        MR_Word Var_409;
                        MR_Word Var_410;
                        MR_Word Var_411;
                        MR_Word Var_412;
                        MR_Word Var_413;
                        MR_Word Var_414;
                        MR_Word Var_415;
                        MR_Word Var_416;
                        MR_Word Var_417;

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "{\n");
                        Var_320 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
                        Var_321 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
                        Var_322 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
                        Var_323 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        Var_324 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        Var_325 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        Var_326 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                        Var_327 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                        Var_328 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                        Var_329 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                        Var_330 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                        Var_331 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                        GC_Method_206 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                        Var_332 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                        Var_333 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                        Var_251 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                        succeeded = ((((MR_tag((MR_Word) Target_193)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Target_193, (MR_Integer) 0))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Target_193, (MR_Integer) 1))));
                          Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Target_193, (MR_Integer) 2))));
                          {
                            Base_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Base_204, 0) = ((MR_Box) (Target_193));
                          }
                          switch (GC_Method_206) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 5:
                              {
                                MR_Word NeedsForwardingSpace_207;
                                MR_Integer Var_230;

                                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_322, Context_105);
                                Var_230 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_230);
                                mercury__io__write_string_3_p_0((MR_String) "MR_GC_check();\n");
                                NeedsForwardingSpace_207 = ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(Type_196);
                                switch (NeedsForwardingSpace_207) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Word Var_235 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
                                      MR_Integer Var_237;
                                      MR_Integer Var_244;
                                      MR_Word Var_348 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
                                      MR_String Var_349 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
                                      MR_Word Var_350 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                      MR_Word Var_351 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                      MR_Word Var_352 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                      MR_Word Var_353 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                      MR_Word Var_354 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                                      MR_Word Var_355 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                                      MR_Word Var_356 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                                      MR_Word Var_357 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                                      MR_Word Var_358 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                                      MR_Word Var_359 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                                      MR_Word Var_360 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                                      MR_Word Var_361 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);

                                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_235, Context_105);
                                      Var_237 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_237);
                                      mercury__io__write_string_3_p_0((MR_String) "// reserve space for GC forwarding pointer\n");
                                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_235, Context_105);
                                      Var_244 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_244);
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
                          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_322, Context_105);
                          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_251);
                          ml_backend__mlds_to_c_stmt__write_lval_or_string_4_p_0(Opts_7, Base_204);
                        }
                        else
                        {
                          MR_Word Var_215;
                          MR_Integer Var_217;
                          MR_Word Var_306;
                          MR_String Var_307;
                          MR_Word Var_308;
                          MR_Word Var_309;
                          MR_Word Var_310;
                          MR_Word Var_311;
                          MR_Word Var_312;
                          MR_Word Var_313;
                          MR_Word Var_314;
                          MR_Word Var_315;
                          MR_Word Var_316;
                          MR_Word Var_317;
                          MR_Word Var_318;
                          MR_Word Var_319;

                          Base_204 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_stmt_scalar_common_2[3]));
                          Var_306 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
                          Var_307 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
                          Var_215 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
                          Var_308 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                          Var_309 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                          Var_310 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                          Var_311 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                          Var_312 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                          Var_313 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                          Var_314 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                          Var_315 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                          Var_316 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                          Var_317 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                          Var_318 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                          Var_319 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_215, Context_105);
                          Var_217 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_217);
                          ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_7, Type_196);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "base");
                          ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_7, Type_196, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          mercury__io__write_string_3_p_0((MR_String) ";\n");
                          switch (GC_Method_206) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 5:
                              {
                                MR_Word NeedsForwardingSpace_1237;
                                MR_Integer Var_1239;

                                ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_322, Context_105);
                                Var_1239 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_1239);
                                mercury__io__write_string_3_p_0((MR_String) "MR_GC_check();\n");
                                NeedsForwardingSpace_1237 = ml_backend__mlds_to_c_stmt__type_needs_forwarding_pointer_space_1_f_0(Type_196);
                                switch (NeedsForwardingSpace_1237) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Integer Var_1157;
                                      MR_Integer Var_1164;

                                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_215, Context_105);
                                      Var_1157 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_1157);
                                      mercury__io__write_string_3_p_0((MR_String) "// reserve space for GC forwarding pointer\n");
                                      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_215, Context_105);
                                      Var_1164 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                                      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_1164);
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
                          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_322, Context_105);
                          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_251);
                          ml_backend__mlds_to_c_stmt__write_lval_or_string_4_p_0(Opts_7, Base_204);
                        }
                        mercury__io__write_string_3_p_0((MR_String) " = ");
                        succeeded = (Ptag_194 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_7, Type_196);
                          EndMkword_208 = (MR_String) "";
                        }
                        else
                        {
                          ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_7, Type_196);
                          mercury__io__write_string_3_p_0((MR_String) "MR_mkword(");
                          ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_194);
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                          EndMkword_208 = (MR_String) ")";
                        }
                        switch (MayUseAtomic_200) {
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
                        ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_7, Type_196);
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        if ((MaybeSize_197 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          mercury__io__write_int_3_p_0((MR_Integer) -1);
                        }
                        else
                        {
                          MR_Word Size_209 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSize_197, (MR_Integer) 0))));

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Size_209);
                          mercury__io__write_string_3_p_0((MR_String) " * sizeof(MR_Word))");
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ml_backend__mlds_to_c_stmt__mlds_output_maybe_alloc_id_3_p_0(MaybeAllocId_201);
                        mercury__io__write_string_3_p_0((MR_String) ", NULL)");
                        mercury__io__write_string_3_p_0(EndMkword_208);
                        mercury__io__write_string_3_p_0((MR_String) ";\n");
                        if (!(((MR_tag((MR_Word) Base_204)) == (MR_mktag((MR_Integer) 0)))))
                        {
                          MR_String BaseVarName1_211 = ((MR_String) ((MR_hl_field(MR_mktag(1), Base_204, (MR_Integer) 0))));
                          MR_Word Var_286 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
                          MR_Integer Var_288;
                          MR_Word Var_390 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
                          MR_String Var_391 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
                          MR_Word Var_392 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                          MR_Word Var_393 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                          MR_Word Var_394 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                          MR_Word Var_395 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                          MR_Word Var_396 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                          MR_Word Var_397 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                          MR_Word Var_398 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                          MR_Word Var_399 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                          MR_Word Var_400 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                          MR_Word Var_401 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                          MR_Word Var_402 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                          MR_Word Var_403 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);

                          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_286, Context_105);
                          Var_288 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_288);
                          ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Target_193);
                          mercury__io__write_string_3_p_0((MR_String) " = ");
                          mercury__io__write_string_3_p_0(BaseVarName1_211);
                          mercury__io__write_string_3_p_0((MR_String) ";\n");
                        }
                        Var_298 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
                        ml_backend__mlds_to_c_stmt__mlds_output_init_args_9_p_0(ArgRvalsTypes_199, Context_105, (MR_Integer) 0, Base_204, Ptag_194, Opts_7, Var_298);
                        Var_404 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
                        Var_405 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
                        Var_301 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
                        Var_406 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        Var_407 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        Var_408 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        Var_409 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                        Var_410 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                        Var_411 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                        Var_412 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                        Var_413 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                        Var_414 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
                        Var_415 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
                        Var_416 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
                        Var_417 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
                        ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_301, Context_105);
                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "}\n");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Lval_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 1))));

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "MR_mark_hp(");
                        ml_backend__mlds_to_c_data__mlds_output_lval_4_p_0(Opts_7, Lval_178);
                        mercury__io__write_string_3_p_0((MR_String) ");\n");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Rval_179 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 1))));

                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                        mercury__io__write_string_3_p_0((MR_String) "MR_restore_hp(");
                        ml_backend__mlds_to_c_data__mlds_output_rval_4_p_0(Opts_7, Rval_179);
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
                        MR_Word TargetLang_120 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 1))));
                        MR_Word Components_121 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_104, (MR_Integer) 2))));

                        switch (TargetLang_120) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word Var_130;
                              MR_Box conv0_STATE_VARIABLE_IO_41;

                              {
                                Var_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (&ml_backend__mlds_to_c_stmt_scalar_common_5[0]));
                                MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0_2));
                                MR_hl_field(MR_mktag(0), Var_130, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
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
            MR_Word Var_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 0))));
            MR_String Var_38 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 1))));
            MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word Var_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word Var_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_Word Var_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
            MR_Word Var_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
            MR_Word Var_45 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
            MR_Word Var_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
            MR_Word Var_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
            MR_Word Var_48 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
            MR_Word Var_49 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
            MR_Word Var_50 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);

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
        MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) & (MR_Integer) 1);
        MR_Integer Var_22;
        MR_Word Var_25;
        MR_Integer Var_27;
        MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 0))));
        MR_String Var_52 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 1))));
        MR_Word Var_53 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word Var_54 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word Var_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word Var_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word Var_57 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word Var_58 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word Var_59 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word Var_60 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word Var_61 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
        MR_Word Var_62 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
        MR_Word Var_63 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
        MR_Word Var_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
        MR_Word Var_65;
        MR_String Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;

        ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_17, Context_11);
        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
        mercury__io__write_string_3_p_0((MR_String) "default:\n");
        Var_22 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
        ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_8, Var_22, FuncInfo_10, Stmt_14);
        Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 0))));
        Var_66 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 1))));
        Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) & (MR_Integer) 1);
        Var_67 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        Var_68 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        Var_69 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        Var_70 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        Var_71 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        Var_72 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        Var_73 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        Var_74 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        Var_75 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
        Var_76 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
        Var_77 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
        Var_78 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
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
          QualFuncName_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), QualFuncName_35, 0) = ((MR_Box) (ModuleName_33));
          MR_hl_field(MR_mktag(0), QualFuncName_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_stmt_scalar_common_2[2])));
        }
        {
          FuncInfo_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
          QualFuncName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), QualFuncName_16, 0) = ((MR_Box) (ModuleName_14));
          MR_hl_field(MR_mktag(0), QualFuncName_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_stmt_scalar_common_2[2])));
        }
        {
          FuncInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
  if (((MR_tag((MR_Word) Base_6)) == (MR_mktag((MR_Integer) 0))))
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
  MR_Integer Ptag_5,
  MR_Word Opts_6,
  MR_Integer Indent_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word ArgRvalType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgRvalsTypes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgRval_28;
      MR_Word ArgType_29;
      MR_Word Var_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Integer Var_49;
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
      MR_String Var_53 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
      MR_Word Var_54 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word Var_57 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word Var_58 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word Var_59 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word Var_60 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word Var_61 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word Var_62 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
      MR_Word Var_63 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
      MR_Word Var_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      MR_Word Var_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_ArgNum_3;

      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_32, Context_2);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
      mercury__io__write_string_3_p_0((MR_String) "MR_hl_field(");
      ml_backend__mlds_to_c_data__mlds_output_ptag_3_p_0(Ptag_5);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      if (((MR_tag((MR_Word) Base_4)) == (MR_mktag((MR_Integer) 0))))
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
          case (MR_Integer) 7:
            NeedsForwardingPtrSpace_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 8:
          case (MR_Integer) 9:
            NeedsForwardingPtrSpace_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 10:
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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeCategory_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 3))));
              MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1))));
              MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 2))));

              NeedsForwardingPtrSpace_4 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(TypeCategory_15);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            NeedsForwardingPtrSpace_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_stmt.type_needs_forwarding_pointer_space\'/1", (MR_String) "rtti_type");
            }
            break;
          case (MR_Integer) 8:
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
  if ((MaybeAllocId_4 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
    if (!((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
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
    MR_Word Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 0))));
    MR_String Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 1))));
    MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);

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
    MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
    MR_String Var_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
    MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);

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
