/*
** Automatically generated from `unify_proc.m'
** by the Mercury compiler,
** version rotd-2017-07-26
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.post_typecheck.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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



struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s {
  MR_Word check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVars_1;
  MR_bool check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded;
  MR_Word check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Type_16;
  jmp_buf check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__commit_0;
  MR_Word check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__TypeInfo_37_37;
  MR_Word check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVar_34;
  MR_Word check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Var_36;
  MR_Box check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__conv0_ExistQTVar_34;
};

struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s {
  MR_Word check_hlds__unify_proc__compare_args_7_p_0_env_0__ExistQTVars_1;
  MR_bool check_hlds__unify_proc__compare_args_7_p_0_env_0__succeeded;
  MR_Word check_hlds__unify_proc__compare_args_7_p_0_env_0__Type_22;
  jmp_buf check_hlds__unify_proc__compare_args_7_p_0_env_0__commit_0;
  MR_Word check_hlds__unify_proc__compare_args_7_p_0_env_0__TypeInfo_72_72;
  MR_Word check_hlds__unify_proc__compare_args_7_p_0_env_0__ExistQTVar_69;
  MR_Word check_hlds__unify_proc__compare_args_7_p_0_env_0__Var_71;
  MR_Box check_hlds__unify_proc__compare_args_7_p_0_env_0__conv0_ExistQTVar_69;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_typed_var_pair_0_0[3];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_typed_var_pair_0_0;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_typed_var_pair_0_0[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_typed_var_pair_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_typed_var_pair_0[1];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_typed_var_pair_0[1];

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[4];

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1];

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1692__1_1_f_0(
  MR_Word check_hlds__unify_proc__LambdaHeadVar__1_21);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__204__1_2_p_0(
  MR_Word check_hlds__unify_proc__ErrorProcs_25,
  MR_Word check_hlds__unify_proc__HeadVar__2_34);

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__120__1_2_f_0(
  MR_Word check_hlds__unify_proc__Context_18,
  MR_Word check_hlds__unify_proc__LambdaHeadVar__1_37);

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
check_hlds__unify_proc____Compare____typed_var_pair_0_0(
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____typed_var_pair_0_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
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

static MR_Word MR_CALL 
check_hlds__unify_proc__project_var_y_1_f_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__unify_proc__project_var_x_1_f_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1);

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

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0_2(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0(
  MR_Word check_hlds__unify_proc__TypeCtor_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Y_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word check_hlds__unify_proc__CanCompareAsInt_14,
  MR_Word check_hlds__unify_proc__Ctor_15,
  MR_Word * check_hlds__unify_proc__Goal_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_44,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_45);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_1(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_3(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_4(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_2(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_5(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0(
  MR_Word check_hlds__unify_proc__ExistQTVars_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word * check_hlds__unify_proc__HeadVar__3_3,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__unify_proc__compare_ctors_lexically_3_p_0(
  MR_Word check_hlds__unify_proc__A_4,
  MR_Word check_hlds__unify_proc__B_5,
  MR_Word * check_hlds__unify_proc__Res_6);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_String check_hlds__unify_proc__BaseName_2,
  MR_Integer check_hlds__unify_proc__Num_3,
  MR_Word * check_hlds__unify_proc__HeadVar__4_4,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_5,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_6);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_9_p_0(
  MR_Word check_hlds__unify_proc__Type_10,
  MR_Word check_hlds__unify_proc__TypeBody_11,
  MR_Word check_hlds__unify_proc__Res_12,
  MR_Word check_hlds__unify_proc__X_13,
  MR_Word check_hlds__unify_proc__Y_14,
  MR_Word check_hlds__unify_proc__Context_15,
  MR_Word * check_hlds__unify_proc__Clause_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41);

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

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0_2(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

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
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_42,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_43);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_arg_var_pairs_5_p_0(
  MR_Word check_hlds__unify_proc__ExistQTVars_6,
  MR_Word check_hlds__unify_proc__CtorArgs_7,
  MR_Word * check_hlds__unify_proc__TypedVarPairs_8,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_arg_var_pairs_8_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Integer check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
  MR_Word * check_hlds__unify_proc__HeadVar__4_4,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_VarSet_0_5,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_VarSet_6,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_VarTypes_0_7,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_VarTypes_8);

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_1(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_3(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_4(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_2(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_5(
  void * check_hlds__unify_proc__env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0(
  MR_Word check_hlds__unify_proc__ExistQTVars_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__R_3,
  MR_Word check_hlds__unify_proc__Context_4,
  MR_Word * check_hlds__unify_proc__HeadVar__5_5,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7);

static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
  MR_String check_hlds__unify_proc__Name_3);

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
  MR_Word check_hlds__unify_proc__UnifyCompare_9,
  MR_Word check_hlds__unify_proc__Res_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Y_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_27,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_28);

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
check_hlds__unify_proc__generate_builtin_compare_8_p_0(
  MR_Word check_hlds__unify_proc__CtorCat_9,
  MR_Word check_hlds__unify_proc__Res_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Y_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23);

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
check_hlds__unify_proc__generate_index_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__Type_9,
  MR_Word check_hlds__unify_proc__TypeBody_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Index_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_36,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_37);

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
check_hlds__unify_proc__generate_unify_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__Type_9,
  MR_Word check_hlds__unify_proc__TypeBody_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Y_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_39,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_40);

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
check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(
  MR_Word check_hlds__unify_proc__X_7,
  MR_Word check_hlds__unify_proc__Y_8,
  MR_Word check_hlds__unify_proc__Context_9,
  MR_Word * check_hlds__unify_proc__Clause_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15);

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
check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(
  MR_Word check_hlds__unify_proc__Type_7,
  MR_String check_hlds__unify_proc__BaseName_8,
  MR_Integer check_hlds__unify_proc__Num_9,
  MR_Word * check_hlds__unify_proc__Var_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15);

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
check_hlds__unify_proc__info_new_var_4_p_0(
  MR_Word check_hlds__unify_proc__Type_5,
  MR_Word * check_hlds__unify_proc__Var_6,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_13);

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
check_hlds__unify_proc__info_new_named_var_5_p_0(
  MR_Word check_hlds__unify_proc__Type_6,
  MR_String check_hlds__unify_proc__Name_7,
  MR_Word * check_hlds__unify_proc__Var_8,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_15);

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
check_hlds__unify_proc__quantify_clause_body_6_p_0(
  MR_Word check_hlds__unify_proc__HeadVars_7,
  MR_Word check_hlds__unify_proc__Goal0_8,
  MR_Word check_hlds__unify_proc__Context_9,
  MR_Word * check_hlds__unify_proc__Clause_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__unify_proc__build_call_6_p_0(
  MR_String check_hlds__unify_proc__Name_7,
  MR_Word check_hlds__unify_proc__ArgVars_8,
  MR_Word check_hlds__unify_proc__Context_9,
  MR_Word * check_hlds__unify_proc__Goal_10,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18);

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
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____typed_var_pair_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____typed_var_pair_0_0_10001(
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
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[4][2];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_3[3][5];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[3][1];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[2][6];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[1][7];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][12];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_9[1][13];


/* sealed */ struct check_hlds__unify_proc__vector_common_type_7_0_s {
  const MR_String check_hlds__unify_proc__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__unify_proc__vector_common_type_7_0_s check_hlds__unify_proc_vector_common_7[16];



static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[4][2] = {
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
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_3[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_compare_case_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_3[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_compare_case_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_3[2])),
    ((MR_Box) (check_hlds__unify_proc__make_fresh_vars_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_3[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_du_unify_case_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_3[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_du_unify_case_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_3[2])),
    ((MR_Box) (check_hlds__unify_proc__generate_du_index_case_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_3[3][5] = {
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
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[3][1] = {
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

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[2][6] = {
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

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[1][7] = {
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


static /* final */ const struct check_hlds__unify_proc__vector_common_type_7_0_s check_hlds__unify_proc_vector_common_7[16] = {
  /* row 0 */   {     (MR_String) "builtin_unify_int" },
  /* row 1 */   {     (MR_String) "builtin_unify_uint" },
  /* row 2 */   {     (MR_String) "builtin_unify_int8" },
  /* row 3 */   {     (MR_String) "builtin_unify_uint8" },
  /* row 4 */   {     (MR_String) "builtin_unify_int16" },
  /* row 5 */   {     (MR_String) "builtin_unify_uint16" },
  /* row 6 */   {     (MR_String) "builtin_unify_int32" },
  /* row 7 */   {     (MR_String) "builtin_unify_uint32" },
  /* row 8 */   {     (MR_String) "builtin_compare_int" },
  /* row 9 */   {     (MR_String) "builtin_compare_uint" },
  /* row 10 */   {     (MR_String) "builtin_compare_int8" },
  /* row 11 */   {     (MR_String) "builtin_compare_uint8" },
  /* row 12 */   {     (MR_String) "builtin_compare_int16" },
  /* row 13 */   {     (MR_String) "builtin_compare_uint16" },
  /* row 14 */   {     (MR_String) "builtin_compare_int32" },
  /* row 15 */   {     (MR_String) "builtin_compare_uint32" },
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_typed_var_pair_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_typed_var_pair_0_0 = {
  (MR_String) "typed_var_pair",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_typed_var_pair_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_typed_var_pair_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_typed_var_pair_0_0
};

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_typed_var_pair_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_typed_var_pair_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_typed_var_pair_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_typed_var_pair_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_typed_var_pair_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____typed_var_pair_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____typed_var_pair_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "typed_var_pair",
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_typed_var_pair_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_typed_var_pair_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_typed_var_pair_0
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
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
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0
};

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[4] = {
  (MR_String) "upi_module_info",
  (MR_String) "upi_varset",
  (MR_String) "upi_vartypes",
  (MR_String) "upi_rtti_varmaps"
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0 = {
  (MR_String) "unify_proc_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1692__1_1_f_0(
  MR_Word check_hlds__unify_proc__LambdaHeadVar__1_21)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__LambdaHeadVar__2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__1_21, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__1_21, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__1_21, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__1_21, (MR_Integer) 3)));

    return check_hlds__unify_proc__LambdaHeadVar__2_22;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__204__1_2_p_0(
  MR_Word check_hlds__unify_proc__ErrorProcs_25,
  MR_Word check_hlds__unify_proc__HeadVar__2_34)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    {
      check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[2], ((MR_Box) (check_hlds__unify_proc__ErrorProcs_25)), ((MR_Box) (check_hlds__unify_proc__HeadVar__2_34)));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__120__1_2_f_0(
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
        MR_Word check_hlds__unify_proc__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__unify_proc__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__unify_proc__Var_12;

        {
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__unify_proc__Var_12, check_hlds__unify_proc__ArgX1_4, check_hlds__unify_proc__ArgY1_5);
        }
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Var_12 == (MR_Integer) 0);
        check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
        if (check_hlds__unify_proc__succeeded)
          *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__Var_12;
        else
          {
            MR_Word check_hlds__unify_proc__Var_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[3], &check_hlds__unify_proc__Var_13, ((MR_Box) (check_hlds__unify_proc__ArgX2_6)), ((MR_Box) (check_hlds__unify_proc__ArgY2_7)));
            }
            check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Var_13 == (MR_Integer) 0);
            check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
            if (check_hlds__unify_proc__succeeded)
              *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__Var_13;
            else
              {
                MR_Word check_hlds__unify_proc__Var_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], &check_hlds__unify_proc__Var_14, ((MR_Box) (check_hlds__unify_proc__ArgX3_8)), ((MR_Box) (check_hlds__unify_proc__ArgY3_9)));
                }
                check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Var_14 == (MR_Integer) 0);
                check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
                if (check_hlds__unify_proc__succeeded)
                  *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__Var_14;
                else
                  {
                    hlds__hlds_rtti____Compare____rtti_varmaps_0_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__ArgX4_10, check_hlds__unify_proc__ArgY4_11);
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
        MR_Word check_hlds__unify_proc__TypeInfo_15_15;
        MR_Word check_hlds__unify_proc__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__unify_proc__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 3)));

        {
          check_hlds__unify_proc__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__unify_proc__ArgX1_3, check_hlds__unify_proc__ArgY1_4);
        }
        if (check_hlds__unify_proc__succeeded)
          {
            check_hlds__unify_proc__TypeInfo_14_14 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[3];
            {
              check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0(check_hlds__unify_proc__TypeInfo_14_14, ((MR_Box) (check_hlds__unify_proc__ArgX2_5)), ((MR_Box) (check_hlds__unify_proc__ArgY2_6)));
            }
            if (check_hlds__unify_proc__succeeded)
              {
                check_hlds__unify_proc__TypeInfo_15_15 = (MR_Word) &check_hlds__unify_proc_scalar_common_2[0];
                {
                  check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0(check_hlds__unify_proc__TypeInfo_15_15, ((MR_Box) (check_hlds__unify_proc__ArgX3_7)), ((MR_Box) (check_hlds__unify_proc__ArgY3_8)));
                }
                if (check_hlds__unify_proc__succeeded)
                  {
                    check_hlds__unify_proc__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__unify_proc__ArgX4_9, check_hlds__unify_proc__ArgY4_10);
                  }
              }
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

