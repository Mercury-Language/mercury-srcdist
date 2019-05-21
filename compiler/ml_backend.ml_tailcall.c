/*
** Automatically generated from `ml_tailcall.m'
** by the Mercury compiler,
** version rotd-2017-09-11
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module ml_backend.ml_tailcall.
// :- implementation.

/*
INIT mercury__ml_backend__ml_tailcall__init
ENDINIT
*/

#include "ml_backend.ml_tailcall.mih"


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
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
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
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tailcall__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_at_tail_0_0[1];

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_0;

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_1;

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_2;

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_at_tail_0_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_at_tail_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_at_tail_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_at_tail_0[3];

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_at_tail_0[3];

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_is_local_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_is_local_0[2];

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_is_local_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_may_yield_dangling_stack_ref_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_may_yield_dangling_stack_ref_0[2];

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_may_yield_dangling_stack_ref_0[2];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0;

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_info_0_0[5];

static const MR_ConstString ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tailcall_info_0_0[5];

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tailcall_info_0[1];

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tailcall_info_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tc_in_body_info_0_0[2];

static const MR_ConstString ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tc_in_body_info_0_0[2];

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tc_in_body_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tc_in_body_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tc_in_body_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tc_in_body_info_0[1];

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tc_in_body_info_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_warn_tail_calls_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_warn_tail_calls_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_warn_tail_calls_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_warn_tail_calls_0[2];

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_warn_tail_calls_0[2];

static MR_bool MR_CALL 
ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__360__1_2_p_0(
  MR_Word HeadVar__1_81,
  MR_Word HeadVar__2_115);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____warn_tail_calls_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____warn_tail_calls_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tc_in_body_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tc_in_body_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_function_defn_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ModuleName_9,
  MR_Word WarnTailCalls_10,
  MR_Word FuncDefn0_11,
  MR_Word * FuncDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_default_7_p_0(
  MR_Word TCallInfo_8,
  MR_Word AtTailAfter_9,
  MR_Word * AtTailBefore_10,
  MR_Word Default0_11,
  MR_Word * Default_12,
  MR_Word STATE_VARIABLE_InBodyInfo_0_16,
  MR_Word * STATE_VARIABLE_InBodyInfo_17);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_cases_7_p_0(
  MR_Word TCallInfo_1,
  MR_Word AtTailAfter_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_InBodyInfo_0_6,
  MR_Word * STATE_VARIABLE_InBodyInfo_7);

static MR_bool MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(
  MR_Word TCallInfo_8,
  MR_Word AtTailAfter0_9,
  MR_Word * AtTailBefore_10,
  MR_Word Stmt0_11,
  MR_Word * Stmt_12,
  MR_Word STATE_VARIABLE_InBodyInfo_0_73,
  MR_Word * STATE_VARIABLE_InBodyInfo_74);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmts_7_p_0(
  MR_Word TCallInfo_1,
  MR_Word STATE_VARIABLE_AtTail_0_2,
  MR_Word * STATE_VARIABLE_AtTail_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_InBodyInfo_0_6,
  MR_Word * STATE_VARIABLE_InBodyInfo_7);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_7_p_0(
  MR_Word TCallInfo_8,
  MR_Word STATE_VARIABLE_AtTail_0_15,
  MR_Word * STATE_VARIABLE_AtTail_16,
  MR_Word MaybeStatement0_10,
  MR_Word * MaybeStatement_11,
  MR_Word STATE_VARIABLE_InBodyInfo_0_17,
  MR_Word * STATE_VARIABLE_InBodyInfo_18);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_7_p_0(
  MR_Word TCallInfo_8,
  MR_Word AtTailAfter_9,
  MR_Word * AtTailBefore_10,
  MR_Word Stmt0_11,
  MR_Word * Stmt_12,
  MR_Word STATE_VARIABLE_InBodyInfo_0_26,
  MR_Word * STATE_VARIABLE_InBodyInfo_27);

static MR_bool MR_CALL 
ml_backend__ml_tailcall__call_returns_same_local_lvals_as_return_stmt_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_tailcall__lval_is_local_1_f_0(
  MR_Word Lval_3);

static void MR_CALL 
ml_backend__ml_tailcall__maybe_warn_tailcalls_6_p_0(
  MR_Word TCallInfo_7,
  MR_Word CodeAddr_8,
  MR_Word Markers_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_InBodyInfo_0_42,
  MR_Word * STATE_VARIABLE_InBodyInfo_43);

static void MR_CALL 
ml_backend__ml_tailcall__not_at_tail_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_1_f_0(
  MR_Word Rval_3);

static void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tc_in_body_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tc_in_body_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____warn_tail_calls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____warn_tail_calls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_1[3][2];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_2[1][10];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_3[1][5];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_4[1][4];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_5[1][1];




