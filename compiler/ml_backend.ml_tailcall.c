/*
** Automatically generated from `ml_tailcall.m'
** by the Mercury compiler,
** version rotd-2016-10-04
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
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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



struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s {
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5;
  MR_bool ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__VarName_11;
  jmp_buf ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_1;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_68_68;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_70_70;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74;
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv3_Locals_74;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76;
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv4_Defn_76;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81;
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv5_Param_81;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__PredLabel_35;
  MR_Integer ml_backend__ml_tailcall__check_const_3_f_0_env_0__ProcId_36;
  jmp_buf ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_0;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__TypeInfo_23_46;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_42_42;
  MR_Integer ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_43_43;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_44_44;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49;
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv0_Locals_49;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51;
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv1_Defn_51;
  MR_Word ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56;
  MR_Box ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv2_Param_56;
};

struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s {
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_5;
  MR_bool ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded;
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__VarName_21;
  jmp_buf ml_backend__ml_tailcall__check_lval_3_f_0_env_0__commit_0;
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23;
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24;
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_25_25;
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29;
  MR_Box ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv0_Locals_29;
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31;
  MR_Box ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv1_Defn_31;
  MR_Word ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36;
  MR_Box ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv2_Param_36;
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_1[1];

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1;

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_local_defns_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_local_defns_0[2];

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_local_defns_0[2];

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

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_warn_tail_calls_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_functor_desc_warn_tail_calls_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_value_ordered_warn_tail_calls_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__enum_name_ordered_warn_tail_calls_0[2];

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_warn_tail_calls_0[2];

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
ml_backend__ml_tailcall____Unify____warn_tail_calls_0_0_10001(
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tailcall____Compare____warn_tail_calls_0_0_10001(
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__426__1_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_82,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_121);

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
ml_backend__ml_tailcall__check_const_2_f_0_10(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_12(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_13(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_15(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_14(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_17(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_16(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_11(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_18(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_1(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_3(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_4(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_6(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_5(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_8(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_7(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_2(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_9(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0(
  MR_Word ml_backend__ml_tailcall__Const_4,
  MR_Word ml_backend__ml_tailcall__Locals_5);

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_1(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_3(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_4(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_6(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_5(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_8(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_7(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_2(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_9(
  void * ml_backend__ml_tailcall__env_ptr_arg);

static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0(
  MR_Word ml_backend__ml_tailcall__Lval_4,
  MR_Word ml_backend__ml_tailcall__Locals_5);

static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_rval_2_f_0(
  MR_Word ml_backend__ml_tailcall__Rval_4,
  MR_Word ml_backend__ml_tailcall__Locals_5);

static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_rvals_2_f_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__Locals_2);

static MR_Word MR_CALL 
ml_backend__ml_tailcall__lval_is_local_1_f_0(
  MR_Word ml_backend__ml_tailcall__Lval_3);

static MR_bool MR_CALL 
ml_backend__ml_tailcall__match_return_vals_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall__report_nontailcall_5_p_0(
  MR_Word ml_backend__ml_tailcall__WarnOrError_6,
  MR_Word ml_backend__ml_tailcall__PredLabel_7,
  MR_Integer ml_backend__ml_tailcall__ProcId_8,
  MR_Word ml_backend__ml_tailcall__Context_9,
  MR_Word * ml_backend__ml_tailcall__Specs_10);

static void MR_CALL 
ml_backend__ml_tailcall__maybe_warn_tailcalls_4_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_5,
  MR_Word ml_backend__ml_tailcall__CodeAddr_6,
  MR_Word ml_backend__ml_tailcall__Context_7,
  MR_Word * ml_backend__ml_tailcall__Specs_8);

static MR_Word MR_CALL 
ml_backend__ml_tailcall__found_recursive_call_combine_2_f_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_default_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word * ml_backend__ml_tailcall__FoundRecCall_9,
  MR_Word * ml_backend__ml_tailcall__Warnings_10,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_11,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_12,
  MR_Word ml_backend__ml_tailcall__Default0_13,
  MR_Word * ml_backend__ml_tailcall__Default_14);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_case_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word * ml_backend__ml_tailcall__FoundRecCall_9,
  MR_Word * ml_backend__ml_tailcall__Warnings_10,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_11,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_12,
  MR_Word ml_backend__ml_tailcall__Case0_13,
  MR_Word * ml_backend__ml_tailcall__Case_14);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_cases_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word * ml_backend__ml_tailcall__HeadVar__3_3,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_4,
  MR_Word * ml_backend__ml_tailcall__HeadVar__5_5,
  MR_Word ml_backend__ml_tailcall__HeadVar__6_6,
  MR_Word * ml_backend__ml_tailcall__HeadVar__7_7);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_8_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_9,
  MR_Word ml_backend__ml_tailcall__Context_10,
  MR_Word * ml_backend__ml_tailcall__FoundRecCall_11,
  MR_Word * ml_backend__ml_tailcall__Warnings_12,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_13,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_14,
  MR_Word ml_backend__ml_tailcall__Stmt0_15,
  MR_Word * ml_backend__ml_tailcall__Stmt_16);

static MR_bool MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_8_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_8_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_9,
  MR_Word ml_backend__ml_tailcall__Context_10,
  MR_Word * ml_backend__ml_tailcall__FoundRecCall_11,
  MR_Word * ml_backend__ml_tailcall__Warnings_12,
  MR_Word ml_backend__ml_tailcall__AtTailAfter0_13,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_14,
  MR_Word ml_backend__ml_tailcall__Stmt0_15,
  MR_Word * ml_backend__ml_tailcall__Stmt_16);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statement_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word * ml_backend__ml_tailcall__FoundRecCall_9,
  MR_Word * ml_backend__ml_tailcall__Warnings_10,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_16,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_17,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_Statement_0_18,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_Statement_19);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statements_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word * ml_backend__ml_tailcall__HeadVar__3_3,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_4,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_5,
  MR_Word ml_backend__ml_tailcall__HeadVar__6_6,
  MR_Word * ml_backend__ml_tailcall__HeadVar__7_7);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word * ml_backend__ml_tailcall__HeadVar__3_3,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_4,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_5,
  MR_Word ml_backend__ml_tailcall__HeadVar__6_6,
  MR_Word * ml_backend__ml_tailcall__HeadVar__7_7);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_function_body_5_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_6,
  MR_Word ml_backend__ml_tailcall__AtTail_7,
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
  MR_Word ml_backend__ml_tailcall__Body0_9,
  MR_Word * ml_backend__ml_tailcall__Body_10);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_6_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_6_p_0(
  MR_Word ml_backend__ml_tailcall__ModuleInfo_7,
  MR_Word ml_backend__ml_tailcall__ModuleName_8,
  MR_Word ml_backend__ml_tailcall__WarnTailCalls_9,
  MR_Word ml_backend__ml_tailcall__Defn0_10,
  MR_Word * ml_backend__ml_tailcall__Defn_11,
  MR_Word * ml_backend__ml_tailcall__Warnings_12);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defns_6_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defns_6_p_0(
  MR_Word ml_backend__ml_tailcall__ModuleInfo_7,
  MR_Word ml_backend__ml_tailcall__ModuleName_8,
  MR_Word ml_backend__ml_tailcall__WarnTailCalls_9,
  MR_Word * ml_backend__ml_tailcall__HeadVar__4_4,
  MR_Word ml_backend__ml_tailcall__Defns0_11,
  MR_Word * ml_backend__ml_tailcall__Defns_12);

static void MR_CALL 
ml_backend__ml_tailcall__not_at_tail_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_1[24][2];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_2[1][9];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_3[1][1];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_4[1][5];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_5[1][4];




static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_1[24][2] = {
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_require_tail_recursion_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: code is not recursive."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "recursive call is not tail recursive."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[7])))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In:"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In mode number"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_2[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_warn_tail_calls_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_tailcall__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0)),
    ((MR_Box) (&ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_5[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_stmt_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_at_tail_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_1 = {
  (MR_String) "not_at_tail_seen_reccall",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_at_tail_0_2 = {
  (MR_String) "not_at_tail_have_not_seen_reccall",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_at_tail_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_1[1] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0
};

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1 = {
  (MR_String) "local_defns",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_local_defns_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1
};

static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_local_defns_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_local_defns_0[2] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1,
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0
};

static const MR_Integer ml_backend__ml_tailcall__ml_backend__ml_tailcall__functor_number_map_local_defns_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tailcall____Unify____local_defns_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tailcall____Compare____local_defns_0_0_10001)),
  (MR_String) "ml_backend.ml_tailcall",
  (MR_String) "local_defns",
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_name_ordered_local_defns_0 },
  {     ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_local_defns_0 },
  (MR_Integer) 2,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_info_0_0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tailcall_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_stag_ordered_tailcall_info_0_0[1] = {
  &ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_ptag_ordered_tailcall_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

static MR_bool MR_CALL 
ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__426__1_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_82,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_121)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____at_tail_0_0(ml_backend__ml_tailcall__HeadVar__1_82, ml_backend__ml_tailcall__HeadVar__2_121);
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
    MR_bool ml_backend__ml_tailcall__succeeded;
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
        MR_Word ml_backend__ml_tailcall__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_tailcall__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_tailcall__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_tailcall__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__ml_tailcall__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ml_backend__ml_tailcall__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_tailcall__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_tailcall__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__ml_tailcall__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ml_backend__ml_tailcall__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ml_backend__ml_tailcall__V_18_18;

        {
          hlds__hlds_module____Compare____module_info_0_0(&ml_backend__ml_tailcall__V_18_18, ml_backend__ml_tailcall__V_4_4, ml_backend__ml_tailcall__V_11_11);
        }
        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_18_18 == (MR_Integer) 0);
        ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
        if (ml_backend__ml_tailcall__succeeded)
          *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_18_18;
        else
          {
            MR_Word ml_backend__ml_tailcall__V_19_19;

            {
              ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_tailcall__V_19_19, ml_backend__ml_tailcall__V_5_5, ml_backend__ml_tailcall__V_12_12);
            }
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_19_19 == (MR_Integer) 0);
            ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
            if (ml_backend__ml_tailcall__succeeded)
              *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_19_19;
            else
              {
                MR_Word ml_backend__ml_tailcall__V_20_20;

                {
                  ml_backend__mlds____Compare____mlds_entity_name_0_0(&ml_backend__ml_tailcall__V_20_20, ml_backend__ml_tailcall__V_6_6, ml_backend__ml_tailcall__V_13_13);
                }
                ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_20_20 == (MR_Integer) 0);
                ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
                if (ml_backend__ml_tailcall__succeeded)
                  *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_20_20;
                else
                  {
                    MR_Word ml_backend__ml_tailcall__V_21_21;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[5], &ml_backend__ml_tailcall__V_21_21, ((MR_Box) (ml_backend__ml_tailcall__V_7_7)), ((MR_Box) (ml_backend__ml_tailcall__V_14_14)));
                    }
                    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_21_21 == (MR_Integer) 0);
                    ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
                    if (ml_backend__ml_tailcall__succeeded)
                      *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_21_21;
                    else
                      {
                        MR_Word ml_backend__ml_tailcall__V_22_22;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[4], &ml_backend__ml_tailcall__V_22_22, ((MR_Box) (ml_backend__ml_tailcall__V_8_8)), ((MR_Box) (ml_backend__ml_tailcall__V_15_15)));
                        }
                        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_22_22 == (MR_Integer) 0);
                        ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
                        if (ml_backend__ml_tailcall__succeeded)
                          *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_22_22;
                        else
                          {
                            MR_Word ml_backend__ml_tailcall__V_23_23;
                            MR_Integer ml_backend__ml_tailcall__V_33_33 = (MR_Integer) ml_backend__ml_tailcall__V_9_9;
                            MR_Integer ml_backend__ml_tailcall__V_34_34 = (MR_Integer) ml_backend__ml_tailcall__V_16_16;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_tailcall__V_23_23, ml_backend__ml_tailcall__V_33_33, ml_backend__ml_tailcall__V_34_34);
                            }
                            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_23_23 == (MR_Integer) 0);
                            ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
                            if (ml_backend__ml_tailcall__succeeded)
                              *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_23_23;
                            else
                              {
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[6], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__V_10_10)), ((MR_Box) (ml_backend__ml_tailcall__V_17_17)));
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
        MR_Word ml_backend__ml_tailcall__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_tailcall__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__ml_tailcall__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ml_backend__ml_tailcall__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ml_backend__ml_tailcall__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_tailcall__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_tailcall__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_tailcall__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__ml_tailcall__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 6)));

        {
          ml_backend__ml_tailcall__succeeded = hlds__hlds_module____Unify____module_info_0_0(ml_backend__ml_tailcall__V_3_3, ml_backend__ml_tailcall__V_10_10);
        }
        if (ml_backend__ml_tailcall__succeeded)
          {
            {
              ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_tailcall__V_4_4, ml_backend__ml_tailcall__V_11_11);
            }
            if (ml_backend__ml_tailcall__succeeded)
              {
                {
                  ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_entity_name_0_0(ml_backend__ml_tailcall__V_5_5, ml_backend__ml_tailcall__V_12_12);
                }
                if (ml_backend__ml_tailcall__succeeded)
                  {
                    ml_backend__ml_tailcall__TypeInfo_22_22 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[5];
                    {
                      ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_22_22, ((MR_Box) (ml_backend__ml_tailcall__V_6_6)), ((MR_Box) (ml_backend__ml_tailcall__V_13_13)));
                    }
                    if (ml_backend__ml_tailcall__succeeded)
                      {
                        ml_backend__ml_tailcall__TypeInfo_23_23 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[4];
                        {
                          ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_23_23, ((MR_Box) (ml_backend__ml_tailcall__V_7_7)), ((MR_Box) (ml_backend__ml_tailcall__V_14_14)));
                        }
                        if (ml_backend__ml_tailcall__succeeded)
                          {
                            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_8_8 == ml_backend__ml_tailcall__V_15_15);
                            if (ml_backend__ml_tailcall__succeeded)
                              {
                                ml_backend__ml_tailcall__TypeInfo_24_24 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[6];
                                {
                                  ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_24_24, ((MR_Box) (ml_backend__ml_tailcall__V_9_9)), ((MR_Box) (ml_backend__ml_tailcall__V_16_16)));
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
    MR_bool ml_backend__ml_tailcall__succeeded;
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
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar1_4 = ml_backend__ml_tailcall__HeadVar__2_2;
    MR_Word ml_backend__ml_tailcall__Cast_HeadVar2_5 = ml_backend__ml_tailcall__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[4], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar2_5)));
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
      ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[4], ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_tailcall__Cast_HeadVar2_4)));
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
    MR_Integer ml_backend__ml_tailcall__CastX_12 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
    MR_Integer ml_backend__ml_tailcall__CastY_13 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_12 == ml_backend__ml_tailcall__CastY_13);
    if (ml_backend__ml_tailcall__succeeded)
      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__ml_tailcall__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ml_backend__ml_tailcall__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[2], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__V_16_16)), ((MR_Box) (ml_backend__ml_tailcall__V_11_11)));
            }
          }
        else
          *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word ml_backend__ml_tailcall__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[3], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__V_17_17)), ((MR_Box) (ml_backend__ml_tailcall__V_5_5)));
            }
          }
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
    MR_Integer ml_backend__ml_tailcall__CastX_7 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
    MR_Integer ml_backend__ml_tailcall__CastY_8 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_7 == ml_backend__ml_tailcall__CastY_8);
    if (ml_backend__ml_tailcall__succeeded)
      ml_backend__ml_tailcall__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__ml_tailcall__TypeInfo_9_9;
        MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__V_6_6;

        ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_tailcall__succeeded)
          {
            ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
            ml_backend__ml_tailcall__TypeInfo_9_9 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[2];
            {
              ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_9_9, ((MR_Box) (ml_backend__ml_tailcall__V_5_5)), ((MR_Box) (ml_backend__ml_tailcall__V_6_6)));
            }
          }
      }
    else
      {
        MR_Word ml_backend__ml_tailcall__TypeInfo_10_10;
        MR_Word ml_backend__ml_tailcall__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__V_4_4;

        ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__ml_tailcall__succeeded)
          {
            ml_backend__ml_tailcall__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
            ml_backend__ml_tailcall__TypeInfo_10_10 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[3];
            {
              ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_10_10, ((MR_Box) (ml_backend__ml_tailcall__V_3_3)), ((MR_Box) (ml_backend__ml_tailcall__V_4_4)));
            }
          }
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
    MR_bool ml_backend__ml_tailcall__succeeded;
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
    MR_bool ml_backend__ml_tailcall__succeeded;
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
            MR_Word ml_backend__ml_tailcall__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[1], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__V_13_13)), ((MR_Box) (ml_backend__ml_tailcall__V_5_5)));
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
            MR_Word ml_backend__ml_tailcall__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tailcall__V_4_4;

            ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_tailcall__succeeded)
              {
                ml_backend__ml_tailcall__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
                ml_backend__ml_tailcall__TypeInfo_11_11 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[1];
                {
                  ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_11_11, ((MR_Box) (ml_backend__ml_tailcall__V_3_3)), ((MR_Box) (ml_backend__ml_tailcall__V_4_4)));
                }
              }
          }
          break;
      }
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_10(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_12(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv3_Locals_74);
    {
      ml_backend__ml_tailcall__check_const_2_f_0_11(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_13(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69)) == (MR_mktag((MR_Integer) 1)));
    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
      {
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69, (MR_Integer) 0)));
        {
          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_68_68)) == (MR_mktag((MR_Integer) 1)));
          if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
            {
              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_70_70 = (MR_Word) MR_body(((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_68_68), (MR_Integer) 1);
              {
                {
                  (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__VarName_11, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_70_70);
                }
                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
                  {
                    ml_backend__ml_tailcall__check_const_2_f_0_10(ml_backend__ml_tailcall__env_ptr);
                  }
              }
            }
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_15(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv4_Defn_76);
    {
      ml_backend__ml_tailcall__check_const_2_f_0_14(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_14(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    {
      MR_Word ml_backend__ml_tailcall__V_77_77;
      MR_Word ml_backend__ml_tailcall__V_78_78;
      MR_Word ml_backend__ml_tailcall__V_79_79;

      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76, (MR_Integer) 0)));
      ml_backend__ml_tailcall__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76, (MR_Integer) 1)));
      ml_backend__ml_tailcall__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76, (MR_Integer) 2)));
      ml_backend__ml_tailcall__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_76, (MR_Integer) 3)));
      {
        ml_backend__ml_tailcall__check_const_2_f_0_13(ml_backend__ml_tailcall__env_ptr);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_17(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv5_Param_81);
    {
      ml_backend__ml_tailcall__check_const_2_f_0_16(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_16(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    {
      MR_Word ml_backend__ml_tailcall__V_82_82;
      MR_Word ml_backend__ml_tailcall__V_83_83;

      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81, (MR_Integer) 0)));
      ml_backend__ml_tailcall__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81, (MR_Integer) 1)));
      ml_backend__ml_tailcall__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_81, (MR_Integer) 2)));
      {
        ml_backend__ml_tailcall__check_const_2_f_0_13(ml_backend__ml_tailcall__env_ptr);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_11(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__ml_tailcall__Defns_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74, (MR_Integer) 0)));

        {
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv4_Defn_76, ml_backend__ml_tailcall__Defns_75, ml_backend__ml_tailcall__check_const_2_f_0_15, ml_backend__ml_tailcall__env_ptr);
        }
      }
    else
      {
        MR_Word ml_backend__ml_tailcall__Params_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_74, (MR_Integer) 0)));

        {
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv5_Param_81, ml_backend__ml_tailcall__Params_80, ml_backend__ml_tailcall__check_const_2_f_0_17, ml_backend__ml_tailcall__env_ptr);
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_18(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_1) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv3_Locals_74, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5, ml_backend__ml_tailcall__check_const_2_f_0_12, ml_backend__ml_tailcall__env_ptr);
          }
        }
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_1(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_3(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv0_Locals_49);
    {
      ml_backend__ml_tailcall__check_const_2_f_0_2(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_4(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    {
      MR_Word ml_backend__ml_tailcall___PredId_38;

      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41)) == (MR_mktag((MR_Integer) 2)));
      if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
        {
          {
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 0)));
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 1)));
            (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 2)));
            ml_backend__ml_tailcall___PredId_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41, (MR_Integer) 3)));
          }
          {
            {
              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_pred_label_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__PredLabel_35, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_42_42);
            }
            if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
              {
                (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__ProcId_36 == (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_43_43);
                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
                  {
                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__TypeInfo_23_46 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[15];
                    {
                      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = mercury__builtin__unify_2_p_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__TypeInfo_23_46, ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30)), ((MR_Box) ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__V_44_44)));
                    }
                    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
                      {
                        ml_backend__ml_tailcall__check_const_2_f_0_1(ml_backend__ml_tailcall__env_ptr);
                      }
                  }
              }
          }
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_6(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv1_Defn_51);
    {
      ml_backend__ml_tailcall__check_const_2_f_0_5(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_5(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    {
      MR_Word ml_backend__ml_tailcall__V_52_52;
      MR_Word ml_backend__ml_tailcall__V_53_53;
      MR_Word ml_backend__ml_tailcall__V_54_54;

      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51, (MR_Integer) 0)));
      ml_backend__ml_tailcall__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51, (MR_Integer) 1)));
      ml_backend__ml_tailcall__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51, (MR_Integer) 2)));
      ml_backend__ml_tailcall__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Defn_51, (MR_Integer) 3)));
      {
        ml_backend__ml_tailcall__check_const_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_8(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv2_Param_56);
    {
      ml_backend__ml_tailcall__check_const_2_f_0_7(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_7(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    {
      MR_Word ml_backend__ml_tailcall__V_57_57;
      MR_Word ml_backend__ml_tailcall__V_58_58;

      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Local_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56, (MR_Integer) 0)));
      ml_backend__ml_tailcall__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56, (MR_Integer) 1)));
      ml_backend__ml_tailcall__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Param_56, (MR_Integer) 2)));
      {
        ml_backend__ml_tailcall__check_const_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_2(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__ml_tailcall__Defns_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49, (MR_Integer) 0)));

        {
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv1_Defn_51, ml_backend__ml_tailcall__Defns_50, ml_backend__ml_tailcall__check_const_2_f_0_6, ml_backend__ml_tailcall__env_ptr);
        }
      }
    else
      {
        MR_Word ml_backend__ml_tailcall__Params_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_49, (MR_Integer) 0)));

        {
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv2_Param_56, ml_backend__ml_tailcall__Params_55, ml_backend__ml_tailcall__check_const_2_f_0_8, ml_backend__ml_tailcall__env_ptr);
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0_9(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__conv0_Locals_49, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5, ml_backend__ml_tailcall__check_const_2_f_0_3, ml_backend__ml_tailcall__env_ptr);
          }
        }
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_const_2_f_0(
  MR_Word ml_backend__ml_tailcall__Const_4,
  MR_Word ml_backend__ml_tailcall__Locals_5)
{
  {
    struct ml_backend__ml_tailcall__check_const_3_f_0_env_0_s ml_backend__ml_tailcall__env;

    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__Locals_5 = ml_backend__ml_tailcall__Locals_5;
    {
      MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;

      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Const_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_tailcall__DataAddr_8 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__Const_4), (MR_Integer) 1);
            MR_Word ml_backend__ml_tailcall__DataName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__DataAddr_8, (MR_Integer) 1)));
            MR_Word ml_backend__ml_tailcall__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__DataAddr_8, (MR_Integer) 0)));

            (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__DataName_10)) == (MR_mktag((MR_Integer) 1)));
            if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
              {
                (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__VarName_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__DataName_10), (MR_Integer) 1);
                {
                  ml_backend__ml_tailcall__check_const_2_f_0_18(&ml_backend__ml_tailcall__env);
                }
                if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
                  ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
                else
                  ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
              }
            else
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 2:
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Const_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 8:
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 7:
              {
                MR_Word ml_backend__ml_tailcall__CodeAddr_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Const_4, (MR_Integer) 1)));
                MR_Word ml_backend__ml_tailcall__QualifiedProcLabel_28;
                MR_Word ml_backend__ml_tailcall__ProcLabel_34;
                MR_Word ml_backend__ml_tailcall___ModuleName_32;
                MR_Word ml_backend__ml_tailcall___QualKind_33;

                if (((MR_tag((MR_Word) ml_backend__ml_tailcall__CodeAddr_7)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Integer ml_backend__ml_tailcall__SeqNum_31;
                    MR_Word ml_backend__ml_tailcall___Sig_39;

                    ml_backend__ml_tailcall__QualifiedProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 0)));
                    ml_backend__ml_tailcall__SeqNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 1)));
                    ml_backend__ml_tailcall___Sig_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 2)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__SeqNum_31));
                    }
                  }
                else
                  {
                    MR_Word ml_backend__ml_tailcall___Sig_29;

                    ml_backend__ml_tailcall__QualifiedProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 0)));
                    ml_backend__ml_tailcall___Sig_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_7, (MR_Integer) 1)));
                    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__MaybeSeqNum_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                ml_backend__ml_tailcall___ModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualifiedProcLabel_28, (MR_Integer) 0)));
                ml_backend__ml_tailcall___QualKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualifiedProcLabel_28, (MR_Integer) 1)));
                ml_backend__ml_tailcall__ProcLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualifiedProcLabel_28, (MR_Integer) 2)));
                (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__PredLabel_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_34, (MR_Integer) 0)));
                (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__ProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_34, (MR_Integer) 1)));
                {
                  ml_backend__ml_tailcall__check_const_2_f_0_9(&ml_backend__ml_tailcall__env);
                }
                if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_const_3_f_0_env_0__succeeded)
                  ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
                else
                  ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
              }
              break;
          }
          break;
      }
      return ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_1(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_3(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv0_Locals_29);
    {
      ml_backend__ml_tailcall__check_lval_2_f_0_2(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_4(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24)) == (MR_mktag((MR_Integer) 1)));
    if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
      {
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24, (MR_Integer) 0)));
        {
          (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23)) == (MR_mktag((MR_Integer) 1)));
          if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
            {
              (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_25_25 = (MR_Word) MR_body(((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_23_23), (MR_Integer) 1);
              {
                {
                  (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__VarName_21, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__V_25_25);
                }
                if ((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
                  {
                    ml_backend__ml_tailcall__check_lval_2_f_0_1(ml_backend__ml_tailcall__env_ptr);
                  }
              }
            }
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_6(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv1_Defn_31);
    {
      ml_backend__ml_tailcall__check_lval_2_f_0_5(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_5(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    {
      MR_Word ml_backend__ml_tailcall__V_32_32;
      MR_Word ml_backend__ml_tailcall__V_33_33;
      MR_Word ml_backend__ml_tailcall__V_34_34;

      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 0)));
      ml_backend__ml_tailcall__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 1)));
      ml_backend__ml_tailcall__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 2)));
      ml_backend__ml_tailcall__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Defn_31, (MR_Integer) 3)));
      {
        ml_backend__ml_tailcall__check_lval_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_8(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36 = ((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv2_Param_36);
    {
      ml_backend__ml_tailcall__check_lval_2_f_0_7(ml_backend__ml_tailcall__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_7(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    {
      MR_Word ml_backend__ml_tailcall__V_37_37;
      MR_Word ml_backend__ml_tailcall__V_38_38;

      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Local_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36, (MR_Integer) 0)));
      ml_backend__ml_tailcall__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36, (MR_Integer) 1)));
      ml_backend__ml_tailcall__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Param_36, (MR_Integer) 2)));
      {
        ml_backend__ml_tailcall__check_lval_2_f_0_4(ml_backend__ml_tailcall__env_ptr);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_2(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (((MR_tag((MR_Word) (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__ml_tailcall__Defns_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29, (MR_Integer) 0)));

        {
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv1_Defn_31, ml_backend__ml_tailcall__Defns_30, ml_backend__ml_tailcall__check_lval_2_f_0_6, ml_backend__ml_tailcall__env_ptr);
        }
      }
    else
      {
        MR_Word ml_backend__ml_tailcall__Params_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_29, (MR_Integer) 0)));

        {
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv2_Param_36, ml_backend__ml_tailcall__Params_35, ml_backend__ml_tailcall__check_lval_2_f_0_8, ml_backend__ml_tailcall__env_ptr);
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0_9(
  void * ml_backend__ml_tailcall__env_ptr_arg)
{
  {
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s * ml_backend__ml_tailcall__env_ptr = (struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s *) ml_backend__ml_tailcall__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_local_defns_0, &(ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__conv0_Locals_29, (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_5, ml_backend__ml_tailcall__check_lval_2_f_0_3, ml_backend__ml_tailcall__env_ptr);
          }
        }
        (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_lval_2_f_0(
  MR_Word ml_backend__ml_tailcall__Lval_4,
  MR_Word ml_backend__ml_tailcall__Locals_5)
{
  {
    struct ml_backend__ml_tailcall__check_lval_3_f_0_env_0_s ml_backend__ml_tailcall__env;

    (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_5 = ml_backend__ml_tailcall__Locals_5;
    {
      MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;

      switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Lval_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_tailcall__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 1)));
            MR_Word ml_backend__ml_tailcall___MaybeTag_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tailcall___FieldId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 2)));
            MR_Word ml_backend__ml_tailcall__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 3)));
            MR_Word ml_backend__ml_tailcall__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 4)));

            {
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__Rval_10, (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_lval_3_f_0_env_0__Locals_5);
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          {
            MR_Word ml_backend__ml_tailcall__Var0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tailcall__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Lval_4, (MR_Integer) 1)));
            MR_Word ml_backend__ml_tailcall___ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tailcall___QualKind_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 1)));

            (ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_lval_3_f_0_env_0__VarName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Var0_7, (MR_Integer) 2)));
            {
              ml_backend__ml_tailcall__check_lval_2_f_0_9(&ml_backend__ml_tailcall__env);
            }
            if ((ml_backend__ml_tailcall__env).ml_backend__ml_tailcall__check_lval_3_f_0_env_0__succeeded)
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
            else
              ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
          }
          break;
      }
      return ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_rval_2_f_0(
  MR_Word ml_backend__ml_tailcall__Rval_4,
  MR_Word ml_backend__ml_tailcall__Locals_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_tailcall__succeeded;
        MR_Word ml_backend__ml_tailcall__MayYieldDanglingStackRef_6;

        switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_tailcall__SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_tailcall___Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_tailcall__Rval__tmp_copy_4 = ml_backend__ml_tailcall__SubRval_9;

                ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__Rval__tmp_copy_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_tailcall__Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

                  {
                    ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = ml_backend__ml_tailcall__check_const_2_f_0(ml_backend__ml_tailcall__Const_10, ml_backend__ml_tailcall__Locals_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_tailcall__XRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_tailcall___Op_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_tailcall__Rval__tmp_copy_4 = ml_backend__ml_tailcall__XRval_12;

                    ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__Rval__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_tailcall__YRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_tailcall__XRval_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_tailcall___Op_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_tailcall__V_19_19;

                  {
                    ml_backend__ml_tailcall__V_19_19 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__XRval_22, ml_backend__ml_tailcall__Locals_5);
                  }
                  ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_19_19 == (MR_Integer) 0);
                  if (ml_backend__ml_tailcall__succeeded)
                    ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = (MR_Integer) 0;
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ml_backend__ml_tailcall__Rval__tmp_copy_4 = ml_backend__ml_tailcall__YRval_13;

                        ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__Rval__tmp_copy_4;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__ml_tailcall__Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

                  {
                    ml_backend__ml_tailcall__MayYieldDanglingStackRef_6 = ml_backend__ml_tailcall__check_lval_2_f_0(ml_backend__ml_tailcall__Lval_14, ml_backend__ml_tailcall__Locals_5);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__ml_tailcall__RowRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_tailcall___VectorCommon_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_tailcall__Rval__tmp_copy_4 = ml_backend__ml_tailcall__RowRval_16;

                    ml_backend__ml_tailcall__Rval_4 = ml_backend__ml_tailcall__Rval__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 5:
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

static MR_Word MR_CALL 
ml_backend__ml_tailcall__check_rvals_2_f_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__Locals_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_tailcall__succeeded;
        MR_Word ml_backend__ml_tailcall__HeadVar__3_3;

        if ((ml_backend__ml_tailcall__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Integer) 1;
        else
          {
            MR_Word ml_backend__ml_tailcall__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tailcall__Rvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_tailcall__V_9_9;

            {
              ml_backend__ml_tailcall__V_9_9 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__Rval_5, ml_backend__ml_tailcall__Locals_2);
            }
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_9_9 == (MR_Integer) 0);
            if (ml_backend__ml_tailcall__succeeded)
              ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Integer) 0;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_tailcall__HeadVar__1__tmp_copy_1 = ml_backend__ml_tailcall__Rvals_6;

                  ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return ml_backend__ml_tailcall__HeadVar__3_3;
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
              MR_Word ml_backend__ml_tailcall__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 3)));
              MR_Word ml_backend__ml_tailcall__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Lval_3, (MR_Integer) 4)));
              MR_Word ml_backend__ml_tailcall__BaseLval_12;

              ml_backend__ml_tailcall__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (ml_backend__ml_tailcall__succeeded)
                {
                  ml_backend__ml_tailcall__BaseLval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Rval_8, (MR_Integer) 1)));
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_tailcall__Lval__tmp_copy_3 = ml_backend__ml_tailcall__BaseLval_12;

                    ml_backend__ml_tailcall__Lval_3 = ml_backend__ml_tailcall__Lval__tmp_copy_3;
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
            ml_backend__ml_tailcall__IsLocal_4 = (MR_Integer) 0;
            break;
        }
        return ml_backend__ml_tailcall__IsLocal_4;
      }
      break;
    }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall__match_return_vals_2_p_0(
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
            MR_Word ml_backend__ml_tailcall__Rval_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tailcall__Rvals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_tailcall__Lval_5;
            MR_Word ml_backend__ml_tailcall__Lvals_6;
            MR_Word ml_backend__ml_tailcall__V_8_8;
            MR_Word ml_backend__ml_tailcall__V_9_9;

            ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_tailcall__succeeded)
              {
                ml_backend__ml_tailcall__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
                ml_backend__ml_tailcall__Lvals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
                ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__Rval_3)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_tailcall__succeeded)
                  {
                    ml_backend__ml_tailcall__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Rval_3, (MR_Integer) 0)));
                    {
                      ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_tailcall__Lval_5, ml_backend__ml_tailcall__V_9_9);
                    }
                    if (ml_backend__ml_tailcall__succeeded)
                      {
                        {
                          ml_backend__ml_tailcall__V_8_8 = ml_backend__ml_tailcall__lval_is_local_1_f_0(ml_backend__ml_tailcall__Lval_5);
                        }
                        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_8_8 == (MR_Integer) 0);
                        if (ml_backend__ml_tailcall__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ml_backend__ml_tailcall__HeadVar__1__tmp_copy_1 = ml_backend__ml_tailcall__Rvals_4;
                              MR_Word ml_backend__ml_tailcall__HeadVar__2__tmp_copy_2 = ml_backend__ml_tailcall__Lvals_6;

                              ml_backend__ml_tailcall__HeadVar__2_2 = ml_backend__ml_tailcall__HeadVar__2__tmp_copy_2;
                              ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__HeadVar__1__tmp_copy_1;
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

static void MR_CALL 
ml_backend__ml_tailcall__report_nontailcall_5_p_0(
  MR_Word ml_backend__ml_tailcall__WarnOrError_6,
  MR_Word ml_backend__ml_tailcall__PredLabel_7,
  MR_Integer ml_backend__ml_tailcall__ProcId_8,
  MR_Word ml_backend__ml_tailcall__Context_9,
  MR_Word * ml_backend__ml_tailcall__Specs_10)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    if (((MR_tag((MR_Word) ml_backend__ml_tailcall__PredLabel_7)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_tailcall.m", (MR_String) "predicate \140ml_backend.ml_tailcall.report_nontailcall\'/5", (MR_String) "mlds_special_pred_label");
          return;
        }
      }
    else
      {
        MR_Word ml_backend__ml_tailcall__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_7, (MR_Integer) 0)));
        MR_String ml_backend__ml_tailcall__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_7, (MR_Integer) 2)));
        MR_Integer ml_backend__ml_tailcall__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_7, (MR_Integer) 3)));
        MR_Word ml_backend__ml_tailcall__SimpleCallId_17;
        MR_Integer ml_backend__ml_tailcall__ProcNumber0_18;
        MR_Integer ml_backend__ml_tailcall__ProcNumber_19;
        MR_Word ml_backend__ml_tailcall__WarnOrErrorWords_20;
        MR_Word ml_backend__ml_tailcall__Pieces_21;
        MR_Word ml_backend__ml_tailcall__Msg_22;
        MR_Word ml_backend__ml_tailcall__Severity_23;
        MR_Word ml_backend__ml_tailcall__V_31_31;
        MR_Word ml_backend__ml_tailcall__V_37_37;
        MR_Word ml_backend__ml_tailcall__V_38_38;
        MR_Word ml_backend__ml_tailcall__V_39_39;
        MR_Word ml_backend__ml_tailcall__V_42_42;
        MR_Word ml_backend__ml_tailcall__V_43_43;
        MR_Word ml_backend__ml_tailcall__V_44_44;
        MR_Word ml_backend__ml_tailcall__V_47_47;
        MR_Word ml_backend__ml_tailcall__V_49_49;
        MR_Word ml_backend__ml_tailcall__V_56_56;
        MR_Word ml_backend__ml_tailcall__V_57_57;
        MR_Word ml_backend__ml_tailcall__V_58_58;
        MR_Word ml_backend__ml_tailcall__V_60_60;
        MR_Word ml_backend__ml_tailcall__V_62_62;
        MR_Word ml_backend__ml_tailcall___MaybeModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_7, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall___CodeModel_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_7, (MR_Integer) 4)));
        MR_Word ml_backend__ml_tailcall___NonOutputFunc_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__PredLabel_7, (MR_Integer) 5)));

        {
          ml_backend__ml_tailcall__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_31_31, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_13));
        }
        {
          ml_backend__ml_tailcall__SimpleCallId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_17, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredOrFunc_11));
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_17, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_31_31));
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_17, 2) = ((MR_Box) (ml_backend__ml_tailcall__Arity_14));
        }
        {
          hlds__hlds_pred__proc_id_to_int_2_p_0(ml_backend__ml_tailcall__ProcId_8, &ml_backend__ml_tailcall__ProcNumber0_18);
        }
        ml_backend__ml_tailcall__ProcNumber_19 = (ml_backend__ml_tailcall__ProcNumber0_18 + (MR_Integer) 1);
        switch (ml_backend__ml_tailcall__WarnOrError_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              ml_backend__ml_tailcall__WarnOrErrorWords_20 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[19]);
            }
            break;
          case (MR_Integer) 0:
            {
              ml_backend__ml_tailcall__WarnOrErrorWords_20 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[20]);
            }
            break;
        }
        {
          ml_backend__ml_tailcall__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_38_38, 1) = ((MR_Box) (ml_backend__ml_tailcall__ProcNumber_19));
        }
        {
          ml_backend__ml_tailcall__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_43_43, 1) = ((MR_Box) (ml_backend__ml_tailcall__SimpleCallId_17));
        }
        {
          ml_backend__ml_tailcall__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_49_49, 0) = ((MR_Box) (ml_backend__ml_tailcall__WarnOrErrorWords_20));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[14])));
        }
        {
          ml_backend__ml_tailcall__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_47_47, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_49_49));
        }
        {
          ml_backend__ml_tailcall__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[23])));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_44_44, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_47_47));
        }
        {
          ml_backend__ml_tailcall__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_42_42, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_43_43));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_42_42, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_44_44));
        }
        {
          ml_backend__ml_tailcall__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[22])));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_39_39, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_42_42));
        }
        {
          ml_backend__ml_tailcall__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_37_37, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_38_38));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_37_37, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_39_39));
        }
        {
          ml_backend__ml_tailcall__Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Pieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[21])));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Pieces_21, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_37_37));
        }
        {
          ml_backend__ml_tailcall__V_56_56 = ml_backend__mlds__mlds_get_prog_context_1_f_0(ml_backend__ml_tailcall__Context_9);
        }
        {
          ml_backend__ml_tailcall__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_58_58, 0) = ((MR_Box) (ml_backend__ml_tailcall__Pieces_21));
        }
        {
          ml_backend__ml_tailcall__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_57_57, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_58_58));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_tailcall__Msg_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Msg_22, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_56_56));
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Msg_22, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_57_57));
        }
        {
          libs__compiler_util__warning_or_error_severity_2_p_0(ml_backend__ml_tailcall__WarnOrError_6, &ml_backend__ml_tailcall__Severity_23);
        }
        {
          ml_backend__ml_tailcall__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_62_62, 0) = ((MR_Box) (ml_backend__ml_tailcall__Msg_22));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_tailcall__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_60_60, 0) = ((MR_Box) (ml_backend__ml_tailcall__Severity_23));
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_60_60, 2) = ((MR_Box) (ml_backend__ml_tailcall__V_62_62));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_tailcall__Specs_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_60_60));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__maybe_warn_tailcalls_4_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_5,
  MR_Word ml_backend__ml_tailcall__CodeAddr_6,
  MR_Word ml_backend__ml_tailcall__Context_7,
  MR_Word * ml_backend__ml_tailcall__Specs_8)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__WarnTailCalls_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_5, (MR_Integer) 5)));
    MR_Word ml_backend__ml_tailcall__MaybeRequireTailrecInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_5, (MR_Integer) 6)));
    MR_Word ml_backend__ml_tailcall__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_5, (MR_Integer) 4)));

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__WarnTailCalls_9 == (MR_Integer) 1);
    if (ml_backend__ml_tailcall__succeeded)
      ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__MaybeRequireTailrecInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ml_backend__ml_tailcall__succeeded)
      *ml_backend__ml_tailcall__Specs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ml_backend__ml_tailcall__WarnOrError_12;

        switch (ml_backend__ml_tailcall__WarnTailCalls_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_tailcall__RequireTailrecInfo_11;
              MR_Word ml_backend__ml_tailcall__TailrecType_13;
              MR_Word ml_backend__ml_tailcall__V_14_14;

              ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__MaybeRequireTailrecInfo_10)) == (MR_mktag((MR_Integer) 1)));
              if (ml_backend__ml_tailcall__succeeded)
                {
                  ml_backend__ml_tailcall__RequireTailrecInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeRequireTailrecInfo_10, (MR_Integer) 0)));
                  ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__RequireTailrecInfo_11)) == (MR_mktag((MR_Integer) 1)));
                  if (ml_backend__ml_tailcall__succeeded)
                    {
                      ml_backend__ml_tailcall__WarnOrError_12 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_11, (MR_Integer) 0)))) & (MR_Integer) 1);
                      ml_backend__ml_tailcall__TailrecType_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_11, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      ml_backend__ml_tailcall__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_11, (MR_Integer) 1)));
                    }
                }
            }
            break;
          case (MR_Integer) 0:
            if ((ml_backend__ml_tailcall__MaybeRequireTailrecInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                ml_backend__ml_tailcall__WarnOrError_12 = (MR_Integer) 0;
                ml_backend__ml_tailcall__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word ml_backend__ml_tailcall__RequireTailrecInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeRequireTailrecInfo_10, (MR_Integer) 0)));

                if (((MR_tag((MR_Word) ml_backend__ml_tailcall__RequireTailrecInfo_29)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word ml_backend__ml_tailcall__V_15_15;
                    MR_Word ml_backend__ml_tailcall__TailrecType_48;

                    ml_backend__ml_tailcall__WarnOrError_12 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_29, (MR_Integer) 0)))) & (MR_Integer) 1);
                    ml_backend__ml_tailcall__TailrecType_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_29, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    ml_backend__ml_tailcall__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_29, (MR_Integer) 1)));
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
            MR_Word ml_backend__ml_tailcall__QualProcLabel_17;
            MR_Word ml_backend__ml_tailcall__ProcLabel_22;
            MR_Word ml_backend__ml_tailcall__PredLabel_23;
            MR_Integer ml_backend__ml_tailcall__ProcId_24;
            MR_Word ml_backend__ml_tailcall__V_20_20;
            MR_Word ml_backend__ml_tailcall__V_21_21;
            MR_String ml_backend__ml_tailcall__V_25_25;
            MR_Word ml_backend__ml_tailcall__V_26_26;
            MR_String ml_backend__ml_tailcall__V_27_27;
            MR_Integer ml_backend__ml_tailcall__V_28_28;

            if (((MR_tag((MR_Word) ml_backend__ml_tailcall__CodeAddr_6)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Integer ml_backend__ml_tailcall___SeqNum_19;
                MR_Word ml_backend__ml_tailcall___Sig_33;

                ml_backend__ml_tailcall__QualProcLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_6, (MR_Integer) 0)));
                ml_backend__ml_tailcall___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_6, (MR_Integer) 1)));
                ml_backend__ml_tailcall___Sig_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_6, (MR_Integer) 2)));
              }
            else
              {
                MR_Word ml_backend__ml_tailcall___Sig_18;

                ml_backend__ml_tailcall__QualProcLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_6, (MR_Integer) 0)));
                ml_backend__ml_tailcall___Sig_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_6, (MR_Integer) 1)));
              }
            ml_backend__ml_tailcall__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_17, (MR_Integer) 0)));
            ml_backend__ml_tailcall__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_17, (MR_Integer) 1)));
            ml_backend__ml_tailcall__ProcLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_17, (MR_Integer) 2)));
            ml_backend__ml_tailcall__PredLabel_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_22, (MR_Integer) 0)));
            ml_backend__ml_tailcall__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_22, (MR_Integer) 1)));
            ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__PredLabel_23)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_tailcall__succeeded)
              {
                ml_backend__ml_tailcall__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__PredLabel_23, (MR_Integer) 0)));
                ml_backend__ml_tailcall__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__PredLabel_23, (MR_Integer) 1)));
                ml_backend__ml_tailcall__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__PredLabel_23, (MR_Integer) 2)));
                ml_backend__ml_tailcall__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__PredLabel_23, (MR_Integer) 3)));
                *ml_backend__ml_tailcall__Specs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            else
              {
                ml_backend__ml_tailcall__report_nontailcall_5_p_0(ml_backend__ml_tailcall__WarnOrError_12, ml_backend__ml_tailcall__PredLabel_23, ml_backend__ml_tailcall__ProcId_24, ml_backend__ml_tailcall__Context_7, ml_backend__ml_tailcall__Specs_8);
              }
          }
        else
          *ml_backend__ml_tailcall__Specs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tailcall__found_recursive_call_combine_2_f_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__HeadVar__3_3;

    switch (ml_backend__ml_tailcall__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        switch (ml_backend__ml_tailcall__HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Integer) 1;
            break;
        }
        break;
    }
    return ml_backend__ml_tailcall__HeadVar__3_3;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_default_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word * ml_backend__ml_tailcall__FoundRecCall_9,
  MR_Word * ml_backend__ml_tailcall__Warnings_10,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_11,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_12,
  MR_Word ml_backend__ml_tailcall__Default0_13,
  MR_Word * ml_backend__ml_tailcall__Default_14)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Default0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ml_backend__ml_tailcall__FoundRecCall_9 = (MR_Integer) 1;
          *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_tailcall__AtTailBefore_12 = ml_backend__ml_tailcall__AtTailAfter_11;
          *ml_backend__ml_tailcall__Default_14 = ml_backend__ml_tailcall__Default0_13;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_tailcall__Statement0_15 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__Default0_13), (MR_Integer) 1);
          MR_Word ml_backend__ml_tailcall__Statement_16;
          MR_Word ml_backend__ml_tailcall__Stmt0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_15, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_15, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__Stmt_28;

          {
            ml_backend__ml_tailcall__mark_tailcalls_in_stmt_8_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__Context_27, ml_backend__ml_tailcall__FoundRecCall_9, ml_backend__ml_tailcall__Warnings_10, ml_backend__ml_tailcall__AtTailAfter_11, ml_backend__ml_tailcall__AtTailBefore_12, ml_backend__ml_tailcall__Stmt0_26, &ml_backend__ml_tailcall__Stmt_28);
          }
          {
            ml_backend__ml_tailcall__Statement_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_16, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_28));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_16, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_27));
          }
          *ml_backend__ml_tailcall__Default_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_tailcall__Statement_16);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_case_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word * ml_backend__ml_tailcall__FoundRecCall_9,
  MR_Word * ml_backend__ml_tailcall__Warnings_10,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_11,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_12,
  MR_Word ml_backend__ml_tailcall__Case0_13,
  MR_Word * ml_backend__ml_tailcall__Case_14)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__FirstCond_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_13, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__LaterConds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_13, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Statement0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_13, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__Statement_18;
    MR_Word ml_backend__ml_tailcall__Stmt0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_17, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_17, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Stmt_30;

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_stmt_8_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__Context_29, ml_backend__ml_tailcall__FoundRecCall_9, ml_backend__ml_tailcall__Warnings_10, ml_backend__ml_tailcall__AtTailAfter_11, ml_backend__ml_tailcall__AtTailBefore_12, ml_backend__ml_tailcall__Stmt0_28, &ml_backend__ml_tailcall__Stmt_30);
    }
    {
      ml_backend__ml_tailcall__Statement_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_18, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_30));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_18, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_tailcall__Case_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__FirstCond_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__LaterConds_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_18));
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_cases_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word * ml_backend__ml_tailcall__HeadVar__3_3,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_4,
  MR_Word * ml_backend__ml_tailcall__HeadVar__5_5,
  MR_Word ml_backend__ml_tailcall__HeadVar__6_6,
  MR_Word * ml_backend__ml_tailcall__HeadVar__7_7)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    if ((ml_backend__ml_tailcall__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Integer) 1;
        *ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ml_backend__ml_tailcall__CaseWarnings_12;
        MR_Word ml_backend__ml_tailcall__CasesWarnings_13;
        MR_Word ml_backend__ml_tailcall__AtTailBefore_15;
        MR_Word ml_backend__ml_tailcall__AtTailBefores_16;
        MR_Word ml_backend__ml_tailcall__Case0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__6_6, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__Cases0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__6_6, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__Case_19;
        MR_Word ml_backend__ml_tailcall__Cases_20;
        MR_Word ml_backend__ml_tailcall__FoundRecCallCase_21;
        MR_Word ml_backend__ml_tailcall__FoundRecCallCases_22;

        {
          ml_backend__ml_tailcall__mark_tailcalls_in_case_7_p_0(ml_backend__ml_tailcall__TCallInfo_1, &ml_backend__ml_tailcall__FoundRecCallCase_21, &ml_backend__ml_tailcall__CaseWarnings_12, ml_backend__ml_tailcall__AtTailAfter_4, &ml_backend__ml_tailcall__AtTailBefore_15, ml_backend__ml_tailcall__Case0_17, &ml_backend__ml_tailcall__Case_19);
        }
        {
          ml_backend__ml_tailcall__mark_tailcalls_in_cases_7_p_0(ml_backend__ml_tailcall__TCallInfo_1, &ml_backend__ml_tailcall__FoundRecCallCases_22, &ml_backend__ml_tailcall__CasesWarnings_13, ml_backend__ml_tailcall__AtTailAfter_4, &ml_backend__ml_tailcall__AtTailBefores_16, ml_backend__ml_tailcall__Cases0_18, &ml_backend__ml_tailcall__Cases_20);
        }
        {
          *ml_backend__ml_tailcall__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__CaseWarnings_12, ml_backend__ml_tailcall__CasesWarnings_13);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_tailcall__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__AtTailBefore_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__AtTailBefores_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_tailcall__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Case_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Cases_20));
        }
        switch (ml_backend__ml_tailcall__FoundRecCallCase_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            switch (ml_backend__ml_tailcall__FoundRecCallCases_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Integer) 1;
                break;
            }
            break;
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_8_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_9,
  MR_Word ml_backend__ml_tailcall__Context_10,
  MR_Word * ml_backend__ml_tailcall__FoundRecCall_11,
  MR_Word * ml_backend__ml_tailcall__Warnings_12,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_13,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_14,
  MR_Word ml_backend__ml_tailcall__Stmt0_15,
  MR_Word * ml_backend__ml_tailcall__Stmt_16)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__Sig_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Func_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__Obj_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 4)));
    MR_Word ml_backend__ml_tailcall__ReturnLvals_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 5)));
    MR_Word ml_backend__ml_tailcall__CallKind0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 6)));
    MR_Word ml_backend__ml_tailcall__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__FunctionName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__QualName_25;
    MR_Word ml_backend__ml_tailcall__Locals_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 4)));
    MR_Word ml_backend__ml_tailcall__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 5)));
    MR_Word ml_backend__ml_tailcall__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 6)));
    MR_Word ml_backend__ml_tailcall__CodeAddr_27;
    MR_Word ml_backend__ml_tailcall__V_31_31;

    {
      ml_backend__ml_tailcall__QualName_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualName_25, 0) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_23));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualName_25, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualName_25, 2) = ((MR_Box) (ml_backend__ml_tailcall__FunctionName_24));
    }
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CallKind0_22 == (MR_Integer) 2);
    if (ml_backend__ml_tailcall__succeeded)
      {
        ml_backend__ml_tailcall__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_tailcall__Func_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Func_18, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (ml_backend__ml_tailcall__succeeded)
          {
            ml_backend__ml_tailcall__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Func_18, (MR_Integer) 1)));
            ml_backend__ml_tailcall__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_tailcall__V_31_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_31_31, (MR_Integer) 0)))) == (MR_Integer) 7)));
            if (ml_backend__ml_tailcall__succeeded)
              {
                ml_backend__ml_tailcall__CodeAddr_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_31_31, (MR_Integer) 1)));
                {
                  ml_backend__ml_tailcall__succeeded = ml_backend__ml_util__call_is_recursive_2_p_0(ml_backend__ml_tailcall__QualName_25, ml_backend__ml_tailcall__Stmt0_15);
                }
              }
          }
      }
    if (ml_backend__ml_tailcall__succeeded)
      {
        MR_Word ml_backend__ml_tailcall__ReturnRvals_28;
        MR_Word ml_backend__ml_tailcall__V_33_33;
        MR_Word ml_backend__ml_tailcall__V_34_34;

        ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter_13)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_tailcall__succeeded)
          {
            ml_backend__ml_tailcall__ReturnRvals_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__AtTailAfter_13, (MR_Integer) 0)));
            {
              ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall__match_return_vals_2_p_0(ml_backend__ml_tailcall__ReturnRvals_28, ml_backend__ml_tailcall__ReturnLvals_21);
            }
            if (ml_backend__ml_tailcall__succeeded)
              {
                if ((ml_backend__ml_tailcall__Obj_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  ml_backend__ml_tailcall__succeeded = MR_TRUE;
                else
                  {
                    MR_Word ml_backend__ml_tailcall__Rval_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Obj_19, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_tailcall__V_59_59;

                    {
                      ml_backend__ml_tailcall__V_59_59 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__Rval_55, ml_backend__ml_tailcall__Locals_26);
                    }
                    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_59_59 == (MR_Integer) 1);
                  }
                if (ml_backend__ml_tailcall__succeeded)
                  {
                    {
                      ml_backend__ml_tailcall__V_33_33 = ml_backend__ml_tailcall__check_rvals_2_f_0(ml_backend__ml_tailcall__Args_20, ml_backend__ml_tailcall__Locals_26);
                    }
                    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_33_33 == (MR_Integer) 1);
                    if (ml_backend__ml_tailcall__succeeded)
                      {
                        {
                          ml_backend__ml_tailcall__V_34_34 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__Func_18, ml_backend__ml_tailcall__Locals_26);
                        }
                        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_34_34 == (MR_Integer) 1);
                      }
                  }
              }
          }
        if (ml_backend__ml_tailcall__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_tailcall__Stmt_16 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Sig_17));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Func_18));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Obj_19));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Args_20));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__ReturnLvals_21));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) ((MR_Integer) 1));
            }
            *ml_backend__ml_tailcall__Warnings_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ml_backend__ml_tailcall__AtTailBefore_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            switch (MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ml_backend__ml_tailcall__AtTailAfter_13)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ml_backend__ml_tailcall__Warnings_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      ml_backend__ml_tailcall__maybe_warn_tailcalls_4_p_0(ml_backend__ml_tailcall__TCallInfo_9, ml_backend__ml_tailcall__CodeAddr_27, ml_backend__ml_tailcall__Context_10, ml_backend__ml_tailcall__Warnings_12);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  ml_backend__ml_tailcall__maybe_warn_tailcalls_4_p_0(ml_backend__ml_tailcall__TCallInfo_9, ml_backend__ml_tailcall__CodeAddr_27, ml_backend__ml_tailcall__Context_10, ml_backend__ml_tailcall__Warnings_12);
                }
                break;
            }
            *ml_backend__ml_tailcall__Stmt_16 = ml_backend__ml_tailcall__Stmt0_15;
            *ml_backend__ml_tailcall__AtTailBefore_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        *ml_backend__ml_tailcall__FoundRecCall_11 = (MR_Integer) 0;
      }
    else
      {
        *ml_backend__ml_tailcall__Stmt_16 = ml_backend__ml_tailcall__Stmt0_15;
        *ml_backend__ml_tailcall__FoundRecCall_11 = (MR_Integer) 1;
        *ml_backend__ml_tailcall__Warnings_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        switch (MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_tailcall__AtTailAfter_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ml_backend__ml_tailcall__AtTailBefore_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                *ml_backend__ml_tailcall__AtTailBefore_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                break;
            }
            break;
          case (MR_Integer) 1:
            *ml_backend__ml_tailcall__AtTailBefore_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_8_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__426__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1));
    }
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_8_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_9,
  MR_Word ml_backend__ml_tailcall__Context_10,
  MR_Word * ml_backend__ml_tailcall__FoundRecCall_11,
  MR_Word * ml_backend__ml_tailcall__Warnings_12,
  MR_Word ml_backend__ml_tailcall__AtTailAfter0_13,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_14,
  MR_Word ml_backend__ml_tailcall__Stmt0_15,
  MR_Word * ml_backend__ml_tailcall__Stmt_16)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Stmt0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_tailcall__Defns0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Statements0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__ModuleInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__ModuleName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__WarnTailCalls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 5)));
          MR_Word ml_backend__ml_tailcall__DefnsWarnings_22;
          MR_Word ml_backend__ml_tailcall__Defns_23;
          MR_Word ml_backend__ml_tailcall__Locals_24;
          MR_Word ml_backend__ml_tailcall__NewTCallInfo_25;
          MR_Word ml_backend__ml_tailcall__StatementsWarnings_26;
          MR_Word ml_backend__ml_tailcall__Statements_27;
          MR_Word ml_backend__ml_tailcall__V_83_83;
          MR_Word ml_backend__ml_tailcall__V_84_84;
          MR_Word ml_backend__ml_tailcall__V_105_105;
          MR_Word ml_backend__ml_tailcall__V_106_106;
          MR_Word ml_backend__ml_tailcall__V_107_107;
          MR_Word ml_backend__ml_tailcall__V_108_108;
          MR_Word ml_backend__ml_tailcall__V_109_109;
          MR_Word ml_backend__ml_tailcall__V_110_110;
          MR_Word ml_backend__ml_tailcall__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 3)));
          MR_Word ml_backend__ml_tailcall__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 4)));
          MR_Word ml_backend__ml_tailcall__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 6)));

          {
            ml_backend__ml_tailcall__mark_tailcalls_in_defns_6_p_0(ml_backend__ml_tailcall__ModuleInfo_19, ml_backend__ml_tailcall__ModuleName_20, ml_backend__ml_tailcall__WarnTailCalls_21, &ml_backend__ml_tailcall__DefnsWarnings_22, ml_backend__ml_tailcall__Defns0_17, &ml_backend__ml_tailcall__Defns_23);
          }
          ml_backend__ml_tailcall__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 0)));
          ml_backend__ml_tailcall__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 1)));
          ml_backend__ml_tailcall__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 2)));
          ml_backend__ml_tailcall__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 3)));
          ml_backend__ml_tailcall__Locals_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 4)));
          ml_backend__ml_tailcall__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 5)));
          ml_backend__ml_tailcall__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_9, (MR_Integer) 6)));
          {
            ml_backend__ml_tailcall__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_84_84, 0) = ((MR_Box) (ml_backend__ml_tailcall__Defns_23));
          }
          {
            ml_backend__ml_tailcall__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_83_83, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_84_84));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_83_83, 1) = ((MR_Box) (ml_backend__ml_tailcall__Locals_24));
          }
          {
            ml_backend__ml_tailcall__NewTCallInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_25, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_105_105));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_25, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_106_106));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_25, 2) = ((MR_Box) (ml_backend__ml_tailcall__V_107_107));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_25, 3) = ((MR_Box) (ml_backend__ml_tailcall__V_108_108));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_25, 4) = ((MR_Box) (ml_backend__ml_tailcall__V_83_83));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_25, 5) = ((MR_Box) (ml_backend__ml_tailcall__V_109_109));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_25, 6) = ((MR_Box) (ml_backend__ml_tailcall__V_110_110));
          }
          {
            ml_backend__ml_tailcall__mark_tailcalls_in_statements_7_p_0(ml_backend__ml_tailcall__NewTCallInfo_25, ml_backend__ml_tailcall__FoundRecCall_11, &ml_backend__ml_tailcall__StatementsWarnings_26, ml_backend__ml_tailcall__AtTailAfter0_13, ml_backend__ml_tailcall__AtTailBefore_14, ml_backend__ml_tailcall__Statements0_18, &ml_backend__ml_tailcall__Statements_27);
          }
          {
            *ml_backend__ml_tailcall__Warnings_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__DefnsWarnings_22, ml_backend__ml_tailcall__StatementsWarnings_26);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_tailcall__Stmt_16 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Defns_23));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Statements_27));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_tailcall__Kind_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Rval_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__Statement0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__AtTailAfter_31;
          MR_Word ml_backend__ml_tailcall__AtTailBefore0_32;
          MR_Word ml_backend__ml_tailcall__Statement_33;

          {
            ml_backend__ml_tailcall__not_at_tail_2_p_0(ml_backend__ml_tailcall__AtTailAfter0_13, &ml_backend__ml_tailcall__AtTailAfter_31);
          }
          {
            ml_backend__ml_tailcall__mark_tailcalls_in_statement_7_p_0(ml_backend__ml_tailcall__TCallInfo_9, ml_backend__ml_tailcall__FoundRecCall_11, ml_backend__ml_tailcall__Warnings_12, ml_backend__ml_tailcall__AtTailAfter_31, &ml_backend__ml_tailcall__AtTailBefore0_32, ml_backend__ml_tailcall__Statement0_30, &ml_backend__ml_tailcall__Statement_33);
          }
          {
            ml_backend__ml_tailcall__not_at_tail_2_p_0(ml_backend__ml_tailcall__AtTailBefore0_32, ml_backend__ml_tailcall__AtTailBefore_14);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_tailcall__Stmt_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Kind_28));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Rval_29));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_33));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_tailcall__Cond_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Then0_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__MaybeElse0_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__FoundRecCallThen_37;
          MR_Word ml_backend__ml_tailcall__ThenWarnings_38;
          MR_Word ml_backend__ml_tailcall__AtTailBeforeThen_39;
          MR_Word ml_backend__ml_tailcall__Then_40;
          MR_Word ml_backend__ml_tailcall__FoundRecCallElse_41;
          MR_Word ml_backend__ml_tailcall__ElseWarnings_42;
          MR_Word ml_backend__ml_tailcall__AtTailBeforeElse_43;
          MR_Word ml_backend__ml_tailcall__MaybeElse_44;

          {
            ml_backend__ml_tailcall__mark_tailcalls_in_statement_7_p_0(ml_backend__ml_tailcall__TCallInfo_9, &ml_backend__ml_tailcall__FoundRecCallThen_37, &ml_backend__ml_tailcall__ThenWarnings_38, ml_backend__ml_tailcall__AtTailAfter0_13, &ml_backend__ml_tailcall__AtTailBeforeThen_39, ml_backend__ml_tailcall__Then0_35, &ml_backend__ml_tailcall__Then_40);
          }
          {
            ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_7_p_0(ml_backend__ml_tailcall__TCallInfo_9, &ml_backend__ml_tailcall__FoundRecCallElse_41, &ml_backend__ml_tailcall__ElseWarnings_42, ml_backend__ml_tailcall__AtTailAfter0_13, &ml_backend__ml_tailcall__AtTailBeforeElse_43, ml_backend__ml_tailcall__MaybeElse0_36, &ml_backend__ml_tailcall__MaybeElse_44);
          }
          {
            *ml_backend__ml_tailcall__Warnings_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__ThenWarnings_38, ml_backend__ml_tailcall__ElseWarnings_42);
          }
          {
            *ml_backend__ml_tailcall__FoundRecCall_11 = ml_backend__ml_tailcall__found_recursive_call_combine_2_f_0(ml_backend__ml_tailcall__FoundRecCallThen_37, ml_backend__ml_tailcall__FoundRecCallElse_41);
          }
          ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeThen_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (!(ml_backend__ml_tailcall__succeeded))
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeElse_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (ml_backend__ml_tailcall__succeeded)
            *ml_backend__ml_tailcall__AtTailBefore_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            *ml_backend__ml_tailcall__AtTailBefore_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_tailcall__Stmt_16 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Cond_34));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Then_40));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__MaybeElse_44));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_tailcall__Type_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 1)));
              MR_Word ml_backend__ml_tailcall__Val_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 2)));
              MR_Word ml_backend__ml_tailcall__Range_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 3)));
              MR_Word ml_backend__ml_tailcall__Cases0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 4)));
              MR_Word ml_backend__ml_tailcall__Default0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 5)));
              MR_Word ml_backend__ml_tailcall__FoundRecCallCases_50;
              MR_Word ml_backend__ml_tailcall__CasesWarnings_51;
              MR_Word ml_backend__ml_tailcall__AtTailBeforeCases_52;
              MR_Word ml_backend__ml_tailcall__Cases_53;
              MR_Word ml_backend__ml_tailcall__FoundRecCallDefault_54;
              MR_Word ml_backend__ml_tailcall__DefaultWarnings_55;
              MR_Word ml_backend__ml_tailcall__AtTailBeforeDefault_56;
              MR_Word ml_backend__ml_tailcall__Default_57;

              {
                ml_backend__ml_tailcall__mark_tailcalls_in_cases_7_p_0(ml_backend__ml_tailcall__TCallInfo_9, &ml_backend__ml_tailcall__FoundRecCallCases_50, &ml_backend__ml_tailcall__CasesWarnings_51, ml_backend__ml_tailcall__AtTailAfter0_13, &ml_backend__ml_tailcall__AtTailBeforeCases_52, ml_backend__ml_tailcall__Cases0_48, &ml_backend__ml_tailcall__Cases_53);
              }
              {
                ml_backend__ml_tailcall__mark_tailcalls_in_default_7_p_0(ml_backend__ml_tailcall__TCallInfo_9, &ml_backend__ml_tailcall__FoundRecCallDefault_54, &ml_backend__ml_tailcall__DefaultWarnings_55, ml_backend__ml_tailcall__AtTailAfter0_13, &ml_backend__ml_tailcall__AtTailBeforeDefault_56, ml_backend__ml_tailcall__Default0_49, &ml_backend__ml_tailcall__Default_57);
              }
              {
                *ml_backend__ml_tailcall__Warnings_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__CasesWarnings_51, ml_backend__ml_tailcall__DefaultWarnings_55);
              }
              {
                *ml_backend__ml_tailcall__FoundRecCall_11 = ml_backend__ml_tailcall__found_recursive_call_combine_2_f_0(ml_backend__ml_tailcall__FoundRecCallCases_50, ml_backend__ml_tailcall__FoundRecCallDefault_54);
              }
              {
                MR_Word ml_backend__ml_tailcall__V_58_58;
                MR_Box ml_backend__ml_tailcall__conv0_V_58_58;

                {
                  ml_backend__ml_tailcall__succeeded = mercury__list__find_first_match_3_p_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0, (MR_Word) &ml_backend__ml_tailcall_scalar_common_5[0], ml_backend__ml_tailcall__AtTailBeforeCases_52, &ml_backend__ml_tailcall__conv0_V_58_58);
                }
                if (ml_backend__ml_tailcall__succeeded)
                  {
                    ml_backend__ml_tailcall__V_58_58 = ((MR_Word) ml_backend__ml_tailcall__conv0_V_58_58);
                    ml_backend__ml_tailcall__succeeded = MR_TRUE;
                  }
              }
              if (!(ml_backend__ml_tailcall__succeeded))
                ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeDefault_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (ml_backend__ml_tailcall__succeeded)
                *ml_backend__ml_tailcall__AtTailBefore_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                *ml_backend__ml_tailcall__AtTailBefore_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_tailcall__Stmt_16 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Type_45));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Val_46));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Range_47));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Cases_53));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__Default_57));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *ml_backend__ml_tailcall__FoundRecCall_11 = (MR_Integer) 1;
              *ml_backend__ml_tailcall__Warnings_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ml_backend__ml_tailcall__AtTailBefore_14 = ml_backend__ml_tailcall__AtTailAfter0_13;
              *ml_backend__ml_tailcall__Stmt_16 = ml_backend__ml_tailcall__Stmt0_15;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              *ml_backend__ml_tailcall__FoundRecCall_11 = (MR_Integer) 1;
              *ml_backend__ml_tailcall__Warnings_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ml_backend__ml_tailcall__not_at_tail_2_p_0(ml_backend__ml_tailcall__AtTailAfter0_13, ml_backend__ml_tailcall__AtTailBefore_14);
              }
              *ml_backend__ml_tailcall__Stmt_16 = ml_backend__ml_tailcall__Stmt0_15;
            }
            break;
          case (MR_Integer) 4:
            {
              ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_8_p_0(ml_backend__ml_tailcall__TCallInfo_9, ml_backend__ml_tailcall__Context_10, ml_backend__ml_tailcall__FoundRecCall_11, ml_backend__ml_tailcall__Warnings_12, ml_backend__ml_tailcall__AtTailAfter0_13, ml_backend__ml_tailcall__AtTailBefore_14, ml_backend__ml_tailcall__Stmt0_15, ml_backend__ml_tailcall__Stmt_16);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_tailcall__ReturnVals_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 1)));

              *ml_backend__ml_tailcall__FoundRecCall_11 = (MR_Integer) 1;
              *ml_backend__ml_tailcall__Warnings_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_tailcall__AtTailBefore_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__ReturnVals_80));
              }
              *ml_backend__ml_tailcall__Stmt_16 = ml_backend__ml_tailcall__Stmt0_15;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_tailcall__Ref_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 1)));
              MR_Word ml_backend__ml_tailcall__Handler0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 3)));
              MR_Word ml_backend__ml_tailcall__FoundRecCallTry_67;
              MR_Word ml_backend__ml_tailcall__TryWarnings_68;
              MR_Word ml_backend__ml_tailcall__FoundRecCallHandle_70;
              MR_Word ml_backend__ml_tailcall__HandlerWarnings_71;
              MR_Word ml_backend__ml_tailcall__Handler_73;
              MR_Word ml_backend__ml_tailcall__Statement0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_15, (MR_Integer) 2)));
              MR_Word ml_backend__ml_tailcall__Statement_86;
              MR_Word ml_backend__ml_tailcall__V_69_69;
              MR_Word ml_backend__ml_tailcall__V_72_72;

              {
                ml_backend__ml_tailcall__mark_tailcalls_in_statement_7_p_0(ml_backend__ml_tailcall__TCallInfo_9, &ml_backend__ml_tailcall__FoundRecCallTry_67, &ml_backend__ml_tailcall__TryWarnings_68, ml_backend__ml_tailcall__AtTailAfter0_13, &ml_backend__ml_tailcall__V_69_69, ml_backend__ml_tailcall__Statement0_85, &ml_backend__ml_tailcall__Statement_86);
              }
              {
                ml_backend__ml_tailcall__mark_tailcalls_in_statement_7_p_0(ml_backend__ml_tailcall__TCallInfo_9, &ml_backend__ml_tailcall__FoundRecCallHandle_70, &ml_backend__ml_tailcall__HandlerWarnings_71, ml_backend__ml_tailcall__AtTailAfter0_13, &ml_backend__ml_tailcall__V_72_72, ml_backend__ml_tailcall__Handler0_66, &ml_backend__ml_tailcall__Handler_73);
              }
              {
                *ml_backend__ml_tailcall__Warnings_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__TryWarnings_68, ml_backend__ml_tailcall__HandlerWarnings_71);
              }
              {
                *ml_backend__ml_tailcall__FoundRecCall_11 = ml_backend__ml_tailcall__found_recursive_call_combine_2_f_0(ml_backend__ml_tailcall__FoundRecCallTry_67, ml_backend__ml_tailcall__FoundRecCallHandle_70);
              }
              *ml_backend__ml_tailcall__AtTailBefore_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_tailcall__Stmt_16 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Ref_65));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_86));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Handler_73));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statement_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word * ml_backend__ml_tailcall__FoundRecCall_9,
  MR_Word * ml_backend__ml_tailcall__Warnings_10,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_16,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_17,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_Statement_0_18,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_Statement_19)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__Stmt0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_Statement_0_18, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_Statement_0_18, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Stmt_15;

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_stmt_8_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__Context_14, ml_backend__ml_tailcall__FoundRecCall_9, ml_backend__ml_tailcall__Warnings_10, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_16, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_17, ml_backend__ml_tailcall__Stmt0_13, &ml_backend__ml_tailcall__Stmt_15);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_tailcall__STATE_VARIABLE_Statement_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_14));
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statements_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word * ml_backend__ml_tailcall__HeadVar__3_3,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_4,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_5,
  MR_Word ml_backend__ml_tailcall__HeadVar__6_6,
  MR_Word * ml_backend__ml_tailcall__HeadVar__7_7)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    if ((ml_backend__ml_tailcall__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Integer) 1;
        *ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_5 = ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_4;
      }
    else
      {
        MR_Word ml_backend__ml_tailcall__FirstWarnings_14;
        MR_Word ml_backend__ml_tailcall__RestWarnings_15;
        MR_Word ml_backend__ml_tailcall__First0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__6_6, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__Rest0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__6_6, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__First_19;
        MR_Word ml_backend__ml_tailcall__Rest_20;
        MR_Word ml_backend__ml_tailcall__FoundRecCallRest_21;
        MR_Word ml_backend__ml_tailcall__FoundRecCallFirst_22;
        MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_25_25;

        {
          ml_backend__ml_tailcall__mark_tailcalls_in_statements_7_p_0(ml_backend__ml_tailcall__TCallInfo_1, &ml_backend__ml_tailcall__FoundRecCallRest_21, &ml_backend__ml_tailcall__RestWarnings_15, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_4, &ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_25_25, ml_backend__ml_tailcall__Rest0_18, &ml_backend__ml_tailcall__Rest_20);
        }
        {
          ml_backend__ml_tailcall__mark_tailcalls_in_statement_7_p_0(ml_backend__ml_tailcall__TCallInfo_1, &ml_backend__ml_tailcall__FoundRecCallFirst_22, &ml_backend__ml_tailcall__FirstWarnings_14, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_25_25, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_5, ml_backend__ml_tailcall__First0_17, &ml_backend__ml_tailcall__First_19);
        }
        {
          *ml_backend__ml_tailcall__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__FirstWarnings_14, ml_backend__ml_tailcall__RestWarnings_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_tailcall__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__First_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Rest_20));
        }
        switch (ml_backend__ml_tailcall__FoundRecCallFirst_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            switch (ml_backend__ml_tailcall__FoundRecCallRest_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Integer) 1;
                break;
            }
            break;
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word * ml_backend__ml_tailcall__HeadVar__3_3,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_4,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_5,
  MR_Word ml_backend__ml_tailcall__HeadVar__6_6,
  MR_Word * ml_backend__ml_tailcall__HeadVar__7_7)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    if ((ml_backend__ml_tailcall__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Integer) 1;
        *ml_backend__ml_tailcall__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_5 = ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_4;
      }
    else
      {
        MR_Word ml_backend__ml_tailcall__Statement0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__6_6, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__Statement_17;

        {
          ml_backend__ml_tailcall__mark_tailcalls_in_statement_7_p_0(ml_backend__ml_tailcall__TCallInfo_1, ml_backend__ml_tailcall__HeadVar__2_2, ml_backend__ml_tailcall__HeadVar__3_3, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_4, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_5, ml_backend__ml_tailcall__Statement0_16, &ml_backend__ml_tailcall__Statement_17);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_tailcall__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Statement_17));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_function_body_5_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_6,
  MR_Word ml_backend__ml_tailcall__AtTail_7,
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
  MR_Word ml_backend__ml_tailcall__Body0_9,
  MR_Word * ml_backend__ml_tailcall__Body_10)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    if ((ml_backend__ml_tailcall__Body0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_tailcall__Warnings_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__Body_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ml_backend__ml_tailcall__Statement0_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__Body0_9), (MR_Integer) 1);
        MR_Word ml_backend__ml_tailcall__FoundRecCall_12;
        MR_Word ml_backend__ml_tailcall__Warnings0_13;
        MR_Word ml_backend__ml_tailcall__Statement_15;
        MR_Word ml_backend__ml_tailcall__V_14_14;

        {
          ml_backend__ml_tailcall__mark_tailcalls_in_statement_7_p_0(ml_backend__ml_tailcall__TCallInfo_6, &ml_backend__ml_tailcall__FoundRecCall_12, &ml_backend__ml_tailcall__Warnings0_13, ml_backend__ml_tailcall__AtTail_7, &ml_backend__ml_tailcall__V_14_14, ml_backend__ml_tailcall__Statement0_11, &ml_backend__ml_tailcall__Statement_15);
        }
        *ml_backend__ml_tailcall__Body_10 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_tailcall__Statement_15);
        switch (ml_backend__ml_tailcall__FoundRecCall_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ml_backend__ml_tailcall__Warnings_8 = ml_backend__ml_tailcall__Warnings0_13;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_tailcall__MaybeRequireTailrecInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_6, (MR_Integer) 6)));
              MR_Word ml_backend__ml_tailcall__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_6, (MR_Integer) 3)));
              MR_Word ml_backend__ml_tailcall__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_6, (MR_Integer) 0)));
              MR_Word ml_backend__ml_tailcall__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_6, (MR_Integer) 1)));
              MR_Word ml_backend__ml_tailcall__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_6, (MR_Integer) 2)));
              MR_Word ml_backend__ml_tailcall__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_6, (MR_Integer) 4)));
              MR_Word ml_backend__ml_tailcall__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_6, (MR_Integer) 5)));

              if ((ml_backend__ml_tailcall__MaybeRequireTailrecInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *ml_backend__ml_tailcall__Warnings_8 = ml_backend__ml_tailcall__Warnings0_13;
              else
                {
                  MR_Word ml_backend__ml_tailcall__RequireTailrecInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeRequireTailrecInfo_16, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_tailcall__Context_18;

                  if (((MR_tag((MR_Word) ml_backend__ml_tailcall__RequireTailrecInfo_17)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_Word ml_backend__ml_tailcall__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_17, (MR_Integer) 0)))) & (MR_Integer) 1);
                      MR_Word ml_backend__ml_tailcall__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

                      ml_backend__ml_tailcall__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_17, (MR_Integer) 1)));
                    }
                  else
                    ml_backend__ml_tailcall__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__RequireTailrecInfo_17, (MR_Integer) 0)));
                  if ((ml_backend__ml_tailcall__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *ml_backend__ml_tailcall__Warnings_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word ml_backend__ml_tailcall__PredInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_62_62, (MR_Integer) 0)));
                      MR_Word ml_backend__ml_tailcall__PredOrFunc_23;
                      MR_String ml_backend__ml_tailcall__Name_24;
                      MR_Integer ml_backend__ml_tailcall__Arity_25;
                      MR_Word ml_backend__ml_tailcall__SimpleCallId_26;
                      MR_Word ml_backend__ml_tailcall__Pieces_27;
                      MR_Word ml_backend__ml_tailcall__Msg_28;
                      MR_Word ml_backend__ml_tailcall__NonRecursiveSpec_29;
                      MR_Word ml_backend__ml_tailcall__V_30_30;
                      MR_Word ml_backend__ml_tailcall__V_33_33;
                      MR_Word ml_backend__ml_tailcall__V_36_36;
                      MR_Word ml_backend__ml_tailcall__V_39_39;
                      MR_Word ml_backend__ml_tailcall__V_40_40;
                      MR_Word ml_backend__ml_tailcall__V_52_52;
                      MR_Word ml_backend__ml_tailcall__V_53_53;
                      MR_Word ml_backend__ml_tailcall__V_57_57;

                      {
                        ml_backend__ml_tailcall__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_tailcall__PredInfo_22);
                      }
                      {
                        hlds__hlds_pred__pred_info_get_name_2_p_0(ml_backend__ml_tailcall__PredInfo_22, &ml_backend__ml_tailcall__Name_24);
                      }
                      {
                        hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(ml_backend__ml_tailcall__PredInfo_22, &ml_backend__ml_tailcall__Arity_25);
                      }
                      {
                        ml_backend__ml_tailcall__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_30_30, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_24));
                      }
                      {
                        ml_backend__ml_tailcall__SimpleCallId_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_26, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredOrFunc_23));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_26, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_30_30));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__SimpleCallId_26, 2) = ((MR_Box) (ml_backend__ml_tailcall__Arity_25));
                      }
                      {
                        ml_backend__ml_tailcall__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_40_40, 1) = ((MR_Box) (ml_backend__ml_tailcall__SimpleCallId_26));
                      }
                      {
                        ml_backend__ml_tailcall__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_39_39, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_40_40));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[12])));
                      }
                      {
                        ml_backend__ml_tailcall__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[18])));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_36_36, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_39_39));
                      }
                      {
                        ml_backend__ml_tailcall__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[17])));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_33_33, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_36_36));
                      }
                      {
                        ml_backend__ml_tailcall__Pieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Pieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[16])));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Pieces_27, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_33_33));
                      }
                      {
                        ml_backend__ml_tailcall__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_53_53, 0) = ((MR_Box) (ml_backend__ml_tailcall__Pieces_27));
                      }
                      {
                        ml_backend__ml_tailcall__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_52_52, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_53_53));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        ml_backend__ml_tailcall__Msg_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Msg_28, 0) = ((MR_Box) (ml_backend__ml_tailcall__Context_18));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Msg_28, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_52_52));
                      }
                      {
                        ml_backend__ml_tailcall__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_57_57, 0) = ((MR_Box) (ml_backend__ml_tailcall__Msg_28));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        ml_backend__ml_tailcall__NonRecursiveSpec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NonRecursiveSpec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NonRecursiveSpec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NonRecursiveSpec_29, 2) = ((MR_Box) (ml_backend__ml_tailcall__V_57_57));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ml_backend__ml_tailcall__Warnings_8 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__NonRecursiveSpec_29));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Warnings0_13));
                      }
                    }
                }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_6_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
    MR_Word ml_backend__ml_tailcall__conv1_Defn_11;
    MR_Word ml_backend__ml_tailcall__conv0_Warnings_12;

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv1_Defn_11, &ml_backend__ml_tailcall__conv0_Warnings_12);
    }
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv1_Defn_11));
    *ml_backend__ml_tailcall__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_tailcall__conv0_Warnings_12));
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_6_p_0(
  MR_Word ml_backend__ml_tailcall__ModuleInfo_7,
  MR_Word ml_backend__ml_tailcall__ModuleName_8,
  MR_Word ml_backend__ml_tailcall__WarnTailCalls_9,
  MR_Word ml_backend__ml_tailcall__Defn0_10,
  MR_Word * ml_backend__ml_tailcall__Defn_11,
  MR_Word * ml_backend__ml_tailcall__Warnings_12)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_10, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Flags_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_10, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__DefnBody0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_10, (MR_Integer) 3)));

    switch (MR_tag((MR_Word) ml_backend__ml_tailcall__DefnBody0_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_tailcall__TypeCtorInfo_18_69;
          MR_Word ml_backend__ml_tailcall__TypeCtorInfo_18_82;
          MR_Word ml_backend__ml_tailcall__ClassDefn0_39 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__DefnBody0_16), (MR_Integer) 0);
          MR_Word ml_backend__ml_tailcall__Kind_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_39, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Imports_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_39, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__BaseClasses_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_39, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__Implements_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_39, (MR_Integer) 3)));
          MR_Word ml_backend__ml_tailcall__TypeParams_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_39, (MR_Integer) 4)));
          MR_Word ml_backend__ml_tailcall__CtorDefns0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_39, (MR_Integer) 5)));
          MR_Word ml_backend__ml_tailcall__MemberDefns0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_39, (MR_Integer) 6)));
          MR_Word ml_backend__ml_tailcall__CtorWarnings_47;
          MR_Word ml_backend__ml_tailcall__CtorDefns_48;
          MR_Word ml_backend__ml_tailcall__MemberWarnings_49;
          MR_Word ml_backend__ml_tailcall__MemberDefns_50;
          MR_Word ml_backend__ml_tailcall__ClassDefn_51;
          MR_Word ml_backend__ml_tailcall__DefnBody_56;
          MR_Word ml_backend__ml_tailcall__Warnings_63;
          MR_Word ml_backend__ml_tailcall__V_64_64;
          MR_Word ml_backend__ml_tailcall__Warnings_76;

          {
            ml_backend__ml_tailcall__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_64_64, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_64_64, 1) = ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_defn_6_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_64_64, 3) = ((MR_Box) (ml_backend__ml_tailcall__ModuleInfo_7));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_64_64, 4) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_8));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_64_64, 5) = ((MR_Box) (ml_backend__ml_tailcall__WarnTailCalls_9));
          }
          ml_backend__ml_tailcall__TypeCtorInfo_18_69 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
          {
            mercury__list__map2_4_p_0(ml_backend__ml_tailcall__TypeCtorInfo_18_69, ml_backend__ml_tailcall__TypeCtorInfo_18_69, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__V_64_64, ml_backend__ml_tailcall__CtorDefns0_45, &ml_backend__ml_tailcall__CtorDefns_48, &ml_backend__ml_tailcall__Warnings_63);
          }
          {
            ml_backend__ml_tailcall__CtorWarnings_47 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__Warnings_63);
          }
          ml_backend__ml_tailcall__TypeCtorInfo_18_82 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
          {
            mercury__list__map2_4_p_0(ml_backend__ml_tailcall__TypeCtorInfo_18_82, ml_backend__ml_tailcall__TypeCtorInfo_18_82, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__V_64_64, ml_backend__ml_tailcall__MemberDefns0_46, &ml_backend__ml_tailcall__MemberDefns_50, &ml_backend__ml_tailcall__Warnings_76);
          }
          {
            ml_backend__ml_tailcall__MemberWarnings_49 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__Warnings_76);
          }
          {
            *ml_backend__ml_tailcall__Warnings_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__CtorWarnings_47, ml_backend__ml_tailcall__MemberWarnings_49);
          }
          {
            ml_backend__ml_tailcall__ClassDefn_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_51, 0) = ((MR_Box) (ml_backend__ml_tailcall__Kind_40));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_51, 1) = ((MR_Box) (ml_backend__ml_tailcall__Imports_41));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_51, 2) = ((MR_Box) (ml_backend__ml_tailcall__BaseClasses_42));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_51, 3) = ((MR_Box) (ml_backend__ml_tailcall__Implements_43));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_51, 4) = ((MR_Box) (ml_backend__ml_tailcall__TypeParams_44));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_51, 5) = ((MR_Box) (ml_backend__ml_tailcall__CtorDefns_48));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_51, 6) = ((MR_Box) (ml_backend__ml_tailcall__MemberDefns_50));
          }
          ml_backend__ml_tailcall__DefnBody_56 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_tailcall__ClassDefn_51);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_tailcall__Defn_11 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_13));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_14));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Flags_15));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__DefnBody_56));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *ml_backend__ml_tailcall__Defn_11 = ml_backend__ml_tailcall__Defn0_10;
          *ml_backend__ml_tailcall__Warnings_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_tailcall__MaybePredProcId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_16, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Params_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_16, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__FuncBody0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_16, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__Attributes_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_16, (MR_Integer) 3)));
          MR_Word ml_backend__ml_tailcall__EnvVarNames_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_16, (MR_Integer) 4)));
          MR_Word ml_backend__ml_tailcall__MaybeRequireTailrecInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_16, (MR_Integer) 5)));
          MR_Word ml_backend__ml_tailcall__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Params_18, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__RetTypes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Params_18, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__Locals_25;
          MR_Word ml_backend__ml_tailcall__AtTail_26;
          MR_Word ml_backend__ml_tailcall__MaybePredInfo_32;
          MR_Word ml_backend__ml_tailcall__TCallInfo_33;
          MR_Word ml_backend__ml_tailcall__FuncBody_34;
          MR_Word ml_backend__ml_tailcall__DefnBody_35;
          MR_Word ml_backend__ml_tailcall__V_52_52;

          {
            ml_backend__ml_tailcall__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_52_52, 0) = ((MR_Box) (ml_backend__ml_tailcall__Args_23));
          }
          {
            ml_backend__ml_tailcall__Locals_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Locals_25, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_52_52));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Locals_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if ((ml_backend__ml_tailcall__RetTypes_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              ml_backend__ml_tailcall__AtTail_26 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_3[0]);
            }
          else
            ml_backend__ml_tailcall__AtTail_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          if ((ml_backend__ml_tailcall__MaybePredProcId_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ml_backend__ml_tailcall__MaybePredInfo_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Word ml_backend__ml_tailcall__PredId_29;
              MR_Word ml_backend__ml_tailcall__PredInfo_31;
              MR_Word ml_backend__ml_tailcall__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybePredProcId_17, (MR_Integer) 0)));
              MR_Integer ml_backend__ml_tailcall__V_30_30;

              ml_backend__ml_tailcall__PredId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_55_55, (MR_Integer) 0)));
              ml_backend__ml_tailcall__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_55_55, (MR_Integer) 1)));
              {
                hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_tailcall__ModuleInfo_7, ml_backend__ml_tailcall__PredId_29, &ml_backend__ml_tailcall__PredInfo_31);
              }
              {
                ml_backend__ml_tailcall__MaybePredInfo_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybePredInfo_32, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredInfo_31));
              }
            }
          {
            ml_backend__ml_tailcall__TCallInfo_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, 0) = ((MR_Box) (ml_backend__ml_tailcall__ModuleInfo_7));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, 1) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_8));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, 2) = ((MR_Box) (ml_backend__ml_tailcall__Name_13));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, 3) = ((MR_Box) (ml_backend__ml_tailcall__MaybePredInfo_32));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, 4) = ((MR_Box) (ml_backend__ml_tailcall__Locals_25));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, 5) = ((MR_Box) (ml_backend__ml_tailcall__WarnTailCalls_9));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_33, 6) = ((MR_Box) (ml_backend__ml_tailcall__MaybeRequireTailrecInfo_22));
          }
          {
            ml_backend__ml_tailcall__mark_tailcalls_in_function_body_5_p_0(ml_backend__ml_tailcall__TCallInfo_33, ml_backend__ml_tailcall__AtTail_26, ml_backend__ml_tailcall__Warnings_12, ml_backend__ml_tailcall__FuncBody0_19, &ml_backend__ml_tailcall__FuncBody_34);
          }
          {
            ml_backend__ml_tailcall__DefnBody_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_35, 0) = ((MR_Box) (ml_backend__ml_tailcall__MaybePredProcId_17));
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_35, 1) = ((MR_Box) (ml_backend__ml_tailcall__Params_18));
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_35, 2) = ((MR_Box) (ml_backend__ml_tailcall__FuncBody_34));
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_35, 3) = ((MR_Box) (ml_backend__ml_tailcall__Attributes_20));
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_35, 4) = ((MR_Box) (ml_backend__ml_tailcall__EnvVarNames_21));
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_35, 5) = ((MR_Box) (ml_backend__ml_tailcall__MaybeRequireTailrecInfo_22));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_tailcall__Defn_11 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_13));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_14));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Flags_15));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__DefnBody_35));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defns_6_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
    MR_Word ml_backend__ml_tailcall__conv1_Defn_11;
    MR_Word ml_backend__ml_tailcall__conv0_Warnings_12;

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv1_Defn_11, &ml_backend__ml_tailcall__conv0_Warnings_12);
    }
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv1_Defn_11));
    *ml_backend__ml_tailcall__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_tailcall__conv0_Warnings_12));
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defns_6_p_0(
  MR_Word ml_backend__ml_tailcall__ModuleInfo_7,
  MR_Word ml_backend__ml_tailcall__ModuleName_8,
  MR_Word ml_backend__ml_tailcall__WarnTailCalls_9,
  MR_Word * ml_backend__ml_tailcall__HeadVar__4_4,
  MR_Word ml_backend__ml_tailcall__Defns0_11,
  MR_Word * ml_backend__ml_tailcall__Defns_12)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__TypeCtorInfo_18_18;
    MR_Word ml_backend__ml_tailcall__Warnings_10;
    MR_Word ml_backend__ml_tailcall__V_13_13;

    {
      ml_backend__ml_tailcall__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_13_13, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_13_13, 1) = ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_defns_6_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_13_13, 3) = ((MR_Box) (ml_backend__ml_tailcall__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_13_13, 4) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_13_13, 5) = ((MR_Box) (ml_backend__ml_tailcall__WarnTailCalls_9));
    }
    ml_backend__ml_tailcall__TypeCtorInfo_18_18 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    {
      mercury__list__map2_4_p_0(ml_backend__ml_tailcall__TypeCtorInfo_18_18, ml_backend__ml_tailcall__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__V_13_13, ml_backend__ml_tailcall__Defns0_11, ml_backend__ml_tailcall__Defns_12, &ml_backend__ml_tailcall__Warnings_10);
    }
    {
      *ml_backend__ml_tailcall__HeadVar__4_4 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__Warnings_10);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__not_at_tail_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

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
}

static void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
    MR_Word ml_backend__ml_tailcall__conv1_Defn_11;
    MR_Word ml_backend__ml_tailcall__conv0_Warnings_12;

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv1_Defn_11, &ml_backend__ml_tailcall__conv0_Warnings_12);
    }
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv1_Defn_11));
    *ml_backend__ml_tailcall__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_tailcall__conv0_Warnings_12));
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
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__TypeCtorInfo_18_53;
    MR_Word ml_backend__ml_tailcall__Defns0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 4)));
    MR_Word ml_backend__ml_tailcall__ModuleName_11;
    MR_Word ml_backend__ml_tailcall__WarnTailCallsBool_12;
    MR_Word ml_backend__ml_tailcall__WarnTailCalls_13;
    MR_Word ml_backend__ml_tailcall__Defns_14;
    MR_Word ml_backend__ml_tailcall__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Warnings_47;
    MR_Word ml_backend__ml_tailcall__V_48_48;
    MR_Word ml_backend__ml_tailcall__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 5)));
    MR_Word ml_backend__ml_tailcall__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 6)));
    MR_Word ml_backend__ml_tailcall__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 7)));
    MR_Word ml_backend__ml_tailcall__V_34_34;
    MR_Word ml_backend__ml_tailcall__V_35_35;
    MR_Word ml_backend__ml_tailcall__V_36_36;
    MR_Word ml_backend__ml_tailcall__V_37_37;
    MR_Word ml_backend__ml_tailcall__V_39_39;
    MR_Word ml_backend__ml_tailcall__V_40_40;
    MR_Word ml_backend__ml_tailcall__V_41_41;
    MR_Word ml_backend__ml_tailcall__V_38_38;

    {
      ml_backend__ml_tailcall__ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_tailcall__V_20_20);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_tailcall__Globals_6, (MR_Integer) 26, &ml_backend__ml_tailcall__WarnTailCallsBool_12);
    }
    switch (ml_backend__ml_tailcall__WarnTailCallsBool_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_tailcall__WarnTailCalls_13 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_tailcall__WarnTailCalls_13 = (MR_Integer) 0;
        break;
    }
    {
      ml_backend__ml_tailcall__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_48_48, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_48_48, 1) = ((MR_Box) (ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_48_48, 3) = ((MR_Box) (ml_backend__ml_tailcall__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_48_48, 4) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_48_48, 5) = ((MR_Box) (ml_backend__ml_tailcall__WarnTailCalls_13));
    }
    ml_backend__ml_tailcall__TypeCtorInfo_18_53 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    {
      mercury__list__map2_4_p_0(ml_backend__ml_tailcall__TypeCtorInfo_18_53, ml_backend__ml_tailcall__TypeCtorInfo_18_53, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__V_48_48, ml_backend__ml_tailcall__Defns0_10, &ml_backend__ml_tailcall__Defns_14, &ml_backend__ml_tailcall__Warnings_47);
    }
    {
      *ml_backend__ml_tailcall__Specs_8 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__Warnings_47);
    }
    ml_backend__ml_tailcall__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 0)));
    ml_backend__ml_tailcall__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 1)));
    ml_backend__ml_tailcall__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 2)));
    ml_backend__ml_tailcall__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 3)));
    ml_backend__ml_tailcall__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 4)));
    ml_backend__ml_tailcall__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 5)));
    ml_backend__ml_tailcall__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 6)));
    ml_backend__ml_tailcall__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_15, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_34_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_35_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__V_36_36));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__V_37_37));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Defns_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__V_39_39));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_tailcall__V_40_40));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_tailcall__V_41_41));
    }
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