static void MR_CALL 
check_hlds__unify_proc____Compare____typed_var_pair_0_0(
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Integer check_hlds__unify_proc__CastX_12 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
    MR_Integer check_hlds__unify_proc__CastY_13 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_12 == check_hlds__unify_proc__CastY_13);
    if (check_hlds__unify_proc__succeeded)
      *check_hlds__unify_proc__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__unify_proc__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__Var_10;

        {
          parse_tree__prog_data____Compare____mer_type_0_0(&check_hlds__unify_proc__Var_10, check_hlds__unify_proc__ArgX1_4, check_hlds__unify_proc__ArgY1_5);
        }
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Var_10 == (MR_Integer) 0);
        check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
        if (check_hlds__unify_proc__succeeded)
          *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__Var_10;
        else
          {
            MR_Word check_hlds__unify_proc__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], &check_hlds__unify_proc__Var_11, ((MR_Box) (check_hlds__unify_proc__ArgX2_6)), ((MR_Box) (check_hlds__unify_proc__ArgY2_7)));
            }
            check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Var_11 == (MR_Integer) 0);
            check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
            if (check_hlds__unify_proc__succeeded)
              *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], check_hlds__unify_proc__HeadVar__1_1, ((MR_Box) (check_hlds__unify_proc__ArgX3_8)), ((MR_Box) (check_hlds__unify_proc__ArgY3_9)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____typed_var_pair_0_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Integer check_hlds__unify_proc__CastX_9 = (MR_Integer) check_hlds__unify_proc__HeadVar__1_1;
    MR_Integer check_hlds__unify_proc__CastY_10 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;

    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_9 == check_hlds__unify_proc__CastY_10);
    if (check_hlds__unify_proc__succeeded)
      check_hlds__unify_proc__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__unify_proc__TypeInfo_12_12;
        MR_Word check_hlds__unify_proc__TypeInfo_13_13;
        MR_Word check_hlds__unify_proc__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 2)));

        {
          check_hlds__unify_proc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__unify_proc__ArgX1_3, check_hlds__unify_proc__ArgY1_4);
        }
        if (check_hlds__unify_proc__succeeded)
          {
            check_hlds__unify_proc__TypeInfo_12_12 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[1];
            {
              check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0(check_hlds__unify_proc__TypeInfo_12_12, ((MR_Box) (check_hlds__unify_proc__ArgX2_5)), ((MR_Box) (check_hlds__unify_proc__ArgY2_6)));
            }
            if (check_hlds__unify_proc__succeeded)
              {
                check_hlds__unify_proc__TypeInfo_13_13 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[1];
                {
                  check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0(check_hlds__unify_proc__TypeInfo_13_13, ((MR_Box) (check_hlds__unify_proc__ArgX3_7)), ((MR_Box) (check_hlds__unify_proc__ArgY3_8)));
                }
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

static MR_Word MR_CALL 
check_hlds__unify_proc__project_var_y_1_f_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__VarY_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc___ArgType_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc___VarX_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));

    return check_hlds__unify_proc__VarY_5;
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__project_var_x_1_f_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__VarX_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc___ArgType_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc___VarY_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 2)));

    return check_hlds__unify_proc__VarX_4;
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
      check_hlds__unify_proc__conv0_LambdaHeadVar__2_22 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1692__1_1_f_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
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
    MR_Word check_hlds__unify_proc__Var_37;
    MR_Word check_hlds__unify_proc__Var_43;
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
          check_hlds__unify_proc__ArgTypes_51 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__unify_proc_scalar_common_2[7], check_hlds__unify_proc__ArgTypes_22);
        }
        {
          check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(check_hlds__unify_proc__ArgTypes_51, &check_hlds__unify_proc__ArgVars_26, check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, check_hlds__unify_proc__STATE_VARIABLE_Info_35);
        }
      }
    else
      {
        MR_Word check_hlds__unify_proc__VarSet0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
        MR_Integer check_hlds__unify_proc__NumVars_56;
        MR_Word check_hlds__unify_proc__VarSet_57;
        MR_Word check_hlds__unify_proc__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
        MR_Word check_hlds__unify_proc__Var_81;
        MR_Word check_hlds__unify_proc__Var_83;
        MR_Word check_hlds__unify_proc__Var_84;
        MR_Word check_hlds__unify_proc__Var_82;

        {
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__ArgTypes_22, &check_hlds__unify_proc__NumVars_56);
        }
        {
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__NumVars_56, &check_hlds__unify_proc__ArgVars_26, check_hlds__unify_proc__VarSet0_55, &check_hlds__unify_proc__VarSet_57);
        }
        check_hlds__unify_proc__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
        check_hlds__unify_proc__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
        check_hlds__unify_proc__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
        check_hlds__unify_proc__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__unify_proc__STATE_VARIABLE_Info_35 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_81));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarSet_57));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__Var_83));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Var_84));
        }
      }
    {
      check_hlds__unify_proc__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_37, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_37, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_37, 2) = ((MR_Box) (check_hlds__unify_proc__ArgVars_26));
    }
    {
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_12, check_hlds__unify_proc__Var_37, check_hlds__unify_proc__Context_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_27);
    }
    {
      hlds__make_goal__make_int_const_construction_3_p_0(check_hlds__unify_proc__Index_13, check_hlds__unify_proc__STATE_VARIABLE_N_0_32, &check_hlds__unify_proc__UnifyIndex_Goal_28);
    }
    *check_hlds__unify_proc__STATE_VARIABLE_N_33 = (check_hlds__unify_proc__STATE_VARIABLE_N_0_32 + (MR_Integer) 1);
    {
      check_hlds__unify_proc__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_43, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyIndex_Goal_28));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__GoalList_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_29, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_27));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_29, 1) = ((MR_Box) (check_hlds__unify_proc__Var_43));
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

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0_2(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
{
  {
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
    MR_Word check_hlds__unify_proc__conv1_VarY_5;

    {
      check_hlds__unify_proc__conv1_VarY_5 = check_hlds__unify_proc__project_var_y_1_f_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv1_VarY_5));
    return check_hlds__unify_proc__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
{
  {
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
    MR_Word check_hlds__unify_proc__conv0_VarX_4;

    {
      check_hlds__unify_proc__conv0_VarX_4 = check_hlds__unify_proc__project_var_x_1_f_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv0_VarX_4));
    return check_hlds__unify_proc__wrapper_arg_2;
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
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_44,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_45)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ExistQTVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__FunctorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__ArgTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 3)));
    MR_Integer check_hlds__unify_proc__FunctorArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 4)));
    MR_Word check_hlds__unify_proc__FunctorConsId_25;
    MR_Word check_hlds__unify_proc__GoalList_35;
    MR_Word check_hlds__unify_proc__GoalInfo0_42;
    MR_Word check_hlds__unify_proc__GoalInfo_43;
    MR_Word check_hlds__unify_proc___Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc___Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 5)));
    MR_Word check_hlds__unify_proc__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_10, (MR_Integer) 0)));
    MR_String check_hlds__unify_proc__Var_47;
    MR_Integer check_hlds__unify_proc__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_10, (MR_Integer) 1)));

    check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Var_46)) == (MR_mktag((MR_Integer) 0)));
    if (check_hlds__unify_proc__succeeded)
      {
        check_hlds__unify_proc__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_46, (MR_Integer) 0)));
        check_hlds__unify_proc__succeeded = (strcmp(check_hlds__unify_proc__Var_47, (MR_String) "{}") == 0);
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
        MR_Word check_hlds__unify_proc__Var_52;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_54_54;
        MR_Word check_hlds__unify_proc__Var_55;
        MR_Word check_hlds__unify_proc__Var_62;
        MR_Word check_hlds__unify_proc__Var_65;
        MR_Word check_hlds__unify_proc__Var_66;
        MR_Word check_hlds__unify_proc__Var_67;

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
          check_hlds__unify_proc__Var_52 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
        {
          check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__Var_52, (MR_String) "CastX", &check_hlds__unify_proc__CastX_28, check_hlds__unify_proc__STATE_VARIABLE_Info_0_44, &check_hlds__unify_proc__STATE_VARIABLE_Info_54_54);
        }
        {
          check_hlds__unify_proc__Var_55 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
        {
          check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__Var_55, (MR_String) "CastY", &check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__STATE_VARIABLE_Info_54_54, check_hlds__unify_proc__STATE_VARIABLE_Info_45);
        }
        {
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__X_11, check_hlds__unify_proc__CastX_28, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastXGoal0_30);
        }
        {
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastYGoal0_31);
        }
        {
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 12, check_hlds__unify_proc__CastXGoal0_30, &check_hlds__unify_proc__CastXGoal_32);
        }
        {
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 12, check_hlds__unify_proc__CastYGoal0_31, &check_hlds__unify_proc__CastYGoal_33);
        }
        {
          check_hlds__unify_proc__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_62, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_28));
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__Var_62, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_34);
        }
        {
          check_hlds__unify_proc__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_67, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_34));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_66, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_33));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_66, 1) = ((MR_Box) (check_hlds__unify_proc__Var_67));
        }
        {
          check_hlds__unify_proc__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_65, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_32));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_65, 1) = ((MR_Box) (check_hlds__unify_proc__Var_66));
        }
        {
          check_hlds__unify_proc__GoalList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_27));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 1) = ((MR_Box) (check_hlds__unify_proc__Var_65));
        }
      }
    else
      {
        MR_Word check_hlds__unify_proc__TypeCtorInfo_82_82;
        MR_Word check_hlds__unify_proc__TypeInfo_83_83;
        MR_Word check_hlds__unify_proc__TypedVarPairs_36;
        MR_Word check_hlds__unify_proc__VarsX_37;
        MR_Word check_hlds__unify_proc__VarsY_38;
        MR_Word check_hlds__unify_proc__RHSX_39;
        MR_Word check_hlds__unify_proc__RHSY_40;
        MR_Word check_hlds__unify_proc__UnifyArgs_Goals_41;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_69_69;
        MR_Word check_hlds__unify_proc__Var_79;
        MR_Word check_hlds__unify_proc__UnifyX_Goal_80;
        MR_Word check_hlds__unify_proc__UnifyY_Goal_81;

        {
          check_hlds__unify_proc__make_fresh_arg_var_pairs_5_p_0(check_hlds__unify_proc__ExistQTVars_18, check_hlds__unify_proc__ArgTypes_21, &check_hlds__unify_proc__TypedVarPairs_36, check_hlds__unify_proc__STATE_VARIABLE_Info_0_44, &check_hlds__unify_proc__STATE_VARIABLE_Info_69_69);
        }
        check_hlds__unify_proc__TypeCtorInfo_82_82 = (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0;
        check_hlds__unify_proc__TypeInfo_83_83 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[1];
        {
          check_hlds__unify_proc__VarsX_37 = mercury__list__map_2_f_0(check_hlds__unify_proc__TypeCtorInfo_82_82, check_hlds__unify_proc__TypeInfo_83_83, (MR_Word) &check_hlds__unify_proc_scalar_common_2[5], check_hlds__unify_proc__TypedVarPairs_36);
        }
        {
          check_hlds__unify_proc__VarsY_38 = mercury__list__map_2_f_0(check_hlds__unify_proc__TypeCtorInfo_82_82, check_hlds__unify_proc__TypeInfo_83_83, (MR_Word) &check_hlds__unify_proc_scalar_common_2[6], check_hlds__unify_proc__TypedVarPairs_36);
        }
        {
          check_hlds__unify_proc__RHSX_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHSX_39, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHSX_39, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHSX_39, 2) = ((MR_Box) (check_hlds__unify_proc__VarsX_37));
        }
        {
          check_hlds__unify_proc__RHSY_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHSY_40, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHSY_40, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHSY_40, 2) = ((MR_Box) (check_hlds__unify_proc__VarsY_38));
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__RHSX_39, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_80);
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_12, check_hlds__unify_proc__RHSY_40, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_81);
        }
        {
          check_hlds__unify_proc__unify_var_lists_5_p_0(check_hlds__unify_proc__ExistQTVars_18, check_hlds__unify_proc__TypedVarPairs_36, &check_hlds__unify_proc__UnifyArgs_Goals_41, check_hlds__unify_proc__STATE_VARIABLE_Info_69_69, check_hlds__unify_proc__STATE_VARIABLE_Info_45);
        }
        {
          check_hlds__unify_proc__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_79, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_81));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_79, 1) = ((MR_Box) (check_hlds__unify_proc__UnifyArgs_Goals_41));
        }
        {
          check_hlds__unify_proc__GoalList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_80));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 1) = ((MR_Box) (check_hlds__unify_proc__Var_79));
        }
      }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_42);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_42, &check_hlds__unify_proc__GoalInfo_43);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_35, check_hlds__unify_proc__GoalInfo_43, check_hlds__unify_proc__Goal_16);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_1(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_3(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVar_34 = ((MR_Word) (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__conv0_ExistQTVar_34);
    {
      check_hlds__unify_proc__unify_var_lists_5_p_0_2(check_hlds__unify_proc__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_4(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__TypeInfo_37_37 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[0];
    {
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__TypeInfo_37_37, ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVar_34)), ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Var_36)));
    }
    if ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded)
      {
        check_hlds__unify_proc__unify_var_lists_5_p_0_1(check_hlds__unify_proc__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_2(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    {
      parse_tree__prog_type__type_contains_var_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Type_16, &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Var_36, check_hlds__unify_proc__unify_var_lists_5_p_0_4, check_hlds__unify_proc__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_5(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__conv0_ExistQTVar_34, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVars_1, check_hlds__unify_proc__unify_var_lists_5_p_0_3, check_hlds__unify_proc__env_ptr);
          }
        }
        (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0(
  MR_Word check_hlds__unify_proc__ExistQTVars_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word * check_hlds__unify_proc__HeadVar__3_3,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_5)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s check_hlds__unify_proc__env;

    (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVars_1 = check_hlds__unify_proc__ExistQTVars_1;
    if ((check_hlds__unify_proc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__unify_proc__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__unify_proc__STATE_VARIABLE_Info_5 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_4;
      }
    else
      {
        MR_Word check_hlds__unify_proc__TypedVarPair_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__TypedVarPairs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__Goal_13;
        MR_Word check_hlds__unify_proc__Goals_14;
        MR_Word check_hlds__unify_proc__X_17;
        MR_Word check_hlds__unify_proc__Y_18;
        MR_Word check_hlds__unify_proc__Context_19;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_27_27;
        MR_Word check_hlds__unify_proc__ModuleInfo_20;
        MR_Word check_hlds__unify_proc__Var_24;
        MR_Word check_hlds__unify_proc__Var_40;
        MR_Word check_hlds__unify_proc__Var_41;
        MR_Word check_hlds__unify_proc__Var_42;

        (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypedVarPair_11, (MR_Integer) 0)));
        check_hlds__unify_proc__X_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypedVarPair_11, (MR_Integer) 1)));
        check_hlds__unify_proc__Y_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypedVarPair_11, (MR_Integer) 2)));
        {
          mercury__term__context_init_1_p_0(&check_hlds__unify_proc__Context_19);
        }
        check_hlds__unify_proc__ModuleInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
        check_hlds__unify_proc__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
        check_hlds__unify_proc__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
        check_hlds__unify_proc__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
        {
          check_hlds__unify_proc__Var_24 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_20, (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Type_16);
        }
        (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded = (check_hlds__unify_proc__Var_24 == (MR_Integer) 0);
        if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded)
          {
            {
              check_hlds__unify_proc__Goal_13 = hlds__make_goal__true_goal_0_f_0();
            }
            check_hlds__unify_proc__STATE_VARIABLE_Info_27_27 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_4;
          }
        else
          {
            {
              check_hlds__unify_proc__unify_var_lists_5_p_0_5(&check_hlds__unify_proc__env);
            }
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded)
              {
                MR_Word check_hlds__unify_proc__Var_26;
                MR_Word check_hlds__unify_proc__Var_28;

                {
                  check_hlds__unify_proc__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_28, 0) = ((MR_Box) (check_hlds__unify_proc__Y_18));
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__unify_proc__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_26, 0) = ((MR_Box) (check_hlds__unify_proc__X_17));
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_26, 1) = ((MR_Box) (check_hlds__unify_proc__Var_28));
                }
                {
                  check_hlds__unify_proc__build_call_6_p_0((MR_String) "typed_unify", check_hlds__unify_proc__Var_26, check_hlds__unify_proc__Context_19, &check_hlds__unify_proc__Goal_13, check_hlds__unify_proc__STATE_VARIABLE_Info_0_4, &check_hlds__unify_proc__STATE_VARIABLE_Info_27_27);
                }
              }
            else
              {
                MR_Word check_hlds__unify_proc__Var_30;

                {
                  check_hlds__unify_proc__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_30, 0) = ((MR_Box) (check_hlds__unify_proc__Y_18));
                }
                {
                  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_17, check_hlds__unify_proc__Var_30, check_hlds__unify_proc__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Goal_13);
                }
                check_hlds__unify_proc__STATE_VARIABLE_Info_27_27 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_4;
              }
          }
        {
          check_hlds__unify_proc__unify_var_lists_5_p_0((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVars_1, check_hlds__unify_proc__TypedVarPairs_12, &check_hlds__unify_proc__Goals_14, check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, check_hlds__unify_proc__STATE_VARIABLE_Info_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__unify_proc__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Goal_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Goals_14));
        }
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
    MR_Word check_hlds__unify_proc__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__Var_13;
    MR_Word check_hlds__unify_proc__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 2)));
    MR_Integer check_hlds__unify_proc__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 4)));
    MR_Word check_hlds__unify_proc__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 5)));
    MR_Word check_hlds__unify_proc__Var_21;
    MR_Word check_hlds__unify_proc__Var_22;
    MR_Word check_hlds__unify_proc__Var_23;
    MR_Integer check_hlds__unify_proc__Var_24;
    MR_Word check_hlds__unify_proc__Var_25;

    {
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_36_36, check_hlds__unify_proc__Var_12, &check_hlds__unify_proc__ArityA_7);
    }
    check_hlds__unify_proc__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 0)));
    check_hlds__unify_proc__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 1)));
    check_hlds__unify_proc__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 3)));
    check_hlds__unify_proc__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 4)));
    check_hlds__unify_proc__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 5)));
    {
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_36_36, check_hlds__unify_proc__Var_13, &check_hlds__unify_proc__ArityB_8);
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
          MR_Word check_hlds__unify_proc__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 2)));
          MR_Word check_hlds__unify_proc__Var_15;
          MR_Word check_hlds__unify_proc__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 0)));
          MR_Word check_hlds__unify_proc__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 1)));
          MR_Word check_hlds__unify_proc__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 3)));
          MR_Integer check_hlds__unify_proc__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 4)));
          MR_Word check_hlds__unify_proc__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 5)));
          MR_Word check_hlds__unify_proc__Var_31;
          MR_Word check_hlds__unify_proc__Var_32;
          MR_Word check_hlds__unify_proc__Var_33;
          MR_Integer check_hlds__unify_proc__Var_34;
          MR_Word check_hlds__unify_proc__Var_35;

          {
            check_hlds__unify_proc__NameA_10 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__unify_proc__Var_14);
          }
          check_hlds__unify_proc__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 0)));
          check_hlds__unify_proc__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 1)));
          check_hlds__unify_proc__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 2)));
          check_hlds__unify_proc__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 3)));
          check_hlds__unify_proc__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 4)));
          check_hlds__unify_proc__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 5)));
          {
            check_hlds__unify_proc__NameB_11 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__unify_proc__Var_15);
          }
          {
            mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__unify_proc__Res_6, check_hlds__unify_proc__NameA_10, check_hlds__unify_proc__NameB_11);
          }
        }
        break;
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
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_48_48;
    MR_Word check_hlds__unify_proc__Var_52;
    MR_Word check_hlds__unify_proc__Var_55;
    MR_Word check_hlds__unify_proc__VarSet_67;
    MR_Word check_hlds__unify_proc__VarTypes_68;
    MR_Word check_hlds__unify_proc__RttiVarMaps_69;
    MR_Word check_hlds__unify_proc___Modes_14;
    MR_Word check_hlds__unify_proc___Det_15;
    MR_Word check_hlds__unify_proc__Var_72;
    MR_Word check_hlds__unify_proc__Var_74;

    {
      hlds__special_pred__special_pred_interface_5_p_0(check_hlds__unify_proc__SpecialPredId_7, check_hlds__unify_proc__Type_8, &check_hlds__unify_proc__ArgTypes_13, &check_hlds__unify_proc___Modes_14, &check_hlds__unify_proc___Det_15);
    }
    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__unify_proc__VarSet_67);
    }
    {
      hlds__vartypes__init_vartypes_1_p_0(&check_hlds__unify_proc__VarTypes_68);
    }
    {
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&check_hlds__unify_proc__RttiVarMaps_69);
    }
    {
      check_hlds__unify_proc__STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (check_hlds__unify_proc__ModuleInfo_11));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, 1) = ((MR_Box) (check_hlds__unify_proc__VarSet_67));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (check_hlds__unify_proc__VarTypes_68));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_69));
    }
    {
      check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(check_hlds__unify_proc__ArgTypes_13, (MR_String) "HeadVar__", (MR_Integer) 1, &check_hlds__unify_proc__Args_17, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, &check_hlds__unify_proc__STATE_VARIABLE_Info_34_34);
    }
    switch (check_hlds__unify_proc__SpecialPredId_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__unify_proc__Res_22;
          MR_Word check_hlds__unify_proc__X_58;
          MR_Word check_hlds__unify_proc__Y_59;
          MR_Word check_hlds__unify_proc__Var_35;
          MR_Word check_hlds__unify_proc__Var_36;
          MR_Word check_hlds__unify_proc__Var_37;

          check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__unify_proc__succeeded)
            {
              check_hlds__unify_proc__Res_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
              check_hlds__unify_proc__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
              check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Var_35)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__unify_proc__succeeded)
                {
                  check_hlds__unify_proc__X_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_35, (MR_Integer) 0)));
                  check_hlds__unify_proc__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_35, (MR_Integer) 1)));
                  check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Var_36)) == (MR_mktag((MR_Integer) 1)));
                  if (check_hlds__unify_proc__succeeded)
                    {
                      check_hlds__unify_proc__Y_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_36, (MR_Integer) 0)));
                      check_hlds__unify_proc__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_36, (MR_Integer) 1)));
                      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Var_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
            }
          if (check_hlds__unify_proc__succeeded)
            {
              check_hlds__unify_proc__generate_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__Res_22, check_hlds__unify_proc__X_58, check_hlds__unify_proc__Y_59, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_34_34, &check_hlds__unify_proc__STATE_VARIABLE_Info_48_48);
            }
          else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad compare args");
                return;
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unify_proc__Index_21;
          MR_Word check_hlds__unify_proc__X_56;
          MR_Word check_hlds__unify_proc__Var_41;
          MR_Word check_hlds__unify_proc__Var_42;

          check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__unify_proc__succeeded)
            {
              check_hlds__unify_proc__X_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
              check_hlds__unify_proc__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
              check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Var_41)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__unify_proc__succeeded)
                {
                  check_hlds__unify_proc__Index_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_41, (MR_Integer) 0)));
                  check_hlds__unify_proc__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_41, (MR_Integer) 1)));
                  check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Var_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
            }
          if (check_hlds__unify_proc__succeeded)
            {
              check_hlds__unify_proc__generate_index_proc_body_8_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__X_56, check_hlds__unify_proc__Index_21, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_34_34, &check_hlds__unify_proc__STATE_VARIABLE_Info_48_48);
            }
          else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad index args");
                return;
              }
            }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__unify_proc__X_18;
          MR_Word check_hlds__unify_proc__Y_19;
          MR_Word check_hlds__unify_proc__Var_46;
          MR_Word check_hlds__unify_proc__Var_47;

          check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__unify_proc__succeeded)
            {
              check_hlds__unify_proc__X_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
              check_hlds__unify_proc__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
              check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Var_46)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__unify_proc__succeeded)
                {
                  check_hlds__unify_proc__Y_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_46, (MR_Integer) 0)));
                  check_hlds__unify_proc__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_46, (MR_Integer) 1)));
                  check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
            }
          if (check_hlds__unify_proc__succeeded)
            {
              check_hlds__unify_proc__generate_unify_proc_body_8_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__X_18, check_hlds__unify_proc__Y_19, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_34_34, &check_hlds__unify_proc__STATE_VARIABLE_Info_48_48);
            }
          else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad unify args");
                return;
              }
            }
        }
        break;
    }
    check_hlds__unify_proc__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
    check_hlds__unify_proc__VarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
    check_hlds__unify_proc__Types_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
    {
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__unify_proc_scalar_common_1[0], &check_hlds__unify_proc__TVarNameMap_25);
    }
    {
      check_hlds__unify_proc__ArgVec_26 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], (MR_Integer) 0, check_hlds__unify_proc__Args_17);
    }
    {
      check_hlds__unify_proc__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_52, 0) = ((MR_Box) (check_hlds__unify_proc__Clause_20));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__unify_proc__Var_52, &check_hlds__unify_proc__ClausesRep_27);
    }
    {
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&check_hlds__unify_proc__RttiVarMaps_28);
    }
    {
      check_hlds__unify_proc__Var_55 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__ClauseInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__TVarNameMap_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__Types_24));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Types_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__unify_proc__ArgVec_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__unify_proc__ClausesRep_27));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__unify_proc__Var_55));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_28));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 0));
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
        MR_Integer check_hlds__unify_proc__Var_22;
        MR_String check_hlds__unify_proc__NumStr_32;
        MR_String check_hlds__unify_proc__Name_33;
        MR_Word check_hlds__unify_proc__VarSet0_41;
        MR_Word check_hlds__unify_proc__VarTypes0_42;
        MR_Word check_hlds__unify_proc__VarSet_43;
        MR_Word check_hlds__unify_proc__VarTypes_44;
        MR_Word check_hlds__unify_proc__Var_53;
        MR_Word check_hlds__unify_proc__Var_56;
        MR_Word check_hlds__unify_proc__Var_47;
        MR_Word check_hlds__unify_proc__Var_49;
        MR_Word check_hlds__unify_proc__Var_54;
        MR_Word check_hlds__unify_proc__Var_55;

        {
          mercury__string__int_to_string_2_p_0(check_hlds__unify_proc__Num_3, &check_hlds__unify_proc__NumStr_32);
        }
        {
          mercury__string__append_3_p_2(check_hlds__unify_proc__BaseName_2, check_hlds__unify_proc__NumStr_32, &check_hlds__unify_proc__Name_33);
        }
        check_hlds__unify_proc__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
        check_hlds__unify_proc__VarSet0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
        check_hlds__unify_proc__VarTypes0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
        check_hlds__unify_proc__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
        {
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_33, &check_hlds__unify_proc__Var_16, check_hlds__unify_proc__VarSet0_41, &check_hlds__unify_proc__VarSet_43);
        }
        {
          hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__Var_16, check_hlds__unify_proc__Type_12, check_hlds__unify_proc__VarTypes0_42, &check_hlds__unify_proc__VarTypes_44);
        }
        check_hlds__unify_proc__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
        check_hlds__unify_proc__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
        check_hlds__unify_proc__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
        check_hlds__unify_proc__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
        {
          check_hlds__unify_proc__STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (check_hlds__unify_proc__Var_53));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (check_hlds__unify_proc__VarSet_43));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (check_hlds__unify_proc__VarTypes_44));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (check_hlds__unify_proc__Var_56));
        }
        check_hlds__unify_proc__Var_22 = (check_hlds__unify_proc__Num_3 + (MR_Integer) 1);
        {
          check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(check_hlds__unify_proc__Types_13, check_hlds__unify_proc__BaseName_2, check_hlds__unify_proc__Var_22, &check_hlds__unify_proc__Vars_17, check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, check_hlds__unify_proc__STATE_VARIABLE_Info_6);
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
check_hlds__unify_proc__generate_compare_proc_body_9_p_0(
  MR_Word check_hlds__unify_proc__Type_10,
  MR_Word check_hlds__unify_proc__TypeBody_11,
  MR_Word check_hlds__unify_proc__Res_12,
  MR_Word check_hlds__unify_proc__X_13,
  MR_Word check_hlds__unify_proc__Y_14,
  MR_Word check_hlds__unify_proc__Context_15,
  MR_Word * check_hlds__unify_proc__Clause_16,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__TypeCtor_19;
    MR_Word check_hlds__unify_proc__Var_42;

    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_10, &check_hlds__unify_proc__TypeCtor_19);
    }
    {
      check_hlds__unify_proc__Var_42 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__unify_proc__TypeCtor_19);
    }
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Var_42 == (MR_Integer) 0);
    if (check_hlds__unify_proc__succeeded)
      {
        MR_Word check_hlds__unify_proc__Goal_72;
        MR_Word check_hlds__unify_proc__Var_73;
        MR_Word check_hlds__unify_proc__Var_75;
        MR_Word check_hlds__unify_proc__Var_76;
        MR_Word check_hlds__unify_proc__Goal0_81;
        MR_Word check_hlds__unify_proc__Var_82;
        MR_Word check_hlds__unify_proc__SymName_85;
        MR_Word check_hlds__unify_proc__Var_87;
        MR_Word check_hlds__unify_proc__Var_88;
        MR_Word check_hlds__unify_proc__Builtin_90;
        MR_Word check_hlds__unify_proc__Var_91;

        {
          check_hlds__unify_proc__Builtin_90 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
        {
          check_hlds__unify_proc__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_91, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_90));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_91, 1) = ((MR_Box) ((MR_String) "comparison_result"));
        }
        {
          check_hlds__unify_proc__Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_87, 0) = ((MR_Box) (check_hlds__unify_proc__Var_91));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_87, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          check_hlds__unify_proc__Var_88 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
        {
          check_hlds__unify_proc__SymName_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_85, 0) = ((MR_Box) (check_hlds__unify_proc__Var_88));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_85, 1) = ((MR_Box) ((MR_String) "="));
        }
        {
          check_hlds__unify_proc__Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_82, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_85));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_82, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_82, 3) = ((MR_Box) (check_hlds__unify_proc__Var_87));
        }
        {
          hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__Var_82, &check_hlds__unify_proc__Goal0_81);
        }
        {
          hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Goal0_81, &check_hlds__unify_proc__Goal_72);
        }
        {
          check_hlds__unify_proc__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_76, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_75, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_75, 1) = ((MR_Box) (check_hlds__unify_proc__Var_76));
        }
        {
          check_hlds__unify_proc__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_73, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_73, 1) = ((MR_Box) (check_hlds__unify_proc__Var_75));
        }
        {
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__Var_73, check_hlds__unify_proc__Goal_72, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
        }
      }
    else
      {
        MR_Word check_hlds__unify_proc__UserEqComp_20;

        {
          check_hlds__unify_proc__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__TypeBody_11, &check_hlds__unify_proc__UserEqComp_20);
        }
        if (check_hlds__unify_proc__succeeded)
          {
            check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(check_hlds__unify_proc__UserEqComp_20, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
          }
        else
          switch (MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__unify_proc__Var_49;

                {
                  check_hlds__unify_proc__Var_49 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                }
                {
                  check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(check_hlds__unify_proc__Var_49, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__unify_proc__Ctors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 0)));
                MR_Word check_hlds__unify_proc__DuTypeKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 3)));
                MR_Word check_hlds__unify_proc__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 1)));
                MR_Word check_hlds__unify_proc__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 2)));
                MR_Word check_hlds__unify_proc__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 4)));
                MR_Word check_hlds__unify_proc__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 5)));
                MR_Word check_hlds__unify_proc__Var_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 6)))) & (MR_Integer) 1);
                MR_Word check_hlds__unify_proc__Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word check_hlds__unify_proc__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 7)));

                switch (MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_24)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(check_hlds__unify_proc__DuTypeKind_24)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word check_hlds__unify_proc__ArgType_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 1)));
                      MR_Word check_hlds__unify_proc__IsDummyType_34;
                      MR_Word check_hlds__unify_proc__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 0)));
                      MR_Word check_hlds__unify_proc__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 2)));

                      {
                        check_hlds__unify_proc__IsDummyType_34 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__ArgType_32);
                      }
                      switch (check_hlds__unify_proc__IsDummyType_34) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
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
                MR_Word check_hlds__unify_proc__IsDummyType_58;

                {
                  check_hlds__unify_proc__IsDummyType_58 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__EqvType_35);
                }
                switch (check_hlds__unify_proc__IsDummyType_58) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(check_hlds__unify_proc__EqvType_35, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
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
                    check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      check_hlds__unify_proc__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(check_hlds__unify_proc__ModuleInfo_18);
                    }
                    if (check_hlds__unify_proc__succeeded)
                      {
                        MR_Word check_hlds__unify_proc__TypeCategory_39;

                        {
                          check_hlds__unify_proc__TypeCategory_39 = check_hlds__type_util__classify_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__Type_10);
                        }
                        {
                          check_hlds__unify_proc__generate_builtin_compare_8_p_0(check_hlds__unify_proc__TypeCategory_39, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/9", (MR_String) "trying to create compare proc for abstract type");
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
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__Globals_19;
    MR_Word check_hlds__unify_proc__LexicalOrder_20;
    MR_Word check_hlds__unify_proc__Ctors_21;
    MR_Word check_hlds__unify_proc__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_18, &check_hlds__unify_proc__Globals_19);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_19, (MR_Integer) 280, &check_hlds__unify_proc__LexicalOrder_20);
    }
    switch (check_hlds__unify_proc__LexicalOrder_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__unify_proc__Ctors_21 = check_hlds__unify_proc__Ctors0_11;
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__list__sort_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &check_hlds__unify_proc_scalar_common_2[4], check_hlds__unify_proc__Ctors0_11, &check_hlds__unify_proc__Ctors_21);
          }
        }
        break;
    }
    if ((check_hlds__unify_proc__Ctors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_du_compare_proc_body\'/9", (MR_String) "compare for type with no functors");
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
        MR_Word check_hlds__unify_proc__Var_37;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_38_38;
        MR_Word check_hlds__unify_proc__Var_39;
        MR_Word check_hlds__unify_proc__Var_40;

        {
          libs__globals__lookup_int_option_3_p_0(check_hlds__unify_proc__Globals_19, (MR_Integer) 321, &check_hlds__unify_proc__CompareSpec_24);
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
            MR_Word check_hlds__unify_proc__Var_135;

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
              check_hlds__unify_proc__Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_135, 0) = ((MR_Box) (check_hlds__unify_proc__Case_126));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__RightCtors_118, check_hlds__unify_proc__Cmp1_127, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Var_135, &check_hlds__unify_proc__STATE_VARIABLE_Cases_39_98, check_hlds__unify_proc__STATE_VARIABLE_Info_44_133, &check_hlds__unify_proc__STATE_VARIABLE_Info_40_99);
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
          check_hlds__unify_proc__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_37, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
        }
        {
          check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Var_37, check_hlds__unify_proc__Goal0_27, &check_hlds__unify_proc__Goal_28, check_hlds__unify_proc__STATE_VARIABLE_Info_35_35, &check_hlds__unify_proc__STATE_VARIABLE_Info_38_38);
        }
        {
          check_hlds__unify_proc__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_40, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_39, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_39, 1) = ((MR_Box) (check_hlds__unify_proc__Var_40));
        }
        {
          check_hlds__unify_proc__HeadVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVars_29, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVars_29, 1) = ((MR_Box) (check_hlds__unify_proc__Var_39));
        }
        {
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__HeadVars_29, check_hlds__unify_proc__Goal_28, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_38_38, check_hlds__unify_proc__STATE_VARIABLE_Info_31);
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
    MR_Word check_hlds__unify_proc__Var_44;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_45_45;
    MR_Word check_hlds__unify_proc__Var_47;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_49_49;
    MR_Word check_hlds__unify_proc__Var_50;
    MR_Word check_hlds__unify_proc__Var_53;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_55_55;
    MR_Word check_hlds__unify_proc__Var_56;
    MR_Word check_hlds__unify_proc__Var_59;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_60_60;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_65_65;
    MR_Word check_hlds__unify_proc__Var_68;
    MR_Word check_hlds__unify_proc__Var_70;
    MR_Word check_hlds__unify_proc__Var_72;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_75_75;
    MR_Word check_hlds__unify_proc__Var_76;
    MR_Word check_hlds__unify_proc__Var_80;
    MR_Word check_hlds__unify_proc__Var_82;
    MR_Word check_hlds__unify_proc__Var_84;
    MR_Word check_hlds__unify_proc__Var_86;
    MR_Word check_hlds__unify_proc__Var_88;
    MR_Word check_hlds__unify_proc__Var_89;
    MR_Word check_hlds__unify_proc__Var_90;

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
      check_hlds__unify_proc__Var_44 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    }
    {
      check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__Var_44, &check_hlds__unify_proc__R_21, check_hlds__unify_proc__STATE_VARIABLE_Info_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_45_45);
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
      check_hlds__unify_proc__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_50, 0) = ((MR_Box) (check_hlds__unify_proc__X_Index_19));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_47, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_47, 1) = ((MR_Box) (check_hlds__unify_proc__Var_50));
    }
    {
      check_hlds__unify_proc__build_specific_call_9_p_0(check_hlds__unify_proc__Type_10, (MR_Integer) 1, check_hlds__unify_proc__Var_47, check_hlds__unify_proc__X_InstmapDelta_24, (MR_Integer) 0, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_X_Index_25, check_hlds__unify_proc__STATE_VARIABLE_Info_45_45, &check_hlds__unify_proc__STATE_VARIABLE_Info_49_49);
    }
    {
      check_hlds__unify_proc__Y_InstmapDelta_26 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__unify_proc__Y_Index_20);
    }
    {
      check_hlds__unify_proc__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_56, 0) = ((MR_Box) (check_hlds__unify_proc__Y_Index_20));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_53, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_53, 1) = ((MR_Box) (check_hlds__unify_proc__Var_56));
    }
    {
      check_hlds__unify_proc__build_specific_call_9_p_0(check_hlds__unify_proc__Type_10, (MR_Integer) 1, check_hlds__unify_proc__Var_53, check_hlds__unify_proc__Y_InstmapDelta_26, (MR_Integer) 0, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Y_Index_27, check_hlds__unify_proc__STATE_VARIABLE_Info_49_49, &check_hlds__unify_proc__STATE_VARIABLE_Info_55_55);
    }
    {
      check_hlds__unify_proc__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_59, 0) = ((MR_Box) (check_hlds__unify_proc__X_Index_19));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_59, 1) = ((MR_Box) (check_hlds__unify_proc__Var_56));
    }
    {
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_int_lt", check_hlds__unify_proc__Var_59, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Less_Than_28, check_hlds__unify_proc__STATE_VARIABLE_Info_55_55, &check_hlds__unify_proc__STATE_VARIABLE_Info_60_60);
    }
    {
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_int_gt", check_hlds__unify_proc__Var_59, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Greater_Than_29, check_hlds__unify_proc__STATE_VARIABLE_Info_60_60, &check_hlds__unify_proc__STATE_VARIABLE_Info_65_65);
    }
    {
      check_hlds__unify_proc__Var_68 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "<");
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__Var_68, &check_hlds__unify_proc__Return_Less_Than_30);
    }
    {
      check_hlds__unify_proc__Var_70 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) ">");
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__Var_70, &check_hlds__unify_proc__Return_Greater_Than_31);
    }
    {
      check_hlds__unify_proc__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_72, 0) = ((MR_Box) (check_hlds__unify_proc__R_21));
    }
    {
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__Var_72, check_hlds__unify_proc__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Return_R_32);
    }
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_10, &check_hlds__unify_proc__TypeCtor_33);
    }
    {
      check_hlds__unify_proc__generate_compare_cases_9_p_0(check_hlds__unify_proc__TypeCtor_33, check_hlds__unify_proc__Ctors_11, check_hlds__unify_proc__R_21, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Cases_34, check_hlds__unify_proc__STATE_VARIABLE_Info_65_65, &check_hlds__unify_proc__STATE_VARIABLE_Info_75_75);
    }
    {
      check_hlds__unify_proc__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_76, 1) = ((MR_Box) (check_hlds__unify_proc__Cases_34));
    }
    {
      check_hlds__unify_proc__CasesGoal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CasesGoal_35, 0) = ((MR_Box) (check_hlds__unify_proc__Var_76));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CasesGoal_35, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
    }
    {
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "compare_error", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Abort_36, check_hlds__unify_proc__STATE_VARIABLE_Info_75_75, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
    }
    {
      check_hlds__unify_proc__Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_80, 2) = ((MR_Box) (check_hlds__unify_proc__CasesGoal_35));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_80, 3) = ((MR_Box) (check_hlds__unify_proc__Return_R_32));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_80, 4) = ((MR_Box) (check_hlds__unify_proc__Abort_36));
    }
    {
      check_hlds__unify_proc__HandleEqualGoal_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleEqualGoal_37, 0) = ((MR_Box) (check_hlds__unify_proc__Var_80));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleEqualGoal_37, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
    }
    {
      check_hlds__unify_proc__Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_82, 2) = ((MR_Box) (check_hlds__unify_proc__Call_Greater_Than_29));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_82, 3) = ((MR_Box) (check_hlds__unify_proc__Return_Greater_Than_31));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_82, 4) = ((MR_Box) (check_hlds__unify_proc__HandleEqualGoal_37));
    }
    {
      check_hlds__unify_proc__HandleGreaterEqualGoal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleGreaterEqualGoal_38, 0) = ((MR_Box) (check_hlds__unify_proc__Var_82));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleGreaterEqualGoal_38, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
    }
    {
      check_hlds__unify_proc__Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_84, 2) = ((MR_Box) (check_hlds__unify_proc__Call_Less_Than_28));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_84, 3) = ((MR_Box) (check_hlds__unify_proc__Return_Less_Than_30));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_84, 4) = ((MR_Box) (check_hlds__unify_proc__HandleGreaterEqualGoal_38));
    }
    {
      check_hlds__unify_proc__HandleLessGreaterEqualGoal_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleLessGreaterEqualGoal_39, 0) = ((MR_Box) (check_hlds__unify_proc__Var_84));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleLessGreaterEqualGoal_39, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
    }
    {
      check_hlds__unify_proc__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_90, 0) = ((MR_Box) (check_hlds__unify_proc__HandleLessGreaterEqualGoal_39));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_89, 0) = ((MR_Box) (check_hlds__unify_proc__Call_Y_Index_27));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_89, 1) = ((MR_Box) (check_hlds__unify_proc__Var_90));
    }
    {
      check_hlds__unify_proc__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_88, 0) = ((MR_Box) (check_hlds__unify_proc__Call_X_Index_25));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_88, 1) = ((MR_Box) (check_hlds__unify_proc__Var_89));
    }
    {
      check_hlds__unify_proc__Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_86, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_86, 2) = ((MR_Box) (check_hlds__unify_proc__Var_88));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__Goal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_86));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
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
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
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
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 3) = ((MR_Box) ((MR_Integer) 1));
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.build_specific_call\'/9", (MR_String) "lookup failed");
          return;
        }
      }
    *check_hlds__unify_proc__STATE_VARIABLE_Info_27 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_26;
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
              MR_Word check_hlds__unify_proc__next_value_of_HeadVar__2_2 = check_hlds__unify_proc__LeftCtors_26;
              MR_Word check_hlds__unify_proc__next_value_of_STATE_VARIABLE_Cases_0_8 = check_hlds__unify_proc__STATE_VARIABLE_Cases_39_39;
              MR_Word check_hlds__unify_proc__next_value_of_STATE_VARIABLE_Info_0_10 = check_hlds__unify_proc__STATE_VARIABLE_Info_40_40;

              check_hlds__unify_proc__STATE_VARIABLE_Info_0_10 = check_hlds__unify_proc__next_value_of_STATE_VARIABLE_Info_0_10;
              check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8 = check_hlds__unify_proc__next_value_of_STATE_VARIABLE_Cases_0_8;
              check_hlds__unify_proc__HeadVar__2_2 = check_hlds__unify_proc__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
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
            MR_Word check_hlds__unify_proc__Var_46;

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
              check_hlds__unify_proc__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_46, 0) = ((MR_Box) (check_hlds__unify_proc__Case_37));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_46, 1) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9));
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__unify_proc__next_value_of_HeadVar__3_3 = check_hlds__unify_proc__RightCtors_29;
              MR_String check_hlds__unify_proc__next_value_of_HeadVar__4_4 = check_hlds__unify_proc__Cmp1_38;
              MR_Word check_hlds__unify_proc__next_value_of_STATE_VARIABLE_Cases_0_9 = check_hlds__unify_proc__Var_46;
              MR_Word check_hlds__unify_proc__next_value_of_STATE_VARIABLE_Info_0_11 = check_hlds__unify_proc__STATE_VARIABLE_Info_44_44;

              check_hlds__unify_proc__STATE_VARIABLE_Info_0_11 = check_hlds__unify_proc__next_value_of_STATE_VARIABLE_Info_0_11;
              check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9 = check_hlds__unify_proc__next_value_of_STATE_VARIABLE_Cases_0_9;
              check_hlds__unify_proc__HeadVar__4_4 = check_hlds__unify_proc__next_value_of_HeadVar__4_4;
              check_hlds__unify_proc__HeadVar__3_3 = check_hlds__unify_proc__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
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
    MR_Word check_hlds__unify_proc__Var_58;
    MR_Word check_hlds__unify_proc__Var_59;
    MR_Word check_hlds__unify_proc__Var_60;
    MR_Word check_hlds__unify_proc__SymName_64;
    MR_Word check_hlds__unify_proc__Var_66;
    MR_Word check_hlds__unify_proc__Var_67;
    MR_Word check_hlds__unify_proc__Builtin_69;
    MR_Word check_hlds__unify_proc__Var_70;
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
      check_hlds__unify_proc__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_70, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_69));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_70, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      check_hlds__unify_proc__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_66, 0) = ((MR_Box) (check_hlds__unify_proc__Var_70));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_66, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__unify_proc__Var_67 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__unify_proc__SymName_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_64, 0) = ((MR_Box) (check_hlds__unify_proc__Var_67));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_64, 1) = ((MR_Box) (check_hlds__unify_proc__CompareOp_15));
    }
    {
      check_hlds__unify_proc__Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_58, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_64));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_58, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_58, 3) = ((MR_Box) (check_hlds__unify_proc__Var_66));
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_16, check_hlds__unify_proc__Var_58, &check_hlds__unify_proc__ReturnResult_44);
    }
    {
      check_hlds__unify_proc__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_60, 0) = ((MR_Box) (check_hlds__unify_proc__ReturnResult_44));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_59, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_43));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_59, 1) = ((MR_Box) (check_hlds__unify_proc__Var_60));
    }
    {
      check_hlds__unify_proc__GoalList_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_45, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_42));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_45, 1) = ((MR_Box) (check_hlds__unify_proc__Var_59));
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
      check_hlds__unify_proc__conv0_LambdaHeadVar__2_22 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1692__1_1_f_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
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
          check_hlds__unify_proc__ArgTypes_10 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__unify_proc_scalar_common_2[3], check_hlds__unify_proc__CtorArgs_6);
        }
        {
          check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(check_hlds__unify_proc__ArgTypes_10, check_hlds__unify_proc__Vars_8, check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, check_hlds__unify_proc__STATE_VARIABLE_Info_18);
        }
      }
    else
      {
        MR_Word check_hlds__unify_proc__VarSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
        MR_Integer check_hlds__unify_proc__NumVars_15;
        MR_Word check_hlds__unify_proc__VarSet_16;
        MR_Word check_hlds__unify_proc__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
        MR_Word check_hlds__unify_proc__Var_42;
        MR_Word check_hlds__unify_proc__Var_44;
        MR_Word check_hlds__unify_proc__Var_45;
        MR_Word check_hlds__unify_proc__Var_43;

        {
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__CtorArgs_6, &check_hlds__unify_proc__NumVars_15);
        }
        {
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__NumVars_15, check_hlds__unify_proc__Vars_8, check_hlds__unify_proc__VarSet0_14, &check_hlds__unify_proc__VarSet_16);
        }
        check_hlds__unify_proc__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
        check_hlds__unify_proc__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
        check_hlds__unify_proc__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
        check_hlds__unify_proc__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__unify_proc__STATE_VARIABLE_Info_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_42));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarSet_16));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__Var_44));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Var_45));
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
        MR_Word check_hlds__unify_proc__VarSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__VarTypes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__VarSet_24;
        MR_Word check_hlds__unify_proc__VarTypes_25;
        MR_Word check_hlds__unify_proc__Var_34;
        MR_Word check_hlds__unify_proc__Var_37;
        MR_Word check_hlds__unify_proc__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
        MR_Word check_hlds__unify_proc__Var_35;
        MR_Word check_hlds__unify_proc__Var_36;

        {
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__unify_proc__Var_10, check_hlds__unify_proc__VarSet0_22, &check_hlds__unify_proc__VarSet_24);
        }
        {
          hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__Var_10, check_hlds__unify_proc__Type_8, check_hlds__unify_proc__VarTypes0_23, &check_hlds__unify_proc__VarTypes_25);
        }
        check_hlds__unify_proc__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
        check_hlds__unify_proc__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
        check_hlds__unify_proc__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
        check_hlds__unify_proc__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
        {
          check_hlds__unify_proc__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__unify_proc__Var_34));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__unify_proc__VarSet_24));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__unify_proc__VarTypes_25));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) (check_hlds__unify_proc__Var_37));
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

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0_2(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
{
  {
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
    MR_Word check_hlds__unify_proc__conv1_VarY_5;

    {
      check_hlds__unify_proc__conv1_VarY_5 = check_hlds__unify_proc__project_var_y_1_f_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv1_VarY_5));
    return check_hlds__unify_proc__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0_1(
  MR_Box check_hlds__unify_proc__closure_arg,
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
{
  {
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
    MR_Word check_hlds__unify_proc__conv0_VarX_4;

    {
      check_hlds__unify_proc__conv0_VarX_4 = check_hlds__unify_proc__project_var_x_1_f_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv0_VarX_4));
    return check_hlds__unify_proc__wrapper_arg_2;
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
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_42,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_43)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ExistQTVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__FunctorName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__ArgTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 3)));
    MR_Integer check_hlds__unify_proc__FunctorArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 4)));
    MR_Word check_hlds__unify_proc__FunctorConsId_26;
    MR_Word check_hlds__unify_proc__GoalList_30;
    MR_Word check_hlds__unify_proc__GoalInfo0_40;
    MR_Word check_hlds__unify_proc__GoalInfo_41;
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
        MR_Word check_hlds__unify_proc__Goal0_79;
        MR_Word check_hlds__unify_proc__Var_80;
        MR_Word check_hlds__unify_proc__SymName_83;
        MR_Word check_hlds__unify_proc__Var_85;
        MR_Word check_hlds__unify_proc__Var_86;
        MR_Word check_hlds__unify_proc__Builtin_88;
        MR_Word check_hlds__unify_proc__Var_89;

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
          check_hlds__unify_proc__Builtin_88 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
        {
          check_hlds__unify_proc__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_89, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_88));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_89, 1) = ((MR_Box) ((MR_String) "comparison_result"));
        }
        {
          check_hlds__unify_proc__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_85, 0) = ((MR_Box) (check_hlds__unify_proc__Var_89));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_85, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          check_hlds__unify_proc__Var_86 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
        {
          check_hlds__unify_proc__SymName_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_83, 0) = ((MR_Box) (check_hlds__unify_proc__Var_86));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_83, 1) = ((MR_Box) ((MR_String) "="));
        }
        {
          check_hlds__unify_proc__Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_80, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_83));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_80, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_80, 3) = ((MR_Box) (check_hlds__unify_proc__Var_85));
        }
        {
          hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_13, check_hlds__unify_proc__Var_80, &check_hlds__unify_proc__Goal0_79);
        }
        {
          hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_16, check_hlds__unify_proc__Goal0_79, &check_hlds__unify_proc__EqualGoal_29);
        }
        switch (check_hlds__unify_proc__Kind_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__unify_proc__Var_66;

              {
                check_hlds__unify_proc__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_66, 0) = ((MR_Box) (check_hlds__unify_proc__EqualGoal_29));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_28));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__Var_66));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__unify_proc__UnifyY_Goal_31;
              MR_Word check_hlds__unify_proc__Var_63;
              MR_Word check_hlds__unify_proc__Var_64;

              {
                hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_15, check_hlds__unify_proc__RHS_27, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_31);
              }
              {
                check_hlds__unify_proc__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_64, 0) = ((MR_Box) (check_hlds__unify_proc__EqualGoal_29));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__unify_proc__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_63, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_31));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_63, 1) = ((MR_Box) (check_hlds__unify_proc__Var_64));
              }
              {
                check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_28));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__Var_63));
              }
            }
            break;
        }
        *check_hlds__unify_proc__STATE_VARIABLE_Info_43 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_42;
      }
    else
      {
        MR_Word check_hlds__unify_proc__TypeCtorInfo_70_70;
        MR_Word check_hlds__unify_proc__TypeInfo_71_71;
        MR_Word check_hlds__unify_proc__TypedVarPairs_34;
        MR_Word check_hlds__unify_proc__VarsX_35;
        MR_Word check_hlds__unify_proc__VarsY_36;
        MR_Word check_hlds__unify_proc__RHSX_37;
        MR_Word check_hlds__unify_proc__RHSY_38;
        MR_Word check_hlds__unify_proc__CompareArgs_Goal_39;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_44_44;
        MR_Word check_hlds__unify_proc__Var_54;
        MR_Word check_hlds__unify_proc__Var_55;
        MR_Word check_hlds__unify_proc__UnifyX_Goal_68;
        MR_Word check_hlds__unify_proc__UnifyY_Goal_69;

        {
          check_hlds__unify_proc__make_fresh_arg_var_pairs_5_p_0(check_hlds__unify_proc__ExistQTVars_20, check_hlds__unify_proc__ArgTypes_23, &check_hlds__unify_proc__TypedVarPairs_34, check_hlds__unify_proc__STATE_VARIABLE_Info_0_42, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_44);
        }
        check_hlds__unify_proc__TypeCtorInfo_70_70 = (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0;
        check_hlds__unify_proc__TypeInfo_71_71 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[1];
        {
          check_hlds__unify_proc__VarsX_35 = mercury__list__map_2_f_0(check_hlds__unify_proc__TypeCtorInfo_70_70, check_hlds__unify_proc__TypeInfo_71_71, (MR_Word) &check_hlds__unify_proc_scalar_common_2[1], check_hlds__unify_proc__TypedVarPairs_34);
        }
        {
          check_hlds__unify_proc__VarsY_36 = mercury__list__map_2_f_0(check_hlds__unify_proc__TypeCtorInfo_70_70, check_hlds__unify_proc__TypeInfo_71_71, (MR_Word) &check_hlds__unify_proc_scalar_common_2[2], check_hlds__unify_proc__TypedVarPairs_34);
        }
        {
          check_hlds__unify_proc__RHSX_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHSX_37, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_26));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHSX_37, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHSX_37, 2) = ((MR_Box) (check_hlds__unify_proc__VarsX_35));
        }
        {
          check_hlds__unify_proc__RHSY_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHSY_38, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_26));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHSY_38, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHSY_38, 2) = ((MR_Box) (check_hlds__unify_proc__VarsY_36));
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_14, check_hlds__unify_proc__RHSX_37, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_68);
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_15, check_hlds__unify_proc__RHSY_38, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_69);
        }
        {
          check_hlds__unify_proc__compare_args_7_p_0(check_hlds__unify_proc__ExistQTVars_20, check_hlds__unify_proc__TypedVarPairs_34, check_hlds__unify_proc__R_13, check_hlds__unify_proc__Context_16, &check_hlds__unify_proc__CompareArgs_Goal_39, check_hlds__unify_proc__STATE_VARIABLE_Info_44_44, check_hlds__unify_proc__STATE_VARIABLE_Info_43);
        }
        {
          check_hlds__unify_proc__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_55, 0) = ((MR_Box) (check_hlds__unify_proc__CompareArgs_Goal_39));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_54, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_69));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_54, 1) = ((MR_Box) (check_hlds__unify_proc__Var_55));
        }
        {
          check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_68));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__Var_54));
        }
      }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_40);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_16, check_hlds__unify_proc__GoalInfo0_40, &check_hlds__unify_proc__GoalInfo_41);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_30, check_hlds__unify_proc__GoalInfo_41, check_hlds__unify_proc__Case_18);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_arg_var_pairs_5_p_0(
  MR_Word check_hlds__unify_proc__ExistQTVars_6,
  MR_Word check_hlds__unify_proc__CtorArgs_7,
  MR_Word * check_hlds__unify_proc__TypedVarPairs_8,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__GiveFreshVarsTypes_10;
    MR_Word check_hlds__unify_proc__VarSet0_13;
    MR_Word check_hlds__unify_proc__VarTypes0_14;
    MR_Word check_hlds__unify_proc__VarSet_15;
    MR_Word check_hlds__unify_proc__VarTypes_16;
    MR_Word check_hlds__unify_proc__Var_28;
    MR_Word check_hlds__unify_proc__Var_31;
    MR_Word check_hlds__unify_proc__Var_22;
    MR_Word check_hlds__unify_proc__Var_24;
    MR_Word check_hlds__unify_proc__Var_29;
    MR_Word check_hlds__unify_proc__Var_30;

    if ((check_hlds__unify_proc__ExistQTVars_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__unify_proc__GiveFreshVarsTypes_10 = (MR_Integer) 1;
    else
      check_hlds__unify_proc__GiveFreshVarsTypes_10 = (MR_Integer) 0;
    check_hlds__unify_proc__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    check_hlds__unify_proc__VarSet0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    check_hlds__unify_proc__VarTypes0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    {
      check_hlds__unify_proc__make_fresh_arg_var_pairs_8_p_0(check_hlds__unify_proc__GiveFreshVarsTypes_10, (MR_Integer) 1, check_hlds__unify_proc__CtorArgs_7, check_hlds__unify_proc__TypedVarPairs_8, check_hlds__unify_proc__VarSet0_13, &check_hlds__unify_proc__VarSet_15, check_hlds__unify_proc__VarTypes0_14, &check_hlds__unify_proc__VarTypes_16);
    }
    check_hlds__unify_proc__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    check_hlds__unify_proc__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    check_hlds__unify_proc__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__STATE_VARIABLE_Info_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarSet_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__VarTypes_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Var_31));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_arg_var_pairs_8_p_0(
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
  MR_Integer check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
  MR_Word * check_hlds__unify_proc__HeadVar__4_4,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_VarSet_0_5,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_VarSet_6,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_VarTypes_0_7,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_VarTypes_8)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    if ((check_hlds__unify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__unify_proc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__unify_proc__STATE_VARIABLE_VarTypes_8 = check_hlds__unify_proc__STATE_VARIABLE_VarTypes_0_7;
        *check_hlds__unify_proc__STATE_VARIABLE_VarSet_6 = check_hlds__unify_proc__STATE_VARIABLE_VarSet_0_5;
      }
    else
      {
        MR_Word check_hlds__unify_proc__TypeCtorInfo_34_60;
        MR_Word check_hlds__unify_proc__CtorArg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__CtorArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__TypedVarPair_21;
        MR_Word check_hlds__unify_proc__TypedVarPairs_22;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_VarSet_29_29;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_VarTypes_30_30;
        MR_Integer check_hlds__unify_proc__Var_31;
        MR_Word check_hlds__unify_proc__ArgType_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CtorArg_19, (MR_Integer) 1)));
        MR_String check_hlds__unify_proc__ArgNumStr_46;
        MR_Word check_hlds__unify_proc__VarX_47;
        MR_Word check_hlds__unify_proc__VarY_48;
        MR_String check_hlds__unify_proc__Var_49;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_VarSet_24_50;
        MR_String check_hlds__unify_proc__Var_52;
        MR_Word check_hlds__unify_proc__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CtorArg_19, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CtorArg_19, (MR_Integer) 2)));
        MR_Word check_hlds__unify_proc__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CtorArg_19, (MR_Integer) 3)));

        {
          check_hlds__unify_proc__ArgNumStr_46 = mercury__string__int_to_string_1_f_0(check_hlds__unify_proc__HeadVar__2_2);
        }
        {
          check_hlds__unify_proc__Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "ArgX", check_hlds__unify_proc__ArgNumStr_46);
        }
        check_hlds__unify_proc__TypeCtorInfo_34_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        {
          mercury__varset__new_named_var_4_p_0(check_hlds__unify_proc__TypeCtorInfo_34_60, check_hlds__unify_proc__Var_49, &check_hlds__unify_proc__VarX_47, check_hlds__unify_proc__STATE_VARIABLE_VarSet_0_5, &check_hlds__unify_proc__STATE_VARIABLE_VarSet_24_50);
        }
        {
          check_hlds__unify_proc__Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "ArgY", check_hlds__unify_proc__ArgNumStr_46);
        }
        {
          mercury__varset__new_named_var_4_p_0(check_hlds__unify_proc__TypeCtorInfo_34_60, check_hlds__unify_proc__Var_52, &check_hlds__unify_proc__VarY_48, check_hlds__unify_proc__STATE_VARIABLE_VarSet_24_50, &check_hlds__unify_proc__STATE_VARIABLE_VarSet_29_29);
        }
        switch (check_hlds__unify_proc__HeadVar__1_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__unify_proc__STATE_VARIABLE_VarTypes_30_30 = check_hlds__unify_proc__STATE_VARIABLE_VarTypes_0_7;
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_VarTypes_29_55;

              {
                hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__VarX_47, check_hlds__unify_proc__ArgType_45, check_hlds__unify_proc__STATE_VARIABLE_VarTypes_0_7, &check_hlds__unify_proc__STATE_VARIABLE_VarTypes_29_55);
              }
              {
                hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__VarY_48, check_hlds__unify_proc__ArgType_45, check_hlds__unify_proc__STATE_VARIABLE_VarTypes_29_55, &check_hlds__unify_proc__STATE_VARIABLE_VarTypes_30_30);
              }
            }
            break;
        }
        {
          check_hlds__unify_proc__TypedVarPair_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypedVarPair_21, 0) = ((MR_Box) (check_hlds__unify_proc__ArgType_45));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypedVarPair_21, 1) = ((MR_Box) (check_hlds__unify_proc__VarX_47));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypedVarPair_21, 2) = ((MR_Box) (check_hlds__unify_proc__VarY_48));
        }
        check_hlds__unify_proc__Var_31 = (check_hlds__unify_proc__HeadVar__2_2 + (MR_Integer) 1);
        {
          check_hlds__unify_proc__make_fresh_arg_var_pairs_8_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Var_31, check_hlds__unify_proc__CtorArgs_20, &check_hlds__unify_proc__TypedVarPairs_22, check_hlds__unify_proc__STATE_VARIABLE_VarSet_29_29, check_hlds__unify_proc__STATE_VARIABLE_VarSet_6, check_hlds__unify_proc__STATE_VARIABLE_VarTypes_30_30, check_hlds__unify_proc__STATE_VARIABLE_VarTypes_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__unify_proc__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__TypedVarPair_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__TypedVarPairs_22));
        }
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_1(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_3(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__ExistQTVar_69 = ((MR_Word) (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__conv0_ExistQTVar_69);
    {
      check_hlds__unify_proc__compare_args_7_p_0_2(check_hlds__unify_proc__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_4(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__TypeInfo_72_72 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[0];
    {
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__TypeInfo_72_72, ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__ExistQTVar_69)), ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__Var_71)));
    }
    if ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__succeeded)
      {
        check_hlds__unify_proc__compare_args_7_p_0_1(check_hlds__unify_proc__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_2(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    {
      parse_tree__prog_type__type_contains_var_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__Type_22, &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__Var_71, check_hlds__unify_proc__compare_args_7_p_0_4, check_hlds__unify_proc__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_5(
  void * check_hlds__unify_proc__env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__conv0_ExistQTVar_69, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__ExistQTVars_1, check_hlds__unify_proc__compare_args_7_p_0_3, check_hlds__unify_proc__env_ptr);
          }
        }
        (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0(
  MR_Word check_hlds__unify_proc__ExistQTVars_1,
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
  MR_Word check_hlds__unify_proc__R_3,
  MR_Word check_hlds__unify_proc__Context_4,
  MR_Word * check_hlds__unify_proc__HeadVar__5_5,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7)
{
  {
    struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s check_hlds__unify_proc__env;

    (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_7_p_0_env_0__ExistQTVars_1 = check_hlds__unify_proc__ExistQTVars_1;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        if ((check_hlds__unify_proc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__unify_proc__Goal0_76;
            MR_Word check_hlds__unify_proc__Var_77;
            MR_Word check_hlds__unify_proc__SymName_80;
            MR_Word check_hlds__unify_proc__Var_82;
            MR_Word check_hlds__unify_proc__Var_83;
            MR_Word check_hlds__unify_proc__Builtin_85;
            MR_Word check_hlds__unify_proc__Var_86;

            {
              check_hlds__unify_proc__Builtin_85 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
            {
              check_hlds__unify_proc__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_86, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_85));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_86, 1) = ((MR_Box) ((MR_String) "comparison_result"));
            }
            {
              check_hlds__unify_proc__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_82, 0) = ((MR_Box) (check_hlds__unify_proc__Var_86));
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_82, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              check_hlds__unify_proc__Var_83 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
            {
              check_hlds__unify_proc__SymName_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_80, 0) = ((MR_Box) (check_hlds__unify_proc__Var_83));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_80, 1) = ((MR_Box) ((MR_String) "="));
            }
            {
              check_hlds__unify_proc__Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_77, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_80));
              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_77, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_77, 3) = ((MR_Box) (check_hlds__unify_proc__Var_82));
            }
            {
              hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_3, check_hlds__unify_proc__Var_77, &check_hlds__unify_proc__Goal0_76);
            }
            {
              hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_4, check_hlds__unify_proc__Goal0_76, check_hlds__unify_proc__HeadVar__5_5);
            }
            *check_hlds__unify_proc__STATE_VARIABLE_Info_7 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
          }
        else
          {
            MR_Word check_hlds__unify_proc__TypedVarPair_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__unify_proc__TypedVarPairs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__unify_proc__X_23;
            MR_Word check_hlds__unify_proc__Y_24;
            MR_Word check_hlds__unify_proc__GoalInfo0_25;
            MR_Word check_hlds__unify_proc__GoalInfo_26;
            MR_String check_hlds__unify_proc__ComparePred_28;
            MR_Word check_hlds__unify_proc__ModuleInfo_29;
            MR_Word check_hlds__unify_proc__IsDummy_30;
            MR_Word check_hlds__unify_proc__Var_91;
            MR_Word check_hlds__unify_proc__Var_92;
            MR_Word check_hlds__unify_proc__Var_93;

            (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_7_p_0_env_0__Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypedVarPair_16, (MR_Integer) 0)));
            check_hlds__unify_proc__X_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypedVarPair_16, (MR_Integer) 1)));
            check_hlds__unify_proc__Y_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypedVarPair_16, (MR_Integer) 2)));
            {
              hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_25);
            }
            {
              hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_4, check_hlds__unify_proc__GoalInfo0_25, &check_hlds__unify_proc__GoalInfo_26);
            }
            {
              check_hlds__unify_proc__compare_args_7_p_0_5(&check_hlds__unify_proc__env);
            }
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_7_p_0_env_0__succeeded)
              check_hlds__unify_proc__ComparePred_28 = (MR_String) "typed_compare";
            else
              check_hlds__unify_proc__ComparePred_28 = (MR_String) "compare";
            check_hlds__unify_proc__ModuleInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
            check_hlds__unify_proc__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
            check_hlds__unify_proc__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
            check_hlds__unify_proc__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
            {
              check_hlds__unify_proc__IsDummy_30 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_29, (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_7_p_0_env_0__Type_22);
            }
            switch (check_hlds__unify_proc__IsDummy_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__unify_proc__next_value_of_HeadVar__2_2 = check_hlds__unify_proc__TypedVarPairs_17;

                    check_hlds__unify_proc__HeadVar__2_2 = check_hlds__unify_proc__next_value_of_HeadVar__2_2;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                if ((check_hlds__unify_proc__TypedVarPairs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word check_hlds__unify_proc__Var_63;
                    MR_Word check_hlds__unify_proc__Var_65;
                    MR_Word check_hlds__unify_proc__Var_66;

                    {
                      check_hlds__unify_proc__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_66, 0) = ((MR_Box) (check_hlds__unify_proc__Y_24));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__unify_proc__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_65, 0) = ((MR_Box) (check_hlds__unify_proc__X_23));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_65, 1) = ((MR_Box) (check_hlds__unify_proc__Var_66));
                    }
                    {
                      check_hlds__unify_proc__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_63, 0) = ((MR_Box) (check_hlds__unify_proc__R_3));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_63, 1) = ((MR_Box) (check_hlds__unify_proc__Var_65));
                    }
                    {
                      check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__ComparePred_28, check_hlds__unify_proc__Var_63, check_hlds__unify_proc__Context_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, check_hlds__unify_proc__STATE_VARIABLE_Info_7);
                    }
                  }
                else
                  {
                    MR_Word check_hlds__unify_proc__R1_33;
                    MR_Word check_hlds__unify_proc__Do_Comparison_34;
                    MR_Word check_hlds__unify_proc__Check_Equal_35;
                    MR_Word check_hlds__unify_proc__CheckNotEqual_36;
                    MR_Word check_hlds__unify_proc__Return_R1_37;
                    MR_Word check_hlds__unify_proc__Condition_38;
                    MR_Word check_hlds__unify_proc__ElseCase_39;
                    MR_Word check_hlds__unify_proc__Var_42;
                    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_43_43;
                    MR_Word check_hlds__unify_proc__Var_44;
                    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_45_45;
                    MR_Word check_hlds__unify_proc__Var_46;
                    MR_Word check_hlds__unify_proc__Var_47;
                    MR_Word check_hlds__unify_proc__Var_49;
                    MR_Word check_hlds__unify_proc__Var_51;
                    MR_Word check_hlds__unify_proc__Var_52;
                    MR_Word check_hlds__unify_proc__Var_55;
                    MR_Word check_hlds__unify_proc__Var_57;
                    MR_Word check_hlds__unify_proc__Var_58;
                    MR_Word check_hlds__unify_proc__Var_61;

                    {
                      check_hlds__unify_proc__Var_42 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                    }
                    {
                      check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__Var_42, &check_hlds__unify_proc__R1_33, check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, &check_hlds__unify_proc__STATE_VARIABLE_Info_43_43);
                    }
                    {
                      check_hlds__unify_proc__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_47, 0) = ((MR_Box) (check_hlds__unify_proc__Y_24));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__unify_proc__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_46, 0) = ((MR_Box) (check_hlds__unify_proc__X_23));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_46, 1) = ((MR_Box) (check_hlds__unify_proc__Var_47));
                    }
                    {
                      check_hlds__unify_proc__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_44, 0) = ((MR_Box) (check_hlds__unify_proc__R1_33));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_44, 1) = ((MR_Box) (check_hlds__unify_proc__Var_46));
                    }
                    {
                      check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__ComparePred_28, check_hlds__unify_proc__Var_44, check_hlds__unify_proc__Context_4, &check_hlds__unify_proc__Do_Comparison_34, check_hlds__unify_proc__STATE_VARIABLE_Info_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_45_45);
                    }
                    {
                      check_hlds__unify_proc__Var_49 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "=");
                    }
                    {
                      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R1_33, check_hlds__unify_proc__Var_49, &check_hlds__unify_proc__Check_Equal_35);
                    }
                    check_hlds__unify_proc__Var_51 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__unify_proc__Check_Equal_35);
                    {
                      check_hlds__unify_proc__CheckNotEqual_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CheckNotEqual_36, 0) = ((MR_Box) (check_hlds__unify_proc__Var_51));
                      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CheckNotEqual_36, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_26));
                    }
                    {
                      check_hlds__unify_proc__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_52, 0) = ((MR_Box) (check_hlds__unify_proc__R1_33));
                    }
                    {
                      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__R_3, check_hlds__unify_proc__Var_52, check_hlds__unify_proc__Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Return_R1_37);
                    }
                    {
                      check_hlds__unify_proc__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_58, 0) = ((MR_Box) (check_hlds__unify_proc__CheckNotEqual_36));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__unify_proc__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_57, 0) = ((MR_Box) (check_hlds__unify_proc__Do_Comparison_34));
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_57, 1) = ((MR_Box) (check_hlds__unify_proc__Var_58));
                    }
                    {
                      check_hlds__unify_proc__Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_55, 1) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_55, 2) = ((MR_Box) (check_hlds__unify_proc__Var_57));
                    }
                    {
                      check_hlds__unify_proc__Condition_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Condition_38, 0) = ((MR_Box) (check_hlds__unify_proc__Var_55));
                      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Condition_38, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_26));
                    }
                    {
                      check_hlds__unify_proc__compare_args_7_p_0((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_7_p_0_env_0__ExistQTVars_1, check_hlds__unify_proc__TypedVarPairs_17, check_hlds__unify_proc__R_3, check_hlds__unify_proc__Context_4, &check_hlds__unify_proc__ElseCase_39, check_hlds__unify_proc__STATE_VARIABLE_Info_45_45, check_hlds__unify_proc__STATE_VARIABLE_Info_7);
                    }
                    {
                      check_hlds__unify_proc__Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_61, 2) = ((MR_Box) (check_hlds__unify_proc__Condition_38));
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_61, 3) = ((MR_Box) (check_hlds__unify_proc__Return_R1_37));
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_61, 4) = ((MR_Box) (check_hlds__unify_proc__ElseCase_39));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *check_hlds__unify_proc__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_61));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_26));
                    }
                  }
                break;
            }
          }
        break;
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
    MR_Word check_hlds__unify_proc__Var_6;
    MR_Word check_hlds__unify_proc__Var_7;
    MR_Word check_hlds__unify_proc__Builtin_9;
    MR_Word check_hlds__unify_proc__Var_10;

    {
      check_hlds__unify_proc__Builtin_9 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__unify_proc__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_10, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_9));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_10, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      check_hlds__unify_proc__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_6, 0) = ((MR_Box) (check_hlds__unify_proc__Var_10));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_6, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__unify_proc__Var_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__unify_proc__SymName_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_4, 0) = ((MR_Box) (check_hlds__unify_proc__Var_7));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_4, 1) = ((MR_Box) (check_hlds__unify_proc__Name_3));
    }
    {
      check_hlds__unify_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_4));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 3) = ((MR_Box) (check_hlds__unify_proc__Var_6));
    }
    return check_hlds__unify_proc__HeadVar__2_2;
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
    MR_Word check_hlds__unify_proc__Var_35;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_36_36;
    MR_Word check_hlds__unify_proc__Var_37;
    MR_Word check_hlds__unify_proc__Var_38;
    MR_Word check_hlds__unify_proc__Var_40;
    MR_Word check_hlds__unify_proc__Var_41;
    MR_Word check_hlds__unify_proc__Var_42;
    MR_Word check_hlds__unify_proc__Var_44;
    MR_Word check_hlds__unify_proc__Var_46;
    MR_Word check_hlds__unify_proc__Var_47;
    MR_String check_hlds__unify_proc__NumStr_56;
    MR_String check_hlds__unify_proc__Name_57;
    MR_Word check_hlds__unify_proc__VarSet0_65;
    MR_Word check_hlds__unify_proc__VarTypes0_66;
    MR_Word check_hlds__unify_proc__VarSet_67;
    MR_Word check_hlds__unify_proc__VarTypes_68;
    MR_Word check_hlds__unify_proc__Var_77;
    MR_Word check_hlds__unify_proc__Var_80;
    MR_Word check_hlds__unify_proc__Var_71;
    MR_Word check_hlds__unify_proc__Var_73;
    MR_Word check_hlds__unify_proc__Var_78;
    MR_Word check_hlds__unify_proc__Var_79;

    {
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_56);
    }
    {
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_56, &check_hlds__unify_proc__Name_57);
    }
    check_hlds__unify_proc__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
    check_hlds__unify_proc__VarSet0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
    check_hlds__unify_proc__VarTypes0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_57, &check_hlds__unify_proc__CastX_16, check_hlds__unify_proc__VarSet0_65, &check_hlds__unify_proc__VarSet_67);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__CastX_16, check_hlds__unify_proc__EqvType_9, check_hlds__unify_proc__VarTypes0_66, &check_hlds__unify_proc__VarTypes_68);
    }
    check_hlds__unify_proc__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
    check_hlds__unify_proc__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
    check_hlds__unify_proc__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
    {
      check_hlds__unify_proc__STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (check_hlds__unify_proc__Var_77));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (check_hlds__unify_proc__VarSet_67));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (check_hlds__unify_proc__VarTypes_68));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (check_hlds__unify_proc__Var_80));
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
      check_hlds__unify_proc__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_38, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_17));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_37, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_16));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_37, 1) = ((MR_Box) (check_hlds__unify_proc__Var_38));
    }
    {
      check_hlds__unify_proc__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_35, 0) = ((MR_Box) (check_hlds__unify_proc__Res_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_35, 1) = ((MR_Box) (check_hlds__unify_proc__Var_37));
    }
    {
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "compare", check_hlds__unify_proc__Var_35, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CompareGoal_20, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, &check_hlds__unify_proc__STATE_VARIABLE_Info_36_36);
    }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_21);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_21, &check_hlds__unify_proc__GoalInfo_22);
    }
    {
      check_hlds__unify_proc__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_42, 0) = ((MR_Box) (check_hlds__unify_proc__CompareGoal_20));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_41, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_19));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_41, 1) = ((MR_Box) (check_hlds__unify_proc__Var_42));
    }
    {
      check_hlds__unify_proc__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_40, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_18));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_40, 1) = ((MR_Box) (check_hlds__unify_proc__Var_41));
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__Var_40, check_hlds__unify_proc__GoalInfo_22, &check_hlds__unify_proc__Goal_23);
    }
    {
      check_hlds__unify_proc__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_47, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_46, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_46, 1) = ((MR_Box) (check_hlds__unify_proc__Var_47));
    }
    {
      check_hlds__unify_proc__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_44, 0) = ((MR_Box) (check_hlds__unify_proc__Res_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_44, 1) = ((MR_Box) (check_hlds__unify_proc__Var_46));
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__Var_44, check_hlds__unify_proc__Goal_23, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_36_36, check_hlds__unify_proc__STATE_VARIABLE_Info_25);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(
  MR_Word check_hlds__unify_proc__UnifyCompare_9,
  MR_Word check_hlds__unify_proc__Res_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Y_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_27,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_28)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    if (((MR_tag((MR_Word) check_hlds__unify_proc__UnifyCompare_9)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_compare_proc_body\'/8", (MR_String) "trying to create compare proc for abstract noncanonical type");
          return;
        }
      }
    else
      {
        MR_Word check_hlds__unify_proc__MaybeCompare_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyCompare_9, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__ArgVars_19;
        MR_Word check_hlds__unify_proc__Goal_26;
        MR_Word check_hlds__unify_proc__Var_29;
        MR_Word check_hlds__unify_proc__Var_30;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_37_37;
        MR_Word check_hlds__unify_proc__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyCompare_9, (MR_Integer) 0)));

        {
          check_hlds__unify_proc__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_30, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_29, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_29, 1) = ((MR_Box) (check_hlds__unify_proc__Var_30));
        }
        {
          check_hlds__unify_proc__ArgVars_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_19, 0) = ((MR_Box) (check_hlds__unify_proc__Res_10));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_19, 1) = ((MR_Box) (check_hlds__unify_proc__Var_29));
        }
        if ((check_hlds__unify_proc__MaybeCompare_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_non_canonical_type", check_hlds__unify_proc__ArgVars_19, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__Goal_26, check_hlds__unify_proc__STATE_VARIABLE_Info_0_27, &check_hlds__unify_proc__STATE_VARIABLE_Info_37_37);
            }
          }
        else
          {
            MR_Word check_hlds__unify_proc__ComparePredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeCompare_18, (MR_Integer) 0)));
            MR_Word check_hlds__unify_proc__PredId_21;
            MR_Integer check_hlds__unify_proc__ModeId_22;
            MR_Word check_hlds__unify_proc__Call_23;
            MR_Word check_hlds__unify_proc__GoalInfo_24;
            MR_Word check_hlds__unify_proc__Goal0_25;
            MR_Word check_hlds__unify_proc__Var_36;

            {
              check_hlds__unify_proc__PredId_21 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
            {
              check_hlds__unify_proc__ModeId_22 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
            {
              check_hlds__unify_proc__Call_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_23, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_21));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_23, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_22));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_23, 2) = ((MR_Box) (check_hlds__unify_proc__ArgVars_19));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_23, 3) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_23, 5) = ((MR_Box) (check_hlds__unify_proc__ComparePredName_20));
            }
            {
              hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__GoalInfo_24);
            }
            {
              check_hlds__unify_proc__Goal0_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_25, 0) = ((MR_Box) (check_hlds__unify_proc__Call_23));
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_25, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_24));
            }
            {
              check_hlds__unify_proc__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_36, 0) = ((MR_Box) (check_hlds__unify_proc__Res_10));
            }
            {
              check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Var_36, check_hlds__unify_proc__Goal0_25, &check_hlds__unify_proc__Goal_26, check_hlds__unify_proc__STATE_VARIABLE_Info_0_27, &check_hlds__unify_proc__STATE_VARIABLE_Info_37_37);
            }
          }
        {
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_19, check_hlds__unify_proc__Goal_26, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_37_37, check_hlds__unify_proc__STATE_VARIABLE_Info_28);
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
    MR_Word check_hlds__unify_proc__Var_18;
    MR_Word check_hlds__unify_proc__Var_19;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_22_22;

    {
      check_hlds__unify_proc__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_19, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_18, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_18, 1) = ((MR_Box) (check_hlds__unify_proc__Var_19));
    }
    {
      check_hlds__unify_proc__ArgVars_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 1) = ((MR_Box) (check_hlds__unify_proc__Var_18));
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
check_hlds__unify_proc__generate_builtin_compare_8_p_0(
  MR_Word check_hlds__unify_proc__CtorCat_9,
  MR_Word check_hlds__unify_proc__Res_10,
  MR_Word check_hlds__unify_proc__X_11,
  MR_Word check_hlds__unify_proc__Y_12,
  MR_Word check_hlds__unify_proc__Context_13,
  MR_Word * check_hlds__unify_proc__Clause_14,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ArgVars_16;
    MR_String check_hlds__unify_proc__Name_17;
    MR_Word check_hlds__unify_proc__CompareGoal_21;
    MR_Word check_hlds__unify_proc__Var_24;
    MR_Word check_hlds__unify_proc__Var_25;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_48_48;

    {
      check_hlds__unify_proc__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_25, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_24, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_24, 1) = ((MR_Box) (check_hlds__unify_proc__Var_25));
    }
    {
      check_hlds__unify_proc__ArgVars_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_16, 0) = ((MR_Box) (check_hlds__unify_proc__Res_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_16, 1) = ((MR_Box) (check_hlds__unify_proc__Var_24));
    }
    switch (MR_tag((MR_Word) check_hlds__unify_proc__CtorCat_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__unify_proc__CtorCat_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__unify_proc__Name_17 = (MR_String) "builtin_compare_pred";
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_compare\'/8", (MR_String) "bad ctor category");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unify_proc__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__CtorCat_9, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) check_hlds__unify_proc__Var_50)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(check_hlds__unify_proc__Var_50)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__unify_proc__Name_17 = (MR_String) "builtin_compare_float";
                  break;
                case (MR_Integer) 1:
                  check_hlds__unify_proc__Name_17 = (MR_String) "builtin_compare_character";
                  break;
                case (MR_Integer) 2:
                  check_hlds__unify_proc__Name_17 = (MR_String) "builtin_compare_string";
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__unify_proc__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_50, (MR_Integer) 0)));

                check_hlds__unify_proc__Name_17 = ((&check_hlds__unify_proc_vector_common_7[8 + check_hlds__unify_proc__Var_51]))->check_hlds__unify_proc__vector_common_type_7_0__vct_7_f_0;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_compare\'/8", (MR_String) "bad ctor category");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_compare\'/8", (MR_String) "bad ctor category");
            return;
          }
        }
        break;
    }
    {
      check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__Name_17, check_hlds__unify_proc__ArgVars_16, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CompareGoal_21, check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, &check_hlds__unify_proc__STATE_VARIABLE_Info_48_48);
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_16, check_hlds__unify_proc__CompareGoal_21, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_48_48, check_hlds__unify_proc__STATE_VARIABLE_Info_23);
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
    MR_Word check_hlds__unify_proc__Var_17;
    MR_Word check_hlds__unify_proc__Var_19;
    MR_Word check_hlds__unify_proc__Var_20;
    MR_Word check_hlds__unify_proc__Goal0_25;
    MR_Word check_hlds__unify_proc__Var_26;
    MR_Word check_hlds__unify_proc__SymName_29;
    MR_Word check_hlds__unify_proc__Var_31;
    MR_Word check_hlds__unify_proc__Var_32;
    MR_Word check_hlds__unify_proc__Builtin_34;
    MR_Word check_hlds__unify_proc__Var_35;

    {
      check_hlds__unify_proc__Builtin_34 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__unify_proc__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_35, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_34));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_35, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      check_hlds__unify_proc__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_31, 0) = ((MR_Box) (check_hlds__unify_proc__Var_35));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_31, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__unify_proc__Var_32 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__unify_proc__SymName_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_29, 0) = ((MR_Box) (check_hlds__unify_proc__Var_32));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_29, 1) = ((MR_Box) ((MR_String) "="));
    }
    {
      check_hlds__unify_proc__Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_26, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_29));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_26, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_26, 3) = ((MR_Box) (check_hlds__unify_proc__Var_31));
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_8, check_hlds__unify_proc__Var_26, &check_hlds__unify_proc__Goal0_25);
    }
    {
      hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Goal0_25, &check_hlds__unify_proc__Goal_14);
    }
    {
      check_hlds__unify_proc__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_20, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_19, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_19, 1) = ((MR_Box) (check_hlds__unify_proc__Var_20));
    }
    {
      check_hlds__unify_proc__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_17, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_17, 1) = ((MR_Box) (check_hlds__unify_proc__Var_19));
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__Var_17, check_hlds__unify_proc__Goal_14, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_0_15, check_hlds__unify_proc__STATE_VARIABLE_Info_16);
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
    MR_Word check_hlds__unify_proc__Var_34;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_35_35;
    MR_Word check_hlds__unify_proc__Var_36;
    MR_Word check_hlds__unify_proc__Var_37;
    MR_Word check_hlds__unify_proc__Var_39;
    MR_Word check_hlds__unify_proc__Var_40;
    MR_Word check_hlds__unify_proc__Var_41;
    MR_Word check_hlds__unify_proc__Var_43;
    MR_Word check_hlds__unify_proc__Var_45;
    MR_Word check_hlds__unify_proc__Var_46;
    MR_String check_hlds__unify_proc__NumStr_55;
    MR_String check_hlds__unify_proc__Name_56;
    MR_Word check_hlds__unify_proc__VarSet0_64;
    MR_Word check_hlds__unify_proc__VarTypes0_65;
    MR_Word check_hlds__unify_proc__VarSet_66;
    MR_Word check_hlds__unify_proc__VarTypes_67;
    MR_Word check_hlds__unify_proc__Var_76;
    MR_Word check_hlds__unify_proc__Var_79;
    MR_Word check_hlds__unify_proc__Var_70;
    MR_Word check_hlds__unify_proc__Var_72;
    MR_Word check_hlds__unify_proc__Var_77;
    MR_Word check_hlds__unify_proc__Var_78;

    {
      check_hlds__unify_proc__IntType_14 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    {
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_55);
    }
    {
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_55, &check_hlds__unify_proc__Name_56);
    }
    check_hlds__unify_proc__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
    check_hlds__unify_proc__VarSet0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
    check_hlds__unify_proc__VarTypes0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_56, &check_hlds__unify_proc__CastX_15, check_hlds__unify_proc__VarSet0_64, &check_hlds__unify_proc__VarSet_66);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__CastX_15, check_hlds__unify_proc__IntType_14, check_hlds__unify_proc__VarTypes0_65, &check_hlds__unify_proc__VarTypes_67);
    }
    check_hlds__unify_proc__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
    check_hlds__unify_proc__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
    check_hlds__unify_proc__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
    {
      check_hlds__unify_proc__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__unify_proc__Var_76));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__unify_proc__VarSet_66));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__unify_proc__VarTypes_67));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (check_hlds__unify_proc__Var_79));
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
      check_hlds__unify_proc__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_37, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_16));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_36, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_15));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_36, 1) = ((MR_Box) (check_hlds__unify_proc__Var_37));
    }
    {
      check_hlds__unify_proc__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_34, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_34, 1) = ((MR_Box) (check_hlds__unify_proc__Var_36));
    }
    {
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_int", check_hlds__unify_proc__Var_34, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CompareGoal_19, check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_35_35);
    }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_20);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__GoalInfo0_20, &check_hlds__unify_proc__GoalInfo_21);
    }
    {
      check_hlds__unify_proc__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_41, 0) = ((MR_Box) (check_hlds__unify_proc__CompareGoal_19));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_40, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_18));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_40, 1) = ((MR_Box) (check_hlds__unify_proc__Var_41));
    }
    {
      check_hlds__unify_proc__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_39, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_17));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_39, 1) = ((MR_Box) (check_hlds__unify_proc__Var_40));
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__Var_39, check_hlds__unify_proc__GoalInfo_21, &check_hlds__unify_proc__Goal_22);
    }
    {
      check_hlds__unify_proc__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_46, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_45, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_45, 1) = ((MR_Box) (check_hlds__unify_proc__Var_46));
    }
    {
      check_hlds__unify_proc__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_43, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_43, 1) = ((MR_Box) (check_hlds__unify_proc__Var_45));
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__Var_43, check_hlds__unify_proc__Goal_22, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_35_35, check_hlds__unify_proc__STATE_VARIABLE_Info_24);
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
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_36,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_37)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_36, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_36, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_36, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_36, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__Var_17;

    {
      check_hlds__unify_proc__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__TypeBody_10, &check_hlds__unify_proc__Var_17);
    }
    if (check_hlds__unify_proc__succeeded)
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for non-canonical type");
          return;
        }
      }
    else
      switch (MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for a foreign type");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__unify_proc__Ctors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)));
            MR_Word check_hlds__unify_proc__DuTypeKind_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 3)));
            MR_Word check_hlds__unify_proc__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 1)));
            MR_Word check_hlds__unify_proc__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 2)));
            MR_Word check_hlds__unify_proc__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 4)));
            MR_Word check_hlds__unify_proc__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 5)));
            MR_Word check_hlds__unify_proc__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
            MR_Word check_hlds__unify_proc__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word check_hlds__unify_proc__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 7)));

            switch (MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_21)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__unify_proc__DuTypeKind_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for enum type");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for dummy type");
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
                        check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_31, check_hlds__unify_proc__Ctors_18, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Index_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_36, check_hlds__unify_proc__STATE_VARIABLE_Info_37);
                      }
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for foreign enum type");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for notag type");
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
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for eqv type");
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
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for a solver type");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for abstract type");
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
    MR_Word check_hlds__unify_proc__Var_23;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_25_25;
    MR_Word check_hlds__unify_proc__Var_26;
    MR_Word check_hlds__unify_proc__Var_27;
    MR_Word check_hlds__unify_proc__Var_29;
    MR_Integer check_hlds__unify_proc__Var_17;
    MR_Box check_hlds__unify_proc__conv4_Var_17;
    MR_Box check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25;

    {
      check_hlds__unify_proc__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_23, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_23, 1) = ((MR_Box) (check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_23, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_9));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_23, 4) = ((MR_Box) (check_hlds__unify_proc__X_11));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_23, 5) = ((MR_Box) (check_hlds__unify_proc__Index_12));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_23, 6) = ((MR_Box) (check_hlds__unify_proc__Context_13));
    }
    {
      mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0, check_hlds__unify_proc__Var_23, check_hlds__unify_proc__Ctors_10, &check_hlds__unify_proc__Disjuncts_16, ((MR_Box) ((MR_Integer) 0)), &check_hlds__unify_proc__conv4_Var_17, ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Info_0_21)), &check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25);
    }
    check_hlds__unify_proc__Var_17 = ((MR_Integer) check_hlds__unify_proc__conv4_Var_17);
    check_hlds__unify_proc__STATE_VARIABLE_Info_25_25 = ((MR_Word) check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25);
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_18);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_18, &check_hlds__unify_proc__GoalInfo_19);
    }
    {
      check_hlds__unify_proc__Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_26, 1) = ((MR_Box) (check_hlds__unify_proc__Disjuncts_16));
    }
    {
      check_hlds__unify_proc__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_20, 0) = ((MR_Box) (check_hlds__unify_proc__Var_26));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_20, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_19));
    }
    {
      check_hlds__unify_proc__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_29, 0) = ((MR_Box) (check_hlds__unify_proc__Index_12));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_27, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_27, 1) = ((MR_Box) (check_hlds__unify_proc__Var_29));
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__Var_27, check_hlds__unify_proc__Goal_20, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_25_25, check_hlds__unify_proc__STATE_VARIABLE_Info_22);
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
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_39,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_40)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__TypeCtor_17;
    MR_Word check_hlds__unify_proc__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__Var_41;

    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_9, &check_hlds__unify_proc__TypeCtor_17);
    }
    {
      check_hlds__unify_proc__Var_41 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__unify_proc__TypeCtor_17);
    }
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Var_41 == (MR_Integer) 0);
    if (check_hlds__unify_proc__succeeded)
      {
        MR_Word check_hlds__unify_proc__Goal_18;
        MR_Word check_hlds__unify_proc__Var_42;
        MR_Word check_hlds__unify_proc__Var_44;

        {
          check_hlds__unify_proc__Goal_18 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
        }
        {
          check_hlds__unify_proc__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_44, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_42, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_42, 1) = ((MR_Box) (check_hlds__unify_proc__Var_44));
        }
        {
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__Var_42, check_hlds__unify_proc__Goal_18, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, check_hlds__unify_proc__STATE_VARIABLE_Info_40);
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
            check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(check_hlds__unify_proc__UserEqComp_19, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, check_hlds__unify_proc__STATE_VARIABLE_Info_40);
          }
        else
          switch (MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__unify_proc__Var_50;

                {
                  check_hlds__unify_proc__Var_50 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                }
                {
                  check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(check_hlds__unify_proc__Var_50, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, check_hlds__unify_proc__STATE_VARIABLE_Info_40);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__unify_proc__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)));
                MR_Word check_hlds__unify_proc__DuTypeKind_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 3)));
                MR_Word check_hlds__unify_proc__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 1)));
                MR_Word check_hlds__unify_proc__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 2)));
                MR_Word check_hlds__unify_proc__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 4)));
                MR_Word check_hlds__unify_proc__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 5)));
                MR_Word check_hlds__unify_proc__Var_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
                MR_Word check_hlds__unify_proc__Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word check_hlds__unify_proc__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 7)));

                switch (MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_23)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(check_hlds__unify_proc__DuTypeKind_23)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word check_hlds__unify_proc__Var_70;
                          MR_Word check_hlds__unify_proc__Var_72;
                          MR_Word check_hlds__unify_proc__Goal_74;

                          {
                            hlds__make_goal__make_simple_test_5_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Goal_74);
                          }
                          {
                            check_hlds__unify_proc__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_72, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            check_hlds__unify_proc__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_70, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_70, 1) = ((MR_Box) (check_hlds__unify_proc__Var_72));
                          }
                          {
                            check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__Var_70, check_hlds__unify_proc__Goal_74, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, check_hlds__unify_proc__STATE_VARIABLE_Info_40);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word check_hlds__unify_proc__Var_64;
                          MR_Word check_hlds__unify_proc__Var_66;
                          MR_Word check_hlds__unify_proc__Goal_75;

                          {
                            check_hlds__unify_proc__Goal_75 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                          }
                          {
                            check_hlds__unify_proc__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_66, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            check_hlds__unify_proc__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_64, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_64, 1) = ((MR_Box) (check_hlds__unify_proc__Var_66));
                          }
                          {
                            check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__Var_64, check_hlds__unify_proc__Goal_75, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, check_hlds__unify_proc__STATE_VARIABLE_Info_40);
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_17, check_hlds__unify_proc__Ctors_20, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, check_hlds__unify_proc__STATE_VARIABLE_Info_40);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__unify_proc__Var_70;
                      MR_Word check_hlds__unify_proc__Var_72;
                      MR_Word check_hlds__unify_proc__Goal_74;

                      {
                        hlds__make_goal__make_simple_test_5_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Goal_74);
                      }
                      {
                        check_hlds__unify_proc__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_72, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        check_hlds__unify_proc__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_70, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_70, 1) = ((MR_Box) (check_hlds__unify_proc__Var_72));
                      }
                      {
                        check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__Var_70, check_hlds__unify_proc__Goal_74, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, check_hlds__unify_proc__STATE_VARIABLE_Info_40);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word check_hlds__unify_proc__ArgType_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 1)));
                      MR_Word check_hlds__unify_proc__IsDummyType_33;
                      MR_Word check_hlds__unify_proc__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 0)));
                      MR_Word check_hlds__unify_proc__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 2)));

                      {
                        check_hlds__unify_proc__IsDummyType_33 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__ArgType_31);
                      }
                      switch (check_hlds__unify_proc__IsDummyType_33) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word check_hlds__unify_proc__Var_60;
                            MR_Word check_hlds__unify_proc__Var_62;
                            MR_Word check_hlds__unify_proc__Goal_76;

                            {
                              check_hlds__unify_proc__Goal_76 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                            }
                            {
                              check_hlds__unify_proc__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_62, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              check_hlds__unify_proc__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_60, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_60, 1) = ((MR_Box) (check_hlds__unify_proc__Var_62));
                            }
                            {
                              check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__Var_60, check_hlds__unify_proc__Goal_76, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, check_hlds__unify_proc__STATE_VARIABLE_Info_40);
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_17, check_hlds__unify_proc__Ctors_20, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, check_hlds__unify_proc__STATE_VARIABLE_Info_40);
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
                MR_Word check_hlds__unify_proc__IsDummyType_84;

                {
                  check_hlds__unify_proc__IsDummyType_84 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__EqvType_34);
                }
                switch (check_hlds__unify_proc__IsDummyType_84) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word check_hlds__unify_proc__Var_54;
                      MR_Word check_hlds__unify_proc__Var_56;
                      MR_Word check_hlds__unify_proc__Goal_81;

                      {
                        check_hlds__unify_proc__Goal_81 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                      }
                      {
                        check_hlds__unify_proc__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_56, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        check_hlds__unify_proc__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_54, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_54, 1) = ((MR_Box) (check_hlds__unify_proc__Var_56));
                      }
                      {
                        check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__Var_54, check_hlds__unify_proc__Goal_81, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, check_hlds__unify_proc__STATE_VARIABLE_Info_40);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(check_hlds__unify_proc__EqvType_34, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, check_hlds__unify_proc__STATE_VARIABLE_Info_40);
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
                    check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, check_hlds__unify_proc__STATE_VARIABLE_Info_40);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      check_hlds__unify_proc__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(check_hlds__unify_proc__ModuleInfo_16);
                    }
                    if (check_hlds__unify_proc__succeeded)
                      {
                        MR_Word check_hlds__unify_proc__TypeCategory_38;

                        {
                          check_hlds__unify_proc__TypeCategory_38 = check_hlds__type_util__classify_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__Type_9);
                        }
                        {
                          check_hlds__unify_proc__generate_builtin_unify_7_p_0(check_hlds__unify_proc__TypeCategory_38, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_39, check_hlds__unify_proc__STATE_VARIABLE_Info_40);
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/8", (MR_String) "trying to create unify proc for abstract type");
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
    MR_Word check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_45;

    {
      check_hlds__unify_proc__generate_du_unify_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__unify_proc__wrapper_arg_1), &check_hlds__unify_proc__conv1_Goal_16, ((MR_Word) check_hlds__unify_proc__wrapper_arg_3), &check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_45);
    }
    *check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv1_Goal_16));
    *check_hlds__unify_proc__wrapper_arg_4 = ((MR_Box) (check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_45));
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
    MR_Word check_hlds__unify_proc__Var_24;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_25_25;
    MR_Word check_hlds__unify_proc__Var_26;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_28_28;
    MR_Word check_hlds__unify_proc__Var_29;
    MR_Word check_hlds__unify_proc__Var_31;
    MR_Word check_hlds__unify_proc__ModuleInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__Globals_43;
    MR_Word check_hlds__unify_proc__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
    MR_Box check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_42, &check_hlds__unify_proc__Globals_43);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_43, (MR_Integer) 277, &check_hlds__unify_proc__CanCompareAsInt_16);
    }
    {
      check_hlds__unify_proc__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_24, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_24, 1) = ((MR_Box) (check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_24, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_9));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_24, 4) = ((MR_Box) (check_hlds__unify_proc__X_11));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_24, 5) = ((MR_Box) (check_hlds__unify_proc__Y_12));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_24, 6) = ((MR_Box) (check_hlds__unify_proc__Context_13));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_24, 7) = ((MR_Box) (check_hlds__unify_proc__CanCompareAsInt_16));
    }
    {
      mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0, check_hlds__unify_proc__Var_24, check_hlds__unify_proc__Ctors_10, &check_hlds__unify_proc__Disjuncts_17, ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Info_0_22)), &check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25);
    }
    check_hlds__unify_proc__STATE_VARIABLE_Info_25_25 = ((MR_Word) check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25);
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_18);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_18, &check_hlds__unify_proc__GoalInfo_19);
    }
    {
      check_hlds__unify_proc__Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_26, 1) = ((MR_Box) (check_hlds__unify_proc__Disjuncts_17));
    }
    {
      check_hlds__unify_proc__Goal0_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_20, 0) = ((MR_Box) (check_hlds__unify_proc__Var_26));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_20, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_19));
    }
    {
      check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Goal0_20, &check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__STATE_VARIABLE_Info_25_25, &check_hlds__unify_proc__STATE_VARIABLE_Info_28_28);
    }
    {
      check_hlds__unify_proc__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_31, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_29, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_29, 1) = ((MR_Box) (check_hlds__unify_proc__Var_31));
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__Var_29, check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, check_hlds__unify_proc__STATE_VARIABLE_Info_23);
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
    MR_Word check_hlds__unify_proc__Var_16;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_19_19;

    {
      check_hlds__unify_proc__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_16, 0) = ((MR_Box) (check_hlds__unify_proc__Y_8));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__ArgVars_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_12, 0) = ((MR_Box) (check_hlds__unify_proc__X_7));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_12, 1) = ((MR_Box) (check_hlds__unify_proc__Var_16));
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
    MR_Word check_hlds__unify_proc__Var_32;
    MR_Word check_hlds__unify_proc__Var_35;
    MR_Word check_hlds__unify_proc__Var_36;
    MR_Word check_hlds__unify_proc__Var_37;
    MR_Word check_hlds__unify_proc__Var_39;
    MR_Word check_hlds__unify_proc__Var_41;
    MR_String check_hlds__unify_proc__NumStr_50;
    MR_String check_hlds__unify_proc__Name_51;
    MR_Word check_hlds__unify_proc__VarSet0_59;
    MR_Word check_hlds__unify_proc__VarTypes0_60;
    MR_Word check_hlds__unify_proc__VarSet_61;
    MR_Word check_hlds__unify_proc__VarTypes_62;
    MR_Word check_hlds__unify_proc__Var_71;
    MR_Word check_hlds__unify_proc__Var_74;
    MR_Word check_hlds__unify_proc__Var_65;
    MR_Word check_hlds__unify_proc__Var_67;
    MR_Word check_hlds__unify_proc__Var_72;
    MR_Word check_hlds__unify_proc__Var_73;

    {
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_50);
    }
    {
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_50, &check_hlds__unify_proc__Name_51);
    }
    check_hlds__unify_proc__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
    check_hlds__unify_proc__VarSet0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
    check_hlds__unify_proc__VarTypes0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_51, &check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__VarSet0_59, &check_hlds__unify_proc__VarSet_61);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__EqvType_8, check_hlds__unify_proc__VarTypes0_60, &check_hlds__unify_proc__VarTypes_62);
    }
    check_hlds__unify_proc__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
    check_hlds__unify_proc__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
    check_hlds__unify_proc__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
    {
      check_hlds__unify_proc__STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (check_hlds__unify_proc__Var_71));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__VarSet_61));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (check_hlds__unify_proc__VarTypes_62));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 3) = ((MR_Box) (check_hlds__unify_proc__Var_74));
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
      check_hlds__unify_proc__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_32, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_15));
    }
    {
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__Var_32, check_hlds__unify_proc__Context_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyGoal_18);
    }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_19);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__GoalInfo0_19, &check_hlds__unify_proc__GoalInfo_20);
    }
    {
      check_hlds__unify_proc__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_37, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyGoal_18));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_36, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_17));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_36, 1) = ((MR_Box) (check_hlds__unify_proc__Var_37));
    }
    {
      check_hlds__unify_proc__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_35, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_16));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_35, 1) = ((MR_Box) (check_hlds__unify_proc__Var_36));
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__Var_35, check_hlds__unify_proc__GoalInfo_20, &check_hlds__unify_proc__Goal_21);
    }
    {
      check_hlds__unify_proc__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_41, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_39, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_39, 1) = ((MR_Box) (check_hlds__unify_proc__Var_41));
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__Var_39, check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_29_29, check_hlds__unify_proc__STATE_VARIABLE_Info_23);
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
    MR_Word check_hlds__unify_proc__Var_35;
    MR_Word check_hlds__unify_proc__Var_38;
    MR_Word check_hlds__unify_proc__Var_29;
    MR_Word check_hlds__unify_proc__Var_31;
    MR_Word check_hlds__unify_proc__Var_36;
    MR_Word check_hlds__unify_proc__Var_37;

    {
      mercury__string__int_to_string_2_p_0(check_hlds__unify_proc__Num_9, &check_hlds__unify_proc__NumStr_12);
    }
    {
      mercury__string__append_3_p_2(check_hlds__unify_proc__BaseName_8, check_hlds__unify_proc__NumStr_12, &check_hlds__unify_proc__Name_13);
    }
    check_hlds__unify_proc__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
    check_hlds__unify_proc__VarSet0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
    check_hlds__unify_proc__VarTypes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_13, check_hlds__unify_proc__Var_10, check_hlds__unify_proc__VarSet0_23, &check_hlds__unify_proc__VarSet_25);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*check_hlds__unify_proc__Var_10, check_hlds__unify_proc__Type_7, check_hlds__unify_proc__VarTypes0_24, &check_hlds__unify_proc__VarTypes_26);
    }
    check_hlds__unify_proc__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
    check_hlds__unify_proc__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
    check_hlds__unify_proc__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__STATE_VARIABLE_Info_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_35));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarSet_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__VarTypes_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Var_38));
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_unify_proc_body\'/7", (MR_String) "trying to create unify proc for abstract noncanonical type");
          return;
        }
      }
    else
      {
        MR_Word check_hlds__unify_proc__MaybeUnify_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UserEqCompare_1, (MR_Integer) 0)));
        MR_Word check_hlds__unify_proc__MaybeCompare_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UserEqCompare_1, (MR_Integer) 1)));
        MR_Word check_hlds__unify_proc__Goal0_32;
        MR_Word check_hlds__unify_proc__Goal_37;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_43_43;
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_65_65;
        MR_Word check_hlds__unify_proc__Var_66;
        MR_Word check_hlds__unify_proc__Var_68;

        if ((check_hlds__unify_proc__MaybeUnify_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((check_hlds__unify_proc__MaybeCompare_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_unify_proc_body\'/7", (MR_String) "MaybeCompare = no");
                return;
              }
            }
          else
            {
              MR_Word check_hlds__unify_proc__ComparePredName_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeCompare_26, (MR_Integer) 0)));
              MR_Word check_hlds__unify_proc__ResultVar_34;
              MR_Word check_hlds__unify_proc__CallGoal_35;
              MR_Word check_hlds__unify_proc__UnifyGoal_36;
              MR_Word check_hlds__unify_proc__Var_42;
              MR_Word check_hlds__unify_proc__Var_44;
              MR_Word check_hlds__unify_proc__Var_45;
              MR_Word check_hlds__unify_proc__Var_46;
              MR_Word check_hlds__unify_proc__Var_50;
              MR_Word check_hlds__unify_proc__Var_54;
              MR_Word check_hlds__unify_proc__Var_56;
              MR_Word check_hlds__unify_proc__Var_57;
              MR_Word check_hlds__unify_proc__PredId_70;
              MR_Integer check_hlds__unify_proc__ModeId_71;
              MR_Word check_hlds__unify_proc__Call_72;
              MR_Word check_hlds__unify_proc__GoalInfo_73;
              MR_Word check_hlds__unify_proc__Var_83;
              MR_Word check_hlds__unify_proc__SymName_87;
              MR_Word check_hlds__unify_proc__Var_89;
              MR_Word check_hlds__unify_proc__Var_90;
              MR_Word check_hlds__unify_proc__Builtin_92;
              MR_Word check_hlds__unify_proc__Var_93;

              {
                check_hlds__unify_proc__Var_42 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
              }
              {
                check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__Var_42, &check_hlds__unify_proc__ResultVar_34, check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, &check_hlds__unify_proc__STATE_VARIABLE_Info_43_43);
              }
              {
                check_hlds__unify_proc__PredId_70 = hlds__hlds_pred__invalid_pred_id_0_f_0();
              }
              {
                check_hlds__unify_proc__ModeId_71 = hlds__hlds_pred__invalid_proc_id_0_f_0();
              }
              {
                check_hlds__unify_proc__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_46, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__unify_proc__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_45, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_45, 1) = ((MR_Box) (check_hlds__unify_proc__Var_46));
              }
              {
                check_hlds__unify_proc__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_44, 0) = ((MR_Box) (check_hlds__unify_proc__ResultVar_34));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_44, 1) = ((MR_Box) (check_hlds__unify_proc__Var_45));
              }
              {
                check_hlds__unify_proc__Call_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_72, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_70));
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_72, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_71));
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_72, 2) = ((MR_Box) (check_hlds__unify_proc__Var_44));
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_72, 3) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_72, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_72, 5) = ((MR_Box) (check_hlds__unify_proc__ComparePredName_33));
              }
              {
                hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_4, &check_hlds__unify_proc__GoalInfo_73);
              }
              {
                check_hlds__unify_proc__CallGoal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CallGoal_35, 0) = ((MR_Box) (check_hlds__unify_proc__Call_72));
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CallGoal_35, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_73));
              }
              {
                check_hlds__unify_proc__Builtin_92 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
              {
                check_hlds__unify_proc__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_93, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_92));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_93, 1) = ((MR_Box) ((MR_String) "comparison_result"));
              }
              {
                check_hlds__unify_proc__Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_89, 0) = ((MR_Box) (check_hlds__unify_proc__Var_93));
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_89, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                check_hlds__unify_proc__Var_90 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
              {
                check_hlds__unify_proc__SymName_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_87, 0) = ((MR_Box) (check_hlds__unify_proc__Var_90));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_87, 1) = ((MR_Box) ((MR_String) "="));
              }
              {
                check_hlds__unify_proc__Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_83, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_87));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_83, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_83, 3) = ((MR_Box) (check_hlds__unify_proc__Var_89));
              }
              {
                check_hlds__unify_proc__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_50, 0) = ((MR_Box) (check_hlds__unify_proc__Var_83));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_50, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__ResultVar_34, check_hlds__unify_proc__Var_50, check_hlds__unify_proc__Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyGoal_36);
              }
              {
                check_hlds__unify_proc__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_57, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyGoal_36));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__unify_proc__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_56, 0) = ((MR_Box) (check_hlds__unify_proc__CallGoal_35));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_56, 1) = ((MR_Box) (check_hlds__unify_proc__Var_57));
              }
              {
                check_hlds__unify_proc__Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_54, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_54, 2) = ((MR_Box) (check_hlds__unify_proc__Var_56));
              }
              {
                check_hlds__unify_proc__Goal0_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_32, 0) = ((MR_Box) (check_hlds__unify_proc__Var_54));
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_32, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_73));
              }
            }
        else
          {
            MR_Word check_hlds__unify_proc__UnifyPredName_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeUnify_25, (MR_Integer) 0)));
            MR_Word check_hlds__unify_proc__PredId_28;
            MR_Integer check_hlds__unify_proc__ModeId_29;
            MR_Word check_hlds__unify_proc__Call_30;
            MR_Word check_hlds__unify_proc__GoalInfo_31;
            MR_Word check_hlds__unify_proc__Var_59;
            MR_Word check_hlds__unify_proc__Var_60;

            {
              check_hlds__unify_proc__PredId_28 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
            {
              check_hlds__unify_proc__ModeId_29 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
            {
              check_hlds__unify_proc__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_60, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__unify_proc__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_59, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_59, 1) = ((MR_Box) (check_hlds__unify_proc__Var_60));
            }
            {
              check_hlds__unify_proc__Call_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_30, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_28));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_30, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_29));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_30, 2) = ((MR_Box) (check_hlds__unify_proc__Var_59));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_30, 3) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_30, 5) = ((MR_Box) (check_hlds__unify_proc__UnifyPredName_27));
            }
            {
              hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_4, &check_hlds__unify_proc__GoalInfo_31);
            }
            {
              check_hlds__unify_proc__Goal0_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_32, 0) = ((MR_Box) (check_hlds__unify_proc__Call_30));
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_32, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_31));
            }
            check_hlds__unify_proc__STATE_VARIABLE_Info_43_43 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
          }
        {
          check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_4, check_hlds__unify_proc__X_2, check_hlds__unify_proc__Y_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Goal0_32, &check_hlds__unify_proc__Goal_37, check_hlds__unify_proc__STATE_VARIABLE_Info_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_65_65);
        }
        {
          check_hlds__unify_proc__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_68, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_66, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_66, 1) = ((MR_Box) (check_hlds__unify_proc__Var_68));
        }
        {
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__Var_66, check_hlds__unify_proc__Goal_37, check_hlds__unify_proc__Context_4, check_hlds__unify_proc__Clause_5, check_hlds__unify_proc__STATE_VARIABLE_Info_65_65, check_hlds__unify_proc__STATE_VARIABLE_Info_7);
        }
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
    MR_Word check_hlds__unify_proc__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__VarTypes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__VarSet_10;
    MR_Word check_hlds__unify_proc__VarTypes_11;
    MR_Word check_hlds__unify_proc__Var_22;
    MR_Word check_hlds__unify_proc__Var_25;
    MR_Word check_hlds__unify_proc__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__Var_23;
    MR_Word check_hlds__unify_proc__Var_24;

    {
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Var_6, check_hlds__unify_proc__VarSet0_8, &check_hlds__unify_proc__VarSet_10);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*check_hlds__unify_proc__Var_6, check_hlds__unify_proc__Type_5, check_hlds__unify_proc__VarTypes0_9, &check_hlds__unify_proc__VarTypes_11);
    }
    check_hlds__unify_proc__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 0)));
    check_hlds__unify_proc__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 1)));
    check_hlds__unify_proc__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__STATE_VARIABLE_UPI_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarSet_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__VarTypes_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Var_25));
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
    MR_Word check_hlds__unify_proc__ModuleInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__Globals_64;
    MR_Word check_hlds__unify_proc__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_63, &check_hlds__unify_proc__Globals_64);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_64, (MR_Integer) 322, &check_hlds__unify_proc__ShouldPretestEq_16);
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
          MR_Word check_hlds__unify_proc__Var_48;
          MR_Word check_hlds__unify_proc__Var_53;
          MR_Word check_hlds__unify_proc__Var_54;
          MR_Word check_hlds__unify_proc__Var_55;
          MR_Word check_hlds__unify_proc__ModuleInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
          MR_Word check_hlds__unify_proc__Globals_72;
          MR_Word check_hlds__unify_proc__CastPointers_73;
          MR_Word check_hlds__unify_proc__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
          MR_Word check_hlds__unify_proc__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
          MR_Word check_hlds__unify_proc__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));

          {
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_71, &check_hlds__unify_proc__Globals_72);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_72, (MR_Integer) 278, &check_hlds__unify_proc__CastPointers_73);
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
            hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 12, check_hlds__unify_proc__CastXGoal0_20, &check_hlds__unify_proc__CastXGoal_22);
          }
          {
            hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 12, check_hlds__unify_proc__CastYGoal0_21, &check_hlds__unify_proc__CastYGoal_23);
          }
          {
            check_hlds__unify_proc__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_48, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_19));
          }
          {
            hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastX_18, check_hlds__unify_proc__Var_48, check_hlds__unify_proc__Context_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__EqualityGoal0_24);
          }
          {
            hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 20, check_hlds__unify_proc__EqualityGoal0_24, &check_hlds__unify_proc__EqualityGoal_25);
          }
          {
            check_hlds__unify_proc__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_55, 0) = ((MR_Box) (check_hlds__unify_proc__EqualityGoal_25));
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__unify_proc__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_54, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_23));
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_54, 1) = ((MR_Box) (check_hlds__unify_proc__Var_55));
          }
          {
            check_hlds__unify_proc__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_53, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_22));
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_53, 1) = ((MR_Box) (check_hlds__unify_proc__Var_54));
          }
          {
            check_hlds__unify_proc__CondGoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 2) = ((MR_Box) (check_hlds__unify_proc__Var_53));
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
              MR_Word check_hlds__unify_proc__Var_57;
              MR_Word check_hlds__unify_proc__SymName_79;
              MR_Word check_hlds__unify_proc__Var_81;
              MR_Word check_hlds__unify_proc__Var_82;
              MR_Word check_hlds__unify_proc__Builtin_84;
              MR_Word check_hlds__unify_proc__Var_85;
              MR_Word check_hlds__unify_proc__Var_33;

              {
                check_hlds__unify_proc__Builtin_84 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
              {
                check_hlds__unify_proc__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_85, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_84));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_85, 1) = ((MR_Box) ((MR_String) "comparison_result"));
              }
              {
                check_hlds__unify_proc__Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_81, 0) = ((MR_Box) (check_hlds__unify_proc__Var_85));
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_81, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                check_hlds__unify_proc__Var_82 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
              {
                check_hlds__unify_proc__SymName_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_79, 0) = ((MR_Box) (check_hlds__unify_proc__Var_82));
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_79, 1) = ((MR_Box) ((MR_String) "="));
              }
              {
                check_hlds__unify_proc__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_57, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_79));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_57, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__Var_57, 3) = ((MR_Box) (check_hlds__unify_proc__Var_81));
              }
              {
                hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_32, check_hlds__unify_proc__Var_57, &check_hlds__unify_proc__EqualGoal_30);
              }
              check_hlds__unify_proc__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__EqualGoal_30, (MR_Integer) 0)));
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
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 19, check_hlds__unify_proc__GoalInfo_31, &check_hlds__unify_proc__FeaturedGoalInfo_37);
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
check_hlds__unify_proc__info_new_named_var_5_p_0(
  MR_Word check_hlds__unify_proc__Type_6,
  MR_String check_hlds__unify_proc__Name_7,
  MR_Word * check_hlds__unify_proc__Var_8,
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14,
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_15)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;
    MR_Word check_hlds__unify_proc__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__VarSet_12;
    MR_Word check_hlds__unify_proc__VarTypes_13;
    MR_Word check_hlds__unify_proc__Var_24;
    MR_Word check_hlds__unify_proc__Var_27;
    MR_Word check_hlds__unify_proc__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__Var_25;
    MR_Word check_hlds__unify_proc__Var_26;

    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_7, check_hlds__unify_proc__Var_8, check_hlds__unify_proc__VarSet0_10, &check_hlds__unify_proc__VarSet_12);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*check_hlds__unify_proc__Var_8, check_hlds__unify_proc__Type_6, check_hlds__unify_proc__VarTypes0_11, &check_hlds__unify_proc__VarTypes_13);
    }
    check_hlds__unify_proc__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 0)));
    check_hlds__unify_proc__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 1)));
    check_hlds__unify_proc__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__STATE_VARIABLE_UPI_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarSet_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__VarTypes_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Var_27));
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
    MR_Word check_hlds__unify_proc__Var_22;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_45_45;

    {
      check_hlds__unify_proc__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_22, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__unify_proc__ArgVars_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 1) = ((MR_Box) (check_hlds__unify_proc__Var_22));
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_unify\'/7", (MR_String) "bad ctor category");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unify_proc__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__CtorCat_8, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) check_hlds__unify_proc__Var_47)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(check_hlds__unify_proc__Var_47)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_float";
                  break;
                case (MR_Integer) 1:
                  check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_character";
                  break;
                case (MR_Integer) 2:
                  check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_string";
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__unify_proc__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_47, (MR_Integer) 0)));

                check_hlds__unify_proc__Name_15 = ((&check_hlds__unify_proc_vector_common_7[0 + check_hlds__unify_proc__Var_48]))->check_hlds__unify_proc__vector_common_type_7_0__vct_7_f_0;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_unify\'/7", (MR_String) "bad ctor category");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_unify\'/7", (MR_String) "bad ctor category");
            return;
          }
        }
        break;
    }
    {
      check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__Name_15, check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__UnifyGoal_19, check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, &check_hlds__unify_proc__STATE_VARIABLE_Info_45_45);
    }
    {
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__UnifyGoal_19, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_45_45, check_hlds__unify_proc__STATE_VARIABLE_Info_21);
    }
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
    MR_Word check_hlds__unify_proc__Varset0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__Types0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__RttiVarMaps0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
    MR_Word check_hlds__unify_proc__Goal_16;
    MR_Word check_hlds__unify_proc__Varset_17;
    MR_Word check_hlds__unify_proc__Types_18;
    MR_Word check_hlds__unify_proc__RttiVarMaps_19;
    MR_Word check_hlds__unify_proc__Var_49;
    MR_Word check_hlds__unify_proc__Var_58;
    MR_Word check_hlds__unify_proc__Var_59;
    MR_Word check_hlds__unify_proc__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
    MR_Word check_hlds__unify_proc___Warnings_15;
    MR_Word check_hlds__unify_proc__Var_50;
    MR_Word check_hlds__unify_proc__Var_51;
    MR_Word check_hlds__unify_proc__Var_52;

    {
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, check_hlds__unify_proc__HeadVars_7, &check_hlds__unify_proc___Warnings_15, check_hlds__unify_proc__Goal0_8, &check_hlds__unify_proc__Goal_16, check_hlds__unify_proc__Varset0_12, &check_hlds__unify_proc__Varset_17, check_hlds__unify_proc__Types0_13, &check_hlds__unify_proc__Types_18, check_hlds__unify_proc__RttiVarMaps0_14, &check_hlds__unify_proc__RttiVarMaps_19);
    }
    check_hlds__unify_proc__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
    check_hlds__unify_proc__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
    check_hlds__unify_proc__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
    check_hlds__unify_proc__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
    check_hlds__unify_proc__Var_58 = check_hlds__unify_proc__Var_49;
    check_hlds__unify_proc__Var_59 = check_hlds__unify_proc__Varset_17;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__unify_proc__STATE_VARIABLE_Info_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_58));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__Var_59));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__Types_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_19));
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
    MR_Word check_hlds__unify_proc__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    MR_Integer check_hlds__unify_proc__Arity_13;
    MR_Word check_hlds__unify_proc__MercuryBuiltin_16;
    MR_Word check_hlds__unify_proc__Var_24;
    MR_Word check_hlds__unify_proc__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    MR_Word check_hlds__unify_proc__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    MR_Word check_hlds__unify_proc__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    MR_Integer check_hlds__unify_proc__Var_27;
    MR_Word check_hlds__unify_proc__Var_14;
    MR_String check_hlds__unify_proc__Var_15;

    {
      mercury__list__length_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], check_hlds__unify_proc__ArgVars_8, &check_hlds__unify_proc__Arity_13);
    }
    {
      check_hlds__unify_proc__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&check_hlds__unify_proc__Var_14, check_hlds__unify_proc__Name_7, &check_hlds__unify_proc__Var_15, &check_hlds__unify_proc__Var_27);
    }
    if (check_hlds__unify_proc__succeeded)
      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Arity_13 == check_hlds__unify_proc__Var_27);
    if (check_hlds__unify_proc__succeeded)
      {
        check_hlds__unify_proc__MercuryBuiltin_16 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      }
    else
      {
        check_hlds__unify_proc__MercuryBuiltin_16 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      }
    {
      check_hlds__unify_proc__Var_24 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__unify_proc__MercuryBuiltin_16, check_hlds__unify_proc__Name_7, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_4[2]), (MR_Integer) 6, (MR_Integer) 0, check_hlds__unify_proc__ArgVars_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Var_24, check_hlds__unify_proc__ModuleInfo_12, check_hlds__unify_proc__Context_9, check_hlds__unify_proc__Goal_10);
    }
    *check_hlds__unify_proc__STATE_VARIABLE_Info_18 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_17;
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
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__204__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))));
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
    MR_Word check_hlds__unify_proc__Var_32;
    MR_Word check_hlds__unify_proc__SpecialPredMaps_47;
    MR_Word check_hlds__unify_proc__PredInfo0_48;
    MR_Word check_hlds__unify_proc__PredInfo1_49;
    MR_Word check_hlds__unify_proc__ErrorProcs_50;
    MR_Word check_hlds__unify_proc__PredInfo_51;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_53;
    MR_Word check_hlds__unify_proc__Var_54;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35_58;

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
      check_hlds__unify_proc__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_32, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_32, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_32, 3) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_32, 4) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_5));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_32, 5) = ((MR_Box) (check_hlds__unify_proc__TypeBody_10));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_32, 6) = ((MR_Box) (check_hlds__unify_proc__TypeStatus_30));
    }
    {
      mercury__require__expect_3_p_0(check_hlds__unify_proc__Var_32, (MR_String) "predicate \140check_hlds.unify_proc.collect_type_defn\'/6", (MR_String) "not generated lazily");
    }
    {
      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__unify_proc__KindMap_29, check_hlds__unify_proc__TypeParams_28, &check_hlds__unify_proc__TypeArgs_31);
    }
    {
      parse_tree__prog_type__construct_type_3_p_0(check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeArgs_31, &check_hlds__unify_proc__Type_8);
    }
    {
      hlds__make_hlds__add_special_pred_decl_for_real_8_p_0((MR_Integer) 2, check_hlds__unify_proc__TVarSet_9, check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__Context_11, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_4[1]))), check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_53);
    }
    {
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_53, &check_hlds__unify_proc__SpecialPredMaps_47);
    }
    {
      hlds__special_pred__lookup_special_pred_maps_4_p_0(check_hlds__unify_proc__SpecialPredMaps_47, (MR_Integer) 2, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__PredId_6);
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_53, *check_hlds__unify_proc__PredId_6, &check_hlds__unify_proc__PredInfo0_48);
    }
    {
      check_hlds__post_typecheck__setup_vartypes_in_clauses_for_imported_pred_2_p_0(check_hlds__unify_proc__PredInfo0_48, &check_hlds__unify_proc__PredInfo1_49);
    }
    {
      check_hlds__post_typecheck__propagate_types_into_modes_4_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_53, &check_hlds__unify_proc__ErrorProcs_50, check_hlds__unify_proc__PredInfo1_49, &check_hlds__unify_proc__PredInfo_51);
    }
    {
      check_hlds__unify_proc__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_54, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_54, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_54, 3) = ((MR_Box) (check_hlds__unify_proc__ErrorProcs_50));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_54, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_3_p_0(check_hlds__unify_proc__Var_54, (MR_String) "predicate \140check_hlds.unify_proc.add_lazily_generated_special_pred\'/11", (MR_String) "ErrorProcs != []");
    }
    {
      hlds__hlds_module__module_info_set_pred_info_4_p_0(*check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__PredInfo_51, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_53, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35_58);
    }
    {
      check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(*check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35_58, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_14);
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
      check_hlds__unify_proc__conv0_LambdaHeadVar__2_38 = check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__120__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
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
        MR_Word check_hlds__unify_proc__Var_36;
        MR_Word check_hlds__unify_proc__Var_42;
        MR_Word check_hlds__unify_proc__Var_43;
        MR_Word check_hlds__unify_proc__Var_46;
        MR_Word check_hlds__unify_proc__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_5, (MR_Integer) 0)));

        {
          mercury__varset__init_1_p_0(check_hlds__unify_proc__TypeCtorInfo_55_55, &check_hlds__unify_proc__TVarSet0_10);
        }
        {
          mercury__varset__new_vars_4_p_0(check_hlds__unify_proc__TypeCtorInfo_55_55, check_hlds__unify_proc__TupleArity_9, &check_hlds__unify_proc__TupleArgTVars_11, check_hlds__unify_proc__TVarSet0_10, &check_hlds__unify_proc__TVarSet_12);
        }
        {
          check_hlds__unify_proc__Var_36 = mercury__map__init_0_f_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
        {
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__unify_proc__Var_36, check_hlds__unify_proc__TupleArgTVars_11, &check_hlds__unify_proc__TupleArgTypes_13);
        }
        {
          check_hlds__unify_proc__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__ConsId_22, 1) = ((MR_Box) (check_hlds__unify_proc__TupleArity_9));
        }
        {
          check_hlds__unify_proc__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_43, 0) = ((MR_Box) (check_hlds__unify_proc__ConsId_22));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_42, 0) = ((MR_Box) (check_hlds__unify_proc__Var_43));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__from_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, check_hlds__unify_proc__Var_42, &check_hlds__unify_proc__ConsTagValues_23);
        }
        {
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TupleArgTypes_13, &check_hlds__unify_proc__Type_31);
        }
        {
          mercury__term__context_init_1_p_0(&check_hlds__unify_proc__Context_18);
        }
        {
          check_hlds__unify_proc__MakeUnamedField_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[0]));
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
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 2) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 3) = ((MR_Box) (check_hlds__unify_proc__CtorArgs_19));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 4) = ((MR_Box) (check_hlds__unify_proc__TupleArity_9));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 5) = ((MR_Box) (check_hlds__unify_proc__Context_18));
        }
        {
          check_hlds__unify_proc__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_46, 0) = ((MR_Box) (check_hlds__unify_proc__Ctor_21));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__unify_proc__TypeBody_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 0) = ((MR_Box) (check_hlds__unify_proc__Var_46));
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
        MR_Word check_hlds__unify_proc__Var_74;

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
          check_hlds__unify_proc__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_74, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_74, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_74, 3) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_74, 4) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_5));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_74, 5) = ((MR_Box) (check_hlds__unify_proc__TypeBody_30));
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_74, 6) = ((MR_Box) (check_hlds__unify_proc__TypeStatus_72));
        }
        {
          mercury__require__expect_3_p_0(check_hlds__unify_proc__Var_74, (MR_String) "predicate \140check_hlds.unify_proc.collect_type_defn\'/6", (MR_String) "not generated lazily");
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
        check_hlds__unify_proc__TypeStatus_32 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_4[1])));
        check_hlds__unify_proc__Item_33 = (MR_Integer) 0;
      }
    {
      check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0((MR_Integer) 0, check_hlds__unify_proc__Item_33, check_hlds__unify_proc__TVarSet_12, check_hlds__unify_proc__Type_31, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeBody_30, check_hlds__unify_proc__Context_18, check_hlds__unify_proc__TypeStatus_32, check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35);
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
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__204__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))));
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
    MR_Word check_hlds__unify_proc__Var_31;
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35_35;

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
          MR_Word check_hlds__unify_proc__SpecialPredMaps_38;
          MR_Word check_hlds__unify_proc__PredInfo0_39;

          {
            hlds__make_hlds__add_special_pred_decl_for_real_8_p_0(check_hlds__unify_proc__SpecialId_12, check_hlds__unify_proc__TVarSet_14, check_hlds__unify_proc__Type_15, check_hlds__unify_proc__TypeCtor_16, check_hlds__unify_proc__Context_18, check_hlds__unify_proc__TypeStatus_19, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_27, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_30);
          }
          {
            hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__unify_proc__SpecialPredMaps_38);
          }
          {
            hlds__special_pred__lookup_special_pred_maps_4_p_0(check_hlds__unify_proc__SpecialPredMaps_38, check_hlds__unify_proc__SpecialId_12, check_hlds__unify_proc__TypeCtor_16, check_hlds__unify_proc__PredId_20);
          }
          {
            hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_30, *check_hlds__unify_proc__PredId_20, &check_hlds__unify_proc__PredInfo0_39);
          }
          {
            check_hlds__post_typecheck__setup_vartypes_in_clauses_for_imported_pred_2_p_0(check_hlds__unify_proc__PredInfo0_39, &check_hlds__unify_proc__PredInfo1_24);
          }
        }
        break;
    }
    {
      check_hlds__post_typecheck__propagate_types_into_modes_4_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__unify_proc__ErrorProcs_25, check_hlds__unify_proc__PredInfo1_24, &check_hlds__unify_proc__PredInfo_26);
    }
    {
      check_hlds__unify_proc__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_31, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_31, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_31, 3) = ((MR_Box) (check_hlds__unify_proc__ErrorProcs_25));
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Var_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_3_p_0(check_hlds__unify_proc__Var_31, (MR_String) "predicate \140check_hlds.unify_proc.add_lazily_generated_special_pred\'/11", (MR_String) "ErrorProcs != []");
    }
    {
      hlds__hlds_module__module_info_set_pred_info_4_p_0(*check_hlds__unify_proc__PredId_20, check_hlds__unify_proc__PredInfo_26, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_30_30, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35_35);
    }
    {
      check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(*check_hlds__unify_proc__PredId_20, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35_35, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_28);
    }
  }
}

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
check_hlds__unify_proc____Unify____typed_var_pair_0_0_10001(
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
{
  {
    MR_bool check_hlds__unify_proc__succeeded;

    {
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____typed_var_pair_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
    return check_hlds__unify_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____typed_var_pair_0_0_10001(
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
{
  {
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

    {
      check_hlds__unify_proc____Compare____typed_var_pair_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
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

void mercury__check_hlds__unify_proc__init(void)
{
}

void mercury__check_hlds__unify_proc__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_linear_or_quad_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_pred_item_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0);
}

void mercury__check_hlds__unify_proc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__unify_proc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.unify_proc. */
