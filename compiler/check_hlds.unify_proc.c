/*
** Automatically generated from `unify_proc.m'
** by the Mercury compiler,
** version rotd-2016-05-05
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


/* :- module check_hlds.unify_proc. */
/* :- implementation. */

/*
INIT mercury__check_hlds__unify_proc__init
ENDINIT
*/

#include "check_hlds.unify_proc.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.post_typecheck.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.equiv_type.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s {
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2;
  MR_bool check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded;
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22;
  jmp_buf check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__commit_0;
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__TypeInfo_43_43;
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVar_25;
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__V_42_42;
  MR_Box check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__conv0_ExistQTVar_25;
};

struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s {
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2;
  MR_bool check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded;
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30;
  jmp_buf check_hlds__unify_proc__compare_args_2_9_p_0_env_0__commit_0;
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__TypeInfo_77_77;
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVar_71;
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__V_76_76;
  MR_Box check_hlds__unify_proc__compare_args_2_9_p_0_env_0__conv0_ExistQTVar_71;
};

struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s {
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11;
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32;
  MR_bool check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded;
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_57_57;
  jmp_buf check_hlds__unify_proc__request_proc_9_p_0_env_0__commit_0;
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgMode_27;
  MR_Box check_hlds__unify_proc__request_proc_9_p_0_env_0__conv2_ArgMode_27;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0[2];

static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_proc_requests_0_0[2];

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_proc_requests_0_0[2];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_proc_requests_0_0;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_proc_requests_0_0[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_proc_requests_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_proc_requests_0[1];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_proc_requests_0[1];

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0[2];

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_id_0_0[2];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_id_0_0[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_id_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_id_0[1];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_id_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[4];

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1];

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____proc_requests_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____proc_requests_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____req_queue_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____req_queue_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_id_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_id_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1832__1_1_f_0(
  MR_Word check_hlds__unify_proc__LambdaHeadVar__1_21);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__487__1_2_p_0(
  MR_Word check_hlds__unify_proc__ErrorProcs_25,
  MR_Word check_hlds__unify_proc__HeadVar__2_35);

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__402__1_2_f_0(
  MR_Word check_hlds__unify_proc__Context_18,
  MR_Word check_hlds__unify_proc__LambdaHeadVar__1_37);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0(
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0(
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0(
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0(
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0(
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc__info_new_named_var_5_p_0(
  MR_Word check_hlds__unify_proc__Type_6,
  MR_String check_hlds__unify_proc__Name_7,
  MR_Word * check_hlds__unify_proc__Var_8,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_15);

static void MR_CALL 
check_hlds__unify_proc__info_new_var_4_p_0(
  MR_Word check_hlds__unify_proc__Type_5,
  MR_Word * check_hlds__unify_proc__Var_6,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_13);

static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
  MR_String check_hlds__unify_proc__Name_3);

static void MR_CALL 
check_hlds__unify_proc__quantify_clause_body_6_p_0(
  MR_Word check_hlds__unify_proc__HeadVars_7,
  MR_Word check_hlds__unify_proc__Goal0_8,
  MR_Word check_hlds__unify_proc__Context_9,
  MR_Word * check_hlds__unify_proc__Clause_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(
  MR_Word check_hlds__unify_proc__Context_9,
  MR_Word check_hlds__unify_proc__X_10,
  MR_Word check_hlds__unify_proc__Y_11,
  MR_Word check_hlds__unify_proc__MaybeCompareRes_12,
  MR_Word check_hlds__unify_proc__Goal0_13,
  MR_Word * check_hlds__unify_proc__Goal_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_38,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_39);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_1(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_3(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_4(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_2(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_5(
  void * check_hlds__unify_proc__env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
  MR_Word * check_hlds__unify_proc__HeadVar__5_5,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7);

static MR_Box MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0(
  MR_Word check_hlds__unify_proc__CtorArgs_6,
  MR_Word check_hlds__unify_proc__ExistQTVars_7,
  MR_Word * check_hlds__unify_proc__Vars_8,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word * check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_3,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_4);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_String check_hlds__unify_proc__BaseName_2,
  MR_Integer check_hlds__unify_proc__Num_3,
  MR_Word * check_hlds__unify_proc__HeadVar__4_4,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_5,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_6);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(
  MR_Word check_hlds__unify_proc__Type_7,
  MR_String check_hlds__unify_proc__BaseName_8,
  MR_Integer check_hlds__unify_proc__Num_9,
  MR_Word * check_hlds__unify_proc__Var_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15);

static void MR_CALL 
check_hlds__unify_proc__build_specific_call_9_p_0(
  MR_Word check_hlds__unify_proc__Type_10,
  MR_Word check_hlds__unify_proc__SpecialPredId_11,
  MR_Word check_hlds__unify_proc__ArgVars_12,
  MR_Word check_hlds__unify_proc__InstmapDelta_13,
  MR_Word check_hlds__unify_proc__Detism_14,
  MR_Word check_hlds__unify_proc__Context_15,
  MR_Word * check_hlds__unify_proc__Goal_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_26,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_27);

static void MR_CALL 
check_hlds__unify_proc__build_call_6_p_0(
  MR_String check_hlds__unify_proc__Name_7,
  MR_Word check_hlds__unify_proc__ArgVars_8,
  MR_Word check_hlds__unify_proc__Context_9,
  MR_Word * check_hlds__unify_proc__Goal_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18);

static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_1(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_3(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_4(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_2(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_5(
  void * check_hlds__unify_proc__env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
  MR_Word check_hlds__unify_proc__R_5,
  MR_Word check_hlds__unify_proc__Context_6,
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9);

static void MR_CALL 
check_hlds__unify_proc__compare_args_9_p_0(
  MR_Word check_hlds__unify_proc__ArgTypes_10,
  MR_Word check_hlds__unify_proc__ExistQTVars_11,
  MR_Word check_hlds__unify_proc__Xs_12,
  MR_Word check_hlds__unify_proc__Ys_13,
  MR_Word check_hlds__unify_proc__R_14,
  MR_Word check_hlds__unify_proc__Context_15,
  MR_Word * check_hlds__unify_proc__Goal_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_19,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_20);

static void MR_CALL 
check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_12,
  MR_Word check_hlds__unify_proc__Ctor1_13,
  MR_Word check_hlds__unify_proc__Ctor2_14,
  MR_String check_hlds__unify_proc__CompareOp_15,
  MR_Word check_hlds__unify_proc__R_16,
  MR_Word check_hlds__unify_proc__X_17,
  MR_Word check_hlds__unify_proc__Y_18,
  MR_Word check_hlds__unify_proc__Context_19,
  MR_Word * check_hlds__unify_proc__Case_20,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_48,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_49);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_11,
  MR_Word check_hlds__unify_proc__Ctor_12,
  MR_Word check_hlds__unify_proc__R_13,
  MR_Word check_hlds__unify_proc__X_14,
  MR_Word check_hlds__unify_proc__Y_15,
  MR_Word check_hlds__unify_proc__Context_16,
  MR_Word check_hlds__unify_proc__Kind_17,
  MR_Word * check_hlds__unify_proc__Case_18,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_cases_9_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9);

static void MR_CALL 
check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(
  MR_Word check_hlds__unify_proc__Type_10,
  MR_Word check_hlds__unify_proc__Ctors_11,
  MR_Word check_hlds__unify_proc__Res_12,
  MR_Word check_hlds__unify_proc__X_13,
  MR_Word check_hlds__unify_proc__Y_14,
  MR_Word check_hlds__unify_proc__Context_15,
  MR_Word * check_hlds__unify_proc__Goal_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41);

static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
  MR_String check_hlds__unify_proc__HeadVar__4_4,
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
  MR_Word check_hlds__unify_proc__HeadVar__8_8,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_11,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_12);

static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_9,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_10,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_11);

static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box * check_hlds__unify_proc__wrapper_arg_3);

static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(
  MR_Word check_hlds__unify_proc__Type_10,
  MR_Word check_hlds__unify_proc__Ctors0_11,
  MR_Word check_hlds__unify_proc__Res_12,
  MR_Word check_hlds__unify_proc__X_13,
  MR_Word check_hlds__unify_proc__Y_14,
  MR_Word check_hlds__unify_proc__Context_15,
  MR_Word * check_hlds__unify_proc__Clause_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_30,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_31);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_11,
  MR_Word check_hlds__unify_proc__X_12,
  MR_Word check_hlds__unify_proc__Index_13,
  MR_Word check_hlds__unify_proc__Context_14,
  MR_Word check_hlds__unify_proc__Ctor_15,
  MR_Word * check_hlds__unify_proc__Goal_16,
  MR_Integer check_hlds__unify_proc__STATE_VARIABLE_N_0_32,
  MR_Integer * check_hlds__unify_proc__STATE_VARIABLE_N_33,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_34,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_35);

static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
  MR_Box * check_hlds__unify_proc__wrapper_arg_4,
  MR_Box check_hlds__unify_proc__wrapper_arg_5,
  MR_Box * check_hlds__unify_proc__wrapper_arg_6);

static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_9,
  MR_Word check_hlds__unify_proc__Ctors_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Index_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_21,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_22);

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Y_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word check_hlds__unify_proc__CanCompareAsInt_14,
  MR_Word check_hlds__unify_proc__Ctor_15,
  MR_Word * check_hlds__unify_proc__Goal_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_43,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_44);

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
  MR_Box * check_hlds__unify_proc__wrapper_arg_4);

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_9,
  MR_Word check_hlds__unify_proc__Ctors_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Y_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__EqvType_9,
  MR_Word check_hlds__unify_proc__Res_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Y_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_24,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_25);

static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__Res_2,
  MR_Word check_hlds__unify_proc__X_3,
  MR_Word check_hlds__unify_proc__Y_4,
  MR_Word check_hlds__unify_proc__Context_5,
  MR_Word * check_hlds__unify_proc__Clause_6,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(
  MR_Word check_hlds__unify_proc__Res_8,
  MR_Word check_hlds__unify_proc__X_9,
  MR_Word check_hlds__unify_proc__Y_10,
  MR_Word check_hlds__unify_proc__Context_11,
  MR_Word * check_hlds__unify_proc__Clause_12,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(
  MR_Word check_hlds__unify_proc__X_7,
  MR_Word check_hlds__unify_proc__Y_8,
  MR_Word check_hlds__unify_proc__Context_9,
  MR_Word * check_hlds__unify_proc__Clause_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15);

static void MR_CALL 
check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(
  MR_Word check_hlds__unify_proc__Res_8,
  MR_Word check_hlds__unify_proc__X_9,
  MR_Word check_hlds__unify_proc__Y_10,
  MR_Word check_hlds__unify_proc__Context_11,
  MR_Word * check_hlds__unify_proc__Clause_12,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_15,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_16);

static void MR_CALL 
check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(
  MR_Word check_hlds__unify_proc__Res_8,
  MR_Word check_hlds__unify_proc__X_9,
  MR_Word check_hlds__unify_proc__Y_10,
  MR_Word check_hlds__unify_proc__Context_11,
  MR_Word * check_hlds__unify_proc__Clause_12,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__unify_proc__compare_ctors_lexically_3_p_0(
  MR_Word check_hlds__unify_proc__A_4,
  MR_Word check_hlds__unify_proc__B_5,
  MR_Word * check_hlds__unify_proc__Res_6);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_9_p_0(
  MR_Word check_hlds__unify_proc__Type_10,
  MR_Word check_hlds__unify_proc__TypeBody_11,
  MR_Word check_hlds__unify_proc__Res_12,
  MR_Word check_hlds__unify_proc__X_13,
  MR_Word check_hlds__unify_proc__Y_14,
  MR_Word check_hlds__unify_proc__Context_15,
  MR_Word * check_hlds__unify_proc__Clause_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42);

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__Type_9,
  MR_Word check_hlds__unify_proc__TypeBody_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Index_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_37,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_38);

static void MR_CALL 
check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(
  MR_Word check_hlds__unify_proc__EqvType_8,
  MR_Word check_hlds__unify_proc__X_9,
  MR_Word check_hlds__unify_proc__Y_10,
  MR_Word check_hlds__unify_proc__Context_11,
  MR_Word * check_hlds__unify_proc__Clause_12,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(
  MR_Word check_hlds__unify_proc__UserEqCompare_1,
  MR_Word check_hlds__unify_proc__X_2,
  MR_Word check_hlds__unify_proc__Y_3,
  MR_Word check_hlds__unify_proc__Context_4,
  MR_Word * check_hlds__unify_proc__Clause_5,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__unify_proc__generate_builtin_unify_7_p_0(
  MR_Word check_hlds__unify_proc__CtorCat_8,
  MR_Word check_hlds__unify_proc__X_9,
  MR_Word check_hlds__unify_proc__Y_10,
  MR_Word check_hlds__unify_proc__Context_11,
  MR_Word * check_hlds__unify_proc__Clause_12,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__Type_9,
  MR_Word check_hlds__unify_proc__TypeBody_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Y_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41);

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg);

static void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0(
  MR_Word check_hlds__unify_proc__SpecialId_12,
  MR_Word check_hlds__unify_proc__Item_13,
  MR_Word check_hlds__unify_proc__TVarSet_14,
  MR_Word check_hlds__unify_proc__Type_15,
  MR_Word check_hlds__unify_proc__TypeCtor_16,
  MR_Word check_hlds__unify_proc__TypeBody_17,
  MR_Word check_hlds__unify_proc__Context_18,
  MR_Word check_hlds__unify_proc__TypeStatus_19,
  MR_Word * check_hlds__unify_proc__PredId_20,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_28);

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2(
  MR_Box check_hlds__unify_proc__closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2(
  MR_Box check_hlds__unify_proc__closure_arg);

static MR_Box MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_1(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_3(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_2(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_4(
  void * check_hlds__unify_proc__env_ptr_arg);


static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[5][2];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_3[3][1];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[2][6];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[2][5];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][12];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_9[1][13];


/* sealed */ struct check_hlds__unify_proc__vector_common_type_7_0_s {
  const MR_String check_hlds__unify_proc__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__unify_proc__vector_common_type_7_0_s check_hlds__unify_proc_vector_common_7[8];



static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__queue__queue__type_ctor_info_queue_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_du_index_case_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[1])),
    ((MR_Box) (check_hlds__unify_proc__make_fresh_vars_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_body_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_9[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0))
  },
};


static /* final */ const struct check_hlds__unify_proc__vector_common_type_7_0_s check_hlds__unify_proc_vector_common_7[8] = {
  /* row 0 */   {     (MR_String) "builtin_unify_int" },
  /* row 1 */   {     (MR_String) "builtin_unify_float" },
  /* row 2 */   {     (MR_String) "builtin_unify_character" },
  /* row 3 */   {     (MR_String) "builtin_unify_string" },
  /* row 4 */   {     (MR_String) "builtin_compare_int" },
  /* row 5 */   {     (MR_String) "builtin_compare_float" },
  /* row 6 */   {     (MR_String) "builtin_compare_character" },
  /* row 7 */   {     (MR_String) "builtin_compare_string" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0 = {
  (MR_String) "linear",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1 = {
  (MR_String) "quad",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_linear_or_quad_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "linear_or_quad",
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_proc_requests_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_proc_requests_0_0[2] = {
  (MR_String) "unify_req_map",
  (MR_String) "req_queue"
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_proc_requests_0_0 = {
  (MR_String) "proc_requests",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_proc_requests_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_names_proc_requests_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_proc_requests_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_proc_requests_0_0
};

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_proc_requests_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_proc_requests_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_proc_requests_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_proc_requests_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_proc_requests_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_proc_requests_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____proc_requests_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____proc_requests_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "proc_requests",
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_proc_requests_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_proc_requests_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_proc_requests_0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_req_queue_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__unify_proc____Unify____req_queue_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____req_queue_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "req_queue",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0 = {
  (MR_String) "declaration",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1 = {
  (MR_String) "clauses",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_pred_item_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_pred_item_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_pred_item_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_pred_item",
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_id_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0 = {
  (MR_String) "unify_proc_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_id_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_id_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0
};

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_id_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_id_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_id_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_proc_id_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_proc_id_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_proc_id",
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_id_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_id_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[4] = {
  (MR_String) "upi_varset",
  (MR_String) "upi_vartypes",
  (MR_String) "upi_rtti_varmaps",
  (MR_String) "upi_module_info"
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0 = {
  (MR_String) "unify_proc_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_proc_info",
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_req_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_req_map_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_req_map_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_req_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    {
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____linear_or_quad_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
{
  {
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

    {
      check_hlds__unify_proc____Compare____linear_or_quad_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____proc_requests_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    {
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____proc_requests_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____proc_requests_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
{
  {
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

    {
      check_hlds__unify_proc____Compare____proc_requests_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____req_queue_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    {
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____req_queue_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____req_queue_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
{
  {
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

    {
      check_hlds__unify_proc____Compare____req_queue_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    {
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_pred_item_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
{
  {
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

    {
      check_hlds__unify_proc____Compare____unify_pred_item_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_id_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    {
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_proc_id_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_id_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
{
  {
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

    {
      check_hlds__unify_proc____Compare____unify_proc_id_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    {
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_proc_info_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
{
  {
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

    {
      check_hlds__unify_proc____Compare____unify_proc_info_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    {
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_req_map_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
{
  {
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

    {
      check_hlds__unify_proc____Compare____unify_req_map_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1832__1_1_f_0(
  MR_Word check_hlds__unify_proc__LambdaHeadVar__1_21)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__LambdaHeadVar__2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__1_21, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__1_21, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__1_21, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__1_21, (MR_Integer) 3)));

    return check_hlds__unify_proc__LambdaHeadVar__2_22;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__487__1_2_p_0(
  MR_Word check_hlds__unify_proc__ErrorProcs_25,
  MR_Word check_hlds__unify_proc__HeadVar__2_35)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    {
      check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[2], ((MR_Box) (check_hlds__unify_proc__ErrorProcs_25)), ((MR_Box) (check_hlds__unify_proc__HeadVar__2_35)));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__402__1_2_f_0(
  MR_Word check_hlds__unify_proc__Context_18,
  MR_Word check_hlds__unify_proc__LambdaHeadVar__1_37)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__LambdaHeadVar__2_38;

    {
      check_hlds__unify_proc__LambdaHeadVar__2_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__2_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__2_38, 1) = ((MR_Box) (check_hlds__unify_proc__LambdaHeadVar__1_37));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__2_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__2_38, 3) = ((MR_Box) (check_hlds__unify_proc__Context_18));
    }
    return check_hlds__unify_proc__LambdaHeadVar__2_38;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0(
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__Cast_HeadVar1_4 = check_hlds__unify_proc__HeadVar__2_2;
    MR_Word check_hlds__unify_proc__Cast_HeadVar2_5 = check_hlds__unify_proc__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], check_hlds__unify_proc__HeadVar__1_1, ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__Cast_HeadVar1_3 = check_hlds__unify_proc__HeadVar__1_1;
    MR_Word check_hlds__unify_proc__Cast_HeadVar2_4 = check_hlds__unify_proc__HeadVar__2_2;

    {
      check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar2_4)));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0(
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Integer check_hlds__unify_proc__CastX_15 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
    MR_Integer check_hlds__unify_proc__CastY_16 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_15 == check_hlds__unify_proc__CastY_16);
    if (check_hlds__unify_proc__succeeded)
      *check_hlds__unify_proc__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__unify_proc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__unify_proc__V_12_12;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[4], &check_hlds__unify_proc__V_12_12, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_8_8)));
        }
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_12_12 == (MR_Integer) 0);
        check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
        if (check_hlds__unify_proc__succeeded)
          *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_12_12;
        else
          {
            MR_Word check_hlds__unify_proc__V_13_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[1], &check_hlds__unify_proc__V_13_13, ((MR_Box) (check_hlds__unify_proc__V_5_5)), ((MR_Box) (check_hlds__unify_proc__V_9_9)));
            }
            check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_13_13 == (MR_Integer) 0);
            check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
            if (check_hlds__unify_proc__succeeded)
              *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_13_13;
            else
              {
                MR_Word check_hlds__unify_proc__V_14_14;

                {
                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&check_hlds__unify_proc__V_14_14, check_hlds__unify_proc__V_6_6, check_hlds__unify_proc__V_10_10);
                }
                check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_14_14 == (MR_Integer) 0);
                check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
                if (check_hlds__unify_proc__succeeded)
                  *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_14_14;
                else
                  {
                    hlds__hlds_module____Compare____module_info_0_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__V_7_7, check_hlds__unify_proc__V_11_11);
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Integer check_hlds__unify_proc__CastX_11 = (MR_Integer) check_hlds__unify_proc__HeadVar__1_1;
    MR_Integer check_hlds__unify_proc__CastY_12 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;

    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_11 == check_hlds__unify_proc__CastY_12);
    if (check_hlds__unify_proc__succeeded)
      check_hlds__unify_proc__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__unify_proc__TypeInfo_14_14;
        MR_Word check_hlds__unify_proc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 3)));

        {
          check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[4], ((MR_Box) (check_hlds__unify_proc__V_3_3)), ((MR_Box) (check_hlds__unify_proc__V_7_7)));
        }
        if (check_hlds__unify_proc__succeeded)
          {
            check_hlds__unify_proc__TypeInfo_14_14 = (MR_Word) &check_hlds__unify_proc_scalar_common_2[1];
            {
              check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0(check_hlds__unify_proc__TypeInfo_14_14, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_8_8)));
            }
            if (check_hlds__unify_proc__succeeded)
              {
                {
                  check_hlds__unify_proc__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__unify_proc__V_5_5, check_hlds__unify_proc__V_9_9);
                }
                if (check_hlds__unify_proc__succeeded)
                  {
                    check_hlds__unify_proc__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__unify_proc__V_6_6, check_hlds__unify_proc__V_10_10);
                  }
              }
          }
      }
    return check_hlds__unify_proc__succeeded;
  }
}

void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_id_0_0(
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Integer check_hlds__unify_proc__CastX_9 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
    MR_Integer check_hlds__unify_proc__CastY_10 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_9 == check_hlds__unify_proc__CastY_10);
    if (check_hlds__unify_proc__succeeded)
      *check_hlds__unify_proc__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__V_8_8;

        {
          parse_tree__prog_data____Compare____type_ctor_0_0(&check_hlds__unify_proc__V_8_8, check_hlds__unify_proc__V_4_4, check_hlds__unify_proc__V_6_6);
        }
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_8_8 == (MR_Integer) 0);
        check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
        if (check_hlds__unify_proc__succeeded)
          *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_8_8;
        else
          {
            hlds__hlds_goal____Compare____uni_mode_0_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__V_5_5, check_hlds__unify_proc__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_id_0_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Integer check_hlds__unify_proc__CastX_7 = (MR_Integer) check_hlds__unify_proc__HeadVar__1_1;
    MR_Integer check_hlds__unify_proc__CastY_8 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;

    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_7 == check_hlds__unify_proc__CastY_8);
    if (check_hlds__unify_proc__succeeded)
      check_hlds__unify_proc__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__unify_proc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__unify_proc__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__unify_proc__V_3_3, check_hlds__unify_proc__V_5_5);
        }
        if (check_hlds__unify_proc__succeeded)
          {
            check_hlds__unify_proc__succeeded = hlds__hlds_goal____Unify____uni_mode_0_0(check_hlds__unify_proc__V_4_4, check_hlds__unify_proc__V_6_6);
          }
      }
    return check_hlds__unify_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0(
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Integer check_hlds__unify_proc__Cast_HeadVar1_4 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
    MR_Integer check_hlds__unify_proc__Cast_HeadVar2_5 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Cast_HeadVar1_4, check_hlds__unify_proc__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0(
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__HeadVar__2_1 == check_hlds__unify_proc__HeadVar__2_2);

    return check_hlds__unify_proc__succeeded;
  }
}

void MR_CALL 
check_hlds__unify_proc____Compare____req_queue_0_0(
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__Cast_HeadVar1_4 = check_hlds__unify_proc__HeadVar__2_2;
    MR_Word check_hlds__unify_proc__Cast_HeadVar2_5 = check_hlds__unify_proc__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[3], check_hlds__unify_proc__HeadVar__1_1, ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__unify_proc____Unify____req_queue_0_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__Cast_HeadVar1_3 = check_hlds__unify_proc__HeadVar__1_1;
    MR_Word check_hlds__unify_proc__Cast_HeadVar2_4 = check_hlds__unify_proc__HeadVar__2_2;

    {
      check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[3], ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar2_4)));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

void MR_CALL 
check_hlds__unify_proc____Compare____proc_requests_0_0(
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Integer check_hlds__unify_proc__CastX_9 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
    MR_Integer check_hlds__unify_proc__CastY_10 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_9 == check_hlds__unify_proc__CastY_10);
    if (check_hlds__unify_proc__succeeded)
      *check_hlds__unify_proc__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__V_8_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], &check_hlds__unify_proc__V_8_8, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_6_6)));
        }
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_8_8 == (MR_Integer) 0);
        check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
        if (check_hlds__unify_proc__succeeded)
          *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[3], check_hlds__unify_proc__HeadVar__1_1, ((MR_Box) (check_hlds__unify_proc__V_5_5)), ((MR_Box) (check_hlds__unify_proc__V_7_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__unify_proc____Unify____proc_requests_0_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Integer check_hlds__unify_proc__CastX_7 = (MR_Integer) check_hlds__unify_proc__HeadVar__1_1;
    MR_Integer check_hlds__unify_proc__CastY_8 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;

    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_7 == check_hlds__unify_proc__CastY_8);
    if (check_hlds__unify_proc__succeeded)
      check_hlds__unify_proc__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__unify_proc__TypeInfo_10_10;
        MR_Word check_hlds__unify_proc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], ((MR_Box) (check_hlds__unify_proc__V_3_3)), ((MR_Box) (check_hlds__unify_proc__V_5_5)));
        }
        if (check_hlds__unify_proc__succeeded)
          {
            check_hlds__unify_proc__TypeInfo_10_10 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[3];
            {
              check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0(check_hlds__unify_proc__TypeInfo_10_10, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_6_6)));
            }
          }
      }
    return check_hlds__unify_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Integer check_hlds__unify_proc__Cast_HeadVar1_4 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
    MR_Integer check_hlds__unify_proc__Cast_HeadVar2_5 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Cast_HeadVar1_4, check_hlds__unify_proc__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0(
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__HeadVar__2_1 == check_hlds__unify_proc__HeadVar__2_2);

    return check_hlds__unify_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc__info_new_named_var_5_p_0(
  MR_Word check_hlds__unify_proc__Type_6,
  MR_String check_hlds__unify_proc__Name_7,
  MR_Word * check_hlds__unify_proc__Var_8,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_15)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__VarSet_12;
    MR_Word check_hlds__unify_proc__VarTypes_13;
    MR_Word check_hlds__unify_proc__V_26_26;
    MR_Word check_hlds__unify_proc__V_27_27;
    MR_Word check_hlds__unify_proc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__V_24_24;
    MR_Word check_hlds__unify_proc__V_25_25;

    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_7, check_hlds__unify_proc__Var_8, check_hlds__unify_proc__VarSet0_10, &check_hlds__unify_proc__VarSet_12);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*check_hlds__unify_proc__Var_8, check_hlds__unify_proc__Type_6, check_hlds__unify_proc__VarTypes0_11, &check_hlds__unify_proc__VarTypes_13);
    }
    check_hlds__unify_proc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 0)));
    check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 1)));
    check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 2)));
    check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__STATE_VARIABLE_UPI_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_26_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_27_27));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__info_new_var_4_p_0(
  MR_Word check_hlds__unify_proc__Type_5,
  MR_Word * check_hlds__unify_proc__Var_6,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_13)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__VarTypes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__VarSet_10;
    MR_Word check_hlds__unify_proc__VarTypes_11;
    MR_Word check_hlds__unify_proc__V_24_24;
    MR_Word check_hlds__unify_proc__V_25_25;
    MR_Word check_hlds__unify_proc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__V_22_22;
    MR_Word check_hlds__unify_proc__V_23_23;

    {
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Var_6, check_hlds__unify_proc__VarSet0_8, &check_hlds__unify_proc__VarSet_10);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*check_hlds__unify_proc__Var_6, check_hlds__unify_proc__Type_5, check_hlds__unify_proc__VarTypes0_9, &check_hlds__unify_proc__VarTypes_11);
    }
    check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 0)));
    check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 1)));
    check_hlds__unify_proc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 2)));
    check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__STATE_VARIABLE_UPI_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_24_24));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_25_25));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
  MR_String check_hlds__unify_proc__Name_3)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__HeadVar__2_2;
    MR_Word check_hlds__unify_proc__SymName_4;
    MR_Word check_hlds__unify_proc__V_6_6;
    MR_Word check_hlds__unify_proc__V_7_7;
    MR_Word check_hlds__unify_proc__Builtin_9;
    MR_Word check_hlds__unify_proc__V_10_10;

    {
      check_hlds__unify_proc__Builtin_9 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__unify_proc__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_10_10, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_9));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_10_10, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      check_hlds__unify_proc__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_6_6, 0) = ((MR_Box) (check_hlds__unify_proc__V_10_10));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_6_6, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__unify_proc__V_7_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__unify_proc__SymName_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_4, 0) = ((MR_Box) (check_hlds__unify_proc__V_7_7));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_4, 1) = ((MR_Box) (check_hlds__unify_proc__Name_3));
    }
    {
      check_hlds__unify_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_4));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 3) = ((MR_Box) (check_hlds__unify_proc__V_6_6));
    }
    return check_hlds__unify_proc__HeadVar__2_2;
  }
}

