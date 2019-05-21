/*
** Automatically generated from `ml_tailcall.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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



struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s {
  MR_Word ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Locals_5;
  MR_bool ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__succeeded;
  MR_Word ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__VarName_23;
  jmp_buf ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__commit_0;
  MR_Word ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Locals_33;
  MR_Box ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__conv0_Locals_33;
  MR_Word ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Params_27;
  jmp_buf ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__commit_1;
  MR_Word ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Param_32;
  MR_Word ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Var_42;
  MR_Box ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__conv1_Param_32;
  MR_Word ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__LocalVarDefns_25;
  jmp_buf ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__commit_2;
  MR_Word ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__LocalVarDefn_31;
  MR_Word ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Var_41;
  MR_Box ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__conv2_LocalVarDefn_31;
};

struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s {
  MR_Word ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Locals_5;
  MR_bool ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded;
  MR_Word ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__MaybeSeqNum_63;
  MR_Word ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__PredLabel_67;
  MR_Integer ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__ProcId_68;
  jmp_buf ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__commit_0;
  MR_Word ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__FuncDefns_70;
  MR_Word ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Locals_78;
  MR_Box ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__conv0_Locals_78;
  jmp_buf ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__commit_1;
  MR_Word ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__TypeInfo_37_93;
  MR_Word ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__PlainFuncName_72;
  MR_Word ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Var_74;
  MR_Word ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__FuncDefn_77;
  MR_Word ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Var_89;
  MR_Integer ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Var_90;
  MR_Word ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Var_91;
  MR_Box ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__conv1_FuncDefn_77;
};

struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s {
  MR_Word ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__LocalsList_4;
  MR_bool ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__VarName_7;
  jmp_buf ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Locals_17;
  MR_Box ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__conv0_Locals_17;
  MR_Word ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Params_11;
  jmp_buf ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__commit_1;
  MR_Word ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Param_16;
  MR_Word ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Var_26;
  MR_Box ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__conv1_Param_16;
  MR_Word ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__LocalVarDefns_9;
  jmp_buf ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__commit_2;
  MR_Word ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__LocalVarDefn_15;
  MR_Word ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Var_25;
  MR_Box ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__conv2_LocalVarDefn_15;
};


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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0;

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_0[1];

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_1[1];

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_2[1];

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_2;

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1[1];

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_2[1];

static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_local_defns_0[3];

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_local_defns_0[3];

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_local_defns_0[3];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0;

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_may_yield_dangling_stack_ref_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_may_yield_dangling_stack_ref_0[2];

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_may_yield_dangling_stack_ref_0[2];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0;

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_info_0_0[7];

static const MR_ConstString ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tailcall_info_0_0[7];

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
ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__405__1_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_84,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_141);

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
ml_backend__ml_tailcall____Compare____locals_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____locals_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____local_defns_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____local_defns_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
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
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_Specs_0_35,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_Specs_36);

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
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_76,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_77);

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
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_28,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29);

static MR_Word MR_CALL 
ml_backend__ml_tailcall__may_rvals_yield_dangling_stack_ref_2_f_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__Locals_2);

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_1(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_3(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_4(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_6(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_5(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_7(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_8(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_10(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_9(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_11(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_2(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_12(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static MR_Word MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0(
  MR_Word ml_backend__ml_tailcall__Lval_4,
  MR_Word ml_backend__ml_tailcall__Locals_5);

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_1(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_3(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_4(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_6(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_5(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_7(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_2(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_8(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static MR_Word MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0(
  MR_Word ml_backend__ml_tailcall__Rval_4,
  MR_Word ml_backend__ml_tailcall__Locals_5);

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_1(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_3(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_4(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_6(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_5(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_7(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_8(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_10(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_9(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_11(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_2(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_12(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static MR_bool MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0(
  MR_Word ml_backend__ml_tailcall__Var_3,
  MR_Word ml_backend__ml_tailcall__LocalsList_4);

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
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_41,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_42);

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
ml_backend__ml_tailcall____Unify____local_defns_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____local_defns_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____locals_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____locals_0_0_10001(
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


static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_1[9][2];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_2[1][10];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_3[1][5];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_4[1][4];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_5[1][1];




static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_1[9][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_0[1] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0
};

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0 = {
  (MR_String) "local_params",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_1[1] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0
};

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1 = {
  (MR_String) "local_var_defns",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_2[1] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0
};

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_2 = {
  (MR_String) "local_func_defns",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_2[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_2
};

static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_local_defns_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_2
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_local_defns_0[3] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_2,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1
};

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_local_defns_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____local_defns_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____local_defns_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "local_defns",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_local_defns_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_local_defns_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_local_defns_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_locals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____locals_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____locals_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "locals",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_name_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_warn_tail_calls_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0
};

static const MR_ConstString ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tailcall_info_0_0[7] = {
  (MR_String) "tci_module_info",
  (MR_String) "tci_module_name",
  (MR_String) "tci_function_name",
  (MR_String) "tci_maybe_pred_info",
  (MR_String) "tci_locals",
  (MR_String) "tci_warn_tail_calls",
  (MR_String) "tci_maybe_require_tailrec"
};

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_info_0_0 = {
  (MR_String) "tailcall_info",
  (MR_Integer) 7,
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
ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__405__1_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_84,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_141)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____at_tail_0_0(ml_backend__ml_tailcall__HeadVar__1_84, ml_backend__ml_tailcall__HeadVar__2_141);
    }
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

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__Cast_HeadVar1_4, ml_backend__ml_tailcall__Cast_HeadVar2_5);
    }
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

      {
        mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_tailcall__Var_8, ml_backend__ml_tailcall__Var_13, ml_backend__ml_tailcall__Var_14);
      }
      ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_8 == (MR_Integer) 0);
      ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
      if (ml_backend__ml_tailcall__succeeded)
        *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__Var_8;
      else
      {
        {
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__ArgX2_6)), ((MR_Box) (ml_backend__ml_tailcall__ArgY2_7)));
        }
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
        {
          ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_9_9, ((MR_Box) (ml_backend__ml_tailcall__ArgX2_5)), ((MR_Box) (ml_backend__ml_tailcall__ArgY2_6)));
        }
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
    MR_Integer ml_backend__ml_tailcall__CastX_24 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
    MR_Integer ml_backend__ml_tailcall__CastY_25 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_24 == ml_backend__ml_tailcall__CastY_25);
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
      MR_Word ml_backend__ml_tailcall__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ml_backend__ml_tailcall__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ml_backend__ml_tailcall__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ml_backend__ml_tailcall__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ml_backend__ml_tailcall__Var_18;

      {
        hlds__hlds_module____Compare____module_info_0_0(&ml_backend__ml_tailcall__Var_18, ml_backend__ml_tailcall__ArgX1_4, ml_backend__ml_tailcall__ArgY1_5);
      }
      ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_18 == (MR_Integer) 0);
      ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
      if (ml_backend__ml_tailcall__succeeded)
        *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__Var_18;
      else
      {
        MR_Word ml_backend__ml_tailcall__Var_19;

        {
          ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_tailcall__Var_19, ml_backend__ml_tailcall__ArgX2_6, ml_backend__ml_tailcall__ArgY2_7);
        }
        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_19 == (MR_Integer) 0);
        ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
        if (ml_backend__ml_tailcall__succeeded)
          *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__Var_19;
        else
        {
          MR_Word ml_backend__ml_tailcall__Var_20;

          {
            ml_backend__mlds____Compare____mlds_function_name_0_0(&ml_backend__ml_tailcall__Var_20, ml_backend__ml_tailcall__ArgX3_8, ml_backend__ml_tailcall__ArgY3_9);
          }
          ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_20 == (MR_Integer) 0);
          ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
          if (ml_backend__ml_tailcall__succeeded)
            *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__Var_20;
          else
          {
            MR_Word ml_backend__ml_tailcall__Var_21;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[6], &ml_backend__ml_tailcall__Var_21, ((MR_Box) (ml_backend__ml_tailcall__ArgX4_10)), ((MR_Box) (ml_backend__ml_tailcall__ArgY4_11)));
            }
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_21 == (MR_Integer) 0);
            ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
            if (ml_backend__ml_tailcall__succeeded)
              *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__Var_21;
            else
            {
              MR_Word ml_backend__ml_tailcall__Var_22;

              {
                mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[5], &ml_backend__ml_tailcall__Var_22, ((MR_Box) (ml_backend__ml_tailcall__ArgX5_12)), ((MR_Box) (ml_backend__ml_tailcall__ArgY5_13)));
              }
              ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_22 == (MR_Integer) 0);
              ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
              if (ml_backend__ml_tailcall__succeeded)
                *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__Var_22;
              else
              {
                MR_Word ml_backend__ml_tailcall__Var_23;
                MR_Integer ml_backend__ml_tailcall__Var_33 = (MR_Integer) ml_backend__ml_tailcall__ArgX6_14;
                MR_Integer ml_backend__ml_tailcall__Var_34 = (MR_Integer) ml_backend__ml_tailcall__ArgY6_15;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_tailcall__Var_23, ml_backend__ml_tailcall__Var_33, ml_backend__ml_tailcall__Var_34);
                }
                ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_23 == (MR_Integer) 0);
                ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
                if (ml_backend__ml_tailcall__succeeded)
                  *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__Var_23;
                else
                {
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[7], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__ArgX7_16)), ((MR_Box) (ml_backend__ml_tailcall__ArgY7_17)));
                  }
                }
              }
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
    MR_Integer ml_backend__ml_tailcall__CastX_17 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
    MR_Integer ml_backend__ml_tailcall__CastY_18 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_17 == ml_backend__ml_tailcall__CastY_18);
    if (ml_backend__ml_tailcall__succeeded)
      ml_backend__ml_tailcall__succeeded = MR_TRUE;
    else
    {
      MR_Word ml_backend__ml_tailcall__TypeInfo_22_22;
      MR_Word ml_backend__ml_tailcall__TypeInfo_23_23;
      MR_Word ml_backend__ml_tailcall__TypeInfo_24_24;
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
      MR_Word ml_backend__ml_tailcall__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ml_backend__ml_tailcall__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ml_backend__ml_tailcall__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ml_backend__ml_tailcall__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 6)));

      {
        ml_backend__ml_tailcall__succeeded = hlds__hlds_module____Unify____module_info_0_0(ml_backend__ml_tailcall__ArgX1_3, ml_backend__ml_tailcall__ArgY1_4);
      }
      if (ml_backend__ml_tailcall__succeeded)
      {
        {
          ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_tailcall__ArgX2_5, ml_backend__ml_tailcall__ArgY2_6);
        }
        if (ml_backend__ml_tailcall__succeeded)
        {
          {
            ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_function_name_0_0(ml_backend__ml_tailcall__ArgX3_7, ml_backend__ml_tailcall__ArgY3_8);
          }
          if (ml_backend__ml_tailcall__succeeded)
          {
            ml_backend__ml_tailcall__TypeInfo_22_22 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[6];
            {
              ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_22_22, ((MR_Box) (ml_backend__ml_tailcall__ArgX4_9)), ((MR_Box) (ml_backend__ml_tailcall__ArgY4_10)));
            }
            if (ml_backend__ml_tailcall__succeeded)
            {
              ml_backend__ml_tailcall__TypeInfo_23_23 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[5];
              {
                ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_23_23, ((MR_Box) (ml_backend__ml_tailcall__ArgX5_11)), ((MR_Box) (ml_backend__ml_tailcall__ArgY5_12)));
              }
              if (ml_backend__ml_tailcall__succeeded)
              {
                ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__ArgX6_13 == ml_backend__ml_tailcall__ArgY6_14);
                if (ml_backend__ml_tailcall__succeeded)
                {
                  ml_backend__ml_tailcall__TypeInfo_24_24 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[7];
                  {
                    ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_24_24, ((MR_Box) (ml_backend__ml_tailcall__ArgX7_15)), ((MR_Box) (ml_backend__ml_tailcall__ArgY7_16)));
                  }
                }
              }
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

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__Cast_HeadVar1_4, ml_backend__ml_tailcall__Cast_HeadVar2_5);
    }
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
ml_backend__ml_tailcall____Compare____locals_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
{
  {
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar1_4 = ml_backend__ml_tailcall__HeadVar__2_2;
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar2_5 = ml_backend__ml_tailcall__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[5], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____locals_0_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar1_3 = ml_backend__ml_tailcall__HeadVar__1_1;
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar2_4 = ml_backend__ml_tailcall__HeadVar__2_2;

    {
      ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[5], ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar2_4)));
    }
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____local_defns_0_0(
  MR_Word * ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Integer ml_backend__ml_tailcall__CastX_22 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
    MR_Integer ml_backend__ml_tailcall__CastY_23 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_22 == ml_backend__ml_tailcall__CastY_23);
    if (ml_backend__ml_tailcall__succeeded)
      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_tailcall__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_tailcall__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[4], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__Var_28)), ((MR_Box) (ml_backend__ml_tailcall__ArgY1_5)));
                  }
                }
                break;
              case (MR_Integer) 1:
                *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_tailcall__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_tailcall__ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[3], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__Var_29)), ((MR_Box) (ml_backend__ml_tailcall__ArgY1_13)));
                  }
                }
                break;
              case (MR_Integer) 2:
                *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ml_backend__ml_tailcall__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_tailcall__ArgY1_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[2], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__Var_27)), ((MR_Box) (ml_backend__ml_tailcall__ArgY1_21)));
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____local_defns_0_0(
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
          {
            MR_Word ml_backend__ml_tailcall__TypeInfo_12_12;
            MR_Word ml_backend__ml_tailcall__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tailcall__ArgY1_4;

            ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (ml_backend__ml_tailcall__succeeded)
            {
              ml_backend__ml_tailcall__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
              ml_backend__ml_tailcall__TypeInfo_12_12 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[4];
              {
                ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_12_12, ((MR_Box) (ml_backend__ml_tailcall__ArgX1_3)), ((MR_Box) (ml_backend__ml_tailcall__ArgY1_4)));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_tailcall__TypeInfo_13_13;
            MR_Word ml_backend__ml_tailcall__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tailcall__ArgY1_6;

            ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_tailcall__succeeded)
            {
              ml_backend__ml_tailcall__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
              ml_backend__ml_tailcall__TypeInfo_13_13 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[3];
              {
                ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_13_13, ((MR_Box) (ml_backend__ml_tailcall__ArgX1_5)), ((MR_Box) (ml_backend__ml_tailcall__ArgY1_6)));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ml_backend__ml_tailcall__TypeInfo_11_11;
            MR_Word ml_backend__ml_tailcall__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tailcall__ArgY1_8;

            ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (ml_backend__ml_tailcall__succeeded)
            {
              ml_backend__ml_tailcall__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
              ml_backend__ml_tailcall__TypeInfo_11_11 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[2];
              {
                ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_11_11, ((MR_Box) (ml_backend__ml_tailcall__ArgX1_7)), ((MR_Box) (ml_backend__ml_tailcall__ArgY1_8)));
              }
            }
          }
          break;
      }
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

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__Cast_HeadVar1_4, ml_backend__ml_tailcall__Cast_HeadVar2_5);
    }
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

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_tailcall__HeadVar__1_1, ml_backend__ml_tailcall__Cast_HeadVar1_4, ml_backend__ml_tailcall__Cast_HeadVar2_5);
    }
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

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[1], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__Var_13)), ((MR_Box) (ml_backend__ml_tailcall__ArgY1_5)));
                  }
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
              {
                ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_11_11, ((MR_Box) (ml_backend__ml_tailcall__ArgX1_3)), ((MR_Box) (ml_backend__ml_tailcall__ArgY1_4)));
              }
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
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_Specs_0_35,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_Specs_36)
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
    MR_Word ml_backend__ml_tailcall__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Params_18, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__RetTypes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Params_18, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Locals_25;
    MR_Word ml_backend__ml_tailcall__AtTail_26;
    MR_Word ml_backend__ml_tailcall__MaybePredInfo_32;
    MR_Word ml_backend__ml_tailcall__TCallInfo_33;
    MR_Word ml_backend__ml_tailcall__FuncBody_34;
    MR_Word ml_backend__ml_tailcall__Var_37;

    {
      ml_backend__ml_tailcall__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_37, 0) = ((MR_Box) (ml_backend__ml_tailcall__Args_23));
    }
    {
      ml_backend__ml_tailcall__Locals_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Locals_25, 0) = ((MR_Box) (ml_backend__ml_tailcall__Var_37));
      MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Locals_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if ((ml_backend__ml_tailcall__RetTypes_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ml_backend__ml_tailcall__AtTail_26 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_5[0]);
    }
    else
      ml_backend__ml_tailcall__AtTail_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    if ((ml_backend__ml_tailcall__MaybePredProcId_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_tailcall__MaybePredInfo_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word ml_backend__ml_tailcall__PredId_29;
      MR_Word ml_backend__ml_tailcall__PredInfo_31;
      MR_Word ml_backend__ml_tailcall__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybePredProcId_17, (MR_Integer) 0)));
      MR_Integer ml_backend__ml_tailcall__Var_30;

      ml_backend__ml_tailcall__PredId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_40, (MR_Integer) 0)));
      ml_backend__ml_tailcall__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_40, (MR_Integer) 1)));
      {
        hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_tailcall__ModuleInfo_8, ml_backend__ml_tailcall__PredId_29, &ml_backend__ml_tailcall__PredInfo_31);
      }
      {
        ml_backend__ml_tailcall__MaybePredInfo_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybePredInfo_32, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredInfo_31));
      }
    }
    {
      ml_backend__ml_tailcall__TCallInfo_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, 0) = ((MR_Box) (ml_backend__ml_tailcall__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, 1) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, 2) = ((MR_Box) (ml_backend__ml_tailcall__Name_14));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, 3) = ((MR_Box) (ml_backend__ml_tailcall__MaybePredInfo_32));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, 4) = ((MR_Box) (ml_backend__ml_tailcall__Locals_25));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, 5) = ((MR_Box) (ml_backend__ml_tailcall__WarnTailCalls_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, 6) = ((MR_Box) (ml_backend__ml_tailcall__MaybeRequireTailrecInfo_22));
    }
    if ((ml_backend__ml_tailcall__FuncBody0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ml_backend__ml_tailcall__FuncBody_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_tailcall__STATE_VARIABLE_Specs_36 = ml_backend__ml_tailcall__STATE_VARIABLE_Specs_0_35;
    }
    else
    {
      MR_Word ml_backend__ml_tailcall__Statement0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__FuncBody0_19, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tailcall__InBodyInfo0_50;
      MR_Word ml_backend__ml_tailcall__Statement_52;
      MR_Word ml_backend__ml_tailcall__InBodyInfo_53;
      MR_Word ml_backend__ml_tailcall__FoundRecCall_54;
      MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_Specs_33_68;
      MR_Word ml_backend__ml_tailcall__Var_51;

      {
        ml_backend__ml_tailcall__InBodyInfo0_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__InBodyInfo0_50, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__InBodyInfo0_50, 1) = ((MR_Box) (ml_backend__ml_tailcall__STATE_VARIABLE_Specs_0_35));
      }
      {
        ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_33, ml_backend__ml_tailcall__AtTail_26, &ml_backend__ml_tailcall__Var_51, ml_backend__ml_tailcall__Statement0_49, &ml_backend__ml_tailcall__Statement_52, ml_backend__ml_tailcall__InBodyInfo0_50, &ml_backend__ml_tailcall__InBodyInfo_53);
      }
      ml_backend__ml_tailcall__FoundRecCall_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__InBodyInfo_53, (MR_Integer) 0)));
      ml_backend__ml_tailcall__STATE_VARIABLE_Specs_33_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__InBodyInfo_53, (MR_Integer) 1)));
      {
        ml_backend__ml_tailcall__FuncBody_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__FuncBody_34, 0) = ((MR_Box) (ml_backend__ml_tailcall__Statement_52));
      }
      switch (ml_backend__ml_tailcall__FoundRecCall_54) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *ml_backend__ml_tailcall__STATE_VARIABLE_Specs_36 = ml_backend__ml_tailcall__STATE_VARIABLE_Specs_33_68;
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_tailcall__MaybeRequireTailrecInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, (MR_Integer) 6)));
            MR_Word ml_backend__ml_tailcall__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, (MR_Integer) 3)));
            MR_Word ml_backend__ml_tailcall__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tailcall__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, (MR_Integer) 1)));
            MR_Word ml_backend__ml_tailcall__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, (MR_Integer) 2)));
            MR_Word ml_backend__ml_tailcall__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, (MR_Integer) 4)));
            MR_Word ml_backend__ml_tailcall__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, (MR_Integer) 5)));

            if ((ml_backend__ml_tailcall__MaybeRequireTailrecInfo_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *ml_backend__ml_tailcall__STATE_VARIABLE_Specs_36 = ml_backend__ml_tailcall__STATE_VARIABLE_Specs_33_68;
            else
            {
              MR_Word ml_backend__ml_tailcall__RequireTailrecInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeRequireTailrecInfo_55, (MR_Integer) 0)));
              MR_Word ml_backend__ml_tailcall__Context_57;

              if (((MR_tag((MR_Word) ml_backend__ml_tailcall__RequireTailrecInfo_56)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word ml_backend__ml_tailcall__Var_58 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_56, (MR_Integer) 0)))) & (MR_Integer) 1);
                MR_Word ml_backend__ml_tailcall__Var_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_56, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

                ml_backend__ml_tailcall__Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_56, (MR_Integer) 1)));
              }
              else
                ml_backend__ml_tailcall__Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__RequireTailrecInfo_56, (MR_Integer) 0)));
              if ((ml_backend__ml_tailcall__Var_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *ml_backend__ml_tailcall__STATE_VARIABLE_Specs_36 = ml_backend__ml_tailcall__STATE_VARIABLE_Specs_33_68;
              else
              {
                MR_Word ml_backend__ml_tailcall__PredInfo_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Var_73, (MR_Integer) 0)));
                MR_Word ml_backend__ml_tailcall__PredOrFunc_62;
                MR_String ml_backend__ml_tailcall__Name_63;
                MR_Integer ml_backend__ml_tailcall__Arity_64;
                MR_Word ml_backend__ml_tailcall__SymName_65;
                MR_Word ml_backend__ml_tailcall__SimpleCallId_66;

                {
                  ml_backend__ml_tailcall__PredOrFunc_62 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_tailcall__PredInfo_61);
                }
                {
                  hlds__hlds_pred__pred_info_get_name_2_p_0(ml_backend__ml_tailcall__PredInfo_61, &ml_backend__ml_tailcall__Name_63);
                }
                {
                  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(ml_backend__ml_tailcall__PredInfo_61, &ml_backend__ml_tailcall__Arity_64);
                }
                {
                  ml_backend__ml_tailcall__SymName_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SymName_65, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_63));
                }
                {
                  ml_backend__ml_tailcall__SimpleCallId_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_66, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredOrFunc_62));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_66, 1) = ((MR_Box) (ml_backend__ml_tailcall__SymName_65));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_66, 2) = ((MR_Box) (ml_backend__ml_tailcall__Arity_64));
                }
                {
                  hlds__mark_tail_calls__add_message_for_no_tail_or_nontail_recursive_calls_4_p_0(ml_backend__ml_tailcall__SimpleCallId_66, ml_backend__ml_tailcall__Context_57, ml_backend__ml_tailcall__STATE_VARIABLE_Specs_33_68, ml_backend__ml_tailcall__STATE_VARIABLE_Specs_36);
                }
              }
            }
          }
          break;
      }
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
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__FuncBody_34));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_tailcall__Attributes_20));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_tailcall__EnvVarNames_21));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_tailcall__MaybeRequireTailrecInfo_22));
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

        {
          ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter_9, ml_backend__ml_tailcall__AtTailBefore_10, ml_backend__ml_tailcall__Statement0_14, &ml_backend__ml_tailcall__Statement_15, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_16, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_17);
        }
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

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_1, ml_backend__ml_tailcall__AtTailAfter_2, &ml_backend__ml_tailcall__AtTailBefore_15, ml_backend__ml_tailcall__Statement0_36, &ml_backend__ml_tailcall__Statement_37, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_6, &ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_24_24);
    }
    {
      ml_backend__ml_tailcall__Case_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case_19, 0) = ((MR_Box) (ml_backend__ml_tailcall__FirstCond_34));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case_19, 1) = ((MR_Box) (ml_backend__ml_tailcall__LaterConds_35));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case_19, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_37));
    }
    {
      ml_backend__ml_tailcall__mark_tailcalls_in_cases_7_p_0(ml_backend__ml_tailcall__TCallInfo_1, ml_backend__ml_tailcall__AtTailAfter_2, &ml_backend__ml_tailcall__AtTailBefores_16, ml_backend__ml_tailcall__Cases0_18, &ml_backend__ml_tailcall__Cases_20, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_24_24, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_7);
    }
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

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__405__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1));
    }
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
    MR_Word ml_backend__ml_tailcall__conv0_STATE_VARIABLE_Specs_36;

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_function_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv1_FuncDefn_12, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3), &ml_backend__ml_tailcall__conv0_STATE_VARIABLE_Specs_36);
    }
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv1_FuncDefn_12));
    *ml_backend__ml_tailcall__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_tailcall__conv0_STATE_VARIABLE_Specs_36));
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word ml_backend__ml_tailcall__AtTailAfter0_9,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
  MR_Word ml_backend__ml_tailcall__Stmt0_11,
  MR_Word * ml_backend__ml_tailcall__Stmt_12,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_76,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_77)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Stmt0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_tailcall__TypeCtorInfo_139_139;
          MR_Word ml_backend__ml_tailcall__LocalVarDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__FuncDefns0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__Stmts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 3)));
          MR_Word ml_backend__ml_tailcall__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__WarnTailCalls_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 5)));
          MR_Word ml_backend__ml_tailcall__Specs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_76, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__FuncDefns_22;
          MR_Word ml_backend__ml_tailcall__Specs_23;
          MR_Word ml_backend__ml_tailcall__Locals_24;
          MR_Word ml_backend__ml_tailcall__NewTCallInfo_25;
          MR_Word ml_backend__ml_tailcall__Stmts_26;
          MR_Word ml_backend__ml_tailcall__Var_88;
          MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_89_89;
          MR_Word ml_backend__ml_tailcall__Var_90;
          MR_Word ml_backend__ml_tailcall__Var_91;
          MR_Word ml_backend__ml_tailcall__Var_92;
          MR_Word ml_backend__ml_tailcall__Var_93;
          MR_Word ml_backend__ml_tailcall__Var_122;
          MR_Word ml_backend__ml_tailcall__Var_123;
          MR_Word ml_backend__ml_tailcall__Var_124;
          MR_Word ml_backend__ml_tailcall__Var_125;
          MR_Word ml_backend__ml_tailcall__Var_126;
          MR_Word ml_backend__ml_tailcall__Var_127;
          MR_Word ml_backend__ml_tailcall__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 3)));
          MR_Word ml_backend__ml_tailcall__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 4)));
          MR_Word ml_backend__ml_tailcall__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 6)));
          MR_Word ml_backend__ml_tailcall__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_76, (MR_Integer) 0)));
          MR_Box ml_backend__ml_tailcall__conv2_Specs_23;
          MR_Word ml_backend__ml_tailcall__Var_120;
          MR_Word ml_backend__ml_tailcall__Var_121;

          {
            ml_backend__ml_tailcall__Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_88, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_88, 1) = ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_88, 3) = ((MR_Box) (ml_backend__ml_tailcall__ModuleInfo_18));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_88, 4) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_19));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_88, 5) = ((MR_Box) (ml_backend__ml_tailcall__WarnTailCalls_20));
          }
          ml_backend__ml_tailcall__TypeCtorInfo_139_139 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
          {
            mercury__list__map_foldl_5_p_0(ml_backend__ml_tailcall__TypeCtorInfo_139_139, ml_backend__ml_tailcall__TypeCtorInfo_139_139, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__Var_88, ml_backend__ml_tailcall__FuncDefns0_15, &ml_backend__ml_tailcall__FuncDefns_22, ((MR_Box) (ml_backend__ml_tailcall__Specs0_21)), &ml_backend__ml_tailcall__conv2_Specs_23);
          }
          ml_backend__ml_tailcall__Specs_23 = ((MR_Word) ml_backend__ml_tailcall__conv2_Specs_23);
          ml_backend__ml_tailcall__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_76, (MR_Integer) 0)));
          ml_backend__ml_tailcall__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_76, (MR_Integer) 1)));
          {
            ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_89_89, 0) = ((MR_Box) (ml_backend__ml_tailcall__Var_120));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_89_89, 1) = ((MR_Box) (ml_backend__ml_tailcall__Specs_23));
          }
          ml_backend__ml_tailcall__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 0)));
          ml_backend__ml_tailcall__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 1)));
          ml_backend__ml_tailcall__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 2)));
          ml_backend__ml_tailcall__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 3)));
          ml_backend__ml_tailcall__Locals_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 4)));
          ml_backend__ml_tailcall__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 5)));
          ml_backend__ml_tailcall__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 6)));
          {
            ml_backend__ml_tailcall__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Var_91, 0) = ((MR_Box) (ml_backend__ml_tailcall__LocalVarDefns_14));
          }
          {
            ml_backend__ml_tailcall__Var_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Var_93, 0) = ((MR_Box) (ml_backend__ml_tailcall__FuncDefns_22));
          }
          {
            ml_backend__ml_tailcall__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Var_92, 0) = ((MR_Box) (ml_backend__ml_tailcall__Var_93));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Var_92, 1) = ((MR_Box) (ml_backend__ml_tailcall__Locals_24));
          }
          {
            ml_backend__ml_tailcall__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Var_90, 0) = ((MR_Box) (ml_backend__ml_tailcall__Var_91));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Var_90, 1) = ((MR_Box) (ml_backend__ml_tailcall__Var_92));
          }
          {
            ml_backend__ml_tailcall__NewTCallInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_25, 0) = ((MR_Box) (ml_backend__ml_tailcall__Var_122));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_25, 1) = ((MR_Box) (ml_backend__ml_tailcall__Var_123));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_25, 2) = ((MR_Box) (ml_backend__ml_tailcall__Var_124));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_25, 3) = ((MR_Box) (ml_backend__ml_tailcall__Var_125));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_25, 4) = ((MR_Box) (ml_backend__ml_tailcall__Var_90));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_25, 5) = ((MR_Box) (ml_backend__ml_tailcall__Var_126));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_25, 6) = ((MR_Box) (ml_backend__ml_tailcall__Var_127));
          }
          {
            ml_backend__ml_tailcall__mark_tailcalls_in_stmts_7_p_0(ml_backend__ml_tailcall__NewTCallInfo_25, ml_backend__ml_tailcall__AtTailAfter0_9, ml_backend__ml_tailcall__AtTailBefore_10, ml_backend__ml_tailcall__Stmts0_16, &ml_backend__ml_tailcall__Stmts_26, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_89_89, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_77);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_tailcall__Stmt_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__LocalVarDefns_14));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__FuncDefns_22));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Stmts_26));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Context_17));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_tailcall__Kind_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Rval_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__Statement0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__AtTailAfter_30;
          MR_Word ml_backend__ml_tailcall__AtTailBefore0_31;
          MR_Word ml_backend__ml_tailcall__Statement_32;
          MR_Word ml_backend__ml_tailcall__Context_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 3)));

          {
            ml_backend__ml_tailcall__not_at_tail_2_p_0(ml_backend__ml_tailcall__AtTailAfter0_9, &ml_backend__ml_tailcall__AtTailAfter_30);
          }
          {
            ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter_30, &ml_backend__ml_tailcall__AtTailBefore0_31, ml_backend__ml_tailcall__Statement0_29, &ml_backend__ml_tailcall__Statement_32, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_76, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_77);
          }
          {
            ml_backend__ml_tailcall__not_at_tail_2_p_0(ml_backend__ml_tailcall__AtTailBefore0_31, ml_backend__ml_tailcall__AtTailBefore_10);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_tailcall__Stmt_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Kind_27));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Rval_28));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_32));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Context_95));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_tailcall__Cond_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Then0_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__MaybeElse0_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__AtTailBeforeThen_36;
          MR_Word ml_backend__ml_tailcall__Then_37;
          MR_Word ml_backend__ml_tailcall__AtTailBeforeElse_38;
          MR_Word ml_backend__ml_tailcall__MaybeElse_39;
          MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_85_85;
          MR_Word ml_backend__ml_tailcall__Context_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 3)));

          {
            ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, &ml_backend__ml_tailcall__AtTailBeforeThen_36, ml_backend__ml_tailcall__Then0_34, &ml_backend__ml_tailcall__Then_37, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_76, &ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_85_85);
          }
          {
            ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, &ml_backend__ml_tailcall__AtTailBeforeElse_38, ml_backend__ml_tailcall__MaybeElse0_35, &ml_backend__ml_tailcall__MaybeElse_39, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_85_85, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_77);
          }
          ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeThen_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (!(ml_backend__ml_tailcall__succeeded))
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeElse_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (ml_backend__ml_tailcall__succeeded)
            *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_tailcall__Stmt_12 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Cond_33));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Then_37));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__MaybeElse_39));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Context_96));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_tailcall__Type_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 1)));
              MR_Word ml_backend__ml_tailcall__Val_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 2)));
              MR_Word ml_backend__ml_tailcall__Range_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 3)));
              MR_Word ml_backend__ml_tailcall__Cases0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 4)));
              MR_Word ml_backend__ml_tailcall__Default0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 5)));
              MR_Word ml_backend__ml_tailcall__AtTailBeforeCases_45;
              MR_Word ml_backend__ml_tailcall__Cases_46;
              MR_Word ml_backend__ml_tailcall__AtTailBeforeDefault_47;
              MR_Word ml_backend__ml_tailcall__Default_48;
              MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_81_81;
              MR_Word ml_backend__ml_tailcall__Context_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 6)));

              {
                ml_backend__ml_tailcall__mark_tailcalls_in_cases_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, &ml_backend__ml_tailcall__AtTailBeforeCases_45, ml_backend__ml_tailcall__Cases0_43, &ml_backend__ml_tailcall__Cases_46, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_76, &ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_81_81);
              }
              {
                ml_backend__ml_tailcall__mark_tailcalls_in_default_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, &ml_backend__ml_tailcall__AtTailBeforeDefault_47, ml_backend__ml_tailcall__Default0_44, &ml_backend__ml_tailcall__Default_48, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_81_81, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_77);
              }
              {
                MR_Word ml_backend__ml_tailcall__Var_49;
                MR_Box ml_backend__ml_tailcall__conv3_Var_49;

                {
                  ml_backend__ml_tailcall__succeeded = mercury__list__find_first_match_3_p_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0, (MR_Word) &ml_backend__ml_tailcall_scalar_common_4[0], ml_backend__ml_tailcall__AtTailBeforeCases_45, &ml_backend__ml_tailcall__conv3_Var_49);
                }
                if (ml_backend__ml_tailcall__succeeded)
                {
                  ml_backend__ml_tailcall__Var_49 = ((MR_Word) ml_backend__ml_tailcall__conv3_Var_49);
                  ml_backend__ml_tailcall__succeeded = MR_TRUE;
                }
              }
              if (!(ml_backend__ml_tailcall__succeeded))
                ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeDefault_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (ml_backend__ml_tailcall__succeeded)
                *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_tailcall__Stmt_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Type_40));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Val_41));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Range_42));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Cases_46));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__Default_48));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_tailcall__Context_97));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *ml_backend__ml_tailcall__AtTailBefore_10 = ml_backend__ml_tailcall__AtTailAfter0_9;
              *ml_backend__ml_tailcall__Stmt_12 = ml_backend__ml_tailcall__Stmt0_11;
              *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_77 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_76;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              {
                ml_backend__ml_tailcall__not_at_tail_2_p_0(ml_backend__ml_tailcall__AtTailAfter0_9, ml_backend__ml_tailcall__AtTailBefore_10);
              }
              *ml_backend__ml_tailcall__Stmt_12 = ml_backend__ml_tailcall__Stmt0_11;
              *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_77 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_76;
            }
            break;
          case (MR_Integer) 4:
            {
              ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, ml_backend__ml_tailcall__AtTailBefore_10, ml_backend__ml_tailcall__Stmt0_11, ml_backend__ml_tailcall__Stmt_12, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_76, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_77);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_tailcall__ReturnVals_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 1)));
              MR_Word ml_backend__ml_tailcall___Context_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_tailcall__AtTailBefore_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__ReturnVals_74));
              }
              *ml_backend__ml_tailcall__Stmt_12 = ml_backend__ml_tailcall__Stmt0_11;
              *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_77 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_76;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_tailcall__Ref_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 1)));
              MR_Word ml_backend__ml_tailcall__Handler0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 3)));
              MR_Word ml_backend__ml_tailcall__Handler_62;
              MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_78_78;
              MR_Word ml_backend__ml_tailcall__Context_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 4)));
              MR_Word ml_backend__ml_tailcall__Statement0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 2)));
              MR_Word ml_backend__ml_tailcall__Statement_100;
              MR_Word ml_backend__ml_tailcall__Var_60;
              MR_Word ml_backend__ml_tailcall__Var_61;

              {
                ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, &ml_backend__ml_tailcall__Var_60, ml_backend__ml_tailcall__Statement0_99, &ml_backend__ml_tailcall__Statement_100, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_76, &ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_78_78);
              }
              {
                ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__AtTailAfter0_9, &ml_backend__ml_tailcall__Var_61, ml_backend__ml_tailcall__Handler0_59, &ml_backend__ml_tailcall__Handler_62, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_78_78, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_77);
              }
              *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_tailcall__Stmt_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Ref_58));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_100));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Handler_62));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Context_98));
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

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_stmts_7_p_0(ml_backend__ml_tailcall__TCallInfo_1, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_2, &ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_26_26, ml_backend__ml_tailcall__Stmts0_18, &ml_backend__ml_tailcall__Stmts_20, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_6, &ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_27_27);
    }
    {
      ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_1, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_26_26, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_3, ml_backend__ml_tailcall__Stmt0_17, &ml_backend__ml_tailcall__Stmt_19, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_27_27, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_7);
    }
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

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_15, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_16, ml_backend__ml_tailcall__Statement0_13, &ml_backend__ml_tailcall__Statement_14, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_17, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_18);
    }
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
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_28,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__Sig_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__CalleeRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__MaybeObj_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 4)));
    MR_Word ml_backend__ml_tailcall__CallReturnLvals_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 5)));
    MR_Word ml_backend__ml_tailcall__CallKind0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 6)));
    MR_Word ml_backend__ml_tailcall__Markers_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 7)));
    MR_Word ml_backend__ml_tailcall__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_11, (MR_Integer) 8)));
    MR_Word ml_backend__ml_tailcall__ModuleName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__FuncName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_tailcall__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_tailcall__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_tailcall__CalleeCodeAddr_24;
    MR_Word ml_backend__ml_tailcall__Var_30;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CallKind0_19 == (MR_Integer) 2);
    if (ml_backend__ml_tailcall__succeeded)
    {
      ml_backend__ml_tailcall__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_tailcall__CalleeRval_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__CalleeRval_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (ml_backend__ml_tailcall__succeeded)
      {
        ml_backend__ml_tailcall__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__CalleeRval_15, (MR_Integer) 1)));
        ml_backend__ml_tailcall__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_tailcall__Var_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Var_30, (MR_Integer) 0)))) == (MR_Integer) 13)));
        if (ml_backend__ml_tailcall__succeeded)
        {
          ml_backend__ml_tailcall__CalleeCodeAddr_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Var_30, (MR_Integer) 1)));
          {
            ml_backend__ml_tailcall__succeeded = ml_backend__ml_util__code_address_is_for_this_function_3_p_0(ml_backend__ml_tailcall__CalleeCodeAddr_24, ml_backend__ml_tailcall__ModuleName_22, ml_backend__ml_tailcall__FuncName_23);
          }
        }
      }
    }
    if (ml_backend__ml_tailcall__succeeded)
    {
      MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_31_31;
      MR_Word ml_backend__ml_tailcall__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_28, (MR_Integer) 1)));
      MR_Word ml_backend__ml_tailcall__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_28, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tailcall__ReturnStmtRvals_25;
      MR_Word ml_backend__ml_tailcall__Locals_26;
      MR_Word ml_backend__ml_tailcall__Var_34;
      MR_Word ml_backend__ml_tailcall__Var_35;
      MR_Word ml_backend__ml_tailcall__Var_52;
      MR_Word ml_backend__ml_tailcall__Var_53;
      MR_Word ml_backend__ml_tailcall__Var_54;
      MR_Word ml_backend__ml_tailcall__Var_55;
      MR_Word ml_backend__ml_tailcall__Var_56;
      MR_Word ml_backend__ml_tailcall__Var_57;

      {
        ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_31_31, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_31_31, 1) = ((MR_Box) (ml_backend__ml_tailcall__Var_51));
      }
      ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__MaybeObj_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (ml_backend__ml_tailcall__succeeded)
      {
        ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter_9)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_tailcall__succeeded)
        {
          ml_backend__ml_tailcall__ReturnStmtRvals_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__AtTailAfter_9, (MR_Integer) 0)));
          {
            ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall__call_returns_same_local_lvals_as_return_stmt_2_p_0(ml_backend__ml_tailcall__ReturnStmtRvals_25, ml_backend__ml_tailcall__CallReturnLvals_18);
          }
          if (ml_backend__ml_tailcall__succeeded)
          {
            ml_backend__ml_tailcall__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 0)));
            ml_backend__ml_tailcall__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 1)));
            ml_backend__ml_tailcall__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 2)));
            ml_backend__ml_tailcall__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 3)));
            ml_backend__ml_tailcall__Locals_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 4)));
            ml_backend__ml_tailcall__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 5)));
            ml_backend__ml_tailcall__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 6)));
            {
              ml_backend__ml_tailcall__Var_34 = ml_backend__ml_tailcall__may_rvals_yield_dangling_stack_ref_2_f_0(ml_backend__ml_tailcall__Args_17, ml_backend__ml_tailcall__Locals_26);
            }
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_34 == (MR_Integer) 1);
            if (ml_backend__ml_tailcall__succeeded)
            {
              {
                ml_backend__ml_tailcall__Var_35 = ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0(ml_backend__ml_tailcall__CalleeRval_15, ml_backend__ml_tailcall__Locals_26);
              }
              ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_35 == (MR_Integer) 1);
            }
          }
        }
      }
      if (ml_backend__ml_tailcall__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_tailcall__Stmt_12 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Sig_14));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__CalleeRval_15));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__MaybeObj_16));
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Args_17));
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__CallReturnLvals_18));
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ml_backend__ml_tailcall__Markers_20));
          MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ml_backend__ml_tailcall__Context_21));
        }
        *ml_backend__ml_tailcall__AtTailBefore_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_31_31;
      }
      else
      {
        switch (MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_tailcall__AtTailAfter_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_31_31;
                break;
              case (MR_Integer) 1:
                {
                  ml_backend__ml_tailcall__maybe_warn_tailcalls_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__CalleeCodeAddr_24, ml_backend__ml_tailcall__Markers_20, ml_backend__ml_tailcall__Context_21, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_31_31, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_tailcall__maybe_warn_tailcalls_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__CalleeCodeAddr_24, ml_backend__ml_tailcall__Markers_20, ml_backend__ml_tailcall__Context_21, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_31_31, ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29);
            }
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
      *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_29 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_28;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tailcall__may_rvals_yield_dangling_stack_ref_2_f_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__Locals_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word ml_backend__ml_tailcall__HeadVar__3_3;

      if ((ml_backend__ml_tailcall__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Integer) 1;
      else
      {
        MR_Word ml_backend__ml_tailcall__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__Rvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRef0_9;

        {
          ml_backend__ml_tailcall__MayYieldDanglingStackRef0_9 = ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0(ml_backend__ml_tailcall__Rval_5, ml_backend__ml_tailcall__Locals_2);
        }
        switch (ml_backend__ml_tailcall__MayYieldDanglingStackRef0_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_tailcall__next_value_of_HeadVar__1_1 = ml_backend__ml_tailcall__Rvals_6;

                ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
        }
      }
      return ml_backend__ml_tailcall__HeadVar__3_3;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_1(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_3(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Locals_33 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__conv0_Locals_33);
    {
      ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_2(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_4(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_6(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Param_32 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__conv1_Param_32);
    {
      ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_5(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_5(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    {
      MR_Word ml_backend__ml_tailcall__Var_29;
      MR_Word ml_backend__ml_tailcall__Var_30;

      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Param_32, (MR_Integer) 0)));
      ml_backend__ml_tailcall__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Param_32, (MR_Integer) 1)));
      ml_backend__ml_tailcall__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Param_32, (MR_Integer) 2)));
      {
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__VarName_23, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Var_42);
      }
      if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__succeeded)
        {
          ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_7(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__commit_1) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__conv1_Param_32, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Params_27, ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_6, ml_backend__ml_tailcall__env_ptr);
          }
        }
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_8(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__commit_2, 1);
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_10(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__LocalVarDefn_31 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__conv2_LocalVarDefn_31);
    {
      ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_9(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_9(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    {
      MR_Word ml_backend__ml_tailcall__Var_34;
      MR_Word ml_backend__ml_tailcall__Var_35;
      MR_Word ml_backend__ml_tailcall__Var_36;
      MR_Word ml_backend__ml_tailcall__Var_37;

      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__LocalVarDefn_31, (MR_Integer) 0)));
      ml_backend__ml_tailcall__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__LocalVarDefn_31, (MR_Integer) 1)));
      ml_backend__ml_tailcall__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__LocalVarDefn_31, (MR_Integer) 2)));
      ml_backend__ml_tailcall__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__LocalVarDefn_31, (MR_Integer) 3)));
      ml_backend__ml_tailcall__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__LocalVarDefn_31, (MR_Integer) 4)));
      {
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__VarName_23, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Var_41);
      }
      if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__succeeded)
        {
          ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_8(ml_backend__ml_tailcall__env_ptr);
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_11(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__commit_2) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__conv2_LocalVarDefn_31, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__LocalVarDefns_25, ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_10, ml_backend__ml_tailcall__env_ptr);
          }
        }
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_2(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Locals_33)) == (MR_mktag((MR_Integer) 0))))
    {
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Params_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Locals_33, (MR_Integer) 0)));
      {
        ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_7(ml_backend__ml_tailcall__env_ptr);
      }
    }
    else
    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Locals_33)) == (MR_mktag((MR_Integer) 1))))
    {
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__LocalVarDefns_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Locals_33, (MR_Integer) 0)));
      {
        ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_11(ml_backend__ml_tailcall__env_ptr);
      }
    }
    else
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = MR_FALSE;
    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__succeeded)
      {
        ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_1(ml_backend__ml_tailcall__env_ptr);
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_12(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__conv0_Locals_33, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Locals_5, ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_3, ml_backend__ml_tailcall__env_ptr);
          }
        }
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0(
  MR_Word ml_backend__ml_tailcall__Lval_4,
  MR_Word ml_backend__ml_tailcall__Locals_5)
{
  {
    struct ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0_s ml_backend__ml_tailcall__env;

    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Locals_5 = ml_backend__ml_tailcall__Locals_5;
    {
      MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;

      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Lval_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_tailcall__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 1)));
            MR_Word ml_backend__ml_tailcall___MaybeTag_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tailcall___FieldId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 2)));
            MR_Word ml_backend__ml_tailcall__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 3)));
            MR_Word ml_backend__ml_tailcall__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 4)));

            {
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0(ml_backend__ml_tailcall__Rval_10, (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__Locals_5);
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_tailcall__Var0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 1)));
                MR_Word ml_backend__ml_tailcall__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 2)));
                MR_Word ml_backend__ml_tailcall___ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 0)));
                MR_Word ml_backend__ml_tailcall___QualKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 1)));

                (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__VarName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 2)));
                {
                  ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0_12(&ml_backend__ml_tailcall__env);
                }
                if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_3_f_0_env_0__succeeded)
                  ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
                else
                  ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 1:
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
              break;
          }
          break;
      }
      return ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_1(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_3(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Locals_78 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__conv0_Locals_78);
    {
      ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_2(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_4(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_6(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__FuncDefn_77 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__conv1_FuncDefn_77);
    {
      ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_5(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_5(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    {
      MR_Word ml_backend__ml_tailcall__Var_79;
      MR_Word ml_backend__ml_tailcall__Var_80;
      MR_Word ml_backend__ml_tailcall__Var_81;
      MR_Word ml_backend__ml_tailcall__Var_82;
      MR_Word ml_backend__ml_tailcall__Var_83;
      MR_Word ml_backend__ml_tailcall__Var_84;
      MR_Word ml_backend__ml_tailcall__Var_85;
      MR_Word ml_backend__ml_tailcall__Var_86;
      MR_Word ml_backend__ml_tailcall___PredId_73;

      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__FuncDefn_77, (MR_Integer) 0)));
      ml_backend__ml_tailcall__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__FuncDefn_77, (MR_Integer) 1)));
      ml_backend__ml_tailcall__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__FuncDefn_77, (MR_Integer) 2)));
      ml_backend__ml_tailcall__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__FuncDefn_77, (MR_Integer) 3)));
      ml_backend__ml_tailcall__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__FuncDefn_77, (MR_Integer) 4)));
      ml_backend__ml_tailcall__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__FuncDefn_77, (MR_Integer) 5)));
      ml_backend__ml_tailcall__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__FuncDefn_77, (MR_Integer) 6)));
      ml_backend__ml_tailcall__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__FuncDefn_77, (MR_Integer) 7)));
      ml_backend__ml_tailcall__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__FuncDefn_77, (MR_Integer) 8)));
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Var_74)) == (MR_mktag((MR_Integer) 0)));
      if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded)
      {
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__PlainFuncName_72 = (MR_Word) MR_body(((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Var_74), (MR_Integer) 0);
        {
          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__PlainFuncName_72, (MR_Integer) 0)));
          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__PlainFuncName_72, (MR_Integer) 1)));
          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__PlainFuncName_72, (MR_Integer) 2)));
          ml_backend__ml_tailcall___PredId_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__PlainFuncName_72, (MR_Integer) 3)));
          {
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__PredLabel_67, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Var_89);
          }
          if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded)
          {
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__ProcId_68 == (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Var_90);
            if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded)
            {
              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__TypeInfo_37_93 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[8];
              {
                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = mercury__builtin__unify_2_p_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__TypeInfo_37_93, ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__MaybeSeqNum_63)), ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Var_91)));
              }
              if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded)
                {
                  ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
                }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_7(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__commit_1) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__conv1_FuncDefn_77, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__FuncDefns_70, ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_6, ml_backend__ml_tailcall__env_ptr);
          }
        }
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_2(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Locals_78)) == (MR_mktag((MR_Integer) 2)));
    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded)
    {
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__FuncDefns_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Locals_78, (MR_Integer) 0)));
      {
        {
          ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_7(ml_backend__ml_tailcall__env_ptr);
        }
        if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded)
          {
            ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_1(ml_backend__ml_tailcall__env_ptr);
          }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_8(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__conv0_Locals_78, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Locals_5, ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_3, ml_backend__ml_tailcall__env_ptr);
          }
        }
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0(
  MR_Word ml_backend__ml_tailcall__Rval_4,
  MR_Word ml_backend__ml_tailcall__Locals_5)
{
  {
    struct ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0_s ml_backend__ml_tailcall__env;

    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Locals_5 = ml_backend__ml_tailcall__Locals_5;
    while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;

        switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_tailcall__SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 2)));
                  MR_Integer ml_backend__ml_tailcall___Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_tailcall__next_value_of_Rval_4 = ml_backend__ml_tailcall__SubRval_9;

                    ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__next_value_of_Rval_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_tailcall__Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Const_10)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Const_10, (MR_Integer) 0)))) {
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
                        case (MR_Integer) 15:
                        case (MR_Integer) 16:
                        case (MR_Integer) 17:
                        case (MR_Integer) 18:
                          ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 13:
                          {
                            MR_Word ml_backend__ml_tailcall__CodeAddr_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Const_10, (MR_Integer) 1)));
                            MR_Word ml_backend__ml_tailcall__QualifiedProcLabel_61;
                            MR_Word ml_backend__ml_tailcall__ProcLabel_66;
                            MR_Word ml_backend__ml_tailcall___ModuleName_65;

                            if (((MR_tag((MR_Word) ml_backend__ml_tailcall__CodeAddr_27)) == (MR_mktag((MR_Integer) 1))))
                            {
                              MR_Integer ml_backend__ml_tailcall__SeqNum_64;
                              MR_Word ml_backend__ml_tailcall___Sig_75;

                              ml_backend__ml_tailcall__QualifiedProcLabel_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_27, (MR_Integer) 0)));
                              ml_backend__ml_tailcall__SeqNum_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_27, (MR_Integer) 1)));
                              ml_backend__ml_tailcall___Sig_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_27, (MR_Integer) 2)));
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__MaybeSeqNum_63 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__SeqNum_64));
                              }
                            }
                            else
                            {
                              MR_Word ml_backend__ml_tailcall___Sig_62;

                              ml_backend__ml_tailcall__QualifiedProcLabel_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_27, (MR_Integer) 0)));
                              ml_backend__ml_tailcall___Sig_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_27, (MR_Integer) 1)));
                              (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__MaybeSeqNum_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            }
                            ml_backend__ml_tailcall___ModuleName_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualifiedProcLabel_61, (MR_Integer) 0)));
                            ml_backend__ml_tailcall__ProcLabel_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualifiedProcLabel_61, (MR_Integer) 1)));
                            (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__PredLabel_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_66, (MR_Integer) 0)));
                            (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__ProcId_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_66, (MR_Integer) 1)));
                            {
                              ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0_8(&ml_backend__ml_tailcall__env);
                            }
                            if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded)
                              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
                            else
                              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
                          }
                          break;
                        case (MR_Integer) 14:
                          {
                            MR_Word ml_backend__ml_tailcall__ModuleName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Const_10, (MR_Integer) 1)));
                            MR_Word ml_backend__ml_tailcall__VarName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Const_10, (MR_Integer) 2)));
                            MR_Word ml_backend__ml_tailcall__QualVarName_30;

                            {
                              ml_backend__ml_tailcall__QualVarName_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualVarName_30, 0) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_28));
                              MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualVarName_30, 1) = ((MR_Box) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualVarName_30, 2) = ((MR_Box) (ml_backend__ml_tailcall__VarName_29));
                            }
                            {
                              (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded = ml_backend__ml_tailcall__var_is_in_locals_2_p_0(ml_backend__ml_tailcall__QualVarName_30, (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Locals_5);
                            }
                            if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__succeeded)
                              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
                            else
                              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
                          }
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_tailcall__SubRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_tailcall___Op_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_tailcall__next_value_of_Rval_4 = ml_backend__ml_tailcall__SubRval_21;

                    ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__next_value_of_Rval_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__ml_tailcall__SubRvalA_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_tailcall__SubRvalB_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRefA_14;
                  MR_Word ml_backend__ml_tailcall___Op_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

                  {
                    ml_backend__ml_tailcall__MayYieldDanglingStackRefA_14 = ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_2_f_0(ml_backend__ml_tailcall__SubRvalA_12, (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Locals_5);
                  }
                  switch (ml_backend__ml_tailcall__MayYieldDanglingStackRefA_14) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ml_backend__ml_tailcall__next_value_of_Rval_4 = ml_backend__ml_tailcall__SubRvalB_13;

                          ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__next_value_of_Rval_4;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__ml_tailcall__Lval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

                  {
                    ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = ml_backend__ml_tailcall__may_lval_yield_dangling_stack_ref_2_f_0(ml_backend__ml_tailcall__Lval_15, (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__may_rval_yield_dangling_stack_ref_3_f_0_env_0__Locals_5);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ml_backend__ml_tailcall__RowRval_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_tailcall___VectorCommon_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_tailcall__next_value_of_Rval_4 = ml_backend__ml_tailcall__RowRval_17;

                    ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__next_value_of_Rval_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 6:
                ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
                break;
            }
            break;
        }
        return ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;
      }
      break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_1(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_3(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Locals_17 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__conv0_Locals_17);
    {
      ml_backend__ml_tailcall__var_is_in_locals_2_p_0_2(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_4(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_6(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Param_16 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__conv1_Param_16);
    {
      ml_backend__ml_tailcall__var_is_in_locals_2_p_0_5(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_5(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    {
      MR_Word ml_backend__ml_tailcall__Var_13;
      MR_Word ml_backend__ml_tailcall__Var_14;

      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Param_16, (MR_Integer) 0)));
      ml_backend__ml_tailcall__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Param_16, (MR_Integer) 1)));
      ml_backend__ml_tailcall__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Param_16, (MR_Integer) 2)));
      {
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__VarName_7, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Var_26);
      }
      if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__succeeded)
        {
          ml_backend__ml_tailcall__var_is_in_locals_2_p_0_4(ml_backend__ml_tailcall__env_ptr);
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_7(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__commit_1) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__conv1_Param_16, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Params_11, ml_backend__ml_tailcall__var_is_in_locals_2_p_0_6, ml_backend__ml_tailcall__env_ptr);
          }
        }
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_8(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__commit_2, 1);
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_10(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__LocalVarDefn_15 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__conv2_LocalVarDefn_15);
    {
      ml_backend__ml_tailcall__var_is_in_locals_2_p_0_9(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_9(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    {
      MR_Word ml_backend__ml_tailcall__Var_18;
      MR_Word ml_backend__ml_tailcall__Var_19;
      MR_Word ml_backend__ml_tailcall__Var_20;
      MR_Word ml_backend__ml_tailcall__Var_21;

      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__LocalVarDefn_15, (MR_Integer) 0)));
      ml_backend__ml_tailcall__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__LocalVarDefn_15, (MR_Integer) 1)));
      ml_backend__ml_tailcall__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__LocalVarDefn_15, (MR_Integer) 2)));
      ml_backend__ml_tailcall__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__LocalVarDefn_15, (MR_Integer) 3)));
      ml_backend__ml_tailcall__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__LocalVarDefn_15, (MR_Integer) 4)));
      {
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__VarName_7, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Var_25);
      }
      if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__succeeded)
        {
          ml_backend__ml_tailcall__var_is_in_locals_2_p_0_8(ml_backend__ml_tailcall__env_ptr);
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_11(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__commit_2) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__conv2_LocalVarDefn_15, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__LocalVarDefns_9, ml_backend__ml_tailcall__var_is_in_locals_2_p_0_10, ml_backend__ml_tailcall__env_ptr);
          }
        }
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_2(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Locals_17)) == (MR_mktag((MR_Integer) 0))))
    {
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Params_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Locals_17, (MR_Integer) 0)));
      {
        ml_backend__ml_tailcall__var_is_in_locals_2_p_0_7(ml_backend__ml_tailcall__env_ptr);
      }
    }
    else
    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Locals_17)) == (MR_mktag((MR_Integer) 1))))
    {
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__LocalVarDefns_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__Locals_17, (MR_Integer) 0)));
      {
        ml_backend__ml_tailcall__var_is_in_locals_2_p_0_11(ml_backend__ml_tailcall__env_ptr);
      }
    }
    else
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__succeeded = MR_FALSE;
    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__succeeded)
      {
        ml_backend__ml_tailcall__var_is_in_locals_2_p_0_1(ml_backend__ml_tailcall__env_ptr);
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0_12(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__conv0_Locals_17, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__LocalsList_4, ml_backend__ml_tailcall__var_is_in_locals_2_p_0_3, ml_backend__ml_tailcall__env_ptr);
          }
        }
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall__var_is_in_locals_2_p_0(
  MR_Word ml_backend__ml_tailcall__Var_3,
  MR_Word ml_backend__ml_tailcall__LocalsList_4)
{
  {
    struct ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0_s ml_backend__ml_tailcall__env;

    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__LocalsList_4 = ml_backend__ml_tailcall__LocalsList_4;
    {
      MR_Word ml_backend__ml_tailcall___ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tailcall___QualKind_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_3, (MR_Integer) 1)));

      (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__VarName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var_3, (MR_Integer) 2)));
      {
        ml_backend__ml_tailcall__var_is_in_locals_2_p_0_12(&ml_backend__ml_tailcall__env);
      }
      return (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__var_is_in_locals_2_p_0_env_0__succeeded;
    }
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
            {
              ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_tailcall__CallReturnLval_5, ml_backend__ml_tailcall__Var_10);
            }
            if (ml_backend__ml_tailcall__succeeded)
            {
              {
                ml_backend__ml_tailcall__Var_9 = ml_backend__ml_tailcall__lval_is_local_1_f_0(ml_backend__ml_tailcall__CallReturnLval_5);
              }
              ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__Var_9 == (MR_Integer) 0);
              if (ml_backend__ml_tailcall__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_tailcall__next_value_of_HeadVar__1_1 = ml_backend__ml_tailcall__ReturnStmtRvals_4;
                  MR_Word ml_backend__ml_tailcall__next_value_of_HeadVar__2_2 = ml_backend__ml_tailcall__CallReturnLvals_6;

                  ml_backend__ml_tailcall__HeadVar__2_2 = ml_backend__ml_tailcall__next_value_of_HeadVar__2_2;
                  ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__next_value_of_HeadVar__1_1;
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
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_41,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_42)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__WarnTailCalls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_7, (MR_Integer) 5)));
    MR_Word ml_backend__ml_tailcall__MaybeRequireTailrecInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_7, (MR_Integer) 6)));
    MR_Word ml_backend__ml_tailcall__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_7, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_7, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_7, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_7, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_7, (MR_Integer) 4)));

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__WarnTailCalls_12 == (MR_Integer) 1);
    if (ml_backend__ml_tailcall__succeeded)
      ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__MaybeRequireTailrecInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ml_backend__ml_tailcall__succeeded)
      *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_42 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_41;
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
            MR_Word ml_backend__ml_tailcall__RequireTailrecInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeRequireTailrecInfo_13, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) ml_backend__ml_tailcall__RequireTailrecInfo_45)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ml_backend__ml_tailcall__Var_18;
              MR_Word ml_backend__ml_tailcall__TailrecType_68;

              ml_backend__ml_tailcall__WarnOrError_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_45, (MR_Integer) 0)))) & (MR_Integer) 1);
              ml_backend__ml_tailcall__TailrecType_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_45, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__ml_tailcall__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_45, (MR_Integer) 1)));
              ml_backend__ml_tailcall__succeeded = MR_TRUE;
            }
            else
              {
                ml_backend__ml_tailcall__succeeded = mercury__builtin__false_0_p_0();
              }
          }
          break;
      }
      if (ml_backend__ml_tailcall__succeeded)
      {
        MR_Word ml_backend__ml_tailcall__QualProcLabel_20;
        MR_Word ml_backend__ml_tailcall__ProcLabel_24;
        MR_Word ml_backend__ml_tailcall__PredLabel_25;
        MR_Integer ml_backend__ml_tailcall__ProcId_26;
        MR_Word ml_backend__ml_tailcall__Var_23;

        if (((MR_tag((MR_Word) ml_backend__ml_tailcall__CodeAddr_8)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Integer ml_backend__ml_tailcall___SeqNum_22;
          MR_Word ml_backend__ml_tailcall___Sig_49;

          ml_backend__ml_tailcall__QualProcLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_8, (MR_Integer) 0)));
          ml_backend__ml_tailcall___SeqNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_8, (MR_Integer) 1)));
          ml_backend__ml_tailcall___Sig_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_8, (MR_Integer) 2)));
        }
        else
        {
          MR_Word ml_backend__ml_tailcall___Sig_21;

          ml_backend__ml_tailcall__QualProcLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_8, (MR_Integer) 0)));
          ml_backend__ml_tailcall___Sig_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_8, (MR_Integer) 1)));
        }
        ml_backend__ml_tailcall__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_20, (MR_Integer) 0)));
        ml_backend__ml_tailcall__ProcLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_20, (MR_Integer) 1)));
        ml_backend__ml_tailcall__PredLabel_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_24, (MR_Integer) 0)));
        ml_backend__ml_tailcall__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_24, (MR_Integer) 1)));
        if (((MR_tag((MR_Word) ml_backend__ml_tailcall__PredLabel_25)) == (MR_mktag((MR_Integer) 1))))
          *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_42 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_41;
        else
        {
          MR_Word ml_backend__ml_tailcall__PredOrFunc_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_25, (MR_Integer) 0)));
          MR_String ml_backend__ml_tailcall__Name_33 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_25, (MR_Integer) 2)));
          MR_Integer ml_backend__ml_tailcall__Arity_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_25, (MR_Integer) 3)));
          MR_Word ml_backend__ml_tailcall___MaybeModule_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_25, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall___CodeModel_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_25, (MR_Integer) 4)));
          MR_Word ml_backend__ml_tailcall___NonOutputFunc_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_25, (MR_Integer) 5)));

          mercury__private_builtin__dummy_var = (MR_Integer) 0;
          {
            ml_backend__ml_tailcall__succeeded = mercury__set__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0, ml_backend__ml_tailcall__Markers_9, ((MR_Box) ((MR_Integer) 0)));
          }
          if (ml_backend__ml_tailcall__succeeded)
            *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_42 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_41;
          else
          {
            MR_Word ml_backend__ml_tailcall__SymName_37;
            MR_Word ml_backend__ml_tailcall__SimpleCallId_38;
            MR_Word ml_backend__ml_tailcall__Specs0_39;
            MR_Word ml_backend__ml_tailcall__Specs_40;
            MR_Word ml_backend__ml_tailcall__Var_62;
            MR_Word ml_backend__ml_tailcall__Var_63;
            MR_Word ml_backend__ml_tailcall__Var_64;

            {
              ml_backend__ml_tailcall__SymName_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SymName_37, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_33));
            }
            {
              ml_backend__ml_tailcall__SimpleCallId_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_38, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredOrFunc_31));
              MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_38, 1) = ((MR_Box) (ml_backend__ml_tailcall__SymName_37));
              MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_38, 2) = ((MR_Box) (ml_backend__ml_tailcall__Arity_34));
            }
            ml_backend__ml_tailcall__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_41, (MR_Integer) 0)));
            ml_backend__ml_tailcall__Specs0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_41, (MR_Integer) 1)));
            {
              hlds__mark_tail_calls__add_message_for_nontail_self_recursive_call_6_p_0(ml_backend__ml_tailcall__SimpleCallId_38, ml_backend__ml_tailcall__ProcId_26, ml_backend__ml_tailcall__Context_10, ml_backend__ml_tailcall__WarnOrError_15, ml_backend__ml_tailcall__Specs0_39, &ml_backend__ml_tailcall__Specs_40);
            }
            ml_backend__ml_tailcall__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_41, (MR_Integer) 0)));
            ml_backend__ml_tailcall__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_41, (MR_Integer) 1)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_42 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Var_63));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Specs_40));
            }
          }
        }
      }
      else
        *ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_42 = ml_backend__ml_tailcall__STATE_VARIABLE_InBodyInfo_0_41;
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
    MR_Word ml_backend__ml_tailcall__conv0_STATE_VARIABLE_Specs_36;

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_function_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv1_FuncDefn_12, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3), &ml_backend__ml_tailcall__conv0_STATE_VARIABLE_Specs_36);
    }
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv1_FuncDefn_12));
    *ml_backend__ml_tailcall__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_tailcall__conv0_STATE_VARIABLE_Specs_36));
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

    {
      ml_backend__ml_tailcall__ModuleName_10 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_tailcall__Var_17);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_tailcall__Globals_6, (MR_Integer) 31, &ml_backend__ml_tailcall__WarnTailCallsBool_11);
    }
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
    {
      mercury__list__map_foldl_5_p_0(ml_backend__ml_tailcall__TypeCtorInfo_54_54, ml_backend__ml_tailcall__TypeCtorInfo_54_54, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__Var_19, ml_backend__ml_tailcall__FuncDefns0_13, &ml_backend__ml_tailcall__FuncDefns_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_tailcall__conv2_Specs_8);
    }
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

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____at_tail_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
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

    {
      ml_backend__ml_tailcall____Compare____at_tail_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
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

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____found_recursive_call_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
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

    {
      ml_backend__ml_tailcall____Compare____found_recursive_call_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
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

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____is_local_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
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

    {
      ml_backend__ml_tailcall____Compare____is_local_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____local_defns_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____local_defns_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____local_defns_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

    {
      ml_backend__ml_tailcall____Compare____local_defns_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
    *ml_backend__ml_tailcall__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tailcall__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall____Unify____locals_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____locals_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall____Compare____locals_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_tailcall__conv0_HeadVar__1_1;

    {
      ml_backend__ml_tailcall____Compare____locals_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
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

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____may_yield_dangling_stack_ref_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
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

    {
      ml_backend__ml_tailcall____Compare____may_yield_dangling_stack_ref_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
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

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____tailcall_info_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
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

    {
      ml_backend__ml_tailcall____Compare____tailcall_info_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
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

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____tc_in_body_info_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
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

    {
      ml_backend__ml_tailcall____Compare____tc_in_body_info_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
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

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____warn_tail_calls_0_0(((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2));
    }
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

    {
      ml_backend__ml_tailcall____Compare____warn_tail_calls_0_0(&ml_backend__ml_tailcall__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_2), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_3));
    }
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
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0);
	MR_register_type_ctor_info(&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_locals_0);
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
