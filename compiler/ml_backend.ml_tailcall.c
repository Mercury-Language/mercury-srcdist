/*
** Automatically generated from `ml_tailcall.m'
** by the Mercury compiler,
** version rotd-2017-08-05
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module ml_backend.ml_tailcall. */
/* :- implementation. */

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

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_found_recursive_call_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_found_recursive_call_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_found_recursive_call_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_found_recursive_call_0[2];

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_found_recursive_call_0[2];

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
ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__385__1_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_81,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_115);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____warn_tail_calls_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____warn_tail_calls_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tc_in_body_info_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tc_in_body_info_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_info_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_info_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____found_recursive_call_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____found_recursive_call_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_function_defn_7_p_0(
  MR_Word ml_backend__ml_tailcall__ModuleInfo_8,
  MR_Word ml_backend__ml_tailcall__ModuleName_9,
  MR_Word ml_backend__ml_tailcall__WarnTailCalls_10,
  MR_Word ml_backend__ml_tailcall__FuncDefn0_11,
  MR_Word * ml_backend__ml_tailcall__FuncDefn_12,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_Specs_0_36,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_Specs_37);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_default_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_9,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
  MR_Word ml_backend__ml_tailcall__Default0_11,
  MR_Word * ml_backend__ml_tailcall__Default_12,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_16,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_17);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_cases_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_2,
  MR_Word * ml_backend__ml_tailcall__HeadVar__3_3,
  MR_Word ml_backend__ml_tailcall__HeadVar__4_4,
  MR_Word * ml_backend__ml_tailcall__HeadVar__5_5,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_6,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_7);

static MR_bool MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_2(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word ml_backend__ml_tailcall__AtTailAfter0_9,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
  MR_Word ml_backend__ml_tailcall__Stmt0_11,
  MR_Word * ml_backend__ml_tailcall__Stmt_12,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_73,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_74);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmts_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_2,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_3,
  MR_Word ml_backend__ml_tailcall__HeadVar__4_4,
  MR_Word * ml_backend__ml_tailcall__HeadVar__5_5,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_6,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_7);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_15,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_16,
  MR_Word ml_backend__ml_tailcall__MaybeStatement0_10,
  MR_Word * ml_backend__ml_tailcall__MaybeStatement_11,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_17,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_18);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_9,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
  MR_Word ml_backend__ml_tailcall__Stmt0_11,
  MR_Word * ml_backend__ml_tailcall__Stmt_12,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_26,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_27);

static MR_Word MR_CALL 
ml_backend__ml_tailcall__may_rvals_yield_dangling_stack_ref_1_f_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1);

static MR_Word MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_1_f_0(
  MR_Word ml_backend__ml_tailcall__Rval_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall__call_returns_same_local_lvals_as_return_stmt_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_tailcall__lval_is_local_1_f_0(
  MR_Word ml_backend__ml_tailcall__Lval_3);

static void MR_CALL 
ml_backend__ml_tailcall__maybe_warn_tailcalls_6_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_7,
  MR_Word ml_backend__ml_tailcall__CodeAddr_8,
  MR_Word ml_backend__ml_tailcall__Markers_9,
  MR_Word ml_backend__ml_tailcall__Context_10,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_42,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_43);

