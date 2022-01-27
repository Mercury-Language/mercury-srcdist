/*
** Automatically generated from `ml_tailcall.m'
** by the Mercury compiler,
** version DEV
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_require_tail_recursion_0;

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_info_0_0[5];

static const MR_ConstString ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tailcall_info_0_0[5];

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
ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__351__1_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_72,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_98);

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
ml_backend__ml_tailcall__mark_tailcalls_in_default_6_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_7,
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_9,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
  MR_Word ml_backend__ml_tailcall__Default0_11,
  MR_Word * ml_backend__ml_tailcall__Default_12);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_case_6_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_7,
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_9,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
  MR_Word ml_backend__ml_tailcall__Case0_11,
  MR_Word * ml_backend__ml_tailcall__Case_12);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_cases_6_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_3,
  MR_Word * ml_backend__ml_tailcall__HeadVar__4_4,
  MR_Word ml_backend__ml_tailcall__HeadVar__5_5,
  MR_Word * ml_backend__ml_tailcall__HeadVar__6_6);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word ml_backend__ml_tailcall__Context_9,
  MR_Word * ml_backend__ml_tailcall__Warnings_10,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_11,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_12,
  MR_Word ml_backend__ml_tailcall__Stmt0_13,
  MR_Word * ml_backend__ml_tailcall__Stmt_14);

static MR_bool MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word ml_backend__ml_tailcall__Context_9,
  MR_Word * ml_backend__ml_tailcall__Warnings_10,
  MR_Word ml_backend__ml_tailcall__AtTailAfter0_11,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_12,
  MR_Word ml_backend__ml_tailcall__Stmt0_13,
  MR_Word * ml_backend__ml_tailcall__Stmt_14);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_7,
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_14,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_15,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_Statement_0_16,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_Statement_17);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statements_6_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4,
  MR_Word ml_backend__ml_tailcall__HeadVar__5_5,
  MR_Word * ml_backend__ml_tailcall__HeadVar__6_6);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_6_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4,
  MR_Word ml_backend__ml_tailcall__HeadVar__5_5,
  MR_Word * ml_backend__ml_tailcall__HeadVar__6_6);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_function_body_5_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_6,
  MR_Word ml_backend__ml_tailcall__AtTail_7,
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
  MR_Word ml_backend__ml_tailcall__Body0_9,
  MR_Word * ml_backend__ml_tailcall__Body_10);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_5_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_5_p_0(
  MR_Word ml_backend__ml_tailcall__ModuleName_6,
  MR_Word ml_backend__ml_tailcall__WarnTailCalls_7,
  MR_Word ml_backend__ml_tailcall__Defn0_8,
  MR_Word * ml_backend__ml_tailcall__Defn_9,
  MR_Word * ml_backend__ml_tailcall__Warnings_10);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defns_5_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defns_5_p_0(
  MR_Word ml_backend__ml_tailcall__ModuleName_6,
  MR_Word ml_backend__ml_tailcall__WarnTailCalls_7,
  MR_Word * ml_backend__ml_tailcall__HeadVar__3_3,
  MR_Word ml_backend__ml_tailcall__Defns0_9,
  MR_Word * ml_backend__ml_tailcall__Defns_10);

static void MR_CALL 
ml_backend__ml_tailcall__not_at_tail_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_4_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_1[15][2];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_2[1][8];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_3[1][1];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_4[1][5];

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_5[1][4];




static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_1[15][2] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_require_tail_recursion_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "recursive call is not tail recursive."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In mode number"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
};

static /* final */ const MR_Box ml_backend__ml_tailcall_scalar_common_2[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_1)),
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
  NULL
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
  NULL
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
  NULL
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
  (MR_Integer) 15,
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
  (MR_Integer) 15,
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
  NULL
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
  NULL
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
  (MR_Integer) 15,
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
  (MR_Integer) 15,
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
  (MR_Integer) 15,
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tailcall__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_require_tail_recursion_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_require_tail_recursion_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_warn_tail_calls_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_tailcall__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_require_tail_recursion_0
};

static const MR_ConstString ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tailcall_info_0_0[5] = {
  (MR_String) "tci_module_name",
  (MR_String) "tci_function_name",
  (MR_String) "tci_locals",
  (MR_String) "tci_warn_tail_calls",
  (MR_String) "tci_maybe_require_tailrec"
};