static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_2[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_warn_tail_calls_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_tailcall__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&ml_backend__ml_tailcall__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0)),
    ((MR_Box) (&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tailcall__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_at_tail_0_0[1] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0
};

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_0 = {
  (MR_String) "at_tail",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_at_tail_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_1 = {
  (MR_String) "not_at_tail_seen_reccall",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_2 = {
  (MR_String) "not_at_tail_have_not_seen_reccall",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_at_tail_0_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_1,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_2
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_at_tail_0_1[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_0
};

static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_at_tail_0[2] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_at_tail_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_at_tail_0_1
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_at_tail_0[3] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_2,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_1
};

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_at_tail_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____at_tail_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____at_tail_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "at_tail",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_at_tail_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_at_tail_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_at_tail_0
};

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0 = {
  (MR_String) "is_local",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1 = {
  (MR_String) "is_not_local",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_is_local_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_is_local_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1
};

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_is_local_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_is_local_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____is_local_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____is_local_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "is_local",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_is_local_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_is_local_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_is_local_0
};

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0 = {
  (MR_String) "may_yield_dangling_stack_ref",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1 = {
  (MR_String) "will_not_yield_dangling_stack_ref",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_may_yield_dangling_stack_ref_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_may_yield_dangling_stack_ref_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1
};

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_may_yield_dangling_stack_ref_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_may_yield_dangling_stack_ref_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "may_yield_dangling_stack_ref",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_may_yield_dangling_stack_ref_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_may_yield_dangling_stack_ref_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_may_yield_dangling_stack_ref_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_name_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_warn_tail_calls_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0
};

static const MR_ConstString ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tailcall_info_0_0[5] = {
  (MR_String) "tci_module_info",
  (MR_String) "tci_module_name",
  (MR_String) "tci_function_name",
  (MR_String) "tci_warn_tail_calls",
  (MR_String) "tci_maybe_require_tailrec"
};

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_info_0_0 = {
  (MR_String) "tailcall_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_info_0_0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tailcall_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_info_0_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tailcall_info_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_info_0_0
};

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tailcall_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____tailcall_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____tailcall_info_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "tailcall_info",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tailcall_info_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tailcall_info_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tc_in_body_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_any_rec_calls_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_ConstString ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tc_in_body_info_0_0[2] = {
  (MR_String) "tibi_found",
  (MR_String) "tibi_specs"
};

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tc_in_body_info_0_0 = {
  (MR_String) "tc_in_body_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tc_in_body_info_0_0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tc_in_body_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tc_in_body_info_0_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tc_in_body_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tc_in_body_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tc_in_body_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tc_in_body_info_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tc_in_body_info_0_0
};

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tc_in_body_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tc_in_body_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____tc_in_body_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____tc_in_body_info_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "tc_in_body_info",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_tc_in_body_info_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tc_in_body_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_tc_in_body_info_0
};

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_warn_tail_calls_0_0 = {
  (MR_String) "warn_tail_calls",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_warn_tail_calls_0_1 = {
  (MR_String) "do_not_warn_tail_calls",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_warn_tail_calls_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_warn_tail_calls_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_warn_tail_calls_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_warn_tail_calls_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_warn_tail_calls_0_1,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_warn_tail_calls_0_0
};

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_warn_tail_calls_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_warn_tail_calls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____warn_tail_calls_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____warn_tail_calls_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "warn_tail_calls",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_warn_tail_calls_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_warn_tail_calls_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_warn_tail_calls_0
};

static MR_bool MR_CALL 
ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__360__1_2_p_0(
  MR_Word HeadVar__1_81,
  MR_Word HeadVar__2_115)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_tailcall____Unify____at_tail_0_0(HeadVar__1_81, HeadVar__2_115);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____warn_tail_calls_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____warn_tail_calls_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tc_in_body_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;
      MR_Integer Var_13 = (MR_Integer) ArgX1_4;
      MR_Integer Var_14 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, Var_13, Var_14);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tc_in_body_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_19 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_14;

      hlds__hlds_module____Compare____module_info_0_0(&Var_14, ArgX1_4, ArgY1_5);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        ml_backend__mlds____Compare____mlds_module_name_0_0(&Var_15, ArgX2_6, ArgY2_7);
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          ml_backend__mlds____Compare____mlds_function_name_0_0(&Var_16, ArgX3_8, ArgY3_9);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;
            MR_Integer Var_25 = (MR_Integer) ArgX4_10;
            MR_Integer Var_26 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_17, Var_25, Var_26);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[2], HeadVar__1_1, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = ml_backend__mlds____Unify____mlds_function_name_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              TypeInfo_18_18 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[2];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_11 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_10 == CastY_11);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Var_13)), ((MR_Box) (ArgY1_5)));
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_11_11;
            MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              TypeInfo_11_11 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[1];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_function_defn_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ModuleName_9,
  MR_Word WarnTailCalls_10,
  MR_Word FuncDefn0_11,
  MR_Word * FuncDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  {
    MR_Word Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn0_11, (MR_Integer) 0)));
    MR_Word Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn0_11, (MR_Integer) 1)));
    MR_Word Flags_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn0_11, (MR_Integer) 2)));
    MR_Word MaybePredProcId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn0_11, (MR_Integer) 3)));
    MR_Word Params_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn0_11, (MR_Integer) 4)));
    MR_Word FuncBody0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn0_11, (MR_Integer) 5)));
    MR_Word Attributes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn0_11, (MR_Integer) 6)));
    MR_Word EnvVarNames_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn0_11, (MR_Integer) 7)));
    MR_Word MaybeRequireTailrecInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncDefn0_11, (MR_Integer) 8)));

    if ((FuncBody0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *FuncDefn_12 = FuncDefn0_11;
      *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
    }
    else
    {
      MR_Word BodyStmt0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), FuncBody0_19, (MR_Integer) 0)));
      MR_Word RetTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_18, (MR_Integer) 1)));
      MR_Word AtTailAfter_26;
      MR_Word TCallInfo_29;
      MR_Word InBodyInfo0_30;
      MR_Word BodyStmt_32;
      MR_Word InBodyInfo_33;
      MR_Word FoundRecCall_34;
      MR_Word FuncBody_35;
      MR_Word STATE_VARIABLE_Specs_43_43;
      MR_Word _Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_18, (MR_Integer) 0)));
      MR_Word _AtTailBefore_31;

      if ((RetTypes_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        AtTailAfter_26 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_5[0]);
      }
      else
        AtTailAfter_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      {
        TCallInfo_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TCallInfo_29, 0) = ((MR_Box) (ModuleInfo_8));
        MR_hl_field(MR_mktag(0), TCallInfo_29, 1) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(0), TCallInfo_29, 2) = ((MR_Box) (Name_14));
        MR_hl_field(MR_mktag(0), TCallInfo_29, 3) = ((MR_Box) (WarnTailCalls_10));
        MR_hl_field(MR_mktag(0), TCallInfo_29, 4) = ((MR_Box) (MaybeRequireTailrecInfo_22));
      }
      {
        InBodyInfo0_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InBodyInfo0_30, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), InBodyInfo0_30, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
      }
      ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(TCallInfo_29, AtTailAfter_26, &_AtTailBefore_31, BodyStmt0_23, &BodyStmt_32, InBodyInfo0_30, &InBodyInfo_33);
      FoundRecCall_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), InBodyInfo_33, (MR_Integer) 0)));
      STATE_VARIABLE_Specs_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), InBodyInfo_33, (MR_Integer) 1)));
      {
        FuncBody_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FuncBody_35, 0) = ((MR_Box) (BodyStmt_32));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
        *FuncDefn_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Flags_16));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybePredProcId_17));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Params_18));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FuncBody_35));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Attributes_20));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (EnvVarNames_21));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MaybeRequireTailrecInfo_22));
      }
      if ((MaybePredProcId_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_43_43;
      else
      {
        MR_Word PredProcId_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePredProcId_17, (MR_Integer) 0)));
        MR_Word PredInfo_37;
        MR_Word ProcInfo_38;

        hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_8, PredProcId_36, &PredInfo_37, &ProcInfo_38);
        hlds__mark_tail_calls__maybe_report_no_tail_or_nontail_recursive_calls_5_p_0(PredInfo_37, ProcInfo_38, FoundRecCall_34, STATE_VARIABLE_Specs_43_43, STATE_VARIABLE_Specs_40);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_default_7_p_0(
  MR_Word TCallInfo_8,
  MR_Word AtTailAfter_9,
  MR_Word * AtTailBefore_10,
  MR_Word Default0_11,
  MR_Word * Default_12,
  MR_Word STATE_VARIABLE_InBodyInfo_0_16,
  MR_Word * STATE_VARIABLE_InBodyInfo_17)
{
  switch (MR_tag((MR_Word) Default0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *AtTailBefore_10 = AtTailAfter_9;
        *Default_12 = Default0_11;
        *STATE_VARIABLE_InBodyInfo_17 = STATE_VARIABLE_InBodyInfo_0_16;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Statement0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Default0_11, (MR_Integer) 0)));
        MR_Word Statement_15;

        ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(TCallInfo_8, AtTailAfter_9, AtTailBefore_10, Statement0_14, &Statement_15, STATE_VARIABLE_InBodyInfo_0_16, STATE_VARIABLE_InBodyInfo_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Default_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Statement_15));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_cases_7_p_0(
  MR_Word TCallInfo_1,
  MR_Word AtTailAfter_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_InBodyInfo_0_6,
  MR_Word * STATE_VARIABLE_InBodyInfo_7)
{
  if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_InBodyInfo_7 = STATE_VARIABLE_InBodyInfo_0_6;
  }
  else
  {
    MR_Word AtTailBefore_15;
    MR_Word AtTailBefores_16;
    MR_Word Case0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
    MR_Word Cases0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
    MR_Word Case_19;
    MR_Word Cases_20;
    MR_Word STATE_VARIABLE_InBodyInfo_24_24;
    MR_Word FirstCond_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_17, (MR_Integer) 0)));
    MR_Word LaterConds_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_17, (MR_Integer) 1)));
    MR_Word Statement0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_17, (MR_Integer) 2)));
    MR_Word Statement_37;

    ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(TCallInfo_1, AtTailAfter_2, &AtTailBefore_15, Statement0_36, &Statement_37, STATE_VARIABLE_InBodyInfo_0_6, &STATE_VARIABLE_InBodyInfo_24_24);
    {
      Case_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_19, 0) = ((MR_Box) (FirstCond_34));
      MR_hl_field(MR_mktag(0), Case_19, 1) = ((MR_Box) (LaterConds_35));
      MR_hl_field(MR_mktag(0), Case_19, 2) = ((MR_Box) (Statement_37));
    }
    ml_backend__ml_tailcall__mark_tailcalls_in_cases_7_p_0(TCallInfo_1, AtTailAfter_2, &AtTailBefores_16, Cases0_18, &Cases_20, STATE_VARIABLE_InBodyInfo_24_24, STATE_VARIABLE_InBodyInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AtTailBefore_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (AtTailBefores_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_20));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__360__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_FuncDefn_12;
    MR_Word conv0_STATE_VARIABLE_Specs_40;

    ml_backend__ml_tailcall__mark_tailcalls_in_function_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv1_FuncDefn_12, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_Specs_40);
    *wrapper_arg_2 = ((MR_Box) (conv1_FuncDefn_12));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_40));
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(
  MR_Word TCallInfo_8,
  MR_Word AtTailAfter0_9,
  MR_Word * AtTailBefore_10,
  MR_Word Stmt0_11,
  MR_Word * Stmt_12,
  MR_Word STATE_VARIABLE_InBodyInfo_0_73,
  MR_Word * STATE_VARIABLE_InBodyInfo_74)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Stmt0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_113_113;
          MR_Word LocalVarDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt0_11, (MR_Integer) 0)));
          MR_Word FuncDefns0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt0_11, (MR_Integer) 1)));
          MR_Word Stmts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt0_11, (MR_Integer) 2)));
          MR_Word Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt0_11, (MR_Integer) 3)));
          MR_Word ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_8, (MR_Integer) 0)));
          MR_Word ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_8, (MR_Integer) 1)));
          MR_Word WarnTailCalls_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_8, (MR_Integer) 3)));
          MR_Word Specs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InBodyInfo_0_73, (MR_Integer) 1)));
          MR_Word FuncDefns_22;
          MR_Word Specs_23;
          MR_Word Stmts_24;
          MR_Word Var_85;
          MR_Word STATE_VARIABLE_InBodyInfo_86_86;
          MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_8, (MR_Integer) 2)));
          MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_8, (MR_Integer) 4)));
          MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InBodyInfo_0_73, (MR_Integer) 0)));
          MR_Box conv2_Specs_23;
          MR_Word Var_107;
          MR_Word Var_108;

          {
            Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (ModuleInfo_18));
            MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (ModuleName_19));
            MR_hl_field(MR_mktag(0), Var_85, 5) = ((MR_Box) (WarnTailCalls_20));
          }
          TypeCtorInfo_113_113 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
          mercury__list__map_foldl_5_p_0(TypeCtorInfo_113_113, TypeCtorInfo_113_113, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], Var_85, FuncDefns0_15, &FuncDefns_22, ((MR_Box) (Specs0_21)), &conv2_Specs_23);
          Specs_23 = ((MR_Word) conv2_Specs_23);
          Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InBodyInfo_0_73, (MR_Integer) 0)));
          Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InBodyInfo_0_73, (MR_Integer) 1)));
          {
            STATE_VARIABLE_InBodyInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_InBodyInfo_86_86, 0) = ((MR_Box) (Var_107));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_InBodyInfo_86_86, 1) = ((MR_Box) (Specs_23));
          }
          ml_backend__ml_tailcall__mark_tailcalls_in_stmts_7_p_0(TCallInfo_8, AtTailAfter0_9, AtTailBefore_10, Stmts0_16, &Stmts_24, STATE_VARIABLE_InBodyInfo_86_86, STATE_VARIABLE_InBodyInfo_74);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *Stmt_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LocalVarDefns_14));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FuncDefns_22));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Stmts_24));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_17));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt0_11, (MR_Integer) 0)));
          MR_Word Rval_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt0_11, (MR_Integer) 1)));
          MR_Word Statement0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt0_11, (MR_Integer) 2)));
          MR_Word AtTailAfter_28;
          MR_Word AtTailBefore0_29;
          MR_Word Statement_30;
          MR_Word Context_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt0_11, (MR_Integer) 3)));

          ml_backend__ml_tailcall__not_at_tail_2_p_0(AtTailAfter0_9, &AtTailAfter_28);
          ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(TCallInfo_8, AtTailAfter_28, &AtTailBefore0_29, Statement0_27, &Statement_30, STATE_VARIABLE_InBodyInfo_0_73, STATE_VARIABLE_InBodyInfo_74);
          ml_backend__ml_tailcall__not_at_tail_2_p_0(AtTailBefore0_29, AtTailBefore_10);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *Stmt_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Kind_25));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rval_26));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Statement_30));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Context_88));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Cond_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt0_11, (MR_Integer) 0)));
          MR_Word Then0_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt0_11, (MR_Integer) 1)));
          MR_Word MaybeElse0_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt0_11, (MR_Integer) 2)));
          MR_Word AtTailBeforeThen_34;
          MR_Word Then_35;
          MR_Word AtTailBeforeElse_36;
          MR_Word MaybeElse_37;
          MR_Word STATE_VARIABLE_InBodyInfo_82_82;
          MR_Word Context_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt0_11, (MR_Integer) 3)));

          ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(TCallInfo_8, AtTailAfter0_9, &AtTailBeforeThen_34, Then0_32, &Then_35, STATE_VARIABLE_InBodyInfo_0_73, &STATE_VARIABLE_InBodyInfo_82_82);
          ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_7_p_0(TCallInfo_8, AtTailAfter0_9, &AtTailBeforeElse_36, MaybeElse0_33, &MaybeElse_37, STATE_VARIABLE_InBodyInfo_82_82, STATE_VARIABLE_InBodyInfo_74);
          succeeded = (AtTailBeforeThen_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (!(succeeded))
            succeeded = (AtTailBeforeElse_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
            *AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            *AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *Stmt_12 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Cond_31));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Then_35));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (MaybeElse_37));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Context_89));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Type_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 1)));
              MR_Word Val_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 2)));
              MR_Word Range_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 3)));
              MR_Word Cases0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 4)));
              MR_Word Default0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 5)));
              MR_Word AtTailBeforeCases_43;
              MR_Word Cases_44;
              MR_Word AtTailBeforeDefault_45;
              MR_Word Default_46;
              MR_Word STATE_VARIABLE_InBodyInfo_78_78;
              MR_Word Context_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 6)));

              ml_backend__ml_tailcall__mark_tailcalls_in_cases_7_p_0(TCallInfo_8, AtTailAfter0_9, &AtTailBeforeCases_43, Cases0_41, &Cases_44, STATE_VARIABLE_InBodyInfo_0_73, &STATE_VARIABLE_InBodyInfo_78_78);
              ml_backend__ml_tailcall__mark_tailcalls_in_default_7_p_0(TCallInfo_8, AtTailAfter0_9, &AtTailBeforeDefault_45, Default0_42, &Default_46, STATE_VARIABLE_InBodyInfo_78_78, STATE_VARIABLE_InBodyInfo_74);
              {
                MR_Word Var_47;
                MR_Box conv3_Var_47;

                succeeded = mercury__list__find_first_match_3_p_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0, (MR_Word) &ml_backend__ml_tailcall_scalar_common_4[0], AtTailBeforeCases_43, &conv3_Var_47);
                if (succeeded)
                {
                  Var_47 = ((MR_Word) conv3_Var_47);
                  succeeded = MR_TRUE;
                }
              }
              if (!(succeeded))
                succeeded = (AtTailBeforeDefault_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
                *AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                *AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *Stmt_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_38));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Val_39));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Range_40));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Cases_44));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Default_46));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Context_90));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *AtTailBefore_10 = AtTailAfter0_9;
              *Stmt_12 = Stmt0_11;
              *STATE_VARIABLE_InBodyInfo_74 = STATE_VARIABLE_InBodyInfo_0_73;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              ml_backend__ml_tailcall__not_at_tail_2_p_0(AtTailAfter0_9, AtTailBefore_10);
              *Stmt_12 = Stmt0_11;
              *STATE_VARIABLE_InBodyInfo_74 = STATE_VARIABLE_InBodyInfo_0_73;
            }
            break;
          case (MR_Integer) 4:
            ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_7_p_0(TCallInfo_8, AtTailAfter0_9, AtTailBefore_10, Stmt0_11, Stmt_12, STATE_VARIABLE_InBodyInfo_0_73, STATE_VARIABLE_InBodyInfo_74);
            break;
          case (MR_Integer) 5:
            {
              MR_Word ReturnVals_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 1)));
              MR_Word _Context_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *AtTailBefore_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ReturnVals_71));
              }
              *Stmt_12 = Stmt0_11;
              *STATE_VARIABLE_InBodyInfo_74 = STATE_VARIABLE_InBodyInfo_0_73;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Ref_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 1)));
              MR_Word Handler0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 3)));
              MR_Word Handler_59;
              MR_Word STATE_VARIABLE_InBodyInfo_75_75;
              MR_Word Context_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 4)));
              MR_Word Statement0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 2)));
              MR_Word Statement_93;
              MR_Word Var_57;
              MR_Word Var_58;

              ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(TCallInfo_8, AtTailAfter0_9, &Var_57, Statement0_92, &Statement_93, STATE_VARIABLE_InBodyInfo_0_73, &STATE_VARIABLE_InBodyInfo_75_75);
              ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(TCallInfo_8, AtTailAfter0_9, &Var_58, Handler0_56, &Handler_59, STATE_VARIABLE_InBodyInfo_75_75, STATE_VARIABLE_InBodyInfo_74);
              *AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *Stmt_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Ref_55));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Statement_93));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Handler_59));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Context_91));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmts_7_p_0(
  MR_Word TCallInfo_1,
  MR_Word STATE_VARIABLE_AtTail_0_2,
  MR_Word * STATE_VARIABLE_AtTail_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_InBodyInfo_0_6,
  MR_Word * STATE_VARIABLE_InBodyInfo_7)
{
  if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_InBodyInfo_7 = STATE_VARIABLE_InBodyInfo_0_6;
    *STATE_VARIABLE_AtTail_3 = STATE_VARIABLE_AtTail_0_2;
  }
  else
  {
    MR_Word Stmt0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
    MR_Word Stmts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
    MR_Word Stmt_19;
    MR_Word Stmts_20;
    MR_Word STATE_VARIABLE_AtTail_26_26;
    MR_Word STATE_VARIABLE_InBodyInfo_27_27;

    ml_backend__ml_tailcall__mark_tailcalls_in_stmts_7_p_0(TCallInfo_1, STATE_VARIABLE_AtTail_0_2, &STATE_VARIABLE_AtTail_26_26, Stmts0_18, &Stmts_20, STATE_VARIABLE_InBodyInfo_0_6, &STATE_VARIABLE_InBodyInfo_27_27);
    ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(TCallInfo_1, STATE_VARIABLE_AtTail_26_26, STATE_VARIABLE_AtTail_3, Stmt0_17, &Stmt_19, STATE_VARIABLE_InBodyInfo_27_27, STATE_VARIABLE_InBodyInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts_20));
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_7_p_0(
  MR_Word TCallInfo_8,
  MR_Word STATE_VARIABLE_AtTail_0_15,
  MR_Word * STATE_VARIABLE_AtTail_16,
  MR_Word MaybeStatement0_10,
  MR_Word * MaybeStatement_11,
  MR_Word STATE_VARIABLE_InBodyInfo_0_17,
  MR_Word * STATE_VARIABLE_InBodyInfo_18)
{
  if ((MaybeStatement0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *MaybeStatement_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_AtTail_16 = STATE_VARIABLE_AtTail_0_15;
    *STATE_VARIABLE_InBodyInfo_18 = STATE_VARIABLE_InBodyInfo_0_17;
  }
  else
  {
    MR_Word Statement0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeStatement0_10, (MR_Integer) 0)));
    MR_Word Statement_14;

    ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(TCallInfo_8, STATE_VARIABLE_AtTail_0_15, STATE_VARIABLE_AtTail_16, Statement0_13, &Statement_14, STATE_VARIABLE_InBodyInfo_0_17, STATE_VARIABLE_InBodyInfo_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeStatement_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Statement_14));
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_7_p_0(
  MR_Word TCallInfo_8,
  MR_Word AtTailAfter_9,
  MR_Word * AtTailBefore_10,
  MR_Word Stmt0_11,
  MR_Word * Stmt_12,
  MR_Word STATE_VARIABLE_InBodyInfo_0_26,
  MR_Word * STATE_VARIABLE_InBodyInfo_27)
{
  {
    MR_bool succeeded;
    MR_Word Sig_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 1)));
    MR_Word CalleeRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 2)));
    MR_Word Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 3)));
    MR_Word CallReturnLvals_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 4)));
    MR_Word CallKind0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 5)));
    MR_Word Markers_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 6)));
    MR_Word Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_11, (MR_Integer) 7)));
    MR_Word ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_8, (MR_Integer) 1)));
    MR_Word FuncName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_8, (MR_Integer) 2)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_8, (MR_Integer) 0)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_8, (MR_Integer) 3)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_8, (MR_Integer) 4)));
    MR_Word CalleeCodeAddr_23;
    MR_Word Var_28;

    succeeded = (CallKind0_18 == (MR_Integer) 2);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) CalleeRval_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CalleeRval_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), CalleeRval_15, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          CalleeCodeAddr_23 = (MR_Word) MR_body(((MR_Word) Var_28), (MR_Integer) 1);
          succeeded = ml_backend__ml_util__code_address_is_for_this_function_3_p_0(CalleeCodeAddr_23, ModuleName_21, FuncName_22);
        }
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_InBodyInfo_29_29;
      MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InBodyInfo_0_26, (MR_Integer) 1)));
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InBodyInfo_0_26, (MR_Integer) 0)));
      MR_Word ReturnStmtRvals_24;
      MR_Word Var_31;

      {
        STATE_VARIABLE_InBodyInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InBodyInfo_29_29, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_InBodyInfo_29_29, 1) = ((MR_Box) (Var_43));
      }
      succeeded = ((MR_tag((MR_Word) AtTailAfter_9)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ReturnStmtRvals_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), AtTailAfter_9, (MR_Integer) 0)));
        succeeded = ml_backend__ml_tailcall__call_returns_same_local_lvals_as_return_stmt_2_p_0(ReturnStmtRvals_24, CallReturnLvals_17);
        if (succeeded)
        {
          Var_31 = ml_backend__ml_tailcall__may_rvals_yield_dangling_stack_ref_1_f_0(Args_16);
          succeeded = (Var_31 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_12 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Sig_14));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CalleeRval_15));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Args_16));
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (CallReturnLvals_17));
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Markers_19));
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (Context_20));
        }
        *AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_InBodyInfo_27 = STATE_VARIABLE_InBodyInfo_29_29;
      }
      else
      {
        switch (MR_tag((MR_Word) AtTailAfter_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(AtTailAfter_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_InBodyInfo_27 = STATE_VARIABLE_InBodyInfo_29_29;
                break;
              case (MR_Integer) 1:
                ml_backend__ml_tailcall__maybe_warn_tailcalls_6_p_0(TCallInfo_8, CalleeCodeAddr_23, Markers_19, Context_20, STATE_VARIABLE_InBodyInfo_29_29, STATE_VARIABLE_InBodyInfo_27);
                break;
            }
            break;
          case (MR_Integer) 1:
            ml_backend__ml_tailcall__maybe_warn_tailcalls_6_p_0(TCallInfo_8, CalleeCodeAddr_23, Markers_19, Context_20, STATE_VARIABLE_InBodyInfo_29_29, STATE_VARIABLE_InBodyInfo_27);
            break;
        }
        *Stmt_12 = Stmt0_11;
        *AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    }
    else
    {
      *Stmt_12 = Stmt0_11;
      switch (MR_tag((MR_Word) AtTailAfter_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(AtTailAfter_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              *AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              break;
          }
          break;
        case (MR_Integer) 1:
          *AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          break;
      }
      *STATE_VARIABLE_InBodyInfo_27 = STATE_VARIABLE_InBodyInfo_0_26;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall__call_returns_same_local_lvals_as_return_stmt_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = (HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    else
    {
      MR_Word ReturnStmtRval_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ReturnStmtRvals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word CallReturnLval_5;
      MR_Word CallReturnLvals_6;
      MR_Word Var_9;
      MR_Word Var_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        CallReturnLval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        CallReturnLvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) ReturnStmtRval_3)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
        {
          Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ReturnStmtRval_3, (MR_Integer) 0)));
          succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(CallReturnLval_5, Var_10);
          if (succeeded)
          {
            Var_9 = ml_backend__ml_tailcall__lval_is_local_1_f_0(CallReturnLval_5);
            succeeded = (Var_9 == (MR_Integer) 0);
            if (succeeded)
            {
              // direct tailcall eliminated
              next_value_of_HeadVar__1_1 = ReturnStmtRvals_4;
              next_value_of_HeadVar__2_2 = CallReturnLvals_6;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tailcall__lval_is_local_1_f_0(
  MR_Word Lval_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IsLocal_4;

    // setup for tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Lval_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_3, (MR_Integer) 1)));
          MR_Word _Tag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_3, (MR_Integer) 0)));
          MR_Word _Field_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_3, (MR_Integer) 2)));
          MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_3, (MR_Integer) 3)));
          MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_3, (MR_Integer) 4)));
          MR_Word BaseLval_12;

          succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
            BaseLval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1)));
            {
              MR_Word next_value_of_Lval_3 = BaseLval_12;

              // direct tailcall eliminated
              Lval_3 = next_value_of_Lval_3;
              continue;
            }
          }
          else
            IsLocal_4 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        IsLocal_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            IsLocal_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            IsLocal_4 = (MR_Integer) 1;
            break;
        }
        break;
    }
    return IsLocal_4;
    break;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__maybe_warn_tailcalls_6_p_0(
  MR_Word TCallInfo_7,
  MR_Word CodeAddr_8,
  MR_Word Markers_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_InBodyInfo_0_42,
  MR_Word * STATE_VARIABLE_InBodyInfo_43)
{
  {
    MR_bool succeeded;
    MR_Word WarnTailCalls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_7, (MR_Integer) 3)));
    MR_Word MaybeRequireTailrecInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_7, (MR_Integer) 4)));
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_7, (MR_Integer) 0)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_7, (MR_Integer) 1)));
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCallInfo_7, (MR_Integer) 2)));

    succeeded = (WarnTailCalls_12 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (MaybeRequireTailrecInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      *STATE_VARIABLE_InBodyInfo_43 = STATE_VARIABLE_InBodyInfo_0_42;
    else
    {
      MR_Word WarnOrError_15;

      switch (WarnTailCalls_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word RequireTailrecInfo_14;
            MR_Word TailrecType_16;
            MR_Word Var_17;

            succeeded = ((MR_tag((MR_Word) MaybeRequireTailrecInfo_13)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              RequireTailrecInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRequireTailrecInfo_13, (MR_Integer) 0)));
              succeeded = ((MR_tag((MR_Word) RequireTailrecInfo_14)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                WarnOrError_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), RequireTailrecInfo_14, (MR_Integer) 0)))) & (MR_Integer) 1);
                TailrecType_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), RequireTailrecInfo_14, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), RequireTailrecInfo_14, (MR_Integer) 1)));
              }
            }
          }
          break;
        case (MR_Integer) 0:
          if ((MaybeRequireTailrecInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            WarnOrError_15 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word RequireTailrecInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRequireTailrecInfo_13, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) RequireTailrecInfo_46)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word Var_18;
              MR_Word TailrecType_64;

              WarnOrError_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), RequireTailrecInfo_46, (MR_Integer) 0)))) & (MR_Integer) 1);
              TailrecType_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), RequireTailrecInfo_46, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), RequireTailrecInfo_46, (MR_Integer) 1)));
              succeeded = MR_TRUE;
            }
            else
              succeeded = mercury__builtin__false_0_p_0();
          }
          break;
      }
      if (succeeded)
      {
        MR_Word QualFuncLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), CodeAddr_8, (MR_Integer) 0)));
        MR_Word FuncLabel_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFuncLabel_20, (MR_Integer) 1)));
        MR_Word ProcLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncLabel_23, (MR_Integer) 0)));
        MR_Word PredLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLabel_24, (MR_Integer) 0)));
        MR_Integer ProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLabel_24, (MR_Integer) 1)));
        MR_Word _Sig_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), CodeAddr_8, (MR_Integer) 1)));
        MR_Word _ModuleName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFuncLabel_20, (MR_Integer) 0)));
        MR_Word _MaybeSeqNum_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncLabel_23, (MR_Integer) 1)));

        if (((MR_tag((MR_Word) PredLabel_26)) == (MR_mktag((MR_Integer) 1))))
          *STATE_VARIABLE_InBodyInfo_43 = STATE_VARIABLE_InBodyInfo_0_42;
        else
        {
          MR_Word PredOrFunc_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredLabel_26, (MR_Integer) 0)));
          MR_String Name_34 = ((MR_String) (MR_hl_field(MR_mktag(0), PredLabel_26, (MR_Integer) 2)));
          MR_Integer Arity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredLabel_26, (MR_Integer) 3)));
          MR_Word _MaybeModule_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredLabel_26, (MR_Integer) 1)));
          MR_Word _CodeModel_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredLabel_26, (MR_Integer) 4)));
          MR_Word _NonOutputFunc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredLabel_26, (MR_Integer) 5)));

          succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0, Markers_9, ((MR_Box) ((MR_Integer) 0)));
          if (succeeded)
            *STATE_VARIABLE_InBodyInfo_43 = STATE_VARIABLE_InBodyInfo_0_42;
          else
          {
            MR_Word SymName_38;
            MR_Word SimpleCallId_39;
            MR_Word Specs0_40;
            MR_Word Specs_41;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_60;

            {
              SymName_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SymName_38, 0) = ((MR_Box) (Name_34));
            }
            {
              SimpleCallId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SimpleCallId_39, 0) = ((MR_Box) (PredOrFunc_32));
              MR_hl_field(MR_mktag(0), SimpleCallId_39, 1) = ((MR_Box) (SymName_38));
              MR_hl_field(MR_mktag(0), SimpleCallId_39, 2) = ((MR_Box) (Arity_35));
            }
            Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InBodyInfo_0_42, (MR_Integer) 0)));
            Specs0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InBodyInfo_0_42, (MR_Integer) 1)));
            hlds__mark_tail_calls__add_message_for_nontail_self_recursive_call_6_p_0(SimpleCallId_39, ProcId_27, Context_10, WarnOrError_15, Specs0_40, &Specs_41);
            Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InBodyInfo_0_42, (MR_Integer) 0)));
            Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InBodyInfo_0_42, (MR_Integer) 1)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_InBodyInfo_43 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Specs_41));
            }
          }
        }
      }
      else
        *STATE_VARIABLE_InBodyInfo_43 = STATE_VARIABLE_InBodyInfo_0_42;
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__not_at_tail_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      break;
  }
}