static void MR_CALL 
check_hlds__unify_proc__quantify_clause_body_6_p_0(
  MR_Word check_hlds__unify_proc__HeadVars_7,
  MR_Word check_hlds__unify_proc__Goal0_8,
  MR_Word check_hlds__unify_proc__Context_9,
  MR_Word * check_hlds__unify_proc__Clause_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__Varset0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__Types0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__RttiVarMaps0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__Goal_16;
    MR_Word check_hlds__unify_proc__Varset_17;
    MR_Word check_hlds__unify_proc__Types_18;
    MR_Word check_hlds__unify_proc__RttiVarMaps_19;
    MR_Word check_hlds__unify_proc__V_46_46;
    MR_Word check_hlds__unify_proc__V_49_49;
    MR_Word check_hlds__unify_proc__V_52_52;
    MR_Word check_hlds__unify_proc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc___Warnings_15;
    MR_Word check_hlds__unify_proc__V_43_43;
    MR_Word check_hlds__unify_proc__V_44_44;
    MR_Word check_hlds__unify_proc__V_45_45;

    {
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, check_hlds__unify_proc__HeadVars_7, &check_hlds__unify_proc___Warnings_15, check_hlds__unify_proc__Goal0_8, &check_hlds__unify_proc__Goal_16, check_hlds__unify_proc__Varset0_12, &check_hlds__unify_proc__Varset_17, check_hlds__unify_proc__Types0_13, &check_hlds__unify_proc__Types_18, check_hlds__unify_proc__RttiVarMaps0_14, &check_hlds__unify_proc__RttiVarMaps_19);
    }
    check_hlds__unify_proc__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
    check_hlds__unify_proc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
    check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
    check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
    check_hlds__unify_proc__V_49_49 = check_hlds__unify_proc__Varset_17;
    check_hlds__unify_proc__V_52_52 = check_hlds__unify_proc__V_46_46;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__STATE_VARIABLE_Info_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_49_49));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__Types_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_52_52));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__Clause_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__Goal_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Context_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(
  MR_Word check_hlds__unify_proc__Context_9,
  MR_Word check_hlds__unify_proc__X_10,
  MR_Word check_hlds__unify_proc__Y_11,
  MR_Word check_hlds__unify_proc__MaybeCompareRes_12,
  MR_Word check_hlds__unify_proc__Goal0_13,
  MR_Word * check_hlds__unify_proc__Goal_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_38,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_39)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ShouldPretestEq_16;
    MR_Word check_hlds__unify_proc__ModuleInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__Globals_64;
    MR_Word check_hlds__unify_proc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_63, &check_hlds__unify_proc__Globals_64);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_64, (MR_Integer) 312, &check_hlds__unify_proc__ShouldPretestEq_16);
    }
    switch (check_hlds__unify_proc__ShouldPretestEq_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *check_hlds__unify_proc__Goal_14 = check_hlds__unify_proc__Goal0_13;
          *check_hlds__unify_proc__STATE_VARIABLE_Info_39 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_38;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unify_proc__CastType_17;
          MR_Word check_hlds__unify_proc__CastX_18;
          MR_Word check_hlds__unify_proc__CastY_19;
          MR_Word check_hlds__unify_proc__CastXGoal0_20;
          MR_Word check_hlds__unify_proc__CastYGoal0_21;
          MR_Word check_hlds__unify_proc__CastXGoal_22;
          MR_Word check_hlds__unify_proc__CastYGoal_23;
          MR_Word check_hlds__unify_proc__EqualityGoal0_24;
          MR_Word check_hlds__unify_proc__EqualityGoal_25;
          MR_Word check_hlds__unify_proc__CondGoalExpr_26;
          MR_Word check_hlds__unify_proc__GoalInfo0_27;
          MR_Word check_hlds__unify_proc__ContextGoalInfo_28;
          MR_Word check_hlds__unify_proc__CondGoal_29;
          MR_Word check_hlds__unify_proc__EqualGoal_30;
          MR_Word check_hlds__unify_proc__GoalInfo_31;
          MR_Word check_hlds__unify_proc__GoalExpr_36;
          MR_Word check_hlds__unify_proc__FeaturedGoalInfo_37;
          MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_41_41;
          MR_Word check_hlds__unify_proc__V_48_48;
          MR_Word check_hlds__unify_proc__V_53_53;
          MR_Word check_hlds__unify_proc__V_54_54;
          MR_Word check_hlds__unify_proc__V_55_55;
          MR_Word check_hlds__unify_proc__ModuleInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
          MR_Word check_hlds__unify_proc__Globals_72;
          MR_Word check_hlds__unify_proc__CastPointers_73;
          MR_Word check_hlds__unify_proc__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
          MR_Word check_hlds__unify_proc__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
          MR_Word check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));

          {
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_71, &check_hlds__unify_proc__Globals_72);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_72, (MR_Integer) 268, &check_hlds__unify_proc__CastPointers_73);
          }
          switch (check_hlds__unify_proc__CastPointers_73) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                check_hlds__unify_proc__CastType_17 = parse_tree__builtin_lib_types__int_type_0_f_0();
              }
              break;
            case (MR_Integer) 1:
              {
                check_hlds__unify_proc__CastType_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
              }
              break;
          }
          {
            check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__CastType_17, (MR_String) "CastX", &check_hlds__unify_proc__CastX_18, check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, &check_hlds__unify_proc__STATE_VARIABLE_Info_41_41);
          }
          {
            check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__CastType_17, (MR_String) "CastY", &check_hlds__unify_proc__CastY_19, check_hlds__unify_proc__STATE_VARIABLE_Info_41_41, check_hlds__unify_proc__STATE_VARIABLE_Info_39);
          }
          {
            hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__X_10, check_hlds__unify_proc__CastX_18, check_hlds__unify_proc__Context_9, &check_hlds__unify_proc__CastXGoal0_20);
          }
          {
            hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__Y_11, check_hlds__unify_proc__CastY_19, check_hlds__unify_proc__Context_9, &check_hlds__unify_proc__CastYGoal0_21);
          }
          {
            hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastXGoal0_20, &check_hlds__unify_proc__CastXGoal_22);
          }
          {
            hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastYGoal0_21, &check_hlds__unify_proc__CastYGoal_23);
          }
          {
            check_hlds__unify_proc__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_48_48, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_19));
          }
          {
            hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastX_18, check_hlds__unify_proc__V_48_48, check_hlds__unify_proc__Context_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__EqualityGoal0_24);
          }
          {
            hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 19, check_hlds__unify_proc__EqualityGoal0_24, &check_hlds__unify_proc__EqualityGoal_25);
          }
          {
            check_hlds__unify_proc__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_55_55, 0) = ((MR_Box) (check_hlds__unify_proc__EqualityGoal_25));
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__unify_proc__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_23));
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 1) = ((MR_Box) (check_hlds__unify_proc__V_55_55));
          }
          {
            check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_22));
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__V_54_54));
          }
          {
            check_hlds__unify_proc__CondGoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 2) = ((MR_Box) (check_hlds__unify_proc__V_53_53));
          }
          {
            hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_27);
          }
          {
            hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_9, check_hlds__unify_proc__GoalInfo0_27, &check_hlds__unify_proc__ContextGoalInfo_28);
          }
          {
            check_hlds__unify_proc__CondGoal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CondGoal_29, 0) = ((MR_Box) (check_hlds__unify_proc__CondGoalExpr_26));
            MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CondGoal_29, 1) = ((MR_Box) (check_hlds__unify_proc__ContextGoalInfo_28));
          }
          if ((check_hlds__unify_proc__MaybeCompareRes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                check_hlds__unify_proc__EqualGoal_30 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_9);
              }
              check_hlds__unify_proc__GoalInfo_31 = check_hlds__unify_proc__ContextGoalInfo_28;
            }
          else
            {
              MR_Word check_hlds__unify_proc__Res_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeCompareRes_12, (MR_Integer) 0)));
              MR_Word check_hlds__unify_proc__EqualGoalInfo_34;
              MR_Word check_hlds__unify_proc__InstmapDelta_35;
              MR_Word check_hlds__unify_proc__V_57_57;
              MR_Word check_hlds__unify_proc__SymName_79;
              MR_Word check_hlds__unify_proc__V_81_81;
              MR_Word check_hlds__unify_proc__V_82_82;
              MR_Word check_hlds__unify_proc__Builtin_84;
              MR_Word check_hlds__unify_proc__V_85_85;
              MR_Word check_hlds__unify_proc__V_33_33;

              {
                check_hlds__unify_proc__Builtin_84 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
              {
                check_hlds__unify_proc__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_85_85, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_84));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_85_85, 1) = ((MR_Box) ((MR_String) "comparison_result"));
              }
              {
                check_hlds__unify_proc__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_81_81, 0) = ((MR_Box) (check_hlds__unify_proc__V_85_85));
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_81_81, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                check_hlds__unify_proc__V_82_82 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
              {
                check_hlds__unify_proc__SymName_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_79, 0) = ((MR_Box) (check_hlds__unify_proc__V_82_82));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_79, 1) = ((MR_Box) ((MR_String) "="));
              }
              {
                check_hlds__unify_proc__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_79));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 3) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
              }
              {
                hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_32, check_hlds__unify_proc__V_57_57, &check_hlds__unify_proc__EqualGoal_30);
              }
              check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__EqualGoal_30, (MR_Integer) 0)));
              check_hlds__unify_proc__EqualGoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__EqualGoal_30, (MR_Integer) 1)));
              {
                check_hlds__unify_proc__InstmapDelta_35 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__unify_proc__EqualGoalInfo_34);
              }
              {
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__unify_proc__InstmapDelta_35, check_hlds__unify_proc__ContextGoalInfo_28, &check_hlds__unify_proc__GoalInfo_31);
              }
            }
          {
            check_hlds__unify_proc__GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 2) = ((MR_Box) (check_hlds__unify_proc__CondGoal_29));
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 3) = ((MR_Box) (check_hlds__unify_proc__EqualGoal_30));
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 4) = ((MR_Box) (check_hlds__unify_proc__Goal0_13));
          }
          {
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, check_hlds__unify_proc__GoalInfo_31, &check_hlds__unify_proc__FeaturedGoalInfo_37);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *check_hlds__unify_proc__Goal_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__GoalExpr_36));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__FeaturedGoalInfo_37));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_1(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_3(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVar_25 = ((MR_Word) (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__conv0_ExistQTVar_25);
    {
      check_hlds__unify_proc__unify_var_lists_2_7_p_0_2(check_hlds__unify_proc__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_4(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__TypeInfo_43_43 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[0];
    {
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__TypeInfo_43_43, ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVar_25)), ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__V_42_42)));
    }
    if ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
      {
        check_hlds__unify_proc__unify_var_lists_2_7_p_0_1(check_hlds__unify_proc__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_2(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    {
      parse_tree__prog_type__type_contains_var_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22, &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__V_42_42, check_hlds__unify_proc__unify_var_lists_2_7_p_0_4, check_hlds__unify_proc__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_5(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__conv0_ExistQTVar_25, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__unify_var_lists_2_7_p_0_3, check_hlds__unify_proc__env_ptr);
          }
        }
        (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
  MR_Word * check_hlds__unify_proc__HeadVar__5_5,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s check_hlds__unify_proc__env;

    (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2 = check_hlds__unify_proc__ExistQTVars_2;
    if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
          {
            (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
              {
                *check_hlds__unify_proc__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *check_hlds__unify_proc__STATE_VARIABLE_Info_7 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
                (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_TRUE;
              }
          }
      }
    else
      {
        MR_Word check_hlds__unify_proc__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__X_15;
        MR_Word check_hlds__unify_proc__Xs_16;
        MR_Word check_hlds__unify_proc__Y_17;
        MR_Word check_hlds__unify_proc__Ys_18;
        MR_Word check_hlds__unify_proc__Goal_19;
        MR_Word check_hlds__unify_proc__Goals_20;
        MR_Word check_hlds__unify_proc__Context_23;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;
        MR_Word check_hlds__unify_proc__V_38_38;
        MR_Word check_hlds__unify_proc__V_39_39;
        MR_Word check_hlds__unify_proc__V_40_40;
        MR_Word check_hlds__unify_proc__ModuleInfo_24;
        MR_Word check_hlds__unify_proc__V_28_28;
        MR_Word check_hlds__unify_proc__V_45_45;
        MR_Word check_hlds__unify_proc__V_46_46;
        MR_Word check_hlds__unify_proc__V_47_47;

        (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
          {
            check_hlds__unify_proc__X_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
            check_hlds__unify_proc__Xs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
            (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
              {
                check_hlds__unify_proc__Y_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 0)));
                check_hlds__unify_proc__Ys_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 1)));
                check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 0)));
                (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 1)));
                check_hlds__unify_proc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 2)));
                check_hlds__unify_proc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 3)));
                {
                  mercury__term__context_init_1_p_0(&check_hlds__unify_proc__Context_23);
                }
                check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
                check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
                check_hlds__unify_proc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
                check_hlds__unify_proc__ModuleInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
                {
                  check_hlds__unify_proc__V_28_28 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_24, (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22);
                }
                (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = (check_hlds__unify_proc__V_28_28 == (MR_Integer) 0);
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
                  {
                    {
                      check_hlds__unify_proc__Goal_19 = hlds__make_goal__true_goal_0_f_0();
                    }
                    check_hlds__unify_proc__STATE_VARIABLE_Info_31_31 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
                  }
                else
                  {
                    {
                      check_hlds__unify_proc__unify_var_lists_2_7_p_0_5(&check_hlds__unify_proc__env);
                    }
                    if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
                      {
                        MR_Word check_hlds__unify_proc__V_30_30;
                        MR_Word check_hlds__unify_proc__V_32_32;

                        {
                          check_hlds__unify_proc__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_32_32, 0) = ((MR_Box) (check_hlds__unify_proc__Y_17));
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          check_hlds__unify_proc__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_30_30, 0) = ((MR_Box) (check_hlds__unify_proc__X_15));
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_30_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_32_32));
                        }
                        {
                          check_hlds__unify_proc__build_call_6_p_0((MR_String) "typed_unify", check_hlds__unify_proc__V_30_30, check_hlds__unify_proc__Context_23, &check_hlds__unify_proc__Goal_19, check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
                        }
                      }
                    else
                      {
                        MR_Word check_hlds__unify_proc__V_34_34;

                        {
                          check_hlds__unify_proc__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_34_34, 0) = ((MR_Box) (check_hlds__unify_proc__Y_17));
                        }
                        {
                          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_15, check_hlds__unify_proc__V_34_34, check_hlds__unify_proc__Context_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Goal_19);
                        }
                        check_hlds__unify_proc__STATE_VARIABLE_Info_31_31 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
                      }
                  }
                {
                  (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = check_hlds__unify_proc__unify_var_lists_2_7_p_0(check_hlds__unify_proc__ArgTypes_13, (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__Xs_16, check_hlds__unify_proc__Ys_18, &check_hlds__unify_proc__Goals_20, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, check_hlds__unify_proc__STATE_VARIABLE_Info_7);
                }
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__unify_proc__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Goal_19));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Goals_20));
                    }
                    (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
{
  {
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
    MR_Word check_hlds__unify_proc__conv0_LambdaHeadVar__2_22;

    {
      check_hlds__unify_proc__conv0_LambdaHeadVar__2_22 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1832__1_1_f_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv0_LambdaHeadVar__2_22));
    return check_hlds__unify_proc__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0(
  MR_Word check_hlds__unify_proc__CtorArgs_6,
  MR_Word check_hlds__unify_proc__ExistQTVars_7,
  MR_Word * check_hlds__unify_proc__Vars_8,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    if ((check_hlds__unify_proc__ExistQTVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__unify_proc__ArgTypes_10;

        {
          check_hlds__unify_proc__ArgTypes_10 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__unify_proc_scalar_common_2[4], check_hlds__unify_proc__CtorArgs_6);
        }
        {
          check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(check_hlds__unify_proc__ArgTypes_10, check_hlds__unify_proc__Vars_8, check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, check_hlds__unify_proc__STATE_VARIABLE_Info_18);
        }
      }
    else
      {
        MR_Word check_hlds__unify_proc__VarSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
        MR_Integer check_hlds__unify_proc__NumVars_15;
        MR_Word check_hlds__unify_proc__VarSet_16;
        MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
        MR_Word check_hlds__unify_proc__V_39_39;
        MR_Word check_hlds__unify_proc__V_40_40;
        MR_Word check_hlds__unify_proc__V_41_41;
        MR_Word check_hlds__unify_proc__V_38_38;

        {
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__CtorArgs_6, &check_hlds__unify_proc__NumVars_15);
        }
        {
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__NumVars_15, check_hlds__unify_proc__Vars_8, check_hlds__unify_proc__VarSet0_14, &check_hlds__unify_proc__VarSet_16);
        }
        check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
        check_hlds__unify_proc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
        check_hlds__unify_proc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
        check_hlds__unify_proc__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__unify_proc__STATE_VARIABLE_Info_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_16));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__V_39_39));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
        }
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word * check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_3,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_4)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__unify_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__unify_proc__STATE_VARIABLE_Info_4 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_3;
      }
    else
      {
        MR_Word check_hlds__unify_proc__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__Var_10;
        MR_Word check_hlds__unify_proc__Vars_11;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_15_15;
        MR_Word check_hlds__unify_proc__VarSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__VarTypes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__VarSet_24;
        MR_Word check_hlds__unify_proc__VarTypes_25;
        MR_Word check_hlds__unify_proc__V_36_36;
        MR_Word check_hlds__unify_proc__V_37_37;
        MR_Word check_hlds__unify_proc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
        MR_Word check_hlds__unify_proc__V_34_34;
        MR_Word check_hlds__unify_proc__V_35_35;

        {
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__unify_proc__Var_10, check_hlds__unify_proc__VarSet0_22, &check_hlds__unify_proc__VarSet_24);
        }
        {
          hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__Var_10, check_hlds__unify_proc__Type_8, check_hlds__unify_proc__VarTypes0_23, &check_hlds__unify_proc__VarTypes_25);
        }
        check_hlds__unify_proc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
        check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
        check_hlds__unify_proc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
        check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
        {
          check_hlds__unify_proc__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_24));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_25));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__unify_proc__V_36_36));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
        }
        {
          check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(check_hlds__unify_proc__Types_9, &check_hlds__unify_proc__Vars_11, check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, check_hlds__unify_proc__STATE_VARIABLE_Info_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__unify_proc__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Vars_11));
        }
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_String check_hlds__unify_proc__BaseName_2,
  MR_Integer check_hlds__unify_proc__Num_3,
  MR_Word * check_hlds__unify_proc__HeadVar__4_4,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_5,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_6)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__unify_proc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__unify_proc__STATE_VARIABLE_Info_6 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word check_hlds__unify_proc__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__Var_16;
        MR_Word check_hlds__unify_proc__Vars_17;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_21_21;
        MR_Integer check_hlds__unify_proc__V_22_22;
        MR_String check_hlds__unify_proc__NumStr_32;
        MR_String check_hlds__unify_proc__Name_33;
        MR_Word check_hlds__unify_proc__VarSet0_41;
        MR_Word check_hlds__unify_proc__VarTypes0_42;
        MR_Word check_hlds__unify_proc__VarSet_43;
        MR_Word check_hlds__unify_proc__VarTypes_44;
        MR_Word check_hlds__unify_proc__V_55_55;
        MR_Word check_hlds__unify_proc__V_56_56;
        MR_Word check_hlds__unify_proc__V_48_48;
        MR_Word check_hlds__unify_proc__V_49_49;
        MR_Word check_hlds__unify_proc__V_53_53;
        MR_Word check_hlds__unify_proc__V_54_54;

        {
          mercury__string__int_to_string_2_p_0(check_hlds__unify_proc__Num_3, &check_hlds__unify_proc__NumStr_32);
        }
        {
          mercury__string__append_3_p_2(check_hlds__unify_proc__BaseName_2, check_hlds__unify_proc__NumStr_32, &check_hlds__unify_proc__Name_33);
        }
        check_hlds__unify_proc__VarSet0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
        check_hlds__unify_proc__VarTypes0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
        check_hlds__unify_proc__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
        check_hlds__unify_proc__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
        {
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_33, &check_hlds__unify_proc__Var_16, check_hlds__unify_proc__VarSet0_41, &check_hlds__unify_proc__VarSet_43);
        }
        {
          hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__Var_16, check_hlds__unify_proc__Type_12, check_hlds__unify_proc__VarTypes0_42, &check_hlds__unify_proc__VarTypes_44);
        }
        check_hlds__unify_proc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
        check_hlds__unify_proc__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
        check_hlds__unify_proc__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
        check_hlds__unify_proc__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
        {
          check_hlds__unify_proc__STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_43));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_44));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (check_hlds__unify_proc__V_55_55));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
        }
        check_hlds__unify_proc__V_22_22 = (check_hlds__unify_proc__Num_3 + (MR_Integer) 1);
        {
          check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(check_hlds__unify_proc__Types_13, check_hlds__unify_proc__BaseName_2, check_hlds__unify_proc__V_22_22, &check_hlds__unify_proc__Vars_17, check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, check_hlds__unify_proc__STATE_VARIABLE_Info_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__unify_proc__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Vars_17));
        }
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(
  MR_Word check_hlds__unify_proc__Type_7,
  MR_String check_hlds__unify_proc__BaseName_8,
  MR_Integer check_hlds__unify_proc__Num_9,
  MR_Word * check_hlds__unify_proc__Var_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_String check_hlds__unify_proc__NumStr_12;
    MR_String check_hlds__unify_proc__Name_13;
    MR_Word check_hlds__unify_proc__VarSet0_23;
    MR_Word check_hlds__unify_proc__VarTypes0_24;
    MR_Word check_hlds__unify_proc__VarSet_25;
    MR_Word check_hlds__unify_proc__VarTypes_26;
    MR_Word check_hlds__unify_proc__V_37_37;
    MR_Word check_hlds__unify_proc__V_38_38;
    MR_Word check_hlds__unify_proc__V_30_30;
    MR_Word check_hlds__unify_proc__V_31_31;
    MR_Word check_hlds__unify_proc__V_35_35;
    MR_Word check_hlds__unify_proc__V_36_36;

    {
      mercury__string__int_to_string_2_p_0(check_hlds__unify_proc__Num_9, &check_hlds__unify_proc__NumStr_12);
    }
    {
      mercury__string__append_3_p_2(check_hlds__unify_proc__BaseName_8, check_hlds__unify_proc__NumStr_12, &check_hlds__unify_proc__Name_13);
    }
    check_hlds__unify_proc__VarSet0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
    check_hlds__unify_proc__VarTypes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
    check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
    check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_13, check_hlds__unify_proc__Var_10, check_hlds__unify_proc__VarSet0_23, &check_hlds__unify_proc__VarSet_25);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*check_hlds__unify_proc__Var_10, check_hlds__unify_proc__Type_7, check_hlds__unify_proc__VarTypes0_24, &check_hlds__unify_proc__VarTypes_26);
    }
    check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
    check_hlds__unify_proc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
    check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
    check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__STATE_VARIABLE_Info_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_38_38));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__build_specific_call_9_p_0(
  MR_Word check_hlds__unify_proc__Type_10,
  MR_Word check_hlds__unify_proc__SpecialPredId_11,
  MR_Word check_hlds__unify_proc__ArgVars_12,
  MR_Word check_hlds__unify_proc__InstmapDelta_13,
  MR_Word check_hlds__unify_proc__Detism_14,
  MR_Word check_hlds__unify_proc__Context_15,
  MR_Word * check_hlds__unify_proc__Goal_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_26,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_27)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__PredName_19;
    MR_Word check_hlds__unify_proc__PredId_20;
    MR_Integer check_hlds__unify_proc__ProcId_21;

    {
      check_hlds__unify_proc__succeeded = check_hlds__polymorphism__get_special_proc_6_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__SpecialPredId_11, check_hlds__unify_proc__ModuleInfo_18, &check_hlds__unify_proc__PredName_19, &check_hlds__unify_proc__PredId_20, &check_hlds__unify_proc__ProcId_21);
    }
    if (check_hlds__unify_proc__succeeded)
      {
        MR_Word check_hlds__unify_proc__GoalExpr_22;
        MR_Word check_hlds__unify_proc__NonLocals_23;
        MR_Word check_hlds__unify_proc__GoalInfo0_24;
        MR_Word check_hlds__unify_proc__GoalInfo_25;

        {
          check_hlds__unify_proc__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_20));
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 1) = ((MR_Box) (check_hlds__unify_proc__ProcId_21));
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 2) = ((MR_Box) (check_hlds__unify_proc__ArgVars_12));
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 3) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 5) = ((MR_Box) (check_hlds__unify_proc__PredName_19));
        }
        {
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__ArgVars_12, &check_hlds__unify_proc__NonLocals_23);
        }
        {
          hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__unify_proc__NonLocals_23, check_hlds__unify_proc__InstmapDelta_13, check_hlds__unify_proc__Detism_14, (MR_Integer) 0, &check_hlds__unify_proc__GoalInfo0_24);
        }
        {
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__GoalInfo0_24, &check_hlds__unify_proc__GoalInfo_25);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__unify_proc__Goal_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__GoalExpr_22));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_25));
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.build_specific_call\'/9", (MR_String) "lookup failed");
          return;
        }
      }
    *check_hlds__unify_proc__STATE_VARIABLE_Info_27 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_26;
  }
}