static const MR_DuFunctorDesc ml_backend__ml_tailcall__ml_backend__ml_tailcall__du_functor_desc_tailcall_info_0_0 = {
  (MR_String) "tailcall_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_types_tailcall_info_0_0,
  ml_backend__ml_tailcall__ml_backend__ml_tailcall__field_names_tailcall_info_0_0,
  NULL,
  NULL
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
  (MR_Integer) 15,
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
  (MR_Integer) 15,
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
ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__351__1_2_p_0(
  MR_Word ml_backend__ml_tailcall__HeadVar__1_72,
  MR_Word ml_backend__ml_tailcall__HeadVar__2_98)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall____Unify____at_tail_0_0(ml_backend__ml_tailcall__HeadVar__1_72, ml_backend__ml_tailcall__HeadVar__2_98);
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
    MR_Integer ml_backend__ml_tailcall__CastX_18 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;
    MR_Integer ml_backend__ml_tailcall__CastY_19 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__3_3;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_18 == ml_backend__ml_tailcall__CastY_19);
    if (ml_backend__ml_tailcall__succeeded)
      *ml_backend__ml_tailcall__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_tailcall__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_tailcall__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_tailcall__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_tailcall__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_tailcall__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_tailcall__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__ml_tailcall__V_14_14;

        {
          ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_tailcall__V_14_14, ml_backend__ml_tailcall__V_4_4, ml_backend__ml_tailcall__V_9_9);
        }
        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_14_14 == (MR_Integer) 0);
        ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
        if (ml_backend__ml_tailcall__succeeded)
          *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_14_14;
        else
          {
            MR_Word ml_backend__ml_tailcall__V_15_15;

            {
              ml_backend__mlds____Compare____mlds_entity_name_0_0(&ml_backend__ml_tailcall__V_15_15, ml_backend__ml_tailcall__V_5_5, ml_backend__ml_tailcall__V_10_10);
            }
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_15_15 == (MR_Integer) 0);
            ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
            if (ml_backend__ml_tailcall__succeeded)
              *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_15_15;
            else
              {
                MR_Word ml_backend__ml_tailcall__V_16_16;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[4], &ml_backend__ml_tailcall__V_16_16, ((MR_Box) (ml_backend__ml_tailcall__V_6_6)), ((MR_Box) (ml_backend__ml_tailcall__V_11_11)));
                }
                ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_16_16 == (MR_Integer) 0);
                ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
                if (ml_backend__ml_tailcall__succeeded)
                  *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_16_16;
                else
                  {
                    MR_Word ml_backend__ml_tailcall__V_17_17;
                    MR_Integer ml_backend__ml_tailcall__V_25_25 = (MR_Integer) ml_backend__ml_tailcall__V_7_7;
                    MR_Integer ml_backend__ml_tailcall__V_26_26 = (MR_Integer) ml_backend__ml_tailcall__V_12_12;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_tailcall__V_17_17, ml_backend__ml_tailcall__V_25_25, ml_backend__ml_tailcall__V_26_26);
                    }
                    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_17_17 == (MR_Integer) 0);
                    ml_backend__ml_tailcall__succeeded = !(ml_backend__ml_tailcall__succeeded);
                    if (ml_backend__ml_tailcall__succeeded)
                      *ml_backend__ml_tailcall__HeadVar__1_1 = ml_backend__ml_tailcall__V_17_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tailcall_scalar_common_1[5], ml_backend__ml_tailcall__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tailcall__V_8_8)), ((MR_Box) (ml_backend__ml_tailcall__V_13_13)));
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
    MR_Integer ml_backend__ml_tailcall__CastX_13 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__1_1;
    MR_Integer ml_backend__ml_tailcall__CastY_14 = (MR_Integer) ml_backend__ml_tailcall__HeadVar__2_2;

    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CastX_13 == ml_backend__ml_tailcall__CastY_14);
    if (ml_backend__ml_tailcall__succeeded)
      ml_backend__ml_tailcall__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_tailcall__TypeInfo_17_17;
        MR_Word ml_backend__ml_tailcall__TypeInfo_18_18;
        MR_Word ml_backend__ml_tailcall__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_tailcall__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_tailcall__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__ml_tailcall__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_tailcall__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_tailcall__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__HeadVar__2_2, (MR_Integer) 4)));

        {
          ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_tailcall__V_3_3, ml_backend__ml_tailcall__V_8_8);
        }
        if (ml_backend__ml_tailcall__succeeded)
          {
            {
              ml_backend__ml_tailcall__succeeded = ml_backend__mlds____Unify____mlds_entity_name_0_0(ml_backend__ml_tailcall__V_4_4, ml_backend__ml_tailcall__V_9_9);
            }
            if (ml_backend__ml_tailcall__succeeded)
              {
                ml_backend__ml_tailcall__TypeInfo_17_17 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[4];
                {
                  ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_17_17, ((MR_Box) (ml_backend__ml_tailcall__V_5_5)), ((MR_Box) (ml_backend__ml_tailcall__V_10_10)));
                }
                if (ml_backend__ml_tailcall__succeeded)
                  {
                    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_6_6 == ml_backend__ml_tailcall__V_11_11);
                    if (ml_backend__ml_tailcall__succeeded)
                      {
                        ml_backend__ml_tailcall__TypeInfo_18_18 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[5];
                        {
                          ml_backend__ml_tailcall__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tailcall__TypeInfo_18_18, ((MR_Box) (ml_backend__ml_tailcall__V_7_7)), ((MR_Box) (ml_backend__ml_tailcall__V_12_12)));
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
                    (ml_backend__ml_tailcall__env_ptr)->ml_backend__ml_tailcall__check_const_3_f_0_env_0__TypeInfo_23_46 = (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[9];
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
              ml_backend__ml_tailcall__WarnOrErrorWords_20 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[10]);
            }
            break;
          case (MR_Integer) 0:
            {
              ml_backend__ml_tailcall__WarnOrErrorWords_20 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[11]);
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
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_1[8])));
        }
        {
          ml_backend__ml_tailcall__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_47_47, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_49_49));
        }
        {
          ml_backend__ml_tailcall__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[14])));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_44_44, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_47_47));
        }
        {
          ml_backend__ml_tailcall__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_42_42, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_43_43));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_42_42, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_44_44));
        }
        {
          ml_backend__ml_tailcall__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[13])));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_39_39, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_42_42));
        }
        {
          ml_backend__ml_tailcall__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_37_37, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_38_38));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_37_37, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_39_39));
        }
        {
          ml_backend__ml_tailcall__Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Pieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tailcall_scalar_common_1[12])));
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
ml_backend__ml_tailcall__mark_tailcalls_in_default_6_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_7,
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_9,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
  MR_Word ml_backend__ml_tailcall__Default0_11,
  MR_Word * ml_backend__ml_tailcall__Default_12)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Default0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ml_backend__ml_tailcall__Warnings_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_tailcall__AtTailBefore_10 = ml_backend__ml_tailcall__AtTailAfter_9;
          *ml_backend__ml_tailcall__Default_12 = ml_backend__ml_tailcall__Default0_11;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_tailcall__Statement0_13 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__Default0_11), (MR_Integer) 1);
          MR_Word ml_backend__ml_tailcall__Statement_14;
          MR_Word ml_backend__ml_tailcall__Stmt0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_13, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_13, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__Stmt_25;

          {
            ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_7, ml_backend__ml_tailcall__Context_24, ml_backend__ml_tailcall__Warnings_8, ml_backend__ml_tailcall__AtTailAfter_9, ml_backend__ml_tailcall__AtTailBefore_10, ml_backend__ml_tailcall__Stmt0_23, &ml_backend__ml_tailcall__Stmt_25);
          }
          {
            ml_backend__ml_tailcall__Statement_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_14, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_25));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_14, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_24));
          }
          *ml_backend__ml_tailcall__Default_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_tailcall__Statement_14);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_case_6_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_7,
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_9,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_10,
  MR_Word ml_backend__ml_tailcall__Case0_11,
  MR_Word * ml_backend__ml_tailcall__Case_12)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__FirstCond_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_11, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__LaterConds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_11, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Statement0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Case0_11, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__Statement_16;
    MR_Word ml_backend__ml_tailcall__Stmt0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_15, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement0_15, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Stmt_27;

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_7, ml_backend__ml_tailcall__Context_26, ml_backend__ml_tailcall__Warnings_8, ml_backend__ml_tailcall__AtTailAfter_9, ml_backend__ml_tailcall__AtTailBefore_10, ml_backend__ml_tailcall__Stmt0_25, &ml_backend__ml_tailcall__Stmt_27);
    }
    {
      ml_backend__ml_tailcall__Statement_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_16, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_27));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Statement_16, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_tailcall__Case_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__FirstCond_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__LaterConds_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_16));
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_cases_6_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_3,
  MR_Word * ml_backend__ml_tailcall__HeadVar__4_4,
  MR_Word ml_backend__ml_tailcall__HeadVar__5_5,
  MR_Word * ml_backend__ml_tailcall__HeadVar__6_6)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    if ((ml_backend__ml_tailcall__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ml_backend__ml_tailcall__CaseWarnings_10;
        MR_Word ml_backend__ml_tailcall__CasesWarnings_11;
        MR_Word ml_backend__ml_tailcall__AtTailBefore_13;
        MR_Word ml_backend__ml_tailcall__AtTailBefores_14;
        MR_Word ml_backend__ml_tailcall__Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__Case_17;
        MR_Word ml_backend__ml_tailcall__Cases_18;

        {
          ml_backend__ml_tailcall__mark_tailcalls_in_case_6_p_0(ml_backend__ml_tailcall__TCallInfo_1, &ml_backend__ml_tailcall__CaseWarnings_10, ml_backend__ml_tailcall__AtTailAfter_3, &ml_backend__ml_tailcall__AtTailBefore_13, ml_backend__ml_tailcall__Case0_15, &ml_backend__ml_tailcall__Case_17);
        }
        {
          ml_backend__ml_tailcall__mark_tailcalls_in_cases_6_p_0(ml_backend__ml_tailcall__TCallInfo_1, &ml_backend__ml_tailcall__CasesWarnings_11, ml_backend__ml_tailcall__AtTailAfter_3, &ml_backend__ml_tailcall__AtTailBefores_14, ml_backend__ml_tailcall__Cases0_16, &ml_backend__ml_tailcall__Cases_18);
        }
        {
          *ml_backend__ml_tailcall__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__CaseWarnings_10, ml_backend__ml_tailcall__CasesWarnings_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_tailcall__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__AtTailBefore_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__AtTailBefores_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_tailcall__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Case_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Cases_18));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word ml_backend__ml_tailcall__Context_9,
  MR_Word * ml_backend__ml_tailcall__Warnings_10,
  MR_Word ml_backend__ml_tailcall__AtTailAfter_11,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_12,
  MR_Word ml_backend__ml_tailcall__Stmt0_13,
  MR_Word * ml_backend__ml_tailcall__Stmt_14)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__Sig_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Func_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__Obj_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 4)));
    MR_Word ml_backend__ml_tailcall__ReturnLvals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 5)));
    MR_Word ml_backend__ml_tailcall__CallKind0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 6)));
    MR_Word ml_backend__ml_tailcall__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__FunctionName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__QualName_23;
    MR_Word ml_backend__ml_tailcall__Locals_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_tailcall__CodeAddr_25;
    MR_Word ml_backend__ml_tailcall__V_29_29;

    {
      ml_backend__ml_tailcall__QualName_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualName_23, 0) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualName_23, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualName_23, 2) = ((MR_Box) (ml_backend__ml_tailcall__FunctionName_22));
    }
    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__CallKind0_20 == (MR_Integer) 2);
    if (ml_backend__ml_tailcall__succeeded)
      {
        ml_backend__ml_tailcall__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_tailcall__Func_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Func_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (ml_backend__ml_tailcall__succeeded)
          {
            ml_backend__ml_tailcall__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Func_16, (MR_Integer) 1)));
            ml_backend__ml_tailcall__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_tailcall__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 7)));
            if (ml_backend__ml_tailcall__succeeded)
              {
                ml_backend__ml_tailcall__CodeAddr_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__V_29_29, (MR_Integer) 1)));
                {
                  ml_backend__ml_tailcall__succeeded = ml_backend__ml_util__call_is_recursive_2_p_0(ml_backend__ml_tailcall__QualName_23, ml_backend__ml_tailcall__Stmt0_13);
                }
              }
          }
      }
    if (ml_backend__ml_tailcall__succeeded)
      {
        MR_Word ml_backend__ml_tailcall__ReturnRvals_26;
        MR_Word ml_backend__ml_tailcall__V_31_31;
        MR_Word ml_backend__ml_tailcall__V_32_32;

        ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter_11)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_tailcall__succeeded)
          {
            ml_backend__ml_tailcall__ReturnRvals_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__AtTailAfter_11, (MR_Integer) 0)));
            {
              ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall__match_return_vals_2_p_0(ml_backend__ml_tailcall__ReturnRvals_26, ml_backend__ml_tailcall__ReturnLvals_19);
            }
            if (ml_backend__ml_tailcall__succeeded)
              {
                if ((ml_backend__ml_tailcall__Obj_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  ml_backend__ml_tailcall__succeeded = MR_TRUE;
                else
                  {
                    MR_Word ml_backend__ml_tailcall__Rval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Obj_17, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_tailcall__V_94_94;

                    {
                      ml_backend__ml_tailcall__V_94_94 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__Rval_47, ml_backend__ml_tailcall__Locals_24);
                    }
                    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_94_94 == (MR_Integer) 1);
                  }
                if (ml_backend__ml_tailcall__succeeded)
                  {
                    {
                      ml_backend__ml_tailcall__V_31_31 = ml_backend__ml_tailcall__check_rvals_2_f_0(ml_backend__ml_tailcall__Args_18, ml_backend__ml_tailcall__Locals_24);
                    }
                    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_31_31 == (MR_Integer) 1);
                    if (ml_backend__ml_tailcall__succeeded)
                      {
                        {
                          ml_backend__ml_tailcall__V_32_32 = ml_backend__ml_tailcall__check_rval_2_f_0(ml_backend__ml_tailcall__Func_16, ml_backend__ml_tailcall__Locals_24);
                        }
                        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__V_32_32 == (MR_Integer) 1);
                      }
                  }
              }
          }
        if (ml_backend__ml_tailcall__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_tailcall__Stmt_14 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Sig_15));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Func_16));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Obj_17));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Args_18));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__ReturnLvals_19));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) ((MR_Integer) 1));
            }
            *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            switch (MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ml_backend__ml_tailcall__AtTailAfter_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ml_backend__ml_tailcall__WarnTailCalls_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 3)));
                      MR_Word ml_backend__ml_tailcall__MaybeRequireTailrecInfo_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 4)));
                      MR_Word ml_backend__ml_tailcall__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 0)));
                      MR_Word ml_backend__ml_tailcall__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_tailcall__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 2)));

                      ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__WarnTailCalls_53 == (MR_Integer) 1);
                      if (ml_backend__ml_tailcall__succeeded)
                        ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__MaybeRequireTailrecInfo_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (ml_backend__ml_tailcall__succeeded)
                        *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      else
                        {
                          MR_Word ml_backend__ml_tailcall__WarnOrError_56;

                          switch (ml_backend__ml_tailcall__WarnTailCalls_53) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              {
                                MR_Word ml_backend__ml_tailcall__RequireTailrecInfo_55;
                                MR_Word ml_backend__ml_tailcall__TailrecType_57;
                                MR_Word ml_backend__ml_tailcall__V_58_58;

                                ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__MaybeRequireTailrecInfo_54)) == (MR_mktag((MR_Integer) 1)));
                                if (ml_backend__ml_tailcall__succeeded)
                                  {
                                    ml_backend__ml_tailcall__RequireTailrecInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeRequireTailrecInfo_54, (MR_Integer) 0)));
                                    ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__RequireTailrecInfo_55)) == (MR_mktag((MR_Integer) 1)));
                                    if (ml_backend__ml_tailcall__succeeded)
                                      {
                                        ml_backend__ml_tailcall__WarnOrError_56 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_55, (MR_Integer) 0)))) & (MR_Integer) 1);
                                        ml_backend__ml_tailcall__TailrecType_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_55, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                        ml_backend__ml_tailcall__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_55, (MR_Integer) 1)));
                                      }
                                  }
                              }
                              break;
                            case (MR_Integer) 0:
                              if ((ml_backend__ml_tailcall__MaybeRequireTailrecInfo_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                {
                                  ml_backend__ml_tailcall__WarnOrError_56 = (MR_Integer) 0;
                                  ml_backend__ml_tailcall__succeeded = MR_TRUE;
                                }
                              else
                                {
                                  MR_Word ml_backend__ml_tailcall__RequireTailrecInfo_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeRequireTailrecInfo_54, (MR_Integer) 0)));

                                  if (((MR_tag((MR_Word) ml_backend__ml_tailcall__RequireTailrecInfo_73)) == (MR_mktag((MR_Integer) 1))))
                                    {
                                      MR_Word ml_backend__ml_tailcall__V_59_59;
                                      MR_Word ml_backend__ml_tailcall__TailrecType_88;

                                      ml_backend__ml_tailcall__WarnOrError_56 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_73, (MR_Integer) 0)))) & (MR_Integer) 1);
                                      ml_backend__ml_tailcall__TailrecType_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_73, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                      ml_backend__ml_tailcall__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_73, (MR_Integer) 1)));
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
                              MR_Word ml_backend__ml_tailcall__QualProcLabel_61;
                              MR_Word ml_backend__ml_tailcall__ProcLabel_66;
                              MR_Word ml_backend__ml_tailcall__PredLabel_67;
                              MR_Integer ml_backend__ml_tailcall__ProcId_68;
                              MR_Word ml_backend__ml_tailcall__V_64_64;
                              MR_Word ml_backend__ml_tailcall__V_65_65;
                              MR_String ml_backend__ml_tailcall__V_69_69;
                              MR_Word ml_backend__ml_tailcall__V_70_70;
                              MR_String ml_backend__ml_tailcall__V_71_71;
                              MR_Integer ml_backend__ml_tailcall__V_72_72;

                              if (((MR_tag((MR_Word) ml_backend__ml_tailcall__CodeAddr_25)) == (MR_mktag((MR_Integer) 1))))
                                {
                                  MR_Integer ml_backend__ml_tailcall___SeqNum_63;
                                  MR_Word ml_backend__ml_tailcall___Sig_77;

                                  ml_backend__ml_tailcall__QualProcLabel_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 0)));
                                  ml_backend__ml_tailcall___SeqNum_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 1)));
                                  ml_backend__ml_tailcall___Sig_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 2)));
                                }
                              else
                                {
                                  MR_Word ml_backend__ml_tailcall___Sig_62;

                                  ml_backend__ml_tailcall__QualProcLabel_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 0)));
                                  ml_backend__ml_tailcall___Sig_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 1)));
                                }
                              ml_backend__ml_tailcall__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_61, (MR_Integer) 0)));
                              ml_backend__ml_tailcall__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_61, (MR_Integer) 1)));
                              ml_backend__ml_tailcall__ProcLabel_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_61, (MR_Integer) 2)));
                              ml_backend__ml_tailcall__PredLabel_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_66, (MR_Integer) 0)));
                              ml_backend__ml_tailcall__ProcId_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_66, (MR_Integer) 1)));
                              ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__PredLabel_67)) == (MR_mktag((MR_Integer) 1)));
                              if (ml_backend__ml_tailcall__succeeded)
                                {
                                  ml_backend__ml_tailcall__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__PredLabel_67, (MR_Integer) 0)));
                                  ml_backend__ml_tailcall__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__PredLabel_67, (MR_Integer) 1)));
                                  ml_backend__ml_tailcall__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__PredLabel_67, (MR_Integer) 2)));
                                  ml_backend__ml_tailcall__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__PredLabel_67, (MR_Integer) 3)));
                                  *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                }
                              else
                                {
                                  ml_backend__ml_tailcall__report_nontailcall_5_p_0(ml_backend__ml_tailcall__WarnOrError_56, ml_backend__ml_tailcall__PredLabel_67, ml_backend__ml_tailcall__ProcId_68, ml_backend__ml_tailcall__Context_9, ml_backend__ml_tailcall__Warnings_10);
                                }
                            }
                          else
                            *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        }
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_tailcall__WarnTailCalls_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_tailcall__MaybeRequireTailrecInfo_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_tailcall__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_tailcall__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_tailcall__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 2)));

                  ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__WarnTailCalls_53 == (MR_Integer) 1);
                  if (ml_backend__ml_tailcall__succeeded)
                    ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__MaybeRequireTailrecInfo_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (ml_backend__ml_tailcall__succeeded)
                    *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word ml_backend__ml_tailcall__WarnOrError_56;

                      switch (ml_backend__ml_tailcall__WarnTailCalls_53) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            MR_Word ml_backend__ml_tailcall__RequireTailrecInfo_55;
                            MR_Word ml_backend__ml_tailcall__TailrecType_57;
                            MR_Word ml_backend__ml_tailcall__V_58_58;

                            ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__MaybeRequireTailrecInfo_54)) == (MR_mktag((MR_Integer) 1)));
                            if (ml_backend__ml_tailcall__succeeded)
                              {
                                ml_backend__ml_tailcall__RequireTailrecInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeRequireTailrecInfo_54, (MR_Integer) 0)));
                                ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__RequireTailrecInfo_55)) == (MR_mktag((MR_Integer) 1)));
                                if (ml_backend__ml_tailcall__succeeded)
                                  {
                                    ml_backend__ml_tailcall__WarnOrError_56 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_55, (MR_Integer) 0)))) & (MR_Integer) 1);
                                    ml_backend__ml_tailcall__TailrecType_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_55, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                    ml_backend__ml_tailcall__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_55, (MR_Integer) 1)));
                                  }
                              }
                          }
                          break;
                        case (MR_Integer) 0:
                          if ((ml_backend__ml_tailcall__MaybeRequireTailrecInfo_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              ml_backend__ml_tailcall__WarnOrError_56 = (MR_Integer) 0;
                              ml_backend__ml_tailcall__succeeded = MR_TRUE;
                            }
                          else
                            {
                              MR_Word ml_backend__ml_tailcall__RequireTailrecInfo_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__MaybeRequireTailrecInfo_54, (MR_Integer) 0)));

                              if (((MR_tag((MR_Word) ml_backend__ml_tailcall__RequireTailrecInfo_73)) == (MR_mktag((MR_Integer) 1))))
                                {
                                  MR_Word ml_backend__ml_tailcall__V_59_59;
                                  MR_Word ml_backend__ml_tailcall__TailrecType_88;

                                  ml_backend__ml_tailcall__WarnOrError_56 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_73, (MR_Integer) 0)))) & (MR_Integer) 1);
                                  ml_backend__ml_tailcall__TailrecType_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_73, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                  ml_backend__ml_tailcall__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__RequireTailrecInfo_73, (MR_Integer) 1)));
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
                          MR_Word ml_backend__ml_tailcall__QualProcLabel_61;
                          MR_Word ml_backend__ml_tailcall__ProcLabel_66;
                          MR_Word ml_backend__ml_tailcall__PredLabel_67;
                          MR_Integer ml_backend__ml_tailcall__ProcId_68;
                          MR_Word ml_backend__ml_tailcall__V_64_64;
                          MR_Word ml_backend__ml_tailcall__V_65_65;
                          MR_String ml_backend__ml_tailcall__V_69_69;
                          MR_Word ml_backend__ml_tailcall__V_70_70;
                          MR_String ml_backend__ml_tailcall__V_71_71;
                          MR_Integer ml_backend__ml_tailcall__V_72_72;

                          if (((MR_tag((MR_Word) ml_backend__ml_tailcall__CodeAddr_25)) == (MR_mktag((MR_Integer) 1))))
                            {
                              MR_Integer ml_backend__ml_tailcall___SeqNum_63;
                              MR_Word ml_backend__ml_tailcall___Sig_77;

                              ml_backend__ml_tailcall__QualProcLabel_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 0)));
                              ml_backend__ml_tailcall___SeqNum_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 1)));
                              ml_backend__ml_tailcall___Sig_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 2)));
                            }
                          else
                            {
                              MR_Word ml_backend__ml_tailcall___Sig_62;

                              ml_backend__ml_tailcall__QualProcLabel_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 0)));
                              ml_backend__ml_tailcall___Sig_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__CodeAddr_25, (MR_Integer) 1)));
                            }
                          ml_backend__ml_tailcall__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_61, (MR_Integer) 0)));
                          ml_backend__ml_tailcall__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_61, (MR_Integer) 1)));
                          ml_backend__ml_tailcall__ProcLabel_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__QualProcLabel_61, (MR_Integer) 2)));
                          ml_backend__ml_tailcall__PredLabel_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_66, (MR_Integer) 0)));
                          ml_backend__ml_tailcall__ProcId_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ProcLabel_66, (MR_Integer) 1)));
                          ml_backend__ml_tailcall__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tailcall__PredLabel_67)) == (MR_mktag((MR_Integer) 1)));
                          if (ml_backend__ml_tailcall__succeeded)
                            {
                              ml_backend__ml_tailcall__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__PredLabel_67, (MR_Integer) 0)));
                              ml_backend__ml_tailcall__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__PredLabel_67, (MR_Integer) 1)));
                              ml_backend__ml_tailcall__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__PredLabel_67, (MR_Integer) 2)));
                              ml_backend__ml_tailcall__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__PredLabel_67, (MR_Integer) 3)));
                              *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            }
                          else
                            {
                              ml_backend__ml_tailcall__report_nontailcall_5_p_0(ml_backend__ml_tailcall__WarnOrError_56, ml_backend__ml_tailcall__PredLabel_67, ml_backend__ml_tailcall__ProcId_68, ml_backend__ml_tailcall__Context_9, ml_backend__ml_tailcall__Warnings_10);
                            }
                        }
                      else
                        *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                }
                break;
            }
            *ml_backend__ml_tailcall__Stmt_14 = ml_backend__ml_tailcall__Stmt0_13;
            *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
      }
    else
      {
        *ml_backend__ml_tailcall__Stmt_14 = ml_backend__ml_tailcall__Stmt0_13;
        *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        switch (MR_tag((MR_Word) ml_backend__ml_tailcall__AtTailAfter_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_tailcall__AtTailAfter_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                break;
            }
            break;
          case (MR_Integer) 1:
            *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;

    {
      ml_backend__ml_tailcall__succeeded = ml_backend__ml_tailcall__IntroducedFrom__pred__mark_tailcalls_in_stmt__351__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1));
    }
    return ml_backend__ml_tailcall__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_8,
  MR_Word ml_backend__ml_tailcall__Context_9,
  MR_Word * ml_backend__ml_tailcall__Warnings_10,
  MR_Word ml_backend__ml_tailcall__AtTailAfter0_11,
  MR_Word * ml_backend__ml_tailcall__AtTailBefore_12,
  MR_Word ml_backend__ml_tailcall__Stmt0_13,
  MR_Word * ml_backend__ml_tailcall__Stmt_14)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_tailcall__Stmt0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_tailcall__Defns0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Statements0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__DefnsWarnings_18;
          MR_Word ml_backend__ml_tailcall__Defns_19;
          MR_Word ml_backend__ml_tailcall__Locals_20;
          MR_Word ml_backend__ml_tailcall__NewTCallInfo_21;
          MR_Word ml_backend__ml_tailcall__StatementsWarnings_22;
          MR_Word ml_backend__ml_tailcall__Statements_23;
          MR_Word ml_backend__ml_tailcall__V_74_74;
          MR_Word ml_backend__ml_tailcall__V_75_75;
          MR_Word ml_backend__ml_tailcall__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 3)));
          MR_Word ml_backend__ml_tailcall__V_86_86;
          MR_Word ml_backend__ml_tailcall__V_87_87;
          MR_Word ml_backend__ml_tailcall__V_88_88;
          MR_Word ml_backend__ml_tailcall__V_89_89;
          MR_Word ml_backend__ml_tailcall__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 4)));

          {
            ml_backend__ml_tailcall__mark_tailcalls_in_defns_5_p_0(ml_backend__ml_tailcall__ModuleName_17, ml_backend__ml_tailcall__V_80_80, &ml_backend__ml_tailcall__DefnsWarnings_18, ml_backend__ml_tailcall__Defns0_15, &ml_backend__ml_tailcall__Defns_19);
          }
          ml_backend__ml_tailcall__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 0)));
          ml_backend__ml_tailcall__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 1)));
          ml_backend__ml_tailcall__Locals_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 2)));
          ml_backend__ml_tailcall__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 3)));
          ml_backend__ml_tailcall__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_8, (MR_Integer) 4)));
          {
            ml_backend__ml_tailcall__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_75_75, 0) = ((MR_Box) (ml_backend__ml_tailcall__Defns_19));
          }
          {
            ml_backend__ml_tailcall__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_74_74, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_75_75));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__V_74_74, 1) = ((MR_Box) (ml_backend__ml_tailcall__Locals_20));
          }
          {
            ml_backend__ml_tailcall__NewTCallInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_21, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_86_86));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_21, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_87_87));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_21, 2) = ((MR_Box) (ml_backend__ml_tailcall__V_74_74));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_21, 3) = ((MR_Box) (ml_backend__ml_tailcall__V_88_88));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__NewTCallInfo_21, 4) = ((MR_Box) (ml_backend__ml_tailcall__V_89_89));
          }
          {
            ml_backend__ml_tailcall__mark_tailcalls_in_statements_6_p_0(ml_backend__ml_tailcall__NewTCallInfo_21, &ml_backend__ml_tailcall__StatementsWarnings_22, ml_backend__ml_tailcall__AtTailAfter0_11, ml_backend__ml_tailcall__AtTailBefore_12, ml_backend__ml_tailcall__Statements0_16, &ml_backend__ml_tailcall__Statements_23);
          }
          {
            *ml_backend__ml_tailcall__Warnings_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__DefnsWarnings_18, ml_backend__ml_tailcall__StatementsWarnings_22);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_tailcall__Stmt_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Defns_19));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Statements_23));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_tailcall__Kind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Rval_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__Statement0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__AtTailAfter_27;
          MR_Word ml_backend__ml_tailcall__AtTailBefore0_28;
          MR_Word ml_backend__ml_tailcall__Statement_29;

          {
            ml_backend__ml_tailcall__not_at_tail_2_p_0(ml_backend__ml_tailcall__AtTailAfter0_11, &ml_backend__ml_tailcall__AtTailAfter_27);
          }
          {
            ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__Warnings_10, ml_backend__ml_tailcall__AtTailAfter_27, &ml_backend__ml_tailcall__AtTailBefore0_28, ml_backend__ml_tailcall__Statement0_26, &ml_backend__ml_tailcall__Statement_29);
          }
          {
            ml_backend__ml_tailcall__not_at_tail_2_p_0(ml_backend__ml_tailcall__AtTailBefore0_28, ml_backend__ml_tailcall__AtTailBefore_12);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_tailcall__Stmt_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Kind_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Rval_25));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_29));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_tailcall__Cond_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Then0_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__MaybeElse0_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__ThenWarnings_33;
          MR_Word ml_backend__ml_tailcall__AtTailBeforeThen_34;
          MR_Word ml_backend__ml_tailcall__Then_35;
          MR_Word ml_backend__ml_tailcall__ElseWarnings_36;
          MR_Word ml_backend__ml_tailcall__AtTailBeforeElse_37;
          MR_Word ml_backend__ml_tailcall__MaybeElse_38;

          {
            ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, &ml_backend__ml_tailcall__ThenWarnings_33, ml_backend__ml_tailcall__AtTailAfter0_11, &ml_backend__ml_tailcall__AtTailBeforeThen_34, ml_backend__ml_tailcall__Then0_31, &ml_backend__ml_tailcall__Then_35);
          }
          {
            ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, &ml_backend__ml_tailcall__ElseWarnings_36, ml_backend__ml_tailcall__AtTailAfter0_11, &ml_backend__ml_tailcall__AtTailBeforeElse_37, ml_backend__ml_tailcall__MaybeElse0_32, &ml_backend__ml_tailcall__MaybeElse_38);
          }
          {
            *ml_backend__ml_tailcall__Warnings_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__ThenWarnings_33, ml_backend__ml_tailcall__ElseWarnings_36);
          }
          ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeThen_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (!(ml_backend__ml_tailcall__succeeded))
            ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeElse_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (ml_backend__ml_tailcall__succeeded)
            *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_tailcall__Stmt_14 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Cond_30));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Then_35));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__MaybeElse_38));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_tailcall__Type_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 1)));
              MR_Word ml_backend__ml_tailcall__Val_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 2)));
              MR_Word ml_backend__ml_tailcall__Range_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 3)));
              MR_Word ml_backend__ml_tailcall__Cases0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 4)));
              MR_Word ml_backend__ml_tailcall__Default0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 5)));
              MR_Word ml_backend__ml_tailcall__CasesWarnings_44;
              MR_Word ml_backend__ml_tailcall__AtTailBeforeCases_45;
              MR_Word ml_backend__ml_tailcall__Cases_46;
              MR_Word ml_backend__ml_tailcall__DefaultWarnings_47;
              MR_Word ml_backend__ml_tailcall__AtTailBeforeDefault_48;
              MR_Word ml_backend__ml_tailcall__Default_49;

              {
                ml_backend__ml_tailcall__mark_tailcalls_in_cases_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, &ml_backend__ml_tailcall__CasesWarnings_44, ml_backend__ml_tailcall__AtTailAfter0_11, &ml_backend__ml_tailcall__AtTailBeforeCases_45, ml_backend__ml_tailcall__Cases0_42, &ml_backend__ml_tailcall__Cases_46);
              }
              {
                ml_backend__ml_tailcall__mark_tailcalls_in_default_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, &ml_backend__ml_tailcall__DefaultWarnings_47, ml_backend__ml_tailcall__AtTailAfter0_11, &ml_backend__ml_tailcall__AtTailBeforeDefault_48, ml_backend__ml_tailcall__Default0_43, &ml_backend__ml_tailcall__Default_49);
              }
              {
                *ml_backend__ml_tailcall__Warnings_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__CasesWarnings_44, ml_backend__ml_tailcall__DefaultWarnings_47);
              }
              {
                MR_Word ml_backend__ml_tailcall__V_50_50;
                MR_Box ml_backend__ml_tailcall__conv0_V_50_50;

                {
                  ml_backend__ml_tailcall__succeeded = mercury__list__find_first_match_3_p_0((MR_Word) &ml_backend__ml_tailcall__ml_backend__ml_tailcall__type_ctor_info_at_tail_0, (MR_Word) &ml_backend__ml_tailcall_scalar_common_5[0], ml_backend__ml_tailcall__AtTailBeforeCases_45, &ml_backend__ml_tailcall__conv0_V_50_50);
                }
                if (ml_backend__ml_tailcall__succeeded)
                  {
                    ml_backend__ml_tailcall__V_50_50 = ((MR_Word) ml_backend__ml_tailcall__conv0_V_50_50);
                    ml_backend__ml_tailcall__succeeded = MR_TRUE;
                  }
              }
              if (!(ml_backend__ml_tailcall__succeeded))
                ml_backend__ml_tailcall__succeeded = (ml_backend__ml_tailcall__AtTailBeforeDefault_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (ml_backend__ml_tailcall__succeeded)
                *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_tailcall__Stmt_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Type_39));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Val_40));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Range_41));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Cases_46));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__Default_49));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ml_backend__ml_tailcall__AtTailBefore_12 = ml_backend__ml_tailcall__AtTailAfter0_11;
              *ml_backend__ml_tailcall__Stmt_14 = ml_backend__ml_tailcall__Stmt0_13;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ml_backend__ml_tailcall__not_at_tail_2_p_0(ml_backend__ml_tailcall__AtTailAfter0_11, ml_backend__ml_tailcall__AtTailBefore_12);
              }
              *ml_backend__ml_tailcall__Stmt_14 = ml_backend__ml_tailcall__Stmt0_13;
            }
            break;
          case (MR_Integer) 4:
            {
              ml_backend__ml_tailcall__mark_tailcalls_in_stmt_call_7_p_0(ml_backend__ml_tailcall__TCallInfo_8, ml_backend__ml_tailcall__Context_9, ml_backend__ml_tailcall__Warnings_10, ml_backend__ml_tailcall__AtTailAfter0_11, ml_backend__ml_tailcall__AtTailBefore_12, ml_backend__ml_tailcall__Stmt0_13, ml_backend__ml_tailcall__Stmt_14);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_tailcall__ReturnVals_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 1)));

              *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_tailcall__AtTailBefore_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__ReturnVals_70));
              }
              *ml_backend__ml_tailcall__Stmt_14 = ml_backend__ml_tailcall__Stmt0_13;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_tailcall__Ref_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 1)));
              MR_Word ml_backend__ml_tailcall__Handler0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 3)));
              MR_Word ml_backend__ml_tailcall__TryWarnings_59;
              MR_Word ml_backend__ml_tailcall__HandlerWarnings_61;
              MR_Word ml_backend__ml_tailcall__Handler_63;
              MR_Word ml_backend__ml_tailcall__Statement0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_tailcall__Stmt0_13, (MR_Integer) 2)));
              MR_Word ml_backend__ml_tailcall__Statement_77;
              MR_Word ml_backend__ml_tailcall__V_60_60;
              MR_Word ml_backend__ml_tailcall__V_62_62;

              {
                ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, &ml_backend__ml_tailcall__TryWarnings_59, ml_backend__ml_tailcall__AtTailAfter0_11, &ml_backend__ml_tailcall__V_60_60, ml_backend__ml_tailcall__Statement0_76, &ml_backend__ml_tailcall__Statement_77);
              }
              {
                ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_8, &ml_backend__ml_tailcall__HandlerWarnings_61, ml_backend__ml_tailcall__AtTailAfter0_11, &ml_backend__ml_tailcall__V_62_62, ml_backend__ml_tailcall__Handler0_58, &ml_backend__ml_tailcall__Handler_63);
              }
              {
                *ml_backend__ml_tailcall__Warnings_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__TryWarnings_59, ml_backend__ml_tailcall__HandlerWarnings_61);
              }
              *ml_backend__ml_tailcall__AtTailBefore_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_tailcall__Stmt_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Ref_57));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Statement_77));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__Handler_63));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_7,
  MR_Word * ml_backend__ml_tailcall__Warnings_8,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_14,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_15,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_Statement_0_16,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_Statement_17)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__Stmt0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_Statement_0_16, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_Statement_0_16, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Stmt_13;

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_stmt_7_p_0(ml_backend__ml_tailcall__TCallInfo_7, ml_backend__ml_tailcall__Context_12, ml_backend__ml_tailcall__Warnings_8, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_14, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_15, ml_backend__ml_tailcall__Stmt0_11, &ml_backend__ml_tailcall__Stmt_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_tailcall__STATE_VARIABLE_Statement_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Stmt_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_statements_6_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4,
  MR_Word ml_backend__ml_tailcall__HeadVar__5_5,
  MR_Word * ml_backend__ml_tailcall__HeadVar__6_6)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    if ((ml_backend__ml_tailcall__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4 = ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3;
      }
    else
      {
        MR_Word ml_backend__ml_tailcall__FirstWarnings_12;
        MR_Word ml_backend__ml_tailcall__RestWarnings_13;
        MR_Word ml_backend__ml_tailcall__First0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__Rest0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tailcall__First_17;
        MR_Word ml_backend__ml_tailcall__Rest_18;
        MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_21_21;

        {
          ml_backend__ml_tailcall__mark_tailcalls_in_statements_6_p_0(ml_backend__ml_tailcall__TCallInfo_1, &ml_backend__ml_tailcall__RestWarnings_13, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3, &ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_21_21, ml_backend__ml_tailcall__Rest0_16, &ml_backend__ml_tailcall__Rest_18);
        }
        {
          ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_1, &ml_backend__ml_tailcall__FirstWarnings_12, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_21_21, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4, ml_backend__ml_tailcall__First0_15, &ml_backend__ml_tailcall__First_17);
        }
        {
          *ml_backend__ml_tailcall__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__FirstWarnings_12, ml_backend__ml_tailcall__RestWarnings_13);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_tailcall__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__First_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Rest_18));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_maybe_statement_6_p_0(
  MR_Word ml_backend__ml_tailcall__TCallInfo_1,
  MR_Word * ml_backend__ml_tailcall__HeadVar__2_2,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4,
  MR_Word ml_backend__ml_tailcall__HeadVar__5_5,
  MR_Word * ml_backend__ml_tailcall__HeadVar__6_6)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;

    if ((ml_backend__ml_tailcall__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_tailcall__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4 = ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3;
      }
    else
      {
        MR_Word ml_backend__ml_tailcall__Statement0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tailcall__Statement_15;

        {
          ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_1, ml_backend__ml_tailcall__HeadVar__2_2, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_0_3, ml_backend__ml_tailcall__STATE_VARIABLE_AtTail_4, ml_backend__ml_tailcall__Statement0_14, &ml_backend__ml_tailcall__Statement_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_tailcall__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Statement_15));
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
        MR_Word ml_backend__ml_tailcall__Statement_13;
        MR_Word ml_backend__ml_tailcall__V_12_12;

        {
          ml_backend__ml_tailcall__mark_tailcalls_in_statement_6_p_0(ml_backend__ml_tailcall__TCallInfo_6, ml_backend__ml_tailcall__Warnings_8, ml_backend__ml_tailcall__AtTail_7, &ml_backend__ml_tailcall__V_12_12, ml_backend__ml_tailcall__Statement0_11, &ml_backend__ml_tailcall__Statement_13);
        }
        *ml_backend__ml_tailcall__Body_10 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_tailcall__Statement_13);
      }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_5_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
    MR_Word ml_backend__ml_tailcall__conv1_Defn_9;
    MR_Word ml_backend__ml_tailcall__conv0_Warnings_10;

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv1_Defn_9, &ml_backend__ml_tailcall__conv0_Warnings_10);
    }
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv1_Defn_9));
    *ml_backend__ml_tailcall__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_tailcall__conv0_Warnings_10));
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defn_5_p_0(
  MR_Word ml_backend__ml_tailcall__ModuleName_6,
  MR_Word ml_backend__ml_tailcall__WarnTailCalls_7,
  MR_Word ml_backend__ml_tailcall__Defn0_8,
  MR_Word * ml_backend__ml_tailcall__Defn_9,
  MR_Word * ml_backend__ml_tailcall__Warnings_10)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__Flags_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__DefnBody0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Defn0_8, (MR_Integer) 3)));

    switch (MR_tag((MR_Word) ml_backend__ml_tailcall__DefnBody0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_tailcall__TypeCtorInfo_16_61;
          MR_Word ml_backend__ml_tailcall__TypeCtorInfo_16_73;
          MR_Word ml_backend__ml_tailcall__ClassDefn0_33 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tailcall__DefnBody0_14), (MR_Integer) 0);
          MR_Word ml_backend__ml_tailcall__Kind_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_33, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Imports_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_33, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__BaseClasses_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_33, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__Implements_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_33, (MR_Integer) 3)));
          MR_Word ml_backend__ml_tailcall__TypeParams_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_33, (MR_Integer) 4)));
          MR_Word ml_backend__ml_tailcall__CtorDefns0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_33, (MR_Integer) 5)));
          MR_Word ml_backend__ml_tailcall__MemberDefns0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn0_33, (MR_Integer) 6)));
          MR_Word ml_backend__ml_tailcall__CtorWarnings_41;
          MR_Word ml_backend__ml_tailcall__CtorDefns_42;
          MR_Word ml_backend__ml_tailcall__MemberWarnings_43;
          MR_Word ml_backend__ml_tailcall__MemberDefns_44;
          MR_Word ml_backend__ml_tailcall__ClassDefn_45;
          MR_Word ml_backend__ml_tailcall__DefnBody_49;
          MR_Word ml_backend__ml_tailcall__Warnings_55;
          MR_Word ml_backend__ml_tailcall__V_56_56;
          MR_Word ml_backend__ml_tailcall__Warnings_67;

          {
            ml_backend__ml_tailcall__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_56_56, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_56_56, 1) = ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_defn_5_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_56_56, 3) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_6));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_56_56, 4) = ((MR_Box) (ml_backend__ml_tailcall__WarnTailCalls_7));
          }
          ml_backend__ml_tailcall__TypeCtorInfo_16_61 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
          {
            mercury__list__map2_4_p_0(ml_backend__ml_tailcall__TypeCtorInfo_16_61, ml_backend__ml_tailcall__TypeCtorInfo_16_61, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__V_56_56, ml_backend__ml_tailcall__CtorDefns0_39, &ml_backend__ml_tailcall__CtorDefns_42, &ml_backend__ml_tailcall__Warnings_55);
          }
          {
            ml_backend__ml_tailcall__CtorWarnings_41 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__Warnings_55);
          }
          ml_backend__ml_tailcall__TypeCtorInfo_16_73 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
          {
            mercury__list__map2_4_p_0(ml_backend__ml_tailcall__TypeCtorInfo_16_73, ml_backend__ml_tailcall__TypeCtorInfo_16_73, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__V_56_56, ml_backend__ml_tailcall__MemberDefns0_40, &ml_backend__ml_tailcall__MemberDefns_44, &ml_backend__ml_tailcall__Warnings_67);
          }
          {
            ml_backend__ml_tailcall__MemberWarnings_43 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__Warnings_67);
          }
          {
            *ml_backend__ml_tailcall__Warnings_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__CtorWarnings_41, ml_backend__ml_tailcall__MemberWarnings_43);
          }
          {
            ml_backend__ml_tailcall__ClassDefn_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_45, 0) = ((MR_Box) (ml_backend__ml_tailcall__Kind_34));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_45, 1) = ((MR_Box) (ml_backend__ml_tailcall__Imports_35));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_45, 2) = ((MR_Box) (ml_backend__ml_tailcall__BaseClasses_36));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_45, 3) = ((MR_Box) (ml_backend__ml_tailcall__Implements_37));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_45, 4) = ((MR_Box) (ml_backend__ml_tailcall__TypeParams_38));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_45, 5) = ((MR_Box) (ml_backend__ml_tailcall__CtorDefns_42));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__ClassDefn_45, 6) = ((MR_Box) (ml_backend__ml_tailcall__MemberDefns_44));
          }
          ml_backend__ml_tailcall__DefnBody_49 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_tailcall__ClassDefn_45);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_tailcall__Defn_9 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_11));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_12));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Flags_13));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__DefnBody_49));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *ml_backend__ml_tailcall__Defn_9 = ml_backend__ml_tailcall__Defn0_8;
          *ml_backend__ml_tailcall__Warnings_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_tailcall__PredProcId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_14, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__Params_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_14, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__FuncBody0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_14, (MR_Integer) 2)));
          MR_Word ml_backend__ml_tailcall__Attributes_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_14, (MR_Integer) 3)));
          MR_Word ml_backend__ml_tailcall__EnvVarNames_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_14, (MR_Integer) 4)));
          MR_Word ml_backend__ml_tailcall__MaybeRequireTailrecInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody0_14, (MR_Integer) 5)));
          MR_Word ml_backend__ml_tailcall__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Params_16, (MR_Integer) 0)));
          MR_Word ml_backend__ml_tailcall__RetTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__Params_16, (MR_Integer) 1)));
          MR_Word ml_backend__ml_tailcall__Locals_23;
          MR_Word ml_backend__ml_tailcall__AtTail_24;
          MR_Word ml_backend__ml_tailcall__TCallInfo_27;
          MR_Word ml_backend__ml_tailcall__FuncBody_28;
          MR_Word ml_backend__ml_tailcall__DefnBody_29;
          MR_Word ml_backend__ml_tailcall__V_46_46;

          {
            ml_backend__ml_tailcall__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_46_46, 0) = ((MR_Box) (ml_backend__ml_tailcall__Args_21));
          }
          {
            ml_backend__ml_tailcall__Locals_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Locals_23, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_46_46));
            MR_hl_field(MR_mktag(1), ml_backend__ml_tailcall__Locals_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if ((ml_backend__ml_tailcall__RetTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              ml_backend__ml_tailcall__AtTail_24 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_tailcall_scalar_common_3[0]);
            }
          else
            ml_backend__ml_tailcall__AtTail_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          {
            ml_backend__ml_tailcall__TCallInfo_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_27, 0) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_6));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_27, 1) = ((MR_Box) (ml_backend__ml_tailcall__Name_11));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_27, 2) = ((MR_Box) (ml_backend__ml_tailcall__Locals_23));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_27, 3) = ((MR_Box) (ml_backend__ml_tailcall__WarnTailCalls_7));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__TCallInfo_27, 4) = ((MR_Box) (ml_backend__ml_tailcall__MaybeRequireTailrecInfo_20));
          }
          {
            ml_backend__ml_tailcall__mark_tailcalls_in_function_body_5_p_0(ml_backend__ml_tailcall__TCallInfo_27, ml_backend__ml_tailcall__AtTail_24, ml_backend__ml_tailcall__Warnings_10, ml_backend__ml_tailcall__FuncBody0_17, &ml_backend__ml_tailcall__FuncBody_28);
          }
          {
            ml_backend__ml_tailcall__DefnBody_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_29, 0) = ((MR_Box) (ml_backend__ml_tailcall__PredProcId_15));
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_29, 1) = ((MR_Box) (ml_backend__ml_tailcall__Params_16));
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_29, 2) = ((MR_Box) (ml_backend__ml_tailcall__FuncBody_28));
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_29, 3) = ((MR_Box) (ml_backend__ml_tailcall__Attributes_18));
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_29, 4) = ((MR_Box) (ml_backend__ml_tailcall__EnvVarNames_19));
            MR_hl_field(MR_mktag(2), ml_backend__ml_tailcall__DefnBody_29, 5) = ((MR_Box) (ml_backend__ml_tailcall__MaybeRequireTailrecInfo_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_tailcall__Defn_9 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__Name_11));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__Context_12));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__Flags_13));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__DefnBody_29));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defns_5_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
    MR_Word ml_backend__ml_tailcall__conv1_Defn_9;
    MR_Word ml_backend__ml_tailcall__conv0_Warnings_10;

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv1_Defn_9, &ml_backend__ml_tailcall__conv0_Warnings_10);
    }
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv1_Defn_9));
    *ml_backend__ml_tailcall__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_tailcall__conv0_Warnings_10));
  }
}