MR_Word MR_CALL 
ml_backend__ml_tailcall__may_rvals_yield_dangling_stack_ref_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Integer) 1;
    else
    {
      MR_Word Rval_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Rvals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word MayYieldDanglingStackRef0_6;

      MayYieldDanglingStackRef0_6 = ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_1_f_0(Rval_3);
      switch (MayYieldDanglingStackRef0_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = Rvals_4;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_1_f_0(
  MR_Word Rval_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MayYieldDanglingStackRef_4;

    // setup for tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Rval_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        MayYieldDanglingStackRef_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        MayYieldDanglingStackRef_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRval_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 2)));
              MR_Integer _Tag_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 1)));
              MR_Word next_value_of_Rval_3 = SubRval_7;

              // direct tailcall eliminated
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) Const_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word CodeAddr_24 = (MR_Word) MR_body(((MR_Word) Const_8), (MR_Integer) 1);
                    MR_Word QualFuncLabel_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), CodeAddr_24, (MR_Integer) 0)));
                    MR_Word FuncLabel_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFuncLabel_53, (MR_Integer) 1)));
                    MR_Word MaybeAux_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncLabel_56, (MR_Integer) 1)));
                    MR_Word _Signature_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), CodeAddr_24, (MR_Integer) 1)));
                    MR_Word _ModuleName_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFuncLabel_53, (MR_Integer) 0)));
                    MR_Word _ProcLabel_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncLabel_56, (MR_Integer) 0)));

                    switch (MR_tag((MR_Word) MaybeAux_58)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(MaybeAux_58)) {
                          default:
                            succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 1:
                            succeeded = MR_TRUE;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        succeeded = MR_TRUE;
                        break;
                    }
                    if (succeeded)
                      MayYieldDanglingStackRef_4 = (MR_Integer) 0;
                    else
                      MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 2:
                  MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                    case (MR_Integer) 9:
                    case (MR_Integer) 10:
                    case (MR_Integer) 11:
                    case (MR_Integer) 12:
                    case (MR_Integer) 13:
                    case (MR_Integer) 15:
                    case (MR_Integer) 16:
                    case (MR_Integer) 17:
                    case (MR_Integer) 18:
                      MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 14:
                      MayYieldDanglingStackRef_4 = (MR_Integer) 0;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 2)));
              MR_Word _Op_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 1)));
              MR_Word next_value_of_Rval_3 = SubRval_19;

              // direct tailcall eliminated
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRvalA_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 2)));
              MR_Word SubRvalB_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 3)));
              MR_Word MayYieldDanglingStackRefA_12;
              MR_Word _Op_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 1)));

              MayYieldDanglingStackRefA_12 = ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_1_f_0(SubRvalA_10);
              switch (MayYieldDanglingStackRefA_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MayYieldDanglingStackRef_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word next_value_of_Rval_3 = SubRvalB_11;

                    // direct tailcall eliminated
                    Rval_3 = next_value_of_Rval_3;
                    continue;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) Lval_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_13, (MR_Integer) 1)));
                    MR_Word _MaybeTag_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_13, (MR_Integer) 0)));
                    MR_Word _FieldId_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_13, (MR_Integer) 2)));
                    MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_13, (MR_Integer) 3)));
                    MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_13, (MR_Integer) 4)));
                    MR_Word next_value_of_Rval_3 = Rval_66;

                    // direct tailcall eliminated
                    Rval_3 = next_value_of_Rval_3;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_13, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      MayYieldDanglingStackRef_4 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word RowRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 2)));
              MR_Word _VectorCommon_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 1)));
              MR_Word next_value_of_Rval_3 = RowRval_15;

              // direct tailcall eliminated
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 6:
            MayYieldDanglingStackRef_4 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return MayYieldDanglingStackRef_4;
    break;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_FuncDefn_12;
    MR_Word conv0_STATE_VARIABLE_Specs_40;

    ml_backend__ml_tailcall__mark_tailcalls_in_function_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv1_FuncDefn_12, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_Specs_40);
    *wrapper_arg_2 = ((MR_Box) (conv1_FuncDefn_12));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_40));
  }
}