static void MR_CALL 
check_hlds__unify_proc__build_call_6_p_0(
  MR_String check_hlds__unify_proc__Name_7,
  MR_Word check_hlds__unify_proc__ArgVars_8,
  MR_Word check_hlds__unify_proc__Context_9,
  MR_Word * check_hlds__unify_proc__Goal_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    MR_Integer check_hlds__unify_proc__Arity_13;
    MR_Word check_hlds__unify_proc__MercuryBuiltin_16;
    MR_Word check_hlds__unify_proc__V_24_24;
    MR_Word check_hlds__unify_proc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    MR_Integer check_hlds__unify_proc__V_27_27;
    MR_Word check_hlds__unify_proc__V_14_14;
    MR_String check_hlds__unify_proc__V_15_15;

    {
      mercury__list__length_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], check_hlds__unify_proc__ArgVars_8, &check_hlds__unify_proc__Arity_13);
    }
    {
      check_hlds__unify_proc__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&check_hlds__unify_proc__V_14_14, check_hlds__unify_proc__Name_7, &check_hlds__unify_proc__V_15_15, &check_hlds__unify_proc__V_27_27);
    }
    if (check_hlds__unify_proc__succeeded)
      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Arity_13 == check_hlds__unify_proc__V_27_27);
    if (check_hlds__unify_proc__succeeded)
      {
        check_hlds__unify_proc__MercuryBuiltin_16 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      }
    else
      {
        check_hlds__unify_proc__MercuryBuiltin_16 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      }
    {
      check_hlds__unify_proc__V_24_24 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__unify_proc__MercuryBuiltin_16, check_hlds__unify_proc__Name_7, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_3[2]), (MR_Integer) 6, (MR_Integer) 0, check_hlds__unify_proc__ArgVars_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__V_24_24, check_hlds__unify_proc__ModuleInfo_12, check_hlds__unify_proc__Context_9, check_hlds__unify_proc__Goal_10);
    }
    *check_hlds__unify_proc__STATE_VARIABLE_Info_18 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_17;
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_1(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_3(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVar_71 = ((MR_Word) (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__conv0_ExistQTVar_71);
    {
      check_hlds__unify_proc__compare_args_2_9_p_0_2(check_hlds__unify_proc__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_4(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__TypeInfo_77_77 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[0];
    {
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__TypeInfo_77_77, ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVar_71)), ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__V_76_76)));
    }
    if ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
      {
        check_hlds__unify_proc__compare_args_2_9_p_0_1(check_hlds__unify_proc__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_2(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    {
      parse_tree__prog_type__type_contains_var_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30, &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__V_76_76, check_hlds__unify_proc__compare_args_2_9_p_0_4, check_hlds__unify_proc__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_5(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__conv0_ExistQTVar_71, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__compare_args_2_9_p_0_3, check_hlds__unify_proc__env_ptr);
          }
        }
        (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
  MR_Word check_hlds__unify_proc__R_5,
  MR_Word check_hlds__unify_proc__Context_6,
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9)
{
  {
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s check_hlds__unify_proc__env;

    (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2 = check_hlds__unify_proc__ExistQTVars_2;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__unify_proc__Goal0_81;
            MR_Word check_hlds__unify_proc__V_82_82;
            MR_String check_hlds__unify_proc__V_83_83;
            MR_Word check_hlds__unify_proc__SymName_85;
            MR_Integer check_hlds__unify_proc__V_86_86;
            MR_Word check_hlds__unify_proc__V_87_87;
            MR_Word check_hlds__unify_proc__V_88_88;
            MR_Word check_hlds__unify_proc__Builtin_90;
            MR_Word check_hlds__unify_proc__V_91_91;
            MR_String check_hlds__unify_proc__V_92_92;
            MR_Integer check_hlds__unify_proc__V_93_93;

            (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
              {
                (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
                  {
                    check_hlds__unify_proc__V_83_83 = (MR_String) "=";
                    check_hlds__unify_proc__V_86_86 = (MR_Integer) 0;
                    {
                      check_hlds__unify_proc__Builtin_90 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
                    check_hlds__unify_proc__V_92_92 = (MR_String) "comparison_result";
                    check_hlds__unify_proc__V_93_93 = (MR_Integer) 0;
                    {
                      check_hlds__unify_proc__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_91_91, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_90));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_91_91, 1) = ((MR_Box) (check_hlds__unify_proc__V_92_92));
                    }
                    {
                      check_hlds__unify_proc__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_87_87, 0) = ((MR_Box) (check_hlds__unify_proc__V_91_91));
                      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_87_87, 1) = ((MR_Box) (check_hlds__unify_proc__V_93_93));
                    }
                    {
                      check_hlds__unify_proc__V_88_88 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
                    {
                      check_hlds__unify_proc__SymName_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_85, 0) = ((MR_Box) (check_hlds__unify_proc__V_88_88));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_85, 1) = ((MR_Box) (check_hlds__unify_proc__V_83_83));
                    }
                    {
                      check_hlds__unify_proc__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_85));
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 2) = ((MR_Box) (check_hlds__unify_proc__V_86_86));
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 3) = ((MR_Box) (check_hlds__unify_proc__V_87_87));
                    }
                    {
                      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_5, check_hlds__unify_proc__V_82_82, &check_hlds__unify_proc__Goal0_81);
                    }
                    {
                      hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_6, check_hlds__unify_proc__Goal0_81, check_hlds__unify_proc__HeadVar__7_7);
                    }
                    *check_hlds__unify_proc__STATE_VARIABLE_Info_9 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_8;
                    (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
                  }
              }
          }
        else
          {
            MR_Word check_hlds__unify_proc__Arg_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__unify_proc__ArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__unify_proc__X_20;
            MR_Word check_hlds__unify_proc__Xs_21;
            MR_Word check_hlds__unify_proc__Y_22;
            MR_Word check_hlds__unify_proc__Ys_23;
            MR_Word check_hlds__unify_proc__GoalInfo0_28;
            MR_Word check_hlds__unify_proc__GoalInfo_29;
            MR_String check_hlds__unify_proc__ComparePred_32;
            MR_Word check_hlds__unify_proc__ModuleInfo_33;
            MR_Word check_hlds__unify_proc__IsDummy_34;
            MR_Word check_hlds__unify_proc__V_72_72;
            MR_Word check_hlds__unify_proc__V_73_73;
            MR_Word check_hlds__unify_proc__V_74_74;
            MR_Word check_hlds__unify_proc__V_95_95;
            MR_Word check_hlds__unify_proc__V_96_96;
            MR_Word check_hlds__unify_proc__V_97_97;

            (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
              {
                check_hlds__unify_proc__X_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
                check_hlds__unify_proc__Xs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
                (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
                  {
                    check_hlds__unify_proc__Y_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 0)));
                    check_hlds__unify_proc__Ys_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 1)));
                    {
                      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_28);
                    }
                    {
                      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_6, check_hlds__unify_proc__GoalInfo0_28, &check_hlds__unify_proc__GoalInfo_29);
                    }
                    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 0)));
                    (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 1)));
                    check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 2)));
                    check_hlds__unify_proc__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 3)));
                    {
                      check_hlds__unify_proc__compare_args_2_9_p_0_5(&check_hlds__unify_proc__env);
                    }
                    if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
                      check_hlds__unify_proc__ComparePred_32 = (MR_String) "typed_compare";
                    else
                      check_hlds__unify_proc__ComparePred_32 = (MR_String) "compare";
                    check_hlds__unify_proc__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
                    check_hlds__unify_proc__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
                    check_hlds__unify_proc__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
                    check_hlds__unify_proc__ModuleInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
                    {
                      check_hlds__unify_proc__IsDummy_34 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_33, (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30);
                    }
                    switch (check_hlds__unify_proc__IsDummy_34) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word check_hlds__unify_proc__HeadVar__1__tmp_copy_1 = check_hlds__unify_proc__ArgTypes_18;
                            MR_Word check_hlds__unify_proc__HeadVar__3__tmp_copy_3 = check_hlds__unify_proc__Xs_21;
                            MR_Word check_hlds__unify_proc__HeadVar__4__tmp_copy_4 = check_hlds__unify_proc__Ys_23;

                            check_hlds__unify_proc__HeadVar__4_4 = check_hlds__unify_proc__HeadVar__4__tmp_copy_4;
                            check_hlds__unify_proc__HeadVar__3_3 = check_hlds__unify_proc__HeadVar__3__tmp_copy_3;
                            check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__HeadVar__1__tmp_copy_1;
                          }
                          continue;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__Xs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
                            (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__Ys_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
                            {
                              MR_Word check_hlds__unify_proc__V_44_44;
                              MR_Word check_hlds__unify_proc__V_46_46;

                              {
                                check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__X_20));
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__HeadVar__4_4));
                              }
                              {
                                check_hlds__unify_proc__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 0) = ((MR_Box) (check_hlds__unify_proc__R_5));
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 1) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
                              }
                              {
                                check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__ComparePred_32, check_hlds__unify_proc__V_44_44, check_hlds__unify_proc__Context_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, check_hlds__unify_proc__STATE_VARIABLE_Info_9);
                              }
                              (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
                            }
                          else
                            {
                              MR_Word check_hlds__unify_proc__R1_35;
                              MR_Word check_hlds__unify_proc__Do_Comparison_36;
                              MR_Word check_hlds__unify_proc__Check_Equal_37;
                              MR_Word check_hlds__unify_proc__Check_Not_Equal_38;
                              MR_Word check_hlds__unify_proc__Return_R1_39;
                              MR_Word check_hlds__unify_proc__Condition_40;
                              MR_Word check_hlds__unify_proc__ElseCase_41;
                              MR_Word check_hlds__unify_proc__V_49_49;
                              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_50_50;
                              MR_Word check_hlds__unify_proc__V_51_51;
                              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_52_52;
                              MR_Word check_hlds__unify_proc__V_53_53;
                              MR_Word check_hlds__unify_proc__V_54_54;
                              MR_Word check_hlds__unify_proc__V_56_56;
                              MR_Word check_hlds__unify_proc__V_58_58;
                              MR_Word check_hlds__unify_proc__V_59_59;
                              MR_Word check_hlds__unify_proc__V_62_62;
                              MR_Word check_hlds__unify_proc__V_64_64;
                              MR_Word check_hlds__unify_proc__V_65_65;
                              MR_Word check_hlds__unify_proc__V_68_68;
                              MR_Word check_hlds__unify_proc__V_69_69;

                              {
                                check_hlds__unify_proc__V_49_49 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                              }
                              {
                                check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__V_49_49, &check_hlds__unify_proc__R1_35, check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, &check_hlds__unify_proc__STATE_VARIABLE_Info_50_50);
                              }
                              {
                                check_hlds__unify_proc__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 0) = ((MR_Box) (check_hlds__unify_proc__Y_22));
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                              {
                                check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__X_20));
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__V_54_54));
                              }
                              {
                                check_hlds__unify_proc__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_51_51, 0) = ((MR_Box) (check_hlds__unify_proc__R1_35));
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_51_51, 1) = ((MR_Box) (check_hlds__unify_proc__V_53_53));
                              }
                              {
                                check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__ComparePred_32, check_hlds__unify_proc__V_51_51, check_hlds__unify_proc__Context_6, &check_hlds__unify_proc__Do_Comparison_36, check_hlds__unify_proc__STATE_VARIABLE_Info_50_50, &check_hlds__unify_proc__STATE_VARIABLE_Info_52_52);
                              }
                              {
                                check_hlds__unify_proc__V_56_56 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "=");
                              }
                              {
                                hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R1_35, check_hlds__unify_proc__V_56_56, &check_hlds__unify_proc__Check_Equal_37);
                              }
                              check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__unify_proc__Check_Equal_37);
                              {
                                check_hlds__unify_proc__Check_Not_Equal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Check_Not_Equal_38, 0) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
                                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Check_Not_Equal_38, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_29));
                              }
                              {
                                check_hlds__unify_proc__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__R1_35));
                              }
                              {
                                hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__R_5, check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Context_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Return_R1_39);
                              }
                              {
                                check_hlds__unify_proc__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 0) = ((MR_Box) (check_hlds__unify_proc__Check_Not_Equal_38));
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                              {
                                check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__Do_Comparison_36));
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (check_hlds__unify_proc__V_65_65));
                              }
                              {
                                check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) ((MR_Integer) 0));
                                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_62_62, 2) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
                              }
                              {
                                check_hlds__unify_proc__Condition_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Condition_40, 0) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
                                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Condition_40, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_29));
                              }
                              {
                                (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = check_hlds__unify_proc__compare_args_2_9_p_0(check_hlds__unify_proc__ArgTypes_18, (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__Xs_21, check_hlds__unify_proc__Ys_23, check_hlds__unify_proc__R_5, check_hlds__unify_proc__Context_6, &check_hlds__unify_proc__ElseCase_41, check_hlds__unify_proc__STATE_VARIABLE_Info_52_52, check_hlds__unify_proc__STATE_VARIABLE_Info_9);
                              }
                              if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
                                {
                                  check_hlds__unify_proc__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                  {
                                    check_hlds__unify_proc__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                                    MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 1) = ((MR_Box) (check_hlds__unify_proc__V_69_69));
                                    MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 2) = ((MR_Box) (check_hlds__unify_proc__Condition_40));
                                    MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 3) = ((MR_Box) (check_hlds__unify_proc__Return_R1_39));
                                    MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 4) = ((MR_Box) (check_hlds__unify_proc__ElseCase_41));
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                    *check_hlds__unify_proc__HeadVar__7_7 = base;
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_68_68));
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_29));
                                  }
                                  (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
                                }
                            }
                        }
                        break;
                    }
                  }
              }
          }
        return (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded;
        break;
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_9_p_0(
  MR_Word check_hlds__unify_proc__ArgTypes_10,
  MR_Word check_hlds__unify_proc__ExistQTVars_11,
  MR_Word check_hlds__unify_proc__Xs_12,
  MR_Word check_hlds__unify_proc__Ys_13,
  MR_Word check_hlds__unify_proc__R_14,
  MR_Word check_hlds__unify_proc__Context_15,
  MR_Word * check_hlds__unify_proc__Goal_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_19,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_20)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__Goal0_18;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_21_21;

    {
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc__compare_args_2_9_p_0(check_hlds__unify_proc__ArgTypes_10, check_hlds__unify_proc__ExistQTVars_11, check_hlds__unify_proc__Xs_12, check_hlds__unify_proc__Ys_13, check_hlds__unify_proc__R_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Goal0_18, check_hlds__unify_proc__STATE_VARIABLE_Info_0_19, &check_hlds__unify_proc__STATE_VARIABLE_Info_21_21);
    }
    if (check_hlds__unify_proc__succeeded)
      {
        *check_hlds__unify_proc__STATE_VARIABLE_Info_20 = check_hlds__unify_proc__STATE_VARIABLE_Info_21_21;
        *check_hlds__unify_proc__Goal_16 = check_hlds__unify_proc__Goal0_18;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.compare_args\'/9", (MR_String) "length mismatch");
          return;
        }
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_12,
  MR_Word check_hlds__unify_proc__Ctor1_13,
  MR_Word check_hlds__unify_proc__Ctor2_14,
  MR_String check_hlds__unify_proc__CompareOp_15,
  MR_Word check_hlds__unify_proc__R_16,
  MR_Word check_hlds__unify_proc__X_17,
  MR_Word check_hlds__unify_proc__Y_18,
  MR_Word check_hlds__unify_proc__Context_19,
  MR_Word * check_hlds__unify_proc__Case_20,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_48,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_49)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
    MR_Word check_hlds__unify_proc__ExistQTVars1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__FunctorName1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__ArgTypes1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__ExistQTVars2_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__FunctorName2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__ArgTypes2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 3)));
    MR_Integer check_hlds__unify_proc__FunctorArity1_34;
    MR_Integer check_hlds__unify_proc__FunctorArity2_35;
    MR_Word check_hlds__unify_proc__FunctorConsId1_36;
    MR_Word check_hlds__unify_proc__FunctorConsId2_37;
    MR_Word check_hlds__unify_proc__Vars1_38;
    MR_Word check_hlds__unify_proc__Vars2_39;
    MR_Word check_hlds__unify_proc__RHS1_40;
    MR_Word check_hlds__unify_proc__RHS2_41;
    MR_Word check_hlds__unify_proc__UnifyX_Goal_42;
    MR_Word check_hlds__unify_proc__UnifyY_Goal_43;
    MR_Word check_hlds__unify_proc__ReturnResult_44;
    MR_Word check_hlds__unify_proc__GoalList_45;
    MR_Word check_hlds__unify_proc__GoalInfo0_46;
    MR_Word check_hlds__unify_proc__GoalInfo_47;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_50_50;
    MR_Word check_hlds__unify_proc__V_58_58;
    MR_Word check_hlds__unify_proc__V_59_59;
    MR_Word check_hlds__unify_proc__V_60_60;
    MR_Word check_hlds__unify_proc__SymName_64;
    MR_Word check_hlds__unify_proc__V_66_66;
    MR_Word check_hlds__unify_proc__V_67_67;
    MR_Word check_hlds__unify_proc__Builtin_69;
    MR_Word check_hlds__unify_proc__V_70_70;
    MR_Word check_hlds__unify_proc___Constraints1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 1)));
    MR_Integer check_hlds__unify_proc___Arity1_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 4)));
    MR_Word check_hlds__unify_proc___Ctxt1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 5)));
    MR_Word check_hlds__unify_proc___Constraints2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 1)));
    MR_Integer check_hlds__unify_proc___Arity2_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 4)));
    MR_Word check_hlds__unify_proc___Ctxt2_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 5)));

    {
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_62_62, check_hlds__unify_proc__ArgTypes1_25, &check_hlds__unify_proc__FunctorArity1_34);
    }
    {
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_62_62, check_hlds__unify_proc__ArgTypes2_31, &check_hlds__unify_proc__FunctorArity2_35);
    }
    {
      check_hlds__unify_proc__FunctorConsId1_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_36, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName1_24));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_36, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity1_34));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_36, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_12));
    }
    {
      check_hlds__unify_proc__FunctorConsId2_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_37, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName2_30));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_37, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity2_35));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_37, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_12));
    }
    {
      check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes1_25, check_hlds__unify_proc__ExistQTVars1_22, &check_hlds__unify_proc__Vars1_38, check_hlds__unify_proc__STATE_VARIABLE_Info_0_48, &check_hlds__unify_proc__STATE_VARIABLE_Info_50_50);
    }
    {
      check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes2_31, check_hlds__unify_proc__ExistQTVars2_28, &check_hlds__unify_proc__Vars2_39, check_hlds__unify_proc__STATE_VARIABLE_Info_50_50, check_hlds__unify_proc__STATE_VARIABLE_Info_49);
    }
    {
      check_hlds__unify_proc__RHS1_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_40, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId1_36));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_40, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_40, 2) = ((MR_Box) (check_hlds__unify_proc__Vars1_38));
    }
    {
      check_hlds__unify_proc__RHS2_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_41, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId2_37));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_41, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_41, 2) = ((MR_Box) (check_hlds__unify_proc__Vars2_39));
    }
    {
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_17, check_hlds__unify_proc__RHS1_40, check_hlds__unify_proc__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_42);
    }
    {
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_18, check_hlds__unify_proc__RHS2_41, check_hlds__unify_proc__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_43);
    }
    {
      check_hlds__unify_proc__Builtin_69 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__unify_proc__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_69));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      check_hlds__unify_proc__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_66_66, 0) = ((MR_Box) (check_hlds__unify_proc__V_70_70));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_66_66, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__unify_proc__V_67_67 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__unify_proc__SymName_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_64, 0) = ((MR_Box) (check_hlds__unify_proc__V_67_67));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_64, 1) = ((MR_Box) (check_hlds__unify_proc__CompareOp_15));
    }
    {
      check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_64));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_58_58, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_58_58, 3) = ((MR_Box) (check_hlds__unify_proc__V_66_66));
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_16, check_hlds__unify_proc__V_58_58, &check_hlds__unify_proc__ReturnResult_44);
    }
    {
      check_hlds__unify_proc__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_60_60, 0) = ((MR_Box) (check_hlds__unify_proc__ReturnResult_44));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_43));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (check_hlds__unify_proc__V_60_60));
    }
    {
      check_hlds__unify_proc__GoalList_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_45, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_42));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_45, 1) = ((MR_Box) (check_hlds__unify_proc__V_59_59));
    }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_46);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_19, check_hlds__unify_proc__GoalInfo0_46, &check_hlds__unify_proc__GoalInfo_47);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_45, check_hlds__unify_proc__GoalInfo_47, check_hlds__unify_proc__Case_20);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_11,
  MR_Word check_hlds__unify_proc__Ctor_12,
  MR_Word check_hlds__unify_proc__R_13,
  MR_Word check_hlds__unify_proc__X_14,
  MR_Word check_hlds__unify_proc__Y_15,
  MR_Word check_hlds__unify_proc__Context_16,
  MR_Word check_hlds__unify_proc__Kind_17,
  MR_Word * check_hlds__unify_proc__Case_18,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ExistQTVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__FunctorName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__ArgTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 3)));
    MR_Integer check_hlds__unify_proc__FunctorArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 4)));
    MR_Word check_hlds__unify_proc__FunctorConsId_26;
    MR_Word check_hlds__unify_proc__GoalList_30;
    MR_Word check_hlds__unify_proc__GoalInfo0_39;
    MR_Word check_hlds__unify_proc__GoalInfo_40;
    MR_Word check_hlds__unify_proc___Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc___Ctxt_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 5)));

    {
      check_hlds__unify_proc__FunctorConsId_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName_22));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_24));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_11));
    }
    if ((check_hlds__unify_proc__ArgTypes_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__unify_proc__RHS_27;
        MR_Word check_hlds__unify_proc__UnifyX_Goal_28;
        MR_Word check_hlds__unify_proc__EqualGoal_29;
        MR_Word check_hlds__unify_proc__Goal0_71;
        MR_Word check_hlds__unify_proc__V_72_72;
        MR_Word check_hlds__unify_proc__SymName_75;
        MR_Word check_hlds__unify_proc__V_77_77;
        MR_Word check_hlds__unify_proc__V_78_78;
        MR_Word check_hlds__unify_proc__Builtin_80;
        MR_Word check_hlds__unify_proc__V_81_81;

        {
          check_hlds__unify_proc__RHS_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_27, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_26));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_27, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_14, check_hlds__unify_proc__RHS_27, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_28);
        }
        {
          check_hlds__unify_proc__Builtin_80 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
        {
          check_hlds__unify_proc__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_80));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 1) = ((MR_Box) ((MR_String) "comparison_result"));
        }
        {
          check_hlds__unify_proc__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_77_77, 0) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_77_77, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          check_hlds__unify_proc__V_78_78 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
        {
          check_hlds__unify_proc__SymName_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_75, 0) = ((MR_Box) (check_hlds__unify_proc__V_78_78));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_75, 1) = ((MR_Box) ((MR_String) "="));
        }
        {
          check_hlds__unify_proc__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_72_72, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_75));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_72_72, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_72_72, 3) = ((MR_Box) (check_hlds__unify_proc__V_77_77));
        }
        {
          hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_13, check_hlds__unify_proc__V_72_72, &check_hlds__unify_proc__Goal0_71);
        }
        {
          hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_16, check_hlds__unify_proc__Goal0_71, &check_hlds__unify_proc__EqualGoal_29);
        }
        switch (check_hlds__unify_proc__Kind_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__unify_proc__V_64_64;

              {
                check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__EqualGoal_29));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_28));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__unify_proc__UnifyY_Goal_31;
              MR_Word check_hlds__unify_proc__V_61_61;
              MR_Word check_hlds__unify_proc__V_62_62;

              {
                hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_15, check_hlds__unify_proc__RHS_27, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_31);
              }
              {
                check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (check_hlds__unify_proc__EqualGoal_29));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__unify_proc__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_31));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 1) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
              }
              {
                check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_28));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_61_61));
              }
            }
            break;
        }
        *check_hlds__unify_proc__STATE_VARIABLE_Info_42 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_41;
      }
    else
      {
        MR_Word check_hlds__unify_proc__Vars1_34;
        MR_Word check_hlds__unify_proc__Vars2_35;
        MR_Word check_hlds__unify_proc__RHS1_36;
        MR_Word check_hlds__unify_proc__RHS2_37;
        MR_Word check_hlds__unify_proc__CompareArgs_Goal_38;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_43_43;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_44_44;
        MR_Word check_hlds__unify_proc__V_52_52;
        MR_Word check_hlds__unify_proc__V_53_53;
        MR_Word check_hlds__unify_proc__UnifyX_Goal_66;
        MR_Word check_hlds__unify_proc__UnifyY_Goal_67;

        {
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_23, check_hlds__unify_proc__ExistQTVars_20, &check_hlds__unify_proc__Vars1_34, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, &check_hlds__unify_proc__STATE_VARIABLE_Info_43_43);
        }
        {
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_23, check_hlds__unify_proc__ExistQTVars_20, &check_hlds__unify_proc__Vars2_35, check_hlds__unify_proc__STATE_VARIABLE_Info_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_44);
        }
        {
          check_hlds__unify_proc__RHS1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_36, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_26));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_36, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_36, 2) = ((MR_Box) (check_hlds__unify_proc__Vars1_34));
        }
        {
          check_hlds__unify_proc__RHS2_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_37, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_26));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_37, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_37, 2) = ((MR_Box) (check_hlds__unify_proc__Vars2_35));
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_14, check_hlds__unify_proc__RHS1_36, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_66);
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_15, check_hlds__unify_proc__RHS2_37, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_67);
        }
        {
          check_hlds__unify_proc__compare_args_9_p_0(check_hlds__unify_proc__ArgTypes_23, check_hlds__unify_proc__ExistQTVars_20, check_hlds__unify_proc__Vars1_34, check_hlds__unify_proc__Vars2_35, check_hlds__unify_proc__R_13, check_hlds__unify_proc__Context_16, &check_hlds__unify_proc__CompareArgs_Goal_38, check_hlds__unify_proc__STATE_VARIABLE_Info_44_44, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
        }
        {
          check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__CompareArgs_Goal_38));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_67));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 1) = ((MR_Box) (check_hlds__unify_proc__V_53_53));
        }
        {
          check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_66));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_52_52));
        }
      }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_39);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_16, check_hlds__unify_proc__GoalInfo0_39, &check_hlds__unify_proc__GoalInfo_40);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_30, check_hlds__unify_proc__GoalInfo_40, check_hlds__unify_proc__Case_18);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_cases_9_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    if ((check_hlds__unify_proc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__unify_proc__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__unify_proc__STATE_VARIABLE_Info_9 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_8;
      }
    else
      {
        MR_Word check_hlds__unify_proc__Ctor_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__Case_25;
        MR_Word check_hlds__unify_proc__Cases_26;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;

        {
          check_hlds__unify_proc__generate_compare_case_10_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Ctor_19, check_hlds__unify_proc__HeadVar__3_3, check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, (MR_Integer) 0, &check_hlds__unify_proc__Case_25, check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
        }
        {
          check_hlds__unify_proc__generate_compare_cases_9_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Ctors_20, check_hlds__unify_proc__HeadVar__3_3, check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, &check_hlds__unify_proc__Cases_26, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, check_hlds__unify_proc__STATE_VARIABLE_Info_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__unify_proc__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Case_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Cases_26));
        }
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(
  MR_Word check_hlds__unify_proc__Type_10,
  MR_Word check_hlds__unify_proc__Ctors_11,
  MR_Word check_hlds__unify_proc__Res_12,
  MR_Word check_hlds__unify_proc__X_13,
  MR_Word check_hlds__unify_proc__Y_14,
  MR_Word check_hlds__unify_proc__Context_15,
  MR_Word * check_hlds__unify_proc__Goal_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__IntType_18;
    MR_Word check_hlds__unify_proc__X_Index_19;
    MR_Word check_hlds__unify_proc__Y_Index_20;
    MR_Word check_hlds__unify_proc__R_21;
    MR_Word check_hlds__unify_proc__GoalInfo0_22;
    MR_Word check_hlds__unify_proc__GoalInfo_23;
    MR_Word check_hlds__unify_proc__X_InstmapDelta_24;
    MR_Word check_hlds__unify_proc__Call_X_Index_25;
    MR_Word check_hlds__unify_proc__Y_InstmapDelta_26;
    MR_Word check_hlds__unify_proc__Call_Y_Index_27;
    MR_Word check_hlds__unify_proc__Call_Less_Than_28;
    MR_Word check_hlds__unify_proc__Call_Greater_Than_29;
    MR_Word check_hlds__unify_proc__Return_Less_Than_30;
    MR_Word check_hlds__unify_proc__Return_Greater_Than_31;
    MR_Word check_hlds__unify_proc__Return_R_32;
    MR_Word check_hlds__unify_proc__TypeCtor_33;
    MR_Word check_hlds__unify_proc__Cases_34;
    MR_Word check_hlds__unify_proc__CasesGoal_35;
    MR_Word check_hlds__unify_proc__Abort_36;
    MR_Word check_hlds__unify_proc__HandleEqualGoal_37;
    MR_Word check_hlds__unify_proc__HandleGreaterEqualGoal_38;
    MR_Word check_hlds__unify_proc__HandleLessGreaterEqualGoal_39;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_42_42;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_43_43;
    MR_Word check_hlds__unify_proc__V_44_44;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_45_45;
    MR_Word check_hlds__unify_proc__V_47_47;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_49_49;
    MR_Word check_hlds__unify_proc__V_50_50;
    MR_Word check_hlds__unify_proc__V_53_53;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_55_55;
    MR_Word check_hlds__unify_proc__V_56_56;
    MR_Word check_hlds__unify_proc__V_59_59;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_60_60;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_65_65;
    MR_Word check_hlds__unify_proc__V_68_68;
    MR_Word check_hlds__unify_proc__V_70_70;
    MR_Word check_hlds__unify_proc__V_72_72;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_75_75;
    MR_Word check_hlds__unify_proc__V_76_76;
    MR_Word check_hlds__unify_proc__V_80_80;
    MR_Word check_hlds__unify_proc__V_82_82;
    MR_Word check_hlds__unify_proc__V_84_84;
    MR_Word check_hlds__unify_proc__V_86_86;
    MR_Word check_hlds__unify_proc__V_88_88;
    MR_Word check_hlds__unify_proc__V_89_89;
    MR_Word check_hlds__unify_proc__V_90_90;

    {
      check_hlds__unify_proc__IntType_18 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    {
      check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__IntType_18, &check_hlds__unify_proc__X_Index_19, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, &check_hlds__unify_proc__STATE_VARIABLE_Info_42_42);
    }
    {
      check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__IntType_18, &check_hlds__unify_proc__Y_Index_20, check_hlds__unify_proc__STATE_VARIABLE_Info_42_42, &check_hlds__unify_proc__STATE_VARIABLE_Info_43_43);
    }
    {
      check_hlds__unify_proc__V_44_44 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    }
    {
      check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__V_44_44, &check_hlds__unify_proc__R_21, check_hlds__unify_proc__STATE_VARIABLE_Info_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_45_45);
    }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_22);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__GoalInfo0_22, &check_hlds__unify_proc__GoalInfo_23);
    }
    {
      check_hlds__unify_proc__X_InstmapDelta_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__unify_proc__X_Index_19);
    }
    {
      check_hlds__unify_proc__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_50_50, 0) = ((MR_Box) (check_hlds__unify_proc__X_Index_19));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 1) = ((MR_Box) (check_hlds__unify_proc__V_50_50));
    }
    {
      check_hlds__unify_proc__build_specific_call_9_p_0(check_hlds__unify_proc__Type_10, (MR_Integer) 1, check_hlds__unify_proc__V_47_47, check_hlds__unify_proc__X_InstmapDelta_24, (MR_Integer) 0, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_X_Index_25, check_hlds__unify_proc__STATE_VARIABLE_Info_45_45, &check_hlds__unify_proc__STATE_VARIABLE_Info_49_49);
    }
    {
      check_hlds__unify_proc__Y_InstmapDelta_26 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__unify_proc__Y_Index_20);
    }
    {
      check_hlds__unify_proc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 0) = ((MR_Box) (check_hlds__unify_proc__Y_Index_20));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
    }
    {
      check_hlds__unify_proc__build_specific_call_9_p_0(check_hlds__unify_proc__Type_10, (MR_Integer) 1, check_hlds__unify_proc__V_53_53, check_hlds__unify_proc__Y_InstmapDelta_26, (MR_Integer) 0, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Y_Index_27, check_hlds__unify_proc__STATE_VARIABLE_Info_49_49, &check_hlds__unify_proc__STATE_VARIABLE_Info_55_55);
    }
    {
      check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__X_Index_19));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
    }
    {
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_int_lt", check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Less_Than_28, check_hlds__unify_proc__STATE_VARIABLE_Info_55_55, &check_hlds__unify_proc__STATE_VARIABLE_Info_60_60);
    }
    {
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_int_gt", check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Greater_Than_29, check_hlds__unify_proc__STATE_VARIABLE_Info_60_60, &check_hlds__unify_proc__STATE_VARIABLE_Info_65_65);
    }
    {
      check_hlds__unify_proc__V_68_68 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "<");
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__V_68_68, &check_hlds__unify_proc__Return_Less_Than_30);
    }
    {
      check_hlds__unify_proc__V_70_70 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) ">");
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__V_70_70, &check_hlds__unify_proc__Return_Greater_Than_31);
    }
    {
      check_hlds__unify_proc__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (check_hlds__unify_proc__R_21));
    }
    {
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__V_72_72, check_hlds__unify_proc__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Return_R_32);
    }
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_10, &check_hlds__unify_proc__TypeCtor_33);
    }
    {
      check_hlds__unify_proc__generate_compare_cases_9_p_0(check_hlds__unify_proc__TypeCtor_33, check_hlds__unify_proc__Ctors_11, check_hlds__unify_proc__R_21, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Cases_34, check_hlds__unify_proc__STATE_VARIABLE_Info_65_65, &check_hlds__unify_proc__STATE_VARIABLE_Info_75_75);
    }
    {
      check_hlds__unify_proc__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_76_76, 1) = ((MR_Box) (check_hlds__unify_proc__Cases_34));
    }
    {
      check_hlds__unify_proc__CasesGoal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CasesGoal_35, 0) = ((MR_Box) (check_hlds__unify_proc__V_76_76));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CasesGoal_35, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
    }
    {
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "compare_error", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Abort_36, check_hlds__unify_proc__STATE_VARIABLE_Info_75_75, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
    }
    {
      check_hlds__unify_proc__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 2) = ((MR_Box) (check_hlds__unify_proc__CasesGoal_35));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 3) = ((MR_Box) (check_hlds__unify_proc__Return_R_32));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 4) = ((MR_Box) (check_hlds__unify_proc__Abort_36));
    }
    {
      check_hlds__unify_proc__HandleEqualGoal_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleEqualGoal_37, 0) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleEqualGoal_37, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
    }
    {
      check_hlds__unify_proc__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 2) = ((MR_Box) (check_hlds__unify_proc__Call_Greater_Than_29));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 3) = ((MR_Box) (check_hlds__unify_proc__Return_Greater_Than_31));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 4) = ((MR_Box) (check_hlds__unify_proc__HandleEqualGoal_37));
    }
    {
      check_hlds__unify_proc__HandleGreaterEqualGoal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleGreaterEqualGoal_38, 0) = ((MR_Box) (check_hlds__unify_proc__V_82_82));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleGreaterEqualGoal_38, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
    }
    {
      check_hlds__unify_proc__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 2) = ((MR_Box) (check_hlds__unify_proc__Call_Less_Than_28));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 3) = ((MR_Box) (check_hlds__unify_proc__Return_Less_Than_30));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 4) = ((MR_Box) (check_hlds__unify_proc__HandleGreaterEqualGoal_38));
    }
    {
      check_hlds__unify_proc__HandleLessGreaterEqualGoal_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleLessGreaterEqualGoal_39, 0) = ((MR_Box) (check_hlds__unify_proc__V_84_84));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleLessGreaterEqualGoal_39, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
    }
    {
      check_hlds__unify_proc__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_90_90, 0) = ((MR_Box) (check_hlds__unify_proc__HandleLessGreaterEqualGoal_39));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_89_89, 0) = ((MR_Box) (check_hlds__unify_proc__Call_Y_Index_27));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_89_89, 1) = ((MR_Box) (check_hlds__unify_proc__V_90_90));
    }
    {
      check_hlds__unify_proc__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_88_88, 0) = ((MR_Box) (check_hlds__unify_proc__Call_X_Index_25));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_88_88, 1) = ((MR_Box) (check_hlds__unify_proc__V_89_89));
    }
    {
      check_hlds__unify_proc__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_86_86, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_86_86, 2) = ((MR_Box) (check_hlds__unify_proc__V_88_88));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__Goal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_86_86));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
  MR_String check_hlds__unify_proc__HeadVar__4_4,
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
  MR_Word check_hlds__unify_proc__HeadVar__8_8,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_11,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__unify_proc__succeeded;

        if ((check_hlds__unify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__unify_proc__STATE_VARIABLE_Info_12 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_11;
            *check_hlds__unify_proc__STATE_VARIABLE_Cases_10 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9;
          }
        else
          {
            MR_Word check_hlds__unify_proc__RightCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__unify_proc__RightCtors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__unify_proc__Case_37;
            MR_String check_hlds__unify_proc__Cmp1_38;
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_44_44;
            MR_Word check_hlds__unify_proc__V_46_46;

            {
              check_hlds__unify_proc__succeeded = parse_tree__prog_data____Unify____constructor_0_0(check_hlds__unify_proc__HeadVar__2_2, check_hlds__unify_proc__RightCtor_28);
            }
            if (check_hlds__unify_proc__succeeded)
              {
                {
                  check_hlds__unify_proc__generate_compare_case_10_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__HeadVar__2_2, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__HeadVar__8_8, (MR_Integer) 1, &check_hlds__unify_proc__Case_37, check_hlds__unify_proc__STATE_VARIABLE_Info_0_11, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_44);
                }
                check_hlds__unify_proc__Cmp1_38 = (MR_String) "<";
              }
            else
              {
                {
                  check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__HeadVar__2_2, check_hlds__unify_proc__RightCtor_28, check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__HeadVar__8_8, &check_hlds__unify_proc__Case_37, check_hlds__unify_proc__STATE_VARIABLE_Info_0_11, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_44);
                }
                check_hlds__unify_proc__Cmp1_38 = check_hlds__unify_proc__HeadVar__4_4;
              }
            {
              check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Case_37));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9));
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__unify_proc__HeadVar__3__tmp_copy_3 = check_hlds__unify_proc__RightCtors_29;
              MR_String check_hlds__unify_proc__HeadVar__4__tmp_copy_4 = check_hlds__unify_proc__Cmp1_38;
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_9 = check_hlds__unify_proc__V_46_46;
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_11 = check_hlds__unify_proc__STATE_VARIABLE_Info_44_44;

              check_hlds__unify_proc__STATE_VARIABLE_Info_0_11 = check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_11;
              check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_9;
              check_hlds__unify_proc__HeadVar__4_4 = check_hlds__unify_proc__HeadVar__4__tmp_copy_4;
              check_hlds__unify_proc__HeadVar__3_3 = check_hlds__unify_proc__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_9,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_10,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__unify_proc__succeeded;

        if ((check_hlds__unify_proc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__unify_proc__STATE_VARIABLE_Info_11 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_10;
            *check_hlds__unify_proc__STATE_VARIABLE_Cases_9 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8;
          }
        else
          {
            MR_Word check_hlds__unify_proc__LeftCtor_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__unify_proc__LeftCtors_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_39_39;
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_40_40;

            {
              check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__LeftCtor_25, check_hlds__unify_proc__HeadVar__3_3, (MR_String) ">", check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8, &check_hlds__unify_proc__STATE_VARIABLE_Cases_39_39, check_hlds__unify_proc__STATE_VARIABLE_Info_0_10, &check_hlds__unify_proc__STATE_VARIABLE_Info_40_40);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__unify_proc__HeadVar__2__tmp_copy_2 = check_hlds__unify_proc__LeftCtors_26;
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_8 = check_hlds__unify_proc__STATE_VARIABLE_Cases_39_39;
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_10 = check_hlds__unify_proc__STATE_VARIABLE_Info_40_40;

              check_hlds__unify_proc__STATE_VARIABLE_Info_0_10 = check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_10;
              check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_8;
              check_hlds__unify_proc__HeadVar__2_2 = check_hlds__unify_proc__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box * check_hlds__unify_proc__wrapper_arg_3)
{
  {
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
    MR_Word check_hlds__unify_proc__conv0_Res_6;

    {
      check_hlds__unify_proc__compare_ctors_lexically_3_p_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), &check_hlds__unify_proc__conv0_Res_6);
    }
    *check_hlds__unify_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__unify_proc__conv0_Res_6));
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(
  MR_Word check_hlds__unify_proc__Type_10,
  MR_Word check_hlds__unify_proc__Ctors0_11,
  MR_Word check_hlds__unify_proc__Res_12,
  MR_Word check_hlds__unify_proc__X_13,
  MR_Word check_hlds__unify_proc__Y_14,
  MR_Word check_hlds__unify_proc__Context_15,
  MR_Word * check_hlds__unify_proc__Clause_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_30,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_31)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__Globals_19;
    MR_Word check_hlds__unify_proc__LexicalOrder_20;
    MR_Word check_hlds__unify_proc__Ctors_21;
    MR_Word check_hlds__unify_proc__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_18, &check_hlds__unify_proc__Globals_19);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_19, (MR_Integer) 270, &check_hlds__unify_proc__LexicalOrder_20);
    }
    switch (check_hlds__unify_proc__LexicalOrder_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__unify_proc__Ctors_21 = check_hlds__unify_proc__Ctors0_11;
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__list__sort_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &check_hlds__unify_proc_scalar_common_2[3], check_hlds__unify_proc__Ctors0_11, &check_hlds__unify_proc__Ctors_21);
          }
        }
        break;
    }
    if ((check_hlds__unify_proc__Ctors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_du_compare_proc_body\'/9", (MR_String) "compare for type with no functors");
          return;
        }
      }
    else
      {
        MR_Integer check_hlds__unify_proc__CompareSpec_24;
        MR_Integer check_hlds__unify_proc__NumCtors_25;
        MR_Word check_hlds__unify_proc__Goal0_27;
        MR_Word check_hlds__unify_proc__Goal_28;
        MR_Word check_hlds__unify_proc__HeadVars_29;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_35_35;
        MR_Word check_hlds__unify_proc__V_37_37;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_38_38;
        MR_Word check_hlds__unify_proc__V_39_39;
        MR_Word check_hlds__unify_proc__V_40_40;

        {
          libs__globals__lookup_int_option_3_p_0(check_hlds__unify_proc__Globals_19, (MR_Integer) 311, &check_hlds__unify_proc__CompareSpec_24);
        }
        {
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, check_hlds__unify_proc__Ctors_21, &check_hlds__unify_proc__NumCtors_25);
        }
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__NumCtors_25 <= check_hlds__unify_proc__CompareSpec_24);
        if (check_hlds__unify_proc__succeeded)
          {
            MR_Word check_hlds__unify_proc__TypeCtor_26;
            MR_Word check_hlds__unify_proc__Cases_65;
            MR_Word check_hlds__unify_proc__GoalInfo0_66;
            MR_Word check_hlds__unify_proc__GoalInfo_67;
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_39_98;
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_40_99;
            MR_Word check_hlds__unify_proc__RightCtor_117;
            MR_Word check_hlds__unify_proc__RightCtors_118;
            MR_Word check_hlds__unify_proc__Case_126;
            MR_String check_hlds__unify_proc__Cmp1_127;
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_44_133;
            MR_Word check_hlds__unify_proc__V_135_135;

            {
              parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_10, &check_hlds__unify_proc__TypeCtor_26);
            }
            check_hlds__unify_proc__RightCtor_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Ctors_21, (MR_Integer) 0)));
            check_hlds__unify_proc__RightCtors_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Ctors_21, (MR_Integer) 1)));
            {
              check_hlds__unify_proc__succeeded = parse_tree__prog_data____Unify____constructor_0_0(check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__RightCtor_117);
            }
            if (check_hlds__unify_proc__succeeded)
              {
                {
                  check_hlds__unify_proc__generate_compare_case_10_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, (MR_Integer) 1, &check_hlds__unify_proc__Case_126, check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_133);
                }
                check_hlds__unify_proc__Cmp1_127 = (MR_String) "<";
              }
            else
              {
                {
                  check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__RightCtor_117, (MR_String) ">", check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Case_126, check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_133);
                }
                check_hlds__unify_proc__Cmp1_127 = (MR_String) ">";
              }
            {
              check_hlds__unify_proc__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_135_135, 0) = ((MR_Box) (check_hlds__unify_proc__Case_126));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__RightCtors_118, check_hlds__unify_proc__Cmp1_127, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__V_135_135, &check_hlds__unify_proc__STATE_VARIABLE_Cases_39_98, check_hlds__unify_proc__STATE_VARIABLE_Info_44_133, &check_hlds__unify_proc__STATE_VARIABLE_Info_40_99);
            }
            {
              check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtors_118, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__STATE_VARIABLE_Cases_39_98, &check_hlds__unify_proc__Cases_65, check_hlds__unify_proc__STATE_VARIABLE_Info_40_99, &check_hlds__unify_proc__STATE_VARIABLE_Info_35_35);
            }
            {
              hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_66);
            }
            {
              hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__GoalInfo0_66, &check_hlds__unify_proc__GoalInfo_67);
            }
            {
              hlds__hlds_goal__disj_list_to_goal_3_p_0(check_hlds__unify_proc__Cases_65, check_hlds__unify_proc__GoalInfo_67, &check_hlds__unify_proc__Goal0_27);
            }
          }
        else
          {
            check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Goal0_27, check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_35_35);
          }
        {
          check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
        }
        {
          check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__V_37_37, check_hlds__unify_proc__Goal0_27, &check_hlds__unify_proc__Goal_28, check_hlds__unify_proc__STATE_VARIABLE_Info_35_35, &check_hlds__unify_proc__STATE_VARIABLE_Info_38_38);
        }
        {
          check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
        }
        {
          check_hlds__unify_proc__HeadVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVars_29, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVars_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_39_39));
        }
        {
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__HeadVars_29, check_hlds__unify_proc__Goal_28, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_38_38, check_hlds__unify_proc__STATE_VARIABLE_Info_31);
        }
      }
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
{
  {
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
    MR_Word check_hlds__unify_proc__conv0_LambdaHeadVar__2_22;

    {
      check_hlds__unify_proc__conv0_LambdaHeadVar__2_22 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1832__1_1_f_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv0_LambdaHeadVar__2_22));
    return check_hlds__unify_proc__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_11,
  MR_Word check_hlds__unify_proc__X_12,
  MR_Word check_hlds__unify_proc__Index_13,
  MR_Word check_hlds__unify_proc__Context_14,
  MR_Word check_hlds__unify_proc__Ctor_15,
  MR_Word * check_hlds__unify_proc__Goal_16,
  MR_Integer check_hlds__unify_proc__STATE_VARIABLE_N_0_32,
  MR_Integer * check_hlds__unify_proc__STATE_VARIABLE_N_33,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_34,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_35)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ExistQTVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__FunctorName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__ArgTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 3)));
    MR_Integer check_hlds__unify_proc__FunctorArity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 4)));
    MR_Word check_hlds__unify_proc__FunctorConsId_25;
    MR_Word check_hlds__unify_proc__ArgVars_26;
    MR_Word check_hlds__unify_proc__UnifyX_Goal_27;
    MR_Word check_hlds__unify_proc__UnifyIndex_Goal_28;
    MR_Word check_hlds__unify_proc__GoalList_29;
    MR_Word check_hlds__unify_proc__GoalInfo0_30;
    MR_Word check_hlds__unify_proc__GoalInfo_31;
    MR_Word check_hlds__unify_proc__V_37_37;
    MR_Word check_hlds__unify_proc__V_43_43;
    MR_Word check_hlds__unify_proc___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc___Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 5)));

    {
      check_hlds__unify_proc__FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName_21));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_23));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_11));
    }
    if ((check_hlds__unify_proc__ExistQTVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__unify_proc__ArgTypes_51;

        {
          check_hlds__unify_proc__ArgTypes_51 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__unify_proc_scalar_common_2[2], check_hlds__unify_proc__ArgTypes_22);
        }
        {
          check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(check_hlds__unify_proc__ArgTypes_51, &check_hlds__unify_proc__ArgVars_26, check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, check_hlds__unify_proc__STATE_VARIABLE_Info_35);
        }
      }
    else
      {
        MR_Word check_hlds__unify_proc__VarSet0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
        MR_Integer check_hlds__unify_proc__NumVars_56;
        MR_Word check_hlds__unify_proc__VarSet_57;
        MR_Word check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
        MR_Word check_hlds__unify_proc__V_78_78;
        MR_Word check_hlds__unify_proc__V_79_79;
        MR_Word check_hlds__unify_proc__V_80_80;
        MR_Word check_hlds__unify_proc__V_77_77;

        {
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__ArgTypes_22, &check_hlds__unify_proc__NumVars_56);
        }
        {
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__NumVars_56, &check_hlds__unify_proc__ArgVars_26, check_hlds__unify_proc__VarSet0_55, &check_hlds__unify_proc__VarSet_57);
        }
        check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
        check_hlds__unify_proc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
        check_hlds__unify_proc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
        check_hlds__unify_proc__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__unify_proc__STATE_VARIABLE_Info_35 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_57));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__V_78_78));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_79_79));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
        }
      }
    {
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 2) = ((MR_Box) (check_hlds__unify_proc__ArgVars_26));
    }
    {
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_12, check_hlds__unify_proc__V_37_37, check_hlds__unify_proc__Context_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_27);
    }
    {
      hlds__make_goal__make_int_const_construction_3_p_0(check_hlds__unify_proc__Index_13, check_hlds__unify_proc__STATE_VARIABLE_N_0_32, &check_hlds__unify_proc__UnifyIndex_Goal_28);
    }
    *check_hlds__unify_proc__STATE_VARIABLE_N_33 = (check_hlds__unify_proc__STATE_VARIABLE_N_0_32 + (MR_Integer) 1);
    {
      check_hlds__unify_proc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyIndex_Goal_28));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__GoalList_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_29, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_27));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_43_43));
    }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_30);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_14, check_hlds__unify_proc__GoalInfo0_30, &check_hlds__unify_proc__GoalInfo_31);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_29, check_hlds__unify_proc__GoalInfo_31, check_hlds__unify_proc__Goal_16);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
  MR_Box * check_hlds__unify_proc__wrapper_arg_4,
  MR_Box check_hlds__unify_proc__wrapper_arg_5,
  MR_Box * check_hlds__unify_proc__wrapper_arg_6)
{
  {
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
    MR_Word check_hlds__unify_proc__conv2_Goal_16;
    MR_Integer check_hlds__unify_proc__conv1_STATE_VARIABLE_N_33;
    MR_Word check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_35;

    {
      check_hlds__unify_proc__generate_du_index_case_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__unify_proc__wrapper_arg_1), &check_hlds__unify_proc__conv2_Goal_16, ((MR_Integer) check_hlds__unify_proc__wrapper_arg_3), &check_hlds__unify_proc__conv1_STATE_VARIABLE_N_33, ((MR_Word) check_hlds__unify_proc__wrapper_arg_5), &check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_35);
    }
    *check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv2_Goal_16));
    *check_hlds__unify_proc__wrapper_arg_4 = ((MR_Box) (check_hlds__unify_proc__conv1_STATE_VARIABLE_N_33));
    *check_hlds__unify_proc__wrapper_arg_6 = ((MR_Box) (check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_35));
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_9,
  MR_Word check_hlds__unify_proc__Ctors_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Index_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_21,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_22)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__Disjuncts_16;
    MR_Word check_hlds__unify_proc__GoalInfo0_18;
    MR_Word check_hlds__unify_proc__GoalInfo_19;
    MR_Word check_hlds__unify_proc__Goal_20;
    MR_Word check_hlds__unify_proc__V_23_23;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_25_25;
    MR_Word check_hlds__unify_proc__V_26_26;
    MR_Word check_hlds__unify_proc__V_27_27;
    MR_Word check_hlds__unify_proc__V_29_29;
    MR_Integer check_hlds__unify_proc__V_17_17;
    MR_Box check_hlds__unify_proc__conv4_V_17_17;
    MR_Box check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25;

    {
      check_hlds__unify_proc__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 1) = ((MR_Box) (check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_9));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 4) = ((MR_Box) (check_hlds__unify_proc__X_11));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 5) = ((MR_Box) (check_hlds__unify_proc__Index_12));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 6) = ((MR_Box) (check_hlds__unify_proc__Context_13));
    }
    {
      mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0, check_hlds__unify_proc__V_23_23, check_hlds__unify_proc__Ctors_10, &check_hlds__unify_proc__Disjuncts_16, ((MR_Box) ((MR_Integer) 0)), &check_hlds__unify_proc__conv4_V_17_17, ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Info_0_21)), &check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25);
    }
    check_hlds__unify_proc__V_17_17 = ((MR_Integer) check_hlds__unify_proc__conv4_V_17_17);
    check_hlds__unify_proc__STATE_VARIABLE_Info_25_25 = ((MR_Word) check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25);
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_18);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_18, &check_hlds__unify_proc__GoalInfo_19);
    }
    {
      check_hlds__unify_proc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__Disjuncts_16));
    }
    {
      check_hlds__unify_proc__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_20, 0) = ((MR_Box) (check_hlds__unify_proc__V_26_26));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_20, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_19));
    }
    {
      check_hlds__unify_proc__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 0) = ((MR_Box) (check_hlds__unify_proc__Index_12));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_27_27, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_27_27, 1) = ((MR_Box) (check_hlds__unify_proc__V_29_29));
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_27_27, check_hlds__unify_proc__Goal_20, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_25_25, check_hlds__unify_proc__STATE_VARIABLE_Info_22);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Y_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word check_hlds__unify_proc__CanCompareAsInt_14,
  MR_Word check_hlds__unify_proc__Ctor_15,
  MR_Word * check_hlds__unify_proc__Goal_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_43,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_44)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ExistQTVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__FunctorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__ArgTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 3)));
    MR_Integer check_hlds__unify_proc__FunctorArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 4)));
    MR_Word check_hlds__unify_proc__FunctorConsId_25;
    MR_Word check_hlds__unify_proc__GoalList_35;
    MR_Word check_hlds__unify_proc__GoalInfo0_41;
    MR_Word check_hlds__unify_proc__GoalInfo_42;
    MR_Word check_hlds__unify_proc___Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc___Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 5)));
    MR_Word check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_10, (MR_Integer) 0)));
    MR_String check_hlds__unify_proc__V_46_46;
    MR_Integer check_hlds__unify_proc__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_10, (MR_Integer) 1)));

    check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_45_45)) == (MR_mktag((MR_Integer) 0)));
    if (check_hlds__unify_proc__succeeded)
      {
        check_hlds__unify_proc__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_45_45, (MR_Integer) 0)));
        check_hlds__unify_proc__succeeded = (strcmp(check_hlds__unify_proc__V_46_46, (MR_String) "{}") == 0);
      }
    if (check_hlds__unify_proc__succeeded)
      {
        check_hlds__unify_proc__FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_22));
      }
    else
      {
        check_hlds__unify_proc__FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName_20));
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_22));
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_10));
      }
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__ArgTypes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (check_hlds__unify_proc__succeeded)
      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CanCompareAsInt_14 == (MR_Integer) 1);
    if (check_hlds__unify_proc__succeeded)
      {
        MR_Word check_hlds__unify_proc__RHS_26;
        MR_Word check_hlds__unify_proc__UnifyX_Goal_27;
        MR_Word check_hlds__unify_proc__CastX_28;
        MR_Word check_hlds__unify_proc__CastY_29;
        MR_Word check_hlds__unify_proc__CastXGoal0_30;
        MR_Word check_hlds__unify_proc__CastYGoal0_31;
        MR_Word check_hlds__unify_proc__CastXGoal_32;
        MR_Word check_hlds__unify_proc__CastYGoal_33;
        MR_Word check_hlds__unify_proc__UnifyY_Goal_34;
        MR_Word check_hlds__unify_proc__V_51_51;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_53_53;
        MR_Word check_hlds__unify_proc__V_54_54;
        MR_Word check_hlds__unify_proc__V_61_61;
        MR_Word check_hlds__unify_proc__V_64_64;
        MR_Word check_hlds__unify_proc__V_65_65;
        MR_Word check_hlds__unify_proc__V_66_66;

        {
          check_hlds__unify_proc__RHS_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_26, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_26, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__RHS_26, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_27);
        }
        {
          check_hlds__unify_proc__V_51_51 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
        {
          check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__V_51_51, (MR_String) "CastX", &check_hlds__unify_proc__CastX_28, check_hlds__unify_proc__STATE_VARIABLE_Info_0_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_53_53);
        }
        {
          check_hlds__unify_proc__V_54_54 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
        {
          check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__V_54_54, (MR_String) "CastY", &check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__STATE_VARIABLE_Info_53_53, check_hlds__unify_proc__STATE_VARIABLE_Info_44);
        }
        {
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__X_11, check_hlds__unify_proc__CastX_28, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastXGoal0_30);
        }
        {
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastYGoal0_31);
        }
        {
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastXGoal0_30, &check_hlds__unify_proc__CastXGoal_32);
        }
        {
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastYGoal0_31, &check_hlds__unify_proc__CastYGoal_33);
        }
        {
          check_hlds__unify_proc__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_61_61, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_28));
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__V_61_61, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_34);
        }
        {
          check_hlds__unify_proc__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_34));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_33));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 1) = ((MR_Box) (check_hlds__unify_proc__V_66_66));
        }
        {
          check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_32));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (check_hlds__unify_proc__V_65_65));
        }
        {
          check_hlds__unify_proc__GoalList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_27));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
        }
      }
    else
      {
        MR_Word check_hlds__unify_proc__Vars1_36;
        MR_Word check_hlds__unify_proc__Vars2_37;
        MR_Word check_hlds__unify_proc__RHS1_38;
        MR_Word check_hlds__unify_proc__RHS2_39;
        MR_Word check_hlds__unify_proc__UnifyArgs_Goals_40;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_68_68;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_69_69;
        MR_Word check_hlds__unify_proc__V_77_77;
        MR_Word check_hlds__unify_proc__UnifyX_Goal_78;
        MR_Word check_hlds__unify_proc__UnifyY_Goal_79;
        MR_Word check_hlds__unify_proc__Goal0_88;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_17_89;

        {
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_21, check_hlds__unify_proc__ExistQTVars_18, &check_hlds__unify_proc__Vars1_36, check_hlds__unify_proc__STATE_VARIABLE_Info_0_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_68_68);
        }
        {
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_21, check_hlds__unify_proc__ExistQTVars_18, &check_hlds__unify_proc__Vars2_37, check_hlds__unify_proc__STATE_VARIABLE_Info_68_68, &check_hlds__unify_proc__STATE_VARIABLE_Info_69_69);
        }
        {
          check_hlds__unify_proc__RHS1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 2) = ((MR_Box) (check_hlds__unify_proc__Vars1_36));
        }
        {
          check_hlds__unify_proc__RHS2_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 2) = ((MR_Box) (check_hlds__unify_proc__Vars2_37));
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__RHS1_38, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_78);
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_12, check_hlds__unify_proc__RHS2_39, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_79);
        }
        {
          check_hlds__unify_proc__succeeded = check_hlds__unify_proc__unify_var_lists_2_7_p_0(check_hlds__unify_proc__ArgTypes_21, check_hlds__unify_proc__ExistQTVars_18, check_hlds__unify_proc__Vars1_36, check_hlds__unify_proc__Vars2_37, &check_hlds__unify_proc__Goal0_88, check_hlds__unify_proc__STATE_VARIABLE_Info_69_69, &check_hlds__unify_proc__STATE_VARIABLE_Info_17_89);
        }
        if (check_hlds__unify_proc__succeeded)
          {
            *check_hlds__unify_proc__STATE_VARIABLE_Info_44 = check_hlds__unify_proc__STATE_VARIABLE_Info_17_89;
            check_hlds__unify_proc__UnifyArgs_Goals_40 = check_hlds__unify_proc__Goal0_88;
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.unify_var_lists\'/7", (MR_String) "length mismatch");
              return;
            }
          }
        {
          check_hlds__unify_proc__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_77_77, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_79));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_77_77, 1) = ((MR_Box) (check_hlds__unify_proc__UnifyArgs_Goals_40));
        }
        {
          check_hlds__unify_proc__GoalList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_78));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_77_77));
        }
      }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_41);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_41, &check_hlds__unify_proc__GoalInfo_42);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_35, check_hlds__unify_proc__GoalInfo_42, check_hlds__unify_proc__Goal_16);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
  MR_Box * check_hlds__unify_proc__wrapper_arg_4)
{
  {
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
    MR_Word check_hlds__unify_proc__conv1_Goal_16;
    MR_Word check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_44;

    {
      check_hlds__unify_proc__generate_du_unify_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__unify_proc__wrapper_arg_1), &check_hlds__unify_proc__conv1_Goal_16, ((MR_Word) check_hlds__unify_proc__wrapper_arg_3), &check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_44);
    }
    *check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv1_Goal_16));
    *check_hlds__unify_proc__wrapper_arg_4 = ((MR_Box) (check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_44));
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_9,
  MR_Word check_hlds__unify_proc__Ctors_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Y_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__CanCompareAsInt_16;
    MR_Word check_hlds__unify_proc__Disjuncts_17;
    MR_Word check_hlds__unify_proc__GoalInfo0_18;
    MR_Word check_hlds__unify_proc__GoalInfo_19;
    MR_Word check_hlds__unify_proc__Goal0_20;
    MR_Word check_hlds__unify_proc__Goal_21;
    MR_Word check_hlds__unify_proc__V_24_24;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_25_25;
    MR_Word check_hlds__unify_proc__V_26_26;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_28_28;
    MR_Word check_hlds__unify_proc__V_29_29;
    MR_Word check_hlds__unify_proc__V_31_31;
    MR_Word check_hlds__unify_proc__ModuleInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__Globals_43;
    MR_Word check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
    MR_Box check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_42, &check_hlds__unify_proc__Globals_43);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_43, (MR_Integer) 267, &check_hlds__unify_proc__CanCompareAsInt_16);
    }
    {
      check_hlds__unify_proc__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 1) = ((MR_Box) (check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_9));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 4) = ((MR_Box) (check_hlds__unify_proc__X_11));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 5) = ((MR_Box) (check_hlds__unify_proc__Y_12));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 6) = ((MR_Box) (check_hlds__unify_proc__Context_13));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 7) = ((MR_Box) (check_hlds__unify_proc__CanCompareAsInt_16));
    }
    {
      mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0, check_hlds__unify_proc__V_24_24, check_hlds__unify_proc__Ctors_10, &check_hlds__unify_proc__Disjuncts_17, ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Info_0_22)), &check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25);
    }
    check_hlds__unify_proc__STATE_VARIABLE_Info_25_25 = ((MR_Word) check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25);
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_18);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_18, &check_hlds__unify_proc__GoalInfo_19);
    }
    {
      check_hlds__unify_proc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__Disjuncts_17));
    }
    {
      check_hlds__unify_proc__Goal0_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_20, 0) = ((MR_Box) (check_hlds__unify_proc__V_26_26));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_20, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_19));
    }
    {
      check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Goal0_20, &check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__STATE_VARIABLE_Info_25_25, &check_hlds__unify_proc__STATE_VARIABLE_Info_28_28);
    }
    {
      check_hlds__unify_proc__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_31_31, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_31_31));
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_29_29, check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, check_hlds__unify_proc__STATE_VARIABLE_Info_23);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__EqvType_9,
  MR_Word check_hlds__unify_proc__Res_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Y_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_24,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_25)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__CastX_16;
    MR_Word check_hlds__unify_proc__CastY_17;
    MR_Word check_hlds__unify_proc__CastXGoal_18;
    MR_Word check_hlds__unify_proc__CastYGoal_19;
    MR_Word check_hlds__unify_proc__CompareGoal_20;
    MR_Word check_hlds__unify_proc__GoalInfo0_21;
    MR_Word check_hlds__unify_proc__GoalInfo_22;
    MR_Word check_hlds__unify_proc__Goal_23;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_28_28;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;
    MR_Word check_hlds__unify_proc__V_35_35;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_36_36;
    MR_Word check_hlds__unify_proc__V_37_37;
    MR_Word check_hlds__unify_proc__V_38_38;
    MR_Word check_hlds__unify_proc__V_40_40;
    MR_Word check_hlds__unify_proc__V_41_41;
    MR_Word check_hlds__unify_proc__V_42_42;
    MR_Word check_hlds__unify_proc__V_44_44;
    MR_Word check_hlds__unify_proc__V_46_46;
    MR_Word check_hlds__unify_proc__V_47_47;
    MR_String check_hlds__unify_proc__NumStr_56;
    MR_String check_hlds__unify_proc__Name_57;
    MR_Word check_hlds__unify_proc__VarSet0_65;
    MR_Word check_hlds__unify_proc__VarTypes0_66;
    MR_Word check_hlds__unify_proc__VarSet_67;
    MR_Word check_hlds__unify_proc__VarTypes_68;
    MR_Word check_hlds__unify_proc__V_79_79;
    MR_Word check_hlds__unify_proc__V_80_80;
    MR_Word check_hlds__unify_proc__V_72_72;
    MR_Word check_hlds__unify_proc__V_73_73;
    MR_Word check_hlds__unify_proc__V_77_77;
    MR_Word check_hlds__unify_proc__V_78_78;

    {
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_56);
    }
    {
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_56, &check_hlds__unify_proc__Name_57);
    }
    check_hlds__unify_proc__VarSet0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
    check_hlds__unify_proc__VarTypes0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
    check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_57, &check_hlds__unify_proc__CastX_16, check_hlds__unify_proc__VarSet0_65, &check_hlds__unify_proc__VarSet_67);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__CastX_16, check_hlds__unify_proc__EqvType_9, check_hlds__unify_proc__VarTypes0_66, &check_hlds__unify_proc__VarTypes_68);
    }
    check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
    check_hlds__unify_proc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
    check_hlds__unify_proc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
    check_hlds__unify_proc__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
    {
      check_hlds__unify_proc__STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_67));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_68));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (check_hlds__unify_proc__V_79_79));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
    }
    {
      check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__EqvType_9, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &check_hlds__unify_proc__CastY_17, check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
    }
    {
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__X_11, check_hlds__unify_proc__CastX_16, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastXGoal_18);
    }
    {
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__CastY_17, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastYGoal_19);
    }
    {
      check_hlds__unify_proc__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_38_38, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_17));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_16));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) (check_hlds__unify_proc__V_38_38));
    }
    {
      check_hlds__unify_proc__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 0) = ((MR_Box) (check_hlds__unify_proc__Res_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
    }
    {
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "compare", check_hlds__unify_proc__V_35_35, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CompareGoal_20, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, &check_hlds__unify_proc__STATE_VARIABLE_Info_36_36);
    }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_21);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_21, &check_hlds__unify_proc__GoalInfo_22);
    }
    {
      check_hlds__unify_proc__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 0) = ((MR_Box) (check_hlds__unify_proc__CompareGoal_20));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_19));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 1) = ((MR_Box) (check_hlds__unify_proc__V_42_42));
    }
    {
      check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_18));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__V_40_40, check_hlds__unify_proc__GoalInfo_22, &check_hlds__unify_proc__Goal_23);
    }
    {
      check_hlds__unify_proc__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__V_47_47));
    }
    {
      check_hlds__unify_proc__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 0) = ((MR_Box) (check_hlds__unify_proc__Res_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 1) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_44_44, check_hlds__unify_proc__Goal_23, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_36_36, check_hlds__unify_proc__STATE_VARIABLE_Info_25);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__Res_2,
  MR_Word check_hlds__unify_proc__X_3,
  MR_Word check_hlds__unify_proc__Y_4,
  MR_Word check_hlds__unify_proc__Context_5,
  MR_Word * check_hlds__unify_proc__Clause_6,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_8)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    if (((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_compare_proc_body\'/8", (MR_String) "trying to create compare proc for abstract noncanonical type");
          return;
        }
      }
    else
      {
        MR_Word check_hlds__unify_proc__MaybeCompare_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__ArgVars_29;
        MR_Word check_hlds__unify_proc__Goal_36;
        MR_Word check_hlds__unify_proc__V_39_39;
        MR_Word check_hlds__unify_proc__V_40_40;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_47_47;
        MR_Word check_hlds__unify_proc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));

        {
          check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__Y_4));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__X_3));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
        }
        {
          check_hlds__unify_proc__ArgVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_29, 0) = ((MR_Box) (check_hlds__unify_proc__Res_2));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_39_39));
        }
        if ((check_hlds__unify_proc__MaybeCompare_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_non_canonical_type", check_hlds__unify_proc__ArgVars_29, check_hlds__unify_proc__Context_5, &check_hlds__unify_proc__Goal_36, check_hlds__unify_proc__STATE_VARIABLE_Info_0_7, &check_hlds__unify_proc__STATE_VARIABLE_Info_47_47);
            }
          }
        else
          {
            MR_Word check_hlds__unify_proc__ComparePredName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeCompare_22, (MR_Integer) 0)));
            MR_Word check_hlds__unify_proc__PredId_31;
            MR_Integer check_hlds__unify_proc__ModeId_32;
            MR_Word check_hlds__unify_proc__Call_33;
            MR_Word check_hlds__unify_proc__GoalInfo_34;
            MR_Word check_hlds__unify_proc__Goal0_35;
            MR_Word check_hlds__unify_proc__V_46_46;

            {
              check_hlds__unify_proc__PredId_31 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
            {
              check_hlds__unify_proc__ModeId_32 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
            {
              check_hlds__unify_proc__Call_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_31));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_32));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 2) = ((MR_Box) (check_hlds__unify_proc__ArgVars_29));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 3) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 5) = ((MR_Box) (check_hlds__unify_proc__ComparePredName_30));
            }
            {
              hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_5, &check_hlds__unify_proc__GoalInfo_34);
            }
            {
              check_hlds__unify_proc__Goal0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_35, 0) = ((MR_Box) (check_hlds__unify_proc__Call_33));
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_35, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_34));
            }
            {
              check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Res_2));
            }
            {
              check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_5, check_hlds__unify_proc__X_3, check_hlds__unify_proc__Y_4, check_hlds__unify_proc__V_46_46, check_hlds__unify_proc__Goal0_35, &check_hlds__unify_proc__Goal_36, check_hlds__unify_proc__STATE_VARIABLE_Info_0_7, &check_hlds__unify_proc__STATE_VARIABLE_Info_47_47);
            }
          }
        {
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_29, check_hlds__unify_proc__Goal_36, check_hlds__unify_proc__Context_5, check_hlds__unify_proc__Clause_6, check_hlds__unify_proc__STATE_VARIABLE_Info_47_47, check_hlds__unify_proc__STATE_VARIABLE_Info_8);
        }
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(
  MR_Word check_hlds__unify_proc__Res_8,
  MR_Word check_hlds__unify_proc__X_9,
  MR_Word check_hlds__unify_proc__Y_10,
  MR_Word check_hlds__unify_proc__Context_11,
  MR_Word * check_hlds__unify_proc__Clause_12,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_17)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ArgVars_14;
    MR_Word check_hlds__unify_proc__Goal_15;
    MR_Word check_hlds__unify_proc__V_18_18;
    MR_Word check_hlds__unify_proc__V_19_19;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_22_22;

    {
      check_hlds__unify_proc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_18_18, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_18_18, 1) = ((MR_Box) (check_hlds__unify_proc__V_19_19));
    }
    {
      check_hlds__unify_proc__ArgVars_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 1) = ((MR_Box) (check_hlds__unify_proc__V_18_18));
    }
    {
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_solver_type", check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__Goal_15, check_hlds__unify_proc__STATE_VARIABLE_Info_0_16, &check_hlds__unify_proc__STATE_VARIABLE_Info_22_22);
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__Goal_15, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_22_22, check_hlds__unify_proc__STATE_VARIABLE_Info_17);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(
  MR_Word check_hlds__unify_proc__X_7,
  MR_Word check_hlds__unify_proc__Y_8,
  MR_Word check_hlds__unify_proc__Context_9,
  MR_Word * check_hlds__unify_proc__Clause_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ArgVars_12;
    MR_Word check_hlds__unify_proc__Goal_13;
    MR_Word check_hlds__unify_proc__V_16_16;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_19_19;

    {
      check_hlds__unify_proc__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_16_16, 0) = ((MR_Box) (check_hlds__unify_proc__Y_8));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__ArgVars_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_12, 0) = ((MR_Box) (check_hlds__unify_proc__X_7));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_12, 1) = ((MR_Box) (check_hlds__unify_proc__V_16_16));
    }
    {
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_unify_solver_type", check_hlds__unify_proc__ArgVars_12, check_hlds__unify_proc__Context_9, &check_hlds__unify_proc__Goal_13, check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, &check_hlds__unify_proc__STATE_VARIABLE_Info_19_19);
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_12, check_hlds__unify_proc__Goal_13, check_hlds__unify_proc__Context_9, check_hlds__unify_proc__Clause_10, check_hlds__unify_proc__STATE_VARIABLE_Info_19_19, check_hlds__unify_proc__STATE_VARIABLE_Info_15);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(
  MR_Word check_hlds__unify_proc__Res_8,
  MR_Word check_hlds__unify_proc__X_9,
  MR_Word check_hlds__unify_proc__Y_10,
  MR_Word check_hlds__unify_proc__Context_11,
  MR_Word * check_hlds__unify_proc__Clause_12,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_15,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_16)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__Goal_14;
    MR_Word check_hlds__unify_proc__V_17_17;
    MR_Word check_hlds__unify_proc__V_19_19;
    MR_Word check_hlds__unify_proc__V_20_20;
    MR_Word check_hlds__unify_proc__Goal0_25;
    MR_Word check_hlds__unify_proc__V_26_26;
    MR_Word check_hlds__unify_proc__SymName_29;
    MR_Word check_hlds__unify_proc__V_31_31;
    MR_Word check_hlds__unify_proc__V_32_32;
    MR_Word check_hlds__unify_proc__Builtin_34;
    MR_Word check_hlds__unify_proc__V_35_35;

    {
      check_hlds__unify_proc__Builtin_34 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__unify_proc__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_34));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      check_hlds__unify_proc__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 0) = ((MR_Box) (check_hlds__unify_proc__V_35_35));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__unify_proc__V_32_32 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__unify_proc__SymName_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_29, 0) = ((MR_Box) (check_hlds__unify_proc__V_32_32));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_29, 1) = ((MR_Box) ((MR_String) "="));
    }
    {
      check_hlds__unify_proc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_29));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 3) = ((MR_Box) (check_hlds__unify_proc__V_31_31));
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_8, check_hlds__unify_proc__V_26_26, &check_hlds__unify_proc__Goal0_25);
    }
    {
      hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Goal0_25, &check_hlds__unify_proc__Goal_14);
    }
    {
      check_hlds__unify_proc__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_20_20, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 1) = ((MR_Box) (check_hlds__unify_proc__V_20_20));
    }
    {
      check_hlds__unify_proc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_17_17, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_17_17, 1) = ((MR_Box) (check_hlds__unify_proc__V_19_19));
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_17_17, check_hlds__unify_proc__Goal_14, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_0_15, check_hlds__unify_proc__STATE_VARIABLE_Info_16);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(
  MR_Word check_hlds__unify_proc__Res_8,
  MR_Word check_hlds__unify_proc__X_9,
  MR_Word check_hlds__unify_proc__Y_10,
  MR_Word check_hlds__unify_proc__Context_11,
  MR_Word * check_hlds__unify_proc__Clause_12,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_24)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__IntType_14;
    MR_Word check_hlds__unify_proc__CastX_15;
    MR_Word check_hlds__unify_proc__CastY_16;
    MR_Word check_hlds__unify_proc__CastXGoal_17;
    MR_Word check_hlds__unify_proc__CastYGoal_18;
    MR_Word check_hlds__unify_proc__CompareGoal_19;
    MR_Word check_hlds__unify_proc__GoalInfo0_20;
    MR_Word check_hlds__unify_proc__GoalInfo_21;
    MR_Word check_hlds__unify_proc__Goal_22;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_27_27;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_30_30;
    MR_Word check_hlds__unify_proc__V_34_34;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_35_35;
    MR_Word check_hlds__unify_proc__V_36_36;
    MR_Word check_hlds__unify_proc__V_37_37;
    MR_Word check_hlds__unify_proc__V_39_39;
    MR_Word check_hlds__unify_proc__V_40_40;
    MR_Word check_hlds__unify_proc__V_41_41;
    MR_Word check_hlds__unify_proc__V_43_43;
    MR_Word check_hlds__unify_proc__V_45_45;
    MR_Word check_hlds__unify_proc__V_46_46;
    MR_String check_hlds__unify_proc__NumStr_55;
    MR_String check_hlds__unify_proc__Name_56;
    MR_Word check_hlds__unify_proc__VarSet0_64;
    MR_Word check_hlds__unify_proc__VarTypes0_65;
    MR_Word check_hlds__unify_proc__VarSet_66;
    MR_Word check_hlds__unify_proc__VarTypes_67;
    MR_Word check_hlds__unify_proc__V_78_78;
    MR_Word check_hlds__unify_proc__V_79_79;
    MR_Word check_hlds__unify_proc__V_71_71;
    MR_Word check_hlds__unify_proc__V_72_72;
    MR_Word check_hlds__unify_proc__V_76_76;
    MR_Word check_hlds__unify_proc__V_77_77;

    {
      check_hlds__unify_proc__IntType_14 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    {
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_55);
    }
    {
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_55, &check_hlds__unify_proc__Name_56);
    }
    check_hlds__unify_proc__VarSet0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
    check_hlds__unify_proc__VarTypes0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
    check_hlds__unify_proc__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_56, &check_hlds__unify_proc__CastX_15, check_hlds__unify_proc__VarSet0_64, &check_hlds__unify_proc__VarSet_66);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__CastX_15, check_hlds__unify_proc__IntType_14, check_hlds__unify_proc__VarTypes0_65, &check_hlds__unify_proc__VarTypes_67);
    }
    check_hlds__unify_proc__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
    check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
    check_hlds__unify_proc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
    check_hlds__unify_proc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
    {
      check_hlds__unify_proc__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_66));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_67));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__unify_proc__V_78_78));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (check_hlds__unify_proc__V_79_79));
    }
    {
      check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__IntType_14, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &check_hlds__unify_proc__CastY_16, check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, &check_hlds__unify_proc__STATE_VARIABLE_Info_30_30);
    }
    {
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__X_9, check_hlds__unify_proc__CastX_15, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastXGoal_17);
    }
    {
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__Y_10, check_hlds__unify_proc__CastY_16, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastYGoal_18);
    }
    {
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_16));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_15));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 1) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
    }
    {
      check_hlds__unify_proc__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_34_34, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_34_34, 1) = ((MR_Box) (check_hlds__unify_proc__V_36_36));
    }
    {
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_int", check_hlds__unify_proc__V_34_34, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CompareGoal_19, check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_35_35);
    }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_20);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__GoalInfo0_20, &check_hlds__unify_proc__GoalInfo_21);
    }
    {
      check_hlds__unify_proc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 0) = ((MR_Box) (check_hlds__unify_proc__CompareGoal_19));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_18));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
    }
    {
      check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_17));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__V_39_39, check_hlds__unify_proc__GoalInfo_21, &check_hlds__unify_proc__Goal_22);
    }
    {
      check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 1) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
    }
    {
      check_hlds__unify_proc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (check_hlds__unify_proc__V_45_45));
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_43_43, check_hlds__unify_proc__Goal_22, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_35_35, check_hlds__unify_proc__STATE_VARIABLE_Info_24);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_ctors_lexically_3_p_0(
  MR_Word check_hlds__unify_proc__A_4,
  MR_Word check_hlds__unify_proc__B_5,
  MR_Word * check_hlds__unify_proc__Res_6)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
    MR_Integer check_hlds__unify_proc__ArityA_7;
    MR_Integer check_hlds__unify_proc__ArityB_8;
    MR_Word check_hlds__unify_proc__ArityRes_9;
    MR_Word check_hlds__unify_proc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__V_13_13;
    MR_Word check_hlds__unify_proc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 2)));
    MR_Integer check_hlds__unify_proc__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 4)));
    MR_Word check_hlds__unify_proc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 5)));
    MR_Word check_hlds__unify_proc__V_21_21;
    MR_Word check_hlds__unify_proc__V_22_22;
    MR_Word check_hlds__unify_proc__V_23_23;
    MR_Integer check_hlds__unify_proc__V_24_24;
    MR_Word check_hlds__unify_proc__V_25_25;

    {
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_36_36, check_hlds__unify_proc__V_12_12, &check_hlds__unify_proc__ArityA_7);
    }
    check_hlds__unify_proc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 0)));
    check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 1)));
    check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 2)));
    check_hlds__unify_proc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 3)));
    check_hlds__unify_proc__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 4)));
    check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 5)));
    {
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_36_36, check_hlds__unify_proc__V_13_13, &check_hlds__unify_proc__ArityB_8);
    }
    {
      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__unify_proc__ArityRes_9, check_hlds__unify_proc__ArityA_7, check_hlds__unify_proc__ArityB_8);
    }
    switch (check_hlds__unify_proc__ArityRes_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *check_hlds__unify_proc__Res_6 = check_hlds__unify_proc__ArityRes_9;
        break;
      case (MR_Integer) 0:
        {
          MR_String check_hlds__unify_proc__NameA_10;
          MR_String check_hlds__unify_proc__NameB_11;
          MR_Word check_hlds__unify_proc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 2)));
          MR_Word check_hlds__unify_proc__V_15_15;
          MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 0)));
          MR_Word check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 1)));
          MR_Word check_hlds__unify_proc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 3)));
          MR_Integer check_hlds__unify_proc__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 4)));
          MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 5)));
          MR_Word check_hlds__unify_proc__V_31_31;
          MR_Word check_hlds__unify_proc__V_32_32;
          MR_Word check_hlds__unify_proc__V_33_33;
          MR_Integer check_hlds__unify_proc__V_34_34;
          MR_Word check_hlds__unify_proc__V_35_35;

          {
            check_hlds__unify_proc__NameA_10 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__unify_proc__V_14_14);
          }
          check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 0)));
          check_hlds__unify_proc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 1)));
          check_hlds__unify_proc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 2)));
          check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 3)));
          check_hlds__unify_proc__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 4)));
          check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 5)));
          {
            check_hlds__unify_proc__NameB_11 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__unify_proc__V_15_15);
          }
          {
            mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__unify_proc__Res_6, check_hlds__unify_proc__NameA_10, check_hlds__unify_proc__NameB_11);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_9_p_0(
  MR_Word check_hlds__unify_proc__Type_10,
  MR_Word check_hlds__unify_proc__TypeBody_11,
  MR_Word check_hlds__unify_proc__Res_12,
  MR_Word check_hlds__unify_proc__X_13,
  MR_Word check_hlds__unify_proc__Y_14,
  MR_Word check_hlds__unify_proc__Context_15,
  MR_Word * check_hlds__unify_proc__Clause_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__TypeCtor_19;
    MR_Word check_hlds__unify_proc__V_43_43;

    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_10, &check_hlds__unify_proc__TypeCtor_19);
    }
    {
      check_hlds__unify_proc__V_43_43 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__unify_proc__TypeCtor_19);
    }
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_43_43 == (MR_Integer) 0);
    if (check_hlds__unify_proc__succeeded)
      {
        check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
      }
    else
      {
        MR_Word check_hlds__unify_proc__UserEqComp_20;

        {
          check_hlds__unify_proc__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__TypeBody_11, &check_hlds__unify_proc__UserEqComp_20);
        }
        if (check_hlds__unify_proc__succeeded)
          {
            check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(check_hlds__unify_proc__UserEqComp_20, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
          }
        else
          switch (MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__unify_proc__V_51_51;

                {
                  check_hlds__unify_proc__V_51_51 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                }
                {
                  check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(check_hlds__unify_proc__V_51_51, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__unify_proc__Ctors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 0)));
                MR_Word check_hlds__unify_proc__DuTypeKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 3)));
                MR_Word check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 1)));
                MR_Word check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 2)));
                MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 4)));
                MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 5)));
                MR_Word check_hlds__unify_proc__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 6)))) & (MR_Integer) 1);
                MR_Word check_hlds__unify_proc__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word check_hlds__unify_proc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 7)));

                switch (MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_24)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(check_hlds__unify_proc__DuTypeKind_24)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word check_hlds__unify_proc__ArgType_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 1)));
                      MR_Word check_hlds__unify_proc__IsDummyType_34;
                      MR_Word check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 0)));
                      MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 2)));

                      {
                        check_hlds__unify_proc__IsDummyType_34 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__ArgType_32);
                      }
                      switch (check_hlds__unify_proc__IsDummyType_34) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                          }
                          break;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__unify_proc__EqvType_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 0)));
                MR_Word check_hlds__unify_proc__IsDummyType_60;

                {
                  check_hlds__unify_proc__IsDummyType_60 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__EqvType_35);
                }
                switch (check_hlds__unify_proc__IsDummyType_60) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(check_hlds__unify_proc__EqvType_35, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      check_hlds__unify_proc__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(check_hlds__unify_proc__ModuleInfo_18);
                    }
                    if (check_hlds__unify_proc__succeeded)
                      {
                        MR_Word check_hlds__unify_proc__TypeCategory_40;
                        MR_Word check_hlds__unify_proc__ArgVars_74;
                        MR_String check_hlds__unify_proc__Name_75;
                        MR_Word check_hlds__unify_proc__CompareGoal_79;
                        MR_Word check_hlds__unify_proc__V_80_80;
                        MR_Word check_hlds__unify_proc__V_81_81;
                        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_34_90;

                        {
                          check_hlds__unify_proc__TypeCategory_40 = check_hlds__type_util__classify_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__Type_10);
                        }
                        {
                          check_hlds__unify_proc__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          check_hlds__unify_proc__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_80_80, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_80_80, 1) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
                        }
                        {
                          check_hlds__unify_proc__ArgVars_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_74, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_74, 1) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
                        }
                        switch (MR_tag((MR_Word) check_hlds__unify_proc__TypeCategory_40)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(check_hlds__unify_proc__TypeCategory_40)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                check_hlds__unify_proc__Name_75 = (MR_String) "builtin_compare_pred";
                                break;
                              case (MR_Integer) 1:
                              case (MR_Integer) 2:
                              case (MR_Integer) 3:
                              case (MR_Integer) 4:
                                {
                                  {
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_compare\'/8", (MR_String) "bad ctor category");
                                    return;
                                  }
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word check_hlds__unify_proc__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeCategory_40, (MR_Integer) 0)));

                              check_hlds__unify_proc__Name_75 = ((&check_hlds__unify_proc_vector_common_7[4 + check_hlds__unify_proc__V_92_92]))->check_hlds__unify_proc__vector_common_type_7_0__vct_7_f_0;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_compare\'/8", (MR_String) "bad ctor category");
                                return;
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_compare\'/8", (MR_String) "bad ctor category");
                                return;
                              }
                            }
                            break;
                        }
                        {
                          check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__Name_75, check_hlds__unify_proc__ArgVars_74, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__CompareGoal_79, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, &check_hlds__unify_proc__STATE_VARIABLE_Info_34_90);
                        }
                        {
                          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_74, check_hlds__unify_proc__CompareGoal_79, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_34_90, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/9", (MR_String) "trying to create compare proc for abstract type");
                          return;
                        }
                      }
                  }
                  break;
              }
              break;
          }
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__Type_9,
  MR_Word check_hlds__unify_proc__TypeBody_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Index_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_37,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_38)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__V_17_17;

    {
      check_hlds__unify_proc__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__TypeBody_10, &check_hlds__unify_proc__V_17_17);
    }
    if (check_hlds__unify_proc__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for non-canonical type");
          return;
        }
      }
    else
      switch (MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for a foreign type");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__unify_proc__Ctors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)));
            MR_Word check_hlds__unify_proc__DuTypeKind_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 3)));
            MR_Word check_hlds__unify_proc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 1)));
            MR_Word check_hlds__unify_proc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 2)));
            MR_Word check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 4)));
            MR_Word check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 5)));
            MR_Word check_hlds__unify_proc__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
            MR_Word check_hlds__unify_proc__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 7)));

            switch (MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_21)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__unify_proc__DuTypeKind_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for enum type");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for dummy type");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word check_hlds__unify_proc__TypeCtor_31;

                      {
                        parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_9, &check_hlds__unify_proc__TypeCtor_31);
                      }
                      {
                        check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_31, check_hlds__unify_proc__Ctors_18, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Index_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, check_hlds__unify_proc__STATE_VARIABLE_Info_38);
                      }
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for foreign enum type");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for notag type");
                    return;
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for eqv type");
              return;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for a solver type");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for abstract type");
                  return;
                }
              }
              break;
          }
          break;
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(
  MR_Word check_hlds__unify_proc__EqvType_8,
  MR_Word check_hlds__unify_proc__X_9,
  MR_Word check_hlds__unify_proc__Y_10,
  MR_Word check_hlds__unify_proc__Context_11,
  MR_Word * check_hlds__unify_proc__Clause_12,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__CastX_14;
    MR_Word check_hlds__unify_proc__CastY_15;
    MR_Word check_hlds__unify_proc__CastXGoal_16;
    MR_Word check_hlds__unify_proc__CastYGoal_17;
    MR_Word check_hlds__unify_proc__UnifyGoal_18;
    MR_Word check_hlds__unify_proc__GoalInfo0_19;
    MR_Word check_hlds__unify_proc__GoalInfo_20;
    MR_Word check_hlds__unify_proc__Goal_21;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_26_26;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_29_29;
    MR_Word check_hlds__unify_proc__V_32_32;
    MR_Word check_hlds__unify_proc__V_35_35;
    MR_Word check_hlds__unify_proc__V_36_36;
    MR_Word check_hlds__unify_proc__V_37_37;
    MR_Word check_hlds__unify_proc__V_39_39;
    MR_Word check_hlds__unify_proc__V_41_41;
    MR_String check_hlds__unify_proc__NumStr_50;
    MR_String check_hlds__unify_proc__Name_51;
    MR_Word check_hlds__unify_proc__VarSet0_59;
    MR_Word check_hlds__unify_proc__VarTypes0_60;
    MR_Word check_hlds__unify_proc__VarSet_61;
    MR_Word check_hlds__unify_proc__VarTypes_62;
    MR_Word check_hlds__unify_proc__V_73_73;
    MR_Word check_hlds__unify_proc__V_74_74;
    MR_Word check_hlds__unify_proc__V_66_66;
    MR_Word check_hlds__unify_proc__V_67_67;
    MR_Word check_hlds__unify_proc__V_71_71;
    MR_Word check_hlds__unify_proc__V_72_72;

    {
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_50);
    }
    {
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_50, &check_hlds__unify_proc__Name_51);
    }
    check_hlds__unify_proc__VarSet0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
    check_hlds__unify_proc__VarTypes0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
    check_hlds__unify_proc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
    check_hlds__unify_proc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_51, &check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__VarSet0_59, &check_hlds__unify_proc__VarSet_61);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__EqvType_8, check_hlds__unify_proc__VarTypes0_60, &check_hlds__unify_proc__VarTypes_62);
    }
    check_hlds__unify_proc__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
    check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
    check_hlds__unify_proc__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
    {
      check_hlds__unify_proc__STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_61));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_62));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (check_hlds__unify_proc__V_73_73));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 3) = ((MR_Box) (check_hlds__unify_proc__V_74_74));
    }
    {
      check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__EqvType_8, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &check_hlds__unify_proc__CastY_15, check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, &check_hlds__unify_proc__STATE_VARIABLE_Info_29_29);
    }
    {
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__X_9, check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastXGoal_16);
    }
    {
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__Y_10, check_hlds__unify_proc__CastY_15, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastYGoal_17);
    }
    {
      check_hlds__unify_proc__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_15));
    }
    {
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__V_32_32, check_hlds__unify_proc__Context_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyGoal_18);
    }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_19);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__GoalInfo0_19, &check_hlds__unify_proc__GoalInfo_20);
    }
    {
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyGoal_18));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_17));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 1) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
    }
    {
      check_hlds__unify_proc__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_16));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_36_36));
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__V_35_35, check_hlds__unify_proc__GoalInfo_20, &check_hlds__unify_proc__Goal_21);
    }
    {
      check_hlds__unify_proc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_39_39, check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_29_29, check_hlds__unify_proc__STATE_VARIABLE_Info_23);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(
  MR_Word check_hlds__unify_proc__UserEqCompare_1,
  MR_Word check_hlds__unify_proc__X_2,
  MR_Word check_hlds__unify_proc__Y_3,
  MR_Word check_hlds__unify_proc__Context_4,
  MR_Word * check_hlds__unify_proc__Clause_5,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    if (((MR_tag((MR_Word) check_hlds__unify_proc__UserEqCompare_1)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_unify_proc_body\'/7", (MR_String) "trying to create unify proc for abstract noncanonical type");
          return;
        }
      }
    else
      {
        MR_Word check_hlds__unify_proc__MaybeUnify_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UserEqCompare_1, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__MaybeCompare_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UserEqCompare_1, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__Goal0_33;
        MR_Word check_hlds__unify_proc__Goal_38;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_45_45;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_67_67;
        MR_Word check_hlds__unify_proc__V_68_68;
        MR_Word check_hlds__unify_proc__V_70_70;

        if ((check_hlds__unify_proc__MaybeUnify_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((check_hlds__unify_proc__MaybeCompare_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_unify_proc_body\'/7", (MR_String) "MaybeCompare = no");
                return;
              }
            }
          else
            {
              MR_Word check_hlds__unify_proc__ComparePredName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeCompare_27, (MR_Integer) 0)));
              MR_Word check_hlds__unify_proc__ResultVar_35;
              MR_Word check_hlds__unify_proc__CallGoal_36;
              MR_Word check_hlds__unify_proc__UnifyGoal_37;
              MR_Word check_hlds__unify_proc__V_44_44;
              MR_Word check_hlds__unify_proc__V_46_46;
              MR_Word check_hlds__unify_proc__V_47_47;
              MR_Word check_hlds__unify_proc__V_48_48;
              MR_Word check_hlds__unify_proc__V_52_52;
              MR_Word check_hlds__unify_proc__V_56_56;
              MR_Word check_hlds__unify_proc__V_58_58;
              MR_Word check_hlds__unify_proc__V_59_59;
              MR_Word check_hlds__unify_proc__PredId_72;
              MR_Integer check_hlds__unify_proc__ModeId_73;
              MR_Word check_hlds__unify_proc__Call_74;
              MR_Word check_hlds__unify_proc__GoalInfo_75;
              MR_Word check_hlds__unify_proc__V_85_85;
              MR_Word check_hlds__unify_proc__SymName_89;
              MR_Word check_hlds__unify_proc__V_91_91;
              MR_Word check_hlds__unify_proc__V_92_92;
              MR_Word check_hlds__unify_proc__Builtin_94;
              MR_Word check_hlds__unify_proc__V_95_95;

              {
                check_hlds__unify_proc__V_44_44 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
              }
              {
                check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__V_44_44, &check_hlds__unify_proc__ResultVar_35, check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, &check_hlds__unify_proc__STATE_VARIABLE_Info_45_45);
              }
              {
                check_hlds__unify_proc__PredId_72 = hlds__hlds_pred__invalid_pred_id_0_f_0();
              }
              {
                check_hlds__unify_proc__ModeId_73 = hlds__hlds_pred__invalid_proc_id_0_f_0();
              }
              {
                check_hlds__unify_proc__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_48_48, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__unify_proc__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 1) = ((MR_Box) (check_hlds__unify_proc__V_48_48));
              }
              {
                check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__ResultVar_35));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__V_47_47));
              }
              {
                check_hlds__unify_proc__Call_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_72));
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_73));
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 2) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 3) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 5) = ((MR_Box) (check_hlds__unify_proc__ComparePredName_34));
              }
              {
                hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_4, &check_hlds__unify_proc__GoalInfo_75);
              }
              {
                check_hlds__unify_proc__CallGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CallGoal_36, 0) = ((MR_Box) (check_hlds__unify_proc__Call_74));
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CallGoal_36, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_75));
              }
              {
                check_hlds__unify_proc__Builtin_94 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
              {
                check_hlds__unify_proc__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_95_95, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_94));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_95_95, 1) = ((MR_Box) ((MR_String) "comparison_result"));
              }
              {
                check_hlds__unify_proc__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_91_91, 0) = ((MR_Box) (check_hlds__unify_proc__V_95_95));
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_91_91, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                check_hlds__unify_proc__V_92_92 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
              {
                check_hlds__unify_proc__SymName_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_89, 0) = ((MR_Box) (check_hlds__unify_proc__V_92_92));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_89, 1) = ((MR_Box) ((MR_String) "="));
              }
              {
                check_hlds__unify_proc__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_89));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 3) = ((MR_Box) (check_hlds__unify_proc__V_91_91));
              }
              {
                check_hlds__unify_proc__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 0) = ((MR_Box) (check_hlds__unify_proc__V_85_85));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__ResultVar_35, check_hlds__unify_proc__V_52_52, check_hlds__unify_proc__Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyGoal_37);
              }
              {
                check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyGoal_37));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (check_hlds__unify_proc__CallGoal_36));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (check_hlds__unify_proc__V_59_59));
              }
              {
                check_hlds__unify_proc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 2) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
              }
              {
                check_hlds__unify_proc__Goal0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 0) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_75));
              }
            }
        else
          {
            MR_Word check_hlds__unify_proc__UnifyPredName_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeUnify_26, (MR_Integer) 0)));
            MR_Word check_hlds__unify_proc__PredId_29;
            MR_Integer check_hlds__unify_proc__ModeId_30;
            MR_Word check_hlds__unify_proc__Call_31;
            MR_Word check_hlds__unify_proc__GoalInfo_32;
            MR_Word check_hlds__unify_proc__V_61_61;
            MR_Word check_hlds__unify_proc__V_62_62;

            {
              check_hlds__unify_proc__PredId_29 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
            {
              check_hlds__unify_proc__ModeId_30 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
            {
              check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__unify_proc__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 1) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
            }
            {
              check_hlds__unify_proc__Call_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_29));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_30));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 2) = ((MR_Box) (check_hlds__unify_proc__V_61_61));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 3) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 5) = ((MR_Box) (check_hlds__unify_proc__UnifyPredName_28));
            }
            {
              hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_4, &check_hlds__unify_proc__GoalInfo_32);
            }
            {
              check_hlds__unify_proc__Goal0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 0) = ((MR_Box) (check_hlds__unify_proc__Call_31));
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_32));
            }
            check_hlds__unify_proc__STATE_VARIABLE_Info_45_45 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
          }
        {
          check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_4, check_hlds__unify_proc__X_2, check_hlds__unify_proc__Y_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Goal0_33, &check_hlds__unify_proc__Goal_38, check_hlds__unify_proc__STATE_VARIABLE_Info_45_45, &check_hlds__unify_proc__STATE_VARIABLE_Info_67_67);
        }
        {
          check_hlds__unify_proc__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 1) = ((MR_Box) (check_hlds__unify_proc__V_70_70));
        }
        {
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_68_68, check_hlds__unify_proc__Goal_38, check_hlds__unify_proc__Context_4, check_hlds__unify_proc__Clause_5, check_hlds__unify_proc__STATE_VARIABLE_Info_67_67, check_hlds__unify_proc__STATE_VARIABLE_Info_7);
        }
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_builtin_unify_7_p_0(
  MR_Word check_hlds__unify_proc__CtorCat_8,
  MR_Word check_hlds__unify_proc__X_9,
  MR_Word check_hlds__unify_proc__Y_10,
  MR_Word check_hlds__unify_proc__Context_11,
  MR_Word * check_hlds__unify_proc__Clause_12,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ArgVars_14;
    MR_String check_hlds__unify_proc__Name_15;
    MR_Word check_hlds__unify_proc__UnifyGoal_19;
    MR_Word check_hlds__unify_proc__V_22_22;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;

    {
      check_hlds__unify_proc__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_22_22, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__ArgVars_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 1) = ((MR_Box) (check_hlds__unify_proc__V_22_22));
    }
    switch (MR_tag((MR_Word) check_hlds__unify_proc__CtorCat_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__unify_proc__CtorCat_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_pred";
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_unify\'/7", (MR_String) "bad ctor category");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__CtorCat_8, (MR_Integer) 0)));

          check_hlds__unify_proc__Name_15 = ((&check_hlds__unify_proc_vector_common_7[0 + check_hlds__unify_proc__V_33_33]))->check_hlds__unify_proc__vector_common_type_7_0__vct_7_f_0;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_unify\'/7", (MR_String) "bad ctor category");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_unify\'/7", (MR_String) "bad ctor category");
            return;
          }
        }
        break;
    }
    {
      check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__Name_15, check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__UnifyGoal_19, check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__UnifyGoal_19, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, check_hlds__unify_proc__STATE_VARIABLE_Info_21);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__Type_9,
  MR_Word check_hlds__unify_proc__TypeBody_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Y_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__TypeCtor_17;
    MR_Word check_hlds__unify_proc__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__V_42_42;

    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_9, &check_hlds__unify_proc__TypeCtor_17);
    }
    {
      check_hlds__unify_proc__V_42_42 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__unify_proc__TypeCtor_17);
    }
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_42_42 == (MR_Integer) 0);
    if (check_hlds__unify_proc__succeeded)
      {
        MR_Word check_hlds__unify_proc__Goal_18;
        MR_Word check_hlds__unify_proc__V_43_43;
        MR_Word check_hlds__unify_proc__V_45_45;

        {
          check_hlds__unify_proc__Goal_18 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
        }
        {
          check_hlds__unify_proc__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (check_hlds__unify_proc__V_45_45));
        }
        {
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_43_43, check_hlds__unify_proc__Goal_18, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
        }
      }
    else
      {
        MR_Word check_hlds__unify_proc__UserEqComp_19;

        {
          check_hlds__unify_proc__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__TypeBody_10, &check_hlds__unify_proc__UserEqComp_19);
        }
        if (check_hlds__unify_proc__succeeded)
          {
            check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(check_hlds__unify_proc__UserEqComp_19, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
          }
        else
          switch (MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__unify_proc__V_52_52;

                {
                  check_hlds__unify_proc__V_52_52 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                }
                {
                  check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(check_hlds__unify_proc__V_52_52, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__unify_proc__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)));
                MR_Word check_hlds__unify_proc__DuTypeKind_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 3)));
                MR_Word check_hlds__unify_proc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 1)));
                MR_Word check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 2)));
                MR_Word check_hlds__unify_proc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 4)));
                MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 5)));
                MR_Word check_hlds__unify_proc__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
                MR_Word check_hlds__unify_proc__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word check_hlds__unify_proc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 7)));

                switch (MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_23)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(check_hlds__unify_proc__DuTypeKind_23)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word check_hlds__unify_proc__V_72_72;
                          MR_Word check_hlds__unify_proc__V_74_74;
                          MR_Word check_hlds__unify_proc__Goal_76;

                          {
                            hlds__make_goal__make_simple_test_5_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Goal_76);
                          }
                          {
                            check_hlds__unify_proc__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_74_74, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            check_hlds__unify_proc__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_72_72, 1) = ((MR_Box) (check_hlds__unify_proc__V_74_74));
                          }
                          {
                            check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_72_72, check_hlds__unify_proc__Goal_76, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word check_hlds__unify_proc__V_66_66;
                          MR_Word check_hlds__unify_proc__V_68_68;
                          MR_Word check_hlds__unify_proc__Goal_77;

                          {
                            check_hlds__unify_proc__Goal_77 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                          }
                          {
                            check_hlds__unify_proc__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            check_hlds__unify_proc__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 1) = ((MR_Box) (check_hlds__unify_proc__V_68_68));
                          }
                          {
                            check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_66_66, check_hlds__unify_proc__Goal_77, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_17, check_hlds__unify_proc__Ctors_20, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__unify_proc__V_72_72;
                      MR_Word check_hlds__unify_proc__V_74_74;
                      MR_Word check_hlds__unify_proc__Goal_76;

                      {
                        hlds__make_goal__make_simple_test_5_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Goal_76);
                      }
                      {
                        check_hlds__unify_proc__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_74_74, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        check_hlds__unify_proc__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_72_72, 1) = ((MR_Box) (check_hlds__unify_proc__V_74_74));
                      }
                      {
                        check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_72_72, check_hlds__unify_proc__Goal_76, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word check_hlds__unify_proc__ArgType_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 1)));
                      MR_Word check_hlds__unify_proc__IsDummyType_33;
                      MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 0)));
                      MR_Word check_hlds__unify_proc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 2)));

                      {
                        check_hlds__unify_proc__IsDummyType_33 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__ArgType_31);
                      }
                      switch (check_hlds__unify_proc__IsDummyType_33) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word check_hlds__unify_proc__V_62_62;
                            MR_Word check_hlds__unify_proc__V_64_64;
                            MR_Word check_hlds__unify_proc__Goal_78;

                            {
                              check_hlds__unify_proc__Goal_78 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                            }
                            {
                              check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
                            }
                            {
                              check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_62_62, check_hlds__unify_proc__Goal_78, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_17, check_hlds__unify_proc__Ctors_20, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                          }
                          break;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__unify_proc__EqvType_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)));
                MR_Word check_hlds__unify_proc__IsDummyType_86;

                {
                  check_hlds__unify_proc__IsDummyType_86 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__EqvType_34);
                }
                switch (check_hlds__unify_proc__IsDummyType_86) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word check_hlds__unify_proc__V_56_56;
                      MR_Word check_hlds__unify_proc__V_58_58;
                      MR_Word check_hlds__unify_proc__Goal_83;

                      {
                        check_hlds__unify_proc__Goal_83 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                      }
                      {
                        check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        check_hlds__unify_proc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 1) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
                      }
                      {
                        check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_56_56, check_hlds__unify_proc__Goal_83, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(check_hlds__unify_proc__EqvType_34, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      check_hlds__unify_proc__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(check_hlds__unify_proc__ModuleInfo_16);
                    }
                    if (check_hlds__unify_proc__succeeded)
                      {
                        MR_Word check_hlds__unify_proc__TypeCategory_39;

                        {
                          check_hlds__unify_proc__TypeCategory_39 = check_hlds__type_util__classify_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__Type_9);
                        }
                        {
                          check_hlds__unify_proc__generate_builtin_unify_7_p_0(check_hlds__unify_proc__TypeCategory_39, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/8", (MR_String) "trying to create unify proc for abstract type");
                          return;
                        }
                      }
                  }
                  break;
              }
              break;
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

    {
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__487__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0(
  MR_Word check_hlds__unify_proc__SpecialId_12,
  MR_Word check_hlds__unify_proc__Item_13,
  MR_Word check_hlds__unify_proc__TVarSet_14,
  MR_Word check_hlds__unify_proc__Type_15,
  MR_Word check_hlds__unify_proc__TypeCtor_16,
  MR_Word check_hlds__unify_proc__TypeBody_17,
  MR_Word check_hlds__unify_proc__Context_18,
  MR_Word check_hlds__unify_proc__TypeStatus_19,
  MR_Word * check_hlds__unify_proc__PredId_20,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_28)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__PredInfo1_24;
    MR_Word check_hlds__unify_proc__ErrorProcs_25;
    MR_Word check_hlds__unify_proc__PredInfo_26;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_30;
    MR_Word check_hlds__unify_proc__V_31_31;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_36;

    switch (check_hlds__unify_proc__Item_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unify_proc__SpecialPredMaps_22;

          {
            hlds__make_hlds__add_special_pred_for_real_9_p_0(check_hlds__unify_proc__SpecialId_12, check_hlds__unify_proc__TVarSet_14, check_hlds__unify_proc__Type_15, check_hlds__unify_proc__TypeCtor_16, check_hlds__unify_proc__TypeBody_17, check_hlds__unify_proc__Context_18, check_hlds__unify_proc__TypeStatus_19, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_27, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_30);
          }
          {
            hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__unify_proc__SpecialPredMaps_22);
          }
          {
            hlds__special_pred__lookup_special_pred_maps_4_p_0(check_hlds__unify_proc__SpecialPredMaps_22, check_hlds__unify_proc__SpecialId_12, check_hlds__unify_proc__TypeCtor_16, check_hlds__unify_proc__PredId_20);
          }
          {
            hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_30, *check_hlds__unify_proc__PredId_20, &check_hlds__unify_proc__PredInfo1_24);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__unify_proc__SpecialPredMaps_39;
          MR_Word check_hlds__unify_proc__PredInfo0_40;

          {
            hlds__make_hlds__add_special_pred_decl_for_real_8_p_0(check_hlds__unify_proc__SpecialId_12, check_hlds__unify_proc__TVarSet_14, check_hlds__unify_proc__Type_15, check_hlds__unify_proc__TypeCtor_16, check_hlds__unify_proc__Context_18, check_hlds__unify_proc__TypeStatus_19, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_27, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_30);
          }
          {
            hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__unify_proc__SpecialPredMaps_39);
          }
          {
            hlds__special_pred__lookup_special_pred_maps_4_p_0(check_hlds__unify_proc__SpecialPredMaps_39, check_hlds__unify_proc__SpecialId_12, check_hlds__unify_proc__TypeCtor_16, check_hlds__unify_proc__PredId_20);
          }
          {
            hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_30, *check_hlds__unify_proc__PredId_20, &check_hlds__unify_proc__PredInfo0_40);
          }
          {
            check_hlds__post_typecheck__setup_vartypes_in_clauses_for_imported_pred_2_p_0(check_hlds__unify_proc__PredInfo0_40, &check_hlds__unify_proc__PredInfo1_24);
          }
        }
        break;
    }
    {
      check_hlds__post_typecheck__propagate_types_into_modes_4_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__unify_proc__ErrorProcs_25, check_hlds__unify_proc__PredInfo1_24, &check_hlds__unify_proc__PredInfo_26);
    }
    {
      check_hlds__unify_proc__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 3) = ((MR_Box) (check_hlds__unify_proc__ErrorProcs_25));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(check_hlds__unify_proc__V_31_31, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.add_lazily_generated_special_pred\'/11", (MR_String) "ErrorProcs != []");
    }
    {
      hlds__hlds_module__module_info_set_pred_info_4_p_0(*check_hlds__unify_proc__PredId_20, check_hlds__unify_proc__PredInfo_26, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_36);
    }
    {
      check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(*check_hlds__unify_proc__PredId_20, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_28);
    }
  }
}