static void MR_CALL 
ml_backend__ml_tailcall__not_at_tail_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_4);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____found_recursive_call_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____found_recursive_call_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_info_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_info_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tc_in_body_info_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tc_in_body_info_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____warn_tail_calls_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____warn_tail_calls_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);


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

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_found_recursive_call_0_0 = {
  (MR_String) "found_recursive_call",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_found_recursive_call_0_1 = {
  (MR_String) "not_found_recursive_call",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_found_recursive_call_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_found_recursive_call_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_found_recursive_call_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_found_recursive_call_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_found_recursive_call_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_found_recursive_call_0_1
};

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_found_recursive_call_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_found_recursive_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____found_recursive_call_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____found_recursive_call_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "found_recursive_call",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_found_recursive_call_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_found_recursive_call_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_found_recursive_call_0
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
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_found_recursive_call_0,
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
ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__385__1_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_81,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_115)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____at_tail_0_0(ml_backend__ml_tailcall__HeadVar__1_81, ml_backend__ml_tailcall__HeadVar__2_115);
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____warn_tail_calls_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
{
  {
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__Cast_HeadVar1_4, ml_backend__ml_tailcall__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____warn_tail_calls_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__HeadVar__2_1 == ml_backend__ml_tailcall__HeadVar__2_2);

    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tc_in_body_info_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Integer ml_backend__ml_tailcall__CastX_9 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
    MR_Integer ml_backend__ml_tailcall__CastY_10 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_9 == ml_backend__ml_tailcall__CastY_10);
    if (ml_backend__ml_tailcall__succeeded)
      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ml_backend__ml_tailcall__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tailcall__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tailcall__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_tailcall__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_tailcall__Var_8;
      MR_Integer ml_backend__ml_tailcall__Var_13 = (MR_Integer) ml_backend__ml_tailcall__ArgX1_4;
      MR_Integer ml_backend__ml_tailcall__Var_14 = (MR_Integer) ml_backend__ml_tailcall__ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_tailcall__Var_8, ml_backend__ml_tailcall__Var_13, ml_backend__ml_tailcall__Var_14);
      ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_8 == (MR_Integer) 0);
      ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
      if (ml_backend__ml_tailcall__succeeded)
        *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__ArgX2_6)), ((MR_Box) (ml_backend__ml_tailcall__ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tc_in_body_info_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Integer ml_backend__ml_tailcall__CastX_7 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
    MR_Integer ml_backend__ml_tailcall__CastY_8 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_7 == ml_backend__ml_tailcall__CastY_8);
    if (ml_backend__ml_tailcall__succeeded)
      ml_backend__ml_tailcall__succeeded = MR_TRUE;
    else
    {
      MR_Word ml_backend__ml_tailcall__TypeInfo_9_9;
      MR_Word ml_backend__ml_tailcall__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tailcall__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tailcall__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ml_backend__ml_tailcall__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));

      ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__ArgX1_3 == ml_backend__ml_tailcall__ArgY1_4);
      if (ml_backend__ml_tailcall__succeeded)
      {
        ml_backend__ml_tailcall__TypeInfo_9_9 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0];
        ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_9_9, ((MR_Box) (ml_backend__ml_tailcall__ArgX2_5)), ((MR_Box) (ml_backend__ml_tailcall__ArgY2_6)));
      }
    }
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_info_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Integer ml_backend__ml_tailcall__CastX_18 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
    MR_Integer ml_backend__ml_tailcall__CastY_19 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_18 == ml_backend__ml_tailcall__CastY_19);
    if (ml_backend__ml_tailcall__succeeded)
      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ml_backend__ml_tailcall__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tailcall__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tailcall__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_tailcall__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_tailcall__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ml_backend__ml_tailcall__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ml_backend__ml_tailcall__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ml_backend__ml_tailcall__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ml_backend__ml_tailcall__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ml_backend__ml_tailcall__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ml_backend__ml_tailcall__Var_14;

      hlds__hlds_module____Compare____module_info_0_0(&ml_backend__ml_tailcall__Var_14, ml_backend__ml_tailcall__ArgX1_4, ml_backend__ml_tailcall__ArgY1_5);
      ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_14 == (MR_Integer) 0);
      ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
      if (ml_backend__ml_tailcall__succeeded)
        *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__Var_14;
      else
      {
        MR_Word ml_backend__ml_tailcall__Var_15;

        ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_tailcall__Var_15, ml_backend__ml_tailcall__ArgX2_6, ml_backend__ml_tailcall__ArgY2_7);
        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_15 == (MR_Integer) 0);
        ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
        if (ml_backend__ml_tailcall__succeeded)
          *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__Var_15;
        else
        {
          MR_Word ml_backend__ml_tailcall__Var_16;

          ml_backend__mlds____Compare____mlds_function_name_0_0(&ml_backend__ml_tailcall__Var_16, ml_backend__ml_tailcall__ArgX3_8, ml_backend__ml_tailcall__ArgY3_9);
          ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_16 == (MR_Integer) 0);
          ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
          if (ml_backend__ml_tailcall__succeeded)
            *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__Var_16;
          else
          {
            MR_Word ml_backend__ml_tailcall__Var_17;
            MR_Integer ml_backend__ml_tailcall__Var_25 = (MR_Integer) ml_backend__ml_tailcall__ArgX4_10;
            MR_Integer ml_backend__ml_tailcall__Var_26 = (MR_Integer) ml_backend__ml_tailcall__ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_tailcall__Var_17, ml_backend__ml_tailcall__Var_25, ml_backend__ml_tailcall__Var_26);
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_17 == (MR_Integer) 0);
            ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
            if (ml_backend__ml_tailcall__succeeded)
              *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__Var_17;
            else
            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[2], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__ArgX5_12)), ((MR_Box) (ml_backend__ml_tailcall__ArgY5_13)));
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_info_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Integer ml_backend__ml_tailcall__CastX_13 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
    MR_Integer ml_backend__ml_tailcall__CastY_14 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_13 == ml_backend__ml_tailcall__CastY_14);
    if (ml_backend__ml_tailcall__succeeded)
      ml_backend__ml_tailcall__succeeded = MR_TRUE;
    else
    {
      MR_Word ml_backend__ml_tailcall__TypeInfo_18_18;
      MR_Word ml_backend__ml_tailcall__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tailcall__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tailcall__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ml_backend__ml_tailcall__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_tailcall__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ml_backend__ml_tailcall__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ml_backend__ml_tailcall__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ml_backend__ml_tailcall__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ml_backend__ml_tailcall__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ml_backend__ml_tailcall__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 4)));

      ml_backend__ml_tailcall__succeeded = hlds__hlds_module____Unify____module_info_0_0(ml_backend__ml_tailcall__ArgX1_3, ml_backend__ml_tailcall__ArgY1_4);
      if (ml_backend__ml_tailcall__succeeded)
      {
        ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_tailcall__ArgX2_5, ml_backend__ml_tailcall__ArgY2_6);
        if (ml_backend__ml_tailcall__succeeded)
        {
          ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_function_name_0_0(ml_backend__ml_tailcall__ArgX3_7, ml_backend__ml_tailcall__ArgY3_8);
          if (ml_backend__ml_tailcall__succeeded)
          {
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__ArgX4_9 == ml_backend__ml_tailcall__ArgY4_10);
            if (ml_backend__ml_tailcall__succeeded)
            {
              ml_backend__ml_tailcall__TypeInfo_18_18 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[2];
              ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_18_18, ((MR_Box) (ml_backend__ml_tailcall__ArgX5_11)), ((MR_Box) (ml_backend__ml_tailcall__ArgY5_12)));
            }
          }
        }
      }
    }
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
{
  {
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__Cast_HeadVar1_4, ml_backend__ml_tailcall__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__HeadVar__2_1 == ml_backend__ml_tailcall__HeadVar__2_2);

    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
{
  {
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__Cast_HeadVar1_4, ml_backend__ml_tailcall__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__HeadVar__2_1 == ml_backend__ml_tailcall__HeadVar__2_2);

    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____found_recursive_call_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
{
  {
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
    MR_Integer ml_backend__ml_tailcall__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__Cast_HeadVar1_4, ml_backend__ml_tailcall__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____found_recursive_call_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__2_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__HeadVar__2_1 == ml_backend__ml_tailcall__HeadVar__2_2);

    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Integer ml_backend__ml_tailcall__CastX_10 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
    MR_Integer ml_backend__ml_tailcall__CastY_11 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_10 == ml_backend__ml_tailcall__CastY_11);
    if (ml_backend__ml_tailcall__succeeded)
      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ml_backend__ml_tailcall__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__ml_tailcall__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__ml_tailcall__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_tailcall__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ml_backend__ml_tailcall__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_tailcall__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[1], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__Var_13)), ((MR_Box) (ml_backend__ml_tailcall__ArgY1_5)));
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
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Integer ml_backend__ml_tailcall__CastX_9 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
    MR_Integer ml_backend__ml_tailcall__CastY_10 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_9 == ml_backend__ml_tailcall__CastY_10);
    if (ml_backend__ml_tailcall__succeeded)
      ml_backend__ml_tailcall__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ml_backend__ml_tailcall__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ml_backend__ml_tailcall__CastX_5 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
                MR_Integer ml_backend__ml_tailcall__CastY_6 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

                ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastY_6 == ml_backend__ml_tailcall__CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ml_backend__ml_tailcall__CastX_7 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
                MR_Integer ml_backend__ml_tailcall__CastY_8 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

                ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastY_8 == ml_backend__ml_tailcall__CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_tailcall__TypeInfo_11_11;
            MR_Word ml_backend__ml_tailcall__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tailcall__ArgY1_4;

            ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_tailcall__succeeded)
            {
              ml_backend__ml_tailcall__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
              ml_backend__ml_tailcall__TypeInfo_11_11 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[1];
              ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_11_11, ((MR_Box) (ml_backend__ml_tailcall__ArgX1_3)), ((MR_Box) (ml_backend__ml_tailcall__ArgY1_4)));
            }
          }
          break;
      }
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_function_defn_7_p_0(
  MR_Word ml_backend__ml_tailcall__ModuleInfo_8,
  MR_Word ml_backend__ml_tailcall__ModuleName_9,
  MR_Word ml_backend__ml_tailcall__WarnTailCalls_10,
  MR_Word ml_backend__ml_tailcall__FuncDefn0_11,
  MR_Word * ml_backend__ml_tailcall__FuncDefn_12,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_Specs_0_36,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_Specs_37)
{
  {
    MR_Word ml_backend__ml_tailcall__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FuncDefn0_11, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FuncDefn0_11, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Flags_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FuncDefn0_11, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__MaybePredProcId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FuncDefn0_11, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__Params_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FuncDefn0_11, (MR_Integer) 4)));
    MR_Word ml_backend__ml_tailcall__FuncBody0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FuncDefn0_11, (MR_Integer) 5)));
    MR_Word ml_backend__ml_tailcall__Attributes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FuncDefn0_11, (MR_Integer) 6)));
    MR_Word ml_backend__ml_tailcall__EnvVarNames_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FuncDefn0_11, (MR_Integer) 7)));
    MR_Word ml_backend__ml_tailcall__MaybeRequireTailrecInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FuncDefn0_11, (MR_Integer) 8)));

    if ((ml_backend__ml_tailcall__FuncBody0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ml_backend__ml_tailcall__FuncDefn_12 = ml_backend__ml_tailcall__FuncDefn0_11;
      *ml_backend__ml_tailcall__STATE_VARIABLE_Specs_37 = ml_backend__ml_tailcall__STATE_VARIABLE_Specs_0_36;
    }
    else
    {
      MR_Word ml_backend__ml_tailcall__BodyStmt0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__FuncBody0_19, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tailcall__RetTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Params_18, (MR_Integer) 1)));
      MR_Word ml_backend__ml_tailcall__AtTailAfter_26;
      MR_Word ml_backend__ml_tailcall__TCallInfo_29;
      MR_Word ml_backend__ml_tailcall__InBodyInfo0_30;
      MR_Word ml_backend__ml_tailcall__BodyStmt_32;
      MR_Word ml_backend__ml_tailcall__InBodyInfo_33;
      MR_Word ml_backend__ml_tailcall__FoundRecCall_34;
      MR_Word ml_backend__ml_tailcall__FuncBody_35;
      MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_Specs_40_40;
      MR_Word ml_backend__ml_tailcall___Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Params_18, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tailcall___AtTailBefore_31;

      if ((ml_backend__ml_tailcall__RetTypes_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__ml_tailcall__AtTailAfter_26 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_5[0]);
      }
      else
        ml_backend__ml_tailcall__AtTailAfter_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      {
        ml_backend__ml_tailcall__TCallInfo_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_29, 0) = ((MR_Box) (ml_backend__ml_tailcall__ModuleInfo_8));
        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_29, 1) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_9));
        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_29, 2) = ((MR_Box) (ml_backend__ml_tailcall__Name_14));
        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_29, 3) = ((MR_Box) (ml_backend__ml_tailcall__WarnTailCalls_10));
        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_29, 4) = ((MR_Box) (ml_backend__ml_tailcall__MaybeRequireTailrecInfo_22));
      }
      {
        ml_backend__ml_tailcall__InBodyInfo0_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__InBodyInfo0_30, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__InBodyInfo0_30, 1) = ((MR_Box) (ml_backend__ml_tailcall__STATE_VARIABLE_Specs_0_36));
      }
      ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_29, ml_backend__ml_tailcall__AtTailAfter_26, &ml_backend__ml_tailcall___AtTailBefore_31, ml_backend__ml_tailcall__BodyStmt0_23, &ml_backend__ml_tailcall__BodyStmt_32, ml_backend__ml_tailcall__InBodyInfo0_30, &ml_backend__ml_tailcall__InBodyInfo_33);
      ml_backend__ml_tailcall__FoundRecCall_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__InBodyInfo_33, (MR_Integer) 0)));
      ml_backend__ml_tailcall__STATE_VARIABLE_Specs_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__InBodyInfo_33, (MR_Integer) 1)));
      {
        ml_backend__ml_tailcall__FuncBody_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__FuncBody_35, 0) = ((MR_Box) (ml_backend__ml_tailcall__BodyStmt_32));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
        *ml_backend__ml_tailcall__FuncDefn_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_15));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Flags_16));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__MaybePredProcId_17));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Params_18));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__FuncBody_35));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_tailcall__Attributes_20));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_tailcall__EnvVarNames_21));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_tailcall__MaybeRequireTailrecInfo_22));
      }
      switch (ml_backend__ml_tailcall__FoundRecCall_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *ml_backend__ml_tailcall__STATE_VARIABLE_Specs_37 = ml_backend__ml_tailcall__STATE_VARIABLE_Specs_40_40;
          break;
        case (MR_Integer) 1:
          if ((ml_backend__ml_tailcall__MaybeRequireTailrecInfo_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *ml_backend__ml_tailcall__STATE_VARIABLE_Specs_37 = ml_backend__ml_tailcall__STATE_VARIABLE_Specs_40_40;
          else
          {
            MR_Word ml_backend__ml_tailcall__RequireTailrecInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeRequireTailrecInfo_22, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tailcall__Context_50;

            if (((MR_tag((MR_Word) ml_backend__ml_tailcall__RequireTailrecInfo_49)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ml_backend__ml_tailcall__Var_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_49, (MR_Integer) 0)))) & (MR_Integer) 1);
              MR_Word ml_backend__ml_tailcall__Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_49, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

              ml_backend__ml_tailcall__Context_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_49, (MR_Integer) 1)));
            }
            else
              ml_backend__ml_tailcall__Context_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__RequireTailrecInfo_49, (MR_Integer) 0)));
            if ((ml_backend__ml_tailcall__MaybePredProcId_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *ml_backend__ml_tailcall__STATE_VARIABLE_Specs_37 = ml_backend__ml_tailcall__STATE_VARIABLE_Specs_40_40;
            else
            {
              MR_Word ml_backend__ml_tailcall__PredId_53;
              MR_Word ml_backend__ml_tailcall__PredInfo_55;
              MR_Word ml_backend__ml_tailcall__PredOrFunc_56;
              MR_String ml_backend__ml_tailcall__PredName_57;
              MR_Integer ml_backend__ml_tailcall__PredArity_58;
              MR_Word ml_backend__ml_tailcall__PredSymName_59;
              MR_Word ml_backend__ml_tailcall__SimpleCallId_60;
              MR_Word ml_backend__ml_tailcall__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybePredProcId_17, (MR_Integer) 0)));
              MR_Integer ml_backend__ml_tailcall__Var_54;

              ml_backend__ml_tailcall__PredId_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_61, (MR_Integer) 0)));
              ml_backend__ml_tailcall__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_61, (MR_Integer) 1)));
              hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_tailcall__ModuleInfo_8, ml_backend__ml_tailcall__PredId_53, &ml_backend__ml_tailcall__PredInfo_55);
              ml_backend__ml_tailcall__PredOrFunc_56 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_tailcall__PredInfo_55);
              hlds__hlds_pred__pred_info_get_name_2_p_0(ml_backend__ml_tailcall__PredInfo_55, &ml_backend__ml_tailcall__PredName_57);
              hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(ml_backend__ml_tailcall__PredInfo_55, &ml_backend__ml_tailcall__PredArity_58);
              {
                ml_backend__ml_tailcall__PredSymName_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredSymName_59, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredName_57));
              }
              {
                ml_backend__ml_tailcall__SimpleCallId_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_60, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredOrFunc_56));
                MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_60, 1) = ((MR_Box) (ml_backend__ml_tailcall__PredSymName_59));
                MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_60, 2) = ((MR_Box) (ml_backend__ml_tailcall__PredArity_58));
              }
              hlds__mark_tail_calls__add_message_for_no_tail_or_nontail_recursive_calls_4_p_0(ml_backend__ml_tailcall__SimpleCallId_60, ml_backend__ml_tailcall__Context_50, ml_backend__ml_tailcall__STATE_VARIABLE_Specs_40_40, ml_backend__ml_tailcall__STATE_VARIABLE_Specs_37);
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_default_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_9,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
  MR_Word ml_backend__ml_tailcall__Default0_11,
  MR_Word * ml_backend__ml_tailcall__Default_12,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_16,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_17)
{
  switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Default0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *ml_backend__ml_tailcall__AtTailBefore_10 = ml_backend__ml_tailcall__AtTailAfter_9;
        *ml_backend__ml_tailcall__Default_12 = ml_backend__ml_tailcall__Default0_11;
        *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_17 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_16;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__ml_tailcall__Statement0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Default0_11, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__Statement_15;

        ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter_9, ml_backend__ml_tailcall__AtTailBefore_10, ml_backend__ml_tailcall__Statement0_14, &ml_backend__ml_tailcall__Statement_15, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_16, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_tailcall__Default_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Statement_15));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_cases_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_2,
  MR_Word * ml_backend__ml_tailcall__HeadVar__3_3,
  MR_Word ml_backend__ml_tailcall__HeadVar__4_4,
  MR_Word * ml_backend__ml_tailcall__HeadVar__5_5,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_6,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_7)
{
  if ((ml_backend__ml_tailcall__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ml_backend__ml_tailcall__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_7 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_6;
  }
  else
  {
    MR_Word ml_backend__ml_tailcall__AtTailBefore_15;
    MR_Word ml_backend__ml_tailcall__AtTailBefores_16;
    MR_Word ml_backend__ml_tailcall__Case0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__4_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Cases0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__4_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Case_19;
    MR_Word ml_backend__ml_tailcall__Cases_20;
    MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_24_24;
    MR_Word ml_backend__ml_tailcall__FirstCond_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_17, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__LaterConds_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_17, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Statement0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_17, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__Statement_37;

    ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_1, ml_backend__ml_tailcall__AtTailAfter_2, &ml_backend__ml_tailcall__AtTailBefore_15, ml_backend__ml_tailcall__Statement0_36, &ml_backend__ml_tailcall__Statement_37, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_6, &ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_24_24);
    {
      ml_backend__ml_tailcall__Case_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case_19, 0) = ((MR_Box) (ml_backend__ml_tailcall__FirstCond_34));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case_19, 1) = ((MR_Box) (ml_backend__ml_tailcall__LaterConds_35));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case_19, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_37));
    }
    ml_backend__ml_tailcall__mark_tailcalls_in_cases_7_p_0(ml_backend__ml_tailcall__TCallInfo_1, ml_backend__ml_tailcall__AtTailAfter_2, &ml_backend__ml_tailcall__AtTailBefores_16, ml_backend__ml_tailcall__Cases0_18, &ml_backend__ml_tailcall__Cases_20, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_24_24, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_tailcall__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__AtTailBefore_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__AtTailBefores_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_tailcall__HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Case_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Cases_20));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_2(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;

    ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__385__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1));
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
    MR_Word ml_backend__ml_tailcall__conv1_FuncDefn_12;
    MR_Word ml_backend__ml_tailcall__conv0_STATE_VARIABLE_Specs_37;

    ml_backend__ml_tailcall__mark_tailcalls_in_function_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv1_FuncDefn_12, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3), &ml_backend__ml_tailcall__conv0_STATE_VARIABLE_Specs_37);
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv1_FuncDefn_12));
    *ml_backend__ml_tailcall__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_tailcall__conv0_STATE_VARIABLE_Specs_37));
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word ml_backend__ml_tailcall__AtTailAfter0_9,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
  MR_Word ml_backend__ml_tailcall__Stmt0_11,
  MR_Word * ml_backend__ml_tailcall__Stmt_12,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_73,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_74)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Stmt0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_tailcall__TypeCtorInfo_113_113;
          MR_Word ml_backend__ml_tailcall__LocalVarDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__FuncDefns0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__Stmts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 3)));
          MR_Word ml_backend__ml_tailcall__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__WarnTailCalls_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 3)));
          MR_Word ml_backend__ml_tailcall__Specs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_73, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__FuncDefns_22;
          MR_Word ml_backend__ml_tailcall__Specs_23;
          MR_Word ml_backend__ml_tailcall__Stmts_24;
          MR_Word ml_backend__ml_tailcall__Var_85;
          MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_86_86;
          MR_Word ml_backend__ml_tailcall__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 4)));
          MR_Word ml_backend__ml_tailcall__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_73, (MR_Integer) 0)));
          MR_Box ml_backend__ml_tailcall__conv2_Specs_23;
          MR_Word ml_backend__ml_tailcall__Var_107;
          MR_Word ml_backend__ml_tailcall__Var_108;

          {
            ml_backend__ml_tailcall__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_85, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_85, 1) = ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_85, 3) = ((MR_Box) (ml_backend__ml_tailcall__ModuleInfo_18));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_85, 4) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_19));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_85, 5) = ((MR_Box) (ml_backend__ml_tailcall__WarnTailCalls_20));
          }
          ml_backend__ml_tailcall__TypeCtorInfo_113_113 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
          mercury__list__map_foldl_5_p_0(ml_backend__ml_tailcall__TypeCtorInfo_113_113, ml_backend__ml_tailcall__TypeCtorInfo_113_113, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__Var_85, ml_backend__ml_tailcall__FuncDefns0_15, &ml_backend__ml_tailcall__FuncDefns_22, ((MR_Box) (ml_backend__ml_tailcall__Specs0_21)), &ml_backend__ml_tailcall__conv2_Specs_23);
          ml_backend__ml_tailcall__Specs_23 = ((MR_Word) ml_backend__ml_tailcall__conv2_Specs_23);
          ml_backend__ml_tailcall__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_73, (MR_Integer) 0)));
          ml_backend__ml_tailcall__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_73, (MR_Integer) 1)));
          {
            ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_86_86, 0) = ((MR_Box) (ml_backend__ml_tailcall__Var_107));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_86_86, 1) = ((MR_Box) (ml_backend__ml_tailcall__Specs_23));
          }
          ml_backend__ml_tailcall__mark_tailcalls_in_stmts_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, ml_backend__ml_tailcall__AtTailBefore_10, ml_backend__ml_tailcall__Stmts0_16, &ml_backend__ml_tailcall__Stmts_24, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_86_86, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_74);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_tailcall__Stmt_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__LocalVarDefns_14));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__FuncDefns_22));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Stmts_24));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Context_17));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_tailcall__Kind_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Rval_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__Statement0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__AtTailAfter_28;
          MR_Word ml_backend__ml_tailcall__AtTailBefore0_29;
          MR_Word ml_backend__ml_tailcall__Statement_30;
          MR_Word ml_backend__ml_tailcall__Context_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 3)));

          ml_backend__ml_tailcall__not_at_tail_2_p_0(ml_backend__ml_tailcall__AtTailAfter0_9, &ml_backend__ml_tailcall__AtTailAfter_28);
          ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter_28, &ml_backend__ml_tailcall__AtTailBefore0_29, ml_backend__ml_tailcall__Statement0_27, &ml_backend__ml_tailcall__Statement_30, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_73, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_74);
          ml_backend__ml_tailcall__not_at_tail_2_p_0(ml_backend__ml_tailcall__AtTailBefore0_29, ml_backend__ml_tailcall__AtTailBefore_10);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_tailcall__Stmt_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Kind_25));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Rval_26));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_30));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Context_88));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_tailcall__Cond_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Then0_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__MaybeElse0_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__AtTailBeforeThen_34;
          MR_Word ml_backend__ml_tailcall__Then_35;
          MR_Word ml_backend__ml_tailcall__AtTailBeforeElse_36;
          MR_Word ml_backend__ml_tailcall__MaybeElse_37;
          MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_82_82;
          MR_Word ml_backend__ml_tailcall__Context_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 3)));

          ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, &ml_backend__ml_tailcall__AtTailBeforeThen_34, ml_backend__ml_tailcall__Then0_32, &ml_backend__ml_tailcall__Then_35, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_73, &ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_82_82);
          ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, &ml_backend__ml_tailcall__AtTailBeforeElse_36, ml_backend__ml_tailcall__MaybeElse0_33, &ml_backend__ml_tailcall__MaybeElse_37, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_82_82, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_74);
          ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeThen_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (!(ml_backend__ml_tailcall__succeeded))
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeElse_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (ml_backend__ml_tailcall__succeeded)
            *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_tailcall__Stmt_12 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Cond_31));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Then_35));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__MaybeElse_37));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Context_89));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_tailcall__Type_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 1)));
              MR_Word ml_backend__ml_tailcall__Val_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 2)));
              MR_Word ml_backend__ml_tailcall__Range_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 3)));
              MR_Word ml_backend__ml_tailcall__Cases0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 4)));
              MR_Word ml_backend__ml_tailcall__Default0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 5)));
              MR_Word ml_backend__ml_tailcall__AtTailBeforeCases_43;
              MR_Word ml_backend__ml_tailcall__Cases_44;
              MR_Word ml_backend__ml_tailcall__AtTailBeforeDefault_45;
              MR_Word ml_backend__ml_tailcall__Default_46;
              MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_78_78;
              MR_Word ml_backend__ml_tailcall__Context_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 6)));

              ml_backend__ml_tailcall__mark_tailcalls_in_cases_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, &ml_backend__ml_tailcall__AtTailBeforeCases_43, ml_backend__ml_tailcall__Cases0_41, &ml_backend__ml_tailcall__Cases_44, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_73, &ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_78_78);
              ml_backend__ml_tailcall__mark_tailcalls_in_default_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, &ml_backend__ml_tailcall__AtTailBeforeDefault_45, ml_backend__ml_tailcall__Default0_42, &ml_backend__ml_tailcall__Default_46, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_78_78, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_74);
              {
                MR_Word ml_backend__ml_tailcall__Var_47;
                MR_Box ml_backend__ml_tailcall__conv3_Var_47;

                ml_backend__ml_tailcall__succeeded = mercury__list__find_first_match_3_p_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0, (MR_Word) &ml_backend__ml_tailcall_scalar_common_4[0], ml_backend__ml_tailcall__AtTailBeforeCases_43, &ml_backend__ml_tailcall__conv3_Var_47);
                if (ml_backend__ml_tailcall__succeeded)
                {
                  ml_backend__ml_tailcall__Var_47 = ((MR_Word) ml_backend__ml_tailcall__conv3_Var_47);
                  ml_backend__ml_tailcall__succeeded = MR_TRUE;
                }
              }
              if (!(ml_backend__ml_tailcall__succeeded))
                ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeDefault_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (ml_backend__ml_tailcall__succeeded)
                *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_tailcall__Stmt_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Type_38));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Val_39));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Range_40));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Cases_44));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__Default_46));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_tailcall__Context_90));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *ml_backend__ml_tailcall__AtTailBefore_10 = ml_backend__ml_tailcall__AtTailAfter0_9;
              *ml_backend__ml_tailcall__Stmt_12 = ml_backend__ml_tailcall__Stmt0_11;
              *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_74 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_73;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              ml_backend__ml_tailcall__not_at_tail_2_p_0(ml_backend__ml_tailcall__AtTailAfter0_9, ml_backend__ml_tailcall__AtTailBefore_10);
              *ml_backend__ml_tailcall__Stmt_12 = ml_backend__ml_tailcall__Stmt0_11;
              *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_74 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_73;
            }
            break;
          case (MR_Integer) 4:
            ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, ml_backend__ml_tailcall__AtTailBefore_10, ml_backend__ml_tailcall__Stmt0_11, ml_backend__ml_tailcall__Stmt_12, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_73, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_74);
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_tailcall__ReturnVals_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 1)));
              MR_Word ml_backend__ml_tailcall___Context_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_tailcall__AtTailBefore_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__ReturnVals_71));
              }
              *ml_backend__ml_tailcall__Stmt_12 = ml_backend__ml_tailcall__Stmt0_11;
              *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_74 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_73;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_tailcall__Ref_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 1)));
              MR_Word ml_backend__ml_tailcall__Handler0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 3)));
              MR_Word ml_backend__ml_tailcall__Handler_59;
              MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_75_75;
              MR_Word ml_backend__ml_tailcall__Context_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 4)));
              MR_Word ml_backend__ml_tailcall__Statement0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 2)));
              MR_Word ml_backend__ml_tailcall__Statement_93;
              MR_Word ml_backend__ml_tailcall__Var_57;
              MR_Word ml_backend__ml_tailcall__Var_58;

              ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, &ml_backend__ml_tailcall__Var_57, ml_backend__ml_tailcall__Statement0_92, &ml_backend__ml_tailcall__Statement_93, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_73, &ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_75_75);
              ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, &ml_backend__ml_tailcall__Var_58, ml_backend__ml_tailcall__Handler0_56, &ml_backend__ml_tailcall__Handler_59, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_75_75, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_74);
              *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_tailcall__Stmt_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Ref_55));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_93));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Handler_59));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Context_91));
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
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_2,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_3,
  MR_Word ml_backend__ml_tailcall__HeadVar__4_4,
  MR_Word * ml_backend__ml_tailcall__HeadVar__5_5,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_6,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_7)
{
  if ((ml_backend__ml_tailcall__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ml_backend__ml_tailcall__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_7 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_6;
    *ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_3 = ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_2;
  }
  else
  {
    MR_Word ml_backend__ml_tailcall__Stmt0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__4_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Stmts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__4_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Stmt_19;
    MR_Word ml_backend__ml_tailcall__Stmts_20;
    MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_26_26;
    MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_27_27;

    ml_backend__ml_tailcall__mark_tailcalls_in_stmts_7_p_0(ml_backend__ml_tailcall__TCallInfo_1, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_2, &ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_26_26, ml_backend__ml_tailcall__Stmts0_18, &ml_backend__ml_tailcall__Stmts_20, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_6, &ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_27_27);
    ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_1, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_26_26, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_3, ml_backend__ml_tailcall__Stmt0_17, &ml_backend__ml_tailcall__Stmt_19, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_27_27, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_tailcall__HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Stmts_20));
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_15,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_16,
  MR_Word ml_backend__ml_tailcall__MaybeStatement0_10,
  MR_Word * ml_backend__ml_tailcall__MaybeStatement_11,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_17,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_18)
{
  if ((ml_backend__ml_tailcall__MaybeStatement0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ml_backend__ml_tailcall__MaybeStatement_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_16 = ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_15;
    *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_18 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_17;
  }
  else
  {
    MR_Word ml_backend__ml_tailcall__Statement0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeStatement0_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Statement_14;

    ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_15, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_16, ml_backend__ml_tailcall__Statement0_13, &ml_backend__ml_tailcall__Statement_14, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_17, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_tailcall__MaybeStatement_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Statement_14));
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_9,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
  MR_Word ml_backend__ml_tailcall__Stmt0_11,
  MR_Word * ml_backend__ml_tailcall__Stmt_12,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_26,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_27)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__Sig_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__CalleeRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__CallReturnLvals_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 4)));
    MR_Word ml_backend__ml_tailcall__CallKind0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 5)));
    MR_Word ml_backend__ml_tailcall__Markers_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 6)));
    MR_Word ml_backend__ml_tailcall__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 7)));
    MR_Word ml_backend__ml_tailcall__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__FuncName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_tailcall__CalleeCodeAddr_23;
    MR_Word ml_backend__ml_tailcall__Var_28;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CallKind0_18 == (MR_Integer) 2);
    if (ml_backend__ml_tailcall__succeeded)
    {
      ml_backend__ml_tailcall__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_tailcall__CalleeRval_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__CalleeRval_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (ml_backend__ml_tailcall__succeeded)
      {
        ml_backend__ml_tailcall__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__CalleeRval_15, (MR_Integer) 1)));
        ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__Var_28)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_tailcall__succeeded)
        {
          ml_backend__ml_tailcall__CalleeCodeAddr_23 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__Var_28), (MR_Integer) 1);
          ml_backend__ml_tailcall__succeeded = ml_backend__ml_util__code_address_is_for_this_function_3_p_0(ml_backend__ml_tailcall__CalleeCodeAddr_23, ml_backend__ml_tailcall__ModuleName_21, ml_backend__ml_tailcall__FuncName_22);
        }
      }
    }
    if (ml_backend__ml_tailcall__succeeded)
    {
      MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29_29;
      MR_Word ml_backend__ml_tailcall__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_26, (MR_Integer) 1)));
      MR_Word ml_backend__ml_tailcall__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_26, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tailcall__ReturnStmtRvals_24;
      MR_Word ml_backend__ml_tailcall__Var_31;

      {
        ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29_29, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29_29, 1) = ((MR_Box) (ml_backend__ml_tailcall__Var_43));
      }
      ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter_9)) == (MR_mktag((MR_Integer) 1)));
      if (ml_backend__ml_tailcall__succeeded)
      {
        ml_backend__ml_tailcall__ReturnStmtRvals_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__AtTailAfter_9, (MR_Integer) 0)));
        ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall__call_returns_same_local_lvals_as_return_stmt_2_p_0(ml_backend__ml_tailcall__ReturnStmtRvals_24, ml_backend__ml_tailcall__CallReturnLvals_17);
        if (ml_backend__ml_tailcall__succeeded)
        {
          ml_backend__ml_tailcall__Var_31 = ml_backend__ml_tailcall__may_rvals_yield_dangling_stack_ref_1_f_0(ml_backend__ml_tailcall__Args_16);
          ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_31 == (MR_Integer) 1);
        }
      }
      if (ml_backend__ml_tailcall__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_tailcall__Stmt_12 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Sig_14));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__CalleeRval_15));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Args_16));
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__CallReturnLvals_17));
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_tailcall__Markers_19));
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ml_backend__ml_tailcall__Context_20));
        }
        *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_27 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29_29;
      }
      else
      {
        switch (MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_tailcall__AtTailAfter_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_27 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29_29;
                break;
              case (MR_Integer) 1:
                ml_backend__ml_tailcall__maybe_warn_tailcalls_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__CalleeCodeAddr_23, ml_backend__ml_tailcall__Markers_19, ml_backend__ml_tailcall__Context_20, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29_29, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_27);
                break;
            }
            break;
          case (MR_Integer) 1:
            ml_backend__ml_tailcall__maybe_warn_tailcalls_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__CalleeCodeAddr_23, ml_backend__ml_tailcall__Markers_19, ml_backend__ml_tailcall__Context_20, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29_29, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_27);
            break;
        }
        *ml_backend__ml_tailcall__Stmt_12 = ml_backend__ml_tailcall__Stmt0_11;
        *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    }
    else
    {
      *ml_backend__ml_tailcall__Stmt_12 = ml_backend__ml_tailcall__Stmt0_11;
      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ml_backend__ml_tailcall__AtTailAfter_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              break;
          }
          break;
        case (MR_Integer) 1:
          *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          break;
      }
      *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_27 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_26;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tailcall__may_rvals_yield_dangling_stack_ref_1_f_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word ml_backend__ml_tailcall__HeadVar__2_2;

      if ((ml_backend__ml_tailcall__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word ml_backend__ml_tailcall__Rval_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__Rvals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRef0_6;

        ml_backend__ml_tailcall__MayYieldDanglingStackRef0_6 = ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_1_f_0(ml_backend__ml_tailcall__Rval_3);
        switch (ml_backend__ml_tailcall__MayYieldDanglingStackRef0_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_tailcall__next_value_of_HeadVar__1_1 = ml_backend__ml_tailcall__Rvals_4;

                ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
        }
      }
      return ml_backend__ml_tailcall__HeadVar__2_2;
    }
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_1_f_0(
  MR_Word ml_backend__ml_tailcall__Rval_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ml_backend__ml_tailcall__succeeded;
      MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRef_4;

      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_tailcall__SubRval_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 2)));
                MR_Integer ml_backend__ml_tailcall___Tag_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_tailcall__next_value_of_Rval_3 = ml_backend__ml_tailcall__SubRval_7;

                  ml_backend__ml_tailcall__Rval_3 = ml_backend__ml_tailcall__next_value_of_Rval_3;
                }
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_tailcall__Const_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Const_8)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ml_backend__ml_tailcall__MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ml_backend__ml_tailcall__CodeAddr_24 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__Const_8), (MR_Integer) 1);
                      MR_Word ml_backend__ml_tailcall__QualFuncLabel_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_24, (MR_Integer) 0)));
                      MR_Word ml_backend__ml_tailcall__FuncLabel_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualFuncLabel_54, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_tailcall__MaybeAux_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FuncLabel_57, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_tailcall___Signature_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_24, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_tailcall___ModuleName_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualFuncLabel_54, (MR_Integer) 0)));
                      MR_Word ml_backend__ml_tailcall___ProcLabel_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FuncLabel_57, (MR_Integer) 0)));

                      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__MaybeAux_59)) {
                        default:
                          ml_backend__ml_tailcall__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(ml_backend__ml_tailcall__MaybeAux_59)) {
                            default:
                              ml_backend__ml_tailcall__succeeded = MR_FALSE;
                              break;
                            case (MR_Integer) 1:
                              ml_backend__ml_tailcall__succeeded = MR_TRUE;
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          ml_backend__ml_tailcall__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          ml_backend__ml_tailcall__succeeded = MR_TRUE;
                          break;
                      }
                      if (ml_backend__ml_tailcall__succeeded)
                        ml_backend__ml_tailcall__MayYieldDanglingStackRef_4 = (MR_Integer) 0;
                      else
                        ml_backend__ml_tailcall__MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                    }
                    break;
                  case (MR_Integer) 2:
                    ml_backend__ml_tailcall__MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Const_8, (MR_Integer) 0)))) {
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
                        ml_backend__ml_tailcall__MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 14:
                        ml_backend__ml_tailcall__MayYieldDanglingStackRef_4 = (MR_Integer) 0;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ml_backend__ml_tailcall__SubRval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 2)));
                MR_Word ml_backend__ml_tailcall___Op_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_tailcall__next_value_of_Rval_3 = ml_backend__ml_tailcall__SubRval_19;

                  ml_backend__ml_tailcall__Rval_3 = ml_backend__ml_tailcall__next_value_of_Rval_3;
                }
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ml_backend__ml_tailcall__SubRvalA_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 2)));
                MR_Word ml_backend__ml_tailcall__SubRvalB_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 3)));
                MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRefA_12;
                MR_Word ml_backend__ml_tailcall___Op_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 1)));

                ml_backend__ml_tailcall__MayYieldDanglingStackRefA_12 = ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_1_f_0(ml_backend__ml_tailcall__SubRvalA_10);
                switch (ml_backend__ml_tailcall__MayYieldDanglingStackRefA_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ml_backend__ml_tailcall__MayYieldDanglingStackRef_4 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ml_backend__ml_tailcall__next_value_of_Rval_3 = ml_backend__ml_tailcall__SubRvalB_11;

                        ml_backend__ml_tailcall__Rval_3 = ml_backend__ml_tailcall__next_value_of_Rval_3;
                      }
                      continue;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ml_backend__ml_tailcall__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Lval_13)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ml_backend__ml_tailcall__Rval_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_13, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_tailcall___MaybeTag_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_13, (MR_Integer) 0)));
                      MR_Word ml_backend__ml_tailcall___FieldId_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_13, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_tailcall__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_13, (MR_Integer) 3)));
                      MR_Word ml_backend__ml_tailcall__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_13, (MR_Integer) 4)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word ml_backend__ml_tailcall__next_value_of_Rval_3 = ml_backend__ml_tailcall__Rval_67;

                        ml_backend__ml_tailcall__Rval_3 = ml_backend__ml_tailcall__next_value_of_Rval_3;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    ml_backend__ml_tailcall__MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Lval_13, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ml_backend__ml_tailcall__MayYieldDanglingStackRef_4 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        ml_backend__ml_tailcall__MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ml_backend__ml_tailcall__RowRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 2)));
                MR_Word ml_backend__ml_tailcall___VectorCommon_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_tailcall__next_value_of_Rval_3 = ml_backend__ml_tailcall__RowRval_15;

                  ml_backend__ml_tailcall__Rval_3 = ml_backend__ml_tailcall__next_value_of_Rval_3;
                }
                continue;
              }
              break;
            case (MR_Integer) 6:
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_4 = (MR_Integer) 0;
              break;
          }
          break;
      }
      return ml_backend__ml_tailcall__MayYieldDanglingStackRef_4;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall__call_returns_same_local_lvals_as_return_stmt_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ml_backend__ml_tailcall__succeeded;

      if ((ml_backend__ml_tailcall__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      else
      {
        MR_Word ml_backend__ml_tailcall__ReturnStmtRval_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__ReturnStmtRvals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__CallReturnLval_5;
        MR_Word ml_backend__ml_tailcall__CallReturnLvals_6;
        MR_Word ml_backend__ml_tailcall__Var_9;
        MR_Word ml_backend__ml_tailcall__Var_10;

        ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_tailcall__succeeded)
        {
          ml_backend__ml_tailcall__CallReturnLval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
          ml_backend__ml_tailcall__CallReturnLvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
          ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__ReturnStmtRval_3)) == (MR_mktag((MR_Integer) 2)));
          if (ml_backend__ml_tailcall__succeeded)
          {
            ml_backend__ml_tailcall__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__ReturnStmtRval_3, (MR_Integer) 0)));
            ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_tailcall__CallReturnLval_5, ml_backend__ml_tailcall__Var_10);
            if (ml_backend__ml_tailcall__succeeded)
            {
              ml_backend__ml_tailcall__Var_9 = ml_backend__ml_tailcall__lval_is_local_1_f_0(ml_backend__ml_tailcall__CallReturnLval_5);
              ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_9 == (MR_Integer) 0);
              if (ml_backend__ml_tailcall__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_tailcall__next_value_of_HeadVar__1_1 = ml_backend__ml_tailcall__ReturnStmtRvals_4;
                  MR_Word ml_backend__ml_tailcall__next_value_of_HeadVar__2_2 = ml_backend__ml_tailcall__CallReturnLvals_6;

                  ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__next_value_of_HeadVar__1_1;
                  ml_backend__ml_tailcall__HeadVar__2_2 = ml_backend__ml_tailcall__next_value_of_HeadVar__2_2;
                }
                continue;
              }
            }
          }
        }
      }
      return ml_backend__ml_tailcall__succeeded;
    }
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tailcall__lval_is_local_1_f_0(
  MR_Word ml_backend__ml_tailcall__Lval_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ml_backend__ml_tailcall__succeeded;
      MR_Word ml_backend__ml_tailcall__IsLocal_4;

      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Lval_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_tailcall__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 1)));
            MR_Word ml_backend__ml_tailcall___Tag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tailcall___Field_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 2)));
            MR_Word ml_backend__ml_tailcall__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 3)));
            MR_Word ml_backend__ml_tailcall__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 4)));
            MR_Word ml_backend__ml_tailcall__BaseLval_12;

            ml_backend__ml_tailcall__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_8, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (ml_backend__ml_tailcall__succeeded)
            {
              ml_backend__ml_tailcall__BaseLval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_8, (MR_Integer) 1)));
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_tailcall__next_value_of_Lval_3 = ml_backend__ml_tailcall__BaseLval_12;

                ml_backend__ml_tailcall__Lval_3 = ml_backend__ml_tailcall__next_value_of_Lval_3;
              }
              continue;
            }
            else
              ml_backend__ml_tailcall__IsLocal_4 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          ml_backend__ml_tailcall__IsLocal_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ml_backend__ml_tailcall__IsLocal_4 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              ml_backend__ml_tailcall__IsLocal_4 = (MR_Integer) 1;
              break;
          }
          break;
      }
      return ml_backend__ml_tailcall__IsLocal_4;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__maybe_warn_tailcalls_6_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_7,
  MR_Word ml_backend__ml_tailcall__CodeAddr_8,
  MR_Word ml_backend__ml_tailcall__Markers_9,
  MR_Word ml_backend__ml_tailcall__Context_10,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_42,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_43)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__WarnTailCalls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_7, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__MaybeRequireTailrecInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_7, (MR_Integer) 4)));
    MR_Word ml_backend__ml_tailcall__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_7, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_7, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_7, (MR_Integer) 2)));

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__WarnTailCalls_12 == (MR_Integer) 1);
    if (ml_backend__ml_tailcall__succeeded)
      ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__MaybeRequireTailrecInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ml_backend__ml_tailcall__succeeded)
      *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_43 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_42;
    else
    {
      MR_Word ml_backend__ml_tailcall__WarnOrError_15;

      switch (ml_backend__ml_tailcall__WarnTailCalls_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_tailcall__RequireTailrecInfo_14;
            MR_Word ml_backend__ml_tailcall__TailrecType_16;
            MR_Word ml_backend__ml_tailcall__Var_17;

            ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__MaybeRequireTailrecInfo_13)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_tailcall__succeeded)
            {
              ml_backend__ml_tailcall__RequireTailrecInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeRequireTailrecInfo_13, (MR_Integer) 0)));
              ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__RequireTailrecInfo_14)) == (MR_mktag((MR_Integer) 1)));
              if (ml_backend__ml_tailcall__succeeded)
              {
                ml_backend__ml_tailcall__WarnOrError_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_14, (MR_Integer) 0)))) & (MR_Integer) 1);
                ml_backend__ml_tailcall__TailrecType_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_14, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                ml_backend__ml_tailcall__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_14, (MR_Integer) 1)));
              }
            }
          }
          break;
        case (MR_Integer) 0:
          if ((ml_backend__ml_tailcall__MaybeRequireTailrecInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            ml_backend__ml_tailcall__WarnOrError_15 = (MR_Integer) 0;
            ml_backend__ml_tailcall__succeeded = MR_TRUE;
          }
          else
          {
            MR_Word ml_backend__ml_tailcall__RequireTailrecInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeRequireTailrecInfo_13, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) ml_backend__ml_tailcall__RequireTailrecInfo_46)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ml_backend__ml_tailcall__Var_18;
              MR_Word ml_backend__ml_tailcall__TailrecType_64;

              ml_backend__ml_tailcall__WarnOrError_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_46, (MR_Integer) 0)))) & (MR_Integer) 1);
              ml_backend__ml_tailcall__TailrecType_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_46, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__ml_tailcall__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_46, (MR_Integer) 1)));
              ml_backend__ml_tailcall__succeeded = MR_TRUE;
            }
            else
              ml_backend__ml_tailcall__succeeded = mercury__builtin__false_0_p_0();
          }
          break;
      }
      if (ml_backend__ml_tailcall__succeeded)
      {
        MR_Word ml_backend__ml_tailcall__QualFuncLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_8, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__FuncLabel_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualFuncLabel_20, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__ProcLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FuncLabel_23, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__PredLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_24, (MR_Integer) 0)));
        MR_Integer ml_backend__ml_tailcall__ProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_24, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall___Sig_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_8, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall___ModuleName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualFuncLabel_20, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall___MaybeSeqNum_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__FuncLabel_23, (MR_Integer) 1)));

        if (((MR_tag((MR_Word) ml_backend__ml_tailcall__PredLabel_26)) == (MR_mktag((MR_Integer) 1))))
          *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_43 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_42;
        else
        {
          MR_Word ml_backend__ml_tailcall__PredOrFunc_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_26, (MR_Integer) 0)));
          MR_String ml_backend__ml_tailcall__Name_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_26, (MR_Integer) 2)));
          MR_Integer ml_backend__ml_tailcall__Arity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_26, (MR_Integer) 3)));
          MR_Word ml_backend__ml_tailcall___MaybeModule_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_26, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall___CodeModel_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_26, (MR_Integer) 4)));
          MR_Word ml_backend__ml_tailcall___NonOutputFunc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_26, (MR_Integer) 5)));

          mercury__private_builtin__dummy_var = (MR_Integer) 0;
          ml_backend__ml_tailcall__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0, ml_backend__ml_tailcall__Markers_9, ((MR_Box) ((MR_Integer) 0)));
          if (ml_backend__ml_tailcall__succeeded)
            *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_43 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_42;
          else
          {
            MR_Word ml_backend__ml_tailcall__SymName_38;
            MR_Word ml_backend__ml_tailcall__SimpleCallId_39;
            MR_Word ml_backend__ml_tailcall__Specs0_40;
            MR_Word ml_backend__ml_tailcall__Specs_41;
            MR_Word ml_backend__ml_tailcall__Var_58;
            MR_Word ml_backend__ml_tailcall__Var_59;
            MR_Word ml_backend__ml_tailcall__Var_60;

            {
              ml_backend__ml_tailcall__SymName_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SymName_38, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_34));
            }
            {
              ml_backend__ml_tailcall__SimpleCallId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_39, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredOrFunc_32));
              MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_39, 1) = ((MR_Box) (ml_backend__ml_tailcall__SymName_38));
              MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_39, 2) = ((MR_Box) (ml_backend__ml_tailcall__Arity_35));
            }
            ml_backend__ml_tailcall__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_42, (MR_Integer) 0)));
            ml_backend__ml_tailcall__Specs0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_42, (MR_Integer) 1)));
            hlds__mark_tail_calls__add_message_for_nontail_self_recursive_call_6_p_0(ml_backend__ml_tailcall__SimpleCallId_39, ml_backend__ml_tailcall__ProcId_27, ml_backend__ml_tailcall__Context_10, ml_backend__ml_tailcall__WarnOrError_15, ml_backend__ml_tailcall__Specs0_40, &ml_backend__ml_tailcall__Specs_41);
            ml_backend__ml_tailcall__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_42, (MR_Integer) 0)));
            ml_backend__ml_tailcall__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_42, (MR_Integer) 1)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_43 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Var_59));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Specs_41));
            }
          }
        }
      }
      else
        *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_43 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_42;
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__not_at_tail_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2)
{
  switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ml_backend__ml_tailcall__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          break;
      }
      break;
    case (MR_Integer) 1:
      *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      break;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
    MR_Word ml_backend__ml_tailcall__conv1_FuncDefn_12;
    MR_Word ml_backend__ml_tailcall__conv0_STATE_VARIABLE_Specs_37;

    ml_backend__ml_tailcall__mark_tailcalls_in_function_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv1_FuncDefn_12, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3), &ml_backend__ml_tailcall__conv0_STATE_VARIABLE_Specs_37);
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv1_FuncDefn_12));
    *ml_backend__ml_tailcall__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_tailcall__conv0_STATE_VARIABLE_Specs_37));
  }
}