static void MR_CALL 
ml_backend__ml_tailcall__mark_tailcalls_in_defns_5_p_0(
  MR_Word ml_backend__ml_tailcall__ModuleName_6,
  MR_Word ml_backend__ml_tailcall__WarnTailCalls_7,
  MR_Word * ml_backend__ml_tailcall__HeadVar__3_3,
  MR_Word ml_backend__ml_tailcall__Defns0_9,
  MR_Word * ml_backend__ml_tailcall__Defns_10)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__TypeCtorInfo_16_16;
    MR_Word ml_backend__ml_tailcall__Warnings_8;
    MR_Word ml_backend__ml_tailcall__V_11_11;

    {
      ml_backend__ml_tailcall__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_11_11, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_11_11, 1) = ((MR_Box) (ml_backend__ml_tailcall__mark_tailcalls_in_defns_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_11_11, 3) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_6));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_11_11, 4) = ((MR_Box) (ml_backend__ml_tailcall__WarnTailCalls_7));
    }
    ml_backend__ml_tailcall__TypeCtorInfo_16_16 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    {
      mercury__list__map2_4_p_0(ml_backend__ml_tailcall__TypeCtorInfo_16_16, ml_backend__ml_tailcall__TypeCtorInfo_16_16, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__V_11_11, ml_backend__ml_tailcall__Defns0_9, ml_backend__ml_tailcall__Defns_10, &ml_backend__ml_tailcall__Warnings_8);
    }
    {
      *ml_backend__ml_tailcall__HeadVar__3_3 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__Warnings_8);
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
ml_backend__ml_tailcall__ml_mark_tailcalls_4_p_0_1(
  MR_Box ml_backend__ml_tailcall__closure_arg,
  MR_Box ml_backend__ml_tailcall__wrapper_arg_1,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_2,
  MR_Box * ml_backend__ml_tailcall__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_tailcall__closure = ml_backend__ml_tailcall__closure_arg;
    MR_Word ml_backend__ml_tailcall__conv1_Defn_9;
    MR_Word ml_backend__ml_tailcall__conv0_Warnings_10;

    {
      ml_backend__ml_tailcall__mark_tailcalls_in_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_tailcall__wrapper_arg_1), &ml_backend__ml_tailcall__conv1_Defn_9, &ml_backend__ml_tailcall__conv0_Warnings_10);
    }
    *ml_backend__ml_tailcall__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tailcall__conv1_Defn_9));
    *ml_backend__ml_tailcall__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_tailcall__conv0_Warnings_10));
  }
}