void MR_CALL 
check_hlds__unify_proc__generate_clause_info_6_p_0(
  MR_Word check_hlds__unify_proc__SpecialPredId_7,
  MR_Word check_hlds__unify_proc__Type_8,
  MR_Word check_hlds__unify_proc__TypeBody_9,
  MR_Word check_hlds__unify_proc__Context_10,
  MR_Word check_hlds__unify_proc__ModuleInfo_11,
  MR_Word * check_hlds__unify_proc__ClauseInfo_12)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ArgTypes_13;
    MR_Word check_hlds__unify_proc__Args_17;
    MR_Word check_hlds__unify_proc__Clause_20;
    MR_Word check_hlds__unify_proc__VarSet_23;
    MR_Word check_hlds__unify_proc__Types_24;
    MR_Word check_hlds__unify_proc__TVarNameMap_25;
    MR_Word check_hlds__unify_proc__ArgVec_26;
    MR_Word check_hlds__unify_proc__ClausesRep_27;
    MR_Word check_hlds__unify_proc__RttiVarMaps_28;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_34_34;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_50_50;
    MR_Word check_hlds__unify_proc__V_55_55;
    MR_Word check_hlds__unify_proc__V_58_58;
    MR_Word check_hlds__unify_proc__VarSet_70;
    MR_Word check_hlds__unify_proc__VarTypes_71;
    MR_Word check_hlds__unify_proc__RttiVarMaps_72;
    MR_Word check_hlds__unify_proc___Modes_14;
    MR_Word check_hlds__unify_proc___Det_15;
    MR_Word check_hlds__unify_proc__V_76_76;
    MR_Word check_hlds__unify_proc__V_77_77;

    {
      hlds__special_pred__special_pred_interface_5_p_0(check_hlds__unify_proc__SpecialPredId_7, check_hlds__unify_proc__Type_8, &check_hlds__unify_proc__ArgTypes_13, &check_hlds__unify_proc___Modes_14, &check_hlds__unify_proc___Det_15);
    }
    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__unify_proc__VarSet_70);
    }
    {
      hlds__vartypes__init_vartypes_1_p_0(&check_hlds__unify_proc__VarTypes_71);
    }
    {
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&check_hlds__unify_proc__RttiVarMaps_72);
    }
    {
      check_hlds__unify_proc__STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_70));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_71));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_72));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (check_hlds__unify_proc__ModuleInfo_11));
    }
    {
      check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(check_hlds__unify_proc__ArgTypes_13, (MR_String) "HeadVar__", (MR_Integer) 1, &check_hlds__unify_proc__Args_17, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, &check_hlds__unify_proc__STATE_VARIABLE_Info_34_34);
    }
    switch (check_hlds__unify_proc__SpecialPredId_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__unify_proc__Res_22;
          MR_Word check_hlds__unify_proc__X_61;
          MR_Word check_hlds__unify_proc__Y_62;
          MR_Word check_hlds__unify_proc__V_35_35;
          MR_Word check_hlds__unify_proc__V_36_36;
          MR_Word check_hlds__unify_proc__V_37_37;

          check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__unify_proc__succeeded)
            {
              check_hlds__unify_proc__Res_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
              check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
              check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_35_35)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__unify_proc__succeeded)
                {
                  check_hlds__unify_proc__X_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, (MR_Integer) 0)));
                  check_hlds__unify_proc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, (MR_Integer) 1)));
                  check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_36_36)) == (MR_mktag((MR_Integer) 1)));
                  if (check_hlds__unify_proc__succeeded)
                    {
                      check_hlds__unify_proc__Y_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, (MR_Integer) 0)));
                      check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, (MR_Integer) 1)));
                      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
            }
          if (check_hlds__unify_proc__succeeded)
            {
              check_hlds__unify_proc__generate_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__Res_22, check_hlds__unify_proc__X_61, check_hlds__unify_proc__Y_62, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_34_34, &check_hlds__unify_proc__STATE_VARIABLE_Info_50_50);
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad compare args");
                return;
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unify_proc__Index_21;
          MR_Word check_hlds__unify_proc__X_59;
          MR_Word check_hlds__unify_proc__V_42_42;
          MR_Word check_hlds__unify_proc__V_43_43;

          check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__unify_proc__succeeded)
            {
              check_hlds__unify_proc__X_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
              check_hlds__unify_proc__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
              check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_42_42)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__unify_proc__succeeded)
                {
                  check_hlds__unify_proc__Index_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, (MR_Integer) 0)));
                  check_hlds__unify_proc__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, (MR_Integer) 1)));
                  check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
            }
          if (check_hlds__unify_proc__succeeded)
            {
              check_hlds__unify_proc__generate_index_proc_body_8_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__X_59, check_hlds__unify_proc__Index_21, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_34_34, &check_hlds__unify_proc__STATE_VARIABLE_Info_50_50);
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad index args");
                return;
              }
            }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__unify_proc__X_18;
          MR_Word check_hlds__unify_proc__Y_19;
          MR_Word check_hlds__unify_proc__V_48_48;
          MR_Word check_hlds__unify_proc__V_49_49;

          check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__unify_proc__succeeded)
            {
              check_hlds__unify_proc__X_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
              check_hlds__unify_proc__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
              check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_48_48)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__unify_proc__succeeded)
                {
                  check_hlds__unify_proc__Y_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_48_48, (MR_Integer) 0)));
                  check_hlds__unify_proc__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_48_48, (MR_Integer) 1)));
                  check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
            }
          if (check_hlds__unify_proc__succeeded)
            {
              check_hlds__unify_proc__generate_unify_proc_body_8_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__X_18, check_hlds__unify_proc__Y_19, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_34_34, &check_hlds__unify_proc__STATE_VARIABLE_Info_50_50);
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad unify args");
                return;
              }
            }
        }
        break;
    }
    check_hlds__unify_proc__VarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
    check_hlds__unify_proc__Types_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_50_50, (MR_Integer) 1)));
    check_hlds__unify_proc__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
    check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
    {
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__unify_proc_scalar_common_1[0], &check_hlds__unify_proc__TVarNameMap_25);
    }
    {
      check_hlds__unify_proc__ArgVec_26 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], (MR_Integer) 0, check_hlds__unify_proc__Args_17);
    }
    {
      check_hlds__unify_proc__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_55_55, 0) = ((MR_Box) (check_hlds__unify_proc__Clause_20));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__unify_proc__V_55_55, &check_hlds__unify_proc__ClausesRep_27);
    }
    {
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&check_hlds__unify_proc__RttiVarMaps_28);
    }
    {
      check_hlds__unify_proc__V_58_58 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__ClauseInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__Types_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__TVarNameMap_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Types_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__unify_proc__ArgVec_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__unify_proc__ClausesRep_27));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_28));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