void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0(
  MR_Word ml_backend__ml_tailcall__Globals_6,
  MR_Word ml_backend__ml_tailcall__ModuleInfo_7,
  MR_Word * ml_backend__ml_tailcall__Specs_8,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_16)
{
  {
    MR_Word ml_backend__ml_tailcall__TypeCtorInfo_54_54;
    MR_Word ml_backend__ml_tailcall__ModuleName_10;
    MR_Word ml_backend__ml_tailcall__WarnTailCallsBool_11;
    MR_Word ml_backend__ml_tailcall__WarnTailCalls_12;
    MR_Word ml_backend__ml_tailcall__FuncDefns0_13;
    MR_Word ml_backend__ml_tailcall__FuncDefns_14;
    MR_Word ml_backend__ml_tailcall__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Var_19;
    MR_Word ml_backend__ml_tailcall__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 4)));
    MR_Word ml_backend__ml_tailcall__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 5)));
    MR_Word ml_backend__ml_tailcall__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 6)));
    MR_Word ml_backend__ml_tailcall__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 7)));
    MR_Word ml_backend__ml_tailcall__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 8)));
    MR_Word ml_backend__ml_tailcall__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 9)));
    MR_Word ml_backend__ml_tailcall__Var_31;
    MR_Word ml_backend__ml_tailcall__Var_32;
    MR_Word ml_backend__ml_tailcall__Var_33;
    MR_Word ml_backend__ml_tailcall__Var_34;
    MR_Word ml_backend__ml_tailcall__Var_35;
    MR_Word ml_backend__ml_tailcall__Var_36;
    MR_Word ml_backend__ml_tailcall__Var_37;
    MR_Word ml_backend__ml_tailcall__Var_38;
    MR_Word ml_backend__ml_tailcall__Var_39;
    MR_Box ml_backend__ml_tailcall__conv2_Specs_8;
    MR_Word ml_backend__ml_tailcall__Var_40;
    MR_Word ml_backend__ml_tailcall__Var_41;
    MR_Word ml_backend__ml_tailcall__Var_42;
    MR_Word ml_backend__ml_tailcall__Var_43;
    MR_Word ml_backend__ml_tailcall__Var_44;
    MR_Word ml_backend__ml_tailcall__Var_45;
    MR_Word ml_backend__ml_tailcall__Var_47;
    MR_Word ml_backend__ml_tailcall__Var_48;
    MR_Word ml_backend__ml_tailcall__Var_49;
    MR_Word ml_backend__ml_tailcall__Var_46;

    ml_backend__ml_tailcall__ModuleName_10 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_tailcall__Var_17);
    libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_tailcall__Globals_6, (MR_Integer) 31, &ml_backend__ml_tailcall__WarnTailCallsBool_11);
    switch (ml_backend__ml_tailcall__WarnTailCallsBool_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_tailcall__WarnTailCalls_12 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_tailcall__WarnTailCalls_12 = (MR_Integer) 0;
        break;
    }
    ml_backend__ml_tailcall__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 0)));
    ml_backend__ml_tailcall__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 1)));
    ml_backend__ml_tailcall__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 2)));
    ml_backend__ml_tailcall__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 3)));
    ml_backend__ml_tailcall__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 4)));
    ml_backend__ml_tailcall__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 5)));
    ml_backend__ml_tailcall__FuncDefns0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 6)));
    ml_backend__ml_tailcall__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 7)));
    ml_backend__ml_tailcall__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 8)));
    ml_backend__ml_tailcall__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 9)));
    {
      ml_backend__ml_tailcall__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_19, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_19, 1) = ((MR_Box) (ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_19, 3) = ((MR_Box) (ml_backend__ml_tailcall__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_19, 4) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_19, 5) = ((MR_Box) (ml_backend__ml_tailcall__WarnTailCalls_12));
    }
    ml_backend__ml_tailcall__TypeCtorInfo_54_54 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
    mercury__list__map_foldl_5_p_0(ml_backend__ml_tailcall__TypeCtorInfo_54_54, ml_backend__ml_tailcall__TypeCtorInfo_54_54, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__Var_19, ml_backend__ml_tailcall__FuncDefns0_13, &ml_backend__ml_tailcall__FuncDefns_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_tailcall__conv2_Specs_8);
    *ml_backend__ml_tailcall__Specs_8 = ((MR_Word) ml_backend__ml_tailcall__conv2_Specs_8);
    ml_backend__ml_tailcall__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 0)));
    ml_backend__ml_tailcall__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 1)));
    ml_backend__ml_tailcall__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 2)));
    ml_backend__ml_tailcall__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 3)));
    ml_backend__ml_tailcall__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 4)));
    ml_backend__ml_tailcall__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 5)));
    ml_backend__ml_tailcall__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 6)));
    ml_backend__ml_tailcall__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 7)));
    ml_backend__ml_tailcall__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 8)));
    ml_backend__ml_tailcall__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Var_40));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Var_41));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Var_42));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Var_43));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Var_44));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__Var_45));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_tailcall__FuncDefns_14));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_tailcall__Var_47));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_tailcall__Var_48));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_tailcall__Var_49));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____at_tail_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____at_tail_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____at_tail_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

    ml_backend__ml_tailcall____Compare____at_tail_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____found_recursive_call_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____found_recursive_call_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____found_recursive_call_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

    ml_backend__ml_tailcall____Compare____found_recursive_call_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____is_local_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____is_local_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____is_local_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

    ml_backend__ml_tailcall____Compare____is_local_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

    ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tailcall_info_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____tailcall_info_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tailcall_info_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

    ml_backend__ml_tailcall____Compare____tailcall_info_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____tc_in_body_info_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____tc_in_body_info_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____tc_in_body_info_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

    ml_backend__ml_tailcall____Compare____tc_in_body_info_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____warn_tail_calls_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____warn_tail_calls_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____warn_tail_calls_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

    ml_backend__ml_tailcall____Compare____warn_tail_calls_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_found_recursive_call_0);
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

/* :- end_module ml_backend.ml_tailcall. */