void MR_CALL 
ml_backend__ml_tailcall__ml_mark_tailcalls_4_p_0(
  MR_Word ml_backend__ml_tailcall__Globals_5,
  MR_Word * ml_backend__ml_tailcall__Specs_6,
  MR_Word ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13,
  MR_Word * ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_14)
{
  {
    MR_bool ml_backend__ml_tailcall__succeeded;
    MR_Word ml_backend__ml_tailcall__TypeCtorInfo_16_50;
    MR_Word ml_backend__ml_tailcall__Defns0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 4)));
    MR_Word ml_backend__ml_tailcall__ModuleName_9;
    MR_Word ml_backend__ml_tailcall__WarnTailCallsBool_10;
    MR_Word ml_backend__ml_tailcall__WarnTailCalls_11;
    MR_Word ml_backend__ml_tailcall__Defns_12;
    MR_Word ml_backend__ml_tailcall__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tailcall__Warnings_44;
    MR_Word ml_backend__ml_tailcall__V_45_45;
    MR_Word ml_backend__ml_tailcall__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tailcall__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tailcall__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 3)));
    MR_Word ml_backend__ml_tailcall__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 5)));
    MR_Word ml_backend__ml_tailcall__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 6)));
    MR_Word ml_backend__ml_tailcall__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 7)));
    MR_Word ml_backend__ml_tailcall__V_32_32;
    MR_Word ml_backend__ml_tailcall__V_33_33;
    MR_Word ml_backend__ml_tailcall__V_34_34;
    MR_Word ml_backend__ml_tailcall__V_35_35;
    MR_Word ml_backend__ml_tailcall__V_37_37;
    MR_Word ml_backend__ml_tailcall__V_38_38;
    MR_Word ml_backend__ml_tailcall__V_39_39;
    MR_Word ml_backend__ml_tailcall__V_36_36;

    {
      ml_backend__ml_tailcall__ModuleName_9 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_tailcall__V_18_18);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_tailcall__Globals_5, (MR_Integer) 26, &ml_backend__ml_tailcall__WarnTailCallsBool_10);
    }
    switch (ml_backend__ml_tailcall__WarnTailCallsBool_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_tailcall__WarnTailCalls_11 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_tailcall__WarnTailCalls_11 = (MR_Integer) 0;
        break;
    }
    {
      ml_backend__ml_tailcall__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_45_45, 0) = ((MR_Box) (&ml_backend__ml_tailcall_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_45_45, 1) = ((MR_Box) (ml_backend__ml_tailcall__ml_mark_tailcalls_4_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_45_45, 3) = ((MR_Box) (ml_backend__ml_tailcall__ModuleName_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__V_45_45, 4) = ((MR_Box) (ml_backend__ml_tailcall__WarnTailCalls_11));
    }
    ml_backend__ml_tailcall__TypeCtorInfo_16_50 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    {
      mercury__list__map2_4_p_0(ml_backend__ml_tailcall__TypeCtorInfo_16_50, ml_backend__ml_tailcall__TypeCtorInfo_16_50, (MR_Word) &ml_backend__ml_tailcall_scalar_common_1[0], ml_backend__ml_tailcall__V_45_45, ml_backend__ml_tailcall__Defns0_8, &ml_backend__ml_tailcall__Defns_12, &ml_backend__ml_tailcall__Warnings_44);
    }
    {
      *ml_backend__ml_tailcall__Specs_6 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ml_backend__ml_tailcall__Warnings_44);
    }
    ml_backend__ml_tailcall__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 0)));
    ml_backend__ml_tailcall__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 1)));
    ml_backend__ml_tailcall__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 2)));
    ml_backend__ml_tailcall__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 3)));
    ml_backend__ml_tailcall__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 4)));
    ml_backend__ml_tailcall__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 5)));
    ml_backend__ml_tailcall__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 6)));
    ml_backend__ml_tailcall__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_0_13, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_tailcall__STATE_VARIABLE_MLDS_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tailcall__V_32_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tailcall__V_33_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tailcall__V_34_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_tailcall__V_35_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_tailcall__Defns_12));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_tailcall__V_37_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_tailcall__V_38_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_tailcall__V_39_39));
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_tailcall. */