void MR_CALL 
check_hlds__unify_proc__lookup_mode_num_5_p_0(
  MR_Word check_hlds__unify_proc__ModuleInfo_6,
  MR_Word check_hlds__unify_proc__TypeCtor_7,
  MR_Word check_hlds__unify_proc__UniMode_8,
  MR_Word check_hlds__unify_proc__Det_9,
  MR_Integer * check_hlds__unify_proc__Num_10)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Integer check_hlds__unify_proc__Num1_11;
    MR_Word check_hlds__unify_proc__XInitial_20;
    MR_Word check_hlds__unify_proc__YInitial_21;
    MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UniMode_8, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc___Final_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UniMode_8, (MR_Integer) 1)));

    check_hlds__unify_proc__XInitial_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_25_25, (MR_Integer) 0)));
    check_hlds__unify_proc__YInitial_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_25_25, (MR_Integer) 1)));
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Det_9 == (MR_Integer) 1);
    if (check_hlds__unify_proc__succeeded)
      {
        {
          check_hlds__unify_proc__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__ModuleInfo_6, check_hlds__unify_proc__XInitial_20);
        }
        if (check_hlds__unify_proc__succeeded)
          {
            check_hlds__unify_proc__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__ModuleInfo_6, check_hlds__unify_proc__YInitial_21);
          }
      }
    if (check_hlds__unify_proc__succeeded)
      {
        {
          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__Num1_11);
        }
        check_hlds__unify_proc__succeeded = MR_TRUE;
      }
    else
      {
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__XInitial_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        if (check_hlds__unify_proc__succeeded)
          {
            {
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__Num1_11);
            }
            check_hlds__unify_proc__succeeded = MR_TRUE;
          }
        else
          {
            check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__YInitial_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            if (check_hlds__unify_proc__succeeded)
              {
                {
                  hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__Num1_11);
                }
                check_hlds__unify_proc__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word check_hlds__unify_proc__Requests_23;
                MR_Word check_hlds__unify_proc__UnifyReqMap_24;
                MR_Word check_hlds__unify_proc__V_26_26;
                MR_Word check_hlds__unify_proc__V_30_30;
                MR_Box check_hlds__unify_proc__conv0_Num1_11;

                {
                  hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__ModuleInfo_6, &check_hlds__unify_proc__Requests_23);
                }
                check_hlds__unify_proc__UnifyReqMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_23, (MR_Integer) 0)));
                check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_23, (MR_Integer) 1)));
                {
                  check_hlds__unify_proc__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_7));
                  MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__UniMode_8));
                }
                {
                  check_hlds__unify_proc__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__unify_proc__UnifyReqMap_24, ((MR_Box) (check_hlds__unify_proc__V_26_26)), &check_hlds__unify_proc__conv0_Num1_11);
                }
                if (check_hlds__unify_proc__succeeded)
                  {
                    check_hlds__unify_proc__Num1_11 = ((MR_Integer) check_hlds__unify_proc__conv0_Num1_11);
                    check_hlds__unify_proc__succeeded = MR_TRUE;
                  }
              }
          }
      }
    if (check_hlds__unify_proc__succeeded)
      *check_hlds__unify_proc__Num_10 = check_hlds__unify_proc__Num1_11;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.lookup_mode_num\'/5", (MR_String) "search_num failed");
          return;
        }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2(
  MR_Box check_hlds__unify_proc__closure_arg)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

    {
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__487__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

    {
      check_hlds__unify_proc__succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_5,
  MR_Word * check_hlds__unify_proc__PredId_6,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_14)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__Type_8;
    MR_Word check_hlds__unify_proc__TVarSet_9;
    MR_Word check_hlds__unify_proc__TypeBody_10;
    MR_Word check_hlds__unify_proc__Context_11;
    MR_Word check_hlds__unify_proc__TypeTable_26;
    MR_Word check_hlds__unify_proc__TypeDefn_27;
    MR_Word check_hlds__unify_proc__TypeParams_28;
    MR_Word check_hlds__unify_proc__KindMap_29;
    MR_Word check_hlds__unify_proc__TypeStatus_30;
    MR_Word check_hlds__unify_proc__TypeArgs_31;
    MR_Word check_hlds__unify_proc__V_32_32;
    MR_Word check_hlds__unify_proc__SpecialPredMaps_48;
    MR_Word check_hlds__unify_proc__PredInfo0_49;
    MR_Word check_hlds__unify_proc__PredInfo1_50;
    MR_Word check_hlds__unify_proc__ErrorProcs_51;
    MR_Word check_hlds__unify_proc__PredInfo_52;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_54;
    MR_Word check_hlds__unify_proc__V_55_55;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_60;

    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__unify_proc__TypeTable_26);
    }
    {
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__unify_proc__TypeTable_26, check_hlds__unify_proc__TypeCtor_5, &check_hlds__unify_proc__TypeDefn_27);
    }
    {
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__unify_proc__TypeDefn_27, &check_hlds__unify_proc__TVarSet_9);
    }
    {
      hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__unify_proc__TypeDefn_27, &check_hlds__unify_proc__TypeParams_28);
    }
    {
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(check_hlds__unify_proc__TypeDefn_27, &check_hlds__unify_proc__KindMap_29);
    }
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__unify_proc__TypeDefn_27, &check_hlds__unify_proc__TypeBody_10);
    }
    {
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__unify_proc__TypeDefn_27, &check_hlds__unify_proc__TypeStatus_30);
    }
    {
      hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__unify_proc__TypeDefn_27, &check_hlds__unify_proc__Context_11);
    }
    {
      check_hlds__unify_proc__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 3) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 4) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_5));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 5) = ((MR_Box) (check_hlds__unify_proc__TypeBody_10));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 6) = ((MR_Box) (check_hlds__unify_proc__TypeStatus_30));
    }
    {
      mercury__require__expect_4_p_0(check_hlds__unify_proc__V_32_32, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.collect_type_defn\'/6", (MR_String) "not generated lazily");
    }
    {
      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__unify_proc__KindMap_29, check_hlds__unify_proc__TypeParams_28, &check_hlds__unify_proc__TypeArgs_31);
    }
    {
      parse_tree__prog_type__construct_type_3_p_0(check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeArgs_31, &check_hlds__unify_proc__Type_8);
    }
    {
      hlds__make_hlds__add_special_pred_decl_for_real_8_p_0((MR_Integer) 2, check_hlds__unify_proc__TVarSet_9, check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__Context_11, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_3[1]))), check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_54);
    }
    {
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_54, &check_hlds__unify_proc__SpecialPredMaps_48);
    }
    {
      hlds__special_pred__lookup_special_pred_maps_4_p_0(check_hlds__unify_proc__SpecialPredMaps_48, (MR_Integer) 2, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__PredId_6);
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_54, *check_hlds__unify_proc__PredId_6, &check_hlds__unify_proc__PredInfo0_49);
    }
    {
      check_hlds__post_typecheck__setup_vartypes_in_clauses_for_imported_pred_2_p_0(check_hlds__unify_proc__PredInfo0_49, &check_hlds__unify_proc__PredInfo1_50);
    }
    {
      check_hlds__post_typecheck__propagate_types_into_modes_4_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_54, &check_hlds__unify_proc__ErrorProcs_51, check_hlds__unify_proc__PredInfo1_50, &check_hlds__unify_proc__PredInfo_52);
    }
    {
      check_hlds__unify_proc__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_55_55, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_55_55, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_55_55, 3) = ((MR_Box) (check_hlds__unify_proc__ErrorProcs_51));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_55_55, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(check_hlds__unify_proc__V_55_55, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.add_lazily_generated_special_pred\'/11", (MR_String) "ErrorProcs != []");
    }
    {
      hlds__hlds_module__module_info_set_pred_info_4_p_0(*check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__PredInfo_52, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_54, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_60);
    }
    {
      check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(*check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_60, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_14);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2(
  MR_Box check_hlds__unify_proc__closure_arg)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

    {
      check_hlds__unify_proc__succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
{
  {
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
    MR_Word check_hlds__unify_proc__conv0_LambdaHeadVar__2_38;

    {
      check_hlds__unify_proc__conv0_LambdaHeadVar__2_38 = check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__402__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv0_LambdaHeadVar__2_38));
    return check_hlds__unify_proc__wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_5,
  MR_Word * check_hlds__unify_proc__PredId_6,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__TVarSet_12;
    MR_Word check_hlds__unify_proc__Context_18;
    MR_Word check_hlds__unify_proc__TypeBody_30;
    MR_Word check_hlds__unify_proc__Type_31;
    MR_Word check_hlds__unify_proc__TypeStatus_32;
    MR_Word check_hlds__unify_proc__Item_33;

    {
      check_hlds__unify_proc__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__unify_proc__TypeCtor_5);
    }
    if (check_hlds__unify_proc__succeeded)
      {
        MR_Word check_hlds__unify_proc__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
        MR_Integer check_hlds__unify_proc__TupleArity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_5, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__TVarSet0_10;
        MR_Word check_hlds__unify_proc__TupleArgTVars_11;
        MR_Word check_hlds__unify_proc__TupleArgTypes_13;
        MR_Word check_hlds__unify_proc__MakeUnamedField_16;
        MR_Word check_hlds__unify_proc__CtorArgs_19;
        MR_Word check_hlds__unify_proc__Ctor_21;
        MR_Word check_hlds__unify_proc__ConsId_22;
        MR_Word check_hlds__unify_proc__ConsTagValues_23;
        MR_Word check_hlds__unify_proc__V_36_36;
        MR_Word check_hlds__unify_proc__V_42_42;
        MR_Word check_hlds__unify_proc__V_43_43;
        MR_Word check_hlds__unify_proc__V_46_46;
        MR_Word check_hlds__unify_proc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_5, (MR_Integer) 0)));

        {
          mercury__varset__init_1_p_0(check_hlds__unify_proc__TypeCtorInfo_55_55, &check_hlds__unify_proc__TVarSet0_10);
        }
        {
          mercury__varset__new_vars_4_p_0(check_hlds__unify_proc__TypeCtorInfo_55_55, check_hlds__unify_proc__TupleArity_9, &check_hlds__unify_proc__TupleArgTVars_11, check_hlds__unify_proc__TVarSet0_10, &check_hlds__unify_proc__TVarSet_12);
        }
        {
          check_hlds__unify_proc__V_36_36 = mercury__map__init_0_f_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
        {
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__unify_proc__V_36_36, check_hlds__unify_proc__TupleArgTVars_11, &check_hlds__unify_proc__TupleArgTypes_13);
        }
        {
          check_hlds__unify_proc__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__ConsId_22, 1) = ((MR_Box) (check_hlds__unify_proc__TupleArity_9));
        }
        {
          check_hlds__unify_proc__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__ConsId_22));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 0) = ((MR_Box) (check_hlds__unify_proc__V_43_43));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__from_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, check_hlds__unify_proc__V_42_42, &check_hlds__unify_proc__ConsTagValues_23);
        }
        {
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TupleArgTypes_13, &check_hlds__unify_proc__Type_31);
        }
        {
          mercury__term__context_init_1_p_0(&check_hlds__unify_proc__Context_18);
        }
        {
          check_hlds__unify_proc__MakeUnamedField_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 3) = ((MR_Box) (check_hlds__unify_proc__Context_18));
        }
        {
          check_hlds__unify_proc__CtorArgs_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__MakeUnamedField_16, check_hlds__unify_proc__TupleArgTypes_13);
        }
        {
          check_hlds__unify_proc__Ctor_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 2) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 3) = ((MR_Box) (check_hlds__unify_proc__CtorArgs_19));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 4) = ((MR_Box) (check_hlds__unify_proc__TupleArity_9));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 5) = ((MR_Box) (check_hlds__unify_proc__Context_18));
        }
        {
          check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Ctor_21));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__TypeBody_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 0) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 1) = ((MR_Box) (check_hlds__unify_proc__ConsTagValues_23));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 6) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 1 << (MR_Integer) 1)))));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      {
        MR_Word check_hlds__unify_proc__TypeTable_68;
        MR_Word check_hlds__unify_proc__TypeDefn_69;
        MR_Word check_hlds__unify_proc__TypeParams_70;
        MR_Word check_hlds__unify_proc__KindMap_71;
        MR_Word check_hlds__unify_proc__TypeStatus_72;
        MR_Word check_hlds__unify_proc__TypeArgs_73;
        MR_Word check_hlds__unify_proc__V_74_74;

        {
          hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__unify_proc__TypeTable_68);
        }
        {
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__unify_proc__TypeTable_68, check_hlds__unify_proc__TypeCtor_5, &check_hlds__unify_proc__TypeDefn_69);
        }
        {
          hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__unify_proc__TypeDefn_69, &check_hlds__unify_proc__TVarSet_12);
        }
        {
          hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__unify_proc__TypeDefn_69, &check_hlds__unify_proc__TypeParams_70);
        }
        {
          hlds__hlds_data__get_type_defn_kind_map_2_p_0(check_hlds__unify_proc__TypeDefn_69, &check_hlds__unify_proc__KindMap_71);
        }
        {
          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__unify_proc__TypeDefn_69, &check_hlds__unify_proc__TypeBody_30);
        }
        {
          hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__unify_proc__TypeDefn_69, &check_hlds__unify_proc__TypeStatus_72);
        }
        {
          hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__unify_proc__TypeDefn_69, &check_hlds__unify_proc__Context_18);
        }
        {
          check_hlds__unify_proc__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_74_74, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_74_74, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_74_74, 3) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_74_74, 4) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_5));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_74_74, 5) = ((MR_Box) (check_hlds__unify_proc__TypeBody_30));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_74_74, 6) = ((MR_Box) (check_hlds__unify_proc__TypeStatus_72));
        }
        {
          mercury__require__expect_4_p_0(check_hlds__unify_proc__V_74_74, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.collect_type_defn\'/6", (MR_String) "not generated lazily");
        }
        {
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__unify_proc__KindMap_71, check_hlds__unify_proc__TypeParams_70, &check_hlds__unify_proc__TypeArgs_73);
        }
        {
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeArgs_73, &check_hlds__unify_proc__Type_31);
        }
      }
    {
      check_hlds__unify_proc__succeeded = hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeBody_30);
    }
    if (check_hlds__unify_proc__succeeded)
      {
        check_hlds__unify_proc__TypeStatus_32 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
        check_hlds__unify_proc__Item_33 = (MR_Integer) 1;
      }
    else
      {
        check_hlds__unify_proc__TypeStatus_32 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_3[1])));
        check_hlds__unify_proc__Item_33 = (MR_Integer) 0;
      }
    {
      check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0((MR_Integer) 0, check_hlds__unify_proc__Item_33, check_hlds__unify_proc__TVarSet_12, check_hlds__unify_proc__Type_31, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeBody_30, check_hlds__unify_proc__Context_18, check_hlds__unify_proc__TypeStatus_32, check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_1(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_3(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgMode_27 = ((MR_Word) (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__conv2_ArgMode_27);
    {
      check_hlds__unify_proc__request_proc_9_p_0_2(check_hlds__unify_proc__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_2(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    {
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgMode_27);
    }
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = !((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded);
    if ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
      {
        check_hlds__unify_proc__request_proc_9_p_0_1(check_hlds__unify_proc__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_4(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_57_57, &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__conv2_ArgMode_27, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11, check_hlds__unify_proc__request_proc_9_p_0_3, check_hlds__unify_proc__env_ptr);
        }
        (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0(
  MR_Word check_hlds__unify_proc__PredId_10,
  MR_Word check_hlds__unify_proc__ArgModes_11,
  MR_Word check_hlds__unify_proc__InstVarSet_12,
  MR_Word check_hlds__unify_proc__ArgLives_13,
  MR_Word check_hlds__unify_proc__MaybeDet_14,
  MR_Word check_hlds__unify_proc__Context_15,
  MR_Integer * check_hlds__unify_proc__ProcId_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_33)
{
  {
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s check_hlds__unify_proc__env;

    (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11 = check_hlds__unify_proc__ArgModes_11;
    (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_32;
    {
      MR_Word check_hlds__unify_proc__TypeCtorInfo_55_55;
      MR_Word check_hlds__unify_proc__TypeCtorInfo_56_56;
      MR_Word check_hlds__unify_proc__TypeCtorInfo_59_59;
      MR_Integer check_hlds__unify_proc__Arity_23;
      MR_Word check_hlds__unify_proc__ClausesInfo_26;
      MR_Word check_hlds__unify_proc__Requests0_28;
      MR_Word check_hlds__unify_proc__ReqQueue0_29;
      MR_Word check_hlds__unify_proc__ReqQueue_30;
      MR_Word check_hlds__unify_proc__Requests_31;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredMap_34_34;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredInfo_35_35;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcMap_39_39;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_40_40;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_42_42;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_43_43;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_Goal_44_44;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_Goal_45_45;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_Goal_47_47;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_48_48;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcMap_49_49;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredInfo_50_50;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredMap_51_51;
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52;
      MR_Word check_hlds__unify_proc__V_53_53;
      MR_Box check_hlds__unify_proc__conv0_STATE_VARIABLE_PredInfo_35_35;
      MR_Box check_hlds__unify_proc__conv1_STATE_VARIABLE_ProcInfo_40_40;
      MR_Word check_hlds__unify_proc__V_46_46;
      MR_Word check_hlds__unify_proc__V_62_62;
      MR_Word check_hlds__unify_proc__V_65_65;
      MR_Word check_hlds__unify_proc__V_66_66;

      {
        hlds__hlds_module__module_info_get_preds_2_p_0((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__unify_proc__STATE_VARIABLE_PredMap_34_34);
      }
      check_hlds__unify_proc__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      check_hlds__unify_proc__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
      {
        mercury__map__lookup_3_p_0(check_hlds__unify_proc__TypeCtorInfo_55_55, check_hlds__unify_proc__TypeCtorInfo_56_56, check_hlds__unify_proc__STATE_VARIABLE_PredMap_34_34, ((MR_Box) (check_hlds__unify_proc__PredId_10)), &check_hlds__unify_proc__conv0_STATE_VARIABLE_PredInfo_35_35);
      }
      check_hlds__unify_proc__STATE_VARIABLE_PredInfo_35_35 = ((MR_Word) check_hlds__unify_proc__conv0_STATE_VARIABLE_PredInfo_35_35);
      (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
      {
        mercury__list__length_2_p_0((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_57_57, (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11, &check_hlds__unify_proc__Arity_23);
      }
      {
        hlds__make_hlds__add_new_proc_13_p_0(check_hlds__unify_proc__InstVarSet_12, check_hlds__unify_proc__Arity_23, (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__ArgLives_13, (MR_Integer) 1, check_hlds__unify_proc__MaybeDet_14, check_hlds__unify_proc__Context_15, (MR_Integer) 1, (MR_Integer) 1, check_hlds__unify_proc__STATE_VARIABLE_PredInfo_35_35, &check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38, check_hlds__unify_proc__ProcId_16);
      }
      {
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38, &check_hlds__unify_proc__STATE_VARIABLE_ProcMap_39_39);
      }
      {
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38, &check_hlds__unify_proc__ClausesInfo_26);
      }
      check_hlds__unify_proc__TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
      {
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__unify_proc__TypeCtorInfo_59_59, check_hlds__unify_proc__STATE_VARIABLE_ProcMap_39_39, *check_hlds__unify_proc__ProcId_16, &check_hlds__unify_proc__conv1_STATE_VARIABLE_ProcInfo_40_40);
      }
      check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_40_40 = ((MR_Word) check_hlds__unify_proc__conv1_STATE_VARIABLE_ProcInfo_40_40);
      {
        hlds__hlds_pred__proc_info_set_can_process_3_p_0((MR_Integer) 0, check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_40_40, &check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_42_42);
      }
      {
        check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0(*check_hlds__unify_proc__ProcId_16, check_hlds__unify_proc__ClausesInfo_26, check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_42_42, &check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_43_43);
      }
      {
        hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Goal_44_44);
      }
      {
        hlds__hlds_goal__set_goal_contexts_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__STATE_VARIABLE_Goal_44_44, &check_hlds__unify_proc__STATE_VARIABLE_Goal_45_45);
      }
      {
        check_hlds__unify_proc__request_proc_9_p_0_4(&check_hlds__unify_proc__env);
      }
      (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = !((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded);
      if ((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
        {
          (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__MaybeDet_14)) == (MR_mktag((MR_Integer) 1)));
          if ((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
            {
              check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeDet_14, (MR_Integer) 0)));
              (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = (check_hlds__unify_proc__V_46_46 == (MR_Integer) 7);
            }
          (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = !((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded);
        }
      if ((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
        check_hlds__unify_proc__STATE_VARIABLE_Goal_47_47 = check_hlds__unify_proc__STATE_VARIABLE_Goal_45_45;
      else
        {
          check_hlds__unify_proc__STATE_VARIABLE_Goal_47_47 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(check_hlds__unify_proc__STATE_VARIABLE_Goal_45_45);
        }
      {
        hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_Goal_47_47, check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_43_43, &check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_48_48);
      }
      {
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__unify_proc__TypeCtorInfo_59_59, *check_hlds__unify_proc__ProcId_16, ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_48_48)), check_hlds__unify_proc__STATE_VARIABLE_ProcMap_39_39, &check_hlds__unify_proc__STATE_VARIABLE_ProcMap_49_49);
      }
      {
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ProcMap_49_49, check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38, &check_hlds__unify_proc__STATE_VARIABLE_PredInfo_50_50);
      }
      {
        mercury__map__det_update_4_p_0(check_hlds__unify_proc__TypeCtorInfo_55_55, check_hlds__unify_proc__TypeCtorInfo_56_56, ((MR_Box) (check_hlds__unify_proc__PredId_10)), ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_PredInfo_50_50)), check_hlds__unify_proc__STATE_VARIABLE_PredMap_34_34, &check_hlds__unify_proc__STATE_VARIABLE_PredMap_51_51);
      }
      {
        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_PredMap_51_51, (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52);
      }
      {
        hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__unify_proc__Requests0_28);
      }
      check_hlds__unify_proc__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_28, (MR_Integer) 0)));
      check_hlds__unify_proc__ReqQueue0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_28, (MR_Integer) 1)));
      {
        check_hlds__unify_proc__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_10));
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (*check_hlds__unify_proc__ProcId_16));
      }
      {
        mercury__queue__put_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (check_hlds__unify_proc__V_53_53)), check_hlds__unify_proc__ReqQueue0_29, &check_hlds__unify_proc__ReqQueue_30);
      }
      check_hlds__unify_proc__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_28, (MR_Integer) 0)));
      check_hlds__unify_proc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_28, (MR_Integer) 1)));
      {
        check_hlds__unify_proc__Requests_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_31, 0) = ((MR_Box) (check_hlds__unify_proc__V_65_65));
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_31, 1) = ((MR_Box) (check_hlds__unify_proc__ReqQueue_30));
      }
      {
        hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__unify_proc__Requests_31, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_33);
      }
    }
  }
}