void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleInfo_7,
  MR_Word * Specs_8,
  MR_Word STATE_VARIABLE_MLDS_0_15,
  MR_Word * STATE_VARIABLE_MLDS_16)
{
  {
    MR_Word TypeCtorInfo_54_54;
    MR_Word ModuleName_10;
    MR_Word WarnTailCallsBool_11;
    MR_Word WarnTailCalls_12;
    MR_Word FuncDefns0_13;
    MR_Word FuncDefns_14;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 0)));
    MR_Word Var_19;
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 1)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 2)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 4)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 5)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 6)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 7)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 8)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 9)));
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Box conv2_Specs_8;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_46;

    ModuleName_10 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(Var_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 31, &WarnTailCallsBool_11);
    switch (WarnTailCallsBool_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        WarnTailCalls_12 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        WarnTailCalls_12 = (MR_Integer) 0;
        break;
    }
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 0)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 1)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 2)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 3)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 4)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 5)));
    FuncDefns0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 6)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 7)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 8)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 9)));
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (WarnTailCalls_12));
    }
    TypeCtorInfo_54_54 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
    mercury__list__map_foldl_5_p_0(TypeCtorInfo_54_54, TypeCtorInfo_54_54, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], Var_19, FuncDefns0_13, &FuncDefns_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv2_Specs_8);
    *Specs_8 = ((MR_Word) conv2_Specs_8);
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 0)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 1)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 2)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 3)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 4)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 5)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 6)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 7)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 8)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_15, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MLDS_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (FuncDefns_14));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_49));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_tailcall____Unify____at_tail_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_tailcall____Compare____at_tail_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_tailcall____Unify____is_local_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_tailcall____Compare____is_local_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_tailcall____Unify____tailcall_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_tailcall____Compare____tailcall_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tc_in_body_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_tailcall____Unify____tc_in_body_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tc_in_body_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_tailcall____Compare____tc_in_body_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____warn_tail_calls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_tailcall____Unify____warn_tail_calls_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____warn_tail_calls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_tailcall____Compare____warn_tail_calls_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_tailcall__init(void)
{
}

void mercury__ml_backend__ml_tailcall__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0);
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_is_local_0);
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_may_yield_dangling_stack_ref_0);
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tailcall_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_tc_in_body_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_warn_tail_calls_0);
}

void mercury__ml_backend__ml_tailcall__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_tailcall__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_tailcall.