void MR_CALL 
check_hlds__unify_proc__request_unify_6_p_0(
  MR_Word check_hlds__unify_proc__UnifyId_7,
  MR_Word check_hlds__unify_proc__InstVarSet_8,
  MR_Word check_hlds__unify_proc__Determinism_9,
  MR_Word check_hlds__unify_proc__Context_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_48,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_49)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyId_7, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__UnifyMode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyId_7, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__MaybeRecompInfo0_14;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53;

    {
      hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_48, &check_hlds__unify_proc__MaybeRecompInfo0_14);
    }
    if ((check_hlds__unify_proc__MaybeRecompInfo0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_48;
    else
      {
        MR_Word check_hlds__unify_proc__RecompInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeRecompInfo0_14, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__TypeCtorItem_16;
        MR_Word check_hlds__unify_proc__RecompInfo_17;
        MR_Word check_hlds__unify_proc__V_52_52;

        {
          check_hlds__unify_proc__TypeCtorItem_16 = recompilation__type_ctor_to_item_name_1_f_0(check_hlds__unify_proc__TypeCtor_12);
        }
        {
          recompilation__record_used_item_5_p_0((MR_Integer) 1, check_hlds__unify_proc__TypeCtorItem_16, check_hlds__unify_proc__TypeCtorItem_16, check_hlds__unify_proc__RecompInfo0_15, &check_hlds__unify_proc__RecompInfo_17);
        }
        {
          check_hlds__unify_proc__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 0) = ((MR_Box) (check_hlds__unify_proc__RecompInfo_17));
        }
        {
          hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(check_hlds__unify_proc__V_52_52, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_48, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53);
        }
      }
    {
      MR_Word check_hlds__unify_proc__XInitial_77;
      MR_Word check_hlds__unify_proc__YInitial_78;
      MR_Word check_hlds__unify_proc__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 0)));
      MR_Word check_hlds__unify_proc___Final_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 1)));

      check_hlds__unify_proc__XInitial_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_82_82, (MR_Integer) 0)));
      check_hlds__unify_proc__YInitial_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_82_82, (MR_Integer) 1)));
      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Determinism_9 == (MR_Integer) 1);
      if (check_hlds__unify_proc__succeeded)
        {
          {
            check_hlds__unify_proc__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53, check_hlds__unify_proc__XInitial_77);
          }
          if (check_hlds__unify_proc__succeeded)
            {
              check_hlds__unify_proc__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53, check_hlds__unify_proc__YInitial_78);
            }
        }
      if (check_hlds__unify_proc__succeeded)
        {
          MR_Integer check_hlds__unify_proc__V_18_18;

          {
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__V_18_18);
          }
          check_hlds__unify_proc__succeeded = MR_TRUE;
        }
      else
        {
          check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__XInitial_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          if (check_hlds__unify_proc__succeeded)
            {
              MR_Integer check_hlds__unify_proc__V_94_94;

              {
                hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__V_94_94);
              }
              check_hlds__unify_proc__succeeded = MR_TRUE;
            }
          else
            {
              check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__YInitial_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              if (check_hlds__unify_proc__succeeded)
                {
                  MR_Integer check_hlds__unify_proc__V_95_95;

                  {
                    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__V_95_95);
                  }
                  check_hlds__unify_proc__succeeded = MR_TRUE;
                }
              else
                {
                  MR_Word check_hlds__unify_proc__Requests_80;
                  MR_Word check_hlds__unify_proc__UnifyReqMap_81;
                  MR_Word check_hlds__unify_proc__V_87_87;
                  MR_Integer check_hlds__unify_proc__V_96_96;
                  MR_Box check_hlds__unify_proc__conv0_V_96_96;

                  {
                    hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53, &check_hlds__unify_proc__Requests_80);
                  }
                  check_hlds__unify_proc__UnifyReqMap_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_80, (MR_Integer) 0)));
                  check_hlds__unify_proc__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_80, (MR_Integer) 1)));
                  {
                    check_hlds__unify_proc__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__unify_proc__UnifyReqMap_81, ((MR_Box) (check_hlds__unify_proc__UnifyId_7)), &check_hlds__unify_proc__conv0_V_96_96);
                  }
                  if (check_hlds__unify_proc__succeeded)
                    {
                      check_hlds__unify_proc__V_96_96 = ((MR_Integer) check_hlds__unify_proc__conv0_V_96_96);
                      check_hlds__unify_proc__succeeded = MR_TRUE;
                    }
                }
            }
        }
    }
    if (!(check_hlds__unify_proc__succeeded))
      {
        MR_Word check_hlds__unify_proc__TypeTable_19;
        MR_Word check_hlds__unify_proc__TypeDefn_20;
        MR_Word check_hlds__unify_proc__TypeBody_21;

        {
          hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53, &check_hlds__unify_proc__TypeTable_19);
        }
        {
          check_hlds__unify_proc__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__unify_proc__TypeTable_19, check_hlds__unify_proc__TypeCtor_12, &check_hlds__unify_proc__TypeDefn_20);
        }
        if (check_hlds__unify_proc__succeeded)
          {
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__unify_proc__TypeDefn_20, &check_hlds__unify_proc__TypeBody_21);
            }
            {
              MR_Word check_hlds__unify_proc__TypeName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 0)));
              MR_Word check_hlds__unify_proc__TypeModuleName_24;
              MR_Word check_hlds__unify_proc__ModuleName_26;
              MR_Integer check_hlds__unify_proc___TypeArity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 1)));
              MR_String check_hlds__unify_proc__V_25_25;
              MR_Word check_hlds__unify_proc__V_27_27;

              check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__TypeName_22)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__unify_proc__succeeded)
                {
                  check_hlds__unify_proc__TypeModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeName_22, (MR_Integer) 0)));
                  check_hlds__unify_proc__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeName_22, (MR_Integer) 1)));
                  {
                    hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53, &check_hlds__unify_proc__ModuleName_26);
                  }
                  {
                    check_hlds__unify_proc__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__unify_proc__ModuleName_26, check_hlds__unify_proc__TypeModuleName_24);
                  }
                  if (check_hlds__unify_proc__succeeded)
                    {
                      check_hlds__unify_proc__succeeded = ((((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (check_hlds__unify_proc__succeeded)
                        check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_21, (MR_Integer) 1)));
                    }
                }
            }
            if (!(check_hlds__unify_proc__succeeded))
              {
                check_hlds__unify_proc__succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(check_hlds__unify_proc__TypeCtor_12, check_hlds__unify_proc__TypeBody_21);
              }
          }
      }
    if (check_hlds__unify_proc__succeeded)
      *check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_49 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53;
    else
      {
        MR_Word check_hlds__unify_proc__TypeCtorInfo_68_68;
        MR_Word check_hlds__unify_proc__SpecialPredMaps_28;
        MR_Word check_hlds__unify_proc__UnifyMap_29;
        MR_Word check_hlds__unify_proc__PredId_31;
        MR_Word check_hlds__unify_proc__X_Initial_32;
        MR_Word check_hlds__unify_proc__Y_Initial_33;
        MR_Word check_hlds__unify_proc__X_Final_34;
        MR_Word check_hlds__unify_proc__Y_Final_35;
        MR_Word check_hlds__unify_proc__ArgModes0_36;
        MR_Word check_hlds__unify_proc__InMode_37;
        MR_Integer check_hlds__unify_proc__TypeArity_39;
        MR_Word check_hlds__unify_proc__TypeInfoModes_40;
        MR_Word check_hlds__unify_proc__ArgModes_41;
        MR_Integer check_hlds__unify_proc__ProcId_43;
        MR_Word check_hlds__unify_proc__Requests0_44;
        MR_Word check_hlds__unify_proc__UnifyReqMap0_45;
        MR_Word check_hlds__unify_proc__UnifyReqMap_46;
        MR_Word check_hlds__unify_proc__Requests_47;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_54_54;
        MR_Word check_hlds__unify_proc__V_55_55;
        MR_Word check_hlds__unify_proc__V_56_56;
        MR_Word check_hlds__unify_proc__V_57_57;
        MR_Word check_hlds__unify_proc__V_58_58;
        MR_Word check_hlds__unify_proc__V_59_59;
        MR_Word check_hlds__unify_proc__V_61_61;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_62_62;
        MR_Word check_hlds__unify_proc__V_64_64;
        MR_Word check_hlds__unify_proc__V_65_65;
        MR_Word check_hlds__unify_proc__PredIdPrime_30;
        MR_Box check_hlds__unify_proc__conv1_PredIdPrime_30;
        MR_Word check_hlds__unify_proc__V_38_38;
        MR_Word check_hlds__unify_proc__V_89_89;
        MR_Word check_hlds__unify_proc__V_93_93;
        MR_Word check_hlds__unify_proc__V_92_92;

        {
          hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53, &check_hlds__unify_proc__SpecialPredMaps_28);
        }
        check_hlds__unify_proc__UnifyMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SpecialPredMaps_28, (MR_Integer) 0)));
        check_hlds__unify_proc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SpecialPredMaps_28, (MR_Integer) 1)));
        check_hlds__unify_proc__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SpecialPredMaps_28, (MR_Integer) 2)));
        {
          check_hlds__unify_proc__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__unify_proc__UnifyMap_29, ((MR_Box) (check_hlds__unify_proc__TypeCtor_12)), &check_hlds__unify_proc__conv1_PredIdPrime_30);
        }
        if (check_hlds__unify_proc__succeeded)
          {
            check_hlds__unify_proc__PredIdPrime_30 = ((MR_Word) check_hlds__unify_proc__conv1_PredIdPrime_30);
            check_hlds__unify_proc__succeeded = MR_TRUE;
          }
        if (check_hlds__unify_proc__succeeded)
          {
            check_hlds__unify_proc__PredId_31 = check_hlds__unify_proc__PredIdPrime_30;
            check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_54_54 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53;
          }
        else
          {
            check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0(check_hlds__unify_proc__TypeCtor_12, &check_hlds__unify_proc__PredId_31, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_54_54);
          }
        check_hlds__unify_proc__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 0)));
        check_hlds__unify_proc__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 1)));
        check_hlds__unify_proc__X_Initial_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_55_55, (MR_Integer) 0)));
        check_hlds__unify_proc__Y_Initial_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_55_55, (MR_Integer) 1)));
        check_hlds__unify_proc__X_Final_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_56_56, (MR_Integer) 0)));
        check_hlds__unify_proc__Y_Final_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_56_56, (MR_Integer) 1)));
        {
          check_hlds__unify_proc__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_57_57, 0) = ((MR_Box) (check_hlds__unify_proc__X_Initial_32));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_57_57, 1) = ((MR_Box) (check_hlds__unify_proc__X_Final_34));
        }
        {
          check_hlds__unify_proc__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__Y_Initial_33));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (check_hlds__unify_proc__Y_Final_35));
        }
        {
          check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (check_hlds__unify_proc__V_59_59));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__ArgModes0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgModes0_36, 0) = ((MR_Box) (check_hlds__unify_proc__V_57_57));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgModes0_36, 1) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
        }
        {
          parse_tree__prog_mode__in_mode_1_p_0(&check_hlds__unify_proc__InMode_37);
        }
        check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 0)));
        check_hlds__unify_proc__TypeArity_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 1)));
        check_hlds__unify_proc__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
        {
          mercury__list__duplicate_3_p_0(check_hlds__unify_proc__TypeCtorInfo_68_68, check_hlds__unify_proc__TypeArity_39, ((MR_Box) (check_hlds__unify_proc__InMode_37)), &check_hlds__unify_proc__TypeInfoModes_40);
        }
        {
          check_hlds__unify_proc__ArgModes_41 = mercury__list__f_43_43_2_f_0(check_hlds__unify_proc__TypeCtorInfo_68_68, check_hlds__unify_proc__TypeInfoModes_40, check_hlds__unify_proc__ArgModes0_36);
        }
        {
          check_hlds__unify_proc__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 0) = ((MR_Box) (check_hlds__unify_proc__Determinism_9));
        }
        {
          check_hlds__unify_proc__request_proc_9_p_0(check_hlds__unify_proc__PredId_31, check_hlds__unify_proc__ArgModes_41, check_hlds__unify_proc__InstVarSet_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__V_61_61, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__ProcId_43, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_54_54, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_62_62);
        }
        {
          hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_62_62, &check_hlds__unify_proc__Requests0_44);
        }
        check_hlds__unify_proc__UnifyReqMap0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_44, (MR_Integer) 0)));
        check_hlds__unify_proc__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_44, (MR_Integer) 1)));
        {
          mercury__map__set_4_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__unify_proc__UnifyId_7)), ((MR_Box) (check_hlds__unify_proc__ProcId_43)), check_hlds__unify_proc__UnifyReqMap0_45, &check_hlds__unify_proc__UnifyReqMap_46);
        }
        check_hlds__unify_proc__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_44, (MR_Integer) 0)));
        check_hlds__unify_proc__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_44, (MR_Integer) 1)));
        {
          check_hlds__unify_proc__Requests_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_47, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyReqMap_46));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_47, 1) = ((MR_Box) (check_hlds__unify_proc__V_93_93));
        }
        {
          hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__unify_proc__Requests_47, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_62_62, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_49);
        }
      }
  }
}

void MR_CALL 
check_hlds__unify_proc__init_requests_1_p_0(
  MR_Word * check_hlds__unify_proc__Requests_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__UnifyReqMap_3;
    MR_Word check_hlds__unify_proc__ReqQueue_4;

    {
      mercury__map__init_1_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &check_hlds__unify_proc__UnifyReqMap_3);
    }
    {
      mercury__queue__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &check_hlds__unify_proc__ReqQueue_4);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__Requests_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyReqMap_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__ReqQueue_4));
    }
  }
}

void MR_CALL 
check_hlds__unify_proc__set_req_queue_3_p_0(
  MR_Word check_hlds__unify_proc__ReqQueue_4,
  MR_Word check_hlds__unify_proc__PR_5,
  MR_Word * check_hlds__unify_proc__HeadVar__3_3)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_5, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_5, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_6_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__ReqQueue_4));
    }
  }
}

void MR_CALL 
check_hlds__unify_proc__get_req_queue_2_p_0(
  MR_Word check_hlds__unify_proc__PR_3,
  MR_Word * check_hlds__unify_proc__HeadVar__2_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_3, (MR_Integer) 0)));

    *check_hlds__unify_proc__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_3, (MR_Integer) 1)));
  }
}

void mercury__check_hlds__unify_proc__init(void)
{
}

void mercury__check_hlds__unify_proc__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_linear_or_quad_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_proc_requests_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_req_queue_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_pred_item_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_req_map_0);
}

void mercury__check_hlds__unify_proc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.unify_proc. */
